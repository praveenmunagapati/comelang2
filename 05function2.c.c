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

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);

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
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
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
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
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
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_7;
struct list_item$1sTypeph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_7, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1sTypeph*));
                it_7=self->head;
                while(it_7!=((void*)0)) {
                    prev_it_8=it_7;
                    it_7=it_7->next;
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_9;
struct list_item$1sNodeph* prev_it_10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_9, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_10, 0, sizeof(struct list_item$1sNodeph*));
                it_9=self->head;
                while(it_9!=((void*)0)) {
                    prev_it_10=it_9;
                    it_9=it_9->next;
                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_11;
struct list_item$1charph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_11, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1charph*));
                it_11=self->head;
                while(it_11!=((void*)0)) {
                    prev_it_12=it_11;
                    it_11=it_11->next;
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->c_value!=((void*)0)) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->type!=((void*)0)) {
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
        if(self==(void*)0) {
            __result12__ = __result_obj__ = (void*)0;
            return __result12__;
        }
        result_14=(struct sType*)come_increment_ref_count(((struct sType*)(right_value18=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        come_call_finalizer2(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)) {
            result_14->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj9=result_14->mNoSolvedGenericsType;
            result_14->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value21=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
            __dec_obj10=result_14->mOriginalLoadVarType;
            result_14->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value22=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj11=result_14->mGenericsName;
            result_14->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value23=string_clone(self->mGenericsName))));
            __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj15=result_14->mGenericsTypes;
            result_14->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value30=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj19=result_14->mArrayNum;
            result_14->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value38=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_14->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj20=result_14->mParamTypes;
            result_14->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value39=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj24=result_14->mParamNames;
            result_14->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj25=result_14->mResultType;
            result_14->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value47=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_14->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
            __dec_obj26=result_14->mAlignas;
            result_14->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value48=sNode_clone(self->mAlignas))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value48) { right_value48 = come_decrement_ref_count2(right_value48, ((struct sNode*)right_value48)->finalize, ((struct sNode*)right_value48)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_14->mUnsigned=self->mUnsigned;
        }
        if(self!=((void*)0)) {
            result_14->mShort=self->mShort;
        }
        if(self!=((void*)0)) {
            result_14->mLong=self->mLong;
        }
        if(self!=((void*)0)) {
            result_14->mLongLong=self->mLongLong;
        }
        if(self!=((void*)0)) {
            result_14->mConstant=self->mConstant;
        }
        if(self!=((void*)0)) {
            result_14->mRegister=self->mRegister;
        }
        if(self!=((void*)0)) {
            result_14->mVolatile=self->mVolatile;
        }
        if(self!=((void*)0)) {
            result_14->mStatic=self->mStatic;
        }
        if(self!=((void*)0)) {
            result_14->mExtern=self->mExtern;
        }
        if(self!=((void*)0)) {
            result_14->mRestrict=self->mRestrict;
        }
        if(self!=((void*)0)) {
            result_14->mImmutable=self->mImmutable;
        }
        if(self!=((void*)0)) {
            result_14->mHeap=self->mHeap;
        }
        if(self!=((void*)0)) {
            result_14->mDummyHeap=self->mDummyHeap;
        }
        if(self!=((void*)0)) {
            result_14->mDelegate=self->mDelegate;
        }
        if(self!=((void*)0)) {
            result_14->mShare=self->mShare;
        }
        if(self!=((void*)0)) {
            result_14->mClone=self->mClone;
        }
        if(self!=((void*)0)) {
            result_14->mNoHeap=self->mNoHeap;
        }
        if(self!=((void*)0)) {
            result_14->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(self!=((void*)0)) {
            result_14->mRefference=self->mRefference;
        }
        if(self!=((void*)0)) {
            result_14->mException=self->mException;
        }
        if(self!=((void*)0)) {
            result_14->mPointerNum=self->mPointerNum;
        }
        if(self!=((void*)0)) {
            result_14->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(self!=((void*)0)) {
            result_14->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
            __dec_obj27=result_14->mSizeNum;
            result_14->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=sNode_clone(self->mSizeNum))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value49) { right_value49 = come_decrement_ref_count2(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_14->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_14->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj28=result_14->mOriginalTypeName;
            result_14->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value50=string_clone(self->mOriginalTypeName))));
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_14->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(self!=((void*)0)) {
            result_14->mFunctionParam=self->mFunctionParam;
        }
        if(self!=((void*)0)) {
            result_14->mAllocaValue=self->mAllocaValue;
        }
        if(self!=((void*)0)) {
            result_14->mGenericsStruct=self->mGenericsStruct;
        }
        if(self!=((void*)0)) {
            result_14->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(self!=((void*)0)) {
            result_14->mComeMemCore=self->mComeMemCore;
        }
        if(self!=((void*)0)) {
            result_14->mInline=self->mInline;
        }
        if(self!=((void*)0)) {
            result_14->mNullValue=self->mNullValue;
        }
        if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
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
                if(self==(void*)0) {
                    __result13__ = __result_obj__ = (void*)0;
                    return __result13__;
                }
                result_15=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value19=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
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
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
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
void* right_value29;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
right_value25 = (void*)0;
memset(&result_16, 0, sizeof(struct list$1sTypeph*));
memset(&it_17, 0, sizeof(struct list_item$1sTypeph*));
right_value29 = (void*)0;
                if(self==((void*)0)) {
                    __result15__ = __result_obj__ = ((void*)0);
                    return __result15__;
                }
                result_16=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value25=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value24=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_17=self->head;
                while(it_17!=((void*)0)) {
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
                        if(self->len==0) {
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
                            if(self->len==1) {
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
void* right_value37;
struct list$1sNodeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
memset(&result_21, 0, sizeof(struct list$1sNodeph*));
memset(&it_22, 0, sizeof(struct list_item$1sNodeph*));
right_value37 = (void*)0;
                if(self==((void*)0)) {
                    __result19__ = __result_obj__ = ((void*)0);
                    return __result19__;
                }
                result_21=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value32=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value31=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_22=self->head;
                while(it_22!=((void*)0)) {
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
                        if(self->len==0) {
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
                            if(self->len==1) {
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
                        if(self==(void*)0) {
                            __result22__ = __result_obj__ = (void*)0;
                            return __result22__;
                        }
                        result_26=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value36) { right_value36 = come_decrement_ref_count2(right_value36, ((struct sNode*)right_value36)->finalize, ((struct sNode*)right_value36)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(self!=((void*)0)&&self->clone!=((void*)0)) {
                            result_26->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(self!=((void*)0)) {
                            result_26->finalize=self->finalize;
                        }
                        if(self!=((void*)0)) {
                            result_26->clone=self->clone;
                        }
                        if(self!=((void*)0)) {
                            result_26->compile=self->compile;
                        }
                        if(self!=((void*)0)) {
                            result_26->sline=self->sline;
                        }
                        if(self!=((void*)0)) {
                            result_26->sname=self->sname;
                        }
                        if(self!=((void*)0)) {
                            result_26->terminated=self->terminated;
                        }
                        if(self!=((void*)0)) {
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
void* right_value45;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value40 = (void*)0;
right_value41 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1charph*));
memset(&it_28, 0, sizeof(struct list_item$1charph*));
right_value45 = (void*)0;
                if(self==((void*)0)) {
                    __result25__ = __result_obj__ = ((void*)0);
                    return __result25__;
                }
                result_27=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value41=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value40=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_28=self->head;
                while(it_28!=((void*)0)) {
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
                        if(self->len==0) {
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
                            if(self->len==1) {
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
        if(self->len==0) {
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
            if(self->len==1) {
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
                if(self!=((void*)0)&&self->item!=((void*)0)) {
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
        if(self!=((void*)0)&&self->mName!=((void*)0)) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mSource!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional105;
_Bool _if_conditional106;
memset(&__result_obj__, 0, sizeof(void*));
                if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
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
        if(string_operator_equals(info->come_fun->mName,"main")) {
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
        if(string_operator_equals(info->come_fun->mName,"main")) {
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

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
void* right_value66;
struct sType* __dec_obj39;
void* right_value67;
struct list$1charph* __dec_obj40;
char* __dec_obj41;
struct sType* __dec_obj42;
struct list$1sTypeph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct list$1charph* __dec_obj45;
char* __dec_obj46;
void* right_value68;
char* __dec_obj47;
struct sGenericsFun* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
    __dec_obj39=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(impl_type))));
    come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj40=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value67=list$1charphp_clone(generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj41=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj42=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj43=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj44=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer2(list$1charph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj45=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer2(list$1charph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj46=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj47=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value68=__builtin_string(generics_sname))));
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
            come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
            come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mName!=((void*)0)) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level){
void* __result_obj__;
void* right_value69;
void* right_value70;
struct sBlock* result_38;
int block_level_39;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
int sline_40;
char* sname_41;
void* right_value71;
struct sNode* node_42;
void* right_value72;
char* __dec_obj48;
_Bool _if_conditional130;
_Bool _if_conditional133;
_Bool _if_conditional134;
void* right_value76;
struct sNode* node_46;
_Bool _if_conditional135;
struct sBlock* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
right_value70 = (void*)0;
memset(&result_38, 0, sizeof(struct sBlock*));
memset(&block_level_39, 0, sizeof(int));
memset(&sline_40, 0, sizeof(int));
memset(&sname_41, 0, sizeof(char*));
right_value71 = (void*)0;
memset(&node_42, 0, sizeof(struct sNode*));
right_value72 = (void*)0;
right_value76 = (void*)0;
memset(&node_46, 0, sizeof(struct sNode*));
    result_38=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value70=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value69=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function2.c", 183, "struct sBlock")))),info))));
    come_call_finalizer2(sBlock_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sBlock_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    block_level_39=info->block_level;
    if(!no_block_level) {
        info->block_level++;
    }
    if(*info->p==123) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            parse_sharp_v5(info);
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            sline_40=info->sline;
            sname_41=info->sname;
            node_42=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value71=statment(info))));
            if(right_value71) { right_value71 = come_decrement_ref_count2(right_value71, ((struct sNode*)right_value71)->finalize, ((struct sNode*)right_value71)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj48=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value72=node_42->sname(node_42->_protocol_obj))));
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline=node_42->sline(node_42->_protocol_obj);
            if(node_42==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_38->mNodes,(struct sNode*)come_increment_ref_count(node_42));
            parse_sharp_v5(info);
            if(node_42->terminated(node_42->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(*info->p==125) {
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
        node_46=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=expression_v13(info))));
        if(right_value76) { right_value76 = come_decrement_ref_count2(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        if(node_46==((void*)0)) {
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
_Bool _if_conditional131;
void* right_value73;
struct list_item$1sNodeph* litem_43;
struct sNode* __dec_obj49;
_Bool _if_conditional132;
void* right_value74;
struct list_item$1sNodeph* litem_44;
struct sNode* __dec_obj50;
void* right_value75;
struct list_item$1sNodeph* litem_45;
struct sNode* __dec_obj51;
struct list$1sNodeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1sNodeph*));
right_value74 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1sNodeph*));
right_value75 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sNodeph*));
                if(self->len==0) {
                    litem_43=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value73=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 225, "struct list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_43->prev=((void*)0);
                    litem_43->next=((void*)0);
                    __dec_obj49=litem_43->item;
                    litem_43->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_43;
                    self->head=litem_43;
                }
                else {
                    if(self->len==1) {
                        litem_44=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value74=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 235, "struct list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_44->prev=self->head;
                        litem_44->next=((void*)0);
                        __dec_obj50=litem_44->item;
                        litem_44->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_44;
                        self->head->next=litem_44;
                    }
                    else {
                        litem_45=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value75=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 245, "struct list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_45->prev=self->tail;
                        litem_45->next=((void*)0);
                        __dec_obj51=litem_45->item;
                        litem_45->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
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
_Bool _if_conditional136;
int __result42__;
struct sVarTable* old_table_47;
_Bool _if_conditional137;
void* right_value77;
void* right_value78;
struct sVarTable* __dec_obj52;
struct sVarTable* current_loop_vtable_48;
_Bool _if_conditional138;
struct list$1sTypeph* param_types__49;
struct list$1charph* param_names__50;
_Bool _if_conditional139;
int i_51;
struct list$1charph* o2_saved_52;
char* name_55;
void* right_value79;
void* right_value80;
struct sType* type_61;
void* right_value81;
int block_level_62;
_Bool _if_conditional146;
_Bool _if_conditional147;
int i_63;
struct list$1sNodeph* o2_saved_64;
struct sNode* node_67;
struct list$1sRightValueObjectph* right_value_objects_70;
void* right_value82;
void* right_value83;
struct list$1sRightValueObjectph* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
int stack_num_before_73;
int sline_74;
void* right_value84;
char* sname_75;
void* right_value85;
char* __dec_obj57;
_Bool _if_conditional156;
void* right_value86;
char* __dec_obj58;
struct list$1sRightValueObjectph* __dec_obj59;
_Bool _if_conditional157;
int __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_table_47, 0, sizeof(struct sVarTable*));
right_value77 = (void*)0;
right_value78 = (void*)0;
memset(&current_loop_vtable_48, 0, sizeof(struct sVarTable*));
memset(&param_types__49, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__50, 0, sizeof(struct list$1charph*));
memset(&i_51, 0, sizeof(int));
memset(&o2_saved_52, 0, sizeof(struct list$1charph*));
memset(&name_55, 0, sizeof(char*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&type_61, 0, sizeof(struct sType*));
right_value81 = (void*)0;
memset(&block_level_62, 0, sizeof(int));
memset(&i_63, 0, sizeof(int));
memset(&o2_saved_64, 0, sizeof(struct list$1sNodeph*));
memset(&node_67, 0, sizeof(struct sNode*));
memset(&right_value_objects_70, 0, sizeof(struct list$1sRightValueObjectph*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&stack_num_before_73, 0, sizeof(int));
memset(&sline_74, 0, sizeof(int));
right_value84 = (void*)0;
memset(&sname_75, 0, sizeof(char*));
right_value85 = (void*)0;
right_value86 = (void*)0;
    if(info->output_header_file) {
        __result42__ = 0;
        return __result42__;
    }
    old_table_47=info->lv_table;
    if(!no_var_table) {
        __dec_obj52=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value78=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value77=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function2.c", 267, "struct sVarTable")))),(_Bool)0,old_table_47))));
        come_call_finalizer2(sVarTable_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sVarTable_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sVarTable_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    if(param_types&&param_names) {
        for(        o2_saved_52=(param_names),name_55=list$1charph_begin((o2_saved_52));        !list$1charph_end((o2_saved_52));        name_55=list$1charph_next((o2_saved_52))        ){
            type_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(((struct sType*)(right_value79=list$1sTypephp_operator_load_element(param_types,i_51)))))));
            come_call_finalizer2(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_61->mFunctionParam=(_Bool)1;
            type_61->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_55,(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(type_61)))),info);
            come_call_finalizer2(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            i_51++;
            come_call_finalizer2(sType_finalize,type_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_62=info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    if(list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_64=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_67=list$1sNodeph_begin((o2_saved_64));        !list$1sNodeph_end((o2_saved_64));        node_67=list$1sNodeph_next((o2_saved_64))        ){
            right_value_objects_70=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj53=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value83=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value82=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function2.c", 304, "struct list$1sRightValueObjectph"))))))));
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj54=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj55=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj56=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_73=list$1CVALUEph_length(info->stack);
            sline_74=info->sline;
            sname_75=(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string(info->sname))));
            right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_67->sline(node_67->_protocol_obj);
            __dec_obj57=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value85=node_67->sname(node_67->_protocol_obj))));
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->writing_source_file_position=(_Bool)1;
            if(!node_compile(node_67,info)) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_74;
            __dec_obj58=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value86=__builtin_string(sname_75))));
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_73);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj59=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_70);
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value_objects_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            sname_75 = come_decrement_ref_count2(sname_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(!no_var_table) {
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
_Bool _if_conditional140;
char* result_53;
char* __result43__;
_Bool _if_conditional141;
char* __result44__;
char* result_54;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_53, 0, sizeof(char*));
memset(&result_54, 0, sizeof(char*));
            if(self==((void*)0)) {
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
_Bool _if_conditional142;
char* result_56;
char* __result47__;
_Bool _if_conditional143;
char* __result48__;
char* result_57;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_56, 0, sizeof(char*));
memset(&result_57, 0, sizeof(char*));
            if(self==((void*)0)||self->it==((void*)0)) {
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
_Bool _if_conditional144;
struct list_item$1sTypeph* it_58;
int i_59;
_Bool _if_conditional145;
struct sType* __result50__;
struct sType* default_value_60;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_59, 0, sizeof(int));
memset(&default_value_60, 0, sizeof(struct sType*));
                if(position<0) {
                    position+=self->len;
                }
                it_58=self->head;
                i_59=0;
                while(it_58!=((void*)0)) {
                    if(position==i_59) {
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
_Bool _if_conditional148;
struct sNode* result_65;
struct sNode* __result53__;
_Bool _if_conditional149;
struct sNode* __result54__;
struct sNode* result_66;
struct sNode* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct sNode*));
memset(&result_66, 0, sizeof(struct sNode*));
            if(self==((void*)0)) {
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
_Bool _if_conditional150;
struct sNode* result_68;
struct sNode* __result57__;
_Bool _if_conditional151;
struct sNode* __result58__;
struct sNode* result_69;
struct sNode* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct sNode*));
memset(&result_69, 0, sizeof(struct sNode*));
            if(self==((void*)0)||self->it==((void*)0)) {
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
struct list_item$1sRightValueObjectph* prev_it_72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_71, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_72, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_71=self->head;
                    while(it_71!=((void*)0)) {
                        prev_it_72=it_71;
                        it_71=it_71->next;
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional152;
memset(&__result_obj__, 0, sizeof(void*));
                            if(self!=((void*)0)&&self->item!=((void*)0)) {
                                come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                        come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
                                        self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
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
struct list_item$1sRightValueObjectph* prev_it_77;
struct list$1sRightValueObjectph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_76, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_77, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_76=self->head;
                while(it_76!=((void*)0)) {
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
_Bool _if_conditional158;
_Bool _if_conditional159;
memset(&__result_obj__, 0, sizeof(void*));
    if(list$1CVALUEph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(list$1CVALUEph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional160;
_Bool _if_conditional161;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    parse_sharp_v5(info);
    if(*info->p!=c) {
        if(!info->no_output_err) {
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
_Bool _if_conditional162;
_Bool dquort_79;
_Bool squort_80;
int sline_81;
int nest_82;
_Bool _if_conditional163;
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
char* tail_83;
void* right_value87;
char* buf_84;
void* right_value88;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_78, 0, sizeof(char*));
memset(&dquort_79, 0, sizeof(_Bool));
memset(&squort_80, 0, sizeof(_Bool));
memset(&sline_81, 0, sizeof(int));
memset(&nest_82, 0, sizeof(int));
memset(&tail_83, 0, sizeof(char*));
right_value87 = (void*)0;
memset(&buf_84, 0, sizeof(char*));
right_value88 = (void*)0;
    head_78=info->p;
    if(*info->p==123) {
        info->p++;
        dquort_79=(_Bool)0;
        squort_80=(_Bool)0;
        sline_81=0;
        nest_82=0;
        while(1) {
            if(dquort_79) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                        exit(2);
                    }
                    info->p++;
                }
                else {
                    if(*info->p==34) {
                        info->p++;
                        dquort_79=!dquort_79;
                    }
                    else {
                        info->p++;
                        if(*info->p==0) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                            exit(2);
                        }
                    }
                }
            }
            else {
                if(squort_80) {
                    if(*info->p==92) {
                        info->p++;
                        if(*info->p==0) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                            exit(2);
                        }
                        info->p++;
                    }
                    else {
                        if(*info->p==39) {
                            info->p++;
                            squort_80=!squort_80;
                        }
                        else {
                            info->p++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    if(*info->p==39) {
                        sline_81=info->sline;
                        info->p++;
                        squort_80=!squort_80;
                    }
                    else {
                        if(*info->p==34) {
                            sline_81=info->sline;
                            info->p++;
                            dquort_79=!dquort_79;
                        }
                        else {
                            if(*info->p==35) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(*info->p==123) {
                                    info->p++;
                                    nest_82++;
                                }
                                else {
                                    if(*info->p==125) {
                                        info->p++;
                                        if(nest_82==0) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_82--;
                                    }
                                    else {
                                        if(*info->p==0) {
                                            err_msg(info,"The block requires } character for closing block");
                                            exit(2);
                                        }
                                        else {
                                            if(*info->p==10) {
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
    buf_84=(char*)come_increment_ref_count(((char*)(right_value87=(char*)come_calloc(1, sizeof(char)*(1*(tail_83-head_78+1)), "05function2.c", 487, "char"))));
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(buf_84,head_78,tail_83-head_78);
    buf_84[tail_83-head_78]=0;
    __result65__ = __result_obj__ = ((char*)(right_value88=__builtin_string(buf_84)));
    buf_84 = come_decrement_ref_count2(buf_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
    buf_84 = come_decrement_ref_count2(buf_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
void* __result_obj__;
_Bool terminated_85;
char* p3_86;
int i_87;
_Bool _if_conditional181;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&terminated_85, 0, sizeof(_Bool));
memset(&p3_86, 0, sizeof(char*));
memset(&i_87, 0, sizeof(int));
    terminated_85=(_Bool)0;
    p3_86=p;
    for(    i_87=0;    i_87<strlen(p2);    i_87++    ){
        if(*p3_86==0) {
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
void* right_value89;
void* right_value90;
struct buffer* asm_fun_name_88;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
int brace_num_89;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
int len_90;
_Bool in_dquort_91;
int brace_num_92;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
int brace_num_93;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value91;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
right_value90 = (void*)0;
memset(&asm_fun_name_88, 0, sizeof(struct buffer*));
memset(&brace_num_89, 0, sizeof(int));
memset(&len_90, 0, sizeof(int));
memset(&in_dquort_91, 0, sizeof(_Bool));
memset(&brace_num_92, 0, sizeof(int));
memset(&brace_num_93, 0, sizeof(int));
right_value91 = (void*)0;
    asm_fun_name_88=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value90=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value89=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 510, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while((_Bool)1) {
        if(strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else {
            if(strmemcmp(info->p,"__attribute_malloc__")) {
                info->p+=strlen("__attribute_malloc__");
                skip_spaces_and_lf(info);
            }
            else {
                if(strmemcmp(info->p,"__attr_dealloc_fclose")) {
                    info->p+=strlen("__attr_dealloc_fclose");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(strmemcmp(info->p,"__wur")) {
                        info->p+=strlen("__wur");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(strmemcmp(info->p,"__noreturn")) {
                            info->p+=strlen("__noreturn");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(strmemcmp(info->p,"__attribute__")) {
                                info->p+=strlen("__attribute__");
                                skip_spaces_and_lf(info);
                                brace_num_89=0;
                                while(*info->p) {
                                    if(*info->p==40) {
                                        info->p++;
                                        brace_num_89++;
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            brace_num_89--;
                                            if(brace_num_89==0) {
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
                                if(strmemcmp(info->p,"__asm__")) {
                                    info->p+=strlen("__asm__");
                                    skip_spaces_and_lf(info);
                                    len_90=0;
                                    in_dquort_91=(_Bool)0;
                                    brace_num_92=0;
                                    while(*info->p) {
                                        if(*info->p==34) {
                                            info->p++;
                                            in_dquort_91=!in_dquort_91;
                                        }
                                        else {
                                            if(in_dquort_91) {
                                                buffer_append_char(asm_fun_name_88,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(*info->p==40) {
                                                    info->p++;
                                                    brace_num_92++;
                                                }
                                                else {
                                                    if(*info->p==41) {
                                                        info->p++;
                                                        brace_num_92--;
                                                        if(brace_num_92==0) {
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
                                    if(strmemcmp(info->p,"__asm")) {
                                        info->p+=strlen("__asm");
                                        skip_spaces_and_lf(info);
                                        brace_num_93=0;
                                        while(*info->p) {
                                            if(*info->p==40) {
                                                info->p++;
                                                brace_num_93++;
                                            }
                                            else {
                                                if(*info->p==41) {
                                                    info->p++;
                                                    brace_num_93--;
                                                    if(brace_num_93==0) {
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
    __result67__ = __result_obj__ = ((char*)(right_value91=buffer_to_string(asm_fun_name_88)));
    come_call_finalizer2(buffer_finalize,asm_fun_name_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
    come_call_finalizer2(buffer_finalize,asm_fun_name_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __result_obj__;
char* head_94;
int head_sline_95;
void* right_value92;
char* buf_96;
_Bool _if_conditional201;
void* right_value93;
struct sNode* node_97;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_94, 0, sizeof(char*));
memset(&head_sline_95, 0, sizeof(int));
right_value92 = (void*)0;
memset(&buf_96, 0, sizeof(char*));
right_value93 = (void*)0;
memset(&node_97, 0, sizeof(struct sNode*));
    while(*info->p) {
        parse_sharp_v5(info);
        head_94=info->p;
        head_sline_95=info->sline;
        buf_96=(char*)come_increment_ref_count(((char*)(right_value92=parse_word(info))));
        right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_96 = come_decrement_ref_count2(buf_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_97=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value93=top_level_v99(buf_96,head_94,head_sline_95,info))));
        if(right_value93) { right_value93 = come_decrement_ref_count2(right_value93, ((struct sNode*)right_value93)->finalize, ((struct sNode*)right_value93)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(node_97!=((void*)0)) {
            if(!node_compile(node_97,info)) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(block&&*info->p==125) {
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
void* right_value94;
char* name_98;
void* right_value95;
void* right_value96;
struct sType* result_type_99;
void* right_value97;
void* right_value98;
void* right_value99;
void* right_value100;
void* right_value101;
void* right_value102;
void* right_value103;
void* right_value104;
void* right_value105;
void* right_value106;
struct sType* __list_values1___100[5];
void* right_value110;
void* right_value111;
struct list$1sTypeph* param_types_105;
void* right_value112;
void* right_value113;
void* right_value114;
void* right_value115;
void* right_value116;
char* __list_values2___106[5];
void* right_value120;
void* right_value121;
struct list$1charph* param_names_111;
void* right_value122;
void* right_value123;
struct list$1charph* param_default_parametors_112;
void* right_value124;
void* right_value125;
void* right_value126;
void* right_value127;
void* right_value128;
void* right_value129;
void* right_value130;
struct sFun* main_fun_113;
void* right_value139;
void* right_value140;
char* name_158;
void* right_value141;
void* right_value142;
struct sType* result_type_159;
void* right_value143;
void* right_value144;
struct sType* __list_values3___160[1];
void* right_value145;
void* right_value146;
struct list$1sTypeph* param_types_161;
void* right_value147;
char* __list_values4___162[1];
void* right_value148;
void* right_value149;
struct list$1charph* param_names_163;
void* right_value150;
void* right_value151;
struct list$1charph* param_default_parametors_164;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
struct sFun* main_fun_165;
void* right_value156;
void* right_value157;
char* name_166;
void* right_value158;
void* right_value159;
struct sType* result_type_167;
void* right_value160;
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
struct sType* __list_values5___168[7];
void* right_value174;
void* right_value175;
struct list$1sTypeph* param_types_169;
void* right_value176;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
void* right_value182;
char* __list_values6___170[7];
void* right_value183;
void* right_value184;
struct list$1charph* param_names_171;
void* right_value185;
void* right_value186;
struct list$1charph* param_default_parametors_172;
void* right_value187;
void* right_value188;
void* right_value189;
void* right_value190;
struct sFun* main_fun_173;
void* right_value191;
void* right_value192;
char* name_174;
void* right_value193;
void* right_value194;
struct sType* result_type_175;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
struct sType* __list_values7___176[5];
void* right_value205;
void* right_value206;
struct list$1sTypeph* param_types_177;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
char* __list_values8___178[5];
void* right_value212;
void* right_value213;
struct list$1charph* param_names_179;
void* right_value214;
void* right_value215;
struct list$1charph* param_default_parametors_180;
void* right_value216;
void* right_value217;
void* right_value218;
void* right_value219;
struct sFun* main_fun_181;
void* right_value220;
void* right_value221;
char* name_182;
void* right_value222;
void* right_value223;
struct sType* result_type_183;
void* right_value224;
void* right_value225;
struct sType* __list_values9___184[1];
void* right_value226;
void* right_value227;
struct list$1sTypeph* param_types_185;
void* right_value228;
char* __list_values10___186[1];
void* right_value229;
void* right_value230;
struct list$1charph* param_names_187;
void* right_value231;
void* right_value232;
struct list$1charph* param_default_parametors_188;
void* right_value233;
void* right_value234;
void* right_value235;
void* right_value236;
struct sFun* main_fun_189;
void* right_value237;
void* right_value238;
char* name_190;
void* right_value239;
void* right_value240;
struct sType* result_type_191;
void* right_value241;
void* right_value242;
void* right_value243;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
struct sType* __list_values11___192[4];
void* right_value249;
void* right_value250;
struct list$1sTypeph* param_types_193;
void* right_value251;
void* right_value252;
void* right_value253;
void* right_value254;
void* right_value255;
char* __list_values12___194[5];
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
struct sType* __list_values13___200[1];
void* right_value273;
void* right_value274;
struct list$1sTypeph* param_types_201;
void* right_value275;
char* __list_values14___202[1];
void* right_value276;
void* right_value277;
struct list$1charph* param_names_203;
void* right_value278;
void* right_value279;
struct list$1charph* param_default_parametors_204;
void* right_value280;
void* right_value281;
void* right_value282;
void* right_value283;
struct sFun* main_fun_205;
void* right_value284;
void* right_value285;
char* name_206;
void* right_value286;
void* right_value287;
struct sType* result_type_207;
void* right_value288;
void* right_value289;
void* right_value290;
void* right_value291;
void* right_value292;
void* right_value293;
struct sType* __list_values15___208[3];
void* right_value294;
void* right_value295;
struct list$1sTypeph* param_types_209;
void* right_value296;
void* right_value297;
void* right_value298;
char* __list_values16___210[3];
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
struct list$1sTypeph* param_types_216;
void* right_value313;
void* right_value314;
struct list$1charph* param_names_217;
void* right_value315;
void* right_value316;
struct list$1charph* param_default_parametors_218;
void* right_value317;
void* right_value318;
void* right_value319;
void* right_value320;
struct sFun* main_fun_219;
void* right_value321;
void* right_value322;
char* name_220;
void* right_value323;
void* right_value324;
struct sType* result_type_221;
void* right_value325;
void* right_value326;
void* right_value327;
void* right_value328;
void* right_value329;
void* right_value330;
struct sType* __list_values17___222[3];
void* right_value331;
void* right_value332;
struct list$1sTypeph* param_types_223;
void* right_value333;
void* right_value334;
void* right_value335;
char* __list_values18___224[3];
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
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&name_98, 0, sizeof(char*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&result_type_99, 0, sizeof(struct sType*));
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&param_types_105, 0, sizeof(struct list$1sTypeph*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&param_names_111, 0, sizeof(struct list$1charph*));
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&param_default_parametors_112, 0, sizeof(struct list$1charph*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&main_fun_113, 0, sizeof(struct sFun*));
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&name_158, 0, sizeof(char*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&result_type_159, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&param_types_161, 0, sizeof(struct list$1sTypeph*));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&param_names_163, 0, sizeof(struct list$1charph*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&param_default_parametors_164, 0, sizeof(struct list$1charph*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&main_fun_165, 0, sizeof(struct sFun*));
right_value156 = (void*)0;
right_value157 = (void*)0;
memset(&name_166, 0, sizeof(char*));
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&result_type_167, 0, sizeof(struct sType*));
right_value160 = (void*)0;
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
memset(&param_types_169, 0, sizeof(struct list$1sTypeph*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&param_names_171, 0, sizeof(struct list$1charph*));
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&param_default_parametors_172, 0, sizeof(struct list$1charph*));
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&main_fun_173, 0, sizeof(struct sFun*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&name_174, 0, sizeof(char*));
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&result_type_175, 0, sizeof(struct sType*));
right_value195 = (void*)0;
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
memset(&param_types_177, 0, sizeof(struct list$1sTypeph*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&param_names_179, 0, sizeof(struct list$1charph*));
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&param_default_parametors_180, 0, sizeof(struct list$1charph*));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&main_fun_181, 0, sizeof(struct sFun*));
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&name_182, 0, sizeof(char*));
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&result_type_183, 0, sizeof(struct sType*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&param_types_185, 0, sizeof(struct list$1sTypeph*));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&param_names_187, 0, sizeof(struct list$1charph*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&param_default_parametors_188, 0, sizeof(struct list$1charph*));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&main_fun_189, 0, sizeof(struct sFun*));
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&name_190, 0, sizeof(char*));
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&result_type_191, 0, sizeof(struct sType*));
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&param_types_193, 0, sizeof(struct list$1sTypeph*));
right_value251 = (void*)0;
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
memset(&param_types_201, 0, sizeof(struct list$1sTypeph*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
memset(&param_names_203, 0, sizeof(struct list$1charph*));
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&param_default_parametors_204, 0, sizeof(struct list$1charph*));
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&main_fun_205, 0, sizeof(struct sFun*));
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&name_206, 0, sizeof(char*));
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&result_type_207, 0, sizeof(struct sType*));
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&param_types_209, 0, sizeof(struct list$1sTypeph*));
right_value296 = (void*)0;
right_value297 = (void*)0;
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
memset(&param_types_216, 0, sizeof(struct list$1sTypeph*));
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&param_names_217, 0, sizeof(struct list$1charph*));
right_value315 = (void*)0;
right_value316 = (void*)0;
memset(&param_default_parametors_218, 0, sizeof(struct list$1charph*));
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&main_fun_219, 0, sizeof(struct sFun*));
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&name_220, 0, sizeof(char*));
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&result_type_221, 0, sizeof(struct sType*));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&param_types_223, 0, sizeof(struct list$1sTypeph*));
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
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
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_98=(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string("come_calloc"))));
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_99=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value95=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 679, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values1___100[0]=come_increment_ref_count(((struct sType*)(right_value98=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value97=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 680, "struct sType")))),"int",(_Bool)0,info))));
__list_values1___100[1]=come_increment_ref_count(((struct sType*)(right_value100=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value99=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 680, "struct sType")))),"int",(_Bool)0,info))));
__list_values1___100[2]=come_increment_ref_count(((struct sType*)(right_value102=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value101=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 680, "struct sType")))),"char*",(_Bool)0,info))));
__list_values1___100[3]=come_increment_ref_count(((struct sType*)(right_value104=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value103=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 680, "struct sType")))),"int",(_Bool)0,info))));
__list_values1___100[4]=come_increment_ref_count(((struct sType*)(right_value106=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value105=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 680, "struct sType")))),"char*",(_Bool)0,info))));
}        param_types_105=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value110=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 680, "struct list$1sTypeph")))),5,__list_values1___100))));
        come_call_finalizer2(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values2___106[0]=come_increment_ref_count(((char*)(right_value112=__builtin_string("count"))));
__list_values2___106[1]=come_increment_ref_count(((char*)(right_value113=__builtin_string("size"))));
__list_values2___106[2]=come_increment_ref_count(((char*)(right_value114=__builtin_string("sname"))));
__list_values2___106[3]=come_increment_ref_count(((char*)(right_value115=__builtin_string("sline"))));
__list_values2___106[4]=come_increment_ref_count(((char*)(right_value116=__builtin_string("class_name"))));
}        param_names_111=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value120=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 681, "struct list$1charph")))),5,__list_values2___106))));
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_112=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 682, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_112,((void*)0));
        list$1charph_push_back(param_default_parametors_112,((void*)0));
        list$1charph_push_back(param_default_parametors_112,(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string("null")))));
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_112,(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string("0")))));
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_112,(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string("null")))));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_113=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value130=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value127=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 688, "struct sFun")))),(char*)come_increment_ref_count(name_98),(struct sType*)come_increment_ref_count(result_type_99),(struct list$1sTypeph*)come_increment_ref_count(param_types_105),(struct list$1charph*)come_increment_ref_count(param_names_111),(struct list$1charph*)come_increment_ref_count(param_default_parametors_112),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(name_98)))),(struct sFun*)come_increment_ref_count(main_fun_113));
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_98 = come_decrement_ref_count2(name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_158=(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string("come_increment_ref_count"))));
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value141=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 699, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values3___160[0]=come_increment_ref_count(((struct sType*)(right_value144=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value143=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 700, "struct sType")))),"void*",(_Bool)0,info))));
}        param_types_161=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value146=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value145=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 700, "struct list$1sTypeph")))),1,__list_values3___160))));
        come_call_finalizer2(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values4___162[0]=come_increment_ref_count(((char*)(right_value147=__builtin_string("mem"))));
}        param_names_163=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value149=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value148=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 701, "struct list$1charph")))),1,__list_values4___162))));
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_164=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 702, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_165=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value155=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value152=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 703, "struct sFun")))),(char*)come_increment_ref_count(name_158),(struct sType*)come_increment_ref_count(result_type_159),(struct list$1sTypeph*)come_increment_ref_count(param_types_161),(struct list$1charph*)come_increment_ref_count(param_names_163),(struct list$1charph*)come_increment_ref_count(param_default_parametors_164),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(name_158)))),(struct sFun*)come_increment_ref_count(main_fun_165));
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_158 = come_decrement_ref_count2(name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_166=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string("come_call_finalizer"))));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value158=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 714, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values5___168[0]=come_increment_ref_count(((struct sType*)(right_value161=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value160=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "struct sType")))),"void*",(_Bool)0,info))));
__list_values5___168[1]=come_increment_ref_count(((struct sType*)(right_value163=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value162=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "struct sType")))),"void*",(_Bool)0,info))));
__list_values5___168[2]=come_increment_ref_count(((struct sType*)(right_value165=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value164=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "struct sType")))),"void*",(_Bool)0,info))));
__list_values5___168[3]=come_increment_ref_count(((struct sType*)(right_value167=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value166=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "struct sType")))),"void*",(_Bool)0,info))));
__list_values5___168[4]=come_increment_ref_count(((struct sType*)(right_value169=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value168=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "struct sType")))),"int",(_Bool)0,info))));
__list_values5___168[5]=come_increment_ref_count(((struct sType*)(right_value171=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value170=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "struct sType")))),"int",(_Bool)0,info))));
__list_values5___168[6]=come_increment_ref_count(((struct sType*)(right_value173=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value172=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "struct sType")))),"int",(_Bool)0,info))));
}        param_types_169=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value175=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value174=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 715, "struct list$1sTypeph")))),7,__list_values5___168))));
        come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
        come_call_finalizer2(list$1sTypeph_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values6___170[0]=come_increment_ref_count(((char*)(right_value176=__builtin_string("fun"))));
__list_values6___170[1]=come_increment_ref_count(((char*)(right_value177=__builtin_string("mem"))));
__list_values6___170[2]=come_increment_ref_count(((char*)(right_value178=__builtin_string("protocol_fun"))));
__list_values6___170[3]=come_increment_ref_count(((char*)(right_value179=__builtin_string("protocol_obj"))));
__list_values6___170[4]=come_increment_ref_count(((char*)(right_value180=__builtin_string("call_finalizer_only"))));
__list_values6___170[5]=come_increment_ref_count(((char*)(right_value181=__builtin_string("no_decrement"))));
__list_values6___170[6]=come_increment_ref_count(((char*)(right_value182=__builtin_string("no_free"))));
}        param_names_171=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value184=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value183=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 716, "struct list$1charph")))),7,__list_values6___170))));
        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_172=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value186=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value185=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 717, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_173=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value190=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value187=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 718, "struct sFun")))),(char*)come_increment_ref_count(name_166),(struct sType*)come_increment_ref_count(result_type_167),(struct list$1sTypeph*)come_increment_ref_count(param_types_169),(struct list$1charph*)come_increment_ref_count(param_names_171),(struct list$1charph*)come_increment_ref_count(param_default_parametors_172),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string(name_166)))),(struct sFun*)come_increment_ref_count(main_fun_173));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_166 = come_decrement_ref_count2(name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_174=(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string("come_decrement_ref_count"))));
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_175=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value193=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 729, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values7___176[0]=come_increment_ref_count(((struct sType*)(right_value196=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value195=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 730, "struct sType")))),"void*",(_Bool)0,info))));
__list_values7___176[1]=come_increment_ref_count(((struct sType*)(right_value198=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value197=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 730, "struct sType")))),"void*",(_Bool)0,info))));
__list_values7___176[2]=come_increment_ref_count(((struct sType*)(right_value200=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value199=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 730, "struct sType")))),"void*",(_Bool)0,info))));
__list_values7___176[3]=come_increment_ref_count(((struct sType*)(right_value202=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value201=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 730, "struct sType")))),"bool",(_Bool)0,info))));
__list_values7___176[4]=come_increment_ref_count(((struct sType*)(right_value204=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value203=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 730, "struct sType")))),"bool",(_Bool)0,info))));
}        param_types_177=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value206=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value205=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 730, "struct list$1sTypeph")))),5,__list_values7___176))));
        come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values8___178[0]=come_increment_ref_count(((char*)(right_value207=__builtin_string("mem"))));
