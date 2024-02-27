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
struct sLambdaNode
{
    struct sFun* mFun;
    int sline;
    char* sname;
};
struct sFunNode
{
    struct sFun* mFun;
    int sline;
    char* sname;
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

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info);

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info);

_Bool sLambdaNode_terminated();

char* sLambdaNode_kind();

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);

static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);

static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
int sFunNode_sline(struct sFunNode* self, struct sInfo* info);

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info);

_Bool sFunNode_terminated();

char* sFunNode_kind();

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);

static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
void arrange_stack(struct sInfo* info, int top);

int expected_next_character(char c, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

char* parse_attribute(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

int transpile_v5(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool is_type_name(char* buf, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sNode* parse_function(struct sInfo* info);

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
char* __dec_obj6;
struct sLambdaNode* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
    self->mFun=fun;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result7__ = __result_obj__ = self;
    come_call_finalizer2(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer2(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
int __result8__;
memset(&__result_obj__, 0, sizeof(void*));
    __result8__ = self->sline;
    return __result8__;
}

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value10;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
    __result9__ = __result_obj__ = ((char*)(right_value10=__builtin_string(self->sname)));
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result9__;
}

_Bool sLambdaNode_terminated(){
void* __result_obj__;
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
    __result10__ = (_Bool)0;
    return __result10__;
}

char* sLambdaNode_kind(){
void* __result_obj__;
void* right_value11;
char* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
    __result11__ = __result_obj__ = ((char*)(right_value11=__builtin_string("sLambdaNode")));
    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result11__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_5;
void* right_value12;
void* right_value13;
struct sType* result_type_6;
void* right_value14;
void* right_value15;
_Bool _if_conditional22;
void* right_value16;
struct CVALUE* come_value_13;
void* right_value17;
char* __dec_obj7;
void* right_value52;
struct sType* __dec_obj30;
_Bool __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_5, 0, sizeof(struct sFun*));
right_value12 = (void*)0;
right_value13 = (void*)0;
memset(&result_type_6, 0, sizeof(struct sType*));
right_value14 = (void*)0;
right_value15 = (void*)0;
right_value16 = (void*)0;
memset(&come_value_13, 0, sizeof(struct CVALUE*));
right_value17 = (void*)0;
right_value52 = (void*)0;
    come_fun_5=info->come_fun;
    info->come_fun=self->mFun;
    result_type_6=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value12=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 43, "struct sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value14=make_define_var(result_type_6,"__result_obj__",(_Bool)0,info))));
    right_value14 = come_decrement_ref_count2(right_value14, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value15=make_type_name_string(result_type_6,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    come_value_13=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value16=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function2.c", 52, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj7=come_value_13->c_value;
    come_value_13->c_value=(char*)come_increment_ref_count(((char*)(right_value17=xsprintf("%s",self->mFun->mName))));
    __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj30=come_value_13->type;
    come_value_13->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_clone(self->mFun->mLambdaType))));
    come_call_finalizer2(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_13->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_13->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_13));
    info->come_fun=come_fun_5;
    __result31__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result31__;
    come_call_finalizer2(sType_finalize,result_type_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional6=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional6) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional8=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional8) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional9=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional9) {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional10=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional10) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional12=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional12) {
            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional14=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional14) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional15=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional15) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional17=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional17) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional18=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional18) {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional19=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional19) {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional20=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional20) {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional21=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional21) {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional7) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_7;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_7, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1sTypeph*));
                it_7=self->head;
                while(_while_condtional1=it_7!=((void*)0),                _while_condtional1) {
                    prev_it_8=it_7;
                    it_7=it_7->next;
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional11) {
                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_9;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_9, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_10, 0, sizeof(struct list_item$1sNodeph*));
                it_9=self->head;
                while(_while_condtional2=it_9!=((void*)0),                _while_condtional2) {
                    prev_it_10=it_9;
                    it_9=it_9->next;
                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional13) {
                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_11;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_11, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1charph*));
                it_11=self->head;
                while(_while_condtional3=it_11!=((void*)0),                _while_condtional3) {
                    prev_it_12=it_11;
                    it_11=it_11->next;
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional16) {
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional23=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional23) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional24=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional24) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional25;
struct sType* __result12__;
void* right_value18;
struct sType* result_14;
_Bool _if_conditional26;
_Bool _if_conditional27;
void* right_value21;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional31;
void* right_value22;
struct tuple1$1sTypeph* __dec_obj10;
_Bool _if_conditional32;
void* right_value23;
char* __dec_obj11;
_Bool _if_conditional33;
void* right_value30;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional37;
void* right_value38;
struct list$1sNodeph* __dec_obj19;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value39;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional52;
void* right_value46;
struct list$1charph* __dec_obj24;
_Bool _if_conditional56;
void* right_value47;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional57;
_Bool _if_conditional58;
void* right_value48;
struct sNode* __dec_obj26;
_Bool _if_conditional59;
_Bool _if_conditional60;
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
void* right_value49;
struct sNode* __dec_obj27;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value50;
char* __dec_obj28;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
void* right_value51;
char* __dec_obj29;
struct sType* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_14, 0, sizeof(struct sType*));
right_value21 = (void*)0;
right_value22 = (void*)0;
right_value23 = (void*)0;
right_value30 = (void*)0;
right_value38 = (void*)0;
right_value39 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
right_value48 = (void*)0;
right_value49 = (void*)0;
right_value50 = (void*)0;
right_value51 = (void*)0;
        if(_if_conditional25=self==(void*)0,        _if_conditional25) {
            __result12__ = __result_obj__ = (void*)0;
            return __result12__;
        }
        result_14=(struct sType*)come_increment_ref_count(((struct sType*)(right_value18=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        come_call_finalizer2(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional26=self!=((void*)0),        _if_conditional26) {
            result_14->mClass=self->mClass;
        }
        if(_if_conditional27=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional27) {
            __dec_obj9=result_14->mNoSolvedGenericsType;
            result_14->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value21=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional31=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional31) {
            __dec_obj10=result_14->mOriginalLoadVarType;
            result_14->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value22=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional32=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional32) {
            __dec_obj11=result_14->mGenericsName;
            result_14->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value23=string_clone(self->mGenericsName))));
            __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional33=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional33) {
            __dec_obj15=result_14->mGenericsTypes;
            result_14->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value30=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional37=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional37) {
            __dec_obj19=result_14->mArrayNum;
            result_14->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value38=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional50=self!=((void*)0),        _if_conditional50) {
            result_14->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional51=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional51) {
            __dec_obj20=result_14->mParamTypes;
            result_14->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value39=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional52) {
            __dec_obj24=result_14->mParamNames;
            result_14->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional56=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional56) {
            __dec_obj25=result_14->mResultType;
            result_14->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value47=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_14->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional58=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional58) {
            __dec_obj26=result_14->mAlignas;
            result_14->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value48=sNode_clone(self->mAlignas))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value48) { right_value48 = come_decrement_ref_count2(right_value48, ((struct sNode*)right_value48)->finalize, ((struct sNode*)right_value48)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_14->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_14->mShort=self->mShort;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_14->mLong=self->mLong;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_14->mLongLong=self->mLongLong;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_14->mConstant=self->mConstant;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_14->mRegister=self->mRegister;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_14->mVolatile=self->mVolatile;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_14->mStatic=self->mStatic;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_14->mExtern=self->mExtern;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_14->mRestrict=self->mRestrict;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_14->mImmutable=self->mImmutable;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_14->mHeap=self->mHeap;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_14->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_14->mDelegate=self->mDelegate;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_14->mShare=self->mShare;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_14->mClone=self->mClone;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_14->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_14->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_14->mRefference=self->mRefference;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_14->mException=self->mException;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_14->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_14->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_14->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional82=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional82) {
            __dec_obj27=result_14->mSizeNum;
            result_14->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=sNode_clone(self->mSizeNum))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value49) { right_value49 = come_decrement_ref_count2(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_14->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_14->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional85=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional85) {
            __dec_obj28=result_14->mOriginalTypeName;
            result_14->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value50=string_clone(self->mOriginalTypeName))));
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_14->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_14->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_14->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_14->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_14->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_14->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_14->mInline=self->mInline;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_14->mNullValue=self->mNullValue;
        }
        if(_if_conditional94=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional94) {
            __dec_obj29=result_14->mAsmName;
            result_14->mAsmName=(char*)come_increment_ref_count(((char*)(right_value51=string_clone(self->mAsmName))));
            __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result29__ = __result_obj__ = result_14;
        come_call_finalizer2(sType_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result29__;
        come_call_finalizer2(sType_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional28;
struct tuple1$1sTypeph* __result13__;
void* right_value19;
struct tuple1$1sTypeph* result_15;
_Bool _if_conditional30;
void* right_value20;
struct sType* __dec_obj8;
struct tuple1$1sTypeph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
memset(&result_15, 0, sizeof(struct tuple1$1sTypeph*));
right_value20 = (void*)0;
                if(_if_conditional28=self==(void*)0,                _if_conditional28) {
                    __result13__ = __result_obj__ = (void*)0;
                    return __result13__;
                }
                result_15=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value19=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional30=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional30) {
                    __dec_obj8=result_15->v1;
                    result_15->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value20=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result14__ = __result_obj__ = result_15;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result14__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional29=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional29) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional34;
struct list$1sTypeph* __result15__;
void* right_value24;
void* right_value25;
struct list$1sTypeph* result_16;
struct list_item$1sTypeph* it_17;
_Bool _while_condtional4;
void* right_value29;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
right_value25 = (void*)0;
memset(&result_16, 0, sizeof(struct list$1sTypeph*));
memset(&it_17, 0, sizeof(struct list_item$1sTypeph*));
right_value29 = (void*)0;
                if(_if_conditional34=self==((void*)0),                _if_conditional34) {
                    __result15__ = __result_obj__ = ((void*)0);
                    return __result15__;
                }
                result_16=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value25=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value24=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_17=self->head;
                while(_while_condtional4=it_17!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_16,(struct sType*)come_increment_ref_count(((struct sType*)(right_value29=sType_clone(it_17->item)))));
                    come_call_finalizer2(sType_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_17=it_17->next;
                }
                __result18__ = __result_obj__ = result_16;
                come_call_finalizer2(list$1sTypephp_finalize,result_16, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result18__;
                come_call_finalizer2(list$1sTypephp_finalize,result_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result16__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result16__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional35;
void* right_value26;
struct list_item$1sTypeph* litem_18;
struct sType* __dec_obj12;
_Bool _if_conditional36;
void* right_value27;
struct list_item$1sTypeph* litem_19;
struct sType* __dec_obj13;
void* right_value28;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj14;
struct list$1sTypeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1sTypeph*));
right_value27 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1sTypeph*));
right_value28 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional35=self->len==0,                        _if_conditional35) {
                            litem_18=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value26=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_18->prev=((void*)0);
                            litem_18->next=((void*)0);
                            __dec_obj12=litem_18->item;
                            litem_18->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_18;
                            self->head=litem_18;
                        }
                        else {
                            if(_if_conditional36=self->len==1,                            _if_conditional36) {
                                litem_19=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value27=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_19->prev=self->head;
                                litem_19->next=((void*)0);
                                __dec_obj13=litem_19->item;
                                litem_19->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_19;
                                self->head->next=litem_19;
                            }
                            else {
                                litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value28=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_20->prev=self->tail;
                                litem_20->next=((void*)0);
                                __dec_obj14=litem_20->item;
                                litem_20->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_20;
                                self->tail=litem_20;
                            }
                        }
                        self->len++;
                        __result17__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result17__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional38;
struct list$1sNodeph* __result19__;
void* right_value31;
void* right_value32;
struct list$1sNodeph* result_21;
struct list_item$1sNodeph* it_22;
_Bool _while_condtional5;
void* right_value37;
struct list$1sNodeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
memset(&result_21, 0, sizeof(struct list$1sNodeph*));
memset(&it_22, 0, sizeof(struct list_item$1sNodeph*));
right_value37 = (void*)0;
                if(_if_conditional38=self==((void*)0),                _if_conditional38) {
                    __result19__ = __result_obj__ = ((void*)0);
                    return __result19__;
                }
                result_21=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value32=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value31=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_22=self->head;
                while(_while_condtional5=it_22!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_21,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value37=sNode_clone(it_22->item)))));
                    if(right_value37) { right_value37 = come_decrement_ref_count2(right_value37, ((struct sNode*)right_value37)->finalize, ((struct sNode*)right_value37)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_22=it_22->next;
                }
                __result24__ = __result_obj__ = result_21;
                come_call_finalizer2(list$1sNodephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result24__;
                come_call_finalizer2(list$1sNodephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result20__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result20__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional39;
void* right_value33;
struct list_item$1sNodeph* litem_23;
struct sNode* __dec_obj16;
_Bool _if_conditional40;
void* right_value34;
struct list_item$1sNodeph* litem_24;
struct sNode* __dec_obj17;
void* right_value35;
struct list_item$1sNodeph* litem_25;
struct sNode* __dec_obj18;
struct list$1sNodeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value33 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1sNodeph*));
right_value34 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1sNodeph*));
right_value35 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional39=self->len==0,                        _if_conditional39) {
                            litem_23=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value33=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_23->prev=((void*)0);
                            litem_23->next=((void*)0);
                            __dec_obj16=litem_23->item;
                            litem_23->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_23;
                            self->head=litem_23;
                        }
                        else {
                            if(_if_conditional40=self->len==1,                            _if_conditional40) {
                                litem_24=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value34=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_24->prev=self->head;
                                litem_24->next=((void*)0);
                                __dec_obj17=litem_24->item;
                                litem_24->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_24;
                                self->head->next=litem_24;
                            }
                            else {
                                litem_25=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value35=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_25->prev=self->tail;
                                litem_25->next=((void*)0);
                                __dec_obj18=litem_25->item;
                                litem_25->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_25;
                                self->tail=litem_25;
                            }
                        }
                        self->len++;
                        __result21__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result21__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional41;
struct sNode* __result22__;
void* right_value36;
struct sNode* result_26;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
struct sNode* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
memset(&result_26, 0, sizeof(struct sNode*));
                        if(_if_conditional41=self==(void*)0,                        _if_conditional41) {
                            __result22__ = __result_obj__ = (void*)0;
                            return __result22__;
                        }
                        result_26=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value36) { right_value36 = come_decrement_ref_count2(right_value36, ((struct sNode*)right_value36)->finalize, ((struct sNode*)right_value36)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional42=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional42) {
                            result_26->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_26->finalize=self->finalize;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_26->clone=self->clone;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_26->compile=self->compile;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_26->sline=self->sline;
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_26->sname=self->sname;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_26->terminated=self->terminated;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_26->kind=self->kind;
                        }
                        __result23__ = __result_obj__ = result_26;
                        if(result_26) { result_26 = come_decrement_ref_count2(result_26, ((struct sNode*)result_26)->finalize, ((struct sNode*)result_26)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result23__;
                        if(result_26) { result_26 = come_decrement_ref_count2(result_26, ((struct sNode*)result_26)->finalize, ((struct sNode*)result_26)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional53;
struct list$1charph* __result25__;
void* right_value40;
void* right_value41;
struct list$1charph* result_27;
struct list_item$1charph* it_28;
_Bool _while_condtional6;
void* right_value45;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value40 = (void*)0;
right_value41 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1charph*));
memset(&it_28, 0, sizeof(struct list_item$1charph*));
right_value45 = (void*)0;
                if(_if_conditional53=self==((void*)0),                _if_conditional53) {
                    __result25__ = __result_obj__ = ((void*)0);
                    return __result25__;
                }
                result_27=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value41=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value40=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_28=self->head;
                while(_while_condtional6=it_28!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_27,(char*)come_increment_ref_count(((char*)(right_value45=string_clone(it_28->item)))));
                    right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_28=it_28->next;
                }
                __result28__ = __result_obj__ = result_27;
                come_call_finalizer2(list$1charphp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result28__;
                come_call_finalizer2(list$1charphp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result26__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result26__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional54;
void* right_value42;
struct list_item$1charph* litem_29;
char* __dec_obj21;
_Bool _if_conditional55;
void* right_value43;
struct list_item$1charph* litem_30;
char* __dec_obj22;
void* right_value44;
struct list_item$1charph* litem_31;
char* __dec_obj23;
struct list$1charph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1charph*));
right_value43 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1charph*));
right_value44 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional54=self->len==0,                        _if_conditional54) {
                            litem_29=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value42=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_29->prev=((void*)0);
                            litem_29->next=((void*)0);
                            __dec_obj21=litem_29->item;
                            litem_29->item=(char*)come_increment_ref_count(item);
                            __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_29;
                            self->head=litem_29;
                        }
                        else {
                            if(_if_conditional55=self->len==1,                            _if_conditional55) {
                                litem_30=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value43=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_30->prev=self->head;
                                litem_30->next=((void*)0);
                                __dec_obj22=litem_30->item;
                                litem_30->item=(char*)come_increment_ref_count(item);
                                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_30;
                                self->head->next=litem_30;
                            }
                            else {
                                litem_31=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value44=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_31->prev=self->tail;
                                litem_31->next=((void*)0);
                                __dec_obj23=litem_31->item;
                                litem_31->item=(char*)come_increment_ref_count(item);
                                __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_31;
                                self->tail=litem_31;
                            }
                        }
                        self->len++;
                        __result27__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result27__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional95;
void* right_value53;
struct list_item$1CVALUEph* litem_32;
struct CVALUE* __dec_obj31;
_Bool _if_conditional97;
void* right_value54;
struct list_item$1CVALUEph* litem_33;
struct CVALUE* __dec_obj32;
void* right_value55;
struct list_item$1CVALUEph* litem_34;
struct CVALUE* __dec_obj33;
struct list$1CVALUEph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1CVALUEph*));
right_value54 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1CVALUEph*));
right_value55 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional95=self->len==0,        _if_conditional95) {
            litem_32=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value53=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 225, "struct list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_32->prev=((void*)0);
            litem_32->next=((void*)0);
            __dec_obj31=litem_32->item;
            litem_32->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_32;
            self->head=litem_32;
        }
        else {
            if(_if_conditional97=self->len==1,            _if_conditional97) {
                litem_33=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value54=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 235, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_33->prev=self->head;
                litem_33->next=((void*)0);
                __dec_obj32=litem_33->item;
                litem_33->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_33;
                self->head->next=litem_33;
            }
            else {
                litem_34=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value55=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 245, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_34->prev=self->tail;
                litem_34->next=((void*)0);
                __dec_obj33=litem_34->item;
                litem_34->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_34;
                self->tail=litem_34;
            }
        }
        self->len++;
        __result30__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result30__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional96;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional96=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional96) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
struct sFun* __dec_obj34;
char* __dec_obj35;
struct sFunNode* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj34=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer2(sFun_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj35=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result32__ = __result_obj__ = self;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result32__;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional98=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional98) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional99=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional99) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional100=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional100) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional101=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional101) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional102=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional102) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional103=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional103) {
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional104=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional104) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional107=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional107) {
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional108=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional108) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional109=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional109) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional110=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional110) {
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional111=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional111) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional112=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional112) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional105;
_Bool _if_conditional106;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional105=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional105) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional106=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional106) {
                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

int sFunNode_sline(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
int __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    __result33__ = self->sline;
    return __result33__;
}

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value56;
char* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
    __result34__ = __result_obj__ = ((char*)(right_value56=__builtin_string(self->sname)));
    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result34__;
}

_Bool sFunNode_terminated(){
void* __result_obj__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    __result35__ = (_Bool)0;
    return __result35__;
}

char* sFunNode_kind(){
void* __result_obj__;
void* right_value57;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
    __result36__ = __result_obj__ = ((char*)(right_value57=__builtin_string("sFunNode")));
    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
}

void caller_begin(struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void caller_end(struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_35;
char* come_fun_name_36;
void* right_value58;
char* __dec_obj36;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value59;
void* right_value60;
struct sType* result_type_37;
void* right_value61;
void* right_value62;
_Bool _if_conditional117;
void* right_value63;
char* __dec_obj37;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_35, 0, sizeof(struct sFun*));
memset(&come_fun_name_36, 0, sizeof(char*));
right_value58 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
memset(&result_type_37, 0, sizeof(struct sType*));
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
    come_fun_35=info->come_fun;
    info->come_fun=self->mFun;
    caller_begin(info);
    come_fun_name_36=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj36=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(((char*)(right_value58=__builtin_string(info->come_fun->mName))));
    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        if(_if_conditional116=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional116) {
            add_come_code(info,"come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_37=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value59=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 132, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value61=make_define_var(result_type_37,"__result_obj__",(_Bool)0,info))));
        right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value62=make_type_name_string(result_type_37,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        if(_if_conditional117=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional117) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value63=xsprintf("come_heap_final();\n"))));
            right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(sType_finalize,result_type_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    caller_end(info);
    info->come_fun=come_fun_35;
    __dec_obj37=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_36);
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result37__ = (_Bool)1;
    come_fun_name_36 = come_decrement_ref_count2(come_fun_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result37__;
    come_fun_name_36 = come_decrement_ref_count2(come_fun_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value64;
void* right_value65;
struct list$1sNodeph* __dec_obj38;
struct sBlock* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
right_value65 = (void*)0;
    __dec_obj38=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value65=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value64=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function2.c", 154, "struct list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result38__ = __result_obj__ = self;
    come_call_finalizer2(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result38__;
    come_call_finalizer2(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
void* right_value66;
struct sType* __dec_obj39;
void* right_value67;
struct list$1charph* __dec_obj40;
void* right_value68;
struct list$1charph* __dec_obj41;
char* __dec_obj42;
struct sType* __dec_obj43;
struct list$1sTypeph* __dec_obj44;
struct list$1charph* __dec_obj45;
struct list$1charph* __dec_obj46;
char* __dec_obj47;
void* right_value69;
char* __dec_obj48;
struct sGenericsFun* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
    __dec_obj39=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(impl_type))));
    come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj40=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value67=list$1charphp_clone(generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj41=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value68=list$1charphp_clone(method_generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj42=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj43=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj44=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj45=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer2(list$1charph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj46=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer2(list$1charph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj47=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj48=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value69=__builtin_string(generics_sname))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mGenericsSLine=generics_sline;
    __result39__ = __result_obj__ = self;
    come_call_finalizer2(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result39__;
    come_call_finalizer2(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional118=self!=((void*)0)&&self->mImplType!=((void*)0),        _if_conditional118) {
            come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional119=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),        _if_conditional119) {
            come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional120=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),        _if_conditional120) {
            come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional121=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional121) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional122=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional122) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional123=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional123) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional124=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional124) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional125=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional125) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional126=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional126) {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional127=self!=((void*)0)&&self->mGenericsSName!=((void*)0),        _if_conditional127) {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level){
void* __result_obj__;
void* right_value70;
void* right_value71;
struct sBlock* result_38;
int block_level_39;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _while_condtional7;
_Bool _if_conditional130;
int sline_40;
char* sname_41;
void* right_value72;
struct sNode* node_42;
void* right_value73;
char* __dec_obj49;
_Bool _if_conditional131;
_Bool _if_conditional134;
_Bool _while_condtional8;
_Bool _if_conditional135;
void* right_value77;
struct sNode* node_46;
_Bool _if_conditional136;
struct sBlock* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&result_38, 0, sizeof(struct sBlock*));
memset(&block_level_39, 0, sizeof(int));
memset(&sline_40, 0, sizeof(int));
memset(&sname_41, 0, sizeof(char*));
right_value72 = (void*)0;
memset(&node_42, 0, sizeof(struct sNode*));
right_value73 = (void*)0;
right_value77 = (void*)0;
memset(&node_46, 0, sizeof(struct sNode*));
    result_38=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value71=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value70=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function2.c", 184, "struct sBlock")))),info))));
    come_call_finalizer2(sBlock_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sBlock_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    block_level_39=info->block_level;
    if(_if_conditional128=!no_block_level,    _if_conditional128) {
        info->block_level++;
    }
    if(_if_conditional129=*info->p==123,    _if_conditional129) {
        info->p++;
        skip_spaces_and_lf(info);
        while(_while_condtional7=(_Bool)1,        _while_condtional7) {
            parse_sharp_v5(info);
            if(_if_conditional130=*info->p==125,            _if_conditional130) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            sline_40=info->sline;
            sname_41=info->sname;
            node_42=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value72=statment(info))));
            if(right_value72) { right_value72 = come_decrement_ref_count2(right_value72, ((struct sNode*)right_value72)->finalize, ((struct sNode*)right_value72)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj49=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value73=node_42->sname(node_42->_protocol_obj))));
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline=node_42->sline(node_42->_protocol_obj);
            if(_if_conditional131=node_42==((void*)0),            _if_conditional131) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_38->mNodes,(struct sNode*)come_increment_ref_count(node_42));
            parse_sharp_v5(info);
            if(_if_conditional134=node_42->terminated(node_42->_protocol_obj),            _if_conditional134) {
                skip_spaces_and_lf(info);
            }
            while(_while_condtional8=*info->p==59,            _while_condtional8) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(_if_conditional135=*info->p==125,            _if_conditional135) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_42) { node_42 = come_decrement_ref_count2(node_42, ((struct sNode*)node_42)->finalize, ((struct sNode*)node_42)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            if(node_42) { node_42 = come_decrement_ref_count2(node_42, ((struct sNode*)node_42)->finalize, ((struct sNode*)node_42)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        node_46=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=expression_v13(info))));
        if(right_value77) { right_value77 = come_decrement_ref_count2(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        if(_if_conditional136=node_46==((void*)0),        _if_conditional136) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_38->mNodes,(struct sNode*)come_increment_ref_count(node_46));
        if(node_46) { node_46 = come_decrement_ref_count2(node_46, ((struct sNode*)node_46)->finalize, ((struct sNode*)node_46)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_39;
    __result41__ = __result_obj__ = result_38;
    come_call_finalizer2(sBlock_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result41__;
    come_call_finalizer2(sBlock_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional132;
void* right_value74;
struct list_item$1sNodeph* litem_43;
struct sNode* __dec_obj50;
_Bool _if_conditional133;
void* right_value75;
struct list_item$1sNodeph* litem_44;
struct sNode* __dec_obj51;
void* right_value76;
struct list_item$1sNodeph* litem_45;
struct sNode* __dec_obj52;
struct list$1sNodeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1sNodeph*));
right_value75 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1sNodeph*));
right_value76 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional132=self->len==0,                _if_conditional132) {
                    litem_43=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value74=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 225, "struct list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_43->prev=((void*)0);
                    litem_43->next=((void*)0);
                    __dec_obj50=litem_43->item;
                    litem_43->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_43;
                    self->head=litem_43;
                }
                else {
                    if(_if_conditional133=self->len==1,                    _if_conditional133) {
                        litem_44=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value75=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 235, "struct list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_44->prev=self->head;
                        litem_44->next=((void*)0);
                        __dec_obj51=litem_44->item;
                        litem_44->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_44;
                        self->head->next=litem_44;
                    }
                    else {
                        litem_45=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value76=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 245, "struct list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_45->prev=self->tail;
                        litem_45->next=((void*)0);
                        __dec_obj52=litem_45->item;
                        litem_45->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_45;
                        self->tail=litem_45;
                    }
                }
                self->len++;
                __result40__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result40__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
void* __result_obj__;
_Bool _if_conditional137;
int __result42__;
struct sVarTable* old_table_47;
_Bool _if_conditional138;
void* right_value78;
void* right_value79;
struct sVarTable* __dec_obj53;
struct sVarTable* current_loop_vtable_48;
_Bool _if_conditional139;
struct list$1sTypeph* param_types__49;
struct list$1charph* param_names__50;
_Bool _if_conditional140;
int i_51;
struct list$1charph* o2_saved_52;
char* name_55;
void* right_value80;
void* right_value81;
struct sType* type_61;
void* right_value82;
int block_level_62;
_Bool _if_conditional147;
_Bool _if_conditional148;
int i_63;
struct list$1sNodeph* o2_saved_64;
struct sNode* node_67;
struct list$1sRightValueObjectph* right_value_objects_70;
void* right_value83;
void* right_value84;
struct list$1sRightValueObjectph* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
int stack_num_before_73;
int sline_74;
void* right_value85;
char* sname_75;
void* right_value86;
char* __dec_obj58;
_Bool _if_conditional157;
void* right_value87;
char* __dec_obj59;
struct list$1sRightValueObjectph* __dec_obj60;
_Bool _if_conditional158;
int __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_table_47, 0, sizeof(struct sVarTable*));
right_value78 = (void*)0;
right_value79 = (void*)0;
memset(&current_loop_vtable_48, 0, sizeof(struct sVarTable*));
memset(&param_types__49, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__50, 0, sizeof(struct list$1charph*));
memset(&i_51, 0, sizeof(int));
memset(&o2_saved_52, 0, sizeof(struct list$1charph*));
memset(&name_55, 0, sizeof(char*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&type_61, 0, sizeof(struct sType*));
right_value82 = (void*)0;
memset(&block_level_62, 0, sizeof(int));
memset(&i_63, 0, sizeof(int));
memset(&o2_saved_64, 0, sizeof(struct list$1sNodeph*));
memset(&node_67, 0, sizeof(struct sNode*));
memset(&right_value_objects_70, 0, sizeof(struct list$1sRightValueObjectph*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&stack_num_before_73, 0, sizeof(int));
memset(&sline_74, 0, sizeof(int));
right_value85 = (void*)0;
memset(&sname_75, 0, sizeof(char*));
right_value86 = (void*)0;
right_value87 = (void*)0;
    if(info->output_header_file) {
        __result42__ = 0;
        return __result42__;
    }
    old_table_47=info->lv_table;
    if(_if_conditional138=!no_var_table,    _if_conditional138) {
        __dec_obj53=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value79=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value78=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function2.c", 268, "struct sVarTable")))),(_Bool)0,old_table_47))));
        come_call_finalizer2(sVarTable_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sVarTable_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sVarTable_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_48=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__49=info->param_types;
    param_names__50=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(_if_conditional140=param_types&&param_names,    _if_conditional140) {
        for(        o2_saved_52=(param_names),name_55=list$1charph_begin((o2_saved_52));        !list$1charph_end((o2_saved_52));        name_55=list$1charph_next((o2_saved_52))        ){
            type_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(((struct sType*)(right_value80=list$1sTypephp_operator_load_element(param_types,i_51)))))));
            come_call_finalizer2(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_61->mFunctionParam=(_Bool)1;
            type_61->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_55,(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_clone(type_61)))),info);
            come_call_finalizer2(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            i_51++;
            come_call_finalizer2(sType_finalize,type_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_62=info->block_level;
    if(_if_conditional147=!no_var_table,    _if_conditional147) {
        info->block_level++;
    }
    if(_if_conditional148=list$1sNodeph_length(block->mNodes)==0,    _if_conditional148) {
    }
    else {
        for(        o2_saved_64=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_67=list$1sNodeph_begin((o2_saved_64));        !list$1sNodeph_end((o2_saved_64));        node_67=list$1sNodeph_next((o2_saved_64))        ){
            right_value_objects_70=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj54=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value84=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value83=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function2.c", 305, "struct list$1sRightValueObjectph"))))))));
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj55=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj56=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj57=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_73=list$1CVALUEph_length(info->stack);
            sline_74=info->sline;
            sname_75=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(info->sname))));
            right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_67->sline(node_67->_protocol_obj);
            __dec_obj58=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value86=node_67->sname(node_67->_protocol_obj))));
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->writing_source_file_position=(_Bool)1;
            if(_if_conditional157=!node_compile(node_67,info),            _if_conditional157) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_74;
            __dec_obj59=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string(sname_75))));
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_73);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj60=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_70);
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value_objects_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            sname_75 = come_decrement_ref_count2(sname_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional158=!no_var_table,    _if_conditional158) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_47;
    info->block_level=block_level_62;
    info->param_types=param_types__49;
    info->param_names=param_names__50;
    info->current_loop_vtable=current_loop_vtable_48;
    __result63__ = 0;
    return __result63__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional141;
char* result_53;
char* __result43__;
_Bool _if_conditional142;
char* __result44__;
char* result_54;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_53, 0, sizeof(char*));
memset(&result_54, 0, sizeof(char*));
            if(_if_conditional141=self==((void*)0),            _if_conditional141) {
                memset(&result_53,0,sizeof(char*));
                __result43__ = __result_obj__ = result_53;
                return __result43__;
            }
            self->it=self->head;
            if(self->it) {
                __result44__ = __result_obj__ = self->it->item;
                return __result44__;
            }
            memset(&result_54,0,sizeof(char*));
            __result45__ = __result_obj__ = result_54;
            return __result45__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result46__;
memset(&__result_obj__, 0, sizeof(void*));
            __result46__ = self==((void*)0)||self->it==((void*)0);
            return __result46__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional143;
char* result_56;
char* __result47__;
_Bool _if_conditional144;
char* __result48__;
char* result_57;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_56, 0, sizeof(char*));
memset(&result_57, 0, sizeof(char*));
            if(_if_conditional143=self==((void*)0)||self->it==((void*)0),            _if_conditional143) {
                memset(&result_56,0,sizeof(char*));
                __result47__ = __result_obj__ = result_56;
                return __result47__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result48__ = __result_obj__ = self->it->item;
                return __result48__;
            }
            memset(&result_57,0,sizeof(char*));
            __result49__ = __result_obj__ = result_57;
            return __result49__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional145;
struct list_item$1sTypeph* it_58;
int i_59;
_Bool _while_condtional9;
_Bool _if_conditional146;
struct sType* __result50__;
struct sType* default_value_60;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_59, 0, sizeof(int));
memset(&default_value_60, 0, sizeof(struct sType*));
                if(_if_conditional145=position<0,                _if_conditional145) {
                    position+=self->len;
                }
                it_58=self->head;
                i_59=0;
                while(_while_condtional9=it_58!=((void*)0),                _while_condtional9) {
                    if(_if_conditional146=position==i_59,                    _if_conditional146) {
                        __result50__ = __result_obj__ = it_58->item;
                        return __result50__;
                    }
                    it_58=it_58->next;
                    i_59++;
                }
                memset(&default_value_60,0,sizeof(struct sType*));
                __result51__ = __result_obj__ = default_value_60;
                come_call_finalizer2(sType_finalize,default_value_60, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result51__;
                come_call_finalizer2(sType_finalize,default_value_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
        __result52__ = self->len;
        return __result52__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional149;
struct sNode* result_65;
struct sNode* __result53__;
_Bool _if_conditional150;
struct sNode* __result54__;
struct sNode* result_66;
struct sNode* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct sNode*));
memset(&result_66, 0, sizeof(struct sNode*));
            if(_if_conditional149=self==((void*)0),            _if_conditional149) {
                memset(&result_65,0,sizeof(struct sNode*));
                __result53__ = __result_obj__ = result_65;
                return __result53__;
            }
            self->it=self->head;
            if(self->it) {
                __result54__ = __result_obj__ = self->it->item;
                return __result54__;
            }
            memset(&result_66,0,sizeof(struct sNode*));
            __result55__ = __result_obj__ = result_66;
            return __result55__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
            __result56__ = self==((void*)0)||self->it==((void*)0);
            return __result56__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional151;