__list_values8___178[1]=come_increment_ref_count(((char*)(right_value208=__builtin_string("protocol_fun"))));
__list_values8___178[2]=come_increment_ref_count(((char*)(right_value209=__builtin_string("protocol_obj"))));
__list_values8___178[3]=come_increment_ref_count(((char*)(right_value210=__builtin_string("no_decrement"))));
__list_values8___178[4]=come_increment_ref_count(((char*)(right_value211=__builtin_string("no_free"))));
}        param_names_179=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value213=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value212=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 731, "struct list$1charph")))),5,__list_values8___178))));
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_180=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value215=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value214=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 732, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_181=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value219=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value216=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 733, "struct sFun")))),(char*)come_increment_ref_count(name_174),(struct sType*)come_increment_ref_count(result_type_175),(struct list$1sTypeph*)come_increment_ref_count(param_types_177),(struct list$1charph*)come_increment_ref_count(param_names_179),(struct list$1charph*)come_increment_ref_count(param_default_parametors_180),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(name_174)))),(struct sFun*)come_increment_ref_count(main_fun_181));
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_182=(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string("come_free_object"))));
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value222=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 744, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values9___184[0]=come_increment_ref_count(((struct sType*)(right_value225=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value224=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 745, "struct sType")))),"void*",(_Bool)0,info))));
}        param_types_185=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value227=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value226=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 745, "struct list$1sTypeph")))),1,__list_values9___184))));
        come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values10___186[0]=come_increment_ref_count(((char*)(right_value228=__builtin_string("mem"))));
}        param_names_187=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value230=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value229=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 746, "struct list$1charph")))),1,__list_values10___186))));
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_188=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value232=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value231=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 747, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_189=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value236=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value233=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 748, "struct sFun")))),(char*)come_increment_ref_count(name_182),(struct sType*)come_increment_ref_count(result_type_183),(struct list$1sTypeph*)come_increment_ref_count(param_types_185),(struct list$1charph*)come_increment_ref_count(param_names_187),(struct list$1charph*)come_increment_ref_count(param_default_parametors_188),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string(name_182)))),(struct sFun*)come_increment_ref_count(main_fun_189));
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_182 = come_decrement_ref_count2(name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_190=(char*)come_increment_ref_count(((char*)(right_value238=__builtin_string("come_memdup"))));
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value239=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 759, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values11___192[0]=come_increment_ref_count(((struct sType*)(right_value242=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value241=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 760, "struct sType")))),"void*",(_Bool)0,info))));
__list_values11___192[1]=come_increment_ref_count(((struct sType*)(right_value244=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value243=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 760, "struct sType")))),"char*",(_Bool)0,info))));
__list_values11___192[2]=come_increment_ref_count(((struct sType*)(right_value246=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value245=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 760, "struct sType")))),"int",(_Bool)0,info))));
__list_values11___192[3]=come_increment_ref_count(((struct sType*)(right_value248=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value247=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 760, "struct sType")))),"char*",(_Bool)0,info))));
}        param_types_193=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value250=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value249=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 760, "struct list$1sTypeph")))),4,__list_values11___192))));
        come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values12___194[0]=come_increment_ref_count(((char*)(right_value251=__builtin_string("block"))));
__list_values12___194[1]=come_increment_ref_count(((char*)(right_value252=__builtin_string("sname"))));
__list_values12___194[2]=come_increment_ref_count(((char*)(right_value253=__builtin_string("sline"))));
__list_values12___194[3]=come_increment_ref_count(((char*)(right_value254=__builtin_string("char*"))));
__list_values12___194[4]=come_increment_ref_count(((char*)(right_value255=__builtin_string("class_name"))));
}        param_names_195=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value257=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value256=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 761, "struct list$1charph")))),5,__list_values12___194))));
        right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_196=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value259=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value258=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 762, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_196,((void*)0));
        list$1charph_push_back(param_default_parametors_196,(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string("null")))));
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_196,(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string("0")))));
        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_196,(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string("null")))));
        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_197=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value266=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value263=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 767, "struct sFun")))),(char*)come_increment_ref_count(name_190),(struct sType*)come_increment_ref_count(result_type_191),(struct list$1sTypeph*)come_increment_ref_count(param_types_193),(struct list$1charph*)come_increment_ref_count(param_names_195),(struct list$1charph*)come_increment_ref_count(param_default_parametors_196),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string("")))),info))));
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
        name_198=(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string("__builtin_string"))));
        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 778, "struct sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values13___200[0]=come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 779, "struct sType")))),"char*",(_Bool)0,info))));
}        param_types_201=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value274=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value273=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 779, "struct list$1sTypeph")))),1,__list_values13___200))));
        come_call_finalizer2(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values14___202[0]=come_increment_ref_count(((char*)(right_value275=__builtin_string("str"))));
}        param_names_203=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value277=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value276=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 780, "struct list$1charph")))),1,__list_values14___202))));
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_204=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value279=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value278=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 781, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_205=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value283=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value280=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 782, "struct sFun")))),(char*)come_increment_ref_count(name_198),(struct sType*)come_increment_ref_count(result_type_199),(struct list$1sTypeph*)come_increment_ref_count(param_types_201),(struct list$1charph*)come_increment_ref_count(param_names_203),(struct list$1charph*)come_increment_ref_count(param_default_parametors_204),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value281=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string(name_198)))),(struct sFun*)come_increment_ref_count(main_fun_205));
        right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_198 = come_decrement_ref_count2(name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_206=(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("come_heap_init"))));
        right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value287=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value286=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 793, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values15___208[0]=come_increment_ref_count(((struct sType*)(right_value289=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value288=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 794, "struct sType")))),"int",(_Bool)0,info))));