struct sNode* result_68;
struct sNode* __result57__;
_Bool _if_conditional152;
struct sNode* __result58__;
struct sNode* result_69;
struct sNode* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct sNode*));
memset(&result_69, 0, sizeof(struct sNode*));
            if(_if_conditional151=self==((void*)0)||self->it==((void*)0),            _if_conditional151) {
                memset(&result_68,0,sizeof(struct sNode*));
                __result57__ = __result_obj__ = result_68;
                return __result57__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result58__ = __result_obj__ = self->it->item;
                return __result58__;
            }
            memset(&result_69,0,sizeof(struct sNode*));
            __result59__ = __result_obj__ = result_69;
            return __result59__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result60__ = __result_obj__ = self;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result60__;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_71;
_Bool _while_condtional10;
struct list_item$1sRightValueObjectph* prev_it_72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_71, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_72, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_71=self->head;
                    while(_while_condtional10=it_71!=((void*)0),                    _while_condtional10) {
                        prev_it_72=it_71;
                        it_71=it_71->next;
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional153=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional153) {
                                come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional154=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional154) {
                                        come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional155=self!=((void*)0)&&self->mVarName!=((void*)0),                                    _if_conditional155) {
                                        self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional156=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional156) {
                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result61__;
memset(&__result_obj__, 0, sizeof(void*));
                __result61__ = self->len;
                return __result61__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_76;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_77;
struct list$1sRightValueObjectph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_76, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_77, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_76=self->head;
                while(_while_condtional11=it_76!=((void*)0),                _while_condtional11) {
                    prev_it_77=it_76;
                    it_76=it_76->next;
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result62__ = __result_obj__ = self;
                return __result62__;
}

void arrange_stack(struct sInfo* info, int top){
void* __result_obj__;
_Bool _if_conditional159;
_Bool _if_conditional160;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional159=list$1CVALUEph_length(info->stack)>top,    _if_conditional159) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(_if_conditional160=list$1CVALUEph_length(info->stack)<top,    _if_conditional160) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional161;
_Bool _if_conditional162;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    parse_sharp_v5(info);
    if(_if_conditional161=*info->p!=c,    _if_conditional161) {
        if(_if_conditional162=!info->no_output_err,        _if_conditional162) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    __result64__ = 0;
    return __result64__;
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
char* head_78;
_Bool _if_conditional163;
_Bool dquort_79;
_Bool squort_80;
int sline_81;
int nest_82;
_Bool _while_condtional12;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
char* tail_83;
void* right_value88;
char* buf_84;
void* right_value89;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_78, 0, sizeof(char*));
memset(&dquort_79, 0, sizeof(_Bool));
memset(&squort_80, 0, sizeof(_Bool));
memset(&sline_81, 0, sizeof(int));
memset(&nest_82, 0, sizeof(int));
memset(&tail_83, 0, sizeof(char*));
right_value88 = (void*)0;
memset(&buf_84, 0, sizeof(char*));
right_value89 = (void*)0;
    head_78=info->p;
    if(_if_conditional163=*info->p==123,    _if_conditional163) {
        info->p++;
        dquort_79=(_Bool)0;
        squort_80=(_Bool)0;
        sline_81=0;
        nest_82=0;
        while(_while_condtional12=1,        _while_condtional12) {
            if(dquort_79) {
                if(_if_conditional165=*info->p==92,                _if_conditional165) {
                    info->p++;
                    if(_if_conditional166=*info->p==0,                    _if_conditional166) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                        exit(2);
                    }
                    info->p++;
                }
                else {
                    if(_if_conditional167=*info->p==34,                    _if_conditional167) {
                        info->p++;
                        dquort_79=!dquort_79;
                    }
                    else {
                        info->p++;
                        if(_if_conditional168=*info->p==0,                        _if_conditional168) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                            exit(2);
                        }
                    }
                }
            }
            else {
                if(squort_80) {
                    if(_if_conditional170=*info->p==92,                    _if_conditional170) {
                        info->p++;
                        if(_if_conditional171=*info->p==0,                        _if_conditional171) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                            exit(2);
                        }
                        info->p++;
                    }
                    else {
                        if(_if_conditional172=*info->p==39,                        _if_conditional172) {
                            info->p++;
                            squort_80=!squort_80;
                        }
                        else {
                            info->p++;
                            if(_if_conditional173=*info->p==0,                            _if_conditional173) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional174=*info->p==39,                    _if_conditional174) {
                        sline_81=info->sline;
                        info->p++;
                        squort_80=!squort_80;
                    }
                    else {
                        if(_if_conditional175=*info->p==34,                        _if_conditional175) {
                            sline_81=info->sline;
                            info->p++;
                            dquort_79=!dquort_79;
                        }
                        else {
                            if(_if_conditional176=*info->p==35,                            _if_conditional176) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(_if_conditional177=*info->p==123,                                _if_conditional177) {
                                    info->p++;
                                    nest_82++;
                                }
                                else {
                                    if(_if_conditional178=*info->p==125,                                    _if_conditional178) {
                                        info->p++;
                                        if(_if_conditional179=nest_82==0,                                        _if_conditional179) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_82--;
                                    }
                                    else {
                                        if(_if_conditional180=*info->p==0,                                        _if_conditional180) {
                                            err_msg(info,"The block requires } character for closing block");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional181=*info->p==10,                                            _if_conditional181) {
                                                info->p++;
                                                info->sline++;
                                            }
                                            else {
                                                info->p++;
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
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_83=info->p;
    buf_84=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(tail_83-head_78+1)), "05function2.c", 488, "char"))));
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(buf_84,head_78,tail_83-head_78);
    buf_84[tail_83-head_78]=0;
    __result65__ = __result_obj__ = ((char*)(right_value89=__builtin_string(buf_84)));
    buf_84 = come_decrement_ref_count2(buf_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
    buf_84 = come_decrement_ref_count2(buf_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
void* __result_obj__;
_Bool terminated_85;
char* p3_86;
int i_87;
_Bool _if_conditional182;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&terminated_85, 0, sizeof(_Bool));
memset(&p3_86, 0, sizeof(char*));
memset(&i_87, 0, sizeof(int));
    terminated_85=(_Bool)0;
    p3_86=p;
    for(    i_87=0;    i_87<strlen(p2);    i_87++    ){
        if(_if_conditional182=*p3_86==0,        _if_conditional182) {
            terminated_85=(_Bool)1;
            break;
        }
        p3_86++;
    }
    __result66__ = !terminated_85&&memcmp(p,p2,strlen(p2))==0;
    return __result66__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
void* right_value90;
void* right_value91;
struct buffer* asm_fun_name_88;
_Bool _while_condtional13;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
int brace_num_89;
_Bool _while_condtional14;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
int len_90;
_Bool in_dquort_91;
int brace_num_92;
_Bool _while_condtional15;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
int brace_num_93;
_Bool _while_condtional16;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value92;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&asm_fun_name_88, 0, sizeof(struct buffer*));
memset(&brace_num_89, 0, sizeof(int));
memset(&len_90, 0, sizeof(int));
memset(&in_dquort_91, 0, sizeof(_Bool));
memset(&brace_num_92, 0, sizeof(int));
memset(&brace_num_93, 0, sizeof(int));
right_value92 = (void*)0;
    asm_fun_name_88=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value91=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value90=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 511, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional13=(_Bool)1,    _while_condtional13) {
        if(_if_conditional183=strmemcmp(info->p,"__attribute_pure__"),        _if_conditional183) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional184=strmemcmp(info->p,"__attribute_malloc__"),            _if_conditional184) {
                info->p+=strlen("__attribute_malloc__");
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional185=strmemcmp(info->p,"__attr_dealloc_fclose"),                _if_conditional185) {
                    info->p+=strlen("__attr_dealloc_fclose");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(_if_conditional186=strmemcmp(info->p,"__wur"),                    _if_conditional186) {
                        info->p+=strlen("__wur");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional187=strmemcmp(info->p,"__noreturn"),                        _if_conditional187) {
                            info->p+=strlen("__noreturn");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(_if_conditional188=strmemcmp(info->p,"__attribute__"),                            _if_conditional188) {
                                info->p+=strlen("__attribute__");
                                skip_spaces_and_lf(info);
                                brace_num_89=0;
                                while(_while_condtional14=*info->p,                                _while_condtional14) {
                                    if(_if_conditional189=*info->p==40,                                    _if_conditional189) {
                                        info->p++;
                                        brace_num_89++;
                                    }
                                    else {
                                        if(_if_conditional190=*info->p==41,                                        _if_conditional190) {
                                            info->p++;
                                            brace_num_89--;
                                            if(_if_conditional191=brace_num_89==0,                                            _if_conditional191) {
                                                break;
                                            }
                                        }
                                        else {
                                            info->p++;
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                            }
                            else {
                                if(_if_conditional192=strmemcmp(info->p,"__asm__"),                                _if_conditional192) {
                                    info->p+=strlen("__asm__");
                                    skip_spaces_and_lf(info);
                                    len_90=0;
                                    in_dquort_91=(_Bool)0;
                                    brace_num_92=0;
                                    while(_while_condtional15=*info->p,                                    _while_condtional15) {
                                        if(_if_conditional193=*info->p==34,                                        _if_conditional193) {
                                            info->p++;
                                            in_dquort_91=!in_dquort_91;
                                        }
                                        else {
                                            if(in_dquort_91) {
                                                buffer_append_char(asm_fun_name_88,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional195=*info->p==40,                                                _if_conditional195) {
                                                    info->p++;
                                                    brace_num_92++;
                                                }
                                                else {
                                                    if(_if_conditional196=*info->p==41,                                                    _if_conditional196) {
                                                        info->p++;
                                                        brace_num_92--;
                                                        if(_if_conditional197=brace_num_92==0,                                                        _if_conditional197) {
                                                            break;
                                                        }
                                                    }
                                                    else {
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(_if_conditional198=strmemcmp(info->p,"__asm"),                                    _if_conditional198) {
                                        info->p+=strlen("__asm");
                                        skip_spaces_and_lf(info);
                                        brace_num_93=0;
                                        while(_while_condtional16=*info->p,                                        _while_condtional16) {
                                            if(_if_conditional199=*info->p==40,                                            _if_conditional199) {
                                                info->p++;
                                                brace_num_93++;
                                            }
                                            else {
                                                if(_if_conditional200=*info->p==41,                                                _if_conditional200) {
                                                    info->p++;
                                                    brace_num_93--;
                                                    if(_if_conditional201=brace_num_93==0,                                                    _if_conditional201) {
                                                        break;
                                                    }
                                                }
                                                else {
                                                    info->p++;
                                                }
                                            }
                                        }
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result67__ = __result_obj__ = ((char*)(right_value92=buffer_to_string(asm_fun_name_88)));
    come_call_finalizer2(buffer_finalize,asm_fun_name_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
    come_call_finalizer2(buffer_finalize,asm_fun_name_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional17;
char* head_94;
int head_sline_95;
void* right_value93;
char* buf_96;
_Bool _if_conditional202;
void* right_value94;
struct sNode* node_97;
_Bool _while_condtional18;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_94, 0, sizeof(char*));
memset(&head_sline_95, 0, sizeof(int));
right_value93 = (void*)0;
memset(&buf_96, 0, sizeof(char*));
right_value94 = (void*)0;
memset(&node_97, 0, sizeof(struct sNode*));
    while(_while_condtional17=*info->p,    _while_condtional17) {
        parse_sharp_v5(info);
        head_94=info->p;
        head_sline_95=info->sline;
        buf_96=(char*)come_increment_ref_count(((char*)(right_value93=parse_word(info))));
        right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional202=block&&*info->p==125,        _if_conditional202) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_96 = come_decrement_ref_count2(buf_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_97=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=top_level_v99(buf_96,head_94,head_sline_95,info))));
        if(right_value94) { right_value94 = come_decrement_ref_count2(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        while(_while_condtional18=*info->p==59,        _while_condtional18) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(_if_conditional203=node_97!=((void*)0),        _if_conditional203) {
            if(_if_conditional204=!node_compile(node_97,info),            _if_conditional204) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(_if_conditional205=block&&*info->p==125,        _if_conditional205) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_96 = come_decrement_ref_count2(buf_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_97) { node_97 = come_decrement_ref_count2(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_96 = come_decrement_ref_count2(buf_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_97) { node_97 = come_decrement_ref_count2(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __result_obj__;
void* right_value95;
char* name_98;
void* right_value96;
void* right_value97;
struct sType* result_type_99;
void* right_value98;
void* right_value99;
void* right_value100;
void* right_value101;
void* right_value102;
void* right_value103;
void* right_value104;
void* right_value105;
void* right_value106;
void* right_value107;
struct sType* __list_values1___100[5];
void* right_value111;
void* right_value112;
struct list$1sTypeph* param_types_105;
void* right_value113;
void* right_value114;
void* right_value115;
void* right_value116;
void* right_value117;
char* __list_values2___106[5];
void* right_value121;
void* right_value122;
struct list$1charph* param_names_111;
void* right_value123;
void* right_value124;
struct list$1charph* param_default_parametors_112;
void* right_value125;
void* right_value126;
void* right_value127;
void* right_value128;
void* right_value129;
void* right_value130;
void* right_value131;
struct sFun* main_fun_113;
void* right_value140;
void* right_value141;
char* name_158;
void* right_value142;
void* right_value143;
struct sType* result_type_159;
void* right_value144;
void* right_value145;
struct sType* __list_values3___160[1];
void* right_value146;
void* right_value147;
struct list$1sTypeph* param_types_161;
void* right_value148;
char* __list_values4___162[1];
void* right_value149;
void* right_value150;
struct list$1charph* param_names_163;
void* right_value151;
void* right_value152;
struct list$1charph* param_default_parametors_164;
void* right_value153;
void* right_value154;
void* right_value155;
void* right_value156;
struct sFun* main_fun_165;
void* right_value157;
void* right_value158;
char* name_166;
void* right_value159;
void* right_value160;
struct sType* result_type_167;
void* right_value161;
void* right_value162;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value167;
void* right_value168;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
struct sType* __list_values5___168[7];
void* right_value175;
void* right_value176;
struct list$1sTypeph* param_types_169;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
void* right_value182;
void* right_value183;
char* __list_values6___170[7];
void* right_value184;
void* right_value185;
struct list$1charph* param_names_171;
void* right_value186;
void* right_value187;
struct list$1charph* param_default_parametors_172;
void* right_value188;
void* right_value189;
void* right_value190;
void* right_value191;
struct sFun* main_fun_173;
void* right_value192;
void* right_value193;
char* name_174;
void* right_value194;
void* right_value195;
struct sType* result_type_175;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
void* right_value205;
struct sType* __list_values7___176[5];
void* right_value206;
void* right_value207;
struct list$1sTypeph* param_types_177;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
char* __list_values8___178[5];
void* right_value213;
void* right_value214;
struct list$1charph* param_names_179;
void* right_value215;
void* right_value216;
struct list$1charph* param_default_parametors_180;
void* right_value217;
void* right_value218;
void* right_value219;
void* right_value220;
struct sFun* main_fun_181;
void* right_value221;
void* right_value222;
char* name_182;
void* right_value223;
void* right_value224;
struct sType* result_type_183;
void* right_value225;
void* right_value226;
struct sType* __list_values9___184[1];
void* right_value227;
void* right_value228;
struct list$1sTypeph* param_types_185;
void* right_value229;
char* __list_values10___186[1];
void* right_value230;
void* right_value231;
struct list$1charph* param_names_187;
void* right_value232;
void* right_value233;
struct list$1charph* param_default_parametors_188;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
struct sFun* main_fun_189;
void* right_value238;
void* right_value239;
char* name_190;
void* right_value240;
void* right_value241;
struct sType* result_type_191;
void* right_value242;
void* right_value243;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
struct sType* __list_values11___192[4];
void* right_value250;
void* right_value251;
struct list$1sTypeph* param_types_193;
void* right_value252;
void* right_value253;
void* right_value254;
void* right_value255;
char* __list_values12___194[4];
void* right_value256;
void* right_value257;
struct list$1charph* param_names_195;
void* right_value258;
void* right_value259;
struct list$1charph* param_default_parametors_196;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
void* right_value265;
void* right_value266;
struct sFun* main_fun_197;
void* right_value267;
void* right_value268;
char* name_198;
void* right_value269;
void* right_value270;
struct sType* result_type_199;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
struct sType* __list_values13___200[3];
void* right_value277;
void* right_value278;
struct list$1sTypeph* param_types_201;
void* right_value279;
void* right_value280;
void* right_value281;
char* __list_values14___202[3];
void* right_value282;
void* right_value283;
struct list$1charph* param_names_203;
void* right_value284;
void* right_value285;
struct list$1charph* param_default_parametors_204;
void* right_value286;
void* right_value287;
void* right_value288;
void* right_value289;
struct sFun* main_fun_205;
void* right_value290;
void* right_value291;
char* name_206;
void* right_value292;
void* right_value293;
struct sType* result_type_207;
void* right_value294;
void* right_value295;
struct sType* __list_values15___208[1];
void* right_value296;
void* right_value297;
struct list$1sTypeph* param_types_209;
void* right_value298;
char* __list_values16___210[1];
void* right_value299;
void* right_value300;
struct list$1charph* param_names_211;
void* right_value301;
void* right_value302;
struct list$1charph* param_default_parametors_212;
void* right_value303;
void* right_value304;
void* right_value305;
void* right_value306;
struct sFun* main_fun_213;
void* right_value307;
void* right_value308;
char* name_214;
void* right_value309;
void* right_value310;
struct sType* result_type_215;
void* right_value311;
void* right_value312;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
struct sType* __list_values17___216[3];
void* right_value317;
void* right_value318;
struct list$1sTypeph* param_types_217;
void* right_value319;
void* right_value320;
void* right_value321;
char* __list_values18___218[3];
void* right_value322;
void* right_value323;
struct list$1charph* param_names_219;
void* right_value324;
void* right_value325;
struct list$1charph* param_default_parametors_220;
void* right_value326;
void* right_value327;
void* right_value328;
void* right_value329;
struct sFun* main_fun_221;
void* right_value330;
void* right_value331;
char* name_222;
void* right_value332;
void* right_value333;
struct sType* result_type_223;
void* right_value334;
void* right_value335;
struct list$1sTypeph* param_types_224;
void* right_value336;
void* right_value337;
struct list$1charph* param_names_225;
void* right_value338;
void* right_value339;
struct list$1charph* param_default_parametors_226;
void* right_value340;
void* right_value341;
void* right_value342;
void* right_value343;
struct sFun* main_fun_227;
void* right_value344;
void* right_value345;
char* name_228;
void* right_value346;
void* right_value347;
struct sType* result_type_229;
void* right_value348;
void* right_value349;
void* right_value350;
void* right_value351;
void* right_value352;
void* right_value353;
struct sType* __list_values19___230[3];
void* right_value354;
void* right_value355;
struct list$1sTypeph* param_types_231;
void* right_value356;
void* right_value357;
void* right_value358;
char* __list_values20___232[3];
void* right_value359;
void* right_value360;
struct list$1charph* param_names_233;
void* right_value361;
void* right_value362;
struct list$1charph* param_default_parametors_234;
void* right_value363;
void* right_value364;
void* right_value365;
void* right_value366;
struct sFun* main_fun_235;
void* right_value367;
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&name_98, 0, sizeof(char*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&result_type_99, 0, sizeof(struct sType*));
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&param_types_105, 0, sizeof(struct list$1sTypeph*));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&param_names_111, 0, sizeof(struct list$1charph*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&param_default_parametors_112, 0, sizeof(struct list$1charph*));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&main_fun_113, 0, sizeof(struct sFun*));
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&name_158, 0, sizeof(char*));
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&result_type_159, 0, sizeof(struct sType*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&param_types_161, 0, sizeof(struct list$1sTypeph*));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&param_names_163, 0, sizeof(struct list$1charph*));
right_value151 = (void*)0;
right_value152 = (void*)0;
memset(&param_default_parametors_164, 0, sizeof(struct list$1charph*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&main_fun_165, 0, sizeof(struct sFun*));
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&name_166, 0, sizeof(char*));
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&result_type_167, 0, sizeof(struct sType*));
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&param_types_169, 0, sizeof(struct list$1sTypeph*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&param_names_171, 0, sizeof(struct list$1charph*));
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&param_default_parametors_172, 0, sizeof(struct list$1charph*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&main_fun_173, 0, sizeof(struct sFun*));
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&name_174, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&result_type_175, 0, sizeof(struct sType*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&param_types_177, 0, sizeof(struct list$1sTypeph*));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&param_names_179, 0, sizeof(struct list$1charph*));
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&param_default_parametors_180, 0, sizeof(struct list$1charph*));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&main_fun_181, 0, sizeof(struct sFun*));
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&name_182, 0, sizeof(char*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&result_type_183, 0, sizeof(struct sType*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&param_types_185, 0, sizeof(struct list$1sTypeph*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&param_names_187, 0, sizeof(struct list$1charph*));
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&param_default_parametors_188, 0, sizeof(struct list$1charph*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&main_fun_189, 0, sizeof(struct sFun*));
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&name_190, 0, sizeof(char*));
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&result_type_191, 0, sizeof(struct sType*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&param_types_193, 0, sizeof(struct list$1sTypeph*));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&param_names_195, 0, sizeof(struct list$1charph*));
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&param_default_parametors_196, 0, sizeof(struct list$1charph*));
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&main_fun_197, 0, sizeof(struct sFun*));
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&name_198, 0, sizeof(char*));
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&result_type_199, 0, sizeof(struct sType*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&param_types_201, 0, sizeof(struct list$1sTypeph*));
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&param_names_203, 0, sizeof(struct list$1charph*));
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&param_default_parametors_204, 0, sizeof(struct list$1charph*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&main_fun_205, 0, sizeof(struct sFun*));
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&name_206, 0, sizeof(char*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&result_type_207, 0, sizeof(struct sType*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&param_types_209, 0, sizeof(struct list$1sTypeph*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&param_names_211, 0, sizeof(struct list$1charph*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&param_default_parametors_212, 0, sizeof(struct list$1charph*));
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&main_fun_213, 0, sizeof(struct sFun*));
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&name_214, 0, sizeof(char*));
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&result_type_215, 0, sizeof(struct sType*));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&param_types_217, 0, sizeof(struct list$1sTypeph*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&param_names_219, 0, sizeof(struct list$1charph*));
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&param_default_parametors_220, 0, sizeof(struct list$1charph*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
memset(&main_fun_221, 0, sizeof(struct sFun*));
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&name_222, 0, sizeof(char*));
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&result_type_223, 0, sizeof(struct sType*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&param_types_224, 0, sizeof(struct list$1sTypeph*));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&param_names_225, 0, sizeof(struct list$1charph*));
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&param_default_parametors_226, 0, sizeof(struct list$1charph*));
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&main_fun_227, 0, sizeof(struct sFun*));
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&name_228, 0, sizeof(char*));
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&result_type_229, 0, sizeof(struct sType*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
memset(&param_types_231, 0, sizeof(struct list$1sTypeph*));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&param_names_233, 0, sizeof(struct list$1charph*));
right_value361 = (void*)0;
right_value362 = (void*)0;
memset(&param_default_parametors_234, 0, sizeof(struct list$1charph*));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&main_fun_235, 0, sizeof(struct sFun*));
right_value367 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_98=(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string("come_calloc"))));
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_99=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value96=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 680, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values1___100[0]=come_increment_ref_count(((struct sType*)(right_value99=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "struct sType")))),"int",(_Bool)0,info))));
__list_values1___100[1]=come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "struct sType")))),"int",(_Bool)0,info))));
__list_values1___100[2]=come_increment_ref_count(((struct sType*)(right_value103=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value102=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "struct sType")))),"char*",(_Bool)0,info))));
__list_values1___100[3]=come_increment_ref_count(((struct sType*)(right_value105=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value104=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "struct sType")))),"int",(_Bool)0,info))));
__list_values1___100[4]=come_increment_ref_count(((struct sType*)(right_value107=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value106=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "struct sType")))),"char*",(_Bool)0,info))));
}        param_types_105=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value112=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 681, "struct list$1sTypeph")))),5,__list_values1___100))));
        come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values2___106[0]=come_increment_ref_count(((char*)(right_value113=__builtin_string("count"))));
__list_values2___106[1]=come_increment_ref_count(((char*)(right_value114=__builtin_string("size"))));
__list_values2___106[2]=come_increment_ref_count(((char*)(right_value115=__builtin_string("sname"))));
__list_values2___106[3]=come_increment_ref_count(((char*)(right_value116=__builtin_string("sline"))));
__list_values2___106[4]=come_increment_ref_count(((char*)(right_value117=__builtin_string("class_name"))));
}        param_names_111=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 682, "struct list$1charph")))),5,__list_values2___106))));
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_112=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 683, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_112,((void*)0));
        list$1charph_push_back(param_default_parametors_112,((void*)0));
        list$1charph_push_back(param_default_parametors_112,(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string("null")))));
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_112,(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string("0")))));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_112,(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string("null")))));
        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_113=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value131=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value128=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 689, "struct sFun")))),(char*)come_increment_ref_count(name_98),(struct sType*)come_increment_ref_count(result_type_99),(struct list$1sTypeph*)come_increment_ref_count(param_types_105),(struct list$1charph*)come_increment_ref_count(param_names_111),(struct list$1charph*)come_increment_ref_count(param_default_parametors_112),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(name_98)))),(struct sFun*)come_increment_ref_count(main_fun_113));
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_98 = come_decrement_ref_count2(name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_158=(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string("come_increment_ref_count"))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value142=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 700, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values3___160[0]=come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 701, "struct sType")))),"void*",(_Bool)0,info))));
}        param_types_161=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value147=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value146=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 701, "struct list$1sTypeph")))),1,__list_values3___160))));
        come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values4___162[0]=come_increment_ref_count(((char*)(right_value148=__builtin_string("mem"))));
}        param_names_163=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value149=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 702, "struct list$1charph")))),1,__list_values4___162))));
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_164=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value152=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 703, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_165=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value156=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value153=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 704, "struct sFun")))),(char*)come_increment_ref_count(name_158),(struct sType*)come_increment_ref_count(result_type_159),(struct list$1sTypeph*)come_increment_ref_count(param_types_161),(struct list$1charph*)come_increment_ref_count(param_names_163),(struct list$1charph*)come_increment_ref_count(param_default_parametors_164),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(name_158)))),(struct sFun*)come_increment_ref_count(main_fun_165));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_158 = come_decrement_ref_count2(name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_166=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string("come_call_finalizer"))));
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value159=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values5___168[0]=come_increment_ref_count(((struct sType*)(right_value162=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value161=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"void*",(_Bool)0,info))));
__list_values5___168[1]=come_increment_ref_count(((struct sType*)(right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"void*",(_Bool)0,info))));
__list_values5___168[2]=come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"void*",(_Bool)0,info))));
__list_values5___168[3]=come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"void*",(_Bool)0,info))));
__list_values5___168[4]=come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"int",(_Bool)0,info))));
__list_values5___168[5]=come_increment_ref_count(((struct sType*)(right_value172=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"int",(_Bool)0,info))));
__list_values5___168[6]=come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"int",(_Bool)0,info))));
}        param_types_169=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value176=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value175=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 716, "struct list$1sTypeph")))),7,__list_values5___168))));
        come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values6___170[0]=come_increment_ref_count(((char*)(right_value177=__builtin_string("fun"))));
__list_values6___170[1]=come_increment_ref_count(((char*)(right_value178=__builtin_string("mem"))));
__list_values6___170[2]=come_increment_ref_count(((char*)(right_value179=__builtin_string("protocol_fun"))));
__list_values6___170[3]=come_increment_ref_count(((char*)(right_value180=__builtin_string("protocol_obj"))));
__list_values6___170[4]=come_increment_ref_count(((char*)(right_value181=__builtin_string("call_finalizer_only"))));
__list_values6___170[5]=come_increment_ref_count(((char*)(right_value182=__builtin_string("no_decrement"))));
__list_values6___170[6]=come_increment_ref_count(((char*)(right_value183=__builtin_string("no_free"))));
}        param_names_171=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value185=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value184=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 717, "struct list$1charph")))),7,__list_values6___170))));
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_172=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value187=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value186=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 718, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_173=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value191=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value188=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 719, "struct sFun")))),(char*)come_increment_ref_count(name_166),(struct sType*)come_increment_ref_count(result_type_167),(struct list$1sTypeph*)come_increment_ref_count(param_types_169),(struct list$1charph*)come_increment_ref_count(param_names_171),(struct list$1charph*)come_increment_ref_count(param_default_parametors_172),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string(name_166)))),(struct sFun*)come_increment_ref_count(main_fun_173));
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_166 = come_decrement_ref_count2(name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_174=(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string("come_decrement_ref_count"))));
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_175=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value194=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 730, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values7___176[0]=come_increment_ref_count(((struct sType*)(right_value197=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value196=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "struct sType")))),"void*",(_Bool)0,info))));
__list_values7___176[1]=come_increment_ref_count(((struct sType*)(right_value199=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value198=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "struct sType")))),"void*",(_Bool)0,info))));
__list_values7___176[2]=come_increment_ref_count(((struct sType*)(right_value201=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value200=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "struct sType")))),"void*",(_Bool)0,info))));
__list_values7___176[3]=come_increment_ref_count(((struct sType*)(right_value203=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value202=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "struct sType")))),"bool",(_Bool)0,info))));
__list_values7___176[4]=come_increment_ref_count(((struct sType*)(right_value205=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value204=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "struct sType")))),"bool",(_Bool)0,info))));
}        param_types_177=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value207=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value206=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 731, "struct list$1sTypeph")))),5,__list_values7___176))));
        come_call_finalizer2(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values8___178[0]=come_increment_ref_count(((char*)(right_value208=__builtin_string("mem"))));
__list_values8___178[1]=come_increment_ref_count(((char*)(right_value209=__builtin_string("protocol_fun"))));
__list_values8___178[2]=come_increment_ref_count(((char*)(right_value210=__builtin_string("protocol_obj"))));
__list_values8___178[3]=come_increment_ref_count(((char*)(right_value211=__builtin_string("no_decrement"))));
__list_values8___178[4]=come_increment_ref_count(((char*)(right_value212=__builtin_string("no_free"))));
}        param_names_179=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value214=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value213=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 732, "struct list$1charph")))),5,__list_values8___178))));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_180=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value216=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value215=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 733, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_181=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value220=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value217=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 734, "struct sFun")))),(char*)come_increment_ref_count(name_174),(struct sType*)come_increment_ref_count(result_type_175),(struct list$1sTypeph*)come_increment_ref_count(param_types_177),(struct list$1charph*)come_increment_ref_count(param_names_179),(struct list$1charph*)come_increment_ref_count(param_default_parametors_180),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(name_174)))),(struct sFun*)come_increment_ref_count(main_fun_181));
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_182=(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string("come_free_object"))));
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value223=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 745, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values9___184[0]=come_increment_ref_count(((struct sType*)(right_value226=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value225=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 746, "struct sType")))),"void*",(_Bool)0,info))));
}        param_types_185=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value228=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value227=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 746, "struct list$1sTypeph")))),1,__list_values9___184))));
        come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values10___186[0]=come_increment_ref_count(((char*)(right_value229=__builtin_string("mem"))));
}        param_names_187=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value231=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value230=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 747, "struct list$1charph")))),1,__list_values10___186))));
        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_188=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value233=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value232=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 748, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_189=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value237=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value234=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 749, "struct sFun")))),(char*)come_increment_ref_count(name_182),(struct sType*)come_increment_ref_count(result_type_183),(struct list$1sTypeph*)come_increment_ref_count(param_types_185),(struct list$1charph*)come_increment_ref_count(param_names_187),(struct list$1charph*)come_increment_ref_count(param_default_parametors_188),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value238=__builtin_string(name_182)))),(struct sFun*)come_increment_ref_count(main_fun_189));
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_182 = come_decrement_ref_count2(name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_190=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string("come_memdup"))));
        right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value240=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 760, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values11___192[0]=come_increment_ref_count(((struct sType*)(right_value243=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value242=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "struct sType")))),"void*",(_Bool)0,info))));
__list_values11___192[1]=come_increment_ref_count(((struct sType*)(right_value245=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value244=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "struct sType")))),"char*",(_Bool)0,info))));
__list_values11___192[2]=come_increment_ref_count(((struct sType*)(right_value247=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value246=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "struct sType")))),"int",(_Bool)0,info))));
__list_values11___192[3]=come_increment_ref_count(((struct sType*)(right_value249=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value248=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "struct sType")))),"char*",(_Bool)0,info))));
}        param_types_193=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value251=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value250=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 761, "struct list$1sTypeph")))),4,__list_values11___192))));
        come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values12___194[0]=come_increment_ref_count(((char*)(right_value252=__builtin_string("block"))));
__list_values12___194[1]=come_increment_ref_count(((char*)(right_value253=__builtin_string("sname"))));
__list_values12___194[2]=come_increment_ref_count(((char*)(right_value254=__builtin_string("sline"))));
__list_values12___194[3]=come_increment_ref_count(((char*)(right_value255=__builtin_string("class_name"))));
}        param_names_195=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value257=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value256=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 762, "struct list$1charph")))),4,__list_values12___194))));
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_196=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value259=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value258=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 763, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_196,((void*)0));
        list$1charph_push_back(param_default_parametors_196,(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string("null")))));
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_196,(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string("0")))));
        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_196,(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string("null")))));
        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_197=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value266=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value263=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 768, "struct sFun")))),(char*)come_increment_ref_count(name_190),(struct sType*)come_increment_ref_count(result_type_191),(struct list$1sTypeph*)come_increment_ref_count(param_types_193),(struct list$1charph*)come_increment_ref_count(param_names_195),(struct list$1charph*)come_increment_ref_count(param_default_parametors_196),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string(name_190)))),(struct sFun*)come_increment_ref_count(main_fun_197));
        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_190 = come_decrement_ref_count2(name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_198=(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string("memset"))));
        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 779, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values13___200[0]=come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "struct sType")))),"void*",(_Bool)0,info))));
__list_values13___200[1]=come_increment_ref_count(((struct sType*)(right_value274=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value273=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "struct sType")))),"int",(_Bool)0,info))));
__list_values13___200[2]=come_increment_ref_count(((struct sType*)(right_value276=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value275=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "struct sType")))),"long",(_Bool)0,info))));
}        param_types_201=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value278=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value277=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 780, "struct list$1sTypeph")))),3,__list_values13___200))));
        come_call_finalizer2(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values14___202[0]=come_increment_ref_count(((char*)(right_value279=__builtin_string("b"))));
__list_values14___202[1]=come_increment_ref_count(((char*)(right_value280=__builtin_string("c"))));
__list_values14___202[2]=come_increment_ref_count(((char*)(right_value281=__builtin_string("len"))));
}        param_names_203=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value283=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value282=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 781, "struct list$1charph")))),3,__list_values14___202))));
        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_204=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value285=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value284=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 782, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_205=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value289=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value286=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 783, "struct sFun")))),(char*)come_increment_ref_count(name_198),(struct sType*)come_increment_ref_count(result_type_199),(struct list$1sTypeph*)come_increment_ref_count(param_types_201),(struct list$1charph*)come_increment_ref_count(param_names_203),(struct list$1charph*)come_increment_ref_count(param_default_parametors_204),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string(name_198)))),(struct sFun*)come_increment_ref_count(main_fun_205));
        right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_198 = come_decrement_ref_count2(name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_206=(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string("__builtin_string"))));
        right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value292=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 794, "struct sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values15___208[0]=come_increment_ref_count(((struct sType*)(right_value295=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value294=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 795, "struct sType")))),"char*",(_Bool)0,info))));
}        param_types_209=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value297=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value296=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 795, "struct list$1sTypeph")))),1,__list_values15___208))));
        come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values16___210[0]=come_increment_ref_count(((char*)(right_value298=__builtin_string("str"))));
}        param_names_211=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value300=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value299=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 796, "struct list$1charph")))),1,__list_values16___210))));
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_212=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value302=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value301=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 797, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_213=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value306=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value303=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 798, "struct sFun")))),(char*)come_increment_ref_count(name_206),(struct sType*)come_increment_ref_count(result_type_207),(struct list$1sTypeph*)come_increment_ref_count(param_types_209),(struct list$1charph*)come_increment_ref_count(param_names_211),(struct list$1charph*)come_increment_ref_count(param_default_parametors_212),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value304=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(name_206)))),(struct sFun*)come_increment_ref_count(main_fun_213));
        right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_214=(char*)come_increment_ref_count(((char*)(right_value308=__builtin_string("come_heap_init"))));
        right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_215=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value309=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 809, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values17___216[0]=come_increment_ref_count(((struct sType*)(right_value312=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value311=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "struct sType")))),"int",(_Bool)0,info))));
__list_values17___216[1]=come_increment_ref_count(((struct sType*)(right_value314=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value313=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "struct sType")))),"int",(_Bool)0,info))));
__list_values17___216[2]=come_increment_ref_count(((struct sType*)(right_value316=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value315=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "struct sType")))),"int",(_Bool)0,info))));
}        param_types_217=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value318=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value317=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 810, "struct list$1sTypeph")))),3,__list_values17___216))));
        come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values18___218[0]=come_increment_ref_count(((char*)(right_value319=xsprintf("come_malloc"))));
__list_values18___218[1]=come_increment_ref_count(((char*)(right_value320=xsprintf("come_debug"))));
__list_values18___218[2]=come_increment_ref_count(((char*)(right_value321=xsprintf("come_gc"))));
}        param_names_219=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value323=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value322=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 811, "struct list$1charph")))),3,__list_values18___218))));
        right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_220=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value324=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 812, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_220,((void*)0));
        main_fun_221=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value329=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value326=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 814, "struct sFun")))),(char*)come_increment_ref_count(name_214),(struct sType*)come_increment_ref_count(result_type_215),(struct list$1sTypeph*)come_increment_ref_count(param_types_217),(struct list$1charph*)come_increment_ref_count(param_names_219),(struct list$1charph*)come_increment_ref_count(param_default_parametors_220),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value328=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string(name_214)))),(struct sFun*)come_increment_ref_count(main_fun_221));
        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_214 = come_decrement_ref_count2(name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_222=(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string("come_heap_final"))));
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value332=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 825, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_types_224=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value335=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value334=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 826, "struct list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_names_225=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value337=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value336=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 827, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_226=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value339=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value338=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 828, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_227=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value343=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value340=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 829, "struct sFun")))),(char*)come_increment_ref_count(name_222),(struct sType*)come_increment_ref_count(result_type_223),(struct list$1sTypeph*)come_increment_ref_count(param_types_224),(struct list$1charph*)come_increment_ref_count(param_names_225),(struct list$1charph*)come_increment_ref_count(param_default_parametors_226),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value341=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value342=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(name_222)))),(struct sFun*)come_increment_ref_count(main_fun_227));
        right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_222 = come_decrement_ref_count2(name_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_228=(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string("come_null_check"))));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_229=(struct sType*)come_increment_ref_count(((struct sType*)(right_value347=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value346=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 840, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values19___230[0]=come_increment_ref_count(((struct sType*)(right_value349=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value348=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "struct sType")))),"void*",(_Bool)0,info))));
__list_values19___230[1]=come_increment_ref_count(((struct sType*)(right_value351=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value350=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "struct sType")))),"char*",(_Bool)0,info))));
__list_values19___230[2]=come_increment_ref_count(((struct sType*)(right_value353=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value352=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "struct sType")))),"int",(_Bool)0,info))));
}        param_types_231=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value355=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value354=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 841, "struct list$1sTypeph")))),3,__list_values19___230))));
        come_call_finalizer2(sType_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values20___232[0]=come_increment_ref_count(((char*)(right_value356=__builtin_string("mem"))));
__list_values20___232[1]=come_increment_ref_count(((char*)(right_value357=__builtin_string("sname"))));
__list_values20___232[2]=come_increment_ref_count(((char*)(right_value358=__builtin_string("sline"))));
}        param_names_233=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value360=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value359=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 842, "struct list$1charph")))),3,__list_values20___232))));
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_234=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value362=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value361=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 843, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_235=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value366=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value363=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 844, "struct sFun")))),(char*)come_increment_ref_count(name_228),(struct sType*)come_increment_ref_count(result_type_229),(struct list$1sTypeph*)come_increment_ref_count(param_types_231),(struct list$1charph*)come_increment_ref_count(param_names_233),(struct list$1charph*)come_increment_ref_count(param_default_parametors_234),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value364=__builtin_string("void* come_null_check(void* mem, char* sname, int sline)")))),(char*)come_increment_ref_count(((char*)(right_value365=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value367=__builtin_string(name_228)))),(struct sFun*)come_increment_ref_count(main_fun_235));
        right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    __result96__ = 0;
    return __result96__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_101;
struct list$1sTypeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_101, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_101=0;            i_101<num_value;            i_101++            ){
                list$1sTypeph_push_back(self,values[i_101]);
            }
            __result69__ = __result_obj__ = self;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result69__;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional206;
void* right_value108;
struct list_item$1sTypeph* litem_102;
struct sType* __dec_obj61;
_Bool _if_conditional207;
void* right_value109;
struct list_item$1sTypeph* litem_103;
struct sType* __dec_obj62;
void* right_value110;
struct list_item$1sTypeph* litem_104;
struct sType* __dec_obj63;
struct list$1sTypeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1sTypeph*));
right_value109 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1sTypeph*));
right_value110 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional206=self->len==0,                    _if_conditional206) {
                        litem_102=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value108=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 225, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_102->prev=((void*)0);
                        litem_102->next=((void*)0);
                        __dec_obj61=litem_102->item;
                        litem_102->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_102;
                        self->head=litem_102;
                    }
                    else {
                        if(_if_conditional207=self->len==1,                        _if_conditional207) {
                            litem_103=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value109=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 235, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_103->prev=self->head;
                            litem_103->next=((void*)0);
                            __dec_obj62=litem_103->item;
                            litem_103->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_103;
                            self->head->next=litem_103;
                        }
                        else {
                            litem_104=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value110=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 245, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_104->prev=self->tail;
                            litem_104->next=((void*)0);
                            __dec_obj63=litem_104->item;
                            litem_104->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_104;
                            self->tail=litem_104;
                        }
                    }
                    self->len++;
                    __result68__ = __result_obj__ = self;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result68__;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_107;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_107, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_107=0;            i_107<num_value;            i_107++            ){
                list$1charph_push_back(self,values[i_107]);
            }
            __result71__ = __result_obj__ = self;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result71__;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional208;
void* right_value118;
struct list_item$1charph* litem_108;
char* __dec_obj64;
_Bool _if_conditional209;
void* right_value119;
struct list_item$1charph* litem_109;
char* __dec_obj65;
void* right_value120;
struct list_item$1charph* litem_110;
char* __dec_obj66;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1charph*));
right_value119 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1charph*));
right_value120 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
                    if(_if_conditional208=self->len==0,                    _if_conditional208) {
                        litem_108=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value118=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 225, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_108->prev=((void*)0);
                        litem_108->next=((void*)0);
                        __dec_obj64=litem_108->item;
                        litem_108->item=(char*)come_increment_ref_count(item);
                        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_108;
                        self->head=litem_108;
                    }
                    else {
                        if(_if_conditional209=self->len==1,                        _if_conditional209) {
                            litem_109=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value119=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 235, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_109->prev=self->head;
                            litem_109->next=((void*)0);
                            __dec_obj65=litem_109->item;
                            litem_109->item=(char*)come_increment_ref_count(item);
                            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_109;
                            self->head->next=litem_109;
                        }
                        else {
                            litem_110=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value120=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 245, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_110->prev=self->tail;
                            litem_110->next=((void*)0);
                            __dec_obj66=litem_110->item;
                            litem_110->item=(char*)come_increment_ref_count(item);
                            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail->next=litem_110;
                            self->tail=litem_110;
                        }
                    }
                    self->len++;
                    __result70__ = __result_obj__ = self;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result70__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional210;
unsigned int hash_131;
unsigned int it_132;
_Bool _while_condtional21;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool same_key_exist_149;
char* it2_152;
_Bool _if_conditional253;
_Bool _if_conditional254;
struct map$2charphsFunph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_131, 0, sizeof(unsigned int));
memset(&it_132, 0, sizeof(unsigned int));
memset(&same_key_exist_149, 0, sizeof(_Bool));
memset(&it2_152, 0, sizeof(char*));
            if(_if_conditional210=self->len*10>=self->size,            _if_conditional210) {
                map$2charphsFunph_rehash(self);
            }
            hash_131=string_get_hash_key(key)%self->size;
            it_132=hash_131;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional222=self->item_existance[it_132],                _if_conditional222) {
                    if(_if_conditional223=string_equals(self->keys[it_132],key),                    _if_conditional223) {
                        if(_if_conditional224=1,                        _if_conditional224) {
                            list$1charp_remove(self->key_list,self->keys[it_132]);
                            self->keys[it_132] = come_decrement_ref_count2(self->keys[it_132], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_132]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_132]);
                            self->keys[it_132]=key;
                        }
                        if(_if_conditional244=1,                        _if_conditional244) {
                            come_call_finalizer2(sFun_finalize,self->items[it_132], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_132]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_132]=item;
                        }
                        break;
                    }
                    it_132++;
                    if(_if_conditional245=it_132>=self->size,                    _if_conditional245) {
                        it_132=0;
                    }
                    else {
                        if(_if_conditional246=it_132==hash_131,                        _if_conditional246) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_132]=(_Bool)1;
                    if(_if_conditional247=1,                    _if_conditional247) {
                        self->keys[it_132]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_132]=key;
                    }
                    if(_if_conditional248=1,                    _if_conditional248) {
                        self->items[it_132]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_132]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_149=(_Bool)0;
            for(            it2_152=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_152=list$1charp_next(self->key_list)            ){
                if(_if_conditional253=string_equals(it2_152,key),                _if_conditional253) {
                    same_key_exist_149=(_Bool)1;
                }
            }
            if(_if_conditional254=!same_key_exist_149,            _if_conditional254) {
                list$1charp_push_back(self->key_list,key);
            }
            __result95__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result95__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_114;
void* right_value132;
char** keys_115;
void* right_value133;
struct sFun** items_116;
void* right_value134;
_Bool* item_existance_117;
int len_118;
char* it_121;
struct sFun* default_value_124;
void* right_value135;
struct sFun* it2_127;
unsigned int hash_128;
int n_129;
_Bool _while_condtional20;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
struct sFun* default_value_130;
void* right_value136;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_114, 0, sizeof(int));
right_value132 = (void*)0;
memset(&keys_115, 0, sizeof(char**));
right_value133 = (void*)0;
memset(&items_116, 0, sizeof(struct sFun**));
right_value134 = (void*)0;
memset(&item_existance_117, 0, sizeof(_Bool*));
memset(&len_118, 0, sizeof(int));
memset(&it_121, 0, sizeof(char*));
memset(&default_value_124, 0, sizeof(struct sFun*));
right_value135 = (void*)0;
memset(&it2_127, 0, sizeof(struct sFun*));
memset(&hash_128, 0, sizeof(unsigned int));
memset(&n_129, 0, sizeof(int));
memset(&default_value_130, 0, sizeof(struct sFun*));
right_value136 = (void*)0;
                    size_114=self->size*10;
                    keys_115=(char**)come_increment_ref_count(((char**)(right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(size_114)), "./comelang2.h", 1331, "char*"))));
                    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_116=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value133=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_114)), "./comelang2.h", 1332, "struct sFun*"))));
                    come_call_finalizer2(sFun_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_117=(_Bool*)come_increment_ref_count(((_Bool*)(right_value134=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_114)), "./comelang2.h", 1333, "_Bool"))));
                    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_118=0;
                    for(                    it_121=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_121=map$2charphsFunph_next(self)                    ){
                        memset(&default_value_124,0,sizeof(struct sFun*));
                        it2_127=((struct sFun*)(right_value135=map$2charphsFunph_at(self,it_121,default_value_124)));
                        come_call_finalizer2(sFun_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        hash_128=string_get_hash_key(it_121)%size_114;
                        n_129=hash_128;
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            if(_if_conditional219=item_existance_117[n_129],                            _if_conditional219) {
                                n_129++;
                                if(_if_conditional220=n_129>=size_114,                                _if_conditional220) {
                                    n_129=0;
                                }
                                else {
                                    if(_if_conditional221=n_129==hash_128,                                    _if_conditional221) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_117[n_129]=(_Bool)1;
                                keys_115[n_129]=it_121;
                                items_116[n_129]=((struct sFun*)(right_value136=map$2charphsFunph_at(self,it_121,default_value_130)));
                                come_call_finalizer2(sFun_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                len_118++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_115;
                    self->items=items_116;
                    self->item_existance=item_existance_117;
                    self->size=size_114;
                    self->len=len_118;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional211;
char* result_119;
char* __result72__;
_Bool _if_conditional212;
char* __result73__;
char* result_120;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_119, 0, sizeof(char*));
memset(&result_120, 0, sizeof(char*));
                        if(_if_conditional211=self==((void*)0),                        _if_conditional211) {
                            memset(&result_119,0,sizeof(char*));
                            __result72__ = __result_obj__ = result_119;
                            return __result72__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result73__ = __result_obj__ = self->key_list->it->item;
                            return __result73__;
                        }
                        memset(&result_120,0,sizeof(char*));
                        __result74__ = __result_obj__ = result_120;
                        return __result74__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result75__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result75__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional213;
char* result_122;
char* __result76__;
_Bool _if_conditional214;
char* __result77__;
char* result_123;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_122, 0, sizeof(char*));
memset(&result_123, 0, sizeof(char*));
                        if(_if_conditional213=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional213) {
                            memset(&result_122,0,sizeof(char*));
                            __result76__ = __result_obj__ = result_122;
                            return __result76__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result77__ = __result_obj__ = self->key_list->it->item;
                            return __result77__;
                        }
                        memset(&result_123,0,sizeof(char*));
                        __result78__ = __result_obj__ = result_123;
                        return __result78__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_125;
unsigned int it_126;
_Bool _while_condtional19;
_Bool _if_conditional215;
_Bool _if_conditional216;
struct sFun* __result79__;
_Bool _if_conditional217;
_Bool _if_conditional218;
struct sFun* __result80__;
struct sFun* __result81__;
struct sFun* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_125, 0, sizeof(unsigned int));
memset(&it_126, 0, sizeof(unsigned int));
                            hash_125=string_get_hash_key(((char*)key))%self->size;
                            it_126=hash_125;
                            while(_while_condtional19=(_Bool)1,                            _while_condtional19) {
                                if(_if_conditional215=self->item_existance[it_126],                                _if_conditional215) {
                                    if(_if_conditional216=string_equals(self->keys[it_126],key),                                    _if_conditional216) {
                                        __result79__ = __result_obj__ = self->items[it_126];
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result79__;
                                    }
                                    it_126++;
                                    if(_if_conditional217=it_126>=self->size,                                    _if_conditional217) {
                                        it_126=0;
                                    }
                                    else {
                                        if(_if_conditional218=it_126==hash_125,                                        _if_conditional218) {
                                            __result80__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result80__;
                                        }
                                    }
                                }
                                else {
                                    __result81__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result81__;
                                }
                            }
                            __result82__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result82__;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_133;
struct list_item$1charp* it_134;
_Bool _while_condtional22;
_Bool _if_conditional225;
struct list$1charp* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_133, 0, sizeof(int));
memset(&it_134, 0, sizeof(struct list_item$1charp*));
                                it2_133=0;
                                it_134=self->head;
                                while(_while_condtional22=it_134!=((void*)0),                                _while_condtional22) {
                                    if(_if_conditional225=string_equals(it_134->item,item),                                    _if_conditional225) {
                                        list$1charp_delete(self,it2_133,it2_133+1);
                                        break;
                                    }
                                    it2_133++;
                                    it_134=it_134->next;
                                }
                                __result86__ = __result_obj__ = self;
                                return __result86__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
int tmp_135;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
struct list$1charp* __result83__;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct list_item$1charp* it_138;
int i_139;
_Bool _while_condtional24;
_Bool _if_conditional234;
struct list_item$1charp* prev_it_140;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list_item$1charp* it_141;
int i_142;
_Bool _while_condtional25;
_Bool _if_conditional237;
_Bool _if_conditional238;
struct list_item$1charp* prev_it_143;
struct list_item$1charp* it_144;
struct list_item$1charp* head_prev_it_145;
struct list_item$1charp* tail_it_146;
int i_147;
_Bool _while_condtional26;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct list_item$1charp* prev_it_148;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct list$1charp* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_135, 0, sizeof(int));
memset(&it_138, 0, sizeof(struct list_item$1charp*));
memset(&i_139, 0, sizeof(int));
memset(&prev_it_140, 0, sizeof(struct list_item$1charp*));
memset(&it_141, 0, sizeof(struct list_item$1charp*));
memset(&i_142, 0, sizeof(int));
memset(&prev_it_143, 0, sizeof(struct list_item$1charp*));
memset(&it_144, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_145, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_146, 0, sizeof(struct list_item$1charp*));
memset(&i_147, 0, sizeof(int));
memset(&prev_it_148, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional226=head<0,                                            _if_conditional226) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional227=tail<0,                                            _if_conditional227) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional228=head>tail,                                            _if_conditional228) {
                                                tmp_135=tail;
                                                tail=head;
                                                head=tmp_135;
                                            }
                                            if(_if_conditional229=head<0,                                            _if_conditional229) {
                                                head=0;
                                            }
                                            if(_if_conditional230=tail>self->len,                                            _if_conditional230) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional231=head==tail,                                            _if_conditional231) {
                                                __result83__ = __result_obj__ = self;
                                                return __result83__;
                                            }
                                            if(_if_conditional232=head==0&&tail==self->len,                                            _if_conditional232) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional233=head==0,                                                _if_conditional233) {
                                                    it_138=self->head;
                                                    i_139=0;
                                                    while(_while_condtional24=it_138!=((void*)0),                                                    _while_condtional24) {
                                                        if(_if_conditional234=i_139<tail,                                                        _if_conditional234) {
                                                            prev_it_140=it_138;
                                                            it_138=it_138->next;
                                                            i_139++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional235=i_139==tail,                                                            _if_conditional235) {
                                                                self->head=it_138;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_138=it_138->next;
                                                                i_139++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional236=tail==self->len,                                                    _if_conditional236) {
                                                        it_141=self->head;
                                                        i_142=0;
                                                        while(_while_condtional25=it_141!=((void*)0),                                                        _while_condtional25) {
                                                            if(_if_conditional237=i_142==head,                                                            _if_conditional237) {
                                                                self->tail=it_141->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional238=i_142>=head,                                                            _if_conditional238) {
                                                                prev_it_143=it_141;
                                                                it_141=it_141->next;
                                                                i_142++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_141=it_141->next;
                                                                i_142++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_144=self->head;
                                                        head_prev_it_145=((void*)0);
                                                        tail_it_146=((void*)0);
                                                        i_147=0;
                                                        while(_while_condtional26=it_144!=((void*)0),                                                        _while_condtional26) {
                                                            if(_if_conditional239=i_147==head,                                                            _if_conditional239) {
                                                                head_prev_it_145=it_144->prev;
                                                            }
                                                            if(_if_conditional240=i_147==tail,                                                            _if_conditional240) {
                                                                tail_it_146=it_144;
                                                            }
                                                            if(_if_conditional241=i_147>=head&&i_147<tail,                                                            _if_conditional241) {
                                                                prev_it_148=it_144;
                                                                it_144=it_144->next;
                                                                i_147++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_144=it_144->next;
                                                                i_147++;
                                                            }
                                                        }
                                                        if(_if_conditional242=head_prev_it_145!=((void*)0),                                                        _if_conditional242) {
                                                            head_prev_it_145->next=tail_it_146;
                                                        }
                                                        if(_if_conditional243=tail_it_146!=((void*)0),                                                        _if_conditional243) {
                                                            tail_it_146->prev=head_prev_it_145;
                                                        }
                                                    }
                                                }
                                            }
                                            __result85__ = __result_obj__ = self;
                                            return __result85__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_136;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_137;
struct list$1charp* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_136, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_137, 0, sizeof(struct list_item$1charp*));
                                                    it_136=self->head;
                                                    while(_while_condtional23=it_136!=((void*)0),                                                    _while_condtional23) {
                                                        prev_it_137=it_136;
                                                        it_136=it_136->next;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result84__ = __result_obj__ = self;
                                                    return __result84__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional249;
char* result_150;
char* __result87__;
_Bool _if_conditional250;
char* __result88__;
char* result_151;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_150, 0, sizeof(char*));
memset(&result_151, 0, sizeof(char*));
                if(_if_conditional249=self==((void*)0),                _if_conditional249) {
                    memset(&result_150,0,sizeof(char*));
                    __result87__ = __result_obj__ = result_150;
                    return __result87__;
                }
                self->it=self->head;
                if(self->it) {
                    __result88__ = __result_obj__ = self->it->item;
                    return __result88__;
                }
                memset(&result_151,0,sizeof(char*));
                __result89__ = __result_obj__ = result_151;
                return __result89__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
                __result90__ = self==((void*)0)||self->it==((void*)0);
                return __result90__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional251;
char* result_153;
char* __result91__;
_Bool _if_conditional252;
char* __result92__;
char* result_154;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_153, 0, sizeof(char*));
memset(&result_154, 0, sizeof(char*));
                if(_if_conditional251=self==((void*)0)||self->it==((void*)0),                _if_conditional251) {
                    memset(&result_153,0,sizeof(char*));
                    __result91__ = __result_obj__ = result_153;
                    return __result91__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result92__ = __result_obj__ = self->it->item;
                    return __result92__;
                }
                memset(&result_154,0,sizeof(char*));
                __result93__ = __result_obj__ = result_154;
                return __result93__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional255;
void* right_value137;
struct list_item$1charp* litem_155;
_Bool _if_conditional256;
void* right_value138;
struct list_item$1charp* litem_156;
void* right_value139;
struct list_item$1charp* litem_157;
struct list$1charp* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1charp*));
right_value138 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charp*));
right_value139 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional255=self->len==0,                    _if_conditional255) {
                        litem_155=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value137=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 225, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_155->prev=((void*)0);
                        litem_155->next=((void*)0);
                        litem_155->item=item;
                        self->tail=litem_155;
                        self->head=litem_155;
                    }
                    else {
                        if(_if_conditional256=self->len==1,                        _if_conditional256) {
                            litem_156=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value138=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 235, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_156->prev=self->head;
                            litem_156->next=((void*)0);
                            litem_156->item=item;
                            self->tail=litem_156;
                            self->head->next=litem_156;
                        }
                        else {
                            litem_157=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value139=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 245, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_157->prev=self->tail;
                            litem_157->next=((void*)0);
                            litem_157->item=item;
                            self->tail->next=litem_157;
                            self->tail=litem_157;
                        }
                    }
                    self->len++;
                    __result94__ = __result_obj__ = self;
                    return __result94__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool is_type_name_flag_236;