__list_values15___208[1]=come_increment_ref_count(((struct sType*)(right_value291=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value290=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 794, "struct sType")))),"int",(_Bool)0,info))));
__list_values15___208[2]=come_increment_ref_count(((struct sType*)(right_value293=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value292=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 794, "struct sType")))),"int",(_Bool)0,info))));
}        param_types_209=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value295=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value294=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 794, "struct list$1sTypeph")))),3,__list_values15___208))));
        come_call_finalizer2(sType_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values16___210[0]=come_increment_ref_count(((char*)(right_value296=xsprintf("come_malloc"))));
__list_values16___210[1]=come_increment_ref_count(((char*)(right_value297=xsprintf("come_debug"))));
__list_values16___210[2]=come_increment_ref_count(((char*)(right_value298=xsprintf("come_gc"))));
}        param_names_211=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value300=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value299=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 795, "struct list$1charph")))),3,__list_values16___210))));
        right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_212=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value302=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value301=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 796, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_212,((void*)0));
        main_fun_213=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value306=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value303=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 798, "struct sFun")))),(char*)come_increment_ref_count(name_206),(struct sType*)come_increment_ref_count(result_type_207),(struct list$1sTypeph*)come_increment_ref_count(param_types_209),(struct list$1charph*)come_increment_ref_count(param_names_211),(struct list$1charph*)come_increment_ref_count(param_default_parametors_212),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value304=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string("")))),info))));
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
        name_214=(char*)come_increment_ref_count(((char*)(right_value308=__builtin_string("come_heap_final"))));
        right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_215=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value309=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 809, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_types_216=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value312=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value311=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 810, "struct list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_names_217=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value314=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value313=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 811, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_218=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value316=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value315=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 812, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_219=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value320=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value317=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 813, "struct sFun")))),(char*)come_increment_ref_count(name_214),(struct sType*)come_increment_ref_count(result_type_215),(struct list$1sTypeph*)come_increment_ref_count(param_types_216),(struct list$1charph*)come_increment_ref_count(param_names_217),(struct list$1charph*)come_increment_ref_count(param_default_parametors_218),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value318=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value319=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value321=__builtin_string(name_214)))),(struct sFun*)come_increment_ref_count(main_fun_219));
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_214 = come_decrement_ref_count2(name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_220=(char*)come_increment_ref_count(((char*)(right_value322=__builtin_string("come_null_check"))));
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_221=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value323=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 824, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values17___222[0]=come_increment_ref_count(((struct sType*)(right_value326=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value325=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 825, "struct sType")))),"void*",(_Bool)0,info))));
__list_values17___222[1]=come_increment_ref_count(((struct sType*)(right_value328=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value327=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 825, "struct sType")))),"char*",(_Bool)0,info))));
__list_values17___222[2]=come_increment_ref_count(((struct sType*)(right_value330=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value329=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 825, "struct sType")))),"int",(_Bool)0,info))));
}        param_types_223=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value332=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value331=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 825, "struct list$1sTypeph")))),3,__list_values17___222))));
        come_call_finalizer2(sType_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values18___224[0]=come_increment_ref_count(((char*)(right_value333=__builtin_string("mem"))));
__list_values18___224[1]=come_increment_ref_count(((char*)(right_value334=__builtin_string("sname"))));
__list_values18___224[2]=come_increment_ref_count(((char*)(right_value335=__builtin_string("sline"))));
}        param_names_225=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value337=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value336=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 826, "struct list$1charph")))),3,__list_values18___224))));
        right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_226=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value339=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value338=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 827, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_227=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value343=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value340=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 828, "struct sFun")))),(char*)come_increment_ref_count(name_220),(struct sType*)come_increment_ref_count(result_type_221),(struct list$1sTypeph*)come_increment_ref_count(param_types_223),(struct list$1charph*)come_increment_ref_count(param_names_225),(struct list$1charph*)come_increment_ref_count(param_default_parametors_226),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value341=__builtin_string("void* come_null_check(void* mem, char* sname, int sline)")))),(char*)come_increment_ref_count(((char*)(right_value342=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(name_220)))),(struct sFun*)come_increment_ref_count(main_fun_227));
        right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_220 = come_decrement_ref_count2(name_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional205;
void* right_value107;
struct list_item$1sTypeph* litem_102;
struct sType* __dec_obj60;
_Bool _if_conditional206;
void* right_value108;
struct list_item$1sTypeph* litem_103;
struct sType* __dec_obj61;
void* right_value109;
struct list_item$1sTypeph* litem_104;
struct sType* __dec_obj62;
struct list$1sTypeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1sTypeph*));
right_value108 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1sTypeph*));
right_value109 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1sTypeph*));
                    if(self->len==0) {
                        litem_102=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value107=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 225, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_102->prev=((void*)0);
                        litem_102->next=((void*)0);
                        __dec_obj60=litem_102->item;
                        litem_102->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_102;
                        self->head=litem_102;
                    }
                    else {
                        if(self->len==1) {
                            litem_103=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value108=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 235, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_103->prev=self->head;
                            litem_103->next=((void*)0);
                            __dec_obj61=litem_103->item;
                            litem_103->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_103;
                            self->head->next=litem_103;
                        }
                        else {
                            litem_104=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value109=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 245, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_104->prev=self->tail;
                            litem_104->next=((void*)0);
                            __dec_obj62=litem_104->item;
                            litem_104->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional207;
void* right_value117;
struct list_item$1charph* litem_108;
char* __dec_obj63;
_Bool _if_conditional208;
void* right_value118;
struct list_item$1charph* litem_109;
char* __dec_obj64;
void* right_value119;
struct list_item$1charph* litem_110;
char* __dec_obj65;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1charph*));
right_value118 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1charph*));
right_value119 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
                    if(self->len==0) {
                        litem_108=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value117=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 225, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_108->prev=((void*)0);
                        litem_108->next=((void*)0);
                        __dec_obj63=litem_108->item;
                        litem_108->item=(char*)come_increment_ref_count(item);
                        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_108;
                        self->head=litem_108;
                    }
                    else {
                        if(self->len==1) {
                            litem_109=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value118=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 235, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_109->prev=self->head;
                            litem_109->next=((void*)0);
                            __dec_obj64=litem_109->item;
                            litem_109->item=(char*)come_increment_ref_count(item);
                            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_109;
                            self->head->next=litem_109;
                        }
                        else {
                            litem_110=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value119=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 245, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_110->prev=self->tail;
                            litem_110->next=((void*)0);
                            __dec_obj65=litem_110->item;
                            litem_110->item=(char*)come_increment_ref_count(item);
                            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
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
_Bool _if_conditional209;
unsigned int hash_131;
unsigned int it_132;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool same_key_exist_149;
char* it2_152;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct map$2charphsFunph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_131, 0, sizeof(unsigned int));
memset(&it_132, 0, sizeof(unsigned int));
memset(&same_key_exist_149, 0, sizeof(_Bool));
memset(&it2_152, 0, sizeof(char*));
            if(self->len*10>=self->size) {
                map$2charphsFunph_rehash(self);
            }
            hash_131=string_get_hash_key(key)%self->size;
            it_132=hash_131;
            while((_Bool)1) {
                if(self->item_existance[it_132]) {
                    if(string_equals(self->keys[it_132],key)) {
                        if(1) {
                            list$1charp_remove(self->key_list,self->keys[it_132]);
                            self->keys[it_132] = come_decrement_ref_count2(self->keys[it_132], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_132]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_132]);
                            self->keys[it_132]=key;
                        }
                        if(1) {
                            come_call_finalizer2(sFun_finalize,self->items[it_132], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_132]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_132]=item;
                        }
                        break;
                    }
                    it_132++;
                    if(it_132>=self->size) {
                        it_132=0;
                    }
                    else {
                        if(it_132==hash_131) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_132]=(_Bool)1;
                    if(1) {
                        self->keys[it_132]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_132]=key;
                    }
                    if(1) {
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
                if(string_equals(it2_152,key)) {
                    same_key_exist_149=(_Bool)1;
                }
            }
            if(!same_key_exist_149) {
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
void* right_value131;
char** keys_115;
void* right_value132;
struct sFun** items_116;
void* right_value133;
_Bool* item_existance_117;
int len_118;
char* it_121;
struct sFun* default_value_124;
void* right_value134;
struct sFun* it2_127;
unsigned int hash_128;
int n_129;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
struct sFun* default_value_130;
void* right_value135;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_114, 0, sizeof(int));
right_value131 = (void*)0;
memset(&keys_115, 0, sizeof(char**));
right_value132 = (void*)0;
memset(&items_116, 0, sizeof(struct sFun**));
right_value133 = (void*)0;
memset(&item_existance_117, 0, sizeof(_Bool*));
memset(&len_118, 0, sizeof(int));
memset(&it_121, 0, sizeof(char*));
memset(&default_value_124, 0, sizeof(struct sFun*));
right_value134 = (void*)0;
memset(&it2_127, 0, sizeof(struct sFun*));
memset(&hash_128, 0, sizeof(unsigned int));
memset(&n_129, 0, sizeof(int));
memset(&default_value_130, 0, sizeof(struct sFun*));
right_value135 = (void*)0;
                    size_114=self->size*10;
                    keys_115=(char**)come_increment_ref_count(((char**)(right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(size_114)), "./comelang2.h", 1331, "char*"))));
                    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_116=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value132=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_114)), "./comelang2.h", 1332, "struct sFun*"))));
                    come_call_finalizer2(sFun_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_117=(_Bool*)come_increment_ref_count(((_Bool*)(right_value133=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_114)), "./comelang2.h", 1333, "_Bool"))));
                    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_118=0;
                    for(                    it_121=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_121=map$2charphsFunph_next(self)                    ){
                        memset(&default_value_124,0,sizeof(struct sFun*));
                        it2_127=((struct sFun*)(right_value134=map$2charphsFunph_at(self,it_121,default_value_124)));
                        come_call_finalizer2(sFun_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        hash_128=string_get_hash_key(it_121)%size_114;
                        n_129=hash_128;
                        while((_Bool)1) {
                            if(item_existance_117[n_129]) {
                                n_129++;
                                if(n_129>=size_114) {
                                    n_129=0;
                                }
                                else {
                                    if(n_129==hash_128) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_117[n_129]=(_Bool)1;
                                keys_115[n_129]=it_121;
                                items_116[n_129]=((struct sFun*)(right_value135=map$2charphsFunph_at(self,it_121,default_value_130)));
                                come_call_finalizer2(sFun_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional210;
char* result_119;
char* __result72__;
_Bool _if_conditional211;
char* __result73__;
char* result_120;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_119, 0, sizeof(char*));
memset(&result_120, 0, sizeof(char*));
                        if(self==((void*)0)) {
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
_Bool _if_conditional212;
char* result_122;
char* __result76__;
_Bool _if_conditional213;
char* __result77__;
char* result_123;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_122, 0, sizeof(char*));
memset(&result_123, 0, sizeof(char*));
                        if(self==((void*)0)||self->key_list->it==((void*)0)) {
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
_Bool _if_conditional214;
_Bool _if_conditional215;
struct sFun* __result79__;
_Bool _if_conditional216;
_Bool _if_conditional217;
struct sFun* __result80__;
struct sFun* __result81__;
struct sFun* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_125, 0, sizeof(unsigned int));
memset(&it_126, 0, sizeof(unsigned int));
                            hash_125=string_get_hash_key(((char*)key))%self->size;
                            it_126=hash_125;
                            while((_Bool)1) {
                                if(self->item_existance[it_126]) {
                                    if(string_equals(self->keys[it_126],key)) {
                                        __result79__ = __result_obj__ = self->items[it_126];
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result79__;
                                    }
                                    it_126++;
                                    if(it_126>=self->size) {
                                        it_126=0;
                                    }
                                    else {
                                        if(it_126==hash_125) {
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
_Bool _if_conditional224;
struct list$1charp* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_133, 0, sizeof(int));
memset(&it_134, 0, sizeof(struct list_item$1charp*));
                                it2_133=0;
                                it_134=self->head;
                                while(it_134!=((void*)0)) {
                                    if(string_equals(it_134->item,item)) {
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
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
int tmp_135;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
struct list$1charp* __result83__;
_Bool _if_conditional231;
_Bool _if_conditional232;
struct list_item$1charp* it_138;
int i_139;
_Bool _if_conditional233;
struct list_item$1charp* prev_it_140;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct list_item$1charp* it_141;
int i_142;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct list_item$1charp* prev_it_143;
struct list_item$1charp* it_144;
struct list_item$1charp* head_prev_it_145;
struct list_item$1charp* tail_it_146;
int i_147;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
struct list_item$1charp* prev_it_148;
_Bool _if_conditional241;
_Bool _if_conditional242;
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
                                            if(head<0) {
                                                head+=self->len;
                                            }
                                            if(tail<0) {
                                                tail+=self->len+1;
                                            }
                                            if(head>tail) {
                                                tmp_135=tail;
                                                tail=head;
                                                head=tmp_135;
                                            }
                                            if(head<0) {
                                                head=0;
                                            }
                                            if(tail>self->len) {
                                                tail=self->len;
                                            }
                                            if(head==tail) {
                                                __result83__ = __result_obj__ = self;
                                                return __result83__;
                                            }
                                            if(head==0&&tail==self->len) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(head==0) {
                                                    it_138=self->head;
                                                    i_139=0;
                                                    while(it_138!=((void*)0)) {
                                                        if(i_139<tail) {
                                                            prev_it_140=it_138;
                                                            it_138=it_138->next;
                                                            i_139++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(i_139==tail) {
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
                                                    if(tail==self->len) {
                                                        it_141=self->head;
                                                        i_142=0;
                                                        while(it_141!=((void*)0)) {
                                                            if(i_142==head) {
                                                                self->tail=it_141->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(i_142>=head) {
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
                                                        while(it_144!=((void*)0)) {
                                                            if(i_147==head) {
                                                                head_prev_it_145=it_144->prev;
                                                            }
                                                            if(i_147==tail) {
                                                                tail_it_146=it_144;
                                                            }
                                                            if(i_147>=head&&i_147<tail) {
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
                                                        if(head_prev_it_145!=((void*)0)) {
                                                            head_prev_it_145->next=tail_it_146;
                                                        }
                                                        if(tail_it_146!=((void*)0)) {
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
struct list_item$1charp* prev_it_137;
struct list$1charp* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_136, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_137, 0, sizeof(struct list_item$1charp*));
                                                    it_136=self->head;
                                                    while(it_136!=((void*)0)) {
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
_Bool _if_conditional248;
char* result_150;
char* __result87__;
_Bool _if_conditional249;
char* __result88__;
char* result_151;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_150, 0, sizeof(char*));
memset(&result_151, 0, sizeof(char*));
                if(self==((void*)0)) {
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
_Bool _if_conditional250;
char* result_153;
char* __result91__;
_Bool _if_conditional251;
char* __result92__;
char* result_154;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_153, 0, sizeof(char*));
memset(&result_154, 0, sizeof(char*));
                if(self==((void*)0)||self->it==((void*)0)) {
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
_Bool _if_conditional254;
void* right_value136;
struct list_item$1charp* litem_155;
_Bool _if_conditional255;
void* right_value137;
struct list_item$1charp* litem_156;
void* right_value138;
struct list_item$1charp* litem_157;
struct list$1charp* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1charp*));
right_value137 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charp*));
right_value138 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charp*));
                    if(self->len==0) {
                        litem_155=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value136=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 225, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_155->prev=((void*)0);
                        litem_155->next=((void*)0);
                        litem_155->item=item;
                        self->tail=litem_155;
                        self->head=litem_155;
                    }
                    else {
                        if(self->len==1) {
                            litem_156=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value137=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 235, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_156->prev=self->head;
                            litem_156->next=((void*)0);
                            litem_156->item=item;
                            self->tail=litem_156;
                            self->head->next=litem_156;
                        }
                        else {
                            litem_157=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value138=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 245, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
_Bool is_type_name_flag_228;
int sline_229;
_Bool define_struct_nobody_230;
char* p_231;
int sline_232;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value345;
char* word_233;
_Bool _if_conditional258;
_Bool define_function_pointer_result_function_234;
_Bool define_variable_between_brace_235;
_Bool _if_conditional259;
char* p_236;
_Bool _if_conditional260;
void* right_value346;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_237;
char* fun_name_238;
_Bool err_239;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value347;
char* word_240;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool define_function_flag_241;
_Bool _if_conditional268;
char* p_242;
_Bool invalid_type_243;
_Bool _if_conditional269;
void* right_value348;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_244;
char* fun_name_245;
_Bool err_246;
_Bool _if_conditional270;
char* word_247;
_Bool _if_conditional271;
void* right_value349;
char* __dec_obj66;
_Bool _if_conditional272;
void* right_value350;
char* __dec_obj67;
char* __dec_obj68;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value351;
char* __dec_obj69;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool define_variable_248;
_Bool _if_conditional280;
char* p_249;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value352;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_250;
char* fun_name_251;
_Bool err_252;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value353;
char* word_253;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value354;
char* word_254;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value355;
struct sNode* __result97__;
_Bool _if_conditional297;
char* header_head_255;
void* right_value356;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_256;
char* fun_name_257;
_Bool err_258;
_Bool _if_conditional298;
void* right_value357;
void* right_value358;
struct list$1sTypeph* param_types_259;
void* right_value359;
void* right_value360;
struct list$1charph* param_names_260;
_Bool _if_conditional299;
void* right_value361;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_261;
char* param_name_262;
_Bool err_263;
_Bool _if_conditional300;
static int num_function_pointer_result_var_name_a_264=0;
void* right_value362;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
void* right_value363;
void* right_value364;
struct list$1sTypeph* param_types2_265;
void* right_value365;
void* right_value366;
struct list$1charph* param_names2_266;
_Bool _if_conditional304;
void* right_value367;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_267;
char* param_name_268;
_Bool err_269;
_Bool _if_conditional305;
static int num_function_pointer_result_var_name_b_270=0;
void* right_value368;
_Bool _if_conditional306;
_Bool _if_conditional307;
char* header_tail_271;
void* right_value369;
void* right_value370;
struct sType* result_type2_272;
void* right_value371;
void* right_value372;
struct tuple1$1sTypeph* __dec_obj71;
void* right_value373;
struct list$1sTypeph* __dec_obj72;
void* right_value374;
struct list$1charph* __dec_obj73;
_Bool var_args_273;
void* right_value375;
void* right_value376;
struct buffer* header_buf_274;
void* right_value377;
void* right_value378;
struct list$1charph* param_default_parametors_275;
void* right_value379;
void* right_value380;
void* right_value381;
void* right_value382;
void* right_value383;
struct sFun* fun_276;
void* right_value384;
void* right_value385;
struct sFun* fun2_280;
_Bool _if_conditional312;
void* right_value386;
void* right_value387;
void* right_value388;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value430;
struct sNode* __result129__;
_Bool _if_conditional387;
void* right_value431;
struct sNode* __result130__;
_Bool _if_conditional388;
void* right_value432;
struct sNode* __result131__;
void* right_value433;
char* buf2_316;
void* right_value434;
struct sNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_228, 0, sizeof(_Bool));
memset(&sline_229, 0, sizeof(int));
memset(&define_struct_nobody_230, 0, sizeof(_Bool));
memset(&p_231, 0, sizeof(char*));
memset(&sline_232, 0, sizeof(int));
right_value345 = (void*)0;
memset(&word_233, 0, sizeof(char*));
memset(&define_function_pointer_result_function_234, 0, sizeof(_Bool));
memset(&define_variable_between_brace_235, 0, sizeof(_Bool));
memset(&p_236, 0, sizeof(char*));
right_value346 = (void*)0;
memset(&result_type_237, 0, sizeof(struct sType*));
memset(&fun_name_238, 0, sizeof(char*));
memset(&err_239, 0, sizeof(_Bool));
memset(&result_type_237, 0, sizeof(struct sType*));
memset(&fun_name_238, 0, sizeof(char*));
memset(&err_239, 0, sizeof(_Bool));
right_value347 = (void*)0;
memset(&word_240, 0, sizeof(char*));
memset(&define_function_flag_241, 0, sizeof(_Bool));
memset(&p_242, 0, sizeof(char*));
memset(&invalid_type_243, 0, sizeof(_Bool));
right_value348 = (void*)0;
memset(&result_type_244, 0, sizeof(struct sType*));
memset(&fun_name_245, 0, sizeof(char*));
memset(&err_246, 0, sizeof(_Bool));
memset(&result_type_244, 0, sizeof(struct sType*));
memset(&fun_name_245, 0, sizeof(char*));
memset(&err_246, 0, sizeof(_Bool));
memset(&word_247, 0, sizeof(char*));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
memset(&define_variable_248, 0, sizeof(_Bool));
memset(&p_249, 0, sizeof(char*));
right_value352 = (void*)0;
memset(&result_type_250, 0, sizeof(struct sType*));
memset(&fun_name_251, 0, sizeof(char*));
memset(&err_252, 0, sizeof(_Bool));
memset(&result_type_250, 0, sizeof(struct sType*));
memset(&fun_name_251, 0, sizeof(char*));
memset(&err_252, 0, sizeof(_Bool));
right_value353 = (void*)0;
memset(&word_253, 0, sizeof(char*));
right_value354 = (void*)0;
memset(&word_254, 0, sizeof(char*));
right_value355 = (void*)0;
memset(&header_head_255, 0, sizeof(char*));
right_value356 = (void*)0;
memset(&result_type_256, 0, sizeof(struct sType*));
memset(&fun_name_257, 0, sizeof(char*));
memset(&err_258, 0, sizeof(_Bool));
memset(&result_type_256, 0, sizeof(struct sType*));
memset(&fun_name_257, 0, sizeof(char*));
memset(&err_258, 0, sizeof(_Bool));
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&param_types_259, 0, sizeof(struct list$1sTypeph*));
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&param_names_260, 0, sizeof(struct list$1charph*));
right_value361 = (void*)0;
memset(&param_type_261, 0, sizeof(struct sType*));
memset(&param_name_262, 0, sizeof(char*));
memset(&err_263, 0, sizeof(_Bool));
memset(&param_type_261, 0, sizeof(struct sType*));
memset(&param_name_262, 0, sizeof(char*));
memset(&err_263, 0, sizeof(_Bool));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&param_types2_265, 0, sizeof(struct list$1sTypeph*));
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&param_names2_266, 0, sizeof(struct list$1charph*));
right_value367 = (void*)0;
memset(&param_type_267, 0, sizeof(struct sType*));
memset(&param_name_268, 0, sizeof(char*));
memset(&err_269, 0, sizeof(_Bool));
memset(&param_type_267, 0, sizeof(struct sType*));
memset(&param_name_268, 0, sizeof(char*));
memset(&err_269, 0, sizeof(_Bool));
right_value368 = (void*)0;
memset(&header_tail_271, 0, sizeof(char*));
right_value369 = (void*)0;
right_value370 = (void*)0;
memset(&result_type2_272, 0, sizeof(struct sType*));
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
memset(&var_args_273, 0, sizeof(_Bool));
right_value375 = (void*)0;
right_value376 = (void*)0;
memset(&header_buf_274, 0, sizeof(struct buffer*));
right_value377 = (void*)0;
right_value378 = (void*)0;
memset(&param_default_parametors_275, 0, sizeof(struct list$1charph*));
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
memset(&fun_276, 0, sizeof(struct sFun*));
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&fun2_280, 0, sizeof(struct sFun*));
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value433 = (void*)0;
memset(&buf2_316, 0, sizeof(char*));
right_value434 = (void*)0;
    is_type_name_flag_228=is_type_name(buf,info);
    sline_229=info->sline;
    define_struct_nobody_230=(_Bool)0;
    {
        p_231=info->p;
        sline_232=info->sline;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                word_233=(char*)come_increment_ref_count(((char*)(right_value345=parse_word(info))));
                right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(*info->p==59) {
                    define_struct_nobody_230=(_Bool)1;
                }
                word_233 = come_decrement_ref_count2(word_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_232;
    }
    define_function_pointer_result_function_234=(_Bool)0;
    define_variable_between_brace_235=(_Bool)0;
    if(is_type_name_flag_228) {
        p_236=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            info->no_output_err=(_Bool)1;
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value346=parse_type(info,(_Bool)0,(_Bool)1)));
            result_type_237=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_238=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_239=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=(_Bool)0;
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p!=42) {
                    define_function_pointer_result_function_234=(_Bool)1;
                    if(xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_240=(char*)come_increment_ref_count(((char*)(right_value347=parse_word(info))));
                        right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(!is_type_name(word_240,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                            }
                            else {
                                define_variable_between_brace_235=(_Bool)1;
                            }
                        }
                        word_240 = come_decrement_ref_count2(word_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_238 = come_decrement_ref_count2(fun_name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_229;
    }
    define_function_flag_241=(_Bool)0;
    if(is_type_name_flag_228&&!define_function_pointer_result_function_234&&charp_operator_not_equals(buf,"__typeof__")) {
        p_242=info->p;
        info->p=head;
        invalid_type_243=(_Bool)0;
        info->no_output_err=(_Bool)1;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value348=parse_type(info,(_Bool)0,(_Bool)1)));
            result_type_244=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_245=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_246=multiple_assign_var2->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,result_type_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_245 = come_decrement_ref_count2(fun_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->no_output_err=(_Bool)0;
        if(!info->define_struct) {
            info->define_struct=(_Bool)0;
            word_247=((void*)0);
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj66=word_247;
                word_247=(char*)come_increment_ref_count(((char*)(right_value349=parse_word(info))));
                __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(string_operator_equals(word_247,"extern")) {
                    __dec_obj67=word_247;
                    word_247=(char*)come_increment_ref_count(((char*)(right_value350=parse_word(info))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                __dec_obj68=word_247;
                word_247=((void*)0);
                __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_247) {
                if(is_type_name(word_247,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(xisalnum(*info->p)||*info->p==95) {
                        __dec_obj69=word_247;
                        word_247=(char*)come_increment_ref_count(((char*)(right_value351=parse_word(info))));
                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                if(strlen(word_247)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(is_type_name_flag_228) {
                        define_function_flag_241=(_Bool)1;
                    }
                }
            }
            word_247 = come_decrement_ref_count2(word_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_242;
        info->sline=sline_229;
    }
    define_variable_248=(_Bool)1;
    if(is_type_name_flag_228&&!define_function_pointer_result_function_234) {
        p_249=info->p;
        info->p=head;
        if(!is_type_name_flag_228) {
            define_variable_248=(_Bool)0;
        }
        if(xisalpha(*info->p)||*info->p==95) {
            info->no_output_err=(_Bool)1;
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value352=parse_type(info,(_Bool)0,(_Bool)1)));
            result_type_250=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_251=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_252=multiple_assign_var3->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=(_Bool)0;
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_253=(char*)come_increment_ref_count(((char*)(right_value353=parse_word(info))));
                        right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                                define_variable_248=(_Bool)1;
                            }
                        }
                        word_253 = come_decrement_ref_count2(word_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_254=(char*)come_increment_ref_count(((char*)(right_value354=parse_word(info))));
                        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(!is_type_name(word_254,info)&&*info->p!=40) {
                                define_variable_248=(_Bool)1;
                            }
                        }
                        word_254 = come_decrement_ref_count2(word_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_251 = come_decrement_ref_count2(fun_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_248=(_Bool)0;
        }
        else {
            if(define_variable_248) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_248=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_248=(_Bool)0;
                }
            }
        }
        info->p=p_249;
        info->sline=sline_229;
    }
    else {
        define_variable_248=(_Bool)0;
    }
    if(define_struct_nobody_230) {
    }
    else {
        if(define_variable_between_brace_235) {
            info->p=head;
            info->sline=sline_229;
            __result97__ = __result_obj__ = ((struct sNode*)(right_value355=parse_global_variable(info)));
            if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result97__;
        }
        else {
            if(define_function_pointer_result_function_234) {
                header_head_255=info->p;
                multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value356=parse_type(info,(_Bool)0,(_Bool)1)));
                result_type_256=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                fun_name_257=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_258=multiple_assign_var4->v3;
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(*info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    param_types_259=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value358=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value357=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1072, "struct list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    param_names_260=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value360=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value359=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1073, "struct list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        while((_Bool)1) {
                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value361=parse_type(info,(_Bool)0,(_Bool)0)));
                            param_type_261=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                            param_name_262=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            err_263=multiple_assign_var5->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(!err_263) {
                                err_msg(info,"parse_type is failed");
                                exit(2);
                            }
                            list$1sTypeph_push_back(param_types_259,(struct sType*)come_increment_ref_count(param_type_261));
                            list$1charph_push_back(param_names_260,(char*)come_increment_ref_count(((char*)(right_value362=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_264)))));
                            right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(*info->p==44) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                if(*info->p==41) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    come_call_finalizer2(sType_finalize,param_type_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    param_name_262 = come_decrement_ref_count2(param_name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    break;
                                }
                                else {
                                    err_msg(info,"require , or )");
                                    exit(2);
                                }
                            }
                            come_call_finalizer2(sType_finalize,param_type_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            param_name_262 = come_decrement_ref_count2(param_name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    expected_next_character(41,info);
                    if(*info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types2_265=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value364=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value363=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1115, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        param_names2_266=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value366=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value365=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1116, "struct list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while((_Bool)1) {
                                multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value367=parse_type(info,(_Bool)0,(_Bool)0)));
                                param_type_267=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                param_name_268=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                err_269=multiple_assign_var6->v3;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(!err_269) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types2_265,(struct sType*)come_increment_ref_count(param_type_267));
                                list$1charph_push_back(param_names2_266,(char*)come_increment_ref_count(((char*)(right_value368=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_270)))));
                                right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(*info->p==44) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(*info->p==41) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        come_call_finalizer2(sType_finalize,param_type_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        param_name_268 = come_decrement_ref_count2(param_name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or )");
                                        exit(2);
                                    }
                                }
                                come_call_finalizer2(sType_finalize,param_type_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                param_name_268 = come_decrement_ref_count2(param_name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        header_tail_271=info->p;
                        result_type2_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value370=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value369=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1154, "struct sType")))),"lambda",(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj71=result_type2_272->mResultType;
                        result_type2_272->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value372=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value371=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function2.c", 1156, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_256)))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj72=result_type2_272->mParamTypes;
                        result_type2_272->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value373=list$1sTypephp_clone(param_types2_265))));
                        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj73=result_type2_272->mParamNames;
                        result_type2_272->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value374=list$1charphp_clone(param_names2_266))));
                        come_call_finalizer2(list$1charph_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        result_type2_272->mVarArgs=(_Bool)0;
                        result_type2_272->mStatic=(_Bool)0;
                        var_args_273=(_Bool)0;
                        header_buf_274=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value376=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value375=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1164, "struct buffer"))))))));
                        come_call_finalizer2(buffer_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(buffer_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        buffer_append(header_buf_274,header_head_255,header_tail_271-header_head_255);
                        buffer_append_char(header_buf_274,0);
                        param_default_parametors_275=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value378=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value377=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1168, "struct list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun_276=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value383=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value379=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1170, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value380=__builtin_string(fun_name_257)))),(struct sType*)come_increment_ref_count(result_type2_272),(struct list$1sTypeph*)come_increment_ref_count(param_types_259),(struct list$1charph*)come_increment_ref_count(param_names_260),(struct list$1charph*)come_increment_ref_count(param_default_parametors_275),(_Bool)1,var_args_273,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value381=buffer_to_string(header_buf_274)))),(char*)come_increment_ref_count(((char*)(right_value382=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_280=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value385=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value384=__builtin_string(fun_name_257)))))));
                        right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(fun2_280==((void*)0)||fun2_280->mExternal) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value386=string_clone(fun_name_257)))),(struct sFun*)come_increment_ref_count(fun_276));
                            right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1182, "struct sNode");
                        _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value388=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value387=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1182, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_276),info))));
                        _inf_value1->_protocol_obj=_inf_obj_value1;
                        _inf_value1->finalize=(void*)sFunNode_finalize;
                        _inf_value1->clone=(void*)sFunNode_clone;
                        _inf_value1->compile=(void*)sFunNode_compile;
                        _inf_value1->sline=(void*)sFunNode_sline;
                        _inf_value1->sname=(void*)sFunNode_sname;
                        _inf_value1->terminated=(void*)sFunNode_terminated;
                        _inf_value1->kind=(void*)sFunNode_kind;
                        __result129__ = __result_obj__ = ((struct sNode*)(right_value430=_inf_value1));
                        come_call_finalizer2(list$1sTypephp_finalize,param_types2_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names2_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        fun_name_257 = come_decrement_ref_count2(fun_name_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result129__;
                        come_call_finalizer2(list$1sTypephp_finalize,param_types2_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names2_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        err_msg(info,"require (");
                        exit(2);
                    }
                    come_call_finalizer2(list$1sTypephp_finalize,param_types_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,param_names_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(sType_finalize,result_type_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name_257 = come_decrement_ref_count2(fun_name_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(define_function_flag_241) {
                    info->p=head;
                    info->sline=sline_229;
                    __result130__ = __result_obj__ = ((struct sNode*)(right_value431=parse_function(info)));
                    if(right_value431) { right_value431 = come_decrement_ref_count2(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result130__;
                }
                else {
                    if(define_variable_248) {
                        info->p=head;
                        info->sline=sline_229;
                        __result131__ = __result_obj__ = ((struct sNode*)(right_value432=parse_global_variable(info)));
                        if(right_value432) { right_value432 = come_decrement_ref_count2(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result131__;
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_229;
    buf2_316=(char*)come_increment_ref_count(((char*)(right_value433=parse_word(info))));
    right_value433 = come_decrement_ref_count2(right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result132__ = __result_obj__ = ((struct sNode*)(right_value434=top_level_v98(buf2_316,head,head_sline,info)));
    buf2_316 = come_decrement_ref_count2(buf2_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result132__;
    buf2_316 = come_decrement_ref_count2(buf2_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional261;
_Bool _if_conditional262;
memset(&__result_obj__, 0, sizeof(void*));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj70;
struct tuple1$1sTypeph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
                            __dec_obj70=self->v1;
                            self->v1=(struct sType*)come_increment_ref_count(v1);
                            come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            __result98__ = __result_obj__ = self;
                            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result98__;
                            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_277;
unsigned int hash_278;
unsigned int it_279;
_Bool _if_conditional308;
_Bool _if_conditional309;
struct sFun* __result99__;
_Bool _if_conditional310;
_Bool _if_conditional311;
struct sFun* __result100__;
struct sFun* __result101__;
struct sFun* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_277, 0, sizeof(struct sFun*));
memset(&hash_278, 0, sizeof(unsigned int));
memset(&it_279, 0, sizeof(unsigned int));
                            memset(&default_value_277,0,sizeof(struct sFun*));
                            hash_278=string_get_hash_key(((char*)key))%self->size;
                            it_279=hash_278;
                            while((_Bool)1) {
                                if(self->item_existance[it_279]) {
                                    if(string_equals(self->keys[it_279],key)) {
                                        __result99__ = __result_obj__ = self->items[it_279];
                                        come_call_finalizer2(sFun_finalize,default_value_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        return __result99__;
                                    }
                                    it_279++;
                                    if(it_279>=self->size) {
                                        it_279=0;
                                    }
                                    else {
                                        if(it_279==hash_278) {
                                            __result100__ = __result_obj__ = default_value_277;
                                            come_call_finalizer2(sFun_finalize,default_value_277, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result100__;
                                        }
                                    }
                                }
                                else {
                                    __result101__ = __result_obj__ = default_value_277;
                                    come_call_finalizer2(sFun_finalize,default_value_277, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result101__;
                                }
                            }
                            __result102__ = __result_obj__ = default_value_277;
                            come_call_finalizer2(sFun_finalize,default_value_277, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result102__;
                            come_call_finalizer2(sFun_finalize,default_value_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional317;
struct sFun* __result104__;
void* right_value390;
struct sFun* result_282;
_Bool _if_conditional318;
void* right_value391;
char* __dec_obj74;
_Bool _if_conditional319;
void* right_value392;
struct sType* __dec_obj75;
_Bool _if_conditional320;
void* right_value393;
struct list$1sTypeph* __dec_obj76;
_Bool _if_conditional321;
void* right_value394;
struct list$1charph* __dec_obj77;
_Bool _if_conditional322;
void* right_value395;
struct list$1charph* __dec_obj78;
_Bool _if_conditional323;
void* right_value396;
struct sType* __dec_obj79;
_Bool _if_conditional324;
void* right_value421;
struct sBlock* __dec_obj88;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
void* right_value422;
struct buffer* __dec_obj89;
_Bool _if_conditional378;
void* right_value423;
struct buffer* __dec_obj90;
_Bool _if_conditional379;
void* right_value424;
struct buffer* __dec_obj91;
_Bool _if_conditional380;
void* right_value425;
struct buffer* __dec_obj92;
_Bool _if_conditional381;
_Bool _if_conditional382;
void* right_value426;
char* __dec_obj93;
_Bool _if_conditional383;
_Bool _if_conditional384;
void* right_value427;
char* __dec_obj94;
struct sFun* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value390 = (void*)0;
memset(&result_282, 0, sizeof(struct sFun*));
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
                                    if(self==(void*)0) {
                                        __result104__ = __result_obj__ = (void*)0;
                                        return __result104__;
                                    }
                                    result_282=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value390=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun"))));
                                    come_call_finalizer2(sFun_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                        __dec_obj74=result_282->mName;
                                        result_282->mName=(char*)come_increment_ref_count(((char*)(right_value391=string_clone(self->mName))));
                                        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                        __dec_obj75=result_282->mResultType;
                                        result_282->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value392=sType_clone(self->mResultType))));
                                        come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                        __dec_obj76=result_282->mParamTypes;
                                        result_282->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value393=list$1sTypephp_clone(self->mParamTypes))));
                                        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                        __dec_obj77=result_282->mParamNames;
                                        result_282->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value394=list$1charphp_clone(self->mParamNames))));
                                        come_call_finalizer2(list$1charph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1charphp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
                                        __dec_obj78=result_282->mParamDefaultParametors;
                                        result_282->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value395=list$1charphp_clone(self->mParamDefaultParametors))));
                                        come_call_finalizer2(list$1charph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1charphp_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
                                        __dec_obj79=result_282->mLambdaType;
                                        result_282->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value396=sType_clone(self->mLambdaType))));
                                        come_call_finalizer2(sType_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                                        __dec_obj88=result_282->mBlock;
                                        result_282->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value421=sBlock_clone(self->mBlock))));
                                        come_call_finalizer2(sBlock_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sBlock_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)) {
                                        result_282->mExternal=self->mExternal;
                                    }
                                    if(self!=((void*)0)) {
                                        result_282->mVarArgs=self->mVarArgs;
                                    }
                                    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
                                        __dec_obj89=result_282->mSource;
                                        result_282->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value422=buffer_clone(self->mSource))));
                                        come_call_finalizer2(buffer_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(buffer_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
                                        __dec_obj90=result_282->mSourceHead;
                                        result_282->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value423=buffer_clone(self->mSourceHead))));
                                        come_call_finalizer2(buffer_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(buffer_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
                                        __dec_obj91=result_282->mSourceHead2;
                                        result_282->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value424=buffer_clone(self->mSourceHead2))));
                                        come_call_finalizer2(buffer_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(buffer_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
                                        __dec_obj92=result_282->mSourceDefer;
                                        result_282->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value425=buffer_clone(self->mSourceDefer))));
                                        come_call_finalizer2(buffer_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(buffer_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)) {
                                        result_282->mStatic=self->mStatic;
                                    }
                                    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
                                        __dec_obj93=result_282->mComeHeader;
                                        result_282->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value426=string_clone(self->mComeHeader))));
                                        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value426 = come_decrement_ref_count2(right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)) {
                                        result_282->mCloner=self->mCloner;
                                    }
                                    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
                                        __dec_obj94=result_282->mDeclareSName;
                                        result_282->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value427=string_clone(self->mDeclareSName))));
                                        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result127__ = __result_obj__ = result_282;
                                    come_call_finalizer2(sFun_finalize,result_282, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result127__;
                                    come_call_finalizer2(sFun_finalize,result_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional325;
struct sBlock* __result105__;
void* right_value397;
struct sBlock* result_283;
_Bool _if_conditional326;
void* right_value398;
struct list$1sNodeph* __dec_obj80;
_Bool _if_conditional327;
void* right_value420;
struct sVarTable* __dec_obj87;
struct sBlock* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value397 = (void*)0;
memset(&result_283, 0, sizeof(struct sBlock*));
right_value398 = (void*)0;
right_value420 = (void*)0;
                                            if(self==(void*)0) {
                                                __result105__ = __result_obj__ = (void*)0;
                                                return __result105__;
                                            }
                                            result_283=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value397=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock"))));
                                            come_call_finalizer2(sBlock_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                                                __dec_obj80=result_283->mNodes;
                                                result_283->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value398=list$1sNodephp_clone(self->mNodes))));
                                                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(list$1sNodephp_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            }
                                            if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                                                __dec_obj87=result_283->mVarTable;
                                                result_283->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value420=sVarTable_clone(self->mVarTable))));
                                                come_call_finalizer2(sVarTable_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(sVarTable_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            }
                                            __result126__ = __result_obj__ = result_283;
                                            come_call_finalizer2(sBlock_finalize,result_283, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result126__;
                                            come_call_finalizer2(sBlock_finalize,result_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional328;
struct sVarTable* __result106__;
void* right_value399;
struct sVarTable* result_284;
_Bool _if_conditional329;
void* right_value419;
struct map$2charphsVarph* __dec_obj86;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
struct sVarTable* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value399 = (void*)0;
memset(&result_284, 0, sizeof(struct sVarTable*));
right_value419 = (void*)0;
                                                    if(self==(void*)0) {
                                                        __result106__ = __result_obj__ = (void*)0;
                                                        return __result106__;
                                                    }
                                                    result_284=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value399=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable"))));
                                                    come_call_finalizer2(sVarTable_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
                                                        __dec_obj86=result_284->mVars;
                                                        result_284->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value419=map$2charphsVarphp_clone(self->mVars))));
                                                        come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_284->mGlobal=self->mGlobal;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_284->mParent=self->mParent;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_284->mID=self->mID;
                                                    }
                                                    __result125__ = __result_obj__ = result_284;
                                                    come_call_finalizer2(sVarTable_finalize,result_284, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result125__;
                                                    come_call_finalizer2(sVarTable_finalize,result_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional330;
struct map$2charphsVarph* __result107__;
void* right_value400;
void* right_value406;
struct map$2charphsVarph* result_290;
char* it_293;
struct sVar* default_value_296;
void* right_value407;
struct sVar* it2_299;
void* right_value418;
struct map$2charphsVarph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value400 = (void*)0;
right_value406 = (void*)0;
memset(&result_290, 0, sizeof(struct map$2charphsVarph*));
memset(&it_293, 0, sizeof(char*));
memset(&default_value_296, 0, sizeof(struct sVar*));
right_value407 = (void*)0;
memset(&it2_299, 0, sizeof(struct sVar*));
right_value418 = (void*)0;
                                                            if(self==((void*)0)) {
                                                                __result107__ = __result_obj__ = ((void*)0);
                                                                return __result107__;
                                                            }
                                                            result_290=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value406=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value400=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1176, "struct map$2charphsVarph"))))))));
                                                            come_call_finalizer2(map$2charphsVarphp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer2(map$2charphsVarphp_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            for(                                                            it_293=map$2charphsVarph_begin(self);                                                            !map$2charphsVarph_end(self);                                                            it_293=map$2charphsVarph_next(self)                                                            ){
                                                                memset(&default_value_296,0,sizeof(struct sVar*));
                                                                it2_299=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value407=map$2charphsVarph_at(self,it_293,default_value_296))));
                                                                come_call_finalizer2(sVar_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                map$2charphsVarph_insert2(result_290,it_293,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value418=sVar_clone(it2_299)))));
                                                                come_call_finalizer2(sVar_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(sVar_finalize,it2_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            __result124__ = __result_obj__ = result_290;
                                                            come_call_finalizer2(map$2charphsVarphp_finalize,result_290, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result124__;
                                                            come_call_finalizer2(map$2charphsVarphp_finalize,result_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value401;
void* right_value402;
void* right_value403;
int i_285;
void* right_value404;
void* right_value405;
struct list$1charp* __dec_obj81;
struct map$2charphsVarph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
memset(&i_285, 0, sizeof(int));
right_value404 = (void*)0;
right_value405 = (void*)0;
                                                                self->keys=(char**)come_increment_ref_count(((char**)(right_value401=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1083, "char*"))));
                                                                right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value402=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1084, "struct sVar*"))));
                                                                come_call_finalizer2(sVar_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value403=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1085, "_Bool"))));
                                                                right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                for(                                                                i_285=0;                                                                i_285<1024;                                                                i_285++                                                                ){
                                                                    self->item_existance[i_285]=(_Bool)0;
                                                                }
                                                                self->size=1024;
                                                                self->len=0;
                                                                __dec_obj81=self->key_list;
                                                                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value405=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value404=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1095, "struct list$1charp"))))))));
                                                                come_call_finalizer2(list$1charp_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(list$1charpp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(list$1charpp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                self->it=0;
                                                                __result109__ = __result_obj__ = self;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result109__;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
                                                                    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                                                        self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
                                                                    if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                                                        come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    }
                                                                    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
                                                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    self->head=((void*)0);
                                                                    self->tail=((void*)0);
                                                                    self->len=0;
                                                                    __result108__ = __result_obj__ = self;
                                                                    come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result108__;
                                                                    come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_286;
struct list_item$1charp* prev_it_287;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_286, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_287, 0, sizeof(struct list_item$1charp*));
                                                                        it_286=self->head;
                                                                        while(it_286!=((void*)0)) {
                                                                            prev_it_287=it_286;
                                                                            it_286=it_286->next;
                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_288;
_Bool _if_conditional335;
_Bool _if_conditional336;
int i_289;
_Bool _if_conditional337;
_Bool _if_conditional338;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_288, 0, sizeof(int));
memset(&i_289, 0, sizeof(int));
                                                                    for(                                                                    i_288=0;                                                                    i_288<self->size;                                                                    i_288++                                                                    ){
                                                                        if(self->item_existance[i_288]) {
                                                                            if(1) {
                                                                                come_call_finalizer2(sVar_finalize,self->items[i_288], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                        }
                                                                    }
                                                                    come_free((char*)self->items);
                                                                    for(                                                                    i_289=0;                                                                    i_289<self->size;                                                                    i_289++                                                                    ){
                                                                        if(self->item_existance[i_289]) {
                                                                            if(1) {
                                                                                self->keys[i_289] = come_decrement_ref_count2(self->keys[i_289], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                        }
                                                                    }
                                                                    come_free((char*)self->keys);
                                                                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional339;
char* result_291;
char* __result110__;
_Bool _if_conditional340;
char* __result111__;
char* result_292;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_291, 0, sizeof(char*));
memset(&result_292, 0, sizeof(char*));
                                                                if(self==((void*)0)) {
                                                                    memset(&result_291,0,sizeof(char*));
                                                                    __result110__ = __result_obj__ = result_291;
                                                                    return __result110__;
                                                                }
                                                                self->key_list->it=self->key_list->head;
                                                                if(self->key_list->it) {
                                                                    __result111__ = __result_obj__ = self->key_list->it->item;
                                                                    return __result111__;
                                                                }
                                                                memset(&result_292,0,sizeof(char*));
                                                                __result112__ = __result_obj__ = result_292;
                                                                return __result112__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                __result113__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                                return __result113__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional341;
char* result_294;
char* __result114__;
_Bool _if_conditional342;
char* __result115__;
char* result_295;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_294, 0, sizeof(char*));
memset(&result_295, 0, sizeof(char*));
                                                                if(self==((void*)0)||self->key_list->it==((void*)0)) {
                                                                    memset(&result_294,0,sizeof(char*));
                                                                    __result114__ = __result_obj__ = result_294;
                                                                    return __result114__;
                                                                }
                                                                self->key_list->it=self->key_list->it->next;
                                                                if(self->key_list->it) {
                                                                    __result115__ = __result_obj__ = self->key_list->it->item;
                                                                    return __result115__;
                                                                }
                                                                memset(&result_295,0,sizeof(char*));
                                                                __result116__ = __result_obj__ = result_295;
                                                                return __result116__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_297;
unsigned int it_298;
_Bool _if_conditional343;
_Bool _if_conditional344;
struct sVar* __result117__;
_Bool _if_conditional345;
_Bool _if_conditional346;
struct sVar* __result118__;
struct sVar* __result119__;
struct sVar* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_297, 0, sizeof(unsigned int));
memset(&it_298, 0, sizeof(unsigned int));
                                                                    hash_297=string_get_hash_key(((char*)key))%self->size;
                                                                    it_298=hash_297;
                                                                    while((_Bool)1) {
                                                                        if(self->item_existance[it_298]) {
                                                                            if(string_equals(self->keys[it_298],key)) {
                                                                                __result117__ = __result_obj__ = self->items[it_298];
                                                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result117__;
                                                                            }
                                                                            it_298++;
                                                                            if(it_298>=self->size) {
                                                                                it_298=0;
                                                                            }
                                                                            else {
                                                                                if(it_298==hash_297) {
                                                                                    __result118__ = __result_obj__ = default_value;
                                                                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result118__;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            __result119__ = __result_obj__ = default_value;
                                                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result119__;
                                                                        }
                                                                    }
                                                                    __result120__ = __result_obj__ = default_value;
                                                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result120__;
                                                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional347;
unsigned int hash_311;
int it_312;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool same_key_exist_313;
char* it2_314;
_Bool _if_conditional359;
_Bool _if_conditional360;
struct map$2charphsVarph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_311, 0, sizeof(unsigned int));
memset(&it_312, 0, sizeof(int));
memset(&same_key_exist_313, 0, sizeof(_Bool));
memset(&it2_314, 0, sizeof(char*));
                                                                    if(self->len*2>=self->size) {
                                                                        map$2charphsVarph_rehash(self);
                                                                    }
                                                                    hash_311=string_get_hash_key(key)%self->size;
                                                                    it_312=hash_311;
                                                                    while((_Bool)1) {
                                                                        if(self->item_existance[it_312]) {
                                                                            if(string_equals(self->keys[it_312],key)) {
                                                                                if(1) {
                                                                                    self->keys[it_312] = come_decrement_ref_count2(self->keys[it_312], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    list$1charp_remove(self->key_list,self->keys[it_312]);
                                                                                    self->keys[it_312]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    list$1charp_remove(self->key_list,self->keys[it_312]);
                                                                                    self->keys[it_312]=key;
                                                                                }
                                                                                if(1) {
                                                                                    come_call_finalizer2(sVar_finalize,self->items[it_312], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    self->items[it_312]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    self->items[it_312]=item;
                                                                                }
                                                                                break;
                                                                            }
                                                                            it_312++;
                                                                            if(it_312>=self->size) {
                                                                                it_312=0;
                                                                            }
                                                                            else {
                                                                                if(it_312==hash_311) {
                                                                                    printf("unexpected error in map.insert\n");
                                                                                    stackframe();
                                                                                    exit(2);
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            self->item_existance[it_312]=(_Bool)1;
                                                                            if(1) {
                                                                                self->keys[it_312]=(char*)come_increment_ref_count(key);
                                                                            }
                                                                            else {
                                                                                self->keys[it_312]=key;
                                                                            }
                                                                            if(1) {
                                                                                self->items[it_312]=(struct sVar*)come_increment_ref_count(item);
                                                                            }
                                                                            else {
                                                                                self->items[it_312]=item;
                                                                            }
                                                                            self->len++;
                                                                            break;
                                                                        }
                                                                    }
                                                                    same_key_exist_313=(_Bool)0;
                                                                    for(                                                                    it2_314=list$1charp_begin(self->key_list);                                                                    !list$1charp_end(self->key_list);                                                                    it2_314=list$1charp_next(self->key_list)                                                                    ){
                                                                        if(string_equals(it2_314,key)) {
                                                                            same_key_exist_313=(_Bool)1;
                                                                        }
                                                                    }
                                                                    if(!same_key_exist_313) {
                                                                        list$1charp_push_back(self->key_list,key);
                                                                    }
                                                                    __result121__ = __result_obj__ = self;
                                                                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                    come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result121__;
                                                                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                    come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_300;
void* right_value408;
char** keys_301;
void* right_value409;
struct sVar** items_302;
void* right_value410;
_Bool* item_existance_303;
int len_304;
char* it_305;
struct sVar* default_value_306;
void* right_value411;
struct sVar* it2_307;
unsigned int hash_308;
int n_309;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
struct sVar* default_value_310;
void* right_value412;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_300, 0, sizeof(int));
right_value408 = (void*)0;
memset(&keys_301, 0, sizeof(char**));
right_value409 = (void*)0;
memset(&items_302, 0, sizeof(struct sVar**));
right_value410 = (void*)0;
memset(&item_existance_303, 0, sizeof(_Bool*));
memset(&len_304, 0, sizeof(int));
memset(&it_305, 0, sizeof(char*));
memset(&default_value_306, 0, sizeof(struct sVar*));
right_value411 = (void*)0;
memset(&it2_307, 0, sizeof(struct sVar*));
memset(&hash_308, 0, sizeof(unsigned int));
memset(&n_309, 0, sizeof(int));
memset(&default_value_310, 0, sizeof(struct sVar*));
right_value412 = (void*)0;
                                                                            size_300=self->size*10;
                                                                            keys_301=(char**)come_increment_ref_count(((char**)(right_value408=(char**)come_calloc(1, sizeof(char*)*(1*(size_300)), "./comelang2.h", 1331, "char*"))));
                                                                            right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            items_302=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value409=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_300)), "./comelang2.h", 1332, "struct sVar*"))));
                                                                            come_call_finalizer2(sVar_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            item_existance_303=(_Bool*)come_increment_ref_count(((_Bool*)(right_value410=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_300)), "./comelang2.h", 1333, "_Bool"))));
                                                                            right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            len_304=0;
                                                                            for(                                                                            it_305=map$2charphsVarph_begin(self);                                                                            !map$2charphsVarph_end(self);                                                                            it_305=map$2charphsVarph_next(self)                                                                            ){
                                                                                memset(&default_value_306,0,sizeof(struct sVar*));
                                                                                it2_307=((struct sVar*)(right_value411=map$2charphsVarph_at(self,it_305,default_value_306)));
                                                                                come_call_finalizer2(sVar_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                hash_308=string_get_hash_key(it_305)%size_300;
                                                                                n_309=hash_308;
                                                                                while((_Bool)1) {
                                                                                    if(item_existance_303[n_309]) {
                                                                                        n_309++;
                                                                                        if(n_309>=size_300) {
                                                                                            n_309=0;
                                                                                        }
                                                                                        else {
                                                                                            if(n_309==hash_308) {
                                                                                                printf("unexpected error in map.rehash(1)\n");
                                                                                                stackframe();
                                                                                                exit(2);
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        item_existance_303[n_309]=(_Bool)1;
                                                                                        keys_301[n_309]=it_305;
                                                                                        items_302[n_309]=((struct sVar*)(right_value412=map$2charphsVarph_at(self,it_305,default_value_310)));
                                                                                        come_call_finalizer2(sVar_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        len_304++;
                                                                                        break;
                                                                                    }
                                                                                }
                                                                            }
                                                                            come_free((char*)self->items);
                                                                            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            come_free((char*)self->keys);
                                                                            self->keys=keys_301;
                                                                            self->items=items_302;
                                                                            self->item_existance=item_existance_303;
                                                                            self->size=size_300;
                                                                            self->len=len_304;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional361;
struct sVar* __result122__;
void* right_value413;
struct sVar* result_315;
_Bool _if_conditional362;
void* right_value414;
char* __dec_obj82;
_Bool _if_conditional363;
void* right_value415;
char* __dec_obj83;
_Bool _if_conditional364;
void* right_value416;
struct sType* __dec_obj84;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
void* right_value417;
char* __dec_obj85;
struct sVar* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value413 = (void*)0;
memset(&result_315, 0, sizeof(struct sVar*));
right_value414 = (void*)0;
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
                                                                    if(self==(void*)0) {
                                                                        __result122__ = __result_obj__ = (void*)0;
                                                                        return __result122__;
                                                                    }
                                                                    result_315=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value413=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar"))));
                                                                    come_call_finalizer2(sVar_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                                                        __dec_obj82=result_315->mName;
                                                                        result_315->mName=(char*)come_increment_ref_count(((char*)(right_value414=string_clone(self->mName))));
                                                                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                                                        __dec_obj83=result_315->mCValueName;
                                                                        result_315->mCValueName=(char*)come_increment_ref_count(((char*)(right_value415=string_clone(self->mCValueName))));
                                                                        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                                                        __dec_obj84=result_315->mType;
                                                                        result_315->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value416=sType_clone(self->mType))));
                                                                        come_call_finalizer2(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        come_call_finalizer2(sType_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    if(self!=((void*)0)) {
                                                                        result_315->mBlockLevel=self->mBlockLevel;
                                                                    }
                                                                    if(self!=((void*)0)) {
                                                                        result_315->mGlobal=self->mGlobal;
                                                                    }
                                                                    if(self!=((void*)0)) {
                                                                        result_315->mAllocaValue=self->mAllocaValue;
                                                                    }
                                                                    if(self!=((void*)0)) {
                                                                        result_315->mFunctionParam=self->mFunctionParam;
                                                                    }
                                                                    if(self!=((void*)0)) {
                                                                        result_315->mNoFree=self->mNoFree;
                                                                    }
                                                                    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
                                                                        __dec_obj85=result_315->mFunName;
                                                                        result_315->mFunName=(char*)come_increment_ref_count(((char*)(right_value417=string_clone(self->mFunName))));
                                                                        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    __result123__ = __result_obj__ = result_315;
                                                                    come_call_finalizer2(sVar_finalize,result_315, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result123__;
                                                                    come_call_finalizer2(sVar_finalize,result_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional371;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(self!=((void*)0)&&self->key_list!=((void*)0)) {
                                                                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            }
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __result_obj__;
void* right_value435;
struct sClass* klass_322;
void* right_value436;
struct sType* type_326;
void* right_value437;
struct sClass* generics_class_327;
void* right_value438;
_Bool generics_type_name_329;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value435 = (void*)0;
memset(&klass_322, 0, sizeof(struct sClass*));
right_value436 = (void*)0;
memset(&type_326, 0, sizeof(struct sType*));
right_value437 = (void*)0;
memset(&generics_class_327, 0, sizeof(struct sClass*));
right_value438 = (void*)0;
memset(&generics_type_name_329, 0, sizeof(_Bool));
    klass_322=((struct sClass*)(right_value435=map$2charphsClassphp_operator_load_element(info->classes,buf)));
    come_call_finalizer2(sClass_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_326=((struct sType*)(right_value436=map$2charphsTypephp_operator_load_element(info->types,buf)));
    come_call_finalizer2(sType_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    generics_class_327=((struct sClass*)(right_value437=map$2charphsClassphp_operator_load_element(info->generics_classes,buf)));
    come_call_finalizer2(sClass_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    generics_type_name_329=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value438=__builtin_string(buf)))));
    right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result143__ = generics_class_327||generics_type_name_329||klass_322||type_326||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
    return __result143__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_317;
unsigned int hash_318;
unsigned int it_319;
_Bool _if_conditional389;
_Bool _if_conditional390;
struct sClass* __result133__;
_Bool _if_conditional397;
_Bool _if_conditional398;
struct sClass* __result134__;
struct sClass* __result135__;
struct sClass* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_317, 0, sizeof(struct sClass*));
memset(&hash_318, 0, sizeof(unsigned int));
memset(&it_319, 0, sizeof(unsigned int));
        memset(&default_value_317,0,sizeof(struct sClass*));
        hash_318=string_get_hash_key(((char*)key))%self->size;
        it_319=hash_318;
        while((_Bool)1) {
            if(self->item_existance[it_319]) {
                if(string_equals(self->keys[it_319],key)) {
                    __result133__ = __result_obj__ = self->items[it_319];
                    come_call_finalizer2(sClass_finalize,default_value_317, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result133__;
                }
                it_319++;
                if(it_319>=self->size) {
                    it_319=0;
                }
                else {
                    if(it_319==hash_318) {
                        __result134__ = __result_obj__ = default_value_317;
                        come_call_finalizer2(sClass_finalize,default_value_317, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result134__;
                    }
                }
            }
            else {
                __result135__ = __result_obj__ = default_value_317;
                come_call_finalizer2(sClass_finalize,default_value_317, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result135__;
            }
        }
        __result136__ = __result_obj__ = default_value_317;
        come_call_finalizer2(sClass_finalize,default_value_317, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result136__;
        come_call_finalizer2(sClass_finalize,default_value_317, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional396;
memset(&__result_obj__, 0, sizeof(void*));
                        if(self!=((void*)0)&&self->mName!=((void*)0)) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_320;
struct list_item$1tuple2$2charphsTypephph* prev_it_321;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_320, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_321, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_320=self->head;
                                while(it_320!=((void*)0)) {
                                    prev_it_321=it_320;
                                    it_320=it_320->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_321, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional393;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional394;
_Bool _if_conditional395;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_323;
unsigned int hash_324;
unsigned int it_325;
_Bool _if_conditional399;
_Bool _if_conditional400;
struct sType* __result137__;
_Bool _if_conditional401;
_Bool _if_conditional402;
struct sType* __result138__;
struct sType* __result139__;
struct sType* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_323, 0, sizeof(struct sType*));
memset(&hash_324, 0, sizeof(unsigned int));
memset(&it_325, 0, sizeof(unsigned int));
        memset(&default_value_323,0,sizeof(struct sType*));
        hash_324=string_get_hash_key(((char*)key))%self->size;
        it_325=hash_324;
        while((_Bool)1) {
            if(self->item_existance[it_325]) {
                if(string_equals(self->keys[it_325],key)) {
                    __result137__ = __result_obj__ = self->items[it_325];
                    come_call_finalizer2(sType_finalize,default_value_323, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result137__;
                }
                it_325++;
                if(it_325>=self->size) {
                    it_325=0;
                }
                else {
                    if(it_325==hash_324) {
                        __result138__ = __result_obj__ = default_value_323;
                        come_call_finalizer2(sType_finalize,default_value_323, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result138__;
                    }
                }
            }
            else {
                __result139__ = __result_obj__ = default_value_323;
                come_call_finalizer2(sType_finalize,default_value_323, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result139__;
            }
        }
        __result140__ = __result_obj__ = default_value_323;
        come_call_finalizer2(sType_finalize,default_value_323, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result140__;
        come_call_finalizer2(sType_finalize,default_value_323, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_328;
_Bool _if_conditional403;
_Bool __result141__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_328, 0, sizeof(char*));
        for(        it_328=list$1charph_begin(self);        !list$1charph_end(self);        it_328=list$1charph_next(self)        ){
            if(string_operator_equals(it_328,item)) {
                __result141__ = (_Bool)1;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result141__;
            }
        }
        __result142__ = (_Bool)0;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result142__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_330;
int caller_line_331;
char* caller_sname_332;
char* last_code_333;
char* __dec_obj97;
char* last_code2_334;
char* __dec_obj98;
char* last_code3_335;
char* __dec_obj99;
void* right_value439;
char* sname_top_336;
int sline_top_337;
_Bool _if_conditional404;
void* right_value440;
struct sFun* funX_338;
_Bool _if_conditional405;
_Bool __result144__;
void* right_value441;
struct sType* result_type_339;
void* right_value442;
void* right_value443;
struct list$1sTypeph* param_types_340;
struct list$1sTypeph* o2_saved_341;
struct sType* it_344;
void* right_value444;
void* right_value445;
struct sType* param_type_347;
void* right_value446;
void* right_value447;
struct list$1charph* param_names_348;
void* right_value448;
struct list$1charph* param_default_parametors_349;
char* p_350;
int sline_351;
char* sname_352;
char* head_353;
struct buffer* source_354;
void* right_value449;
struct buffer* __dec_obj100;
struct sType* generics_type_saved_355;
void* right_value450;
struct sType* __dec_obj101;
void* right_value451;
struct list$1charph* __dec_obj102;
char* __dec_obj103;
void* right_value452;
struct sBlock* block_358;
struct buffer* __dec_obj104;
char* __dec_obj105;
_Bool var_args_359;
void* right_value453;
void* right_value454;
void* right_value455;
void* right_value456;
void* right_value457;
struct sFun* fun_360;
void* right_value458;
void* right_value459;
void* right_value460;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value464;
struct sNode* node_362;
_Bool _if_conditional416;
_Bool __result155__;
struct sType* __dec_obj108;
void* right_value465;
char* __dec_obj109;
char* __dec_obj110;
char* __dec_obj111;
char* __dec_obj112;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_330, 0, sizeof(struct sFun*));
memset(&caller_line_331, 0, sizeof(int));
memset(&caller_sname_332, 0, sizeof(char*));
memset(&last_code_333, 0, sizeof(char*));
memset(&last_code2_334, 0, sizeof(char*));
memset(&last_code3_335, 0, sizeof(char*));
right_value439 = (void*)0;
memset(&sname_top_336, 0, sizeof(char*));
memset(&sline_top_337, 0, sizeof(int));
right_value440 = (void*)0;
memset(&funX_338, 0, sizeof(struct sFun*));
right_value441 = (void*)0;
memset(&result_type_339, 0, sizeof(struct sType*));
right_value442 = (void*)0;
right_value443 = (void*)0;
memset(&param_types_340, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_341, 0, sizeof(struct list$1sTypeph*));
memset(&it_344, 0, sizeof(struct sType*));
right_value444 = (void*)0;
right_value445 = (void*)0;
memset(&param_type_347, 0, sizeof(struct sType*));
right_value446 = (void*)0;
right_value447 = (void*)0;
memset(&param_names_348, 0, sizeof(struct list$1charph*));
right_value448 = (void*)0;
memset(&param_default_parametors_349, 0, sizeof(struct list$1charph*));
memset(&p_350, 0, sizeof(char*));
memset(&sline_351, 0, sizeof(int));
memset(&sname_352, 0, sizeof(char*));
memset(&head_353, 0, sizeof(char*));
memset(&source_354, 0, sizeof(struct buffer*));
right_value449 = (void*)0;
memset(&generics_type_saved_355, 0, sizeof(struct sType*));
right_value450 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
memset(&block_358, 0, sizeof(struct sBlock*));
memset(&var_args_359, 0, sizeof(_Bool));
right_value453 = (void*)0;
right_value454 = (void*)0;
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
memset(&fun_360, 0, sizeof(struct sFun*));
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value464 = (void*)0;
memset(&node_362, 0, sizeof(struct sNode*));
right_value465 = (void*)0;
    caller_fun_330=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_331=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_332=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_333=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj97=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_334=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj98=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_335=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj99=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_336=(char*)come_increment_ref_count(((char*)(right_value439=__builtin_string(info->sname))));
    right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_top_337=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_338=((struct sFun*)(right_value440=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer2(sFun_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(funX_338) {
        __result144__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_333 = come_decrement_ref_count2(last_code_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_334 = come_decrement_ref_count2(last_code2_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_335 = come_decrement_ref_count2(last_code3_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_336 = come_decrement_ref_count2(sname_top_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result144__;
    }
    result_type_339=(struct sType*)come_increment_ref_count(((struct sType*)(right_value441=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_types_340=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value443=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value442=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1251, "struct list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_341=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_344=list$1sTypeph_begin((o2_saved_341));    !list$1sTypeph_end((o2_saved_341));    it_344=list$1sTypeph_next((o2_saved_341))    ){
        param_type_347=(struct sType*)come_increment_ref_count(((struct sType*)(right_value445=solve_generics(((struct sType*)(right_value444=sType_clone(it_344))),generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_type_347->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_340,(struct sType*)come_increment_ref_count(((struct sType*)(right_value446=sType_clone(param_type_347)))));
        come_call_finalizer2(sType_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,param_type_347, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_341, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    param_names_348=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value447=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer2(list$1charphp_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_349=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value448=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer2(list$1charphp_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    p_350=info->p;
    sline_351=info->sline;
    sname_352=(char*)come_increment_ref_count(info->sname);
    head_353=info->head;
    source_354=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj100=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value449=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer2(buffer_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_355=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj101=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value450=sType_clone(generics_type))));
    come_call_finalizer2(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1charph_reset(info->generics_type_names);
    __dec_obj102=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value451=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj103=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_358=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value452=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->head=head_353;
    __dec_obj104=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_354);
    come_call_finalizer2(buffer_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    info->p=p_350;
    info->sline=sline_351;
    __dec_obj105=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_352);
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_339->mInline=(_Bool)0;
    var_args_359=generics_fun->mVarArgs;
    fun_360=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value457=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value453=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1293, "struct sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_339),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value454=list$1sTypephp_clone(param_types_340)))),(struct list$1charph*)come_increment_ref_count(param_names_348),(struct list$1charph*)come_increment_ref_count(param_default_parametors_349),(_Bool)0,var_args_359,(struct sBlock*)come_increment_ref_count(block_358),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value455=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value456=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value455 = come_decrement_ref_count2(right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value456 = come_decrement_ref_count2(right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value458=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_360));
    right_value458 = come_decrement_ref_count2(right_value458, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1300, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value460=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value459=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1300, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_360),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sFunNode_sline;
    _inf_value2->sname=(void*)sFunNode_sname;
    _inf_value2->terminated=(void*)sFunNode_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    node_362=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value464=_inf_value2)));
    come_call_finalizer2(sFunNode_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunNode_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value464) { right_value464 = come_decrement_ref_count2(right_value464, ((struct sNode*)right_value464)->finalize, ((struct sNode*)right_value464)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if(!node_compile(node_362,info)) {
        __result155__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_333 = come_decrement_ref_count2(last_code_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_334 = come_decrement_ref_count2(last_code2_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_335 = come_decrement_ref_count2(last_code3_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_336 = come_decrement_ref_count2(sname_top_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_340, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_348, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_349, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_352 = come_decrement_ref_count2(sname_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_354, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,generics_type_saved_355, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_358, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_360, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_362) { node_362 = come_decrement_ref_count2(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result155__;
    }
    __dec_obj108=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_355);
    come_call_finalizer2(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj109=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value465=__builtin_string(sname_top_336))));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value465 = come_decrement_ref_count2(right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=sline_top_337;
    __dec_obj110=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_333);
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj111=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_334);
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj112=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_335);
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_330;
    info->caller_line=caller_line_331;
    info->caller_sname=caller_sname_332;
    __result156__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_333 = come_decrement_ref_count2(last_code_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_334 = come_decrement_ref_count2(last_code2_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_335 = come_decrement_ref_count2(last_code3_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_336 = come_decrement_ref_count2(sname_top_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_340, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_348, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_349, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_352 = come_decrement_ref_count2(sname_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_354, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_355, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_358, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_360, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_362) { node_362 = come_decrement_ref_count2(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result156__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_333 = come_decrement_ref_count2(last_code_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_334 = come_decrement_ref_count2(last_code2_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_335 = come_decrement_ref_count2(last_code3_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_336 = come_decrement_ref_count2(sname_top_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_340, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_348, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_349, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_352 = come_decrement_ref_count2(sname_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_354, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_355, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_358, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_360, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_362) { node_362 = come_decrement_ref_count2(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional406;
struct sType* result_342;
struct sType* __result145__;
_Bool _if_conditional407;
struct sType* __result146__;
struct sType* result_343;
struct sType* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_342, 0, sizeof(struct sType*));
memset(&result_343, 0, sizeof(struct sType*));
        if(self==((void*)0)) {
            memset(&result_342,0,sizeof(struct sType*));
            __result145__ = __result_obj__ = result_342;
            return __result145__;
        }
        self->it=self->head;
        if(self->it) {
            __result146__ = __result_obj__ = self->it->item;
            return __result146__;
        }
        memset(&result_343,0,sizeof(struct sType*));
        __result147__ = __result_obj__ = result_343;
        return __result147__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
        __result148__ = self==((void*)0)||self->it==((void*)0);
        return __result148__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional408;
struct sType* result_345;
struct sType* __result149__;
_Bool _if_conditional409;
struct sType* __result150__;
struct sType* result_346;
struct sType* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_345, 0, sizeof(struct sType*));
memset(&result_346, 0, sizeof(struct sType*));
        if(self==((void*)0)||self->it==((void*)0)) {
            memset(&result_345,0,sizeof(struct sType*));
            __result149__ = __result_obj__ = result_345;
            return __result149__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result150__ = __result_obj__ = self->it->item;
            return __result150__;
        }
        memset(&result_346,0,sizeof(struct sType*));
        __result151__ = __result_obj__ = result_346;
        return __result151__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_356;
struct list_item$1charph* prev_it_357;
struct list$1charph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_356, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_357, 0, sizeof(struct list_item$1charph*));
        it_356=self->head;
        while(it_356!=((void*)0)) {
            prev_it_357=it_356;
            it_356=it_356->next;
            come_call_finalizer2(list_item$1charphp_finalize,prev_it_357, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result152__ = __result_obj__ = self;
        return __result152__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_363;
void* right_value466;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type_364;
char* var_name_365;
_Bool err_366;
_Bool _if_conditional417;
_Bool method_definition_367;
char* p_368;
int sline_369;
void* right_value467;
void* right_value468;
struct buffer* buf2_370;
_Bool _if_conditional418;
char* fun_name_371;
char* base_fun_name_372;
_Bool _if_conditional419;
void* right_value469;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_373;
char* name_374;
_Bool err_375;
_Bool _if_conditional420;
void* right_value470;
void* right_value471;
char* __dec_obj113;
_Bool _if_conditional421;
void* right_value472;
void* right_value473;
char* __dec_obj114;
void* right_value474;
char* __dec_obj115;
void* right_value475;
void* right_value476;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_376;
struct list$1charph* param_names_377;
struct list$1charph* param_default_parametors_378;
_Bool var_args_379;
char* header_tail_380;
void* right_value477;
void* right_value478;
struct buffer* header_buf_381;
int version_382;
_Bool _if_conditional425;
int n_383;
_Bool _if_conditional426;
void* right_value479;
struct sBlock* block_384;
static int lambda_num_385=0;
void* right_value480;
char* fun_name_386;
void* right_value481;
void* right_value482;
void* right_value483;
void* right_value484;
void* right_value485;
struct sFun* fun_387;
void* right_value486;
void* right_value487;
struct sFun* fun2_388;
_Bool _if_conditional427;
void* right_value488;
void* right_value489;
void* right_value490;
struct sNode* _inf_value3;
struct sLambdaNode* _inf_obj_value3;
void* right_value493;
struct sNode* __result159__;
_Bool _if_conditional433;
void* right_value494;
char* none_generics_name_390;
void* right_value495;
char* generics_sname_391;
int generics_sline_392;
void* right_value496;
char* block_393;
void* right_value497;
void* right_value498;
void* right_value499;
void* right_value500;
void* right_value501;
struct sGenericsFun* fun_394;
void* right_value502;
char* fun_name3_395;
void* right_value508;
struct sNode* __result173__;
_Bool _if_conditional456;
void* right_value509;
struct sBlock* block_417;
_Bool static__418;
_Bool _if_conditional457;
_Bool _if_conditional458;
void* right_value510;
void* right_value511;
char* new_fun_name_419;
void* right_value512;
char* __dec_obj117;
void* right_value513;
void* right_value514;
void* right_value515;
void* right_value516;
void* right_value517;
void* right_value518;
struct sFun* fun_420;
void* right_value519;
void* right_value520;
struct sFun* fun2_421;
_Bool _if_conditional459;
void* right_value521;
void* right_value522;
void* right_value523;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* right_value527;
struct sNode* __result176__;
_Bool _if_conditional466;
_Bool _if_conditional467;
void* right_value528;
char* new_fun_name_423;
void* right_value529;
char* __dec_obj120;
_Bool _if_conditional468;
void* right_value530;
void* right_value531;
void* right_value532;
void* right_value533;
void* right_value534;
struct sFun* fun_424;
void* right_value535;
void* right_value536;
struct sFun* fun2_425;
_Bool _if_conditional469;
void* right_value537;
void* right_value538;
void* right_value539;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value543;
struct sNode* __result179__;
void* right_value544;
char* asm_fun_427;
_Bool _if_conditional476;
void* right_value545;
char* __dec_obj123;
void* right_value546;
void* right_value547;
void* right_value548;
void* right_value549;
void* right_value550;
struct sFun* fun_428;
void* right_value551;
void* right_value552;
struct sFun* fun2_429;
_Bool _if_conditional477;
void* right_value553;
void* right_value554;
void* right_value555;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value559;
struct sNode* __result182__;
struct sNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_363, 0, sizeof(char*));
right_value466 = (void*)0;
memset(&result_type_364, 0, sizeof(struct sType*));
memset(&var_name_365, 0, sizeof(char*));
memset(&err_366, 0, sizeof(_Bool));
memset(&result_type_364, 0, sizeof(struct sType*));
memset(&var_name_365, 0, sizeof(char*));
memset(&err_366, 0, sizeof(_Bool));
memset(&method_definition_367, 0, sizeof(_Bool));
memset(&p_368, 0, sizeof(char*));
memset(&sline_369, 0, sizeof(int));
right_value467 = (void*)0;
right_value468 = (void*)0;
memset(&buf2_370, 0, sizeof(struct buffer*));
memset(&fun_name_371, 0, sizeof(char*));
memset(&base_fun_name_372, 0, sizeof(char*));
right_value469 = (void*)0;
memset(&obj_type_373, 0, sizeof(struct sType*));
memset(&name_374, 0, sizeof(char*));
memset(&err_375, 0, sizeof(_Bool));
memset(&obj_type_373, 0, sizeof(struct sType*));
memset(&name_374, 0, sizeof(char*));
memset(&err_375, 0, sizeof(_Bool));
right_value470 = (void*)0;
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
right_value475 = (void*)0;
right_value476 = (void*)0;
memset(&param_types_376, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_377, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_378, 0, sizeof(struct list$1charph*));
memset(&var_args_379, 0, sizeof(_Bool));
memset(&param_types_376, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_377, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_378, 0, sizeof(struct list$1charph*));
memset(&var_args_379, 0, sizeof(_Bool));
memset(&header_tail_380, 0, sizeof(char*));
right_value477 = (void*)0;
right_value478 = (void*)0;
memset(&header_buf_381, 0, sizeof(struct buffer*));
memset(&version_382, 0, sizeof(int));
memset(&n_383, 0, sizeof(int));
right_value479 = (void*)0;
memset(&block_384, 0, sizeof(struct sBlock*));
right_value480 = (void*)0;
memset(&fun_name_386, 0, sizeof(char*));
right_value481 = (void*)0;
right_value482 = (void*)0;
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
memset(&fun_387, 0, sizeof(struct sFun*));
right_value486 = (void*)0;
right_value487 = (void*)0;
memset(&fun2_388, 0, sizeof(struct sFun*));
right_value488 = (void*)0;
right_value489 = (void*)0;
right_value490 = (void*)0;
right_value493 = (void*)0;
right_value494 = (void*)0;
memset(&none_generics_name_390, 0, sizeof(char*));
right_value495 = (void*)0;
memset(&generics_sname_391, 0, sizeof(char*));
memset(&generics_sline_392, 0, sizeof(int));
right_value496 = (void*)0;
memset(&block_393, 0, sizeof(char*));
right_value497 = (void*)0;
right_value498 = (void*)0;
right_value499 = (void*)0;
right_value500 = (void*)0;
right_value501 = (void*)0;
memset(&fun_394, 0, sizeof(struct sGenericsFun*));
right_value502 = (void*)0;
memset(&fun_name3_395, 0, sizeof(char*));
right_value508 = (void*)0;
right_value509 = (void*)0;
memset(&block_417, 0, sizeof(struct sBlock*));
memset(&static__418, 0, sizeof(_Bool));
right_value510 = (void*)0;
right_value511 = (void*)0;
memset(&new_fun_name_419, 0, sizeof(char*));
right_value512 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value516 = (void*)0;
right_value517 = (void*)0;
right_value518 = (void*)0;
memset(&fun_420, 0, sizeof(struct sFun*));
right_value519 = (void*)0;
right_value520 = (void*)0;
memset(&fun2_421, 0, sizeof(struct sFun*));
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value523 = (void*)0;
right_value527 = (void*)0;
right_value528 = (void*)0;
memset(&new_fun_name_423, 0, sizeof(char*));
right_value529 = (void*)0;
right_value530 = (void*)0;
right_value531 = (void*)0;
right_value532 = (void*)0;
right_value533 = (void*)0;
right_value534 = (void*)0;
memset(&fun_424, 0, sizeof(struct sFun*));
right_value535 = (void*)0;
right_value536 = (void*)0;
memset(&fun2_425, 0, sizeof(struct sFun*));
right_value537 = (void*)0;
right_value538 = (void*)0;
right_value539 = (void*)0;
right_value543 = (void*)0;
right_value544 = (void*)0;
memset(&asm_fun_427, 0, sizeof(char*));
right_value545 = (void*)0;
right_value546 = (void*)0;
right_value547 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
right_value550 = (void*)0;
memset(&fun_428, 0, sizeof(struct sFun*));
right_value551 = (void*)0;
right_value552 = (void*)0;
memset(&fun2_429, 0, sizeof(struct sFun*));
right_value553 = (void*)0;
right_value554 = (void*)0;
right_value555 = (void*)0;
right_value559 = (void*)0;
    header_head_363=info->p;
    multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value466=parse_type(info,(_Bool)0,(_Bool)1)));
    result_type_364=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
    var_name_365=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    err_366=multiple_assign_var7->v3;
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(!err_366) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    method_definition_367=(_Bool)0;
    {
        p_368=info->p;
        sline_369=info->sline;
        buf2_370=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value468=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value467=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1340, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_370,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(buffer_length(buf2_370)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_367=(_Bool)1;
        }
        info->p=p_368;
        info->sline=sline_369;
        come_call_finalizer2(buffer_finalize,buf2_370, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_372=((void*)0);
    if(method_definition_367) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value469=parse_type(info,(_Bool)0,(_Bool)1)));
        obj_type_373=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_374=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_375=multiple_assign_var8->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(!err_375) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        base_fun_name_372=(char*)come_increment_ref_count(((char*)(right_value470=parse_word(info))));
        right_value470 = come_decrement_ref_count2(right_value470, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj113=fun_name_371;
        fun_name_371=(char*)come_increment_ref_count(((char*)(right_value471=create_method_name(obj_type_373,(_Bool)0,base_fun_name_372,info))));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value471 = come_decrement_ref_count2(right_value471, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,obj_type_373, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_374 = come_decrement_ref_count2(name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type) {
            base_fun_name_372=(char*)come_increment_ref_count(((char*)(right_value472=parse_word(info))));
            right_value472 = come_decrement_ref_count2(right_value472, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj114=fun_name_371;
            fun_name_371=(char*)come_increment_ref_count(((char*)(right_value473=create_method_name(info->impl_type,(_Bool)0,base_fun_name_372,info))));
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value473 = come_decrement_ref_count2(right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj115=fun_name_371;
            fun_name_371=(char*)come_increment_ref_count(((char*)(right_value474=parse_word(info))));
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value474 = come_decrement_ref_count2(right_value474, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_372=(char*)come_increment_ref_count(((char*)(right_value475=__builtin_string(fun_name_371))));
            right_value475 = come_decrement_ref_count2(right_value475, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value476=parse_params(info)));
    param_types_376=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_377=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_378=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_379=multiple_assign_var9->v4;
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    header_tail_380=info->p;
    header_buf_381=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value478=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value477=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1393, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(header_buf_381,header_head_363,header_tail_380-header_head_363);
    buffer_append_char(header_buf_381,0);
    version_382=0;
    if(strmemcmp(info->p,"version")) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_383=0;
        while(xisdigit(*info->p)) {
            n_383=n_383*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_382=n_383;
    }
    if(charp_operator_equals(base_fun_name_372,"lambda")) {
        block_384=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value479=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        lambda_num_385++;
        fun_name_386=(char*)come_increment_ref_count(((char*)(right_value480=xsprintf("lambda%d",lambda_num_385))));
        right_value480 = come_decrement_ref_count2(right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_364->mStatic=(_Bool)0;
        fun_387=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value485=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value481=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1423, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value482=__builtin_string(fun_name_386)))),(struct sType*)come_increment_ref_count(result_type_364),(struct list$1sTypeph*)come_increment_ref_count(param_types_376),(struct list$1charph*)come_increment_ref_count(param_names_377),(struct list$1charph*)come_increment_ref_count(param_default_parametors_378),(_Bool)0,var_args_379,(struct sBlock*)come_increment_ref_count(block_384),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value483=buffer_to_string(header_buf_381)))),(char*)come_increment_ref_count(((char*)(right_value484=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value482 = come_decrement_ref_count2(right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value483 = come_decrement_ref_count2(right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_388=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value487=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value486=__builtin_string(fun_name_386)))))));
        right_value486 = come_decrement_ref_count2(right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(fun2_388==((void*)0)||fun2_388->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value488=string_clone(fun_name_386)))),(struct sFun*)come_increment_ref_count(fun_387));
            right_value488 = come_decrement_ref_count2(right_value488, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        base_fun_name_372 = come_decrement_ref_count2(base_fun_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1435, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sLambdaNode*)(right_value490=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value489=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function2.c", 1435, "struct sLambdaNode")))),fun_387,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sLambdaNode_finalize;
        _inf_value3->clone=(void*)sLambdaNode_clone;
        _inf_value3->compile=(void*)sLambdaNode_compile;
        _inf_value3->sline=(void*)sLambdaNode_sline;
        _inf_value3->sname=(void*)sLambdaNode_sname;
        _inf_value3->terminated=(void*)sLambdaNode_terminated;
        _inf_value3->kind=(void*)sLambdaNode_kind;
        __result159__ = __result_obj__ = ((struct sNode*)(right_value493=_inf_value3));
        come_call_finalizer2(sBlock_finalize,block_384, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_386 = come_decrement_ref_count2(fun_name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_387, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_388, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_365 = come_decrement_ref_count2(var_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_371 = come_decrement_ref_count2(fun_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_381, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sLambdaNode_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sLambdaNode_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value493) { right_value493 = come_decrement_ref_count2(right_value493, ((struct sNode*)right_value493)->finalize, ((struct sNode*)right_value493)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result159__;
        come_call_finalizer2(sBlock_finalize,block_384, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_386 = come_decrement_ref_count2(fun_name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_387, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_388, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
            none_generics_name_390=(char*)come_increment_ref_count(((char*)(right_value494=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value494 = come_decrement_ref_count2(right_value494, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sname_391=(char*)come_increment_ref_count(((char*)(right_value495=__builtin_string(info->sname))));
            right_value495 = come_decrement_ref_count2(right_value495, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sline_392=info->sline;
            block_393=(char*)come_increment_ref_count(((char*)(right_value496=skip_block(info))));
            right_value496 = come_decrement_ref_count2(right_value496, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_394=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value501=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value497=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function2.c", 1445, "struct sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value498=list$1charphp_clone(info->generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value499=__builtin_string(fun_name_371)))),(struct sType*)come_increment_ref_count(result_type_364),(struct list$1sTypeph*)come_increment_ref_count(param_types_376),(struct list$1charph*)come_increment_ref_count(param_names_377),(struct list$1charph*)come_increment_ref_count(param_default_parametors_378),var_args_379,(char*)come_increment_ref_count(block_393),info,(char*)come_increment_ref_count(((char*)(right_value500=__builtin_string(generics_sname_391)))),generics_sline_392))));
            come_call_finalizer2(sGenericsFun_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value499 = come_decrement_ref_count2(right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value500 = come_decrement_ref_count2(right_value500, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGenericsFun_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            fun_name3_395=(char*)come_increment_ref_count(((char*)(right_value502=xsprintf("%s_%s",none_generics_name_390,base_fun_name_372))));
            right_value502 = come_decrement_ref_count2(right_value502, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value508=__builtin_string(fun_name3_395)))),(struct sGenericsFun*)come_increment_ref_count(fun_394));
            right_value508 = come_decrement_ref_count2(right_value508, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_372 = come_decrement_ref_count2(base_fun_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result173__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_390 = come_decrement_ref_count2(none_generics_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_391 = come_decrement_ref_count2(generics_sname_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_393 = come_decrement_ref_count2(block_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_395 = come_decrement_ref_count2(fun_name3_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_365 = come_decrement_ref_count2(var_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_371 = come_decrement_ref_count2(fun_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_buf_381, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result173__;
            none_generics_name_390 = come_decrement_ref_count2(none_generics_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_391 = come_decrement_ref_count2(generics_sname_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_393 = come_decrement_ref_count2(block_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_395 = come_decrement_ref_count2(fun_name3_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(*info->p==123) {
                block_417=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value509=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,right_value509, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                static__418=(_Bool)0;
                if(result_type_364->mStatic) {
                    result_type_364->mStatic=(_Bool)0;
                    static__418=(_Bool)1;
                }
                if(version_382>0) {
                    new_fun_name_419=(char*)come_increment_ref_count(((char*)(right_value511=xsprintf("%s_v%d",((char*)(right_value510=__builtin_string(fun_name_371))),version_382))));
                    right_value510 = come_decrement_ref_count2(right_value510, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value511 = come_decrement_ref_count2(right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj117=fun_name_371;
                    fun_name_371=(char*)come_increment_ref_count(((char*)(right_value512=__builtin_string(new_fun_name_419))));
                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value512 = come_decrement_ref_count2(right_value512, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_419 = come_decrement_ref_count2(new_fun_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                fun_420=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value518=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value513=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1469, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value514=__builtin_string(fun_name_371)))),(struct sType*)come_increment_ref_count(result_type_364),(struct list$1sTypeph*)come_increment_ref_count(param_types_376),(struct list$1charph*)come_increment_ref_count(param_names_377),(struct list$1charph*)come_increment_ref_count(param_default_parametors_378),(_Bool)0,var_args_379,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value515=sBlock_clone(block_417)))),static__418,(char*)come_increment_ref_count(((char*)(right_value516=buffer_to_string(header_buf_381)))),(char*)come_increment_ref_count(((char*)(right_value517=__builtin_string(info->sname)))),info))));
                come_call_finalizer2(sFun_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value514 = come_decrement_ref_count2(right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sBlock_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value516 = come_decrement_ref_count2(right_value516, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value517 = come_decrement_ref_count2(right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFun_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                fun2_421=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value520=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value519=__builtin_string(fun_name_371)))))));
                right_value519 = come_decrement_ref_count2(right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFun_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(fun2_421==((void*)0)||fun2_421->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value521=string_clone(fun_name_371)))),(struct sFun*)come_increment_ref_count(fun_420));
                    right_value521 = come_decrement_ref_count2(right_value521, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                base_fun_name_372 = come_decrement_ref_count2(base_fun_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1486, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(right_value523=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value522=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1486, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_420),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sFunNode_finalize;
                _inf_value4->clone=(void*)sFunNode_clone;
                _inf_value4->compile=(void*)sFunNode_compile;
                _inf_value4->sline=(void*)sFunNode_sline;
                _inf_value4->sname=(void*)sFunNode_sname;
                _inf_value4->terminated=(void*)sFunNode_terminated;
                _inf_value4->kind=(void*)sFunNode_kind;
                __result176__ = __result_obj__ = ((struct sNode*)(right_value527=_inf_value4));
                come_call_finalizer2(sBlock_finalize,block_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun_420, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun2_421, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_365 = come_decrement_ref_count2(var_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_371 = come_decrement_ref_count2(fun_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_buf_381, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFunNode_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFunNode_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value527) { right_value527 = come_decrement_ref_count2(right_value527, ((struct sNode*)right_value527)->finalize, ((struct sNode*)right_value527)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result176__;
                come_call_finalizer2(sBlock_finalize,block_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun_420, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun2_421, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(xisalpha(*info->p)||*info->p==95||*info->p==59) {
                    if(version_382>0) {
                        new_fun_name_423=(char*)come_increment_ref_count(((char*)(right_value528=xsprintf("%s_v%d",fun_name_371,version_382))));
                        right_value528 = come_decrement_ref_count2(right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj120=fun_name_371;
                        fun_name_371=(char*)come_increment_ref_count(((char*)(right_value529=__builtin_string(new_fun_name_423))));
                        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value529 = come_decrement_ref_count2(right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_423 = come_decrement_ref_count2(new_fun_name_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(*info->p==59) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        result_type_364->mStatic=(_Bool)0;
                        fun_424=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value534=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value530=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1500, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value531=__builtin_string(fun_name_371)))),(struct sType*)come_increment_ref_count(result_type_364),(struct list$1sTypeph*)come_increment_ref_count(param_types_376),(struct list$1charph*)come_increment_ref_count(param_names_377),(struct list$1charph*)come_increment_ref_count(param_default_parametors_378),(_Bool)1,var_args_379,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value532=buffer_to_string(header_buf_381)))),(char*)come_increment_ref_count(((char*)(right_value533=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value531 = come_decrement_ref_count2(right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value532 = come_decrement_ref_count2(right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value533 = come_decrement_ref_count2(right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_425=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value536=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value535=__builtin_string(fun_name_371)))))));
                        right_value535 = come_decrement_ref_count2(right_value535, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(fun2_425==((void*)0)||fun2_425->mExternal) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value537=string_clone(fun_name_371)))),(struct sFun*)come_increment_ref_count(fun_424));
                            right_value537 = come_decrement_ref_count2(right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        base_fun_name_372 = come_decrement_ref_count2(base_fun_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1513, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value539=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value538=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1513, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_424),info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sFunNode_finalize;
                        _inf_value5->clone=(void*)sFunNode_clone;
                        _inf_value5->compile=(void*)sFunNode_compile;
                        _inf_value5->sline=(void*)sFunNode_sline;
                        _inf_value5->sname=(void*)sFunNode_sname;
                        _inf_value5->terminated=(void*)sFunNode_terminated;
                        _inf_value5->kind=(void*)sFunNode_kind;
                        __result179__ = __result_obj__ = ((struct sNode*)(right_value543=_inf_value5));
                        come_call_finalizer2(sFun_finalize,fun_424, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_425, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_365 = come_decrement_ref_count2(var_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_371 = come_decrement_ref_count2(fun_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_381, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value543) { right_value543 = come_decrement_ref_count2(right_value543, ((struct sNode*)right_value543)->finalize, ((struct sNode*)right_value543)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result179__;
                        come_call_finalizer2(sFun_finalize,fun_424, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_425, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        asm_fun_427=(char*)come_increment_ref_count(((char*)(right_value544=parse_attribute(info))));
                        right_value544 = come_decrement_ref_count2(right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(string_operator_not_equals(asm_fun_427,"")) {
                            __dec_obj123=fun_name_371;
                            fun_name_371=(char*)come_increment_ref_count(((char*)(right_value545=__builtin_string(asm_fun_427))));
                            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value545 = come_decrement_ref_count2(right_value545, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        expected_next_character(59,info);
                        result_type_364->mStatic=(_Bool)0;
                        fun_428=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value550=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value546=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1526, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value547=__builtin_string(fun_name_371)))),(struct sType*)come_increment_ref_count(result_type_364),(struct list$1sTypeph*)come_increment_ref_count(param_types_376),(struct list$1charph*)come_increment_ref_count(param_names_377),(struct list$1charph*)come_increment_ref_count(param_default_parametors_378),(_Bool)1,var_args_379,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value548=buffer_to_string(header_buf_381)))),(char*)come_increment_ref_count(((char*)(right_value549=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value547 = come_decrement_ref_count2(right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value548 = come_decrement_ref_count2(right_value548, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value549 = come_decrement_ref_count2(right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_429=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value552=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value551=__builtin_string(fun_name_371)))))));
                        right_value551 = come_decrement_ref_count2(right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(fun2_429==((void*)0)||fun2_429->mExternal) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value553=string_clone(fun_name_371)))),(struct sFun*)come_increment_ref_count(fun_428));
                            right_value553 = come_decrement_ref_count2(right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        base_fun_name_372 = come_decrement_ref_count2(base_fun_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1539, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value555=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value554=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1539, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_428),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sFunNode_finalize;
                        _inf_value6->clone=(void*)sFunNode_clone;
                        _inf_value6->compile=(void*)sFunNode_compile;
                        _inf_value6->sline=(void*)sFunNode_sline;
                        _inf_value6->sname=(void*)sFunNode_sname;
                        _inf_value6->terminated=(void*)sFunNode_terminated;
                        _inf_value6->kind=(void*)sFunNode_kind;
                        __result182__ = __result_obj__ = ((struct sNode*)(right_value559=_inf_value6));
                        asm_fun_427 = come_decrement_ref_count2(asm_fun_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_428, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_429, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_365 = come_decrement_ref_count2(var_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_371 = come_decrement_ref_count2(fun_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_381, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value555, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value559) { right_value559 = come_decrement_ref_count2(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result182__;
                        asm_fun_427 = come_decrement_ref_count2(asm_fun_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_428, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_429, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"invalid character(%c)(2)\n",*info->p);
                    exit(2);
                }
            }
        }
    }
    base_fun_name_372 = come_decrement_ref_count2(base_fun_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result183__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer2(sType_finalize,result_type_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_365 = come_decrement_ref_count2(var_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_371 = come_decrement_ref_count2(fun_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_381, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result183__;
    come_call_finalizer2(sType_finalize,result_type_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_365 = come_decrement_ref_count2(var_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_371 = come_decrement_ref_count2(fun_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_381, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->v2!=((void*)0)) {
            come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->v3!=((void*)0)) {
            come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional428;
memset(&__result_obj__, 0, sizeof(void*));
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional429;
struct sLambdaNode* __result157__;
void* right_value491;
struct sLambdaNode* result_389;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
void* right_value492;
char* __dec_obj116;
struct sLambdaNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value491 = (void*)0;
memset(&result_389, 0, sizeof(struct sLambdaNode*));
right_value492 = (void*)0;
            if(self==(void*)0) {
                __result157__ = __result_obj__ = (void*)0;
                return __result157__;
            }
            result_389=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value491=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode"))));
            come_call_finalizer2(sLambdaNode_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(self!=((void*)0)) {
                result_389->mFun=self->mFun;
            }
            if(self!=((void*)0)) {
                result_389->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj116=result_389->sname;
                result_389->sname=(char*)come_increment_ref_count(((char*)(right_value492=string_clone(self->sname))));
                __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value492 = come_decrement_ref_count2(right_value492, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result158__ = __result_obj__ = result_389;
            come_call_finalizer2(sLambdaNode_finalize,result_389, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result158__;
            come_call_finalizer2(sLambdaNode_finalize,result_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result160__;
memset(&__result_obj__, 0, sizeof(void*));
            __result160__ = self->len;
            return __result160__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
_Bool _if_conditional434;
unsigned int hash_413;
unsigned int it_414;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool same_key_exist_415;
char* it2_416;
_Bool _if_conditional454;
_Bool _if_conditional455;
struct map$2charphsGenericsFunph* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_413, 0, sizeof(unsigned int));
memset(&it_414, 0, sizeof(unsigned int));
memset(&same_key_exist_415, 0, sizeof(_Bool));
memset(&it2_416, 0, sizeof(char*));
                if(self->len*10>=self->size) {
                    map$2charphsGenericsFunph_rehash(self);
                }
                hash_413=string_get_hash_key(key)%self->size;
                it_414=hash_413;
                while((_Bool)1) {
                    if(self->item_existance[it_414]) {
                        if(string_equals(self->keys[it_414],key)) {
                            if(1) {
                                list$1charp_remove(self->key_list,self->keys[it_414]);
                                self->keys[it_414] = come_decrement_ref_count2(self->keys[it_414], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                self->keys[it_414]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                list$1charp_remove(self->key_list,self->keys[it_414]);
                                self->keys[it_414]=key;
                            }
                            if(1) {
                                come_call_finalizer2(sGenericsFun_finalize,self->items[it_414], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->items[it_414]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_414]=item;
                            }
                            break;
                        }
                        it_414++;
                        if(it_414>=self->size) {
                            it_414=0;
                        }
                        else {
                            if(it_414==hash_413) {
                                printf("unexpected error in map.insert\n");
                                stackframe();
                                exit(2);
                            }
                        }
                    }
                    else {
                        self->item_existance[it_414]=(_Bool)1;
                        if(1) {
                            self->keys[it_414]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            self->keys[it_414]=key;
                        }
                        if(1) {
                            self->items[it_414]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_414]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_415=(_Bool)0;
                for(                it2_416=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_416=list$1charp_next(self->key_list)                ){
                    if(string_equals(it2_416,key)) {
                        same_key_exist_415=(_Bool)1;
                    }
                }
                if(!same_key_exist_415) {
                    list$1charp_push_back(self->key_list,key);
                }
                __result172__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result172__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int size_396;
void* right_value503;
char** keys_397;
void* right_value504;
struct sGenericsFun** items_398;
void* right_value505;
_Bool* item_existance_399;
int len_400;
char* it_403;
struct sGenericsFun* default_value_406;
void* right_value506;
struct sGenericsFun* it2_409;
unsigned int hash_410;
int n_411;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool _if_conditional445;
struct sGenericsFun* default_value_412;
void* right_value507;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_396, 0, sizeof(int));
right_value503 = (void*)0;
memset(&keys_397, 0, sizeof(char**));
right_value504 = (void*)0;
memset(&items_398, 0, sizeof(struct sGenericsFun**));
right_value505 = (void*)0;
memset(&item_existance_399, 0, sizeof(_Bool*));
memset(&len_400, 0, sizeof(int));
memset(&it_403, 0, sizeof(char*));
memset(&default_value_406, 0, sizeof(struct sGenericsFun*));
right_value506 = (void*)0;
memset(&it2_409, 0, sizeof(struct sGenericsFun*));
memset(&hash_410, 0, sizeof(unsigned int));
memset(&n_411, 0, sizeof(int));
memset(&default_value_412, 0, sizeof(struct sGenericsFun*));
right_value507 = (void*)0;
                        size_396=self->size*10;
                        keys_397=(char**)come_increment_ref_count(((char**)(right_value503=(char**)come_calloc(1, sizeof(char*)*(1*(size_396)), "./comelang2.h", 1331, "char*"))));
                        right_value503 = come_decrement_ref_count2(right_value503, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        items_398=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value504=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_396)), "./comelang2.h", 1332, "struct sGenericsFun*"))));
                        come_call_finalizer2(sGenericsFun_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        item_existance_399=(_Bool*)come_increment_ref_count(((_Bool*)(right_value505=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_396)), "./comelang2.h", 1333, "_Bool"))));
                        right_value505 = come_decrement_ref_count2(right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        len_400=0;
                        for(                        it_403=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_403=map$2charphsGenericsFunph_next(self)                        ){
                            memset(&default_value_406,0,sizeof(struct sGenericsFun*));
                            it2_409=((struct sGenericsFun*)(right_value506=map$2charphsGenericsFunph_at(self,it_403,default_value_406)));
                            come_call_finalizer2(sGenericsFun_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            hash_410=string_get_hash_key(it_403)%size_396;
                            n_411=hash_410;
                            while((_Bool)1) {
                                if(item_existance_399[n_411]) {
                                    n_411++;
                                    if(n_411>=size_396) {
                                        n_411=0;
                                    }
                                    else {
                                        if(n_411==hash_410) {
                                            printf("unexpected error in map.rehash(1)\n");
                                            stackframe();
                                            exit(2);
                                        }
                                    }
                                }
                                else {
                                    item_existance_399[n_411]=(_Bool)1;
                                    keys_397[n_411]=it_403;
                                    items_398[n_411]=((struct sGenericsFun*)(right_value507=map$2charphsGenericsFunph_at(self,it_403,default_value_412)));
                                    come_call_finalizer2(sGenericsFun_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    len_400++;
                                    break;
                                }
                            }
                        }
                        come_free((char*)self->items);
                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_free((char*)self->keys);
                        self->keys=keys_397;
                        self->items=items_398;
                        self->item_existance=item_existance_399;
                        self->size=size_396;
                        self->len=len_400;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional435;
char* result_401;
char* __result161__;
_Bool _if_conditional436;
char* __result162__;
char* result_402;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_401, 0, sizeof(char*));
memset(&result_402, 0, sizeof(char*));
                            if(self==((void*)0)) {
                                memset(&result_401,0,sizeof(char*));
                                __result161__ = __result_obj__ = result_401;
                                return __result161__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result162__ = __result_obj__ = self->key_list->it->item;
                                return __result162__;
                            }
                            memset(&result_402,0,sizeof(char*));
                            __result163__ = __result_obj__ = result_402;
                            return __result163__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result164__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result164__;
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional437;
char* result_404;
char* __result165__;
_Bool _if_conditional438;
char* __result166__;
char* result_405;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_404, 0, sizeof(char*));
memset(&result_405, 0, sizeof(char*));
                            if(self==((void*)0)||self->key_list->it==((void*)0)) {
                                memset(&result_404,0,sizeof(char*));
                                __result165__ = __result_obj__ = result_404;
                                return __result165__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result166__ = __result_obj__ = self->key_list->it->item;
                                return __result166__;
                            }
                            memset(&result_405,0,sizeof(char*));
                            __result167__ = __result_obj__ = result_405;
                            return __result167__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_407;
unsigned int it_408;
_Bool _if_conditional439;
_Bool _if_conditional440;
struct sGenericsFun* __result168__;
_Bool _if_conditional441;
_Bool _if_conditional442;
struct sGenericsFun* __result169__;
struct sGenericsFun* __result170__;
struct sGenericsFun* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_407, 0, sizeof(unsigned int));
memset(&it_408, 0, sizeof(unsigned int));
                                hash_407=string_get_hash_key(((char*)key))%self->size;
                                it_408=hash_407;
                                while((_Bool)1) {
                                    if(self->item_existance[it_408]) {
                                        if(string_equals(self->keys[it_408],key)) {
                                            __result168__ = __result_obj__ = self->items[it_408];
                                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result168__;
                                        }
                                        it_408++;
                                        if(it_408>=self->size) {
                                            it_408=0;
                                        }
                                        else {
                                            if(it_408==hash_407) {
                                                __result169__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result169__;
                                            }
                                        }
                                    }
                                    else {
                                        __result170__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result170__;
                                    }
                                }
                                __result171__ = __result_obj__ = default_value;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result171__;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_431;
char* __dec_obj126;
char* last_code2_432;
char* __dec_obj127;
char* last_code3_433;
char* __dec_obj128;
struct sClass* current_stack_frame_struct_434;
struct sFun* finalizer_435;
void* right_value560;
char* real_fun_name_436;
void* right_value561;
struct sType* type2_437;
struct sClass* klass_438;
_Bool _if_conditional484;
void* right_value562;
void* right_value563;
struct buffer* source_439;
void* right_value564;
struct list$1tuple2$2charphsTypephph* o2_saved_440;
struct tuple2$2charphsTypeph* it_443;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_446;
struct sType* field_type_447;
_Bool _if_conditional489;
_Bool _if_conditional490;
char* p_449;
int sline_450;
char* sname_451;
char* head_452;
struct buffer* source3_453;
struct buffer* __dec_obj129;
void* right_value565;
char* __dec_obj130;
void* right_value566;
struct sBlock* block_454;
void* right_value567;
void* right_value568;
struct sType* result_type_455;
void* right_value569;
char* name_456;
void* right_value570;
struct sType* self_type_457;
_Bool _if_conditional491;
struct sType* __list_values19___458[1];
void* right_value571;
void* right_value572;
struct list$1sTypeph* param_types_459;
void* right_value573;
char* __list_values20___460[1];
void* right_value574;
void* right_value575;
struct list$1charph* param_names_461;
void* right_value576;
void* right_value577;
struct list$1charph* param_default_parametors_462;
void* right_value578;
void* right_value579;
struct buffer* header_buf_463;
void* right_value580;
int i_464;
void* right_value581;
struct sType* param_type_465;
void* right_value582;
char* param_name_469;
void* right_value583;
_Bool _if_conditional494;
void* right_value584;
void* right_value585;
void* right_value586;
void* right_value587;
struct sFun* fun_470;
void* right_value588;
void* right_value589;
struct sFun* fun2_471;
_Bool _if_conditional495;
void* right_value590;
void* right_value591;
void* right_value592;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value596;
struct sNode* node_473;
_Bool _if_conditional502;
struct buffer* __dec_obj133;
char* __dec_obj134;
char* __dec_obj135;
char* __dec_obj136;
char* __dec_obj137;
void* right_value597;
void* right_value598;
struct tuple2$2sFunpcharph* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_431, 0, sizeof(char*));
memset(&last_code2_432, 0, sizeof(char*));
memset(&last_code3_433, 0, sizeof(char*));
memset(&current_stack_frame_struct_434, 0, sizeof(struct sClass*));
memset(&finalizer_435, 0, sizeof(struct sFun*));
right_value560 = (void*)0;
memset(&real_fun_name_436, 0, sizeof(char*));
right_value561 = (void*)0;
memset(&type2_437, 0, sizeof(struct sType*));
memset(&klass_438, 0, sizeof(struct sClass*));
right_value562 = (void*)0;
right_value563 = (void*)0;
memset(&source_439, 0, sizeof(struct buffer*));
right_value564 = (void*)0;
memset(&o2_saved_440, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_443, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_446, 0, sizeof(char*));
memset(&field_type_447, 0, sizeof(struct sType*));
memset(&name_446, 0, sizeof(char*));
memset(&field_type_447, 0, sizeof(struct sType*));
memset(&p_449, 0, sizeof(char*));
memset(&sline_450, 0, sizeof(int));
memset(&sname_451, 0, sizeof(char*));
memset(&head_452, 0, sizeof(char*));
memset(&source3_453, 0, sizeof(struct buffer*));
right_value565 = (void*)0;
right_value566 = (void*)0;
memset(&block_454, 0, sizeof(struct sBlock*));
right_value567 = (void*)0;
right_value568 = (void*)0;
memset(&result_type_455, 0, sizeof(struct sType*));
right_value569 = (void*)0;
memset(&name_456, 0, sizeof(char*));
right_value570 = (void*)0;
memset(&self_type_457, 0, sizeof(struct sType*));
right_value571 = (void*)0;
right_value572 = (void*)0;
memset(&param_types_459, 0, sizeof(struct list$1sTypeph*));
right_value573 = (void*)0;
right_value574 = (void*)0;
right_value575 = (void*)0;
memset(&param_names_461, 0, sizeof(struct list$1charph*));
right_value576 = (void*)0;
right_value577 = (void*)0;
memset(&param_default_parametors_462, 0, sizeof(struct list$1charph*));
right_value578 = (void*)0;
right_value579 = (void*)0;
memset(&header_buf_463, 0, sizeof(struct buffer*));
right_value580 = (void*)0;
memset(&i_464, 0, sizeof(int));
right_value581 = (void*)0;
memset(&param_type_465, 0, sizeof(struct sType*));
right_value582 = (void*)0;
memset(&param_name_469, 0, sizeof(char*));
right_value583 = (void*)0;
right_value584 = (void*)0;
right_value585 = (void*)0;
right_value586 = (void*)0;
right_value587 = (void*)0;
memset(&fun_470, 0, sizeof(struct sFun*));
right_value588 = (void*)0;
right_value589 = (void*)0;
memset(&fun2_471, 0, sizeof(struct sFun*));
right_value590 = (void*)0;
right_value591 = (void*)0;
right_value592 = (void*)0;
right_value596 = (void*)0;
memset(&node_473, 0, sizeof(struct sNode*));
right_value597 = (void*)0;
right_value598 = (void*)0;
    last_code_431=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj126=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_432=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj127=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_433=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj128=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_434=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_435=((void*)0);
    real_fun_name_436=(char*)come_increment_ref_count(((char*)(right_value560=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value560 = come_decrement_ref_count2(right_value560, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_437=(struct sType*)come_increment_ref_count(((struct sType*)(right_value561=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value561, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_437;
    klass_438=type->mClass;
    if(type->mPointerNum>0&&klass_438->mStruct) {
        source_439=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value563=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value562=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1575, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value562, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_439,123);
        klass_438=((struct sClass*)(right_value564=map$2charphsClassphp_operator_load_element(info->classes,klass_438->mName)));
        come_call_finalizer2(sClass_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_440=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_438->mFields)),it_443=list$1tuple2$2charphsTypephph_begin((o2_saved_440));        !list$1tuple2$2charphsTypephph_end((o2_saved_440));        it_443=list$1tuple2$2charphsTypephph_next((o2_saved_440))        ){
            multiple_assign_var10=it_443;
            name_446=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_447=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(string_operator_equals(type->mClass->mName,field_type_447->mClass->mName)&&type->mPointerNum==field_type_447->mPointerNum&&field_type_447->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_447->mHeap) {
                char source2_448[1024];
                memset(&source2_448, 0, sizeof(char)                *(1024)                );
                snprintf(source2_448,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_446,name_446);
                buffer_append_str(source_439,source2_448);
            }
            name_446 = come_decrement_ref_count2(name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_447, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_440, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_439,125);
        p_449=info->p;
        sline_450=info->sline;
        sname_451=(char*)come_increment_ref_count(info->sname);
        head_452=info->head;
        source3_453=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj129=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_439);
        come_call_finalizer2(buffer_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_439->buf;
        info->head=source_439->buf;
        __dec_obj130=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value565=__builtin_string(real_fun_name_436))));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value565 = come_decrement_ref_count2(right_value565, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_454=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value566=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_455=(struct sType*)come_increment_ref_count(((struct sType*)(right_value568=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value567=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1614, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_456=(char*)come_increment_ref_count(((char*)(right_value569=string_clone(real_fun_name_436))));
        right_value569 = come_decrement_ref_count2(right_value569, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_457=(struct sType*)come_increment_ref_count(((struct sType*)(right_value570=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_457->mHeap=(_Bool)0;
        if(self_type_457->mPointerNum>1) {
            self_type_457->mPointerNum=1;
        }
        {__list_values19___458[0]=come_increment_ref_count(self_type_457);
}        param_types_459=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value572=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value571=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1621, "struct list$1sTypeph")))),1,__list_values19___458))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values20___460[0]=come_increment_ref_count(((char*)(right_value573=__builtin_string("self"))));
}        param_names_461=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value575=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value574=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1622, "struct list$1charph")))),1,__list_values20___460))));
        right_value573 = come_decrement_ref_count2(right_value573, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_462=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value577=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value576=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1623, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value576, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_462,((void*)0));
        header_buf_463=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value579=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value578=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1626, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_463,((char*)(right_value580=make_come_type_name_string(result_type_455,info))));
        right_value580 = come_decrement_ref_count2(right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_463," ");
        buffer_append_str(header_buf_463,real_fun_name_436);
        buffer_append_str(header_buf_463,"(");
        for(        i_464=0;        i_464<list$1sTypeph_length(param_types_459);        i_464++        ){
            param_type_465=((struct sType*)(right_value581=list$1sTypephp_operator_load_element(param_types_459,i_464)));
            come_call_finalizer2(sType_finalize,right_value581, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_469=((char*)(right_value582=list$1charphp_operator_load_element(param_names_461,i_464)));
            right_value582 = come_decrement_ref_count2(right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_463,((char*)(right_value583=make_come_type_name_string(param_type_465,info))));
            right_value583 = come_decrement_ref_count2(right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_463," ");
            buffer_append_str(header_buf_463,param_name_469);
            if(i_464!=list$1sTypeph_length(param_types_459)-1) {
                buffer_append_str(header_buf_463,",");
            }
        }
        buffer_append_str(header_buf_463,")");
        result_type_455->mStatic=(_Bool)0;
        fun_470=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value587=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value584=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1649, "struct sFun")))),(char*)come_increment_ref_count(name_456),(struct sType*)come_increment_ref_count(result_type_455),(struct list$1sTypeph*)come_increment_ref_count(param_types_459),(struct list$1charph*)come_increment_ref_count(param_names_461),(struct list$1charph*)come_increment_ref_count(param_default_parametors_462),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_454),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value585=buffer_to_string(header_buf_463)))),(char*)come_increment_ref_count(((char*)(right_value586=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value585 = come_decrement_ref_count2(right_value585, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value586 = come_decrement_ref_count2(right_value586, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_471=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value589=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value588=__builtin_string(fun_name)))))));
        right_value588 = come_decrement_ref_count2(right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value589, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(fun2_471==((void*)0)||fun2_471->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value590=string_clone(name_456)))),(struct sFun*)come_increment_ref_count(fun_470));
            right_value590 = come_decrement_ref_count2(right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_435=fun_470;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1665, "struct sNode");
        _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value592=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value591=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1665, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_470),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFunNode_finalize;
        _inf_value7->clone=(void*)sFunNode_clone;
        _inf_value7->compile=(void*)sFunNode_compile;
        _inf_value7->sline=(void*)sFunNode_sline;
        _inf_value7->sname=(void*)sFunNode_sname;
        _inf_value7->terminated=(void*)sFunNode_terminated;
        _inf_value7->kind=(void*)sFunNode_kind;
        node_473=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value596=_inf_value7)));
        come_call_finalizer2(sFunNode_finalize,right_value591, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value596) { right_value596 = come_decrement_ref_count2(right_value596, ((struct sNode*)right_value596)->finalize, ((struct sNode*)right_value596)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_473,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj133=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_453);
        come_call_finalizer2(buffer_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_449;
        info->head=head_452;
        info->sline=sline_450;
        __dec_obj134=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_451);
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_439, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_451 = come_decrement_ref_count2(sname_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_453, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_455, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_456 = come_decrement_ref_count2(name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_457, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_459, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_461, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_462, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_463, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_470, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_473) { node_473 = come_decrement_ref_count2(node_473, ((struct sNode*)node_473)->finalize, ((struct sNode*)node_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_434;
    __dec_obj135=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_431);
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj136=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_432);
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj137=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_433);
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result197__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value598=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value597=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1685, "struct tuple2$2sFunpcharph")))),finalizer_435,(char*)come_increment_ref_count(real_fun_name_436))));
    last_code_431 = come_decrement_ref_count2(last_code_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_432 = come_decrement_ref_count2(last_code2_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_433 = come_decrement_ref_count2(last_code3_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_436 = come_decrement_ref_count2(real_fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value597 = come_decrement_ref_count2(right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value598, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result197__;
    last_code_431 = come_decrement_ref_count2(last_code_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_432 = come_decrement_ref_count2(last_code2_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_433 = come_decrement_ref_count2(last_code3_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_436 = come_decrement_ref_count2(real_fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional485;
struct tuple2$2charphsTypeph* result_441;
struct tuple2$2charphsTypeph* __result184__;
_Bool _if_conditional486;
struct tuple2$2charphsTypeph* __result185__;
struct tuple2$2charphsTypeph* result_442;
struct tuple2$2charphsTypeph* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_441, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_442, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(self==((void*)0)) {
                memset(&result_441,0,sizeof(struct tuple2$2charphsTypeph*));
                __result184__ = __result_obj__ = result_441;
                return __result184__;
            }
            self->it=self->head;
            if(self->it) {
                __result185__ = __result_obj__ = self->it->item;
                return __result185__;
            }
            memset(&result_442,0,sizeof(struct tuple2$2charphsTypeph*));
            __result186__ = __result_obj__ = result_442;
            return __result186__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
            __result187__ = self==((void*)0)||self->it==((void*)0);
            return __result187__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional487;
struct tuple2$2charphsTypeph* result_444;
struct tuple2$2charphsTypeph* __result188__;
_Bool _if_conditional488;
struct tuple2$2charphsTypeph* __result189__;
struct tuple2$2charphsTypeph* result_445;
struct tuple2$2charphsTypeph* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_444, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_445, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_444,0,sizeof(struct tuple2$2charphsTypeph*));
                __result188__ = __result_obj__ = result_444;
                return __result188__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result189__ = __result_obj__ = self->it->item;
                return __result189__;
            }
            memset(&result_445,0,sizeof(struct tuple2$2charphsTypeph*));
            __result190__ = __result_obj__ = result_445;
            return __result190__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result191__;
memset(&__result_obj__, 0, sizeof(void*));
            __result191__ = self->len;
            return __result191__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional492;
struct list_item$1charph* it_466;
int i_467;
_Bool _if_conditional493;
char* __result192__;
char* default_value_468;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_466, 0, sizeof(struct list_item$1charph*));
memset(&i_467, 0, sizeof(int));
memset(&default_value_468, 0, sizeof(char*));
                if(position<0) {
                    position+=self->len;
                }
                it_466=self->head;
                i_467=0;
                while(it_466!=((void*)0)) {
                    if(position==i_467) {
                        __result192__ = __result_obj__ = it_466->item;
                        return __result192__;
                    }
                    it_466=it_466->next;
                    i_467++;
                }
                memset(&default_value_468,0,sizeof(char*));
                __result193__ = __result_obj__ = default_value_468;
                default_value_468 = come_decrement_ref_count2(default_value_468, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result193__;
                default_value_468 = come_decrement_ref_count2(default_value_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj138;
struct tuple2$2sFunpcharph* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
        self->v1=v1;
        __dec_obj138=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result196__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result196__;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional503;
memset(&__result_obj__, 0, sizeof(void*));
            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_474;
char* __dec_obj139;
char* last_code2_475;
char* __dec_obj140;
char* last_code3_476;
char* __dec_obj141;
struct sClass* current_stack_frame_struct_477;
struct sFun* finalizer_478;
void* right_value599;
char* real_fun_name_479;
void* right_value600;
struct sType* type2_480;
struct sClass* klass_481;
_Bool _if_conditional504;
void* right_value601;
void* right_value602;
struct buffer* source_482;
void* right_value603;
struct list$1tuple2$2charphsTypephph* o2_saved_483;
struct tuple2$2charphsTypeph* it_484;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_485;
struct sType* field_type_486;
_Bool _if_conditional505;
_Bool _if_conditional506;
char* p_488;
int sline_489;
char* sname_490;
char* head_491;
struct buffer* source3_492;
struct buffer* __dec_obj142;
void* right_value604;
char* __dec_obj143;
void* right_value605;
struct sBlock* block_493;
void* right_value606;
void* right_value607;
struct sType* result_type_494;
void* right_value608;
char* name_495;
void* right_value609;
struct sType* self_type_496;
_Bool _if_conditional507;
struct sType* __list_values21___497[1];
void* right_value610;
void* right_value611;
struct list$1sTypeph* param_types_498;
void* right_value612;
char* __list_values22___499[1];
void* right_value613;
void* right_value614;
struct list$1charph* param_names_500;
void* right_value615;
void* right_value616;
struct list$1charph* param_default_parametors_501;
void* right_value617;
void* right_value618;
struct buffer* header_buf_502;
void* right_value619;
int i_503;
void* right_value620;
struct sType* param_type_504;
void* right_value621;
char* param_name_505;
void* right_value622;
_Bool _if_conditional508;
void* right_value623;
void* right_value624;
void* right_value625;
void* right_value626;
struct sFun* fun_506;
void* right_value627;
void* right_value628;
struct sFun* fun2_507;
_Bool _if_conditional509;
void* right_value629;
void* right_value630;
void* right_value631;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value635;
struct sNode* node_509;
_Bool _if_conditional516;
struct buffer* __dec_obj146;
char* __dec_obj147;
char* __dec_obj148;
char* __dec_obj149;
char* __dec_obj150;
void* right_value636;
void* right_value637;
struct tuple2$2sFunpcharph* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_474, 0, sizeof(char*));
memset(&last_code2_475, 0, sizeof(char*));
memset(&last_code3_476, 0, sizeof(char*));
memset(&current_stack_frame_struct_477, 0, sizeof(struct sClass*));
memset(&finalizer_478, 0, sizeof(struct sFun*));
right_value599 = (void*)0;
memset(&real_fun_name_479, 0, sizeof(char*));
right_value600 = (void*)0;
memset(&type2_480, 0, sizeof(struct sType*));
memset(&klass_481, 0, sizeof(struct sClass*));
right_value601 = (void*)0;
right_value602 = (void*)0;
memset(&source_482, 0, sizeof(struct buffer*));
right_value603 = (void*)0;
memset(&o2_saved_483, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_484, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_485, 0, sizeof(char*));
memset(&field_type_486, 0, sizeof(struct sType*));
memset(&name_485, 0, sizeof(char*));
memset(&field_type_486, 0, sizeof(struct sType*));
memset(&p_488, 0, sizeof(char*));
memset(&sline_489, 0, sizeof(int));
memset(&sname_490, 0, sizeof(char*));
memset(&head_491, 0, sizeof(char*));
memset(&source3_492, 0, sizeof(struct buffer*));
right_value604 = (void*)0;
right_value605 = (void*)0;
memset(&block_493, 0, sizeof(struct sBlock*));
right_value606 = (void*)0;
right_value607 = (void*)0;
memset(&result_type_494, 0, sizeof(struct sType*));
right_value608 = (void*)0;
memset(&name_495, 0, sizeof(char*));
right_value609 = (void*)0;
memset(&self_type_496, 0, sizeof(struct sType*));
right_value610 = (void*)0;
right_value611 = (void*)0;
memset(&param_types_498, 0, sizeof(struct list$1sTypeph*));
right_value612 = (void*)0;
right_value613 = (void*)0;
right_value614 = (void*)0;
memset(&param_names_500, 0, sizeof(struct list$1charph*));
right_value615 = (void*)0;
right_value616 = (void*)0;
memset(&param_default_parametors_501, 0, sizeof(struct list$1charph*));
right_value617 = (void*)0;
right_value618 = (void*)0;
memset(&header_buf_502, 0, sizeof(struct buffer*));
right_value619 = (void*)0;
memset(&i_503, 0, sizeof(int));
right_value620 = (void*)0;
memset(&param_type_504, 0, sizeof(struct sType*));
right_value621 = (void*)0;
memset(&param_name_505, 0, sizeof(char*));
right_value622 = (void*)0;
right_value623 = (void*)0;
right_value624 = (void*)0;
right_value625 = (void*)0;
right_value626 = (void*)0;
memset(&fun_506, 0, sizeof(struct sFun*));
right_value627 = (void*)0;
right_value628 = (void*)0;
memset(&fun2_507, 0, sizeof(struct sFun*));
right_value629 = (void*)0;
right_value630 = (void*)0;
right_value631 = (void*)0;
right_value635 = (void*)0;
memset(&node_509, 0, sizeof(struct sNode*));
right_value636 = (void*)0;
right_value637 = (void*)0;
    last_code_474=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj139=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_475=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj140=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_476=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj141=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_477=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_478=((void*)0);
    real_fun_name_479=(char*)come_increment_ref_count(((char*)(right_value599=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value599 = come_decrement_ref_count2(right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_480=(struct sType*)come_increment_ref_count(((struct sType*)(right_value600=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value600, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_480;
    klass_481=type->mClass;
    if(type->mPointerNum>0&&klass_481->mStruct) {
        source_482=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value602=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value601=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1712, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value601, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_482,123);
        klass_481=((struct sClass*)(right_value603=map$2charphsClassphp_operator_load_element(info->classes,klass_481->mName)));
        come_call_finalizer2(sClass_finalize,right_value603, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_483=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_481->mFields)),it_484=list$1tuple2$2charphsTypephph_begin((o2_saved_483));        !list$1tuple2$2charphsTypephph_end((o2_saved_483));        it_484=list$1tuple2$2charphsTypephph_next((o2_saved_483))        ){
            multiple_assign_var11=it_484;
            name_485=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_486=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(string_operator_equals(type->mClass->mName,field_type_486->mClass->mName)&&type->mPointerNum==field_type_486->mPointerNum&&field_type_486->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_486->mHeap) {
                char source2_487[1024];
                memset(&source2_487, 0, sizeof(char)                *(1024)                );
                snprintf(source2_487,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_485,name_485);
                buffer_append_str(source_482,source2_487);
            }
            name_485 = come_decrement_ref_count2(name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_486, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_483, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_482,125);
        p_488=info->p;
        sline_489=info->sline;
        sname_490=(char*)come_increment_ref_count(info->sname);
        head_491=info->head;
        source3_492=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj142=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_482);
        come_call_finalizer2(buffer_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_482->buf;
        info->head=source_482->buf;
        __dec_obj143=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value604=__builtin_string(real_fun_name_479))));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value604 = come_decrement_ref_count2(right_value604, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_493=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value605=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_494=(struct sType*)come_increment_ref_count(((struct sType*)(right_value607=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value606=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1751, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value606, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_495=(char*)come_increment_ref_count(((char*)(right_value608=string_clone(real_fun_name_479))));
        right_value608 = come_decrement_ref_count2(right_value608, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_496=(struct sType*)come_increment_ref_count(((struct sType*)(right_value609=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_496->mHeap=(_Bool)0;
        if(self_type_496->mPointerNum>1) {
            self_type_496->mPointerNum=1;
        }
        {__list_values21___497[0]=come_increment_ref_count(self_type_496);
}        param_types_498=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value611=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value610=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1758, "struct list$1sTypeph")))),1,__list_values21___497))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value611, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values22___499[0]=come_increment_ref_count(((char*)(right_value612=__builtin_string("self"))));
}        param_names_500=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value614=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value613=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1759, "struct list$1charph")))),1,__list_values22___499))));
        right_value612 = come_decrement_ref_count2(right_value612, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value613, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value614, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_501=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value616=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value615=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1760, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value615, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value616, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_501,((void*)0));
        header_buf_502=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value618=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value617=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1763, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value618, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_502,((char*)(right_value619=make_come_type_name_string(result_type_494,info))));
        right_value619 = come_decrement_ref_count2(right_value619, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_502," ");
        buffer_append_str(header_buf_502,real_fun_name_479);
        buffer_append_str(header_buf_502,"(");
        for(        i_503=0;        i_503<list$1sTypeph_length(param_types_498);        i_503++        ){
            param_type_504=((struct sType*)(right_value620=list$1sTypephp_operator_load_element(param_types_498,i_503)));
            come_call_finalizer2(sType_finalize,right_value620, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_505=((char*)(right_value621=list$1charphp_operator_load_element(param_names_500,i_503)));
            right_value621 = come_decrement_ref_count2(right_value621, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_502,((char*)(right_value622=make_come_type_name_string(param_type_504,info))));
            right_value622 = come_decrement_ref_count2(right_value622, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_502," ");
            buffer_append_str(header_buf_502,param_name_505);
            if(i_503!=list$1sTypeph_length(param_types_498)-1) {
                buffer_append_str(header_buf_502,",");
            }
        }
        buffer_append_str(header_buf_502,")");
        result_type_494->mStatic=(_Bool)0;
        fun_506=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value626=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value623=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1786, "struct sFun")))),(char*)come_increment_ref_count(name_495),(struct sType*)come_increment_ref_count(result_type_494),(struct list$1sTypeph*)come_increment_ref_count(param_types_498),(struct list$1charph*)come_increment_ref_count(param_names_500),(struct list$1charph*)come_increment_ref_count(param_default_parametors_501),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_493),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value624=buffer_to_string(header_buf_502)))),(char*)come_increment_ref_count(((char*)(right_value625=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value623, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value624 = come_decrement_ref_count2(right_value624, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value625 = come_decrement_ref_count2(right_value625, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value626, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_507=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value628=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value627=__builtin_string(fun_name)))))));
        right_value627 = come_decrement_ref_count2(right_value627, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(fun2_507==((void*)0)||fun2_507->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value629=string_clone(name_495)))),(struct sFun*)come_increment_ref_count(fun_506));
            right_value629 = come_decrement_ref_count2(right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_478=fun_506;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1802, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value631=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value630=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1802, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_506),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFunNode_finalize;
        _inf_value8->clone=(void*)sFunNode_clone;
        _inf_value8->compile=(void*)sFunNode_compile;
        _inf_value8->sline=(void*)sFunNode_sline;
        _inf_value8->sname=(void*)sFunNode_sname;
        _inf_value8->terminated=(void*)sFunNode_terminated;
        _inf_value8->kind=(void*)sFunNode_kind;
        node_509=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value635=_inf_value8)));
        come_call_finalizer2(sFunNode_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value631, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value635) { right_value635 = come_decrement_ref_count2(right_value635, ((struct sNode*)right_value635)->finalize, ((struct sNode*)right_value635)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_509,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj146=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_492);
        come_call_finalizer2(buffer_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_488;
        info->head=head_491;
        info->sline=sline_489;
        __dec_obj147=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_490);
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_482, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_490 = come_decrement_ref_count2(sname_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_492, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_493, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_494, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_495 = come_decrement_ref_count2(name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_496, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_498, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_500, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_501, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_502, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_506, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_507, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_509) { node_509 = come_decrement_ref_count2(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_477;
    __dec_obj148=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_474);
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj149=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_475);
    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj150=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_476);
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result200__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value637=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value636=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1822, "struct tuple2$2sFunpcharph")))),finalizer_478,(char*)come_increment_ref_count(real_fun_name_479))));
    last_code_474 = come_decrement_ref_count2(last_code_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_475 = come_decrement_ref_count2(last_code2_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_476 = come_decrement_ref_count2(last_code3_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_479 = come_decrement_ref_count2(real_fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_480, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value636 = come_decrement_ref_count2(right_value636, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result200__;
    last_code_474 = come_decrement_ref_count2(last_code_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_475 = come_decrement_ref_count2(last_code2_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_476 = come_decrement_ref_count2(last_code3_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_479 = come_decrement_ref_count2(real_fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_480, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_510;
char* __dec_obj151;
char* last_code2_511;
char* __dec_obj152;
char* last_code3_512;
char* __dec_obj153;
struct sClass* current_stack_frame_struct_513;
struct sFun* equaler_514;
void* right_value638;
char* real_fun_name_515;
void* right_value639;
struct sType* type2_516;
struct sClass* klass_517;
_Bool _if_conditional517;
void* right_value640;
void* right_value641;
struct buffer* source_518;
_Bool _if_conditional518;
char* name_519;
void* right_value642;
struct list$1tuple2$2charphsTypephph* o2_saved_521;
struct tuple2$2charphsTypeph* it_522;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_523;
struct sType* field_type_524;
_Bool _if_conditional519;
char* p_526;
int sline_527;
char* sname_528;
char* head_529;
struct buffer* source3_530;
struct buffer* __dec_obj154;
void* right_value643;
char* __dec_obj155;
void* right_value644;
struct sBlock* block_531;
void* right_value645;
void* right_value646;
struct sType* result_type_532;
void* right_value647;
char* name_533;
void* right_value648;
struct sType* left_type_534;
void* right_value649;
struct sType* right_type_535;
struct sType* __list_values23___536[2];
void* right_value650;
void* right_value651;
struct list$1sTypeph* param_types_537;
void* right_value652;
void* right_value653;
char* __list_values24___538[2];
void* right_value654;
void* right_value655;
struct list$1charph* param_names_539;
void* right_value656;
void* right_value657;
struct list$1charph* param_default_parametors_540;
void* right_value658;
void* right_value659;
struct buffer* header_buf_541;
void* right_value660;
int i_542;
void* right_value661;
struct sType* param_type_543;
void* right_value662;
char* param_name_544;
void* right_value663;
_Bool _if_conditional520;
void* right_value664;
void* right_value665;
void* right_value666;
void* right_value667;
struct sFun* fun_545;
void* right_value668;
void* right_value669;
struct sFun* fun2_546;
_Bool _if_conditional521;
void* right_value670;
void* right_value671;
void* right_value672;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value676;
struct sNode* node_548;
_Bool _if_conditional528;
struct buffer* __dec_obj158;
char* __dec_obj159;
char* __dec_obj160;
char* __dec_obj161;
char* __dec_obj162;
void* right_value677;
void* right_value678;
struct tuple2$2sFunpcharph* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_510, 0, sizeof(char*));
memset(&last_code2_511, 0, sizeof(char*));
memset(&last_code3_512, 0, sizeof(char*));
memset(&current_stack_frame_struct_513, 0, sizeof(struct sClass*));
memset(&equaler_514, 0, sizeof(struct sFun*));
right_value638 = (void*)0;
memset(&real_fun_name_515, 0, sizeof(char*));
right_value639 = (void*)0;
memset(&type2_516, 0, sizeof(struct sType*));
memset(&klass_517, 0, sizeof(struct sClass*));
right_value640 = (void*)0;
right_value641 = (void*)0;
memset(&source_518, 0, sizeof(struct buffer*));
memset(&name_519, 0, sizeof(char*));
right_value642 = (void*)0;
memset(&o2_saved_521, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_522, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_523, 0, sizeof(char*));
memset(&field_type_524, 0, sizeof(struct sType*));
memset(&name_523, 0, sizeof(char*));
memset(&field_type_524, 0, sizeof(struct sType*));
memset(&p_526, 0, sizeof(char*));
memset(&sline_527, 0, sizeof(int));
memset(&sname_528, 0, sizeof(char*));
memset(&head_529, 0, sizeof(char*));
memset(&source3_530, 0, sizeof(struct buffer*));
right_value643 = (void*)0;
right_value644 = (void*)0;
memset(&block_531, 0, sizeof(struct sBlock*));
right_value645 = (void*)0;
right_value646 = (void*)0;
memset(&result_type_532, 0, sizeof(struct sType*));
right_value647 = (void*)0;
memset(&name_533, 0, sizeof(char*));
right_value648 = (void*)0;
memset(&left_type_534, 0, sizeof(struct sType*));
right_value649 = (void*)0;
memset(&right_type_535, 0, sizeof(struct sType*));
right_value650 = (void*)0;
right_value651 = (void*)0;
memset(&param_types_537, 0, sizeof(struct list$1sTypeph*));
right_value652 = (void*)0;
right_value653 = (void*)0;
right_value654 = (void*)0;
right_value655 = (void*)0;
memset(&param_names_539, 0, sizeof(struct list$1charph*));
right_value656 = (void*)0;
right_value657 = (void*)0;
memset(&param_default_parametors_540, 0, sizeof(struct list$1charph*));
right_value658 = (void*)0;
right_value659 = (void*)0;
memset(&header_buf_541, 0, sizeof(struct buffer*));
right_value660 = (void*)0;
memset(&i_542, 0, sizeof(int));
right_value661 = (void*)0;
memset(&param_type_543, 0, sizeof(struct sType*));
right_value662 = (void*)0;
memset(&param_name_544, 0, sizeof(char*));
right_value663 = (void*)0;
right_value664 = (void*)0;
right_value665 = (void*)0;
right_value666 = (void*)0;
right_value667 = (void*)0;
memset(&fun_545, 0, sizeof(struct sFun*));
right_value668 = (void*)0;
right_value669 = (void*)0;
memset(&fun2_546, 0, sizeof(struct sFun*));
right_value670 = (void*)0;
right_value671 = (void*)0;
right_value672 = (void*)0;
right_value676 = (void*)0;
memset(&node_548, 0, sizeof(struct sNode*));
right_value677 = (void*)0;
right_value678 = (void*)0;
    last_code_510=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj151=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_511=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj152=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_512=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj153=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_513=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_514=((void*)0);
    real_fun_name_515=(char*)come_increment_ref_count(((char*)(right_value638=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value638 = come_decrement_ref_count2(right_value638, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_516=(struct sType*)come_increment_ref_count(((struct sType*)(right_value639=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value639, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_516;
    klass_517=type->mClass;
    if(type->mPointerNum>0&&!klass_517->mNumber) {
        source_518=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value641=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value640=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1847, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value641, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_518,123);
        if(klass_517->mProtocol) {
            name_519="_protocol_obj";
            char source2_520[1024];
            memset(&source2_520, 0, sizeof(char)            *(1024)            );
            snprintf(source2_520,1024,"return left.%s.equals(right.%s);\n",name_519,name_519);
            buffer_append_str(source_518,source2_520);
        }
        else {
            klass_517=((struct sClass*)(right_value642=map$2charphsClassphp_operator_load_element(info->classes,klass_517->mName)));
            come_call_finalizer2(sClass_finalize,right_value642, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_521=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_517->mFields)),it_522=list$1tuple2$2charphsTypephph_begin((o2_saved_521));            !list$1tuple2$2charphsTypephph_end((o2_saved_521));            it_522=list$1tuple2$2charphsTypephph_next((o2_saved_521))            ){
                multiple_assign_var12=it_522;
                name_523=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_524=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(string_operator_equals(type->mClass->mName,field_type_524->mClass->mName)&&type->mPointerNum==field_type_524->mPointerNum&&field_type_524->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_525[1024];
                memset(&source2_525, 0, sizeof(char)                *(1024)                );
                snprintf(source2_525,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_523,name_523);
                buffer_append_str(source_518,source2_525);
                name_523 = come_decrement_ref_count2(name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_524, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_521, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_518,"return true;");
        buffer_append_char(source_518,125);
        p_526=info->p;
        sline_527=info->sline;
        sname_528=(char*)come_increment_ref_count(info->sname);
        head_529=info->head;
        source3_530=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj154=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_518);
        come_call_finalizer2(buffer_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_518->buf;
        info->head=source_518->buf;
        __dec_obj155=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value643=__builtin_string(real_fun_name_515))));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value643 = come_decrement_ref_count2(right_value643, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_531=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value644=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value644, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_532=(struct sType*)come_increment_ref_count(((struct sType*)(right_value646=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value645=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1893, "struct sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value645, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_533=(char*)come_increment_ref_count(((char*)(right_value647=string_clone(real_fun_name_515))));
        right_value647 = come_decrement_ref_count2(right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_534=(struct sType*)come_increment_ref_count(((struct sType*)(right_value648=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value648, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_534->mHeap=(_Bool)0;
        right_type_535=(struct sType*)come_increment_ref_count(((struct sType*)(right_value649=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value649, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_535->mHeap=(_Bool)0;
        {__list_values23___536[0]=come_increment_ref_count(left_type_534);
__list_values23___536[1]=come_increment_ref_count(right_type_535);
}        param_types_537=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value651=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value650=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1899, "struct list$1sTypeph")))),2,__list_values23___536))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value650, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value651, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values24___538[0]=come_increment_ref_count(((char*)(right_value652=__builtin_string("left"))));
__list_values24___538[1]=come_increment_ref_count(((char*)(right_value653=__builtin_string("right"))));
}        param_names_539=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value655=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value654=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1900, "struct list$1charph")))),2,__list_values24___538))));
        right_value652 = come_decrement_ref_count2(right_value652, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value653 = come_decrement_ref_count2(right_value653, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value654, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value655, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_540=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value657=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value656=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1901, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value656, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value657, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_540,((void*)0));
        list$1charph_push_back(param_default_parametors_540,((void*)0));
        header_buf_541=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value659=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value658=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1905, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value658, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value659, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_541,((char*)(right_value660=make_come_type_name_string(result_type_532,info))));
        right_value660 = come_decrement_ref_count2(right_value660, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_541," ");
        buffer_append_str(header_buf_541,real_fun_name_515);
        buffer_append_str(header_buf_541,"(");
        for(        i_542=0;        i_542<list$1sTypeph_length(param_types_537);        i_542++        ){
            param_type_543=((struct sType*)(right_value661=list$1sTypephp_operator_load_element(param_types_537,i_542)));
            come_call_finalizer2(sType_finalize,right_value661, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_544=((char*)(right_value662=list$1charphp_operator_load_element(param_names_539,i_542)));
            right_value662 = come_decrement_ref_count2(right_value662, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_541,((char*)(right_value663=make_come_type_name_string(param_type_543,info))));
            right_value663 = come_decrement_ref_count2(right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_541," ");
            buffer_append_str(header_buf_541,param_name_544);
            if(i_542!=list$1sTypeph_length(param_types_537)-1) {
                buffer_append_str(header_buf_541,",");
            }
        }
        buffer_append_str(header_buf_541,")");
        result_type_532->mStatic=(_Bool)0;
        fun_545=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value667=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value664=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1928, "struct sFun")))),(char*)come_increment_ref_count(name_533),(struct sType*)come_increment_ref_count(result_type_532),(struct list$1sTypeph*)come_increment_ref_count(param_types_537),(struct list$1charph*)come_increment_ref_count(param_names_539),(struct list$1charph*)come_increment_ref_count(param_default_parametors_540),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_531),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value665=buffer_to_string(header_buf_541)))),(char*)come_increment_ref_count(((char*)(right_value666=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value665 = come_decrement_ref_count2(right_value665, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value666 = come_decrement_ref_count2(right_value666, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value667, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_546=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value669=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value668=__builtin_string(fun_name)))))));
        right_value668 = come_decrement_ref_count2(right_value668, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value669, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(fun2_546==((void*)0)||fun2_546->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value670=string_clone(name_533)))),(struct sFun*)come_increment_ref_count(fun_545));
            right_value670 = come_decrement_ref_count2(right_value670, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_514=fun_545;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1944, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value672=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value671=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1944, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_545),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sFunNode_sline;
        _inf_value9->sname=(void*)sFunNode_sname;
        _inf_value9->terminated=(void*)sFunNode_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_548=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value676=_inf_value9)));
        come_call_finalizer2(sFunNode_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value676) { right_value676 = come_decrement_ref_count2(right_value676, ((struct sNode*)right_value676)->finalize, ((struct sNode*)right_value676)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_548,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj158=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_530);
        come_call_finalizer2(buffer_finalize,__dec_obj158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_526;
        info->head=head_529;
        info->sline=sline_527;
        __dec_obj159=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_528);
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_518, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_528 = come_decrement_ref_count2(sname_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_530, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_531, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_532, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_533 = come_decrement_ref_count2(name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_534, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_535, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_537, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_539, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_540, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_541, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_545, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_546, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_548) { node_548 = come_decrement_ref_count2(node_548, ((struct sNode*)node_548)->finalize, ((struct sNode*)node_548)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_513;
    __dec_obj160=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_510);
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj161=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_511);
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj162=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_512);
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result203__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value678=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value677=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1964, "struct tuple2$2sFunpcharph")))),equaler_514,(char*)come_increment_ref_count(real_fun_name_515))));
    last_code_510 = come_decrement_ref_count2(last_code_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_511 = come_decrement_ref_count2(last_code2_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_512 = come_decrement_ref_count2(last_code3_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_515 = come_decrement_ref_count2(real_fun_name_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_516, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value677 = come_decrement_ref_count2(right_value677, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value678, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result203__;
    last_code_510 = come_decrement_ref_count2(last_code_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_511 = come_decrement_ref_count2(last_code2_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_512 = come_decrement_ref_count2(last_code3_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_515 = come_decrement_ref_count2(real_fun_name_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_516, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_549;
char* __dec_obj163;
char* last_code2_550;
char* __dec_obj164;
char* last_code3_551;
char* __dec_obj165;
struct sClass* current_stack_frame_struct_552;
struct sFun* equaler_553;
void* right_value679;
char* real_fun_name_554;
void* right_value680;
struct sType* type2_555;
struct sClass* klass_556;
_Bool _if_conditional529;
void* right_value681;
void* right_value682;
struct buffer* source_557;
_Bool _if_conditional530;
char* name_558;
int i_561;
void* right_value683;
struct list$1tuple2$2charphsTypephph* o2_saved_562;
struct tuple2$2charphsTypeph* it_563;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_564;
struct sType* field_type_565;
_Bool _if_conditional531;
_Bool _if_conditional532;
char* p_569;
int sline_570;
char* sname_571;
char* head_572;
struct buffer* source3_573;
struct buffer* __dec_obj166;
void* right_value684;
char* __dec_obj167;
void* right_value685;
struct sBlock* block_574;
void* right_value686;
void* right_value687;
struct sType* result_type_575;
void* right_value688;
char* name_576;
void* right_value689;
struct sType* left_type_577;
void* right_value690;
struct sType* right_type_578;
struct sType* __list_values25___579[2];
void* right_value691;
void* right_value692;
struct list$1sTypeph* param_types_580;
void* right_value693;
void* right_value694;
char* __list_values26___581[2];
void* right_value695;
void* right_value696;
struct list$1charph* param_names_582;
void* right_value697;
void* right_value698;
struct list$1charph* param_default_parametors_583;
void* right_value699;
void* right_value700;
struct buffer* header_buf_584;
void* right_value701;
int i_585;
void* right_value702;
struct sType* param_type_586;
void* right_value703;
char* param_name_587;
void* right_value704;
_Bool _if_conditional533;
void* right_value705;
void* right_value706;
void* right_value707;
void* right_value708;
struct sFun* fun_588;
void* right_value709;
void* right_value710;
struct sFun* fun2_589;
_Bool _if_conditional534;
void* right_value711;
void* right_value712;
void* right_value713;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value717;
struct sNode* node_591;
_Bool _if_conditional541;
struct buffer* __dec_obj170;
char* __dec_obj171;
char* __dec_obj172;
char* __dec_obj173;
char* __dec_obj174;
void* right_value718;
void* right_value719;
struct tuple2$2sFunpcharph* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_549, 0, sizeof(char*));
memset(&last_code2_550, 0, sizeof(char*));
memset(&last_code3_551, 0, sizeof(char*));
memset(&current_stack_frame_struct_552, 0, sizeof(struct sClass*));
memset(&equaler_553, 0, sizeof(struct sFun*));
right_value679 = (void*)0;
memset(&real_fun_name_554, 0, sizeof(char*));
right_value680 = (void*)0;
memset(&type2_555, 0, sizeof(struct sType*));
memset(&klass_556, 0, sizeof(struct sClass*));
right_value681 = (void*)0;
right_value682 = (void*)0;
memset(&source_557, 0, sizeof(struct buffer*));
memset(&name_558, 0, sizeof(char*));
memset(&i_561, 0, sizeof(int));
right_value683 = (void*)0;
memset(&o2_saved_562, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_563, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_564, 0, sizeof(char*));
memset(&field_type_565, 0, sizeof(struct sType*));
memset(&name_564, 0, sizeof(char*));
memset(&field_type_565, 0, sizeof(struct sType*));
memset(&p_569, 0, sizeof(char*));
memset(&sline_570, 0, sizeof(int));
memset(&sname_571, 0, sizeof(char*));
memset(&head_572, 0, sizeof(char*));
memset(&source3_573, 0, sizeof(struct buffer*));
right_value684 = (void*)0;
right_value685 = (void*)0;
memset(&block_574, 0, sizeof(struct sBlock*));
right_value686 = (void*)0;
right_value687 = (void*)0;
memset(&result_type_575, 0, sizeof(struct sType*));
right_value688 = (void*)0;
memset(&name_576, 0, sizeof(char*));
right_value689 = (void*)0;
memset(&left_type_577, 0, sizeof(struct sType*));
right_value690 = (void*)0;
memset(&right_type_578, 0, sizeof(struct sType*));
right_value691 = (void*)0;
right_value692 = (void*)0;
memset(&param_types_580, 0, sizeof(struct list$1sTypeph*));
right_value693 = (void*)0;
right_value694 = (void*)0;
right_value695 = (void*)0;
right_value696 = (void*)0;
memset(&param_names_582, 0, sizeof(struct list$1charph*));
right_value697 = (void*)0;
right_value698 = (void*)0;
memset(&param_default_parametors_583, 0, sizeof(struct list$1charph*));
right_value699 = (void*)0;
right_value700 = (void*)0;
memset(&header_buf_584, 0, sizeof(struct buffer*));
right_value701 = (void*)0;
memset(&i_585, 0, sizeof(int));
right_value702 = (void*)0;
memset(&param_type_586, 0, sizeof(struct sType*));
right_value703 = (void*)0;
memset(&param_name_587, 0, sizeof(char*));
right_value704 = (void*)0;
right_value705 = (void*)0;
right_value706 = (void*)0;
right_value707 = (void*)0;
right_value708 = (void*)0;
memset(&fun_588, 0, sizeof(struct sFun*));
right_value709 = (void*)0;
right_value710 = (void*)0;
memset(&fun2_589, 0, sizeof(struct sFun*));
right_value711 = (void*)0;
right_value712 = (void*)0;
right_value713 = (void*)0;
right_value717 = (void*)0;
memset(&node_591, 0, sizeof(struct sNode*));
right_value718 = (void*)0;
right_value719 = (void*)0;
    last_code_549=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj163=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_550=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj164=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_551=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj165=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_552=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_553=((void*)0);
    real_fun_name_554=(char*)come_increment_ref_count(((char*)(right_value679=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value679 = come_decrement_ref_count2(right_value679, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_555=(struct sType*)come_increment_ref_count(((struct sType*)(right_value680=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value680, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_555;
    klass_556=type->mClass;
    if(type->mPointerNum>0&&!klass_556->mNumber) {
        source_557=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value682=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value681=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1989, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value681, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value682, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_557,123);
        if(klass_556->mProtocol) {
            name_558="_protocol_obj";
            char source2_559[1024];
            memset(&source2_559, 0, sizeof(char)            *(1024)            );
            snprintf(source2_559,1024,"return !left.%s.equals(right.%s);\n",name_558,name_558);
            buffer_append_str(source_557,source2_559);
        }
        else {
            char source2_560[1024];
            memset(&source2_560, 0, sizeof(char)            *(1024)            );
            snprintf(source2_560,1024,"return !(");
            buffer_append_str(source_557,source2_560);
            i_561=0;
            klass_556=((struct sClass*)(right_value683=map$2charphsClassphp_operator_load_element(info->classes,klass_556->mName)));
            come_call_finalizer2(sClass_finalize,right_value683, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_562=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_556->mFields)),it_563=list$1tuple2$2charphsTypephph_begin((o2_saved_562));            !list$1tuple2$2charphsTypephph_end((o2_saved_562));            it_563=list$1tuple2$2charphsTypephph_next((o2_saved_562))            ){
                multiple_assign_var13=it_563;
                name_564=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_565=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(string_operator_equals(type->mClass->mName,field_type_565->mClass->mName)&&type->mPointerNum==field_type_565->mPointerNum&&field_type_565->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_566[1024];
                memset(&source2_566, 0, sizeof(char)                *(1024)                );
                snprintf(source2_566,1024,"left.%s.equals(right.%s)",name_564,name_564);
                buffer_append_str(source_557,source2_566);
                if(i_561==list$1tuple2$2charphsTypephph_length(klass_556->mFields)-1) {
                    char source2_567[1024];
                    memset(&source2_567, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_567,1024,");");
                    buffer_append_str(source_557,source2_567);
                }
                else {
                    char source2_568[1024];
                    memset(&source2_568, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_568,1024," && ");
                    buffer_append_str(source_557,source2_568);
                }
                i_561++;
                name_564 = come_decrement_ref_count2(name_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_565, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_562, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_557,125);
        p_569=info->p;
        sline_570=info->sline;
        sname_571=(char*)come_increment_ref_count(info->sname);
        head_572=info->head;
        source3_573=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj166=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_557);
        come_call_finalizer2(buffer_finalize,__dec_obj166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_557->buf;
        info->head=source_557->buf;
        __dec_obj167=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value684=__builtin_string(real_fun_name_554))));
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_574=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value685=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value685, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_575=(struct sType*)come_increment_ref_count(((struct sType*)(right_value687=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value686=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2052, "struct sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value686, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value687, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_576=(char*)come_increment_ref_count(((char*)(right_value688=string_clone(real_fun_name_554))));
        right_value688 = come_decrement_ref_count2(right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_577=(struct sType*)come_increment_ref_count(((struct sType*)(right_value689=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_577->mHeap=(_Bool)0;
        right_type_578=(struct sType*)come_increment_ref_count(((struct sType*)(right_value690=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value690, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_578->mHeap=(_Bool)0;
        {__list_values25___579[0]=come_increment_ref_count(left_type_577);
__list_values25___579[1]=come_increment_ref_count(right_type_578);
}        param_types_580=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value692=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value691=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2058, "struct list$1sTypeph")))),2,__list_values25___579))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value691, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value692, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values26___581[0]=come_increment_ref_count(((char*)(right_value693=__builtin_string("left"))));
__list_values26___581[1]=come_increment_ref_count(((char*)(right_value694=__builtin_string("right"))));
}        param_names_582=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value696=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value695=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2059, "struct list$1charph")))),2,__list_values26___581))));
        right_value693 = come_decrement_ref_count2(right_value693, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value694 = come_decrement_ref_count2(right_value694, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value695, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_583=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value698=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value697=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2060, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value697, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value698, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_583,((void*)0));
        list$1charph_push_back(param_default_parametors_583,((void*)0));
        header_buf_584=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value700=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value699=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2064, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value700, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_584,((char*)(right_value701=make_come_type_name_string(result_type_575,info))));
        right_value701 = come_decrement_ref_count2(right_value701, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_584," ");
        buffer_append_str(header_buf_584,real_fun_name_554);
        buffer_append_str(header_buf_584,"(");
        for(        i_585=0;        i_585<list$1sTypeph_length(param_types_580);        i_585++        ){
            param_type_586=((struct sType*)(right_value702=list$1sTypephp_operator_load_element(param_types_580,i_585)));
            come_call_finalizer2(sType_finalize,right_value702, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_587=((char*)(right_value703=list$1charphp_operator_load_element(param_names_582,i_585)));
            right_value703 = come_decrement_ref_count2(right_value703, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_584,((char*)(right_value704=make_come_type_name_string(param_type_586,info))));
            right_value704 = come_decrement_ref_count2(right_value704, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_584," ");
            buffer_append_str(header_buf_584,param_name_587);
            if(i_585!=list$1sTypeph_length(param_types_580)-1) {
                buffer_append_str(header_buf_584,",");
            }
        }
        buffer_append_str(header_buf_584,")");
        result_type_575->mStatic=(_Bool)0;
        fun_588=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value708=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value705=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2087, "struct sFun")))),(char*)come_increment_ref_count(name_576),(struct sType*)come_increment_ref_count(result_type_575),(struct list$1sTypeph*)come_increment_ref_count(param_types_580),(struct list$1charph*)come_increment_ref_count(param_names_582),(struct list$1charph*)come_increment_ref_count(param_default_parametors_583),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_574),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value706=buffer_to_string(header_buf_584)))),(char*)come_increment_ref_count(((char*)(right_value707=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value706 = come_decrement_ref_count2(right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value707 = come_decrement_ref_count2(right_value707, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value708, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_589=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value710=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value709=__builtin_string(fun_name)))))));
        right_value709 = come_decrement_ref_count2(right_value709, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value710, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(fun2_589==((void*)0)||fun2_589->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value711=string_clone(name_576)))),(struct sFun*)come_increment_ref_count(fun_588));
            right_value711 = come_decrement_ref_count2(right_value711, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_553=fun_588;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2103, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value713=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value712=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2103, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_588),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sFunNode_sline;
        _inf_value10->sname=(void*)sFunNode_sname;
        _inf_value10->terminated=(void*)sFunNode_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_591=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value717=_inf_value10)));
        come_call_finalizer2(sFunNode_finalize,right_value712, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value717) { right_value717 = come_decrement_ref_count2(right_value717, ((struct sNode*)right_value717)->finalize, ((struct sNode*)right_value717)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_591,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj170=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_573);
        come_call_finalizer2(buffer_finalize,__dec_obj170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_569;
        info->head=head_572;
        info->sline=sline_570;
        __dec_obj171=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_571);
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_557, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_571 = come_decrement_ref_count2(sname_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_573, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_574, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_575, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_576 = come_decrement_ref_count2(name_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_577, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_578, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_580, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_582, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_583, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_584, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_588, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_589, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_591) { node_591 = come_decrement_ref_count2(node_591, ((struct sNode*)node_591)->finalize, ((struct sNode*)node_591)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_552;
    __dec_obj172=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_549);
    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj173=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_550);
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj174=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_551);
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result207__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value719=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value718=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2123, "struct tuple2$2sFunpcharph")))),equaler_553,(char*)come_increment_ref_count(real_fun_name_554))));
    last_code_549 = come_decrement_ref_count2(last_code_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_550 = come_decrement_ref_count2(last_code2_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_551 = come_decrement_ref_count2(last_code3_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_554 = come_decrement_ref_count2(real_fun_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_555, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value718 = come_decrement_ref_count2(right_value718, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value719, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result207__;
    last_code_549 = come_decrement_ref_count2(last_code_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_550 = come_decrement_ref_count2(last_code2_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_551 = come_decrement_ref_count2(last_code3_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_554 = come_decrement_ref_count2(real_fun_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_555, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result204__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result204__ = self->len;
                    return __result204__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_592;
char* __dec_obj175;
char* last_code2_593;
char* __dec_obj176;
char* last_code3_594;
char* __dec_obj177;
struct sClass* current_stack_frame_struct_595;
struct sFun* equaler_596;
void* right_value720;
char* real_fun_name_597;
void* right_value721;
struct sType* type2_598;
struct sClass* klass_599;
_Bool _if_conditional542;
void* right_value722;
void* right_value723;
struct buffer* source_600;
_Bool _if_conditional543;
char* name_601;
void* right_value724;
struct list$1tuple2$2charphsTypephph* o2_saved_603;
struct tuple2$2charphsTypeph* it_604;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_605;
struct sType* field_type_606;
_Bool _if_conditional544;
char* p_608;
int sline_609;
char* sname_610;
char* head_611;
struct buffer* source3_612;
struct buffer* __dec_obj178;
void* right_value725;
char* __dec_obj179;
void* right_value726;
struct sBlock* block_613;
void* right_value727;
void* right_value728;
struct sType* result_type_614;
void* right_value729;
char* name_615;
void* right_value730;
struct sType* left_type_616;
void* right_value731;
struct sType* right_type_617;
struct sType* __list_values27___618[2];
void* right_value732;
void* right_value733;
struct list$1sTypeph* param_types_619;
void* right_value734;
void* right_value735;
char* __list_values28___620[2];
void* right_value736;
void* right_value737;
struct list$1charph* param_names_621;
void* right_value738;
void* right_value739;
struct list$1charph* param_default_parametors_622;
void* right_value740;
void* right_value741;
struct buffer* header_buf_623;
void* right_value742;
int i_624;
void* right_value743;
struct sType* param_type_625;
void* right_value744;
char* param_name_626;
void* right_value745;
_Bool _if_conditional545;
void* right_value746;
void* right_value747;
void* right_value748;
void* right_value749;
struct sFun* fun_627;
void* right_value750;
void* right_value751;
struct sFun* fun2_628;
_Bool _if_conditional546;
void* right_value752;
void* right_value753;
void* right_value754;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value758;
struct sNode* node_630;
_Bool _if_conditional553;
struct buffer* __dec_obj182;
char* __dec_obj183;
char* __dec_obj184;
char* __dec_obj185;
char* __dec_obj186;
void* right_value759;
void* right_value760;
struct tuple2$2sFunpcharph* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_592, 0, sizeof(char*));
memset(&last_code2_593, 0, sizeof(char*));
memset(&last_code3_594, 0, sizeof(char*));
memset(&current_stack_frame_struct_595, 0, sizeof(struct sClass*));
memset(&equaler_596, 0, sizeof(struct sFun*));
right_value720 = (void*)0;
memset(&real_fun_name_597, 0, sizeof(char*));
right_value721 = (void*)0;
memset(&type2_598, 0, sizeof(struct sType*));
memset(&klass_599, 0, sizeof(struct sClass*));
right_value722 = (void*)0;
right_value723 = (void*)0;
memset(&source_600, 0, sizeof(struct buffer*));
memset(&name_601, 0, sizeof(char*));
right_value724 = (void*)0;
memset(&o2_saved_603, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_604, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_605, 0, sizeof(char*));
memset(&field_type_606, 0, sizeof(struct sType*));
memset(&name_605, 0, sizeof(char*));
memset(&field_type_606, 0, sizeof(struct sType*));
memset(&p_608, 0, sizeof(char*));
memset(&sline_609, 0, sizeof(int));
memset(&sname_610, 0, sizeof(char*));
memset(&head_611, 0, sizeof(char*));
memset(&source3_612, 0, sizeof(struct buffer*));
right_value725 = (void*)0;
right_value726 = (void*)0;
memset(&block_613, 0, sizeof(struct sBlock*));
right_value727 = (void*)0;
right_value728 = (void*)0;
memset(&result_type_614, 0, sizeof(struct sType*));
right_value729 = (void*)0;
memset(&name_615, 0, sizeof(char*));
right_value730 = (void*)0;
memset(&left_type_616, 0, sizeof(struct sType*));
right_value731 = (void*)0;
memset(&right_type_617, 0, sizeof(struct sType*));
right_value732 = (void*)0;
right_value733 = (void*)0;
memset(&param_types_619, 0, sizeof(struct list$1sTypeph*));
right_value734 = (void*)0;
right_value735 = (void*)0;
right_value736 = (void*)0;
right_value737 = (void*)0;
memset(&param_names_621, 0, sizeof(struct list$1charph*));
right_value738 = (void*)0;
right_value739 = (void*)0;
memset(&param_default_parametors_622, 0, sizeof(struct list$1charph*));
right_value740 = (void*)0;
right_value741 = (void*)0;
memset(&header_buf_623, 0, sizeof(struct buffer*));
right_value742 = (void*)0;
memset(&i_624, 0, sizeof(int));
right_value743 = (void*)0;
memset(&param_type_625, 0, sizeof(struct sType*));
right_value744 = (void*)0;
memset(&param_name_626, 0, sizeof(char*));
right_value745 = (void*)0;
right_value746 = (void*)0;
right_value747 = (void*)0;
right_value748 = (void*)0;
right_value749 = (void*)0;
memset(&fun_627, 0, sizeof(struct sFun*));
right_value750 = (void*)0;
right_value751 = (void*)0;
memset(&fun2_628, 0, sizeof(struct sFun*));
right_value752 = (void*)0;
right_value753 = (void*)0;
right_value754 = (void*)0;
right_value758 = (void*)0;
memset(&node_630, 0, sizeof(struct sNode*));
right_value759 = (void*)0;
right_value760 = (void*)0;
    last_code_592=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj175=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_593=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj176=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_594=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj177=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_595=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_596=((void*)0);
    real_fun_name_597=(char*)come_increment_ref_count(((char*)(right_value720=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value720 = come_decrement_ref_count2(right_value720, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_598=(struct sType*)come_increment_ref_count(((struct sType*)(right_value721=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value721, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_598;
    klass_599=type->mClass;
    if(type->mPointerNum>0&&!klass_599->mNumber) {
        source_600=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value723=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value722=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2148, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value722, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value723, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_600,123);
        if(klass_599->mProtocol) {
            name_601="_protocol_obj";
            char source2_602[1024];
            memset(&source2_602, 0, sizeof(char)            *(1024)            );
            snprintf(source2_602,1024,"return left.%s.equals(right.%s);\n",name_601,name_601);
            buffer_append_str(source_600,source2_602);
        }
        else {
            klass_599=((struct sClass*)(right_value724=map$2charphsClassphp_operator_load_element(info->classes,klass_599->mName)));
            come_call_finalizer2(sClass_finalize,right_value724, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_603=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_599->mFields)),it_604=list$1tuple2$2charphsTypephph_begin((o2_saved_603));            !list$1tuple2$2charphsTypephph_end((o2_saved_603));            it_604=list$1tuple2$2charphsTypephph_next((o2_saved_603))            ){
                multiple_assign_var14=it_604;
                name_605=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_606=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(string_operator_equals(type->mClass->mName,field_type_606->mClass->mName)&&type->mPointerNum==field_type_606->mPointerNum&&field_type_606->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_607[1024];
                memset(&source2_607, 0, sizeof(char)                *(1024)                );
                snprintf(source2_607,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_605,name_605);
                buffer_append_str(source_600,source2_607);
                name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_606, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_603, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_600,"return true;\n");
        buffer_append_char(source_600,125);
        p_608=info->p;
        sline_609=info->sline;
        sname_610=(char*)come_increment_ref_count(info->sname);
        head_611=info->head;
        source3_612=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj178=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_600);
        come_call_finalizer2(buffer_finalize,__dec_obj178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_600->buf;
        info->head=source_600->buf;
        __dec_obj179=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value725=__builtin_string(real_fun_name_597))));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value725 = come_decrement_ref_count2(right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_613=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value726=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value726, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_614=(struct sType*)come_increment_ref_count(((struct sType*)(right_value728=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value727=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2194, "struct sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value727, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value728, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_615=(char*)come_increment_ref_count(((char*)(right_value729=string_clone(real_fun_name_597))));
        right_value729 = come_decrement_ref_count2(right_value729, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_616=(struct sType*)come_increment_ref_count(((struct sType*)(right_value730=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value730, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_616->mHeap=(_Bool)0;
        right_type_617=(struct sType*)come_increment_ref_count(((struct sType*)(right_value731=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value731, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_617->mHeap=(_Bool)0;
        {__list_values27___618[0]=come_increment_ref_count(left_type_616);
__list_values27___618[1]=come_increment_ref_count(right_type_617);
}        param_types_619=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value733=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value732=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2200, "struct list$1sTypeph")))),2,__list_values27___618))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value732, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value733, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values28___620[0]=come_increment_ref_count(((char*)(right_value734=__builtin_string("left"))));
__list_values28___620[1]=come_increment_ref_count(((char*)(right_value735=__builtin_string("right"))));
}        param_names_621=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value737=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value736=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2201, "struct list$1charph")))),2,__list_values28___620))));
        right_value734 = come_decrement_ref_count2(right_value734, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value735 = come_decrement_ref_count2(right_value735, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value736, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value737, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_622=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value739=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value738=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2202, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value738, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value739, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_622,((void*)0));
        list$1charph_push_back(param_default_parametors_622,((void*)0));
        header_buf_623=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value741=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value740=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2206, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value740, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value741, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_623,((char*)(right_value742=make_come_type_name_string(result_type_614,info))));
        right_value742 = come_decrement_ref_count2(right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_623," ");
        buffer_append_str(header_buf_623,real_fun_name_597);
        buffer_append_str(header_buf_623,"(");
        for(        i_624=0;        i_624<list$1sTypeph_length(param_types_619);        i_624++        ){
            param_type_625=((struct sType*)(right_value743=list$1sTypephp_operator_load_element(param_types_619,i_624)));
            come_call_finalizer2(sType_finalize,right_value743, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_626=((char*)(right_value744=list$1charphp_operator_load_element(param_names_621,i_624)));
            right_value744 = come_decrement_ref_count2(right_value744, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_623,((char*)(right_value745=make_come_type_name_string(param_type_625,info))));
            right_value745 = come_decrement_ref_count2(right_value745, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_623," ");
            buffer_append_str(header_buf_623,param_name_626);
            if(i_624!=list$1sTypeph_length(param_types_619)-1) {
                buffer_append_str(header_buf_623,",");
            }
        }
        buffer_append_str(header_buf_623,")");
        result_type_614->mStatic=(_Bool)0;
        fun_627=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value749=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value746=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2229, "struct sFun")))),(char*)come_increment_ref_count(name_615),(struct sType*)come_increment_ref_count(result_type_614),(struct list$1sTypeph*)come_increment_ref_count(param_types_619),(struct list$1charph*)come_increment_ref_count(param_names_621),(struct list$1charph*)come_increment_ref_count(param_default_parametors_622),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_613),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value747=buffer_to_string(header_buf_623)))),(char*)come_increment_ref_count(((char*)(right_value748=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value746, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value747 = come_decrement_ref_count2(right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value748 = come_decrement_ref_count2(right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value749, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_628=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value751=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value750=__builtin_string(fun_name)))))));
        right_value750 = come_decrement_ref_count2(right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value751, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(fun2_628==((void*)0)||fun2_628->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value752=string_clone(name_615)))),(struct sFun*)come_increment_ref_count(fun_627));
            right_value752 = come_decrement_ref_count2(right_value752, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_596=fun_627;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2245, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value754=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value753=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2245, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_627),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sFunNode_sline;
        _inf_value11->sname=(void*)sFunNode_sname;
        _inf_value11->terminated=(void*)sFunNode_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_630=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value758=_inf_value11)));
        come_call_finalizer2(sFunNode_finalize,right_value753, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value754, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value758) { right_value758 = come_decrement_ref_count2(right_value758, ((struct sNode*)right_value758)->finalize, ((struct sNode*)right_value758)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_630,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj182=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_612);
        come_call_finalizer2(buffer_finalize,__dec_obj182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_608;
        info->head=head_611;
        info->sline=sline_609;
        __dec_obj183=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_610);
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_600, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_610 = come_decrement_ref_count2(sname_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_612, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_613, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_614, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_615 = come_decrement_ref_count2(name_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_616, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_617, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_619, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_621, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_622, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_623, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_627, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_628, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_630) { node_630 = come_decrement_ref_count2(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_595;
    __dec_obj184=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_592);
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj185=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_593);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj186=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_594);
    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result210__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value760=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value759=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2265, "struct tuple2$2sFunpcharph")))),equaler_596,(char*)come_increment_ref_count(real_fun_name_597))));
    last_code_592 = come_decrement_ref_count2(last_code_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_593 = come_decrement_ref_count2(last_code2_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_594 = come_decrement_ref_count2(last_code3_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_597 = come_decrement_ref_count2(real_fun_name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_598, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value759 = come_decrement_ref_count2(right_value759, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value760, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result210__;
    last_code_592 = come_decrement_ref_count2(last_code_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_593 = come_decrement_ref_count2(last_code2_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_594 = come_decrement_ref_count2(last_code3_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_597 = come_decrement_ref_count2(real_fun_name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_598, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_631;
char* __dec_obj187;
char* last_code2_632;
char* __dec_obj188;
char* last_code3_633;
char* __dec_obj189;
struct sClass* current_stack_frame_struct_634;
struct sFun* cloner_635;
void* right_value761;
char* real_fun_name_636;
void* right_value762;
struct sType* type2_637;
struct sClass* klass_638;
_Bool _if_conditional554;
void* right_value763;
void* right_value764;
struct buffer* source_639;
void* right_value765;
void* right_value766;
_Bool _if_conditional555;
char* name_640;
void* right_value767;
struct list$1tuple2$2charphsTypephph* o2_saved_642;
struct tuple2$2charphsTypeph* it_643;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_644;
struct sType* field_type_645;
_Bool _if_conditional556;
_Bool _if_conditional557;
_Bool _if_conditional558;
void* right_value768;
struct list$1tuple2$2charphsTypephph* o2_saved_648;
struct tuple2$2charphsTypeph* it_649;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_650;
struct sType* field_type_651;
_Bool _if_conditional559;
_Bool _if_conditional560;
_Bool _if_conditional561;
void* right_value769;
char* p_655;
int sline_656;
char* sname_657;
struct buffer* source3_658;
char* head_659;
struct buffer* __dec_obj190;
void* right_value770;
char* __dec_obj191;
void* right_value771;
struct sBlock* block_660;
void* right_value772;
struct sType* result_type_661;
void* right_value773;
char* name_662;
void* right_value774;
struct sType* self_type_663;
struct sType* __list_values29___664[1];
void* right_value775;
void* right_value776;
struct list$1sTypeph* param_types_665;
void* right_value777;
char* __list_values30___666[1];
void* right_value778;
void* right_value779;
struct list$1charph* param_names_667;
void* right_value780;
void* right_value781;
struct list$1charph* param_default_parametors_668;
void* right_value782;
void* right_value783;
struct buffer* header_buf_669;
void* right_value784;
int i_670;
void* right_value785;
struct sType* param_type_671;
void* right_value786;
char* param_name_672;
void* right_value787;
_Bool _if_conditional562;
void* right_value788;
void* right_value789;
void* right_value790;
void* right_value791;
struct sFun* fun_673;
void* right_value792;
void* right_value793;
struct sFun* fun2_674;
_Bool _if_conditional563;
void* right_value794;
void* right_value795;
void* right_value796;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value800;
struct sNode* node_676;
_Bool _if_conditional570;
char* __dec_obj194;
struct buffer* __dec_obj195;
char* __dec_obj196;
char* __dec_obj197;
char* __dec_obj198;
void* right_value801;
void* right_value802;
struct tuple2$2sFunpcharph* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_631, 0, sizeof(char*));
memset(&last_code2_632, 0, sizeof(char*));
memset(&last_code3_633, 0, sizeof(char*));
memset(&current_stack_frame_struct_634, 0, sizeof(struct sClass*));
memset(&cloner_635, 0, sizeof(struct sFun*));
right_value761 = (void*)0;
memset(&real_fun_name_636, 0, sizeof(char*));
right_value762 = (void*)0;
memset(&type2_637, 0, sizeof(struct sType*));
memset(&klass_638, 0, sizeof(struct sClass*));
right_value763 = (void*)0;
right_value764 = (void*)0;
memset(&source_639, 0, sizeof(struct buffer*));
right_value765 = (void*)0;
right_value766 = (void*)0;
memset(&name_640, 0, sizeof(char*));
right_value767 = (void*)0;
memset(&o2_saved_642, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_643, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_644, 0, sizeof(char*));
memset(&field_type_645, 0, sizeof(struct sType*));
memset(&name_644, 0, sizeof(char*));
memset(&field_type_645, 0, sizeof(struct sType*));
right_value768 = (void*)0;
memset(&o2_saved_648, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_649, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_650, 0, sizeof(char*));
memset(&field_type_651, 0, sizeof(struct sType*));
memset(&name_650, 0, sizeof(char*));
memset(&field_type_651, 0, sizeof(struct sType*));
right_value769 = (void*)0;
memset(&p_655, 0, sizeof(char*));
memset(&sline_656, 0, sizeof(int));
memset(&sname_657, 0, sizeof(char*));
memset(&source3_658, 0, sizeof(struct buffer*));
memset(&head_659, 0, sizeof(char*));
right_value770 = (void*)0;
right_value771 = (void*)0;
memset(&block_660, 0, sizeof(struct sBlock*));
right_value772 = (void*)0;
memset(&result_type_661, 0, sizeof(struct sType*));
right_value773 = (void*)0;
memset(&name_662, 0, sizeof(char*));
right_value774 = (void*)0;
memset(&self_type_663, 0, sizeof(struct sType*));
right_value775 = (void*)0;
right_value776 = (void*)0;
memset(&param_types_665, 0, sizeof(struct list$1sTypeph*));
right_value777 = (void*)0;
right_value778 = (void*)0;
right_value779 = (void*)0;
memset(&param_names_667, 0, sizeof(struct list$1charph*));
right_value780 = (void*)0;
right_value781 = (void*)0;
memset(&param_default_parametors_668, 0, sizeof(struct list$1charph*));
right_value782 = (void*)0;
right_value783 = (void*)0;
memset(&header_buf_669, 0, sizeof(struct buffer*));
right_value784 = (void*)0;
memset(&i_670, 0, sizeof(int));
right_value785 = (void*)0;
memset(&param_type_671, 0, sizeof(struct sType*));
right_value786 = (void*)0;
memset(&param_name_672, 0, sizeof(char*));
right_value787 = (void*)0;
right_value788 = (void*)0;
right_value789 = (void*)0;
right_value790 = (void*)0;
right_value791 = (void*)0;
memset(&fun_673, 0, sizeof(struct sFun*));
right_value792 = (void*)0;
right_value793 = (void*)0;
memset(&fun2_674, 0, sizeof(struct sFun*));
right_value794 = (void*)0;
right_value795 = (void*)0;
right_value796 = (void*)0;
right_value800 = (void*)0;
memset(&node_676, 0, sizeof(struct sNode*));
right_value801 = (void*)0;
right_value802 = (void*)0;
    last_code_631=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj187=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_632=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj188=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_633=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj189=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_634=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_635=((void*)0);
    real_fun_name_636=(char*)come_increment_ref_count(((char*)(right_value761=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value761 = come_decrement_ref_count2(right_value761, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_637=(struct sType*)come_increment_ref_count(((struct sType*)(right_value762=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value762, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_637;
    klass_638=type->mClass;
    if(type->mPointerNum>0&&!klass_638->mNumber) {
        source_639=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value764=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value763=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2290, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value763, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value764, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(source_639,"{\n");
        buffer_append_str(source_639,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_639,((char*)(right_value766=xsprintf("var result = new %s;\n",((char*)(right_value765=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value765 = come_decrement_ref_count2(right_value765, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value766 = come_decrement_ref_count2(right_value766, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_638->mProtocol) {
            name_640="_protocol_obj";
            char source2_641[1024];
            memset(&source2_641, 0, sizeof(char)            *(1024)            );
            snprintf(source2_641,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_639,source2_641);
            klass_638=((struct sClass*)(right_value767=map$2charphsClassphp_operator_load_element(info->classes,klass_638->mName)));
            come_call_finalizer2(sClass_finalize,right_value767, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_642=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_638->mFields)),it_643=list$1tuple2$2charphsTypephph_begin((o2_saved_642));            !list$1tuple2$2charphsTypephph_end((o2_saved_642));            it_643=list$1tuple2$2charphsTypephph_next((o2_saved_642))            ){
                multiple_assign_var15=it_643;
                name_644=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_645=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(string_operator_equals(type->mClass->mName,field_type_645->mClass->mName)&&type->mPointerNum==field_type_645->mPointerNum&&field_type_645->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(string_operator_equals(name_644,"_protocol_obj")) {
                }
                else {
                    if(list$1sNodeph_length(field_type_645->mArrayNum)>0) {
                        char source2_646[1024];
                        memset(&source2_646, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_646,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_644,name_644,name_644);
                        buffer_append_str(source_639,source2_646);
                    }
                    else {
                        char source2_647[1024];
                        memset(&source2_647, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_647,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_644,name_644);
                        buffer_append_str(source_639,source2_647);
                    }
                }
                name_644 = come_decrement_ref_count2(name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_645, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_642, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_638=((struct sClass*)(right_value768=map$2charphsClassphp_operator_load_element(info->classes,klass_638->mName)));
            come_call_finalizer2(sClass_finalize,right_value768, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_648=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_638->mFields)),it_649=list$1tuple2$2charphsTypephph_begin((o2_saved_648));            !list$1tuple2$2charphsTypephph_end((o2_saved_648));            it_649=list$1tuple2$2charphsTypephph_next((o2_saved_648))            ){
                multiple_assign_var16=it_649;
                name_650=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_651=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(string_operator_equals(type->mClass->mName,field_type_651->mClass->mName)&&type->mPointerNum==field_type_651->mPointerNum&&field_type_651->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_651->mHeap) {
                    char source2_652[1024];
                    memset(&source2_652, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_652,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_650,name_650,name_650);
                    buffer_append_str(source_639,source2_652);
                }
                else {
                    if(list$1sNodeph_length(field_type_651->mArrayNum)>0) {
                        char source2_653[1024];
                        memset(&source2_653, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_653,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_650,name_650,name_650);
                        buffer_append_str(source_639,source2_653);
                    }
                    else {
                        char source2_654[1024];
                        memset(&source2_654, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_654,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_650,name_650);
                        buffer_append_str(source_639,source2_654);
                    }
                }
                name_650 = come_decrement_ref_count2(name_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_651, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_648, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_639,((char*)(right_value769=xsprintf("return result;"))));
        right_value769 = come_decrement_ref_count2(right_value769, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_639,125);
        p_655=info->p;
        sline_656=info->sline;
        sname_657=(char*)come_increment_ref_count(info->sname);
        source3_658=(struct buffer*)come_increment_ref_count(info->source);
        head_659=info->head;
        __dec_obj190=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_639);
        come_call_finalizer2(buffer_finalize,__dec_obj190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj191=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value770=__builtin_string(real_fun_name_636))));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value770 = come_decrement_ref_count2(right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=1;
        block_660=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value771=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value771, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_661=(struct sType*)come_increment_ref_count(((struct sType*)(right_value772=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value772, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_662=(char*)come_increment_ref_count(((char*)(right_value773=string_clone(real_fun_name_636))));
        right_value773 = come_decrement_ref_count2(right_value773, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_663=(struct sType*)come_increment_ref_count(((struct sType*)(right_value774=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value774, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_663->mHeap=(_Bool)0;
        {__list_values29___664[0]=come_increment_ref_count(self_type_663);
}        param_types_665=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value776=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value775=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2384, "struct list$1sTypeph")))),1,__list_values29___664))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value775, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value776, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values30___666[0]=come_increment_ref_count(((char*)(right_value777=__builtin_string("self"))));
}        param_names_667=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value779=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value778=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2385, "struct list$1charph")))),1,__list_values30___666))));
        right_value777 = come_decrement_ref_count2(right_value777, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value778, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value779, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_668=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value781=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value780=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2386, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value780, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value781, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_668,((void*)0));
        header_buf_669=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value783=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value782=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2389, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value782, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value783, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_669,((char*)(right_value784=make_come_type_name_string(result_type_661,info))));
        right_value784 = come_decrement_ref_count2(right_value784, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_669," ");
        buffer_append_str(header_buf_669,real_fun_name_636);
        buffer_append_str(header_buf_669,"(");
        for(        i_670=0;        i_670<list$1sTypeph_length(param_types_665);        i_670++        ){
            param_type_671=((struct sType*)(right_value785=list$1sTypephp_operator_load_element(param_types_665,i_670)));
            come_call_finalizer2(sType_finalize,right_value785, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_672=((char*)(right_value786=list$1charphp_operator_load_element(param_names_667,i_670)));
            right_value786 = come_decrement_ref_count2(right_value786, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_669,((char*)(right_value787=make_come_type_name_string(param_type_671,info))));
            right_value787 = come_decrement_ref_count2(right_value787, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_669," ");
            buffer_append_str(header_buf_669,param_name_672);
            if(i_670!=list$1sTypeph_length(param_types_665)-1) {
                buffer_append_str(header_buf_669,",");
            }
        }
        buffer_append_str(header_buf_669,")");
        result_type_661->mStatic=(_Bool)0;
        fun_673=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value791=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value788=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2412, "struct sFun")))),(char*)come_increment_ref_count(name_662),(struct sType*)come_increment_ref_count(result_type_661),(struct list$1sTypeph*)come_increment_ref_count(param_types_665),(struct list$1charph*)come_increment_ref_count(param_names_667),(struct list$1charph*)come_increment_ref_count(param_default_parametors_668),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_660),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value789=buffer_to_string(header_buf_669)))),(char*)come_increment_ref_count(((char*)(right_value790=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value788, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value789 = come_decrement_ref_count2(right_value789, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value790 = come_decrement_ref_count2(right_value790, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value791, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun_673->mCloner=(_Bool)1;
        fun2_674=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value793=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value792=__builtin_string(fun_name)))))));
        right_value792 = come_decrement_ref_count2(right_value792, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value793, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(fun2_674==((void*)0)||fun2_674->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value794=string_clone(name_662)))),(struct sFun*)come_increment_ref_count(fun_673));
            right_value794 = come_decrement_ref_count2(right_value794, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        cloner_635=fun_673;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2429, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value796=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value795=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2429, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_673),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sFunNode_sline;
        _inf_value12->sname=(void*)sFunNode_sname;
        _inf_value12->terminated=(void*)sFunNode_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_676=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value800=_inf_value12)));
        come_call_finalizer2(sFunNode_finalize,right_value795, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value796, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value800) { right_value800 = come_decrement_ref_count2(right_value800, ((struct sNode*)right_value800)->finalize, ((struct sNode*)right_value800)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(!node_compile(node_676,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj194=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_657);
        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_656;
        __dec_obj195=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_658);
        come_call_finalizer2(buffer_finalize,__dec_obj195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_655;
        info->head=head_659;
        info->sline=sline_656;
        come_call_finalizer2(buffer_finalize,source_639, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_657 = come_decrement_ref_count2(sname_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_658, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_660, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_661, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_662 = come_decrement_ref_count2(name_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_663, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_665, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_667, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_668, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_669, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_673, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_674, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_676) { node_676 = come_decrement_ref_count2(node_676, ((struct sNode*)node_676)->finalize, ((struct sNode*)node_676)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_634;
    __dec_obj196=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_631);
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj197=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_632);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj198=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_633);
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result213__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value802=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value801=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2451, "struct tuple2$2sFunpcharph")))),cloner_635,(char*)come_increment_ref_count(real_fun_name_636))));
    last_code_631 = come_decrement_ref_count2(last_code_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_632 = come_decrement_ref_count2(last_code2_632, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_633 = come_decrement_ref_count2(last_code3_633, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_636 = come_decrement_ref_count2(real_fun_name_636, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_637, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value801 = come_decrement_ref_count2(right_value801, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value802, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result213__;
    last_code_631 = come_decrement_ref_count2(last_code_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_632 = come_decrement_ref_count2(last_code2_632, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_633 = come_decrement_ref_count2(last_code3_633, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_636 = come_decrement_ref_count2(real_fun_name_636, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_637, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFunNode_finalize(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional564;
_Bool _if_conditional565;
memset(&__result_obj__, 0, sizeof(void*));
            if(self!=((void*)0)&&self->mFun!=((void*)0)) {
                come_call_finalizer2(sFun_finalize,self->mFun, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional566;
struct sFunNode* __result211__;
void* right_value797;
struct sFunNode* result_675;
_Bool _if_conditional567;
void* right_value798;
struct sFun* __dec_obj192;
_Bool _if_conditional568;
_Bool _if_conditional569;
void* right_value799;
char* __dec_obj193;
struct sFunNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value797 = (void*)0;
memset(&result_675, 0, sizeof(struct sFunNode*));
right_value798 = (void*)0;
right_value799 = (void*)0;
            if(self==(void*)0) {
                __result211__ = __result_obj__ = (void*)0;
                return __result211__;
            }
            result_675=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value797=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode"))));
            come_call_finalizer2(sFunNode_finalize,right_value797, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(self!=((void*)0)&&self->mFun!=((void*)0)) {
                __dec_obj192=result_675->mFun;
                result_675->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value798=sFun_clone(self->mFun))));
                come_call_finalizer2(sFun_finalize,__dec_obj192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,right_value798, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)) {
                result_675->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj193=result_675->sname;
                result_675->sname=(char*)come_increment_ref_count(((char*)(right_value799=string_clone(self->sname))));
                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value799 = come_decrement_ref_count2(right_value799, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result212__ = __result_obj__ = result_675;
            come_call_finalizer2(sFunNode_finalize,result_675, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result212__;
            come_call_finalizer2(sFunNode_finalize,result_675, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