int sline_237;
_Bool define_struct_nobody_238;
char* p_239;
int sline_240;
_Bool _if_conditional257;
_Bool _if_conditional258;
void* right_value368;
char* word_241;
_Bool _if_conditional259;
_Bool define_function_pointer_result_function_242;
_Bool define_variable_between_brace_243;
_Bool _if_conditional260;
char* p_244;
_Bool _if_conditional261;
void* right_value369;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_245;
char* fun_name_246;
_Bool err_247;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value370;
char* word_248;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool define_function_flag_249;
_Bool _if_conditional269;
char* p_250;
_Bool invalid_type_251;
_Bool _if_conditional270;
void* right_value371;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_252;
char* fun_name_253;
_Bool err_254;
_Bool _if_conditional271;
char* word_255;
_Bool _if_conditional272;
void* right_value372;
char* __dec_obj67;
_Bool _if_conditional273;
void* right_value373;
char* __dec_obj68;
char* __dec_obj69;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _while_condtional27;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value374;
char* __dec_obj70;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool define_variable_256;
_Bool _if_conditional281;
char* p_257;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value375;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_258;
char* fun_name_259;
_Bool err_260;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value376;
char* word_261;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value377;
char* word_262;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _while_condtional28;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value378;
char* word_263;
_Bool _if_conditional297;
_Bool _while_condtional30;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value379;
char* word_266;
void* right_value380;
void* right_value381;
struct sNode* node_267;
struct sNode* __result98__;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value382;
struct sNode* __result99__;
_Bool _if_conditional303;
char* header_head_268;
void* right_value383;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_269;
char* fun_name_270;
_Bool err_271;
_Bool _if_conditional304;
void* right_value384;
void* right_value385;
struct list$1sTypeph* param_types_272;
void* right_value386;
void* right_value387;
struct list$1charph* param_names_273;
_Bool _if_conditional305;
_Bool _while_condtional31;
void* right_value388;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_274;
char* param_name_275;
_Bool err_276;
_Bool _if_conditional306;
static int num_function_pointer_result_var_name_a_277=0;
void* right_value389;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
void* right_value390;
void* right_value391;
struct list$1sTypeph* param_types2_278;
void* right_value392;
void* right_value393;
struct list$1charph* param_names2_279;
_Bool _if_conditional310;
_Bool _while_condtional32;
void* right_value394;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_280;
char* param_name_281;
_Bool err_282;
_Bool _if_conditional311;
static int num_function_pointer_result_var_name_b_283=0;
void* right_value395;
_Bool _if_conditional312;
_Bool _if_conditional313;
char* header_tail_284;
void* right_value396;
void* right_value397;
struct sType* result_type2_285;
void* right_value398;
void* right_value399;
struct tuple1$1sTypeph* __dec_obj72;
void* right_value400;
struct list$1sTypeph* __dec_obj73;
void* right_value401;
struct list$1charph* __dec_obj74;
_Bool var_args_286;
void* right_value402;
void* right_value403;
struct buffer* header_buf_287;
void* right_value404;
void* right_value405;
struct list$1charph* param_default_parametors_288;
void* right_value406;
void* right_value407;
void* right_value408;
void* right_value409;
void* right_value410;
struct sFun* fun_289;
void* right_value411;
void* right_value412;
struct sFun* fun2_293;
_Bool _if_conditional318;
void* right_value413;
void* right_value414;
void* right_value415;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value457;
struct sNode* __result131__;
_Bool _if_conditional393;
void* right_value458;
struct sNode* __result132__;
_Bool _if_conditional394;
void* right_value459;
struct sNode* __result133__;
void* right_value460;
char* buf2_329;
void* right_value461;
struct sNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_236, 0, sizeof(_Bool));
memset(&sline_237, 0, sizeof(int));
memset(&define_struct_nobody_238, 0, sizeof(_Bool));
memset(&p_239, 0, sizeof(char*));
memset(&sline_240, 0, sizeof(int));
right_value368 = (void*)0;
memset(&word_241, 0, sizeof(char*));
memset(&define_function_pointer_result_function_242, 0, sizeof(_Bool));
memset(&define_variable_between_brace_243, 0, sizeof(_Bool));
memset(&p_244, 0, sizeof(char*));
right_value369 = (void*)0;
memset(&result_type_245, 0, sizeof(struct sType*));
memset(&fun_name_246, 0, sizeof(char*));
memset(&err_247, 0, sizeof(_Bool));
memset(&result_type_245, 0, sizeof(struct sType*));
memset(&fun_name_246, 0, sizeof(char*));
memset(&err_247, 0, sizeof(_Bool));
right_value370 = (void*)0;
memset(&word_248, 0, sizeof(char*));
memset(&define_function_flag_249, 0, sizeof(_Bool));
memset(&p_250, 0, sizeof(char*));
memset(&invalid_type_251, 0, sizeof(_Bool));
right_value371 = (void*)0;
memset(&result_type_252, 0, sizeof(struct sType*));
memset(&fun_name_253, 0, sizeof(char*));
memset(&err_254, 0, sizeof(_Bool));
memset(&result_type_252, 0, sizeof(struct sType*));
memset(&fun_name_253, 0, sizeof(char*));
memset(&err_254, 0, sizeof(_Bool));
memset(&word_255, 0, sizeof(char*));
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
memset(&define_variable_256, 0, sizeof(_Bool));
memset(&p_257, 0, sizeof(char*));
right_value375 = (void*)0;
memset(&result_type_258, 0, sizeof(struct sType*));
memset(&fun_name_259, 0, sizeof(char*));
memset(&err_260, 0, sizeof(_Bool));
memset(&result_type_258, 0, sizeof(struct sType*));
memset(&fun_name_259, 0, sizeof(char*));
memset(&err_260, 0, sizeof(_Bool));
right_value376 = (void*)0;
memset(&word_261, 0, sizeof(char*));
right_value377 = (void*)0;
memset(&word_262, 0, sizeof(char*));
right_value378 = (void*)0;
memset(&word_263, 0, sizeof(char*));
right_value379 = (void*)0;
memset(&word_266, 0, sizeof(char*));
right_value380 = (void*)0;
right_value381 = (void*)0;
memset(&node_267, 0, sizeof(struct sNode*));
right_value382 = (void*)0;
memset(&header_head_268, 0, sizeof(char*));
right_value383 = (void*)0;
memset(&result_type_269, 0, sizeof(struct sType*));
memset(&fun_name_270, 0, sizeof(char*));
memset(&err_271, 0, sizeof(_Bool));
memset(&result_type_269, 0, sizeof(struct sType*));
memset(&fun_name_270, 0, sizeof(char*));
memset(&err_271, 0, sizeof(_Bool));
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&param_types_272, 0, sizeof(struct list$1sTypeph*));
right_value386 = (void*)0;
right_value387 = (void*)0;
memset(&param_names_273, 0, sizeof(struct list$1charph*));
right_value388 = (void*)0;
memset(&param_type_274, 0, sizeof(struct sType*));
memset(&param_name_275, 0, sizeof(char*));
memset(&err_276, 0, sizeof(_Bool));
memset(&param_type_274, 0, sizeof(struct sType*));
memset(&param_name_275, 0, sizeof(char*));
memset(&err_276, 0, sizeof(_Bool));
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
memset(&param_types2_278, 0, sizeof(struct list$1sTypeph*));
right_value392 = (void*)0;
right_value393 = (void*)0;
memset(&param_names2_279, 0, sizeof(struct list$1charph*));
right_value394 = (void*)0;
memset(&param_type_280, 0, sizeof(struct sType*));
memset(&param_name_281, 0, sizeof(char*));
memset(&err_282, 0, sizeof(_Bool));
memset(&param_type_280, 0, sizeof(struct sType*));
memset(&param_name_281, 0, sizeof(char*));
memset(&err_282, 0, sizeof(_Bool));
right_value395 = (void*)0;
memset(&header_tail_284, 0, sizeof(char*));
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&result_type2_285, 0, sizeof(struct sType*));
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
memset(&var_args_286, 0, sizeof(_Bool));
right_value402 = (void*)0;
right_value403 = (void*)0;
memset(&header_buf_287, 0, sizeof(struct buffer*));
right_value404 = (void*)0;
right_value405 = (void*)0;
memset(&param_default_parametors_288, 0, sizeof(struct list$1charph*));
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
memset(&fun_289, 0, sizeof(struct sFun*));
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&fun2_293, 0, sizeof(struct sFun*));
right_value413 = (void*)0;
right_value414 = (void*)0;
right_value415 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value460 = (void*)0;
memset(&buf2_329, 0, sizeof(char*));
right_value461 = (void*)0;
    is_type_name_flag_236=is_type_name(buf,info);
    sline_237=info->sline;
    define_struct_nobody_238=(_Bool)0;
    {
        p_239=info->p;
        sline_240=info->sline;
        if(_if_conditional257=charp_operator_equals(buf,"struct"),        _if_conditional257) {
            if(_if_conditional258=xisalpha(*info->p)||*info->p==95,            _if_conditional258) {
                word_241=(char*)come_increment_ref_count(((char*)(right_value368=parse_word(info))));
                right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional259=*info->p==59,                _if_conditional259) {
                    define_struct_nobody_238=(_Bool)1;
                }
                word_241 = come_decrement_ref_count2(word_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_240;
    }
    define_function_pointer_result_function_242=(_Bool)0;
    define_variable_between_brace_243=(_Bool)0;
    if(is_type_name_flag_236) {
        p_244=info->p;
        info->p=head;
        if(_if_conditional261=xisalpha(*info->p)||*info->p==95,        _if_conditional261) {
            info->no_output_err=(_Bool)1;
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value369=parse_type(info,(_Bool)0,(_Bool)1)));
            result_type_245=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_246=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_247=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=(_Bool)0;
            if(_if_conditional264=*info->p==40,            _if_conditional264) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional265=*info->p!=42,                _if_conditional265) {
                    define_function_pointer_result_function_242=(_Bool)1;
                    if(_if_conditional266=xisalpha(*info->p)||*info->p==95,                    _if_conditional266) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_248=(char*)come_increment_ref_count(((char*)(right_value370=parse_word(info))));
                        right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional267=!is_type_name(word_248,info)&&*info->p==41,                        _if_conditional267) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional268=*info->p==40,                            _if_conditional268) {
                            }
                            else {
                                define_variable_between_brace_243=(_Bool)1;
                            }
                        }
                        word_248 = come_decrement_ref_count2(word_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_246 = come_decrement_ref_count2(fun_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_237;
    }
    define_function_flag_249=(_Bool)0;
    if(_if_conditional269=is_type_name_flag_236&&!define_function_pointer_result_function_242&&charp_operator_not_equals(buf,"__typeof__"),    _if_conditional269) {
        p_250=info->p;
        info->p=head;
        invalid_type_251=(_Bool)0;
        info->no_output_err=(_Bool)1;
        if(_if_conditional270=xisalpha(*info->p)||*info->p==95,        _if_conditional270) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value371=parse_type(info,(_Bool)0,(_Bool)1)));
            result_type_252=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_253=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_254=multiple_assign_var2->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,result_type_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_253 = come_decrement_ref_count2(fun_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->no_output_err=(_Bool)0;
        if(_if_conditional271=!info->define_struct,        _if_conditional271) {
            info->define_struct=(_Bool)0;
            word_255=((void*)0);
            if(_if_conditional272=xisalnum(*info->p)||*info->p==95,            _if_conditional272) {
                __dec_obj67=word_255;
                word_255=(char*)come_increment_ref_count(((char*)(right_value372=parse_word(info))));
                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional273=string_operator_equals(word_255,"extern"),                _if_conditional273) {
                    __dec_obj68=word_255;
                    word_255=(char*)come_increment_ref_count(((char*)(right_value373=parse_word(info))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                __dec_obj69=word_255;
                word_255=((void*)0);
                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_255) {
                if(_if_conditional275=is_type_name(word_255,info),                _if_conditional275) {
                    while(_while_condtional27=*info->p==42,                    _while_condtional27) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional276=*info->p==58,                    _if_conditional276) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional277=*info->p==58,                    _if_conditional277) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional278=xisalnum(*info->p)||*info->p==95,                    _if_conditional278) {
                        __dec_obj70=word_255;
                        word_255=(char*)come_increment_ref_count(((char*)(right_value374=parse_word(info))));
                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                if(_if_conditional279=strlen(word_255)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                _if_conditional279) {
                    if(is_type_name_flag_236) {
                        define_function_flag_249=(_Bool)1;
                    }
                }
            }
            word_255 = come_decrement_ref_count2(word_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_250;
        info->sline=sline_237;
    }
    define_variable_256=(_Bool)1;
    if(_if_conditional281=is_type_name_flag_236&&!define_function_pointer_result_function_242,    _if_conditional281) {
        p_257=info->p;
        info->p=head;
        if(_if_conditional282=!is_type_name_flag_236,        _if_conditional282) {
            define_variable_256=(_Bool)0;
        }
        if(_if_conditional283=xisalpha(*info->p)||*info->p==95,        _if_conditional283) {
            info->no_output_err=(_Bool)1;
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value375=parse_type(info,(_Bool)0,(_Bool)1)));
            result_type_258=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_259=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_260=multiple_assign_var3->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=(_Bool)0;
            if(_if_conditional284=*info->p==40,            _if_conditional284) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional285=*info->p==42,                _if_conditional285) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional286=xisalpha(*info->p)||*info->p==95,                    _if_conditional286) {
                        word_261=(char*)come_increment_ref_count(((char*)(right_value376=parse_word(info))));
                        right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional287=*info->p==41,                        _if_conditional287) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional288=*info->p==40,                            _if_conditional288) {
                                define_variable_256=(_Bool)1;
                            }
                        }
                        word_261 = come_decrement_ref_count2(word_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(_if_conditional289=xisalpha(*info->p)||*info->p==95,                    _if_conditional289) {
                        word_262=(char*)come_increment_ref_count(((char*)(right_value377=parse_word(info))));
                        right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional290=*info->p==41,                        _if_conditional290) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional291=!is_type_name(word_262,info)&&*info->p!=40,                            _if_conditional291) {
                                define_variable_256=(_Bool)1;
                            }
                        }
                        word_262 = come_decrement_ref_count2(word_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_259 = come_decrement_ref_count2(fun_name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_256=(_Bool)0;
        }
        else {
            if(define_variable_256) {
            }
            else {
                if(_if_conditional294=!(xisalpha(*info->p)||*info->p==95),                _if_conditional294) {
                    define_variable_256=(_Bool)0;
                }
                while(_while_condtional28=xisalpha(*info->p)||*info->p==95,                _while_condtional28) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional295=*info->p==40||*info->p==58,                _if_conditional295) {
                    define_variable_256=(_Bool)0;
                }
            }
        }
        info->p=p_257;
        info->sline=sline_237;
    }
    else {
        define_variable_256=(_Bool)0;
    }
    if(_if_conditional296=charp_operator_equals(buf,"template"),    _if_conditional296) {
        word_263=(char*)come_increment_ref_count(((char*)(right_value378=parse_word(info))));
        right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional297=*info->p==60,        _if_conditional297) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while(_while_condtional30=(_Bool)1,            _while_condtional30) {
                if(_if_conditional298=*info->p==62,                _if_conditional298) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(_if_conditional299=*info->p==44,                    _if_conditional299) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional300=*info->p==0,                        _if_conditional300) {
                            err_msg(info,"unexpected source end");
                            exit(2);
                        }
                        else {
                            word_266=(char*)come_increment_ref_count(((char*)(right_value379=parse_word(info))));
                            right_value379 = come_decrement_ref_count2(right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value380=string_clone(word_266)))));
                            right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            word_266 = come_decrement_ref_count2(word_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            node_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=parse_function(info))));
            if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1charph_reset(info->method_generics_type_names);
            __result98__ = __result_obj__ = node_267;
            if(node_267) { node_267 = come_decrement_ref_count2(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_263 = come_decrement_ref_count2(word_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result98__;
            if(node_267) { node_267 = come_decrement_ref_count2(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_263 = come_decrement_ref_count2(word_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_238) {
        }
        else {
            if(define_variable_between_brace_243) {
                info->p=head;
                info->sline=sline_237;
                __result99__ = __result_obj__ = ((struct sNode*)(right_value382=parse_global_variable(info)));
                if(right_value382) { right_value382 = come_decrement_ref_count2(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result99__;
            }
            else {
                if(define_function_pointer_result_function_242) {
                    header_head_268=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value383=parse_type(info,(_Bool)0,(_Bool)1)));
                    result_type_269=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_270=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_271=multiple_assign_var4->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional304=*info->p==40,                    _if_conditional304) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_272=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value385=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value384=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1124, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        param_names_273=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value387=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value386=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1125, "struct list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional305=*info->p==41,                        _if_conditional305) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while(_while_condtional31=(_Bool)1,                            _while_condtional31) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value388=parse_type(info,(_Bool)0,(_Bool)0)));
                                param_type_274=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_275=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_276=multiple_assign_var5->v3;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional306=!err_276,                                _if_conditional306) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_272,(struct sType*)come_increment_ref_count(param_type_274));
                                list$1charph_push_back(param_names_273,(char*)come_increment_ref_count(((char*)(right_value389=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_277)))));
                                right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional307=*info->p==44,                                _if_conditional307) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(_if_conditional308=*info->p==41,                                    _if_conditional308) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        come_call_finalizer2(sType_finalize,param_type_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        param_name_275 = come_decrement_ref_count2(param_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or )");
                                        exit(2);
                                    }
                                }
                                come_call_finalizer2(sType_finalize,param_type_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                param_name_275 = come_decrement_ref_count2(param_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        expected_next_character(41,info);
                        if(_if_conditional309=*info->p==40,                        _if_conditional309) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_278=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value391=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value390=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1167, "struct list$1sTypeph"))))))));
                            come_call_finalizer2(list$1sTypephp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            param_names2_279=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value393=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value392=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1168, "struct list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional310=*info->p==41,                            _if_conditional310) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while(_while_condtional32=(_Bool)1,                                _while_condtional32) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value394=parse_type(info,(_Bool)0,(_Bool)0)));
                                    param_type_280=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_281=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_282=multiple_assign_var6->v3;
                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional311=!err_282,                                    _if_conditional311) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_278,(struct sType*)come_increment_ref_count(param_type_280));
                                    list$1charph_push_back(param_names2_279,(char*)come_increment_ref_count(((char*)(right_value395=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_283)))));
                                    right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional312=*info->p==44,                                    _if_conditional312) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(_if_conditional313=*info->p==41,                                        _if_conditional313) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            come_call_finalizer2(sType_finalize,param_type_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            param_name_281 = come_decrement_ref_count2(param_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or )");
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer2(sType_finalize,param_type_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    param_name_281 = come_decrement_ref_count2(param_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_284=info->p;
                            result_type2_285=(struct sType*)come_increment_ref_count(((struct sType*)(right_value397=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value396=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1206, "struct sType")))),"lambda",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj72=result_type2_285->mResultType;
                            result_type2_285->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value399=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value398=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function2.c", 1208, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_269)))));
                            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj73=result_type2_285->mParamTypes;
                            result_type2_285->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value400=list$1sTypephp_clone(param_types2_278))));
                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj74=result_type2_285->mParamNames;
                            result_type2_285->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value401=list$1charphp_clone(param_names2_279))));
                            come_call_finalizer2(list$1charph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            result_type2_285->mVarArgs=(_Bool)0;
                            result_type2_285->mStatic=(_Bool)0;
                            var_args_286=(_Bool)0;
                            header_buf_287=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value403=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value402=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1216, "struct buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_buf_287,header_head_268,header_tail_284-header_head_268);
                            buffer_append_char(header_buf_287,0);
                            param_default_parametors_288=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value405=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value404=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1220, "struct list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            fun_289=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value410=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value406=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1222, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value407=__builtin_string(fun_name_270)))),(struct sType*)come_increment_ref_count(result_type2_285),(struct list$1sTypeph*)come_increment_ref_count(param_types_272),(struct list$1charph*)come_increment_ref_count(param_names_273),(struct list$1charph*)come_increment_ref_count(param_default_parametors_288),(_Bool)1,var_args_286,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value408=buffer_to_string(header_buf_287)))),(char*)come_increment_ref_count(((char*)(right_value409=__builtin_string(info->sname)))),info))));
                            come_call_finalizer2(sFun_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            fun2_293=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value412=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value411=__builtin_string(fun_name_270)))))));
                            right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional318=fun2_293==((void*)0)||fun2_293->mExternal,                            _if_conditional318) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value413=string_clone(fun_name_270)))),(struct sFun*)come_increment_ref_count(fun_289));
                                right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1234, "struct sNode");
                            _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value415=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value414=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1234, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_289),info))));
                            _inf_value1->_protocol_obj=_inf_obj_value1;
                            _inf_value1->finalize=(void*)sFunNode_finalize;
                            _inf_value1->clone=(void*)sFunNode_clone;
                            _inf_value1->compile=(void*)sFunNode_compile;
                            _inf_value1->sline=(void*)sFunNode_sline;
                            _inf_value1->sname=(void*)sFunNode_sname;
                            _inf_value1->terminated=(void*)sFunNode_terminated;
                            _inf_value1->kind=(void*)sFunNode_kind;
                            __result131__ = __result_obj__ = ((struct sNode*)(right_value457=_inf_value1));
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun2_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,param_types_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            fun_name_270 = come_decrement_ref_count2(fun_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFunNode_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFunNode_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value457) { right_value457 = come_decrement_ref_count2(right_value457, ((struct sNode*)right_value457)->finalize, ((struct sNode*)right_value457)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result131__;
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun2_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(sType_finalize,result_type_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    fun_name_270 = come_decrement_ref_count2(fun_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_249) {
                        info->p=head;
                        info->sline=sline_237;
                        __result132__ = __result_obj__ = ((struct sNode*)(right_value458=parse_function(info)));
                        if(right_value458) { right_value458 = come_decrement_ref_count2(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result132__;
                    }
                    else {
                        if(define_variable_256) {
                            info->p=head;
                            info->sline=sline_237;
                            __result133__ = __result_obj__ = ((struct sNode*)(right_value459=parse_global_variable(info)));
                            if(right_value459) { right_value459 = come_decrement_ref_count2(right_value459, ((struct sNode*)right_value459)->finalize, ((struct sNode*)right_value459)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result133__;
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_237;
    buf2_329=(char*)come_increment_ref_count(((char*)(right_value460=parse_word(info))));
    right_value460 = come_decrement_ref_count2(right_value460, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result134__ = __result_obj__ = ((struct sNode*)(right_value461=top_level_v98(buf2_329,head,head_sline,info)));
    buf2_329 = come_decrement_ref_count2(buf2_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value461) { right_value461 = come_decrement_ref_count2(right_value461, ((struct sNode*)right_value461)->finalize, ((struct sNode*)right_value461)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result134__;
    buf2_329 = come_decrement_ref_count2(buf2_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional262;
_Bool _if_conditional263;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional262=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional262) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional263=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional263) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_264;
_Bool _while_condtional29;
struct list_item$1charph* prev_it_265;
struct list$1charph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_264, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_265, 0, sizeof(struct list_item$1charph*));
                it_264=self->head;
                while(_while_condtional29=it_264!=((void*)0),                _while_condtional29) {
                    prev_it_265=it_264;
                    it_264=it_264->next;
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result97__ = __result_obj__ = self;
                return __result97__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj71;
struct tuple1$1sTypeph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj71=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                __result100__ = __result_obj__ = self;
                                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result100__;
                                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_290;
unsigned int hash_291;
unsigned int it_292;
_Bool _while_condtional33;
_Bool _if_conditional314;
_Bool _if_conditional315;
struct sFun* __result101__;
_Bool _if_conditional316;
_Bool _if_conditional317;
struct sFun* __result102__;
struct sFun* __result103__;
struct sFun* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_290, 0, sizeof(struct sFun*));
memset(&hash_291, 0, sizeof(unsigned int));
memset(&it_292, 0, sizeof(unsigned int));
                                memset(&default_value_290,0,sizeof(struct sFun*));
                                hash_291=string_get_hash_key(((char*)key))%self->size;
                                it_292=hash_291;
                                while(_while_condtional33=(_Bool)1,                                _while_condtional33) {
                                    if(_if_conditional314=self->item_existance[it_292],                                    _if_conditional314) {
                                        if(_if_conditional315=string_equals(self->keys[it_292],key),                                        _if_conditional315) {
                                            __result101__ = __result_obj__ = self->items[it_292];
                                            come_call_finalizer2(sFun_finalize,default_value_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result101__;
                                        }
                                        it_292++;
                                        if(_if_conditional316=it_292>=self->size,                                        _if_conditional316) {
                                            it_292=0;
                                        }
                                        else {
                                            if(_if_conditional317=it_292==hash_291,                                            _if_conditional317) {
                                                __result102__ = __result_obj__ = default_value_290;
                                                come_call_finalizer2(sFun_finalize,default_value_290, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result102__;
                                            }
                                        }
                                    }
                                    else {
                                        __result103__ = __result_obj__ = default_value_290;
                                        come_call_finalizer2(sFun_finalize,default_value_290, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result103__;
                                    }
                                }
                                __result104__ = __result_obj__ = default_value_290;
                                come_call_finalizer2(sFun_finalize,default_value_290, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result104__;
                                come_call_finalizer2(sFun_finalize,default_value_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional323;
struct sFun* __result106__;
void* right_value417;
struct sFun* result_295;
_Bool _if_conditional324;
void* right_value418;
char* __dec_obj75;
_Bool _if_conditional325;
void* right_value419;
struct sType* __dec_obj76;
_Bool _if_conditional326;
void* right_value420;
struct list$1sTypeph* __dec_obj77;
_Bool _if_conditional327;
void* right_value421;
struct list$1charph* __dec_obj78;
_Bool _if_conditional328;
void* right_value422;
struct list$1charph* __dec_obj79;
_Bool _if_conditional329;
void* right_value423;
struct sType* __dec_obj80;
_Bool _if_conditional330;
void* right_value448;
struct sBlock* __dec_obj89;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
void* right_value449;
struct buffer* __dec_obj90;
_Bool _if_conditional384;
void* right_value450;
struct buffer* __dec_obj91;
_Bool _if_conditional385;
void* right_value451;
struct buffer* __dec_obj92;
_Bool _if_conditional386;
void* right_value452;
struct buffer* __dec_obj93;
_Bool _if_conditional387;
_Bool _if_conditional388;
void* right_value453;
char* __dec_obj94;
_Bool _if_conditional389;
_Bool _if_conditional390;
void* right_value454;
char* __dec_obj95;
struct sFun* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value417 = (void*)0;
memset(&result_295, 0, sizeof(struct sFun*));
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value450 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value454 = (void*)0;
                                        if(_if_conditional323=self==(void*)0,                                        _if_conditional323) {
                                            __result106__ = __result_obj__ = (void*)0;
                                            return __result106__;
                                        }
                                        result_295=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value417=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun"))));
                                        come_call_finalizer2(sFun_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional324=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional324) {
                                            __dec_obj75=result_295->mName;
                                            result_295->mName=(char*)come_increment_ref_count(((char*)(right_value418=string_clone(self->mName))));
                                            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional325=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional325) {
                                            __dec_obj76=result_295->mResultType;
                                            result_295->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value419=sType_clone(self->mResultType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional326=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional326) {
                                            __dec_obj77=result_295->mParamTypes;
                                            result_295->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value420=list$1sTypephp_clone(self->mParamTypes))));
                                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional327=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional327) {
                                            __dec_obj78=result_295->mParamNames;
                                            result_295->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value421=list$1charphp_clone(self->mParamNames))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional328=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                        _if_conditional328) {
                                            __dec_obj79=result_295->mParamDefaultParametors;
                                            result_295->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value422=list$1charphp_clone(self->mParamDefaultParametors))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional329=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                        _if_conditional329) {
                                            __dec_obj80=result_295->mLambdaType;
                                            result_295->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value423=sType_clone(self->mLambdaType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional330=self!=((void*)0)&&self->mBlock!=((void*)0),                                        _if_conditional330) {
                                            __dec_obj89=result_295->mBlock;
                                            result_295->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value448=sBlock_clone(self->mBlock))));
                                            come_call_finalizer2(sBlock_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sBlock_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional381=self!=((void*)0),                                        _if_conditional381) {
                                            result_295->mExternal=self->mExternal;
                                        }
                                        if(_if_conditional382=self!=((void*)0),                                        _if_conditional382) {
                                            result_295->mVarArgs=self->mVarArgs;
                                        }
                                        if(_if_conditional383=self!=((void*)0)&&self->mSource!=((void*)0),                                        _if_conditional383) {
                                            __dec_obj90=result_295->mSource;
                                            result_295->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value449=buffer_clone(self->mSource))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional384=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                        _if_conditional384) {
                                            __dec_obj91=result_295->mSourceHead;
                                            result_295->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value450=buffer_clone(self->mSourceHead))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional385=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                        _if_conditional385) {
                                            __dec_obj92=result_295->mSourceHead2;
                                            result_295->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value451=buffer_clone(self->mSourceHead2))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional386=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                        _if_conditional386) {
                                            __dec_obj93=result_295->mSourceDefer;
                                            result_295->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value452=buffer_clone(self->mSourceDefer))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional387=self!=((void*)0),                                        _if_conditional387) {
                                            result_295->mStatic=self->mStatic;
                                        }
                                        if(_if_conditional388=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                        _if_conditional388) {
                                            __dec_obj94=result_295->mComeHeader;
                                            result_295->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value453=string_clone(self->mComeHeader))));
                                            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value453 = come_decrement_ref_count2(right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional389=self!=((void*)0),                                        _if_conditional389) {
                                            result_295->mCloner=self->mCloner;
                                        }
                                        if(_if_conditional390=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                        _if_conditional390) {
                                            __dec_obj95=result_295->mDeclareSName;
                                            result_295->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value454=string_clone(self->mDeclareSName))));
                                            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value454 = come_decrement_ref_count2(right_value454, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result129__ = __result_obj__ = result_295;
                                        come_call_finalizer2(sFun_finalize,result_295, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result129__;
                                        come_call_finalizer2(sFun_finalize,result_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional331;
struct sBlock* __result107__;
void* right_value424;
struct sBlock* result_296;
_Bool _if_conditional332;
void* right_value425;
struct list$1sNodeph* __dec_obj81;
_Bool _if_conditional333;
void* right_value447;
struct sVarTable* __dec_obj88;
struct sBlock* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value424 = (void*)0;
memset(&result_296, 0, sizeof(struct sBlock*));
right_value425 = (void*)0;
right_value447 = (void*)0;
                                                if(_if_conditional331=self==(void*)0,                                                _if_conditional331) {
                                                    __result107__ = __result_obj__ = (void*)0;
                                                    return __result107__;
                                                }
                                                result_296=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value424=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock"))));
                                                come_call_finalizer2(sBlock_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional332=self!=((void*)0)&&self->mNodes!=((void*)0),                                                _if_conditional332) {
                                                    __dec_obj81=result_296->mNodes;
                                                    result_296->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value425=list$1sNodephp_clone(self->mNodes))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional333=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                _if_conditional333) {
                                                    __dec_obj88=result_296->mVarTable;
                                                    result_296->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value447=sVarTable_clone(self->mVarTable))));
                                                    come_call_finalizer2(sVarTable_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sVarTable_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result128__ = __result_obj__ = result_296;
                                                come_call_finalizer2(sBlock_finalize,result_296, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result128__;
                                                come_call_finalizer2(sBlock_finalize,result_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional334;
struct sVarTable* __result108__;
void* right_value426;
struct sVarTable* result_297;
_Bool _if_conditional335;
void* right_value446;
struct map$2charphsVarph* __dec_obj87;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
struct sVarTable* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value426 = (void*)0;
memset(&result_297, 0, sizeof(struct sVarTable*));
right_value446 = (void*)0;
                                                        if(_if_conditional334=self==(void*)0,                                                        _if_conditional334) {
                                                            __result108__ = __result_obj__ = (void*)0;
                                                            return __result108__;
                                                        }
                                                        result_297=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value426=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable"))));
                                                        come_call_finalizer2(sVarTable_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional335=self!=((void*)0)&&self->mVars!=((void*)0),                                                        _if_conditional335) {
                                                            __dec_obj87=result_297->mVars;
                                                            result_297->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value446=map$2charphsVarphp_clone(self->mVars))));
                                                            come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(map$2charphsVarphp_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional378=self!=((void*)0),                                                        _if_conditional378) {
                                                            result_297->mGlobal=self->mGlobal;
                                                        }
                                                        if(_if_conditional379=self!=((void*)0),                                                        _if_conditional379) {
                                                            result_297->mParent=self->mParent;
                                                        }
                                                        if(_if_conditional380=self!=((void*)0),                                                        _if_conditional380) {
                                                            result_297->mID=self->mID;
                                                        }
                                                        __result127__ = __result_obj__ = result_297;
                                                        come_call_finalizer2(sVarTable_finalize,result_297, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result127__;
                                                        come_call_finalizer2(sVarTable_finalize,result_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional336;
struct map$2charphsVarph* __result109__;
void* right_value427;
void* right_value433;
struct map$2charphsVarph* result_303;
char* it_306;
struct sVar* default_value_309;
void* right_value434;
struct sVar* it2_312;
void* right_value445;
struct map$2charphsVarph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value427 = (void*)0;
right_value433 = (void*)0;
memset(&result_303, 0, sizeof(struct map$2charphsVarph*));
memset(&it_306, 0, sizeof(char*));
memset(&default_value_309, 0, sizeof(struct sVar*));
right_value434 = (void*)0;
memset(&it2_312, 0, sizeof(struct sVar*));
right_value445 = (void*)0;
                                                                if(_if_conditional336=self==((void*)0),                                                                _if_conditional336) {
                                                                    __result109__ = __result_obj__ = ((void*)0);
                                                                    return __result109__;
                                                                }
                                                                result_303=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value433=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value427=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1176, "struct map$2charphsVarph"))))))));
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                for(                                                                it_306=map$2charphsVarph_begin(self);                                                                !map$2charphsVarph_end(self);                                                                it_306=map$2charphsVarph_next(self)                                                                ){
                                                                    memset(&default_value_309,0,sizeof(struct sVar*));
                                                                    it2_312=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value434=map$2charphsVarph_at(self,it_306,default_value_309))));
                                                                    come_call_finalizer2(sVar_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    map$2charphsVarph_insert2(result_303,it_306,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value445=sVar_clone(it2_312)))));
                                                                    come_call_finalizer2(sVar_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(sVar_finalize,it2_312, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                __result126__ = __result_obj__ = result_303;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_303, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result126__;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value428;
void* right_value429;
void* right_value430;
int i_298;
void* right_value431;
void* right_value432;
struct list$1charp* __dec_obj82;
struct map$2charphsVarph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
memset(&i_298, 0, sizeof(int));
right_value431 = (void*)0;
right_value432 = (void*)0;
                                                                    self->keys=(char**)come_increment_ref_count(((char**)(right_value428=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1083, "char*"))));
                                                                    right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value429=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1084, "struct sVar*"))));
                                                                    come_call_finalizer2(sVar_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value430=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1085, "_Bool"))));
                                                                    right_value430 = come_decrement_ref_count2(right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    for(                                                                    i_298=0;                                                                    i_298<1024;                                                                    i_298++                                                                    ){
                                                                        self->item_existance[i_298]=(_Bool)0;
                                                                    }
                                                                    self->size=1024;
                                                                    self->len=0;
                                                                    __dec_obj82=self->key_list;
                                                                    self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value432=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value431=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1095, "struct list$1charp"))))))));
                                                                    come_call_finalizer2(list$1charp_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    self->it=0;
                                                                    __result111__ = __result_obj__ = self;
                                                                    come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result111__;
                                                                    come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional337=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional337) {
                                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional338=self!=((void*)0)&&self->mCValueName!=((void*)0),                                                                        _if_conditional338) {
                                                                            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional339=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional339) {
                                                                            come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional340=self!=((void*)0)&&self->mFunName!=((void*)0),                                                                        _if_conditional340) {
                                                                            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result110__ = __result_obj__ = self;
                                                                        come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result110__;
                                                                        come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_299;
_Bool _while_condtional34;
struct list_item$1charp* prev_it_300;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_299, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_300, 0, sizeof(struct list_item$1charp*));
                                                                            it_299=self->head;
                                                                            while(_while_condtional34=it_299!=((void*)0),                                                                            _while_condtional34) {
                                                                                prev_it_300=it_299;
                                                                                it_299=it_299->next;
                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_301;
_Bool _if_conditional341;
_Bool _if_conditional342;
int i_302;
_Bool _if_conditional343;
_Bool _if_conditional344;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_301, 0, sizeof(int));
memset(&i_302, 0, sizeof(int));
                                                                        for(                                                                        i_301=0;                                                                        i_301<self->size;                                                                        i_301++                                                                        ){
                                                                            if(_if_conditional341=self->item_existance[i_301],                                                                            _if_conditional341) {
                                                                                if(_if_conditional342=1,                                                                                _if_conditional342) {
                                                                                    come_call_finalizer2(sVar_finalize,self->items[i_301], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->items);
                                                                        for(                                                                        i_302=0;                                                                        i_302<self->size;                                                                        i_302++                                                                        ){
                                                                            if(_if_conditional343=self->item_existance[i_302],                                                                            _if_conditional343) {
                                                                                if(_if_conditional344=1,                                                                                _if_conditional344) {
                                                                                    self->keys[i_302] = come_decrement_ref_count2(self->keys[i_302], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->keys);
                                                                        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional345;
char* result_304;
char* __result112__;
_Bool _if_conditional346;
char* __result113__;
char* result_305;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_304, 0, sizeof(char*));
memset(&result_305, 0, sizeof(char*));
                                                                    if(_if_conditional345=self==((void*)0),                                                                    _if_conditional345) {
                                                                        memset(&result_304,0,sizeof(char*));
                                                                        __result112__ = __result_obj__ = result_304;
                                                                        return __result112__;
                                                                    }
                                                                    self->key_list->it=self->key_list->head;
                                                                    if(self->key_list->it) {
                                                                        __result113__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result113__;
                                                                    }
                                                                    memset(&result_305,0,sizeof(char*));
                                                                    __result114__ = __result_obj__ = result_305;
                                                                    return __result114__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    __result115__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                                    return __result115__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional347;
char* result_307;
char* __result116__;
_Bool _if_conditional348;
char* __result117__;
char* result_308;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_307, 0, sizeof(char*));
memset(&result_308, 0, sizeof(char*));
                                                                    if(_if_conditional347=self==((void*)0)||self->key_list->it==((void*)0),                                                                    _if_conditional347) {
                                                                        memset(&result_307,0,sizeof(char*));
                                                                        __result116__ = __result_obj__ = result_307;
                                                                        return __result116__;
                                                                    }
                                                                    self->key_list->it=self->key_list->it->next;
                                                                    if(self->key_list->it) {
                                                                        __result117__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result117__;
                                                                    }
                                                                    memset(&result_308,0,sizeof(char*));
                                                                    __result118__ = __result_obj__ = result_308;
                                                                    return __result118__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_310;
unsigned int it_311;
_Bool _while_condtional35;
_Bool _if_conditional349;
_Bool _if_conditional350;
struct sVar* __result119__;
_Bool _if_conditional351;
_Bool _if_conditional352;
struct sVar* __result120__;
struct sVar* __result121__;
struct sVar* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_310, 0, sizeof(unsigned int));
memset(&it_311, 0, sizeof(unsigned int));
                                                                        hash_310=string_get_hash_key(((char*)key))%self->size;
                                                                        it_311=hash_310;
                                                                        while(_while_condtional35=(_Bool)1,                                                                        _while_condtional35) {
                                                                            if(_if_conditional349=self->item_existance[it_311],                                                                            _if_conditional349) {
                                                                                if(_if_conditional350=string_equals(self->keys[it_311],key),                                                                                _if_conditional350) {
                                                                                    __result119__ = __result_obj__ = self->items[it_311];
                                                                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result119__;
                                                                                }
                                                                                it_311++;
                                                                                if(_if_conditional351=it_311>=self->size,                                                                                _if_conditional351) {
                                                                                    it_311=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional352=it_311==hash_310,                                                                                    _if_conditional352) {
                                                                                        __result120__ = __result_obj__ = default_value;
                                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result120__;
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                __result121__ = __result_obj__ = default_value;
                                                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result121__;
                                                                            }
                                                                        }
                                                                        __result122__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result122__;
                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional353;
unsigned int hash_324;
int it_325;
_Bool _while_condtional37;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool same_key_exist_326;
char* it2_327;
_Bool _if_conditional365;
_Bool _if_conditional366;
struct map$2charphsVarph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_324, 0, sizeof(unsigned int));
memset(&it_325, 0, sizeof(int));
memset(&same_key_exist_326, 0, sizeof(_Bool));
memset(&it2_327, 0, sizeof(char*));
                                                                        if(_if_conditional353=self->len*2>=self->size,                                                                        _if_conditional353) {
                                                                            map$2charphsVarph_rehash(self);
                                                                        }
                                                                        hash_324=string_get_hash_key(key)%self->size;
                                                                        it_325=hash_324;
                                                                        while(_while_condtional37=(_Bool)1,                                                                        _while_condtional37) {
                                                                            if(_if_conditional357=self->item_existance[it_325],                                                                            _if_conditional357) {
                                                                                if(_if_conditional358=string_equals(self->keys[it_325],key),                                                                                _if_conditional358) {
                                                                                    if(_if_conditional359=1,                                                                                    _if_conditional359) {
                                                                                        self->keys[it_325] = come_decrement_ref_count2(self->keys[it_325], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        list$1charp_remove(self->key_list,self->keys[it_325]);
                                                                                        self->keys[it_325]=(char*)come_increment_ref_count(key);
                                                                                    }
                                                                                    else {
                                                                                        list$1charp_remove(self->key_list,self->keys[it_325]);
                                                                                        self->keys[it_325]=key;
                                                                                    }
                                                                                    if(_if_conditional360=1,                                                                                    _if_conditional360) {
                                                                                        come_call_finalizer2(sVar_finalize,self->items[it_325], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        self->items[it_325]=(struct sVar*)come_increment_ref_count(item);
                                                                                    }
                                                                                    else {
                                                                                        self->items[it_325]=item;
                                                                                    }
                                                                                    break;
                                                                                }
                                                                                it_325++;
                                                                                if(_if_conditional361=it_325>=self->size,                                                                                _if_conditional361) {
                                                                                    it_325=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional362=it_325==hash_324,                                                                                    _if_conditional362) {
                                                                                        printf("unexpected error in map.insert\n");
                                                                                        stackframe();
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                self->item_existance[it_325]=(_Bool)1;
                                                                                if(_if_conditional363=1,                                                                                _if_conditional363) {
                                                                                    self->keys[it_325]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    self->keys[it_325]=key;
                                                                                }
                                                                                if(_if_conditional364=1,                                                                                _if_conditional364) {
                                                                                    self->items[it_325]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    self->items[it_325]=item;
                                                                                }
                                                                                self->len++;
                                                                                break;
                                                                            }
                                                                        }
                                                                        same_key_exist_326=(_Bool)0;
                                                                        for(                                                                        it2_327=list$1charp_begin(self->key_list);                                                                        !list$1charp_end(self->key_list);                                                                        it2_327=list$1charp_next(self->key_list)                                                                        ){
                                                                            if(_if_conditional365=string_equals(it2_327,key),                                                                            _if_conditional365) {
                                                                                same_key_exist_326=(_Bool)1;
                                                                            }
                                                                        }
                                                                        if(_if_conditional366=!same_key_exist_326,                                                                        _if_conditional366) {
                                                                            list$1charp_push_back(self->key_list,key);
                                                                        }
                                                                        __result123__ = __result_obj__ = self;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result123__;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_313;
void* right_value435;
char** keys_314;
void* right_value436;
struct sVar** items_315;
void* right_value437;
_Bool* item_existance_316;
int len_317;
char* it_318;
struct sVar* default_value_319;
void* right_value438;
struct sVar* it2_320;
unsigned int hash_321;
int n_322;
_Bool _while_condtional36;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
struct sVar* default_value_323;
void* right_value439;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_313, 0, sizeof(int));
right_value435 = (void*)0;
memset(&keys_314, 0, sizeof(char**));
right_value436 = (void*)0;
memset(&items_315, 0, sizeof(struct sVar**));
right_value437 = (void*)0;
memset(&item_existance_316, 0, sizeof(_Bool*));
memset(&len_317, 0, sizeof(int));
memset(&it_318, 0, sizeof(char*));
memset(&default_value_319, 0, sizeof(struct sVar*));
right_value438 = (void*)0;
memset(&it2_320, 0, sizeof(struct sVar*));
memset(&hash_321, 0, sizeof(unsigned int));
memset(&n_322, 0, sizeof(int));
memset(&default_value_323, 0, sizeof(struct sVar*));
right_value439 = (void*)0;
                                                                                size_313=self->size*10;
                                                                                keys_314=(char**)come_increment_ref_count(((char**)(right_value435=(char**)come_calloc(1, sizeof(char*)*(1*(size_313)), "./comelang2.h", 1331, "char*"))));
                                                                                right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                items_315=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value436=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_313)), "./comelang2.h", 1332, "struct sVar*"))));
                                                                                come_call_finalizer2(sVar_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                item_existance_316=(_Bool*)come_increment_ref_count(((_Bool*)(right_value437=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_313)), "./comelang2.h", 1333, "_Bool"))));
                                                                                right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                len_317=0;
                                                                                for(                                                                                it_318=map$2charphsVarph_begin(self);                                                                                !map$2charphsVarph_end(self);                                                                                it_318=map$2charphsVarph_next(self)                                                                                ){
                                                                                    memset(&default_value_319,0,sizeof(struct sVar*));
                                                                                    it2_320=((struct sVar*)(right_value438=map$2charphsVarph_at(self,it_318,default_value_319)));
                                                                                    come_call_finalizer2(sVar_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    hash_321=string_get_hash_key(it_318)%size_313;
                                                                                    n_322=hash_321;
                                                                                    while(_while_condtional36=(_Bool)1,                                                                                    _while_condtional36) {
                                                                                        if(_if_conditional354=item_existance_316[n_322],                                                                                        _if_conditional354) {
                                                                                            n_322++;
                                                                                            if(_if_conditional355=n_322>=size_313,                                                                                            _if_conditional355) {
                                                                                                n_322=0;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional356=n_322==hash_321,                                                                                                _if_conditional356) {
                                                                                                    printf("unexpected error in map.rehash(1)\n");
                                                                                                    stackframe();
                                                                                                    exit(2);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            item_existance_316[n_322]=(_Bool)1;
                                                                                            keys_314[n_322]=it_318;
                                                                                            items_315[n_322]=((struct sVar*)(right_value439=map$2charphsVarph_at(self,it_318,default_value_323)));
                                                                                            come_call_finalizer2(sVar_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            len_317++;
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                come_free((char*)self->items);
                                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_free((char*)self->keys);
                                                                                self->keys=keys_314;
                                                                                self->items=items_315;
                                                                                self->item_existance=item_existance_316;
                                                                                self->size=size_313;
                                                                                self->len=len_317;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional367;
struct sVar* __result124__;
void* right_value440;
struct sVar* result_328;
_Bool _if_conditional368;
void* right_value441;
char* __dec_obj83;
_Bool _if_conditional369;
void* right_value442;
char* __dec_obj84;
_Bool _if_conditional370;
void* right_value443;
struct sType* __dec_obj85;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
void* right_value444;
char* __dec_obj86;
struct sVar* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value440 = (void*)0;
memset(&result_328, 0, sizeof(struct sVar*));
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
                                                                        if(_if_conditional367=self==(void*)0,                                                                        _if_conditional367) {
                                                                            __result124__ = __result_obj__ = (void*)0;
                                                                            return __result124__;
                                                                        }
                                                                        result_328=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value440=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar"))));
                                                                        come_call_finalizer2(sVar_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional368=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional368) {
                                                                            __dec_obj83=result_328->mName;
                                                                            result_328->mName=(char*)come_increment_ref_count(((char*)(right_value441=string_clone(self->mName))));
                                                                            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value441 = come_decrement_ref_count2(right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        if(_if_conditional369=self!=((void*)0)&&self->mCValueName!=((void*)0),                                                                        _if_conditional369) {
                                                                            __dec_obj84=result_328->mCValueName;
                                                                            result_328->mCValueName=(char*)come_increment_ref_count(((char*)(right_value442=string_clone(self->mCValueName))));
                                                                            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        if(_if_conditional370=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional370) {
                                                                            __dec_obj85=result_328->mType;
                                                                            result_328->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value443=sType_clone(self->mType))));
                                                                            come_call_finalizer2(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            come_call_finalizer2(sType_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        if(_if_conditional371=self!=((void*)0),                                                                        _if_conditional371) {
                                                                            result_328->mBlockLevel=self->mBlockLevel;
                                                                        }
                                                                        if(_if_conditional372=self!=((void*)0),                                                                        _if_conditional372) {
                                                                            result_328->mGlobal=self->mGlobal;
                                                                        }
                                                                        if(_if_conditional373=self!=((void*)0),                                                                        _if_conditional373) {
                                                                            result_328->mAllocaValue=self->mAllocaValue;
                                                                        }
                                                                        if(_if_conditional374=self!=((void*)0),                                                                        _if_conditional374) {
                                                                            result_328->mFunctionParam=self->mFunctionParam;
                                                                        }
                                                                        if(_if_conditional375=self!=((void*)0),                                                                        _if_conditional375) {
                                                                            result_328->mNoFree=self->mNoFree;
                                                                        }
                                                                        if(_if_conditional376=self!=((void*)0)&&self->mFunName!=((void*)0),                                                                        _if_conditional376) {
                                                                            __dec_obj86=result_328->mFunName;
                                                                            result_328->mFunName=(char*)come_increment_ref_count(((char*)(right_value444=string_clone(self->mFunName))));
                                                                            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        __result125__ = __result_obj__ = result_328;
                                                                        come_call_finalizer2(sVar_finalize,result_328, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result125__;
                                                                        come_call_finalizer2(sVar_finalize,result_328, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional377;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional377=self!=((void*)0)&&self->key_list!=((void*)0),                                                                _if_conditional377) {
                                                                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __result_obj__;
void* right_value462;
struct sClass* klass_335;
void* right_value463;
struct sType* type_339;
void* right_value464;
struct sClass* generics_class_340;
void* right_value465;
_Bool generics_type_name_342;
void* right_value466;
_Bool mgenerics_type_name_343;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value462 = (void*)0;
memset(&klass_335, 0, sizeof(struct sClass*));
right_value463 = (void*)0;
memset(&type_339, 0, sizeof(struct sType*));
right_value464 = (void*)0;
memset(&generics_class_340, 0, sizeof(struct sClass*));
right_value465 = (void*)0;
memset(&generics_type_name_342, 0, sizeof(_Bool));
right_value466 = (void*)0;
memset(&mgenerics_type_name_343, 0, sizeof(_Bool));
    klass_335=((struct sClass*)(right_value462=map$2charphsClassphp_operator_load_element(info->classes,buf)));
    come_call_finalizer2(sClass_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_339=((struct sType*)(right_value463=map$2charphsTypephp_operator_load_element(info->types,buf)));
    come_call_finalizer2(sType_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    generics_class_340=((struct sClass*)(right_value464=map$2charphsClassphp_operator_load_element(info->generics_classes,buf)));
    come_call_finalizer2(sClass_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    generics_type_name_342=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value465=__builtin_string(buf)))));
    right_value465 = come_decrement_ref_count2(right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    mgenerics_type_name_343=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value466=__builtin_string(buf)))));
    right_value466 = come_decrement_ref_count2(right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result145__ = generics_class_340||generics_type_name_342||mgenerics_type_name_343||klass_335||type_339||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
    return __result145__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_330;
unsigned int hash_331;
unsigned int it_332;
_Bool _while_condtional38;
_Bool _if_conditional395;
_Bool _if_conditional396;
struct sClass* __result135__;
_Bool _if_conditional403;
_Bool _if_conditional404;
struct sClass* __result136__;
struct sClass* __result137__;
struct sClass* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_330, 0, sizeof(struct sClass*));
memset(&hash_331, 0, sizeof(unsigned int));
memset(&it_332, 0, sizeof(unsigned int));
        memset(&default_value_330,0,sizeof(struct sClass*));
        hash_331=string_get_hash_key(((char*)key))%self->size;
        it_332=hash_331;
        while(_while_condtional38=(_Bool)1,        _while_condtional38) {
            if(_if_conditional395=self->item_existance[it_332],            _if_conditional395) {
                if(_if_conditional396=string_equals(self->keys[it_332],key),                _if_conditional396) {
                    __result135__ = __result_obj__ = self->items[it_332];
                    come_call_finalizer2(sClass_finalize,default_value_330, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result135__;
                }
                it_332++;
                if(_if_conditional403=it_332>=self->size,                _if_conditional403) {
                    it_332=0;
                }
                else {
                    if(_if_conditional404=it_332==hash_331,                    _if_conditional404) {
                        __result136__ = __result_obj__ = default_value_330;
                        come_call_finalizer2(sClass_finalize,default_value_330, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result136__;
                    }
                }
            }
            else {
                __result137__ = __result_obj__ = default_value_330;
                come_call_finalizer2(sClass_finalize,default_value_330, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result137__;
            }
        }
        __result138__ = __result_obj__ = default_value_330;
        come_call_finalizer2(sClass_finalize,default_value_330, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result138__;
        come_call_finalizer2(sClass_finalize,default_value_330, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional402;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional397=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional397) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional398=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional398) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional402=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional402) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_333;
_Bool _while_condtional39;
struct list_item$1tuple2$2charphsTypephph* prev_it_334;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_333, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_334, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_333=self->head;
                                while(_while_condtional39=it_333!=((void*)0),                                _while_condtional39) {
                                    prev_it_334=it_333;
                                    it_333=it_333->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_334, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional399;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional399=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional399) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional400;
_Bool _if_conditional401;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional400=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional400) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional401=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional401) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_336;
unsigned int hash_337;
unsigned int it_338;
_Bool _while_condtional40;
_Bool _if_conditional405;
_Bool _if_conditional406;
struct sType* __result139__;
_Bool _if_conditional407;
_Bool _if_conditional408;
struct sType* __result140__;
struct sType* __result141__;
struct sType* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_336, 0, sizeof(struct sType*));
memset(&hash_337, 0, sizeof(unsigned int));
memset(&it_338, 0, sizeof(unsigned int));
        memset(&default_value_336,0,sizeof(struct sType*));
        hash_337=string_get_hash_key(((char*)key))%self->size;
        it_338=hash_337;
        while(_while_condtional40=(_Bool)1,        _while_condtional40) {
            if(_if_conditional405=self->item_existance[it_338],            _if_conditional405) {
                if(_if_conditional406=string_equals(self->keys[it_338],key),                _if_conditional406) {
                    __result139__ = __result_obj__ = self->items[it_338];
                    come_call_finalizer2(sType_finalize,default_value_336, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result139__;
                }
                it_338++;
                if(_if_conditional407=it_338>=self->size,                _if_conditional407) {
                    it_338=0;
                }
                else {
                    if(_if_conditional408=it_338==hash_337,                    _if_conditional408) {
                        __result140__ = __result_obj__ = default_value_336;
                        come_call_finalizer2(sType_finalize,default_value_336, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result140__;
                    }
                }
            }
            else {
                __result141__ = __result_obj__ = default_value_336;
                come_call_finalizer2(sType_finalize,default_value_336, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result141__;
            }
        }
        __result142__ = __result_obj__ = default_value_336;
        come_call_finalizer2(sType_finalize,default_value_336, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result142__;
        come_call_finalizer2(sType_finalize,default_value_336, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_341;
_Bool _if_conditional409;
_Bool __result143__;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_341, 0, sizeof(char*));
        for(        it_341=list$1charph_begin(self);        !list$1charph_end(self);        it_341=list$1charph_next(self)        ){
            if(_if_conditional409=string_operator_equals(it_341,item),            _if_conditional409) {
                __result143__ = (_Bool)1;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result143__;
            }
        }
        __result144__ = (_Bool)0;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result144__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_344;
int caller_line_345;
char* caller_sname_346;
char* last_code_347;
char* __dec_obj98;
char* last_code2_348;
char* __dec_obj99;
char* last_code3_349;
char* __dec_obj100;
void* right_value467;
char* sname_top_350;
int sline_top_351;
_Bool _if_conditional410;
void* right_value468;
struct sFun* funX_352;
_Bool _if_conditional411;
_Bool __result146__;
void* right_value469;
struct sType* result_type_353;
void* right_value470;
void* right_value471;
struct list$1sTypeph* param_types_354;
struct list$1sTypeph* o2_saved_355;
struct sType* it_358;
void* right_value472;
void* right_value473;
struct sType* param_type_361;
void* right_value474;
void* right_value475;
struct list$1charph* param_names_362;
void* right_value476;
struct list$1charph* param_default_parametors_363;
char* p_364;
int sline_365;
char* sname_366;
char* head_367;
struct buffer* source_368;
void* right_value477;
struct buffer* __dec_obj101;
struct sType* generics_type_saved_369;
void* right_value478;
struct sType* __dec_obj102;
struct list$1charph* method_generics_type_names_370;
void* right_value479;
struct list$1charph* __dec_obj103;
void* right_value480;
struct list$1charph* __dec_obj104;
char* __dec_obj105;
void* right_value481;
struct sBlock* block_371;
struct buffer* __dec_obj106;
char* __dec_obj107;
_Bool var_args_372;
void* right_value482;
void* right_value483;
void* right_value484;
void* right_value485;
void* right_value486;
struct sFun* fun_373;
void* right_value487;
void* right_value488;
void* right_value489;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value493;
struct sNode* node_375;
_Bool _if_conditional422;
_Bool __result156__;
struct sType* __dec_obj110;
struct list$1charph* __dec_obj111;
struct list$1charph* __dec_obj112;
void* right_value494;
char* __dec_obj113;
char* __dec_obj114;
char* __dec_obj115;
char* __dec_obj116;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_344, 0, sizeof(struct sFun*));
memset(&caller_line_345, 0, sizeof(int));
memset(&caller_sname_346, 0, sizeof(char*));
memset(&last_code_347, 0, sizeof(char*));
memset(&last_code2_348, 0, sizeof(char*));
memset(&last_code3_349, 0, sizeof(char*));
right_value467 = (void*)0;
memset(&sname_top_350, 0, sizeof(char*));
memset(&sline_top_351, 0, sizeof(int));
right_value468 = (void*)0;
memset(&funX_352, 0, sizeof(struct sFun*));
right_value469 = (void*)0;
memset(&result_type_353, 0, sizeof(struct sType*));
right_value470 = (void*)0;
right_value471 = (void*)0;
memset(&param_types_354, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_355, 0, sizeof(struct list$1sTypeph*));
memset(&it_358, 0, sizeof(struct sType*));
right_value472 = (void*)0;
right_value473 = (void*)0;
memset(&param_type_361, 0, sizeof(struct sType*));
right_value474 = (void*)0;
right_value475 = (void*)0;
memset(&param_names_362, 0, sizeof(struct list$1charph*));
right_value476 = (void*)0;
memset(&param_default_parametors_363, 0, sizeof(struct list$1charph*));
memset(&p_364, 0, sizeof(char*));
memset(&sline_365, 0, sizeof(int));
memset(&sname_366, 0, sizeof(char*));
memset(&head_367, 0, sizeof(char*));
memset(&source_368, 0, sizeof(struct buffer*));
right_value477 = (void*)0;
memset(&generics_type_saved_369, 0, sizeof(struct sType*));
right_value478 = (void*)0;
memset(&method_generics_type_names_370, 0, sizeof(struct list$1charph*));
right_value479 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
memset(&block_371, 0, sizeof(struct sBlock*));
memset(&var_args_372, 0, sizeof(_Bool));
right_value482 = (void*)0;
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
memset(&fun_373, 0, sizeof(struct sFun*));
right_value487 = (void*)0;
right_value488 = (void*)0;
right_value489 = (void*)0;
right_value493 = (void*)0;
memset(&node_375, 0, sizeof(struct sNode*));
right_value494 = (void*)0;
    caller_fun_344=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_345=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_346=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_347=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj98=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_348=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj99=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_349=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj100=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_350=(char*)come_increment_ref_count(((char*)(right_value467=__builtin_string(info->sname))));
    right_value467 = come_decrement_ref_count2(right_value467, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_top_351=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_352=((struct sFun*)(right_value468=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer2(sFun_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(funX_352) {
        __result146__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_347 = come_decrement_ref_count2(last_code_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_348 = come_decrement_ref_count2(last_code2_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_349 = come_decrement_ref_count2(last_code3_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_350 = come_decrement_ref_count2(sname_top_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result146__;
    }
    result_type_353=(struct sType*)come_increment_ref_count(((struct sType*)(right_value469=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_types_354=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value471=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value470=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1303, "struct list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_355=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_358=list$1sTypeph_begin((o2_saved_355));    !list$1sTypeph_end((o2_saved_355));    it_358=list$1sTypeph_next((o2_saved_355))    ){
        param_type_361=(struct sType*)come_increment_ref_count(((struct sType*)(right_value473=solve_generics(((struct sType*)(right_value472=sType_clone(it_358))),generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_type_361->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_354,(struct sType*)come_increment_ref_count(((struct sType*)(right_value474=sType_clone(param_type_361)))));
        come_call_finalizer2(sType_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,param_type_361, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_355, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    param_names_362=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value475=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer2(list$1charphp_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_363=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value476=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer2(list$1charphp_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    p_364=info->p;
    sline_365=info->sline;
    sname_366=(char*)come_increment_ref_count(info->sname);
    head_367=info->head;
    source_368=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj101=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value477=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer2(buffer_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_369=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj102=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value478=sType_clone(generics_type))));
    come_call_finalizer2(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    method_generics_type_names_370=info->method_generics_type_names;
    __dec_obj103=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value479=list$1charphp_clone(generics_fun->mMethodGenericsTypeNames))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1charph_reset(info->generics_type_names);
    __dec_obj104=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value480=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj105=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_371=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value481=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->head=head_367;
    __dec_obj106=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_368);
    come_call_finalizer2(buffer_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    info->p=p_364;
    info->sline=sline_365;
    __dec_obj107=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_366);
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_353->mInline=(_Bool)0;
    var_args_372=generics_fun->mVarArgs;
    fun_373=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value486=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value482=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1349, "struct sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_353),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value483=list$1sTypephp_clone(param_types_354)))),(struct list$1charph*)come_increment_ref_count(param_names_362),(struct list$1charph*)come_increment_ref_count(param_default_parametors_363),(_Bool)0,var_args_372,(struct sBlock*)come_increment_ref_count(block_371),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value484=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value485=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value485 = come_decrement_ref_count2(right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value487=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_373));
    right_value487 = come_decrement_ref_count2(right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1356, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value489=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value488=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1356, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_373),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sFunNode_sline;
    _inf_value2->sname=(void*)sFunNode_sname;
    _inf_value2->terminated=(void*)sFunNode_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    node_375=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value493=_inf_value2)));
    come_call_finalizer2(sFunNode_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunNode_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value493) { right_value493 = come_decrement_ref_count2(right_value493, ((struct sNode*)right_value493)->finalize, ((struct sNode*)right_value493)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if(_if_conditional422=!node_compile(node_375,info),    _if_conditional422) {
        __result156__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_347 = come_decrement_ref_count2(last_code_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_348 = come_decrement_ref_count2(last_code2_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_349 = come_decrement_ref_count2(last_code3_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_350 = come_decrement_ref_count2(sname_top_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_353, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_354, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_362, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_363, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_366 = come_decrement_ref_count2(sname_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_368, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,generics_type_saved_369, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_373, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result156__;
    }
    __dec_obj110=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_369);
    come_call_finalizer2(sType_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj111=method_generics_type_names_370;
    __dec_obj112=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_370);
    come_call_finalizer2(list$1charph_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj113=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value494=__builtin_string(sname_top_350))));
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value494 = come_decrement_ref_count2(right_value494, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=sline_top_351;
    __dec_obj114=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_347);
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj115=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_348);
    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj116=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_349);
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_344;
    info->caller_line=caller_line_345;
    info->caller_sname=caller_sname_346;
    __result157__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_347 = come_decrement_ref_count2(last_code_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_348 = come_decrement_ref_count2(last_code2_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_349 = come_decrement_ref_count2(last_code3_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_350 = come_decrement_ref_count2(sname_top_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_353, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_354, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_362, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_363, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_366 = come_decrement_ref_count2(sname_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_368, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_369, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_373, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result157__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_347 = come_decrement_ref_count2(last_code_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_348 = come_decrement_ref_count2(last_code2_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_349 = come_decrement_ref_count2(last_code3_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_350 = come_decrement_ref_count2(sname_top_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_353, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_354, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_362, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_363, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_366 = come_decrement_ref_count2(sname_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_368, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_369, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_373, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional412;
struct sType* result_356;
struct sType* __result147__;
_Bool _if_conditional413;
struct sType* __result148__;
struct sType* result_357;
struct sType* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_356, 0, sizeof(struct sType*));
memset(&result_357, 0, sizeof(struct sType*));
        if(_if_conditional412=self==((void*)0),        _if_conditional412) {
            memset(&result_356,0,sizeof(struct sType*));
            __result147__ = __result_obj__ = result_356;
            return __result147__;
        }
        self->it=self->head;
        if(self->it) {
            __result148__ = __result_obj__ = self->it->item;
            return __result148__;
        }
        memset(&result_357,0,sizeof(struct sType*));
        __result149__ = __result_obj__ = result_357;
        return __result149__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
        __result150__ = self==((void*)0)||self->it==((void*)0);
        return __result150__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional414;
struct sType* result_359;
struct sType* __result151__;
_Bool _if_conditional415;
struct sType* __result152__;
struct sType* result_360;
struct sType* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_359, 0, sizeof(struct sType*));
memset(&result_360, 0, sizeof(struct sType*));
        if(_if_conditional414=self==((void*)0)||self->it==((void*)0),        _if_conditional414) {
            memset(&result_359,0,sizeof(struct sType*));
            __result151__ = __result_obj__ = result_359;
            return __result151__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result152__ = __result_obj__ = self->it->item;
            return __result152__;
        }
        memset(&result_360,0,sizeof(struct sType*));
        __result153__ = __result_obj__ = result_360;
        return __result153__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_376;
void* right_value495;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type_377;
char* var_name_378;
_Bool err_379;
_Bool _if_conditional423;
_Bool method_definition_380;
char* p_381;
int sline_382;
void* right_value496;
void* right_value497;
struct buffer* buf2_383;
_Bool _while_condtional41;
_Bool _while_condtional42;
_Bool _while_condtional43;
_Bool _if_conditional424;
char* fun_name_384;
char* base_fun_name_385;
_Bool _if_conditional425;
void* right_value498;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_386;
char* name_387;
_Bool err_388;
_Bool _if_conditional426;
void* right_value499;
void* right_value500;
char* __dec_obj117;
_Bool _if_conditional427;
void* right_value501;
void* right_value502;
char* __dec_obj118;
void* right_value503;
char* __dec_obj119;
void* right_value504;
void* right_value505;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_389;
struct list$1charph* param_names_390;
struct list$1charph* param_default_parametors_391;
_Bool var_args_392;
char* header_tail_393;
void* right_value506;
void* right_value507;
struct buffer* header_buf_394;
int version_395;
_Bool _if_conditional431;
int n_396;
_Bool _while_condtional44;
_Bool _if_conditional432;
void* right_value508;
struct sBlock* block_397;
static int lambda_num_398=0;
void* right_value509;
char* fun_name_399;
void* right_value510;
void* right_value511;
void* right_value512;
void* right_value513;
void* right_value514;
struct sFun* fun_400;
void* right_value515;
void* right_value516;
struct sFun* fun2_401;
_Bool _if_conditional433;
void* right_value517;
void* right_value518;
void* right_value519;
struct sNode* _inf_value3;
struct sLambdaNode* _inf_obj_value3;
void* right_value522;
struct sNode* __result160__;
_Bool _if_conditional439;
void* right_value523;
char* none_generics_name_403;
void* right_value524;
char* generics_sname_404;
int generics_sline_405;
void* right_value525;
char* block_406;
void* right_value526;
void* right_value527;
void* right_value528;
void* right_value529;
void* right_value530;
void* right_value531;
struct sGenericsFun* fun_407;
void* right_value532;
char* fun_name3_408;
void* right_value538;
struct sNode* __result174__;
_Bool _if_conditional462;
void* right_value539;
struct sBlock* block_430;
_Bool static__431;
_Bool _if_conditional463;
_Bool _if_conditional464;
void* right_value540;
void* right_value541;
char* new_fun_name_432;
void* right_value542;
char* __dec_obj121;
void* right_value543;
void* right_value544;
void* right_value545;
void* right_value546;
void* right_value547;
void* right_value548;
struct sFun* fun_433;
void* right_value549;
void* right_value550;
struct sFun* fun2_434;
_Bool _if_conditional465;
void* right_value551;
void* right_value552;
void* right_value553;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* right_value557;
struct sNode* __result177__;
_Bool _if_conditional472;
_Bool _if_conditional473;
void* right_value558;
char* new_fun_name_436;
void* right_value559;
char* __dec_obj124;
_Bool _if_conditional474;
void* right_value560;
void* right_value561;
void* right_value562;
void* right_value563;
void* right_value564;
struct sFun* fun_437;
void* right_value565;
void* right_value566;
struct sFun* fun2_438;
_Bool _if_conditional475;
void* right_value567;
void* right_value568;
void* right_value569;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value573;
struct sNode* __result180__;
void* right_value574;
char* asm_fun_440;
_Bool _if_conditional482;
void* right_value575;
char* __dec_obj127;
void* right_value576;
void* right_value577;
void* right_value578;
void* right_value579;
void* right_value580;
struct sFun* fun_441;
void* right_value581;
void* right_value582;
struct sFun* fun2_442;
_Bool _if_conditional483;
void* right_value583;
void* right_value584;
void* right_value585;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value589;
struct sNode* __result183__;
struct sNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_376, 0, sizeof(char*));
right_value495 = (void*)0;
memset(&result_type_377, 0, sizeof(struct sType*));
memset(&var_name_378, 0, sizeof(char*));
memset(&err_379, 0, sizeof(_Bool));
memset(&result_type_377, 0, sizeof(struct sType*));
memset(&var_name_378, 0, sizeof(char*));
memset(&err_379, 0, sizeof(_Bool));
memset(&method_definition_380, 0, sizeof(_Bool));
memset(&p_381, 0, sizeof(char*));
memset(&sline_382, 0, sizeof(int));
right_value496 = (void*)0;
right_value497 = (void*)0;
memset(&buf2_383, 0, sizeof(struct buffer*));
memset(&fun_name_384, 0, sizeof(char*));
memset(&base_fun_name_385, 0, sizeof(char*));
right_value498 = (void*)0;
memset(&obj_type_386, 0, sizeof(struct sType*));
memset(&name_387, 0, sizeof(char*));
memset(&err_388, 0, sizeof(_Bool));
memset(&obj_type_386, 0, sizeof(struct sType*));
memset(&name_387, 0, sizeof(char*));
memset(&err_388, 0, sizeof(_Bool));
right_value499 = (void*)0;
right_value500 = (void*)0;
right_value501 = (void*)0;
right_value502 = (void*)0;
right_value503 = (void*)0;
right_value504 = (void*)0;
right_value505 = (void*)0;
memset(&param_types_389, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_390, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_391, 0, sizeof(struct list$1charph*));
memset(&var_args_392, 0, sizeof(_Bool));
memset(&param_types_389, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_390, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_391, 0, sizeof(struct list$1charph*));
memset(&var_args_392, 0, sizeof(_Bool));
memset(&header_tail_393, 0, sizeof(char*));
right_value506 = (void*)0;
right_value507 = (void*)0;
memset(&header_buf_394, 0, sizeof(struct buffer*));
memset(&version_395, 0, sizeof(int));
memset(&n_396, 0, sizeof(int));
right_value508 = (void*)0;
memset(&block_397, 0, sizeof(struct sBlock*));
right_value509 = (void*)0;
memset(&fun_name_399, 0, sizeof(char*));
right_value510 = (void*)0;
right_value511 = (void*)0;
right_value512 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
memset(&fun_400, 0, sizeof(struct sFun*));
right_value515 = (void*)0;
right_value516 = (void*)0;
memset(&fun2_401, 0, sizeof(struct sFun*));
right_value517 = (void*)0;
right_value518 = (void*)0;
right_value519 = (void*)0;
right_value522 = (void*)0;
right_value523 = (void*)0;
memset(&none_generics_name_403, 0, sizeof(char*));
right_value524 = (void*)0;
memset(&generics_sname_404, 0, sizeof(char*));
memset(&generics_sline_405, 0, sizeof(int));
right_value525 = (void*)0;
memset(&block_406, 0, sizeof(char*));
right_value526 = (void*)0;
right_value527 = (void*)0;
right_value528 = (void*)0;
right_value529 = (void*)0;
right_value530 = (void*)0;
right_value531 = (void*)0;
memset(&fun_407, 0, sizeof(struct sGenericsFun*));
right_value532 = (void*)0;
memset(&fun_name3_408, 0, sizeof(char*));
right_value538 = (void*)0;
right_value539 = (void*)0;
memset(&block_430, 0, sizeof(struct sBlock*));
memset(&static__431, 0, sizeof(_Bool));
right_value540 = (void*)0;
right_value541 = (void*)0;
memset(&new_fun_name_432, 0, sizeof(char*));
right_value542 = (void*)0;
right_value543 = (void*)0;
right_value544 = (void*)0;
right_value545 = (void*)0;
right_value546 = (void*)0;
right_value547 = (void*)0;
right_value548 = (void*)0;
memset(&fun_433, 0, sizeof(struct sFun*));
right_value549 = (void*)0;
right_value550 = (void*)0;
memset(&fun2_434, 0, sizeof(struct sFun*));
right_value551 = (void*)0;
right_value552 = (void*)0;
right_value553 = (void*)0;
right_value557 = (void*)0;
right_value558 = (void*)0;
memset(&new_fun_name_436, 0, sizeof(char*));
right_value559 = (void*)0;
right_value560 = (void*)0;
right_value561 = (void*)0;
right_value562 = (void*)0;
right_value563 = (void*)0;
right_value564 = (void*)0;
memset(&fun_437, 0, sizeof(struct sFun*));
right_value565 = (void*)0;
right_value566 = (void*)0;
memset(&fun2_438, 0, sizeof(struct sFun*));
right_value567 = (void*)0;
right_value568 = (void*)0;
right_value569 = (void*)0;
right_value573 = (void*)0;
right_value574 = (void*)0;
memset(&asm_fun_440, 0, sizeof(char*));
right_value575 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
memset(&fun_441, 0, sizeof(struct sFun*));
right_value581 = (void*)0;
right_value582 = (void*)0;
memset(&fun2_442, 0, sizeof(struct sFun*));
right_value583 = (void*)0;
right_value584 = (void*)0;
right_value585 = (void*)0;
right_value589 = (void*)0;
    header_head_376=info->p;
    multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value495=parse_type(info,(_Bool)0,(_Bool)1)));
    result_type_377=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
    var_name_378=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    err_379=multiple_assign_var7->v3;
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional423=!err_379,    _if_conditional423) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    method_definition_380=(_Bool)0;
    {
        p_381=info->p;
        sline_382=info->sline;
        buf2_383=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value497=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value496=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1397, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional41=xisalnum(*info->p)||*info->p==95,        _while_condtional41) {
            buffer_append_char(buf2_383,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(_while_condtional42=*info->p==42,        _while_condtional42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(_while_condtional43=*info->p==37,        _while_condtional43) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(_if_conditional424=buffer_length(buf2_383)>0&&*info->p==58&&*(info->p+1)==58,        _if_conditional424) {
            method_definition_380=(_Bool)1;
        }
        info->p=p_381;
        info->sline=sline_382;
        come_call_finalizer2(buffer_finalize,buf2_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_385=((void*)0);
    if(method_definition_380) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value498=parse_type(info,(_Bool)0,(_Bool)1)));
        obj_type_386=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_387=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_388=multiple_assign_var8->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional426=!err_388,        _if_conditional426) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        base_fun_name_385=(char*)come_increment_ref_count(((char*)(right_value499=parse_word(info))));
        right_value499 = come_decrement_ref_count2(right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj117=fun_name_384;
        fun_name_384=(char*)come_increment_ref_count(((char*)(right_value500=create_method_name(obj_type_386,(_Bool)0,base_fun_name_385,info))));
        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value500 = come_decrement_ref_count2(right_value500, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,obj_type_386, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_387 = come_decrement_ref_count2(name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type) {
            base_fun_name_385=(char*)come_increment_ref_count(((char*)(right_value501=parse_word(info))));
            right_value501 = come_decrement_ref_count2(right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj118=fun_name_384;
            fun_name_384=(char*)come_increment_ref_count(((char*)(right_value502=create_method_name(info->impl_type,(_Bool)0,base_fun_name_385,info))));
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value502 = come_decrement_ref_count2(right_value502, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj119=fun_name_384;
            fun_name_384=(char*)come_increment_ref_count(((char*)(right_value503=parse_word(info))));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value503 = come_decrement_ref_count2(right_value503, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_385=(char*)come_increment_ref_count(((char*)(right_value504=__builtin_string(fun_name_384))));
            right_value504 = come_decrement_ref_count2(right_value504, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value505=parse_params(info)));
    param_types_389=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_390=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_391=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_392=multiple_assign_var9->v4;
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    header_tail_393=info->p;
    header_buf_394=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value507=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value506=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1450, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(header_buf_394,header_head_376,header_tail_393-header_head_376);
    buffer_append_char(header_buf_394,0);
    version_395=0;
    if(_if_conditional431=strmemcmp(info->p,"version"),    _if_conditional431) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_396=0;
        while(_while_condtional44=xisdigit(*info->p),        _while_condtional44) {
            n_396=n_396*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_395=n_396;
    }
    if(_if_conditional432=charp_operator_equals(base_fun_name_385,"lambda"),    _if_conditional432) {
        block_397=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value508=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        lambda_num_398++;
        fun_name_399=(char*)come_increment_ref_count(((char*)(right_value509=xsprintf("lambda%d",lambda_num_398))));
        right_value509 = come_decrement_ref_count2(right_value509, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_377->mStatic=(_Bool)0;
        fun_400=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value514=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value510=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1480, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value511=__builtin_string(fun_name_399)))),(struct sType*)come_increment_ref_count(result_type_377),(struct list$1sTypeph*)come_increment_ref_count(param_types_389),(struct list$1charph*)come_increment_ref_count(param_names_390),(struct list$1charph*)come_increment_ref_count(param_default_parametors_391),(_Bool)0,var_args_392,(struct sBlock*)come_increment_ref_count(block_397),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value512=buffer_to_string(header_buf_394)))),(char*)come_increment_ref_count(((char*)(right_value513=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value511 = come_decrement_ref_count2(right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value512 = come_decrement_ref_count2(right_value512, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value513 = come_decrement_ref_count2(right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_401=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value516=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value515=__builtin_string(fun_name_399)))))));
        right_value515 = come_decrement_ref_count2(right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional433=fun2_401==((void*)0)||fun2_401->mExternal,        _if_conditional433) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value517=string_clone(fun_name_399)))),(struct sFun*)come_increment_ref_count(fun_400));
            right_value517 = come_decrement_ref_count2(right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        base_fun_name_385 = come_decrement_ref_count2(base_fun_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1492, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sLambdaNode*)(right_value519=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value518=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function2.c", 1492, "struct sLambdaNode")))),fun_400,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sLambdaNode_finalize;
        _inf_value3->clone=(void*)sLambdaNode_clone;
        _inf_value3->compile=(void*)sLambdaNode_compile;
        _inf_value3->sline=(void*)sLambdaNode_sline;
        _inf_value3->sname=(void*)sLambdaNode_sname;
        _inf_value3->terminated=(void*)sLambdaNode_terminated;
        _inf_value3->kind=(void*)sLambdaNode_kind;
        __result160__ = __result_obj__ = ((struct sNode*)(right_value522=_inf_value3));
        come_call_finalizer2(sBlock_finalize,block_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_399 = come_decrement_ref_count2(fun_name_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_401, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_378 = come_decrement_ref_count2(var_name_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_384 = come_decrement_ref_count2(fun_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_390, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_391, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sLambdaNode_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sLambdaNode_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value522) { right_value522 = come_decrement_ref_count2(right_value522, ((struct sNode*)right_value522)->finalize, ((struct sNode*)right_value522)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result160__;
        come_call_finalizer2(sBlock_finalize,block_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_399 = come_decrement_ref_count2(fun_name_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_401, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional439=info->impl_type&&list$1charph_length(info->generics_type_names)>0,        _if_conditional439) {
            none_generics_name_403=(char*)come_increment_ref_count(((char*)(right_value523=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value523 = come_decrement_ref_count2(right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sname_404=(char*)come_increment_ref_count(((char*)(right_value524=__builtin_string(info->sname))));
            right_value524 = come_decrement_ref_count2(right_value524, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sline_405=info->sline;
            block_406=(char*)come_increment_ref_count(((char*)(right_value525=skip_block(info))));
            right_value525 = come_decrement_ref_count2(right_value525, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_407=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value531=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value526=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function2.c", 1502, "struct sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value527=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value528=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value529=__builtin_string(fun_name_384)))),(struct sType*)come_increment_ref_count(result_type_377),(struct list$1sTypeph*)come_increment_ref_count(param_types_389),(struct list$1charph*)come_increment_ref_count(param_names_390),(struct list$1charph*)come_increment_ref_count(param_default_parametors_391),var_args_392,(char*)come_increment_ref_count(block_406),info,(char*)come_increment_ref_count(((char*)(right_value530=__builtin_string(generics_sname_404)))),generics_sline_405))));
            come_call_finalizer2(sGenericsFun_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value529 = come_decrement_ref_count2(right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value530 = come_decrement_ref_count2(right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGenericsFun_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            fun_name3_408=(char*)come_increment_ref_count(((char*)(right_value532=xsprintf("%s_%s",none_generics_name_403,base_fun_name_385))));
            right_value532 = come_decrement_ref_count2(right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value538=__builtin_string(fun_name3_408)))),(struct sGenericsFun*)come_increment_ref_count(fun_407));
            right_value538 = come_decrement_ref_count2(right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_385 = come_decrement_ref_count2(base_fun_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result174__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_403 = come_decrement_ref_count2(none_generics_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_404 = come_decrement_ref_count2(generics_sname_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_406 = come_decrement_ref_count2(block_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_407, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_408 = come_decrement_ref_count2(fun_name3_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_378 = come_decrement_ref_count2(var_name_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_384 = come_decrement_ref_count2(fun_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_390, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_391, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_buf_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result174__;
            none_generics_name_403 = come_decrement_ref_count2(none_generics_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_404 = come_decrement_ref_count2(generics_sname_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_406 = come_decrement_ref_count2(block_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_407, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_408 = come_decrement_ref_count2(fun_name3_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional462=*info->p==123,            _if_conditional462) {
                block_430=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value539=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                static__431=(_Bool)0;
                if(result_type_377->mStatic) {
                    result_type_377->mStatic=(_Bool)0;
                    static__431=(_Bool)1;
                }
                if(_if_conditional464=version_395>0,                _if_conditional464) {
                    new_fun_name_432=(char*)come_increment_ref_count(((char*)(right_value541=xsprintf("%s_v%d",((char*)(right_value540=__builtin_string(fun_name_384))),version_395))));
                    right_value540 = come_decrement_ref_count2(right_value540, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value541 = come_decrement_ref_count2(right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj121=fun_name_384;
                    fun_name_384=(char*)come_increment_ref_count(((char*)(right_value542=__builtin_string(new_fun_name_432))));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value542 = come_decrement_ref_count2(right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_432 = come_decrement_ref_count2(new_fun_name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                fun_433=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value548=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value543=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1526, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value544=__builtin_string(fun_name_384)))),(struct sType*)come_increment_ref_count(result_type_377),(struct list$1sTypeph*)come_increment_ref_count(param_types_389),(struct list$1charph*)come_increment_ref_count(param_names_390),(struct list$1charph*)come_increment_ref_count(param_default_parametors_391),(_Bool)0,var_args_392,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value545=sBlock_clone(block_430)))),static__431,(char*)come_increment_ref_count(((char*)(right_value546=buffer_to_string(header_buf_394)))),(char*)come_increment_ref_count(((char*)(right_value547=__builtin_string(info->sname)))),info))));
                come_call_finalizer2(sFun_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value544 = come_decrement_ref_count2(right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sBlock_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value546 = come_decrement_ref_count2(right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value547 = come_decrement_ref_count2(right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFun_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                fun2_434=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value550=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value549=__builtin_string(fun_name_384)))))));
                right_value549 = come_decrement_ref_count2(right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFun_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional465=fun2_434==((void*)0)||fun2_434->mExternal,                _if_conditional465) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value551=string_clone(fun_name_384)))),(struct sFun*)come_increment_ref_count(fun_433));
                    right_value551 = come_decrement_ref_count2(right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                base_fun_name_385 = come_decrement_ref_count2(base_fun_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1543, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(right_value553=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value552=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1543, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_433),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sFunNode_finalize;
                _inf_value4->clone=(void*)sFunNode_clone;
                _inf_value4->compile=(void*)sFunNode_compile;
                _inf_value4->sline=(void*)sFunNode_sline;
                _inf_value4->sname=(void*)sFunNode_sname;
                _inf_value4->terminated=(void*)sFunNode_terminated;
                _inf_value4->kind=(void*)sFunNode_kind;
                __result177__ = __result_obj__ = ((struct sNode*)(right_value557=_inf_value4));
                come_call_finalizer2(sBlock_finalize,block_430, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun2_434, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_378 = come_decrement_ref_count2(var_name_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_384 = come_decrement_ref_count2(fun_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_390, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_391, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_buf_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFunNode_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFunNode_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value557) { right_value557 = come_decrement_ref_count2(right_value557, ((struct sNode*)right_value557)->finalize, ((struct sNode*)right_value557)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result177__;
                come_call_finalizer2(sBlock_finalize,block_430, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun2_434, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional472=xisalpha(*info->p)||*info->p==95||*info->p==59,                _if_conditional472) {
                    if(_if_conditional473=version_395>0,                    _if_conditional473) {
                        new_fun_name_436=(char*)come_increment_ref_count(((char*)(right_value558=xsprintf("%s_v%d",fun_name_384,version_395))));
                        right_value558 = come_decrement_ref_count2(right_value558, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj124=fun_name_384;
                        fun_name_384=(char*)come_increment_ref_count(((char*)(right_value559=__builtin_string(new_fun_name_436))));
                        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value559 = come_decrement_ref_count2(right_value559, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_436 = come_decrement_ref_count2(new_fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional474=*info->p==59,                    _if_conditional474) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        result_type_377->mStatic=(_Bool)0;
                        fun_437=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value564=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value560=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1557, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value561=__builtin_string(fun_name_384)))),(struct sType*)come_increment_ref_count(result_type_377),(struct list$1sTypeph*)come_increment_ref_count(param_types_389),(struct list$1charph*)come_increment_ref_count(param_names_390),(struct list$1charph*)come_increment_ref_count(param_default_parametors_391),(_Bool)1,var_args_392,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value562=buffer_to_string(header_buf_394)))),(char*)come_increment_ref_count(((char*)(right_value563=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value562 = come_decrement_ref_count2(right_value562, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value563 = come_decrement_ref_count2(right_value563, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_438=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value566=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value565=__builtin_string(fun_name_384)))))));
                        right_value565 = come_decrement_ref_count2(right_value565, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional475=fun2_438==((void*)0)||fun2_438->mExternal,                        _if_conditional475) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value567=string_clone(fun_name_384)))),(struct sFun*)come_increment_ref_count(fun_437));
                            right_value567 = come_decrement_ref_count2(right_value567, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        base_fun_name_385 = come_decrement_ref_count2(base_fun_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1570, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value569=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value568=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1570, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_437),info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sFunNode_finalize;
                        _inf_value5->clone=(void*)sFunNode_clone;
                        _inf_value5->compile=(void*)sFunNode_compile;
                        _inf_value5->sline=(void*)sFunNode_sline;
                        _inf_value5->sname=(void*)sFunNode_sname;
                        _inf_value5->terminated=(void*)sFunNode_terminated;
                        _inf_value5->kind=(void*)sFunNode_kind;
                        __result180__ = __result_obj__ = ((struct sNode*)(right_value573=_inf_value5));
                        come_call_finalizer2(sFun_finalize,fun_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_378 = come_decrement_ref_count2(var_name_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_384 = come_decrement_ref_count2(fun_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_390, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_391, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value573) { right_value573 = come_decrement_ref_count2(right_value573, ((struct sNode*)right_value573)->finalize, ((struct sNode*)right_value573)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result180__;
                        come_call_finalizer2(sFun_finalize,fun_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        asm_fun_440=(char*)come_increment_ref_count(((char*)(right_value574=parse_attribute(info))));
                        right_value574 = come_decrement_ref_count2(right_value574, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional482=string_operator_not_equals(asm_fun_440,""),                        _if_conditional482) {
                            __dec_obj127=fun_name_384;
                            fun_name_384=(char*)come_increment_ref_count(((char*)(right_value575=__builtin_string(asm_fun_440))));
                            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value575 = come_decrement_ref_count2(right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        expected_next_character(59,info);
                        result_type_377->mStatic=(_Bool)0;
                        fun_441=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value580=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value576=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1583, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value577=__builtin_string(fun_name_384)))),(struct sType*)come_increment_ref_count(result_type_377),(struct list$1sTypeph*)come_increment_ref_count(param_types_389),(struct list$1charph*)come_increment_ref_count(param_names_390),(struct list$1charph*)come_increment_ref_count(param_default_parametors_391),(_Bool)1,var_args_392,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value578=buffer_to_string(header_buf_394)))),(char*)come_increment_ref_count(((char*)(right_value579=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value576, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value577 = come_decrement_ref_count2(right_value577, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value578 = come_decrement_ref_count2(right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value579 = come_decrement_ref_count2(right_value579, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_442=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value582=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value581=__builtin_string(fun_name_384)))))));
                        right_value581 = come_decrement_ref_count2(right_value581, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value582, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional483=fun2_442==((void*)0)||fun2_442->mExternal,                        _if_conditional483) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value583=string_clone(fun_name_384)))),(struct sFun*)come_increment_ref_count(fun_441));
                            right_value583 = come_decrement_ref_count2(right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        base_fun_name_385 = come_decrement_ref_count2(base_fun_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1596, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value585=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value584=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1596, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_441),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sFunNode_finalize;
                        _inf_value6->clone=(void*)sFunNode_clone;
                        _inf_value6->compile=(void*)sFunNode_compile;
                        _inf_value6->sline=(void*)sFunNode_sline;
                        _inf_value6->sname=(void*)sFunNode_sname;
                        _inf_value6->terminated=(void*)sFunNode_terminated;
                        _inf_value6->kind=(void*)sFunNode_kind;
                        __result183__ = __result_obj__ = ((struct sNode*)(right_value589=_inf_value6));
                        asm_fun_440 = come_decrement_ref_count2(asm_fun_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_442, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_378 = come_decrement_ref_count2(var_name_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_384 = come_decrement_ref_count2(fun_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_390, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_391, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result183__;
                        asm_fun_440 = come_decrement_ref_count2(asm_fun_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_442, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"invalid character(%c)(2)\n",*info->p);
                    exit(2);
                }
            }
        }
    }
    base_fun_name_385 = come_decrement_ref_count2(base_fun_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result184__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer2(sType_finalize,result_type_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_378 = come_decrement_ref_count2(var_name_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_384 = come_decrement_ref_count2(fun_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_390, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_391, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result184__;
    come_call_finalizer2(sType_finalize,result_type_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_378 = come_decrement_ref_count2(var_name_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_384 = come_decrement_ref_count2(fun_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_390, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_391, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional428=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional428) {
            come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional429=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional429) {
            come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional430=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional430) {
            come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional434;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional434=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional434) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional435;
struct sLambdaNode* __result158__;
void* right_value520;
struct sLambdaNode* result_402;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
void* right_value521;
char* __dec_obj120;
struct sLambdaNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value520 = (void*)0;
memset(&result_402, 0, sizeof(struct sLambdaNode*));
right_value521 = (void*)0;
            if(_if_conditional435=self==(void*)0,            _if_conditional435) {
                __result158__ = __result_obj__ = (void*)0;
                return __result158__;
            }
            result_402=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value520=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode"))));
            come_call_finalizer2(sLambdaNode_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional436=self!=((void*)0),            _if_conditional436) {
                result_402->mFun=self->mFun;
            }
            if(_if_conditional437=self!=((void*)0),            _if_conditional437) {
                result_402->sline=self->sline;
            }
            if(_if_conditional438=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional438) {
                __dec_obj120=result_402->sname;
                result_402->sname=(char*)come_increment_ref_count(((char*)(right_value521=string_clone(self->sname))));
                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value521 = come_decrement_ref_count2(right_value521, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result159__ = __result_obj__ = result_402;
            come_call_finalizer2(sLambdaNode_finalize,result_402, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result159__;
            come_call_finalizer2(sLambdaNode_finalize,result_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
            __result161__ = self->len;
            return __result161__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
_Bool _if_conditional440;
unsigned int hash_426;
unsigned int it_427;
_Bool _while_condtional47;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool _if_conditional458;
_Bool _if_conditional459;
_Bool same_key_exist_428;
char* it2_429;
_Bool _if_conditional460;
_Bool _if_conditional461;
struct map$2charphsGenericsFunph* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_426, 0, sizeof(unsigned int));
memset(&it_427, 0, sizeof(unsigned int));
memset(&same_key_exist_428, 0, sizeof(_Bool));
memset(&it2_429, 0, sizeof(char*));
                if(_if_conditional440=self->len*10>=self->size,                _if_conditional440) {
                    map$2charphsGenericsFunph_rehash(self);
                }
                hash_426=string_get_hash_key(key)%self->size;
                it_427=hash_426;
                while(_while_condtional47=(_Bool)1,                _while_condtional47) {
                    if(_if_conditional452=self->item_existance[it_427],                    _if_conditional452) {
                        if(_if_conditional453=string_equals(self->keys[it_427],key),                        _if_conditional453) {
                            if(_if_conditional454=1,                            _if_conditional454) {
                                list$1charp_remove(self->key_list,self->keys[it_427]);
                                self->keys[it_427] = come_decrement_ref_count2(self->keys[it_427], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                self->keys[it_427]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                list$1charp_remove(self->key_list,self->keys[it_427]);
                                self->keys[it_427]=key;
                            }
                            if(_if_conditional455=1,                            _if_conditional455) {
                                come_call_finalizer2(sGenericsFun_finalize,self->items[it_427], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->items[it_427]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_427]=item;
                            }
                            break;
                        }
                        it_427++;
                        if(_if_conditional456=it_427>=self->size,                        _if_conditional456) {
                            it_427=0;
                        }
                        else {
                            if(_if_conditional457=it_427==hash_426,                            _if_conditional457) {
                                printf("unexpected error in map.insert\n");
                                stackframe();
                                exit(2);
                            }
                        }
                    }
                    else {
                        self->item_existance[it_427]=(_Bool)1;
                        if(_if_conditional458=1,                        _if_conditional458) {
                            self->keys[it_427]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            self->keys[it_427]=key;
                        }
                        if(_if_conditional459=1,                        _if_conditional459) {
                            self->items[it_427]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_427]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_428=(_Bool)0;
                for(                it2_429=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_429=list$1charp_next(self->key_list)                ){
                    if(_if_conditional460=string_equals(it2_429,key),                    _if_conditional460) {
                        same_key_exist_428=(_Bool)1;
                    }
                }
                if(_if_conditional461=!same_key_exist_428,                _if_conditional461) {
                    list$1charp_push_back(self->key_list,key);
                }
                __result173__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result173__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int size_409;
void* right_value533;
char** keys_410;
void* right_value534;
struct sGenericsFun** items_411;
void* right_value535;
_Bool* item_existance_412;
int len_413;
char* it_416;
struct sGenericsFun* default_value_419;
void* right_value536;
struct sGenericsFun* it2_422;
unsigned int hash_423;
int n_424;
_Bool _while_condtional46;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
struct sGenericsFun* default_value_425;
void* right_value537;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_409, 0, sizeof(int));
right_value533 = (void*)0;
memset(&keys_410, 0, sizeof(char**));
right_value534 = (void*)0;
memset(&items_411, 0, sizeof(struct sGenericsFun**));
right_value535 = (void*)0;
memset(&item_existance_412, 0, sizeof(_Bool*));
memset(&len_413, 0, sizeof(int));
memset(&it_416, 0, sizeof(char*));
memset(&default_value_419, 0, sizeof(struct sGenericsFun*));
right_value536 = (void*)0;
memset(&it2_422, 0, sizeof(struct sGenericsFun*));
memset(&hash_423, 0, sizeof(unsigned int));
memset(&n_424, 0, sizeof(int));
memset(&default_value_425, 0, sizeof(struct sGenericsFun*));
right_value537 = (void*)0;
                        size_409=self->size*10;
                        keys_410=(char**)come_increment_ref_count(((char**)(right_value533=(char**)come_calloc(1, sizeof(char*)*(1*(size_409)), "./comelang2.h", 1331, "char*"))));
                        right_value533 = come_decrement_ref_count2(right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        items_411=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value534=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_409)), "./comelang2.h", 1332, "struct sGenericsFun*"))));
                        come_call_finalizer2(sGenericsFun_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        item_existance_412=(_Bool*)come_increment_ref_count(((_Bool*)(right_value535=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_409)), "./comelang2.h", 1333, "_Bool"))));
                        right_value535 = come_decrement_ref_count2(right_value535, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        len_413=0;
                        for(                        it_416=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_416=map$2charphsGenericsFunph_next(self)                        ){
                            memset(&default_value_419,0,sizeof(struct sGenericsFun*));
                            it2_422=((struct sGenericsFun*)(right_value536=map$2charphsGenericsFunph_at(self,it_416,default_value_419)));
                            come_call_finalizer2(sGenericsFun_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            hash_423=string_get_hash_key(it_416)%size_409;
                            n_424=hash_423;
                            while(_while_condtional46=(_Bool)1,                            _while_condtional46) {
                                if(_if_conditional449=item_existance_412[n_424],                                _if_conditional449) {
                                    n_424++;
                                    if(_if_conditional450=n_424>=size_409,                                    _if_conditional450) {
                                        n_424=0;
                                    }
                                    else {
                                        if(_if_conditional451=n_424==hash_423,                                        _if_conditional451) {
                                            printf("unexpected error in map.rehash(1)\n");
                                            stackframe();
                                            exit(2);
                                        }
                                    }
                                }
                                else {
                                    item_existance_412[n_424]=(_Bool)1;
                                    keys_410[n_424]=it_416;
                                    items_411[n_424]=((struct sGenericsFun*)(right_value537=map$2charphsGenericsFunph_at(self,it_416,default_value_425)));
                                    come_call_finalizer2(sGenericsFun_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    len_413++;
                                    break;
                                }
                            }
                        }
                        come_free((char*)self->items);
                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_free((char*)self->keys);
                        self->keys=keys_410;
                        self->items=items_411;
                        self->item_existance=item_existance_412;
                        self->size=size_409;
                        self->len=len_413;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional441;
char* result_414;
char* __result162__;
_Bool _if_conditional442;
char* __result163__;
char* result_415;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_414, 0, sizeof(char*));
memset(&result_415, 0, sizeof(char*));
                            if(_if_conditional441=self==((void*)0),                            _if_conditional441) {
                                memset(&result_414,0,sizeof(char*));
                                __result162__ = __result_obj__ = result_414;
                                return __result162__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result163__ = __result_obj__ = self->key_list->it->item;
                                return __result163__;
                            }
                            memset(&result_415,0,sizeof(char*));
                            __result164__ = __result_obj__ = result_415;
                            return __result164__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result165__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result165__;
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional443;
char* result_417;
char* __result166__;
_Bool _if_conditional444;
char* __result167__;
char* result_418;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_417, 0, sizeof(char*));
memset(&result_418, 0, sizeof(char*));
                            if(_if_conditional443=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional443) {
                                memset(&result_417,0,sizeof(char*));
                                __result166__ = __result_obj__ = result_417;
                                return __result166__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result167__ = __result_obj__ = self->key_list->it->item;
                                return __result167__;
                            }
                            memset(&result_418,0,sizeof(char*));
                            __result168__ = __result_obj__ = result_418;
                            return __result168__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_420;
unsigned int it_421;
_Bool _while_condtional45;
_Bool _if_conditional445;
_Bool _if_conditional446;
struct sGenericsFun* __result169__;
_Bool _if_conditional447;
_Bool _if_conditional448;
struct sGenericsFun* __result170__;
struct sGenericsFun* __result171__;
struct sGenericsFun* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_420, 0, sizeof(unsigned int));
memset(&it_421, 0, sizeof(unsigned int));
                                hash_420=string_get_hash_key(((char*)key))%self->size;
                                it_421=hash_420;
                                while(_while_condtional45=(_Bool)1,                                _while_condtional45) {
                                    if(_if_conditional445=self->item_existance[it_421],                                    _if_conditional445) {
                                        if(_if_conditional446=string_equals(self->keys[it_421],key),                                        _if_conditional446) {
                                            __result169__ = __result_obj__ = self->items[it_421];
                                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result169__;
                                        }
                                        it_421++;
                                        if(_if_conditional447=it_421>=self->size,                                        _if_conditional447) {
                                            it_421=0;
                                        }
                                        else {
                                            if(_if_conditional448=it_421==hash_420,                                            _if_conditional448) {
                                                __result170__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result170__;
                                            }
                                        }
                                    }
                                    else {
                                        __result171__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result171__;
                                    }
                                }
                                __result172__ = __result_obj__ = default_value;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result172__;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_444;
char* __dec_obj130;
char* last_code2_445;
char* __dec_obj131;
char* last_code3_446;
char* __dec_obj132;
struct sClass* current_stack_frame_struct_447;
struct sFun* finalizer_448;
void* right_value590;
char* real_fun_name_449;
void* right_value591;
struct sType* type2_450;
struct sClass* klass_451;
_Bool _if_conditional490;
void* right_value592;
void* right_value593;
struct buffer* source_452;
void* right_value594;
struct list$1tuple2$2charphsTypephph* o2_saved_453;
struct tuple2$2charphsTypeph* it_456;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_459;
struct sType* field_type_460;
_Bool _if_conditional495;
_Bool _if_conditional496;
char* p_462;
int sline_463;
char* sname_464;
char* head_465;
struct buffer* source3_466;
struct buffer* __dec_obj133;
void* right_value595;
char* __dec_obj134;
void* right_value596;
struct sBlock* block_467;
void* right_value597;
void* right_value598;
struct sType* result_type_468;
void* right_value599;
char* name_469;
void* right_value600;
struct sType* self_type_470;
_Bool _if_conditional497;
struct sType* __list_values21___471[1];
void* right_value601;
void* right_value602;
struct list$1sTypeph* param_types_472;
void* right_value603;
char* __list_values22___473[1];
void* right_value604;
void* right_value605;
struct list$1charph* param_names_474;
void* right_value606;
void* right_value607;
struct list$1charph* param_default_parametors_475;
void* right_value608;
void* right_value609;
struct buffer* header_buf_476;
void* right_value610;
int i_477;
void* right_value611;
struct sType* param_type_478;
void* right_value612;
char* param_name_482;
void* right_value613;
_Bool _if_conditional500;
void* right_value614;
void* right_value615;
void* right_value616;
void* right_value617;
struct sFun* fun_483;
void* right_value618;
void* right_value619;
struct sFun* fun2_484;
_Bool _if_conditional501;
void* right_value620;
void* right_value621;
void* right_value622;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value626;
struct sNode* node_486;
_Bool _if_conditional508;
struct buffer* __dec_obj137;
char* __dec_obj138;
char* __dec_obj139;
char* __dec_obj140;
char* __dec_obj141;
void* right_value627;
void* right_value628;
struct tuple2$2sFunpcharph* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_444, 0, sizeof(char*));
memset(&last_code2_445, 0, sizeof(char*));
memset(&last_code3_446, 0, sizeof(char*));
memset(&current_stack_frame_struct_447, 0, sizeof(struct sClass*));
memset(&finalizer_448, 0, sizeof(struct sFun*));
right_value590 = (void*)0;
memset(&real_fun_name_449, 0, sizeof(char*));
right_value591 = (void*)0;
memset(&type2_450, 0, sizeof(struct sType*));
memset(&klass_451, 0, sizeof(struct sClass*));
right_value592 = (void*)0;
right_value593 = (void*)0;
memset(&source_452, 0, sizeof(struct buffer*));
right_value594 = (void*)0;
memset(&o2_saved_453, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_456, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_459, 0, sizeof(char*));
memset(&field_type_460, 0, sizeof(struct sType*));
memset(&name_459, 0, sizeof(char*));
memset(&field_type_460, 0, sizeof(struct sType*));
memset(&p_462, 0, sizeof(char*));
memset(&sline_463, 0, sizeof(int));
memset(&sname_464, 0, sizeof(char*));
memset(&head_465, 0, sizeof(char*));
memset(&source3_466, 0, sizeof(struct buffer*));
right_value595 = (void*)0;
right_value596 = (void*)0;
memset(&block_467, 0, sizeof(struct sBlock*));
right_value597 = (void*)0;
right_value598 = (void*)0;
memset(&result_type_468, 0, sizeof(struct sType*));
right_value599 = (void*)0;
memset(&name_469, 0, sizeof(char*));
right_value600 = (void*)0;
memset(&self_type_470, 0, sizeof(struct sType*));
right_value601 = (void*)0;
right_value602 = (void*)0;
memset(&param_types_472, 0, sizeof(struct list$1sTypeph*));
right_value603 = (void*)0;
right_value604 = (void*)0;
right_value605 = (void*)0;
memset(&param_names_474, 0, sizeof(struct list$1charph*));
right_value606 = (void*)0;
right_value607 = (void*)0;
memset(&param_default_parametors_475, 0, sizeof(struct list$1charph*));
right_value608 = (void*)0;
right_value609 = (void*)0;
memset(&header_buf_476, 0, sizeof(struct buffer*));
right_value610 = (void*)0;
memset(&i_477, 0, sizeof(int));
right_value611 = (void*)0;
memset(&param_type_478, 0, sizeof(struct sType*));
right_value612 = (void*)0;
memset(&param_name_482, 0, sizeof(char*));
right_value613 = (void*)0;
right_value614 = (void*)0;
right_value615 = (void*)0;
right_value616 = (void*)0;
right_value617 = (void*)0;
memset(&fun_483, 0, sizeof(struct sFun*));
right_value618 = (void*)0;
right_value619 = (void*)0;
memset(&fun2_484, 0, sizeof(struct sFun*));
right_value620 = (void*)0;
right_value621 = (void*)0;
right_value622 = (void*)0;
right_value626 = (void*)0;
memset(&node_486, 0, sizeof(struct sNode*));
right_value627 = (void*)0;
right_value628 = (void*)0;
    last_code_444=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj130=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_445=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj131=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_446=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj132=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_447=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_448=((void*)0);
    real_fun_name_449=(char*)come_increment_ref_count(((char*)(right_value590=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value590 = come_decrement_ref_count2(right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_450=(struct sType*)come_increment_ref_count(((struct sType*)(right_value591=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value591, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_450;
    klass_451=type->mClass;
    if(_if_conditional490=type->mPointerNum>0&&klass_451->mStruct,    _if_conditional490) {
        source_452=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value593=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value592=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1632, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value593, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_452,123);
        klass_451=((struct sClass*)(right_value594=map$2charphsClassphp_operator_load_element(info->classes,klass_451->mName)));
        come_call_finalizer2(sClass_finalize,right_value594, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_453=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_451->mFields)),it_456=list$1tuple2$2charphsTypephph_begin((o2_saved_453));        !list$1tuple2$2charphsTypephph_end((o2_saved_453));        it_456=list$1tuple2$2charphsTypephph_next((o2_saved_453))        ){
            multiple_assign_var10=it_456;
            name_459=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_460=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(_if_conditional495=string_operator_equals(type->mClass->mName,field_type_460->mClass->mName)&&type->mPointerNum==field_type_460->mPointerNum&&field_type_460->mHeap,            _if_conditional495) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_460->mHeap) {
                char source2_461[1024];
                memset(&source2_461, 0, sizeof(char)                *(1024)                );
                snprintf(source2_461,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_459,name_459);
                buffer_append_str(source_452,source2_461);
            }
            name_459 = come_decrement_ref_count2(name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_460, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_453, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_452,125);
        p_462=info->p;
        sline_463=info->sline;
        sname_464=(char*)come_increment_ref_count(info->sname);
        head_465=info->head;
        source3_466=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj133=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_452);
        come_call_finalizer2(buffer_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_452->buf;
        info->head=source_452->buf;
        __dec_obj134=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value595=__builtin_string(real_fun_name_449))));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value595 = come_decrement_ref_count2(right_value595, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_467=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value596=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value596, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_468=(struct sType*)come_increment_ref_count(((struct sType*)(right_value598=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value597=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1671, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value597, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value598, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_469=(char*)come_increment_ref_count(((char*)(right_value599=string_clone(real_fun_name_449))));
        right_value599 = come_decrement_ref_count2(right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_470=(struct sType*)come_increment_ref_count(((struct sType*)(right_value600=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value600, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_470->mHeap=(_Bool)0;
        if(_if_conditional497=self_type_470->mPointerNum>1,        _if_conditional497) {
            self_type_470->mPointerNum=1;
        }
        {__list_values21___471[0]=come_increment_ref_count(self_type_470);
}        param_types_472=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value602=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value601=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1678, "struct list$1sTypeph")))),1,__list_values21___471))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value601, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values22___473[0]=come_increment_ref_count(((char*)(right_value603=__builtin_string("self"))));
}        param_names_474=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value605=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value604=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1679, "struct list$1charph")))),1,__list_values22___473))));
        right_value603 = come_decrement_ref_count2(right_value603, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value604, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_475=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value607=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value606=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1680, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value606, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_475,((void*)0));
        header_buf_476=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value609=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value608=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1683, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value608, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_476,((char*)(right_value610=make_come_type_name_string(result_type_468,info))));
        right_value610 = come_decrement_ref_count2(right_value610, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_476," ");
        buffer_append_str(header_buf_476,real_fun_name_449);
        buffer_append_str(header_buf_476,"(");
        for(        i_477=0;        i_477<list$1sTypeph_length(param_types_472);        i_477++        ){
            param_type_478=((struct sType*)(right_value611=list$1sTypephp_operator_load_element(param_types_472,i_477)));
            come_call_finalizer2(sType_finalize,right_value611, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_482=((char*)(right_value612=list$1charphp_operator_load_element(param_names_474,i_477)));
            right_value612 = come_decrement_ref_count2(right_value612, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_476,((char*)(right_value613=make_come_type_name_string(param_type_478,info))));
            right_value613 = come_decrement_ref_count2(right_value613, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_476," ");
            buffer_append_str(header_buf_476,param_name_482);
            if(_if_conditional500=i_477!=list$1sTypeph_length(param_types_472)-1,            _if_conditional500) {
                buffer_append_str(header_buf_476,",");
            }
        }
        buffer_append_str(header_buf_476,")");
        result_type_468->mStatic=(_Bool)0;
        fun_483=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value617=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value614=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1706, "struct sFun")))),(char*)come_increment_ref_count(name_469),(struct sType*)come_increment_ref_count(result_type_468),(struct list$1sTypeph*)come_increment_ref_count(param_types_472),(struct list$1charph*)come_increment_ref_count(param_names_474),(struct list$1charph*)come_increment_ref_count(param_default_parametors_475),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_467),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value615=buffer_to_string(header_buf_476)))),(char*)come_increment_ref_count(((char*)(right_value616=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value614, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value615 = come_decrement_ref_count2(right_value615, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value616 = come_decrement_ref_count2(right_value616, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_484=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value619=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value618=__builtin_string(fun_name)))))));
        right_value618 = come_decrement_ref_count2(right_value618, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value619, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional501=fun2_484==((void*)0)||fun2_484->mExternal,        _if_conditional501) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value620=string_clone(name_469)))),(struct sFun*)come_increment_ref_count(fun_483));
            right_value620 = come_decrement_ref_count2(right_value620, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_448=fun_483;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1722, "struct sNode");
        _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value622=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value621=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1722, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_483),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFunNode_finalize;
        _inf_value7->clone=(void*)sFunNode_clone;
        _inf_value7->compile=(void*)sFunNode_compile;
        _inf_value7->sline=(void*)sFunNode_sline;
        _inf_value7->sname=(void*)sFunNode_sname;
        _inf_value7->terminated=(void*)sFunNode_terminated;
        _inf_value7->kind=(void*)sFunNode_kind;
        node_486=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value626=_inf_value7)));
        come_call_finalizer2(sFunNode_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value622, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value626) { right_value626 = come_decrement_ref_count2(right_value626, ((struct sNode*)right_value626)->finalize, ((struct sNode*)right_value626)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional508=!node_compile(node_486,info),        _if_conditional508) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj137=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_466);
        come_call_finalizer2(buffer_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_462;
        info->head=head_465;
        info->sline=sline_463;
        __dec_obj138=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_464);
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_452, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_464 = come_decrement_ref_count2(sname_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_466, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_469 = come_decrement_ref_count2(name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_470, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_472, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_474, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_476, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_483, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_484, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_486) { node_486 = come_decrement_ref_count2(node_486, ((struct sNode*)node_486)->finalize, ((struct sNode*)node_486)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_447;
    __dec_obj139=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_444);
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj140=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_445);
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj141=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_446);
    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result198__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value628=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value627=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1742, "struct tuple2$2sFunpcharph")))),finalizer_448,(char*)come_increment_ref_count(real_fun_name_449))));
    last_code_444 = come_decrement_ref_count2(last_code_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_445 = come_decrement_ref_count2(last_code2_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_446 = come_decrement_ref_count2(last_code3_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_449 = come_decrement_ref_count2(real_fun_name_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_450, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value627 = come_decrement_ref_count2(right_value627, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result198__;
    last_code_444 = come_decrement_ref_count2(last_code_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_445 = come_decrement_ref_count2(last_code2_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_446 = come_decrement_ref_count2(last_code3_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_449 = come_decrement_ref_count2(real_fun_name_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_450, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional491;
struct tuple2$2charphsTypeph* result_454;
struct tuple2$2charphsTypeph* __result185__;
_Bool _if_conditional492;
struct tuple2$2charphsTypeph* __result186__;
struct tuple2$2charphsTypeph* result_455;
struct tuple2$2charphsTypeph* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_454, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_455, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional491=self==((void*)0),            _if_conditional491) {
                memset(&result_454,0,sizeof(struct tuple2$2charphsTypeph*));
                __result185__ = __result_obj__ = result_454;
                return __result185__;
            }
            self->it=self->head;
            if(self->it) {
                __result186__ = __result_obj__ = self->it->item;
                return __result186__;
            }
            memset(&result_455,0,sizeof(struct tuple2$2charphsTypeph*));
            __result187__ = __result_obj__ = result_455;
            return __result187__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
            __result188__ = self==((void*)0)||self->it==((void*)0);
            return __result188__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional493;
struct tuple2$2charphsTypeph* result_457;
struct tuple2$2charphsTypeph* __result189__;
_Bool _if_conditional494;
struct tuple2$2charphsTypeph* __result190__;
struct tuple2$2charphsTypeph* result_458;
struct tuple2$2charphsTypeph* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_457, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_458, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional493=self==((void*)0)||self->it==((void*)0),            _if_conditional493) {
                memset(&result_457,0,sizeof(struct tuple2$2charphsTypeph*));
                __result189__ = __result_obj__ = result_457;
                return __result189__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result190__ = __result_obj__ = self->it->item;
                return __result190__;
            }
            memset(&result_458,0,sizeof(struct tuple2$2charphsTypeph*));
            __result191__ = __result_obj__ = result_458;
            return __result191__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result192__;
memset(&__result_obj__, 0, sizeof(void*));
            __result192__ = self->len;
            return __result192__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional498;
struct list_item$1charph* it_479;
int i_480;
_Bool _while_condtional48;
_Bool _if_conditional499;
char* __result193__;
char* default_value_481;
char* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_479, 0, sizeof(struct list_item$1charph*));
memset(&i_480, 0, sizeof(int));
memset(&default_value_481, 0, sizeof(char*));
                if(_if_conditional498=position<0,                _if_conditional498) {
                    position+=self->len;
                }
                it_479=self->head;
                i_480=0;
                while(_while_condtional48=it_479!=((void*)0),                _while_condtional48) {
                    if(_if_conditional499=position==i_480,                    _if_conditional499) {
                        __result193__ = __result_obj__ = it_479->item;
                        return __result193__;
                    }
                    it_479=it_479->next;
                    i_480++;
                }
                memset(&default_value_481,0,sizeof(char*));
                __result194__ = __result_obj__ = default_value_481;
                default_value_481 = come_decrement_ref_count2(default_value_481, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result194__;
                default_value_481 = come_decrement_ref_count2(default_value_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj142;
struct tuple2$2sFunpcharph* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
        self->v1=v1;
        __dec_obj142=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result197__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result197__;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional509;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional509=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional509) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_487;
char* __dec_obj143;
char* last_code2_488;
char* __dec_obj144;
char* last_code3_489;
char* __dec_obj145;
struct sClass* current_stack_frame_struct_490;
struct sFun* finalizer_491;
void* right_value629;
char* real_fun_name_492;
void* right_value630;
struct sType* type2_493;
struct sClass* klass_494;
_Bool _if_conditional510;
void* right_value631;
void* right_value632;
struct buffer* source_495;
void* right_value633;
struct list$1tuple2$2charphsTypephph* o2_saved_496;
struct tuple2$2charphsTypeph* it_497;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_498;
struct sType* field_type_499;
_Bool _if_conditional511;
_Bool _if_conditional512;
char* p_501;
int sline_502;
char* sname_503;
char* head_504;
struct buffer* source3_505;
struct buffer* __dec_obj146;
void* right_value634;
char* __dec_obj147;
void* right_value635;
struct sBlock* block_506;
void* right_value636;
void* right_value637;
struct sType* result_type_507;
void* right_value638;
char* name_508;
void* right_value639;
struct sType* self_type_509;
_Bool _if_conditional513;
struct sType* __list_values23___510[1];
void* right_value640;
void* right_value641;
struct list$1sTypeph* param_types_511;
void* right_value642;
char* __list_values24___512[1];
void* right_value643;
void* right_value644;
struct list$1charph* param_names_513;
void* right_value645;
void* right_value646;
struct list$1charph* param_default_parametors_514;
void* right_value647;
void* right_value648;
struct buffer* header_buf_515;
void* right_value649;
int i_516;
void* right_value650;
struct sType* param_type_517;
void* right_value651;
char* param_name_518;
void* right_value652;
_Bool _if_conditional514;
void* right_value653;
void* right_value654;
void* right_value655;
void* right_value656;
struct sFun* fun_519;
void* right_value657;
void* right_value658;
struct sFun* fun2_520;
_Bool _if_conditional515;
void* right_value659;
void* right_value660;
void* right_value661;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value665;
struct sNode* node_522;
_Bool _if_conditional522;
struct buffer* __dec_obj150;
char* __dec_obj151;
char* __dec_obj152;
char* __dec_obj153;
char* __dec_obj154;
void* right_value666;
void* right_value667;
struct tuple2$2sFunpcharph* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_487, 0, sizeof(char*));
memset(&last_code2_488, 0, sizeof(char*));
memset(&last_code3_489, 0, sizeof(char*));
memset(&current_stack_frame_struct_490, 0, sizeof(struct sClass*));
memset(&finalizer_491, 0, sizeof(struct sFun*));
right_value629 = (void*)0;
memset(&real_fun_name_492, 0, sizeof(char*));
right_value630 = (void*)0;
memset(&type2_493, 0, sizeof(struct sType*));
memset(&klass_494, 0, sizeof(struct sClass*));
right_value631 = (void*)0;
right_value632 = (void*)0;
memset(&source_495, 0, sizeof(struct buffer*));
right_value633 = (void*)0;
memset(&o2_saved_496, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_497, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_498, 0, sizeof(char*));
memset(&field_type_499, 0, sizeof(struct sType*));
memset(&name_498, 0, sizeof(char*));
memset(&field_type_499, 0, sizeof(struct sType*));
memset(&p_501, 0, sizeof(char*));
memset(&sline_502, 0, sizeof(int));
memset(&sname_503, 0, sizeof(char*));
memset(&head_504, 0, sizeof(char*));
memset(&source3_505, 0, sizeof(struct buffer*));
right_value634 = (void*)0;
right_value635 = (void*)0;
memset(&block_506, 0, sizeof(struct sBlock*));
right_value636 = (void*)0;
right_value637 = (void*)0;
memset(&result_type_507, 0, sizeof(struct sType*));
right_value638 = (void*)0;
memset(&name_508, 0, sizeof(char*));
right_value639 = (void*)0;
memset(&self_type_509, 0, sizeof(struct sType*));
right_value640 = (void*)0;
right_value641 = (void*)0;
memset(&param_types_511, 0, sizeof(struct list$1sTypeph*));
right_value642 = (void*)0;
right_value643 = (void*)0;
right_value644 = (void*)0;
memset(&param_names_513, 0, sizeof(struct list$1charph*));
right_value645 = (void*)0;
right_value646 = (void*)0;
memset(&param_default_parametors_514, 0, sizeof(struct list$1charph*));
right_value647 = (void*)0;
right_value648 = (void*)0;
memset(&header_buf_515, 0, sizeof(struct buffer*));
right_value649 = (void*)0;
memset(&i_516, 0, sizeof(int));
right_value650 = (void*)0;
memset(&param_type_517, 0, sizeof(struct sType*));
right_value651 = (void*)0;
memset(&param_name_518, 0, sizeof(char*));
right_value652 = (void*)0;
right_value653 = (void*)0;
right_value654 = (void*)0;
right_value655 = (void*)0;
right_value656 = (void*)0;
memset(&fun_519, 0, sizeof(struct sFun*));
right_value657 = (void*)0;
right_value658 = (void*)0;
memset(&fun2_520, 0, sizeof(struct sFun*));
right_value659 = (void*)0;
right_value660 = (void*)0;
right_value661 = (void*)0;
right_value665 = (void*)0;
memset(&node_522, 0, sizeof(struct sNode*));
right_value666 = (void*)0;
right_value667 = (void*)0;
    last_code_487=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj143=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_488=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj144=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_489=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj145=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_490=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_491=((void*)0);
    real_fun_name_492=(char*)come_increment_ref_count(((char*)(right_value629=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value629 = come_decrement_ref_count2(right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_493=(struct sType*)come_increment_ref_count(((struct sType*)(right_value630=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_493;
    klass_494=type->mClass;
    if(_if_conditional510=type->mPointerNum>0&&klass_494->mStruct,    _if_conditional510) {
        source_495=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value632=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value631=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1769, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value631, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value632, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_495,123);
        klass_494=((struct sClass*)(right_value633=map$2charphsClassphp_operator_load_element(info->classes,klass_494->mName)));
        come_call_finalizer2(sClass_finalize,right_value633, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_496=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_494->mFields)),it_497=list$1tuple2$2charphsTypephph_begin((o2_saved_496));        !list$1tuple2$2charphsTypephph_end((o2_saved_496));        it_497=list$1tuple2$2charphsTypephph_next((o2_saved_496))        ){
            multiple_assign_var11=it_497;
            name_498=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_499=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(_if_conditional511=string_operator_equals(type->mClass->mName,field_type_499->mClass->mName)&&type->mPointerNum==field_type_499->mPointerNum&&field_type_499->mHeap,            _if_conditional511) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_499->mHeap) {
                char source2_500[1024];
                memset(&source2_500, 0, sizeof(char)                *(1024)                );
                snprintf(source2_500,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_498,name_498);
                buffer_append_str(source_495,source2_500);
            }
            name_498 = come_decrement_ref_count2(name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_499, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_496, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_495,125);
        p_501=info->p;
        sline_502=info->sline;
        sname_503=(char*)come_increment_ref_count(info->sname);
        head_504=info->head;
        source3_505=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj146=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_495);
        come_call_finalizer2(buffer_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_495->buf;
        info->head=source_495->buf;
        __dec_obj147=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value634=__builtin_string(real_fun_name_492))));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value634 = come_decrement_ref_count2(right_value634, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_506=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value635=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value635, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_507=(struct sType*)come_increment_ref_count(((struct sType*)(right_value637=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value636=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1808, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value636, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_508=(char*)come_increment_ref_count(((char*)(right_value638=string_clone(real_fun_name_492))));
        right_value638 = come_decrement_ref_count2(right_value638, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_509=(struct sType*)come_increment_ref_count(((struct sType*)(right_value639=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value639, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_509->mHeap=(_Bool)0;
        if(_if_conditional513=self_type_509->mPointerNum>1,        _if_conditional513) {
            self_type_509->mPointerNum=1;
        }
        {__list_values23___510[0]=come_increment_ref_count(self_type_509);
}        param_types_511=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value641=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value640=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1815, "struct list$1sTypeph")))),1,__list_values23___510))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value641, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values24___512[0]=come_increment_ref_count(((char*)(right_value642=__builtin_string("self"))));
}        param_names_513=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value644=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value643=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1816, "struct list$1charph")))),1,__list_values24___512))));
        right_value642 = come_decrement_ref_count2(right_value642, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value644, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_514=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value646=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value645=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1817, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value645, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_514,((void*)0));
        header_buf_515=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value648=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value647=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1820, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value647, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value648, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_515,((char*)(right_value649=make_come_type_name_string(result_type_507,info))));
        right_value649 = come_decrement_ref_count2(right_value649, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_515," ");
        buffer_append_str(header_buf_515,real_fun_name_492);
        buffer_append_str(header_buf_515,"(");
        for(        i_516=0;        i_516<list$1sTypeph_length(param_types_511);        i_516++        ){
            param_type_517=((struct sType*)(right_value650=list$1sTypephp_operator_load_element(param_types_511,i_516)));
            come_call_finalizer2(sType_finalize,right_value650, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_518=((char*)(right_value651=list$1charphp_operator_load_element(param_names_513,i_516)));
            right_value651 = come_decrement_ref_count2(right_value651, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_515,((char*)(right_value652=make_come_type_name_string(param_type_517,info))));
            right_value652 = come_decrement_ref_count2(right_value652, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_515," ");
            buffer_append_str(header_buf_515,param_name_518);
            if(_if_conditional514=i_516!=list$1sTypeph_length(param_types_511)-1,            _if_conditional514) {
                buffer_append_str(header_buf_515,",");
            }
        }
        buffer_append_str(header_buf_515,")");
        result_type_507->mStatic=(_Bool)0;
        fun_519=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value656=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value653=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1843, "struct sFun")))),(char*)come_increment_ref_count(name_508),(struct sType*)come_increment_ref_count(result_type_507),(struct list$1sTypeph*)come_increment_ref_count(param_types_511),(struct list$1charph*)come_increment_ref_count(param_names_513),(struct list$1charph*)come_increment_ref_count(param_default_parametors_514),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_506),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value654=buffer_to_string(header_buf_515)))),(char*)come_increment_ref_count(((char*)(right_value655=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value653, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value654 = come_decrement_ref_count2(right_value654, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value655 = come_decrement_ref_count2(right_value655, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value656, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_520=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value658=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value657=__builtin_string(fun_name)))))));
        right_value657 = come_decrement_ref_count2(right_value657, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value658, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional515=fun2_520==((void*)0)||fun2_520->mExternal,        _if_conditional515) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value659=string_clone(name_508)))),(struct sFun*)come_increment_ref_count(fun_519));
            right_value659 = come_decrement_ref_count2(right_value659, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_491=fun_519;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1859, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value661=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value660=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1859, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_519),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFunNode_finalize;
        _inf_value8->clone=(void*)sFunNode_clone;
        _inf_value8->compile=(void*)sFunNode_compile;
        _inf_value8->sline=(void*)sFunNode_sline;
        _inf_value8->sname=(void*)sFunNode_sname;
        _inf_value8->terminated=(void*)sFunNode_terminated;
        _inf_value8->kind=(void*)sFunNode_kind;
        node_522=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value665=_inf_value8)));
        come_call_finalizer2(sFunNode_finalize,right_value660, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value661, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value665) { right_value665 = come_decrement_ref_count2(right_value665, ((struct sNode*)right_value665)->finalize, ((struct sNode*)right_value665)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional522=!node_compile(node_522,info),        _if_conditional522) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj150=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_505);
        come_call_finalizer2(buffer_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_501;
        info->head=head_504;
        info->sline=sline_502;
        __dec_obj151=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_503);
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_495, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_503 = come_decrement_ref_count2(sname_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_505, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_506, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_507, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_508 = come_decrement_ref_count2(name_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_509, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_511, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_513, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_514, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_515, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_519, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_520, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_522) { node_522 = come_decrement_ref_count2(node_522, ((struct sNode*)node_522)->finalize, ((struct sNode*)node_522)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_490;
    __dec_obj152=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_487);
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_488);
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj154=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_489);
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result201__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value667=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value666=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1879, "struct tuple2$2sFunpcharph")))),finalizer_491,(char*)come_increment_ref_count(real_fun_name_492))));
    last_code_487 = come_decrement_ref_count2(last_code_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_488 = come_decrement_ref_count2(last_code2_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_489 = come_decrement_ref_count2(last_code3_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_492 = come_decrement_ref_count2(real_fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_493, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value666 = come_decrement_ref_count2(right_value666, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value667, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result201__;
    last_code_487 = come_decrement_ref_count2(last_code_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_488 = come_decrement_ref_count2(last_code2_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_489 = come_decrement_ref_count2(last_code3_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_492 = come_decrement_ref_count2(real_fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_493, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_523;
char* __dec_obj155;
char* last_code2_524;
char* __dec_obj156;
char* last_code3_525;
char* __dec_obj157;
struct sClass* current_stack_frame_struct_526;
struct sFun* equaler_527;
void* right_value668;
char* real_fun_name_528;
void* right_value669;
struct sType* type2_529;
struct sClass* klass_530;
_Bool _if_conditional523;
void* right_value670;
void* right_value671;
struct buffer* source_531;
_Bool _if_conditional524;
char* name_532;
void* right_value672;
struct list$1tuple2$2charphsTypephph* o2_saved_534;
struct tuple2$2charphsTypeph* it_535;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_536;
struct sType* field_type_537;
_Bool _if_conditional525;
char* p_539;
int sline_540;
char* sname_541;
char* head_542;
struct buffer* source3_543;
struct buffer* __dec_obj158;
void* right_value673;
char* __dec_obj159;
void* right_value674;
struct sBlock* block_544;
void* right_value675;
void* right_value676;
struct sType* result_type_545;
void* right_value677;
char* name_546;
void* right_value678;
struct sType* left_type_547;
void* right_value679;
struct sType* right_type_548;
struct sType* __list_values25___549[2];
void* right_value680;
void* right_value681;
struct list$1sTypeph* param_types_550;
void* right_value682;
void* right_value683;
char* __list_values26___551[2];
void* right_value684;
void* right_value685;
struct list$1charph* param_names_552;
void* right_value686;
void* right_value687;
struct list$1charph* param_default_parametors_553;
void* right_value688;
void* right_value689;
struct buffer* header_buf_554;
void* right_value690;
int i_555;
void* right_value691;
struct sType* param_type_556;
void* right_value692;
char* param_name_557;
void* right_value693;
_Bool _if_conditional526;
void* right_value694;
void* right_value695;
void* right_value696;
void* right_value697;
struct sFun* fun_558;
void* right_value698;
void* right_value699;
struct sFun* fun2_559;
_Bool _if_conditional527;
void* right_value700;
void* right_value701;
void* right_value702;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value706;
struct sNode* node_561;
_Bool _if_conditional534;
struct buffer* __dec_obj162;
char* __dec_obj163;
char* __dec_obj164;
char* __dec_obj165;
char* __dec_obj166;
void* right_value707;
void* right_value708;
struct tuple2$2sFunpcharph* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_523, 0, sizeof(char*));
memset(&last_code2_524, 0, sizeof(char*));
memset(&last_code3_525, 0, sizeof(char*));
memset(&current_stack_frame_struct_526, 0, sizeof(struct sClass*));
memset(&equaler_527, 0, sizeof(struct sFun*));
right_value668 = (void*)0;
memset(&real_fun_name_528, 0, sizeof(char*));
right_value669 = (void*)0;
memset(&type2_529, 0, sizeof(struct sType*));
memset(&klass_530, 0, sizeof(struct sClass*));
right_value670 = (void*)0;
right_value671 = (void*)0;
memset(&source_531, 0, sizeof(struct buffer*));
memset(&name_532, 0, sizeof(char*));
right_value672 = (void*)0;
memset(&o2_saved_534, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_535, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_536, 0, sizeof(char*));
memset(&field_type_537, 0, sizeof(struct sType*));
memset(&name_536, 0, sizeof(char*));
memset(&field_type_537, 0, sizeof(struct sType*));
memset(&p_539, 0, sizeof(char*));
memset(&sline_540, 0, sizeof(int));
memset(&sname_541, 0, sizeof(char*));
memset(&head_542, 0, sizeof(char*));
memset(&source3_543, 0, sizeof(struct buffer*));
right_value673 = (void*)0;
right_value674 = (void*)0;
memset(&block_544, 0, sizeof(struct sBlock*));
right_value675 = (void*)0;
right_value676 = (void*)0;
memset(&result_type_545, 0, sizeof(struct sType*));
right_value677 = (void*)0;
memset(&name_546, 0, sizeof(char*));
right_value678 = (void*)0;
memset(&left_type_547, 0, sizeof(struct sType*));
right_value679 = (void*)0;
memset(&right_type_548, 0, sizeof(struct sType*));
right_value680 = (void*)0;
right_value681 = (void*)0;
memset(&param_types_550, 0, sizeof(struct list$1sTypeph*));
right_value682 = (void*)0;
right_value683 = (void*)0;
right_value684 = (void*)0;
right_value685 = (void*)0;
memset(&param_names_552, 0, sizeof(struct list$1charph*));
right_value686 = (void*)0;
right_value687 = (void*)0;
memset(&param_default_parametors_553, 0, sizeof(struct list$1charph*));
right_value688 = (void*)0;
right_value689 = (void*)0;
memset(&header_buf_554, 0, sizeof(struct buffer*));
right_value690 = (void*)0;
memset(&i_555, 0, sizeof(int));
right_value691 = (void*)0;
memset(&param_type_556, 0, sizeof(struct sType*));
right_value692 = (void*)0;
memset(&param_name_557, 0, sizeof(char*));
right_value693 = (void*)0;
right_value694 = (void*)0;
right_value695 = (void*)0;
right_value696 = (void*)0;
right_value697 = (void*)0;
memset(&fun_558, 0, sizeof(struct sFun*));
right_value698 = (void*)0;
right_value699 = (void*)0;
memset(&fun2_559, 0, sizeof(struct sFun*));
right_value700 = (void*)0;
right_value701 = (void*)0;
right_value702 = (void*)0;
right_value706 = (void*)0;
memset(&node_561, 0, sizeof(struct sNode*));
right_value707 = (void*)0;
right_value708 = (void*)0;
    last_code_523=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj155=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_524=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj156=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_525=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj157=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_526=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_527=((void*)0);
    real_fun_name_528=(char*)come_increment_ref_count(((char*)(right_value668=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value668 = come_decrement_ref_count2(right_value668, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_529=(struct sType*)come_increment_ref_count(((struct sType*)(right_value669=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value669, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_529;
    klass_530=type->mClass;
    if(_if_conditional523=type->mPointerNum>0&&!klass_530->mNumber,    _if_conditional523) {
        source_531=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value671=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value670=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1904, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_531,123);
        if(klass_530->mProtocol) {
            name_532="_protocol_obj";
            char source2_533[1024];
            memset(&source2_533, 0, sizeof(char)            *(1024)            );
            snprintf(source2_533,1024,"return left.%s.equals(right.%s);\n",name_532,name_532);
            buffer_append_str(source_531,source2_533);
        }
        else {
            klass_530=((struct sClass*)(right_value672=map$2charphsClassphp_operator_load_element(info->classes,klass_530->mName)));
            come_call_finalizer2(sClass_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_534=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_530->mFields)),it_535=list$1tuple2$2charphsTypephph_begin((o2_saved_534));            !list$1tuple2$2charphsTypephph_end((o2_saved_534));            it_535=list$1tuple2$2charphsTypephph_next((o2_saved_534))            ){
                multiple_assign_var12=it_535;
                name_536=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_537=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(_if_conditional525=string_operator_equals(type->mClass->mName,field_type_537->mClass->mName)&&type->mPointerNum==field_type_537->mPointerNum&&field_type_537->mHeap,                _if_conditional525) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_538[1024];
                memset(&source2_538, 0, sizeof(char)                *(1024)                );
                snprintf(source2_538,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_536,name_536);
                buffer_append_str(source_531,source2_538);
                name_536 = come_decrement_ref_count2(name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_537, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_534, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_531,"return true;");
        buffer_append_char(source_531,125);
        p_539=info->p;
        sline_540=info->sline;
        sname_541=(char*)come_increment_ref_count(info->sname);
        head_542=info->head;
        source3_543=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj158=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_531);
        come_call_finalizer2(buffer_finalize,__dec_obj158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_531->buf;
        info->head=source_531->buf;
        __dec_obj159=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value673=__builtin_string(real_fun_name_528))));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value673 = come_decrement_ref_count2(right_value673, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_544=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value674=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value674, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_545=(struct sType*)come_increment_ref_count(((struct sType*)(right_value676=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value675=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1950, "struct sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value675, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_546=(char*)come_increment_ref_count(((char*)(right_value677=string_clone(real_fun_name_528))));
        right_value677 = come_decrement_ref_count2(right_value677, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_547=(struct sType*)come_increment_ref_count(((struct sType*)(right_value678=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value678, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_547->mHeap=(_Bool)0;
        right_type_548=(struct sType*)come_increment_ref_count(((struct sType*)(right_value679=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value679, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_548->mHeap=(_Bool)0;
        {__list_values25___549[0]=come_increment_ref_count(left_type_547);
__list_values25___549[1]=come_increment_ref_count(right_type_548);
}        param_types_550=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value681=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value680=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1956, "struct list$1sTypeph")))),2,__list_values25___549))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value680, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value681, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values26___551[0]=come_increment_ref_count(((char*)(right_value682=__builtin_string("left"))));
__list_values26___551[1]=come_increment_ref_count(((char*)(right_value683=__builtin_string("right"))));
}        param_names_552=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value685=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value684=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1957, "struct list$1charph")))),2,__list_values26___551))));
        right_value682 = come_decrement_ref_count2(right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value683 = come_decrement_ref_count2(right_value683, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value684, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value685, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_553=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value687=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value686=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1958, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value686, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value687, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_553,((void*)0));
        list$1charph_push_back(param_default_parametors_553,((void*)0));
        header_buf_554=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value689=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value688=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1962, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_554,((char*)(right_value690=make_come_type_name_string(result_type_545,info))));
        right_value690 = come_decrement_ref_count2(right_value690, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_554," ");
        buffer_append_str(header_buf_554,real_fun_name_528);
        buffer_append_str(header_buf_554,"(");
        for(        i_555=0;        i_555<list$1sTypeph_length(param_types_550);        i_555++        ){
            param_type_556=((struct sType*)(right_value691=list$1sTypephp_operator_load_element(param_types_550,i_555)));
            come_call_finalizer2(sType_finalize,right_value691, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_557=((char*)(right_value692=list$1charphp_operator_load_element(param_names_552,i_555)));
            right_value692 = come_decrement_ref_count2(right_value692, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_554,((char*)(right_value693=make_come_type_name_string(param_type_556,info))));
            right_value693 = come_decrement_ref_count2(right_value693, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_554," ");
            buffer_append_str(header_buf_554,param_name_557);
            if(_if_conditional526=i_555!=list$1sTypeph_length(param_types_550)-1,            _if_conditional526) {
                buffer_append_str(header_buf_554,",");
            }
        }
        buffer_append_str(header_buf_554,")");
        result_type_545->mStatic=(_Bool)0;
        fun_558=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value697=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value694=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1985, "struct sFun")))),(char*)come_increment_ref_count(name_546),(struct sType*)come_increment_ref_count(result_type_545),(struct list$1sTypeph*)come_increment_ref_count(param_types_550),(struct list$1charph*)come_increment_ref_count(param_names_552),(struct list$1charph*)come_increment_ref_count(param_default_parametors_553),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_544),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value695=buffer_to_string(header_buf_554)))),(char*)come_increment_ref_count(((char*)(right_value696=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value694, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value695 = come_decrement_ref_count2(right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value696 = come_decrement_ref_count2(right_value696, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value697, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_559=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value699=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value698=__builtin_string(fun_name)))))));
        right_value698 = come_decrement_ref_count2(right_value698, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional527=fun2_559==((void*)0)||fun2_559->mExternal,        _if_conditional527) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value700=string_clone(name_546)))),(struct sFun*)come_increment_ref_count(fun_558));
            right_value700 = come_decrement_ref_count2(right_value700, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_527=fun_558;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2001, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value702=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value701=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2001, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_558),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sFunNode_sline;
        _inf_value9->sname=(void*)sFunNode_sname;
        _inf_value9->terminated=(void*)sFunNode_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_561=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value706=_inf_value9)));
        come_call_finalizer2(sFunNode_finalize,right_value701, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value702, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value706) { right_value706 = come_decrement_ref_count2(right_value706, ((struct sNode*)right_value706)->finalize, ((struct sNode*)right_value706)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional534=!node_compile(node_561,info),        _if_conditional534) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj162=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_543);
        come_call_finalizer2(buffer_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_539;
        info->head=head_542;
        info->sline=sline_540;
        __dec_obj163=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_541);
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_531, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_541 = come_decrement_ref_count2(sname_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_543, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_544, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_545, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_546 = come_decrement_ref_count2(name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_547, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_548, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_550, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_552, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_553, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_554, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_558, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_559, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_561) { node_561 = come_decrement_ref_count2(node_561, ((struct sNode*)node_561)->finalize, ((struct sNode*)node_561)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_526;
    __dec_obj164=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_523);
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj165=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_524);
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj166=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_525);
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result204__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value708=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value707=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2021, "struct tuple2$2sFunpcharph")))),equaler_527,(char*)come_increment_ref_count(real_fun_name_528))));
    last_code_523 = come_decrement_ref_count2(last_code_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_524 = come_decrement_ref_count2(last_code2_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_525 = come_decrement_ref_count2(last_code3_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_528 = come_decrement_ref_count2(real_fun_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_529, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value707 = come_decrement_ref_count2(right_value707, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value708, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result204__;
    last_code_523 = come_decrement_ref_count2(last_code_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_524 = come_decrement_ref_count2(last_code2_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_525 = come_decrement_ref_count2(last_code3_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_528 = come_decrement_ref_count2(real_fun_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_529, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_562;
char* __dec_obj167;
char* last_code2_563;
char* __dec_obj168;
char* last_code3_564;
char* __dec_obj169;
struct sClass* current_stack_frame_struct_565;
struct sFun* equaler_566;
void* right_value709;
char* real_fun_name_567;
void* right_value710;
struct sType* type2_568;
struct sClass* klass_569;
_Bool _if_conditional535;
void* right_value711;
void* right_value712;
struct buffer* source_570;
_Bool _if_conditional536;
char* name_571;
int i_574;
void* right_value713;
struct list$1tuple2$2charphsTypephph* o2_saved_575;
struct tuple2$2charphsTypeph* it_576;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_577;
struct sType* field_type_578;
_Bool _if_conditional537;
_Bool _if_conditional538;
char* p_582;
int sline_583;
char* sname_584;
char* head_585;
struct buffer* source3_586;
struct buffer* __dec_obj170;
void* right_value714;
char* __dec_obj171;
void* right_value715;
struct sBlock* block_587;
void* right_value716;
void* right_value717;
struct sType* result_type_588;
void* right_value718;
char* name_589;
void* right_value719;
struct sType* left_type_590;
void* right_value720;
struct sType* right_type_591;
struct sType* __list_values27___592[2];
void* right_value721;
void* right_value722;
struct list$1sTypeph* param_types_593;
void* right_value723;
void* right_value724;
char* __list_values28___594[2];
void* right_value725;
void* right_value726;
struct list$1charph* param_names_595;
void* right_value727;
void* right_value728;
struct list$1charph* param_default_parametors_596;
void* right_value729;
void* right_value730;
struct buffer* header_buf_597;
void* right_value731;
int i_598;
void* right_value732;
struct sType* param_type_599;
void* right_value733;
char* param_name_600;
void* right_value734;
_Bool _if_conditional539;
void* right_value735;
void* right_value736;
void* right_value737;
void* right_value738;
struct sFun* fun_601;
void* right_value739;
void* right_value740;
struct sFun* fun2_602;
_Bool _if_conditional540;
void* right_value741;
void* right_value742;
void* right_value743;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value747;
struct sNode* node_604;
_Bool _if_conditional547;
struct buffer* __dec_obj174;
char* __dec_obj175;
char* __dec_obj176;
char* __dec_obj177;
char* __dec_obj178;
void* right_value748;
void* right_value749;
struct tuple2$2sFunpcharph* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_562, 0, sizeof(char*));
memset(&last_code2_563, 0, sizeof(char*));
memset(&last_code3_564, 0, sizeof(char*));
memset(&current_stack_frame_struct_565, 0, sizeof(struct sClass*));
memset(&equaler_566, 0, sizeof(struct sFun*));
right_value709 = (void*)0;
memset(&real_fun_name_567, 0, sizeof(char*));
right_value710 = (void*)0;
memset(&type2_568, 0, sizeof(struct sType*));
memset(&klass_569, 0, sizeof(struct sClass*));
right_value711 = (void*)0;
right_value712 = (void*)0;
memset(&source_570, 0, sizeof(struct buffer*));
memset(&name_571, 0, sizeof(char*));
memset(&i_574, 0, sizeof(int));
right_value713 = (void*)0;
memset(&o2_saved_575, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_576, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_577, 0, sizeof(char*));
memset(&field_type_578, 0, sizeof(struct sType*));
memset(&name_577, 0, sizeof(char*));
memset(&field_type_578, 0, sizeof(struct sType*));
memset(&p_582, 0, sizeof(char*));
memset(&sline_583, 0, sizeof(int));
memset(&sname_584, 0, sizeof(char*));
memset(&head_585, 0, sizeof(char*));
memset(&source3_586, 0, sizeof(struct buffer*));
right_value714 = (void*)0;
right_value715 = (void*)0;
memset(&block_587, 0, sizeof(struct sBlock*));
right_value716 = (void*)0;
right_value717 = (void*)0;
memset(&result_type_588, 0, sizeof(struct sType*));
right_value718 = (void*)0;
memset(&name_589, 0, sizeof(char*));
right_value719 = (void*)0;
memset(&left_type_590, 0, sizeof(struct sType*));
right_value720 = (void*)0;
memset(&right_type_591, 0, sizeof(struct sType*));
right_value721 = (void*)0;
right_value722 = (void*)0;
memset(&param_types_593, 0, sizeof(struct list$1sTypeph*));
right_value723 = (void*)0;
right_value724 = (void*)0;
right_value725 = (void*)0;
right_value726 = (void*)0;
memset(&param_names_595, 0, sizeof(struct list$1charph*));
right_value727 = (void*)0;
right_value728 = (void*)0;
memset(&param_default_parametors_596, 0, sizeof(struct list$1charph*));
right_value729 = (void*)0;
right_value730 = (void*)0;
memset(&header_buf_597, 0, sizeof(struct buffer*));
right_value731 = (void*)0;
memset(&i_598, 0, sizeof(int));
right_value732 = (void*)0;
memset(&param_type_599, 0, sizeof(struct sType*));
right_value733 = (void*)0;
memset(&param_name_600, 0, sizeof(char*));
right_value734 = (void*)0;
right_value735 = (void*)0;
right_value736 = (void*)0;
right_value737 = (void*)0;
right_value738 = (void*)0;
memset(&fun_601, 0, sizeof(struct sFun*));
right_value739 = (void*)0;
right_value740 = (void*)0;
memset(&fun2_602, 0, sizeof(struct sFun*));
right_value741 = (void*)0;
right_value742 = (void*)0;
right_value743 = (void*)0;
right_value747 = (void*)0;
memset(&node_604, 0, sizeof(struct sNode*));
right_value748 = (void*)0;
right_value749 = (void*)0;
    last_code_562=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj167=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_563=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj168=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_564=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj169=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_565=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_566=((void*)0);
    real_fun_name_567=(char*)come_increment_ref_count(((char*)(right_value709=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value709 = come_decrement_ref_count2(right_value709, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_568=(struct sType*)come_increment_ref_count(((struct sType*)(right_value710=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value710, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_568;
    klass_569=type->mClass;
    if(_if_conditional535=type->mPointerNum>0&&!klass_569->mNumber,    _if_conditional535) {
        source_570=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value712=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value711=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2046, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value711, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value712, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_570,123);
        if(klass_569->mProtocol) {
            name_571="_protocol_obj";
            char source2_572[1024];
            memset(&source2_572, 0, sizeof(char)            *(1024)            );
            snprintf(source2_572,1024,"return !left.%s.equals(right.%s);\n",name_571,name_571);
            buffer_append_str(source_570,source2_572);
        }
        else {
            char source2_573[1024];
            memset(&source2_573, 0, sizeof(char)            *(1024)            );
            snprintf(source2_573,1024,"return !(");
            buffer_append_str(source_570,source2_573);
            i_574=0;
            klass_569=((struct sClass*)(right_value713=map$2charphsClassphp_operator_load_element(info->classes,klass_569->mName)));
            come_call_finalizer2(sClass_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_575=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_569->mFields)),it_576=list$1tuple2$2charphsTypephph_begin((o2_saved_575));            !list$1tuple2$2charphsTypephph_end((o2_saved_575));            it_576=list$1tuple2$2charphsTypephph_next((o2_saved_575))            ){
                multiple_assign_var13=it_576;
                name_577=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_578=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(_if_conditional537=string_operator_equals(type->mClass->mName,field_type_578->mClass->mName)&&type->mPointerNum==field_type_578->mPointerNum&&field_type_578->mHeap,                _if_conditional537) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_579[1024];
                memset(&source2_579, 0, sizeof(char)                *(1024)                );
                snprintf(source2_579,1024,"left.%s.equals(right.%s)",name_577,name_577);
                buffer_append_str(source_570,source2_579);
                if(_if_conditional538=i_574==list$1tuple2$2charphsTypephph_length(klass_569->mFields)-1,                _if_conditional538) {
                    char source2_580[1024];
                    memset(&source2_580, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_580,1024,");");
                    buffer_append_str(source_570,source2_580);
                }
                else {
                    char source2_581[1024];
                    memset(&source2_581, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_581,1024," && ");
                    buffer_append_str(source_570,source2_581);
                }
                i_574++;
                name_577 = come_decrement_ref_count2(name_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_578, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_575, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_570,125);
        p_582=info->p;
        sline_583=info->sline;
        sname_584=(char*)come_increment_ref_count(info->sname);
        head_585=info->head;
        source3_586=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj170=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_570);
        come_call_finalizer2(buffer_finalize,__dec_obj170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_570->buf;
        info->head=source_570->buf;
        __dec_obj171=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value714=__builtin_string(real_fun_name_567))));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value714 = come_decrement_ref_count2(right_value714, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_587=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value715=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_588=(struct sType*)come_increment_ref_count(((struct sType*)(right_value717=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value716=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2109, "struct sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value716, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value717, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_589=(char*)come_increment_ref_count(((char*)(right_value718=string_clone(real_fun_name_567))));
        right_value718 = come_decrement_ref_count2(right_value718, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_590=(struct sType*)come_increment_ref_count(((struct sType*)(right_value719=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value719, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_590->mHeap=(_Bool)0;
        right_type_591=(struct sType*)come_increment_ref_count(((struct sType*)(right_value720=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value720, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_591->mHeap=(_Bool)0;
        {__list_values27___592[0]=come_increment_ref_count(left_type_590);
__list_values27___592[1]=come_increment_ref_count(right_type_591);
}        param_types_593=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value722=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value721=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2115, "struct list$1sTypeph")))),2,__list_values27___592))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value721, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value722, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values28___594[0]=come_increment_ref_count(((char*)(right_value723=__builtin_string("left"))));
__list_values28___594[1]=come_increment_ref_count(((char*)(right_value724=__builtin_string("right"))));
}        param_names_595=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value726=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value725=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2116, "struct list$1charph")))),2,__list_values28___594))));
        right_value723 = come_decrement_ref_count2(right_value723, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value724 = come_decrement_ref_count2(right_value724, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value725, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value726, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_596=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value728=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value727=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2117, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value727, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value728, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_596,((void*)0));
        list$1charph_push_back(param_default_parametors_596,((void*)0));
        header_buf_597=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value730=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value729=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2121, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value729, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value730, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_597,((char*)(right_value731=make_come_type_name_string(result_type_588,info))));
        right_value731 = come_decrement_ref_count2(right_value731, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_597," ");
        buffer_append_str(header_buf_597,real_fun_name_567);
        buffer_append_str(header_buf_597,"(");
        for(        i_598=0;        i_598<list$1sTypeph_length(param_types_593);        i_598++        ){
            param_type_599=((struct sType*)(right_value732=list$1sTypephp_operator_load_element(param_types_593,i_598)));
            come_call_finalizer2(sType_finalize,right_value732, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_600=((char*)(right_value733=list$1charphp_operator_load_element(param_names_595,i_598)));
            right_value733 = come_decrement_ref_count2(right_value733, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_597,((char*)(right_value734=make_come_type_name_string(param_type_599,info))));
            right_value734 = come_decrement_ref_count2(right_value734, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_597," ");
            buffer_append_str(header_buf_597,param_name_600);
            if(_if_conditional539=i_598!=list$1sTypeph_length(param_types_593)-1,            _if_conditional539) {
                buffer_append_str(header_buf_597,",");
            }
        }
        buffer_append_str(header_buf_597,")");
        result_type_588->mStatic=(_Bool)0;
        fun_601=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value738=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value735=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2144, "struct sFun")))),(char*)come_increment_ref_count(name_589),(struct sType*)come_increment_ref_count(result_type_588),(struct list$1sTypeph*)come_increment_ref_count(param_types_593),(struct list$1charph*)come_increment_ref_count(param_names_595),(struct list$1charph*)come_increment_ref_count(param_default_parametors_596),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_587),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value736=buffer_to_string(header_buf_597)))),(char*)come_increment_ref_count(((char*)(right_value737=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value735, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value736 = come_decrement_ref_count2(right_value736, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value737 = come_decrement_ref_count2(right_value737, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value738, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_602=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value740=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value739=__builtin_string(fun_name)))))));
        right_value739 = come_decrement_ref_count2(right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value740, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional540=fun2_602==((void*)0)||fun2_602->mExternal,        _if_conditional540) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value741=string_clone(name_589)))),(struct sFun*)come_increment_ref_count(fun_601));
            right_value741 = come_decrement_ref_count2(right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_566=fun_601;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2160, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value743=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value742=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2160, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_601),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sFunNode_sline;
        _inf_value10->sname=(void*)sFunNode_sname;
        _inf_value10->terminated=(void*)sFunNode_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_604=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value747=_inf_value10)));
        come_call_finalizer2(sFunNode_finalize,right_value742, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value743, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value747) { right_value747 = come_decrement_ref_count2(right_value747, ((struct sNode*)right_value747)->finalize, ((struct sNode*)right_value747)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional547=!node_compile(node_604,info),        _if_conditional547) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj174=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_586);
        come_call_finalizer2(buffer_finalize,__dec_obj174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_582;
        info->head=head_585;
        info->sline=sline_583;
        __dec_obj175=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_584);
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_570, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_584 = come_decrement_ref_count2(sname_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_586, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_587, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_588, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_589 = come_decrement_ref_count2(name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_590, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_591, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_593, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_595, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_596, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_597, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_601, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_602, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_604) { node_604 = come_decrement_ref_count2(node_604, ((struct sNode*)node_604)->finalize, ((struct sNode*)node_604)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_565;
    __dec_obj176=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_562);
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj177=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_563);
    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj178=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_564);
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result208__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value749=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value748=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2180, "struct tuple2$2sFunpcharph")))),equaler_566,(char*)come_increment_ref_count(real_fun_name_567))));
    last_code_562 = come_decrement_ref_count2(last_code_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_563 = come_decrement_ref_count2(last_code2_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_564 = come_decrement_ref_count2(last_code3_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_567 = come_decrement_ref_count2(real_fun_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_568, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value748 = come_decrement_ref_count2(right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value749, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result208__;
    last_code_562 = come_decrement_ref_count2(last_code_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_563 = come_decrement_ref_count2(last_code2_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_564 = come_decrement_ref_count2(last_code3_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_567 = come_decrement_ref_count2(real_fun_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_568, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result205__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result205__ = self->len;
                    return __result205__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_605;
char* __dec_obj179;
char* last_code2_606;
char* __dec_obj180;
char* last_code3_607;
char* __dec_obj181;
struct sClass* current_stack_frame_struct_608;
struct sFun* equaler_609;
void* right_value750;
char* real_fun_name_610;
void* right_value751;
struct sType* type2_611;
struct sClass* klass_612;
_Bool _if_conditional548;
void* right_value752;
void* right_value753;
struct buffer* source_613;
_Bool _if_conditional549;
char* name_614;
void* right_value754;
struct list$1tuple2$2charphsTypephph* o2_saved_616;
struct tuple2$2charphsTypeph* it_617;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_618;
struct sType* field_type_619;
_Bool _if_conditional550;
char* p_621;
int sline_622;
char* sname_623;
char* head_624;
struct buffer* source3_625;
struct buffer* __dec_obj182;
void* right_value755;
char* __dec_obj183;
void* right_value756;
struct sBlock* block_626;
void* right_value757;
void* right_value758;
struct sType* result_type_627;
void* right_value759;
char* name_628;
void* right_value760;
struct sType* left_type_629;
void* right_value761;
struct sType* right_type_630;
struct sType* __list_values29___631[2];
void* right_value762;
void* right_value763;
struct list$1sTypeph* param_types_632;
void* right_value764;
void* right_value765;
char* __list_values30___633[2];
void* right_value766;
void* right_value767;
struct list$1charph* param_names_634;
void* right_value768;
void* right_value769;
struct list$1charph* param_default_parametors_635;
void* right_value770;
void* right_value771;
struct buffer* header_buf_636;
void* right_value772;
int i_637;
void* right_value773;
struct sType* param_type_638;
void* right_value774;
char* param_name_639;
void* right_value775;
_Bool _if_conditional551;
void* right_value776;
void* right_value777;
void* right_value778;
void* right_value779;
struct sFun* fun_640;
void* right_value780;
void* right_value781;
struct sFun* fun2_641;
_Bool _if_conditional552;
void* right_value782;
void* right_value783;
void* right_value784;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value788;
struct sNode* node_643;
_Bool _if_conditional559;
struct buffer* __dec_obj186;
char* __dec_obj187;
char* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
void* right_value789;
void* right_value790;
struct tuple2$2sFunpcharph* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_605, 0, sizeof(char*));
memset(&last_code2_606, 0, sizeof(char*));
memset(&last_code3_607, 0, sizeof(char*));
memset(&current_stack_frame_struct_608, 0, sizeof(struct sClass*));
memset(&equaler_609, 0, sizeof(struct sFun*));
right_value750 = (void*)0;
memset(&real_fun_name_610, 0, sizeof(char*));
right_value751 = (void*)0;
memset(&type2_611, 0, sizeof(struct sType*));
memset(&klass_612, 0, sizeof(struct sClass*));
right_value752 = (void*)0;
right_value753 = (void*)0;
memset(&source_613, 0, sizeof(struct buffer*));
memset(&name_614, 0, sizeof(char*));
right_value754 = (void*)0;
memset(&o2_saved_616, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_617, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_618, 0, sizeof(char*));
memset(&field_type_619, 0, sizeof(struct sType*));
memset(&name_618, 0, sizeof(char*));
memset(&field_type_619, 0, sizeof(struct sType*));
memset(&p_621, 0, sizeof(char*));
memset(&sline_622, 0, sizeof(int));
memset(&sname_623, 0, sizeof(char*));
memset(&head_624, 0, sizeof(char*));
memset(&source3_625, 0, sizeof(struct buffer*));
right_value755 = (void*)0;
right_value756 = (void*)0;
memset(&block_626, 0, sizeof(struct sBlock*));
right_value757 = (void*)0;
right_value758 = (void*)0;
memset(&result_type_627, 0, sizeof(struct sType*));
right_value759 = (void*)0;
memset(&name_628, 0, sizeof(char*));
right_value760 = (void*)0;
memset(&left_type_629, 0, sizeof(struct sType*));
right_value761 = (void*)0;
memset(&right_type_630, 0, sizeof(struct sType*));
right_value762 = (void*)0;
right_value763 = (void*)0;
memset(&param_types_632, 0, sizeof(struct list$1sTypeph*));
right_value764 = (void*)0;
right_value765 = (void*)0;
right_value766 = (void*)0;
right_value767 = (void*)0;
memset(&param_names_634, 0, sizeof(struct list$1charph*));
right_value768 = (void*)0;
right_value769 = (void*)0;
memset(&param_default_parametors_635, 0, sizeof(struct list$1charph*));
right_value770 = (void*)0;
right_value771 = (void*)0;
memset(&header_buf_636, 0, sizeof(struct buffer*));
right_value772 = (void*)0;
memset(&i_637, 0, sizeof(int));
right_value773 = (void*)0;
memset(&param_type_638, 0, sizeof(struct sType*));
right_value774 = (void*)0;
memset(&param_name_639, 0, sizeof(char*));
right_value775 = (void*)0;
right_value776 = (void*)0;
right_value777 = (void*)0;
right_value778 = (void*)0;
right_value779 = (void*)0;
memset(&fun_640, 0, sizeof(struct sFun*));
right_value780 = (void*)0;
right_value781 = (void*)0;
memset(&fun2_641, 0, sizeof(struct sFun*));
right_value782 = (void*)0;
right_value783 = (void*)0;
right_value784 = (void*)0;
right_value788 = (void*)0;
memset(&node_643, 0, sizeof(struct sNode*));
right_value789 = (void*)0;
right_value790 = (void*)0;
    last_code_605=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj179=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_606=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj180=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_607=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj181=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_608=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_609=((void*)0);
    real_fun_name_610=(char*)come_increment_ref_count(((char*)(right_value750=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value750 = come_decrement_ref_count2(right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_611=(struct sType*)come_increment_ref_count(((struct sType*)(right_value751=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value751, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_611;
    klass_612=type->mClass;
    if(_if_conditional548=type->mPointerNum>0&&!klass_612->mNumber,    _if_conditional548) {
        source_613=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value753=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value752=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2205, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value752, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value753, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_613,123);
        if(klass_612->mProtocol) {
            name_614="_protocol_obj";
            char source2_615[1024];
            memset(&source2_615, 0, sizeof(char)            *(1024)            );
            snprintf(source2_615,1024,"return left.%s.equals(right.%s);\n",name_614,name_614);
            buffer_append_str(source_613,source2_615);
        }
        else {
            klass_612=((struct sClass*)(right_value754=map$2charphsClassphp_operator_load_element(info->classes,klass_612->mName)));
            come_call_finalizer2(sClass_finalize,right_value754, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_616=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_612->mFields)),it_617=list$1tuple2$2charphsTypephph_begin((o2_saved_616));            !list$1tuple2$2charphsTypephph_end((o2_saved_616));            it_617=list$1tuple2$2charphsTypephph_next((o2_saved_616))            ){
                multiple_assign_var14=it_617;
                name_618=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_619=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(_if_conditional550=string_operator_equals(type->mClass->mName,field_type_619->mClass->mName)&&type->mPointerNum==field_type_619->mPointerNum&&field_type_619->mHeap,                _if_conditional550) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_620[1024];
                memset(&source2_620, 0, sizeof(char)                *(1024)                );
                snprintf(source2_620,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_618,name_618);
                buffer_append_str(source_613,source2_620);
                name_618 = come_decrement_ref_count2(name_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_619, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_616, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_613,"return true;\n");
        buffer_append_char(source_613,125);
        p_621=info->p;
        sline_622=info->sline;
        sname_623=(char*)come_increment_ref_count(info->sname);
        head_624=info->head;
        source3_625=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj182=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_613);
        come_call_finalizer2(buffer_finalize,__dec_obj182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_613->buf;
        info->head=source_613->buf;
        __dec_obj183=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value755=__builtin_string(real_fun_name_610))));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value755 = come_decrement_ref_count2(right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_626=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value756=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value756, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_627=(struct sType*)come_increment_ref_count(((struct sType*)(right_value758=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value757=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2251, "struct sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value757, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value758, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_628=(char*)come_increment_ref_count(((char*)(right_value759=string_clone(real_fun_name_610))));
        right_value759 = come_decrement_ref_count2(right_value759, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_629=(struct sType*)come_increment_ref_count(((struct sType*)(right_value760=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value760, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_629->mHeap=(_Bool)0;
        right_type_630=(struct sType*)come_increment_ref_count(((struct sType*)(right_value761=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value761, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_630->mHeap=(_Bool)0;
        {__list_values29___631[0]=come_increment_ref_count(left_type_629);
__list_values29___631[1]=come_increment_ref_count(right_type_630);
}        param_types_632=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value763=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value762=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2257, "struct list$1sTypeph")))),2,__list_values29___631))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value762, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value763, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values30___633[0]=come_increment_ref_count(((char*)(right_value764=__builtin_string("left"))));
__list_values30___633[1]=come_increment_ref_count(((char*)(right_value765=__builtin_string("right"))));
}        param_names_634=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value767=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value766=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2258, "struct list$1charph")))),2,__list_values30___633))));
        right_value764 = come_decrement_ref_count2(right_value764, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value765 = come_decrement_ref_count2(right_value765, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value766, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value767, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_635=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value769=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value768=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2259, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value768, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value769, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_635,((void*)0));
        list$1charph_push_back(param_default_parametors_635,((void*)0));
        header_buf_636=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value771=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value770=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2263, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value770, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value771, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_636,((char*)(right_value772=make_come_type_name_string(result_type_627,info))));
        right_value772 = come_decrement_ref_count2(right_value772, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_636," ");
        buffer_append_str(header_buf_636,real_fun_name_610);
        buffer_append_str(header_buf_636,"(");
        for(        i_637=0;        i_637<list$1sTypeph_length(param_types_632);        i_637++        ){
            param_type_638=((struct sType*)(right_value773=list$1sTypephp_operator_load_element(param_types_632,i_637)));
            come_call_finalizer2(sType_finalize,right_value773, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_639=((char*)(right_value774=list$1charphp_operator_load_element(param_names_634,i_637)));
            right_value774 = come_decrement_ref_count2(right_value774, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_636,((char*)(right_value775=make_come_type_name_string(param_type_638,info))));
            right_value775 = come_decrement_ref_count2(right_value775, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_636," ");
            buffer_append_str(header_buf_636,param_name_639);
            if(_if_conditional551=i_637!=list$1sTypeph_length(param_types_632)-1,            _if_conditional551) {
                buffer_append_str(header_buf_636,",");
            }
        }
        buffer_append_str(header_buf_636,")");
        result_type_627->mStatic=(_Bool)0;
        fun_640=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value779=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value776=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2286, "struct sFun")))),(char*)come_increment_ref_count(name_628),(struct sType*)come_increment_ref_count(result_type_627),(struct list$1sTypeph*)come_increment_ref_count(param_types_632),(struct list$1charph*)come_increment_ref_count(param_names_634),(struct list$1charph*)come_increment_ref_count(param_default_parametors_635),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_626),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value777=buffer_to_string(header_buf_636)))),(char*)come_increment_ref_count(((char*)(right_value778=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value776, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value777 = come_decrement_ref_count2(right_value777, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value778 = come_decrement_ref_count2(right_value778, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value779, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_641=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value781=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value780=__builtin_string(fun_name)))))));
        right_value780 = come_decrement_ref_count2(right_value780, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value781, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional552=fun2_641==((void*)0)||fun2_641->mExternal,        _if_conditional552) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value782=string_clone(name_628)))),(struct sFun*)come_increment_ref_count(fun_640));
            right_value782 = come_decrement_ref_count2(right_value782, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_609=fun_640;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2302, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value784=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value783=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2302, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_640),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sFunNode_sline;
        _inf_value11->sname=(void*)sFunNode_sname;
        _inf_value11->terminated=(void*)sFunNode_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_643=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value788=_inf_value11)));
        come_call_finalizer2(sFunNode_finalize,right_value783, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value784, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value788) { right_value788 = come_decrement_ref_count2(right_value788, ((struct sNode*)right_value788)->finalize, ((struct sNode*)right_value788)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional559=!node_compile(node_643,info),        _if_conditional559) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj186=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_625);
        come_call_finalizer2(buffer_finalize,__dec_obj186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_621;
        info->head=head_624;
        info->sline=sline_622;
        __dec_obj187=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_623);
        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_613, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_623 = come_decrement_ref_count2(sname_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_625, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_626, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_627, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_628 = come_decrement_ref_count2(name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_629, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_630, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_632, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_634, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_635, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_636, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_640, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_641, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_643) { node_643 = come_decrement_ref_count2(node_643, ((struct sNode*)node_643)->finalize, ((struct sNode*)node_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_608;
    __dec_obj188=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_605);
    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj189=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_606);
    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj190=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_607);
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result211__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value790=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value789=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2322, "struct tuple2$2sFunpcharph")))),equaler_609,(char*)come_increment_ref_count(real_fun_name_610))));
    last_code_605 = come_decrement_ref_count2(last_code_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_606 = come_decrement_ref_count2(last_code2_606, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_607 = come_decrement_ref_count2(last_code3_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_610 = come_decrement_ref_count2(real_fun_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_611, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value789 = come_decrement_ref_count2(right_value789, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value790, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result211__;
    last_code_605 = come_decrement_ref_count2(last_code_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_606 = come_decrement_ref_count2(last_code2_606, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_607 = come_decrement_ref_count2(last_code3_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_610 = come_decrement_ref_count2(real_fun_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_611, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_644;
char* __dec_obj191;
char* last_code2_645;
char* __dec_obj192;
char* last_code3_646;
char* __dec_obj193;
struct sClass* current_stack_frame_struct_647;
struct sFun* cloner_648;
void* right_value791;
char* real_fun_name_649;
void* right_value792;
struct sType* type2_650;
struct sClass* klass_651;
_Bool _if_conditional560;
void* right_value793;
void* right_value794;
struct buffer* source_652;
void* right_value795;
void* right_value796;
_Bool _if_conditional561;
char* name_653;
void* right_value797;
struct list$1tuple2$2charphsTypephph* o2_saved_655;
struct tuple2$2charphsTypeph* it_656;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_657;
struct sType* field_type_658;
_Bool _if_conditional562;
_Bool _if_conditional563;
_Bool _if_conditional564;
void* right_value798;
struct list$1tuple2$2charphsTypephph* o2_saved_661;
struct tuple2$2charphsTypeph* it_662;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_663;
struct sType* field_type_664;
_Bool _if_conditional565;
_Bool _if_conditional566;
_Bool _if_conditional567;
void* right_value799;
char* p_668;
int sline_669;
char* sname_670;
struct buffer* source3_671;
char* head_672;
struct buffer* __dec_obj194;
void* right_value800;
char* __dec_obj195;
void* right_value801;
struct sBlock* block_673;
void* right_value802;
struct sType* result_type_674;
void* right_value803;
char* name_675;
void* right_value804;
struct sType* self_type_676;
struct sType* __list_values31___677[1];
void* right_value805;
void* right_value806;
struct list$1sTypeph* param_types_678;
void* right_value807;
char* __list_values32___679[1];
void* right_value808;
void* right_value809;
struct list$1charph* param_names_680;
void* right_value810;
void* right_value811;
struct list$1charph* param_default_parametors_681;
void* right_value812;
void* right_value813;
struct buffer* header_buf_682;
void* right_value814;
int i_683;
void* right_value815;
struct sType* param_type_684;
void* right_value816;
char* param_name_685;
void* right_value817;
_Bool _if_conditional568;
void* right_value818;
void* right_value819;
void* right_value820;
void* right_value821;
struct sFun* fun_686;
void* right_value822;
void* right_value823;
struct sFun* fun2_687;
_Bool _if_conditional569;
void* right_value824;
void* right_value825;
void* right_value826;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value830;
struct sNode* node_689;
_Bool _if_conditional576;
char* __dec_obj198;
struct buffer* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
void* right_value831;
void* right_value832;
struct tuple2$2sFunpcharph* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_644, 0, sizeof(char*));
memset(&last_code2_645, 0, sizeof(char*));
memset(&last_code3_646, 0, sizeof(char*));
memset(&current_stack_frame_struct_647, 0, sizeof(struct sClass*));
memset(&cloner_648, 0, sizeof(struct sFun*));
right_value791 = (void*)0;
memset(&real_fun_name_649, 0, sizeof(char*));
right_value792 = (void*)0;
memset(&type2_650, 0, sizeof(struct sType*));
memset(&klass_651, 0, sizeof(struct sClass*));
right_value793 = (void*)0;
right_value794 = (void*)0;
memset(&source_652, 0, sizeof(struct buffer*));
right_value795 = (void*)0;
right_value796 = (void*)0;
memset(&name_653, 0, sizeof(char*));
right_value797 = (void*)0;
memset(&o2_saved_655, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_656, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_657, 0, sizeof(char*));
memset(&field_type_658, 0, sizeof(struct sType*));
memset(&name_657, 0, sizeof(char*));
memset(&field_type_658, 0, sizeof(struct sType*));
right_value798 = (void*)0;
memset(&o2_saved_661, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_662, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_663, 0, sizeof(char*));
memset(&field_type_664, 0, sizeof(struct sType*));
memset(&name_663, 0, sizeof(char*));
memset(&field_type_664, 0, sizeof(struct sType*));
right_value799 = (void*)0;
memset(&p_668, 0, sizeof(char*));
memset(&sline_669, 0, sizeof(int));
memset(&sname_670, 0, sizeof(char*));
memset(&source3_671, 0, sizeof(struct buffer*));
memset(&head_672, 0, sizeof(char*));
right_value800 = (void*)0;
right_value801 = (void*)0;
memset(&block_673, 0, sizeof(struct sBlock*));
right_value802 = (void*)0;
memset(&result_type_674, 0, sizeof(struct sType*));
right_value803 = (void*)0;
memset(&name_675, 0, sizeof(char*));
right_value804 = (void*)0;
memset(&self_type_676, 0, sizeof(struct sType*));
right_value805 = (void*)0;
right_value806 = (void*)0;
memset(&param_types_678, 0, sizeof(struct list$1sTypeph*));
right_value807 = (void*)0;
right_value808 = (void*)0;
right_value809 = (void*)0;
memset(&param_names_680, 0, sizeof(struct list$1charph*));
right_value810 = (void*)0;
right_value811 = (void*)0;
memset(&param_default_parametors_681, 0, sizeof(struct list$1charph*));
right_value812 = (void*)0;
right_value813 = (void*)0;
memset(&header_buf_682, 0, sizeof(struct buffer*));
right_value814 = (void*)0;
memset(&i_683, 0, sizeof(int));
right_value815 = (void*)0;
memset(&param_type_684, 0, sizeof(struct sType*));
right_value816 = (void*)0;
memset(&param_name_685, 0, sizeof(char*));
right_value817 = (void*)0;
right_value818 = (void*)0;
right_value819 = (void*)0;
right_value820 = (void*)0;
right_value821 = (void*)0;
memset(&fun_686, 0, sizeof(struct sFun*));
right_value822 = (void*)0;
right_value823 = (void*)0;
memset(&fun2_687, 0, sizeof(struct sFun*));
right_value824 = (void*)0;
right_value825 = (void*)0;
right_value826 = (void*)0;
right_value830 = (void*)0;
memset(&node_689, 0, sizeof(struct sNode*));
right_value831 = (void*)0;
right_value832 = (void*)0;
    last_code_644=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj191=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_645=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj192=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_646=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj193=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_647=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_648=((void*)0);
    real_fun_name_649=(char*)come_increment_ref_count(((char*)(right_value791=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value791 = come_decrement_ref_count2(right_value791, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_650=(struct sType*)come_increment_ref_count(((struct sType*)(right_value792=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value792, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_650;
    klass_651=type->mClass;
    if(_if_conditional560=type->mPointerNum>0&&!klass_651->mNumber,    _if_conditional560) {
        source_652=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value794=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value793=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2347, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value793, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value794, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(source_652,"{\n");
        buffer_append_str(source_652,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_652,((char*)(right_value796=xsprintf("var result = new %s;\n",((char*)(right_value795=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value795 = come_decrement_ref_count2(right_value795, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value796 = come_decrement_ref_count2(right_value796, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_651->mProtocol) {
            name_653="_protocol_obj";
            char source2_654[1024];
            memset(&source2_654, 0, sizeof(char)            *(1024)            );
            snprintf(source2_654,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_652,source2_654);
            klass_651=((struct sClass*)(right_value797=map$2charphsClassphp_operator_load_element(info->classes,klass_651->mName)));
            come_call_finalizer2(sClass_finalize,right_value797, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_655=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_651->mFields)),it_656=list$1tuple2$2charphsTypephph_begin((o2_saved_655));            !list$1tuple2$2charphsTypephph_end((o2_saved_655));            it_656=list$1tuple2$2charphsTypephph_next((o2_saved_655))            ){
                multiple_assign_var15=it_656;
                name_657=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_658=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(_if_conditional562=string_operator_equals(type->mClass->mName,field_type_658->mClass->mName)&&type->mPointerNum==field_type_658->mPointerNum&&field_type_658->mHeap,                _if_conditional562) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(_if_conditional563=string_operator_equals(name_657,"_protocol_obj"),                _if_conditional563) {
                }
                else {
                    if(_if_conditional564=list$1sNodeph_length(field_type_658->mArrayNum)>0,                    _if_conditional564) {
                        char source2_659[1024];
                        memset(&source2_659, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_659,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_657,name_657,name_657);
                        buffer_append_str(source_652,source2_659);
                    }
                    else {
                        char source2_660[1024];
                        memset(&source2_660, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_660,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_657,name_657);
                        buffer_append_str(source_652,source2_660);
                    }
                }
                name_657 = come_decrement_ref_count2(name_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_658, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_655, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_651=((struct sClass*)(right_value798=map$2charphsClassphp_operator_load_element(info->classes,klass_651->mName)));
            come_call_finalizer2(sClass_finalize,right_value798, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_661=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_651->mFields)),it_662=list$1tuple2$2charphsTypephph_begin((o2_saved_661));            !list$1tuple2$2charphsTypephph_end((o2_saved_661));            it_662=list$1tuple2$2charphsTypephph_next((o2_saved_661))            ){
                multiple_assign_var16=it_662;
                name_663=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_664=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(_if_conditional565=string_operator_equals(type->mClass->mName,field_type_664->mClass->mName)&&type->mPointerNum==field_type_664->mPointerNum&&field_type_664->mHeap,                _if_conditional565) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_664->mHeap) {
                    char source2_665[1024];
                    memset(&source2_665, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_665,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_663,name_663,name_663);
                    buffer_append_str(source_652,source2_665);
                }
                else {
                    if(_if_conditional567=list$1sNodeph_length(field_type_664->mArrayNum)>0,                    _if_conditional567) {
                        char source2_666[1024];
                        memset(&source2_666, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_666,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_663,name_663,name_663);
                        buffer_append_str(source_652,source2_666);
                    }
                    else {
                        char source2_667[1024];
                        memset(&source2_667, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_667,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_663,name_663);
                        buffer_append_str(source_652,source2_667);
                    }
                }
                name_663 = come_decrement_ref_count2(name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_664, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_661, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_652,((char*)(right_value799=xsprintf("return result;"))));
        right_value799 = come_decrement_ref_count2(right_value799, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_652,125);
        p_668=info->p;
        sline_669=info->sline;
        sname_670=(char*)come_increment_ref_count(info->sname);
        source3_671=(struct buffer*)come_increment_ref_count(info->source);
        head_672=info->head;
        __dec_obj194=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_652);
        come_call_finalizer2(buffer_finalize,__dec_obj194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj195=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value800=__builtin_string(real_fun_name_649))));
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value800 = come_decrement_ref_count2(right_value800, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=1;
        block_673=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value801=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value801, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_674=(struct sType*)come_increment_ref_count(((struct sType*)(right_value802=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value802, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_675=(char*)come_increment_ref_count(((char*)(right_value803=string_clone(real_fun_name_649))));
        right_value803 = come_decrement_ref_count2(right_value803, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_676=(struct sType*)come_increment_ref_count(((struct sType*)(right_value804=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value804, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_676->mHeap=(_Bool)0;
        {__list_values31___677[0]=come_increment_ref_count(self_type_676);
}        param_types_678=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value806=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value805=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2441, "struct list$1sTypeph")))),1,__list_values31___677))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value805, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value806, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values32___679[0]=come_increment_ref_count(((char*)(right_value807=__builtin_string("self"))));
}        param_names_680=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value809=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value808=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2442, "struct list$1charph")))),1,__list_values32___679))));
        right_value807 = come_decrement_ref_count2(right_value807, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value808, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value809, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_681=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value811=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value810=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2443, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value810, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value811, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_681,((void*)0));
        header_buf_682=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value813=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value812=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2446, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value812, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value813, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_682,((char*)(right_value814=make_come_type_name_string(result_type_674,info))));
        right_value814 = come_decrement_ref_count2(right_value814, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_682," ");
        buffer_append_str(header_buf_682,real_fun_name_649);
        buffer_append_str(header_buf_682,"(");
        for(        i_683=0;        i_683<list$1sTypeph_length(param_types_678);        i_683++        ){
            param_type_684=((struct sType*)(right_value815=list$1sTypephp_operator_load_element(param_types_678,i_683)));
            come_call_finalizer2(sType_finalize,right_value815, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_685=((char*)(right_value816=list$1charphp_operator_load_element(param_names_680,i_683)));
            right_value816 = come_decrement_ref_count2(right_value816, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_682,((char*)(right_value817=make_come_type_name_string(param_type_684,info))));
            right_value817 = come_decrement_ref_count2(right_value817, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_682," ");
            buffer_append_str(header_buf_682,param_name_685);
            if(_if_conditional568=i_683!=list$1sTypeph_length(param_types_678)-1,            _if_conditional568) {
                buffer_append_str(header_buf_682,",");
            }
        }
        buffer_append_str(header_buf_682,")");
        result_type_674->mStatic=(_Bool)0;
        fun_686=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value821=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value818=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2469, "struct sFun")))),(char*)come_increment_ref_count(name_675),(struct sType*)come_increment_ref_count(result_type_674),(struct list$1sTypeph*)come_increment_ref_count(param_types_678),(struct list$1charph*)come_increment_ref_count(param_names_680),(struct list$1charph*)come_increment_ref_count(param_default_parametors_681),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_673),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value819=buffer_to_string(header_buf_682)))),(char*)come_increment_ref_count(((char*)(right_value820=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value818, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value819 = come_decrement_ref_count2(right_value819, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value820 = come_decrement_ref_count2(right_value820, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value821, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun_686->mCloner=(_Bool)1;
        fun2_687=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value823=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value822=__builtin_string(fun_name)))))));
        right_value822 = come_decrement_ref_count2(right_value822, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value823, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional569=fun2_687==((void*)0)||fun2_687->mExternal,        _if_conditional569) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value824=string_clone(name_675)))),(struct sFun*)come_increment_ref_count(fun_686));
            right_value824 = come_decrement_ref_count2(right_value824, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        cloner_648=fun_686;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2486, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value826=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value825=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2486, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_686),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sFunNode_sline;
        _inf_value12->sname=(void*)sFunNode_sname;
        _inf_value12->terminated=(void*)sFunNode_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_689=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value830=_inf_value12)));
        come_call_finalizer2(sFunNode_finalize,right_value825, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value826, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value830) { right_value830 = come_decrement_ref_count2(right_value830, ((struct sNode*)right_value830)->finalize, ((struct sNode*)right_value830)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional576=!node_compile(node_689,info),        _if_conditional576) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj198=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_670);
        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_669;
        __dec_obj199=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_671);
        come_call_finalizer2(buffer_finalize,__dec_obj199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_668;
        info->head=head_672;
        info->sline=sline_669;
        come_call_finalizer2(buffer_finalize,source_652, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_670 = come_decrement_ref_count2(sname_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_671, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_673, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_674, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_675 = come_decrement_ref_count2(name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_676, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_678, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_680, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_681, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_682, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_686, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_687, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_689) { node_689 = come_decrement_ref_count2(node_689, ((struct sNode*)node_689)->finalize, ((struct sNode*)node_689)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_647;
    __dec_obj200=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_644);
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj201=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_645);
    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj202=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_646);
    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result214__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value832=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value831=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2508, "struct tuple2$2sFunpcharph")))),cloner_648,(char*)come_increment_ref_count(real_fun_name_649))));
    last_code_644 = come_decrement_ref_count2(last_code_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_645 = come_decrement_ref_count2(last_code2_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_646 = come_decrement_ref_count2(last_code3_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_649 = come_decrement_ref_count2(real_fun_name_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_650, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value831 = come_decrement_ref_count2(right_value831, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value832, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result214__;
    last_code_644 = come_decrement_ref_count2(last_code_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_645 = come_decrement_ref_count2(last_code2_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_646 = come_decrement_ref_count2(last_code3_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_649 = come_decrement_ref_count2(real_fun_name_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_650, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFunNode_finalize(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional570;
_Bool _if_conditional571;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional570=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional570) {
                come_call_finalizer2(sFun_finalize,self->mFun, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional571=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional571) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional572;
struct sFunNode* __result212__;
void* right_value827;
struct sFunNode* result_688;
_Bool _if_conditional573;
void* right_value828;
struct sFun* __dec_obj196;
_Bool _if_conditional574;
_Bool _if_conditional575;
void* right_value829;
char* __dec_obj197;
struct sFunNode* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
right_value827 = (void*)0;
memset(&result_688, 0, sizeof(struct sFunNode*));
right_value828 = (void*)0;
right_value829 = (void*)0;
            if(_if_conditional572=self==(void*)0,            _if_conditional572) {
                __result212__ = __result_obj__ = (void*)0;
                return __result212__;
            }
            result_688=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value827=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode"))));
            come_call_finalizer2(sFunNode_finalize,right_value827, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional573=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional573) {
                __dec_obj196=result_688->mFun;
                result_688->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value828=sFun_clone(self->mFun))));
                come_call_finalizer2(sFun_finalize,__dec_obj196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,right_value828, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional574=self!=((void*)0),            _if_conditional574) {
                result_688->sline=self->sline;
            }
            if(_if_conditional575=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional575) {
                __dec_obj197=result_688->sname;
                result_688->sname=(char*)come_increment_ref_count(((char*)(right_value829=string_clone(self->sname))));
                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value829 = come_decrement_ref_count2(right_value829, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result213__ = __result_obj__ = result_688;
            come_call_finalizer2(sFunNode_finalize,result_688, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result213__;
            come_call_finalizer2(sFunNode_finalize,result_688, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

