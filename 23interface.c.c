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
struct sInterfaceNode
{
    char* name;
    struct sClass* klass;
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

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

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

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
int sInterfaceNode_sline(struct sInterfaceNode* self, struct sInfo* info);

char* sInterfaceNode_sname(struct sInterfaceNode* self, struct sInfo* info);

_Bool sInterfaceNode_terminated();

char* sInterfaceNode_kind();

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct list$1sTypeph* list$1sTypeph_insert(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static void sInterfaceNode_finalize(struct sInterfaceNode* self);
static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1951, "struct smart_pointer$1char"))));
    if(right_value0 && right_value0 != __result_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value1 && right_value1 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    if(result_0) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result2__;
    if(result_0) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1961, "struct smart_pointer$1char"))));
    if(right_value2 && right_value2 != __result_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value3 && right_value3 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    if(result_1) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result3__;
    if(result_1) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1971, "struct smart_pointer$1short"))));
    if(right_value4 && right_value4 != __result_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value5 && right_value5 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    if(result_2) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result4__;
    if(result_2) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1981, "struct smart_pointer$1int"))));
    if(right_value6 && right_value6 != __result_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value7 && right_value7 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    if(result_3) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result5__;
    if(result_3) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1991, "struct smart_pointer$1long"))));
    if(right_value8 && right_value8 != __result_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value9 && right_value9 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    if(result_4) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result6__;
    if(result_4) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
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
            if(self->memory) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
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
            if(self->memory) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
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
            if(self->memory) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
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
            if(self->memory) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
void* right_value62;
struct sClass* __dec_obj39;
void* right_value63;
char* __dec_obj40;
struct sInterfaceNode* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value10 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
    __dec_obj6=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(name))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    if(right_value10 && right_value10 != __result_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __dec_obj39=self->klass;
    self->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value62=sClass_clone(klass))));
    if(__dec_obj39) { come_call_finalizer(sClass_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value62 && right_value62 != __result_obj__) { come_call_finalizer(sClass_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
    self->sline=info->sline;
    __dec_obj40=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value63=__builtin_string(info->sname))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
    if(right_value63 && right_value63 != __result_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
    __result37__ = __result_obj__ = self;
    if(self) { come_call_finalizer(sInterfaceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result37__;
    if(self) { come_call_finalizer(sInterfaceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
struct sClass* __result7__;
void* right_value11;
struct sClass* result_5;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
void* right_value12;
char* __dec_obj7;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value60;
struct list$1tuple2$2charphsTypephph* __dec_obj37;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value61;
char* __dec_obj38;
struct sClass* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct sClass*));
right_value12 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value11=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass"))));
        if(right_value11 && right_value11 != __result_obj__) { come_call_finalizer(sClass_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(_if_conditional28=self!=((void*)0),        _if_conditional28) {
            result_5->mStruct=self->mStruct;
        }
        if(_if_conditional29=self!=((void*)0),        _if_conditional29) {
            result_5->mFloat=self->mFloat;
        }
        if(_if_conditional30=self!=((void*)0),        _if_conditional30) {
            result_5->mUnion=self->mUnion;
        }
        if(_if_conditional31=self!=((void*)0),        _if_conditional31) {
            result_5->mGenerics=self->mGenerics;
        }
        if(_if_conditional32=self!=((void*)0),        _if_conditional32) {
            result_5->mMethodGenerics=self->mMethodGenerics;
        }
        if(_if_conditional33=self!=((void*)0),        _if_conditional33) {
            result_5->mEnum=self->mEnum;
        }
        if(_if_conditional34=self!=((void*)0),        _if_conditional34) {
            result_5->mProtocol=self->mProtocol;
        }
        if(_if_conditional35=self!=((void*)0),        _if_conditional35) {
            result_5->mNumber=self->mNumber;
        }
        if(_if_conditional36=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional36) {
            __dec_obj7=result_5->mName;
            result_5->mName=(char*)come_increment_ref_count(((char*)(right_value12=string_clone(self->mName))));
            if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
            if(right_value12 && right_value12 != __result_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
        }
        if(_if_conditional37=self!=((void*)0),        _if_conditional37) {
            result_5->mGenericsNum=self->mGenericsNum;
        }
        if(_if_conditional38=self!=((void*)0),        _if_conditional38) {
            result_5->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        if(_if_conditional39=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional39) {
            __dec_obj37=result_5->mFields;
            result_5->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value60=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            if(__dec_obj37) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value60 && right_value60 != __result_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        if(_if_conditional122=self!=((void*)0),        _if_conditional122) {
            result_5->mOutputed=self->mOutputed;
        }
        if(_if_conditional123=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional123) {
            __dec_obj38=result_5->mDeclareSName;
            result_5->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(self->mDeclareSName))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
            if(right_value61 && right_value61 != __result_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
        }
        __result36__ = __result_obj__ = result_5;
        if(result_5) { come_call_finalizer(sClass_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result36__;
        if(result_5) { come_call_finalizer(sClass_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional6=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional6) {
                if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional7=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional7) {
                if(self->mFields) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional27=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional27) {
                if(self->mDeclareSName) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_6;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_6, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_6=self->head;
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        if(prev_it_7) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional8=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional8) {
                                if(self->item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional9) {
                                        if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional10=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional10) {
                                        if(self->v2) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional11=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                            _if_conditional11) {
                                                if(self->mNoSolvedGenericsType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
                                            if(_if_conditional13=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                            _if_conditional13) {
                                                if(self->mOriginalLoadVarType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
                                            if(_if_conditional14=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                            _if_conditional14) {
                                                if(self->mGenericsName) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                            }
                                            if(_if_conditional15=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                            _if_conditional15) {
                                                if(self->mGenericsTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
                                            if(_if_conditional17=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                            _if_conditional17) {
                                                if(self->mArrayNum) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
                                            if(_if_conditional19=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                            _if_conditional19) {
                                                if(self->mParamTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
                                            if(_if_conditional20=self!=((void*)0)&&self->mParamNames!=((void*)0),                                            _if_conditional20) {
                                                if(self->mParamNames) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
                                            if(_if_conditional22=self!=((void*)0)&&self->mResultType!=((void*)0),                                            _if_conditional22) {
                                                if(self->mResultType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
                                            if(_if_conditional23=self!=((void*)0)&&self->mAlignas!=((void*)0),                                            _if_conditional23) {
                                                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional24=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                            _if_conditional24) {
                                                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional25=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                            _if_conditional25) {
                                                if(self->mOriginalTypeName) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                            }
                                            if(_if_conditional26=self!=((void*)0)&&self->mAsmName!=((void*)0),                                            _if_conditional26) {
                                                if(self->mAsmName) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    if(_if_conditional12=self!=((void*)0)&&self->v1!=((void*)0),                                                    _if_conditional12) {
                                                        if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_8;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                                                    it_8=self->head;
                                                    while(_while_condtional2=it_8!=((void*)0),                                                    _while_condtional2) {
                                                        prev_it_9=it_8;
                                                        it_8=it_8->next;
                                                        if(prev_it_9) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                                                            _if_conditional16) {
                                                                if(self->item) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_10;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                                                    it_10=self->head;
                                                    while(_while_condtional3=it_10!=((void*)0),                                                    _while_condtional3) {
                                                        prev_it_11=it_10;
                                                        it_10=it_10->next;
                                                        if(prev_it_11) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                                                            _if_conditional18) {
                                                                if(self->item) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_12;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                                                    it_12=self->head;
                                                    while(_while_condtional4=it_12!=((void*)0),                                                    _while_condtional4) {
                                                        prev_it_13=it_12;
                                                        it_12=it_12->next;
                                                        if(prev_it_13) { come_call_finalizer(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                                                            _if_conditional21) {
                                                                if(self->item) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                                            }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional40;
struct list$1tuple2$2charphsTypephph* __result8__;
void* right_value13;
void* right_value14;
struct list$1tuple2$2charphsTypephph* result_14;
struct list_item$1tuple2$2charphsTypephph* it_15;
_Bool _while_condtional5;
void* right_value59;
struct list$1tuple2$2charphsTypephph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value13 = (void*)0;
right_value14 = (void*)0;
memset(&result_14, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_15, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value59 = (void*)0;
                if(_if_conditional40=self==((void*)0),                _if_conditional40) {
                    __result8__ = __result_obj__ = ((void*)0);
                    return __result8__;
                }
                result_14=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value14=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value13=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 141, "struct list$1tuple2$2charphsTypephph"))))))));
                if(right_value13 && right_value13 != __result_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value14 && right_value14 != __result_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                it_15=self->head;
                while(_while_condtional5=it_15!=((void*)0),                _while_condtional5) {
                    list$1tuple2$2charphsTypephph_add(result_14,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value59=tuple2$2charphsTypephp_clone(it_15->item)))));
                    if(right_value59 && right_value59 != __result_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                    it_15=it_15->next;
                }
                __result35__ = __result_obj__ = result_14;
                if(result_14) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result35__;
                if(result_14) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsTypephph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result9__ = __result_obj__ = self;
                    if(self) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result9__;
                    if(self) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional41;
void* right_value15;
struct list_item$1tuple2$2charphsTypephph* litem_16;
struct tuple2$2charphsTypeph* __dec_obj8;
_Bool _if_conditional44;
void* right_value16;
struct list_item$1tuple2$2charphsTypephph* litem_17;
struct tuple2$2charphsTypeph* __dec_obj9;
void* right_value17;
struct list_item$1tuple2$2charphsTypephph* litem_18;
struct tuple2$2charphsTypeph* __dec_obj10;
struct list$1tuple2$2charphsTypephph* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value15 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value16 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value17 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        if(_if_conditional41=self->len==0,                        _if_conditional41) {
                            litem_16=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value15=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 155, "struct list_item$1tuple2$2charphsTypephph"))));
                            if(right_value15 && right_value15 != __result_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                            litem_16->prev=((void*)0);
                            litem_16->next=((void*)0);
                            __dec_obj8=litem_16->item;
                            litem_16->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj8) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_16;
                            self->head=litem_16;
                        }
                        else {
                            if(_if_conditional44=self->len==1,                            _if_conditional44) {
                                litem_17=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value16=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 165, "struct list_item$1tuple2$2charphsTypephph"))));
                                if(right_value16 && right_value16 != __result_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_17->prev=self->head;
                                litem_17->next=((void*)0);
                                __dec_obj9=litem_17->item;
                                litem_17->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj9) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_17;
                                self->head->next=litem_17;
                            }
                            else {
                                litem_18=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value17=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 175, "struct list_item$1tuple2$2charphsTypephph"))));
                                if(right_value17 && right_value17 != __result_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                litem_18->prev=self->tail;
                                litem_18->next=((void*)0);
                                __dec_obj10=litem_18->item;
                                litem_18->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj10) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail->next=litem_18;
                                self->tail=litem_18;
                            }
                        }
                        self->len++;
                        __result10__ = __result_obj__ = self;
                        if(item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result10__;
                        if(item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional42;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional42=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional42) {
                                    if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional43=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional43) {
                                    if(self->v2) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
struct tuple2$2charphsTypeph* __result11__;
void* right_value18;
struct tuple2$2charphsTypeph* result_19;
_Bool _if_conditional46;
void* right_value19;
char* __dec_obj11;
_Bool _if_conditional47;
void* right_value58;
struct sType* __dec_obj36;
struct tuple2$2charphsTypeph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value18 = (void*)0;
memset(&result_19, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value19 = (void*)0;
right_value58 = (void*)0;
                        if(_if_conditional45=self==(void*)0,                        _if_conditional45) {
                            __result11__ = __result_obj__ = (void*)0;
                            return __result11__;
                        }
                        result_19=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value18=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph"))));
                        if(right_value18 && right_value18 != __result_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional46) {
                            __dec_obj11=result_19->v1;
                            result_19->v1=(char*)come_increment_ref_count(((char*)(right_value19=string_clone(self->v1))));
                            if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
                            if(right_value19 && right_value19 != __result_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
                        }
                        if(_if_conditional47=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional47) {
                            __dec_obj36=result_19->v2;
                            result_19->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(self->v2))));
                            if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value58 && right_value58 != __result_obj__) { come_call_finalizer(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                        }
                        __result34__ = __result_obj__ = result_19;
                        if(result_19) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result34__;
                        if(result_19) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
struct sType* __result12__;
void* right_value20;
struct sType* result_20;
_Bool _if_conditional49;
_Bool _if_conditional50;
void* right_value23;
struct tuple1$1sTypeph* __dec_obj13;
_Bool _if_conditional54;
void* right_value26;
struct tuple1$1sTypeph* __dec_obj15;
_Bool _if_conditional57;
void* right_value27;
char* __dec_obj16;
_Bool _if_conditional58;
void* right_value34;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional62;
void* right_value42;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value43;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional77;
void* right_value50;
struct list$1charph* __dec_obj29;
_Bool _if_conditional81;
void* right_value53;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value54;
struct sNode* __dec_obj32;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
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
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value55;
struct sNode* __dec_obj33;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value56;
char* __dec_obj34;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value57;
char* __dec_obj35;
struct sType* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value20 = (void*)0;
memset(&result_20, 0, sizeof(struct sType*));
right_value23 = (void*)0;
right_value26 = (void*)0;
right_value27 = (void*)0;
right_value34 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
right_value50 = (void*)0;
right_value53 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
right_value56 = (void*)0;
right_value57 = (void*)0;
                                if(_if_conditional48=self==(void*)0,                                _if_conditional48) {
                                    __result12__ = __result_obj__ = (void*)0;
                                    return __result12__;
                                }
                                result_20=(struct sType*)come_increment_ref_count(((struct sType*)(right_value20=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                                if(right_value20 && right_value20 != __result_obj__) { come_call_finalizer(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(_if_conditional49=self!=((void*)0),                                _if_conditional49) {
                                    result_20->mClass=self->mClass;
                                }
                                if(_if_conditional50=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional50) {
                                    __dec_obj13=result_20->mNoSolvedGenericsType;
                                    result_20->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value23=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                    if(__dec_obj13) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value23 && right_value23 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                }
                                if(_if_conditional54=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional54) {
                                    __dec_obj15=result_20->mOriginalLoadVarType;
                                    result_20->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value26=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                    if(__dec_obj15) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value26 && right_value26 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                }
                                if(_if_conditional57=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional57) {
                                    __dec_obj16=result_20->mGenericsName;
                                    result_20->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value27=string_clone(self->mGenericsName))));
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value27 && right_value27 != __result_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
                                }
                                if(_if_conditional58=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional58) {
                                    __dec_obj20=result_20->mGenericsTypes;
                                    result_20->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value34=list$1sTypeph_clone(self->mGenericsTypes))));
                                    if(__dec_obj20) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value34 && right_value34 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                                }
                                if(_if_conditional62=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional62) {
                                    __dec_obj24=result_20->mArrayNum;
                                    result_20->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value42=list$1sNodeph_clone(self->mArrayNum))));
                                    if(__dec_obj24) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value42 && right_value42 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                                }
                                if(_if_conditional75=self!=((void*)0),                                _if_conditional75) {
                                    result_20->mOmitArrayNum=self->mOmitArrayNum;
                                }
                                if(_if_conditional76=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional76) {
                                    __dec_obj25=result_20->mParamTypes;
                                    result_20->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value43=list$1sTypeph_clone(self->mParamTypes))));
                                    if(__dec_obj25) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value43 && right_value43 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                                }
                                if(_if_conditional77=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional77) {
                                    __dec_obj29=result_20->mParamNames;
                                    result_20->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value50=list$1charph_clone(self->mParamNames))));
                                    if(__dec_obj29) { come_call_finalizer(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value50 && right_value50 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                                }
                                if(_if_conditional81=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional81) {
                                    __dec_obj31=result_20->mResultType;
                                    result_20->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value53=tuple1$1sTypephp_clone(self->mResultType))));
                                    if(__dec_obj31) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value53 && right_value53 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                                }
                                if(_if_conditional84=self!=((void*)0),                                _if_conditional84) {
                                    result_20->mVarArgs=self->mVarArgs;
                                }
                                if(_if_conditional85=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional85) {
                                    __dec_obj32=result_20->mAlignas;
                                    result_20->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value54=sNode_clone(self->mAlignas))));
                                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0); }
                                    if(right_value54 && right_value54 != __result_obj__) { right_value54 = come_decrement_ref_count(right_value54, ((struct sNode*)right_value54)->finalize, ((struct sNode*)right_value54)->_protocol_obj, 1, 0, 0); } 
                                }
                                if(_if_conditional86=self!=((void*)0),                                _if_conditional86) {
                                    result_20->mUnsigned=self->mUnsigned;
                                }
                                if(_if_conditional87=self!=((void*)0),                                _if_conditional87) {
                                    result_20->mShort=self->mShort;
                                }
                                if(_if_conditional88=self!=((void*)0),                                _if_conditional88) {
                                    result_20->mLong=self->mLong;
                                }
                                if(_if_conditional89=self!=((void*)0),                                _if_conditional89) {
                                    result_20->mLongLong=self->mLongLong;
                                }
                                if(_if_conditional90=self!=((void*)0),                                _if_conditional90) {
                                    result_20->mConstant=self->mConstant;
                                }
                                if(_if_conditional91=self!=((void*)0),                                _if_conditional91) {
                                    result_20->mRegister=self->mRegister;
                                }
                                if(_if_conditional92=self!=((void*)0),                                _if_conditional92) {
                                    result_20->mVolatile=self->mVolatile;
                                }
                                if(_if_conditional93=self!=((void*)0),                                _if_conditional93) {
                                    result_20->mStatic=self->mStatic;
                                }
                                if(_if_conditional94=self!=((void*)0),                                _if_conditional94) {
                                    result_20->mExtern=self->mExtern;
                                }
                                if(_if_conditional95=self!=((void*)0),                                _if_conditional95) {
                                    result_20->mRestrict=self->mRestrict;
                                }
                                if(_if_conditional96=self!=((void*)0),                                _if_conditional96) {
                                    result_20->mImmutable=self->mImmutable;
                                }
                                if(_if_conditional97=self!=((void*)0),                                _if_conditional97) {
                                    result_20->mHeap=self->mHeap;
                                }
                                if(_if_conditional98=self!=((void*)0),                                _if_conditional98) {
                                    result_20->mDummyHeap=self->mDummyHeap;
                                }
                                if(_if_conditional99=self!=((void*)0),                                _if_conditional99) {
                                    result_20->mDelegate=self->mDelegate;
                                }
                                if(_if_conditional100=self!=((void*)0),                                _if_conditional100) {
                                    result_20->mShare=self->mShare;
                                }
                                if(_if_conditional101=self!=((void*)0),                                _if_conditional101) {
                                    result_20->mClone=self->mClone;
                                }
                                if(_if_conditional102=self!=((void*)0),                                _if_conditional102) {
                                    result_20->mNoHeap=self->mNoHeap;
                                }
                                if(_if_conditional103=self!=((void*)0),                                _if_conditional103) {
                                    result_20->mNoCallingDestructor=self->mNoCallingDestructor;
                                }
                                if(_if_conditional104=self!=((void*)0),                                _if_conditional104) {
                                    result_20->mRefference=self->mRefference;
                                }
                                if(_if_conditional105=self!=((void*)0),                                _if_conditional105) {
                                    result_20->mException=self->mException;
                                }
                                if(_if_conditional106=self!=((void*)0),                                _if_conditional106) {
                                    result_20->mPointerNum=self->mPointerNum;
                                }
                                if(_if_conditional107=self!=((void*)0),                                _if_conditional107) {
                                    result_20->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                }
                                if(_if_conditional108=self!=((void*)0),                                _if_conditional108) {
                                    result_20->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                }
                                if(_if_conditional109=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional109) {
                                    __dec_obj33=result_20->mSizeNum;
                                    result_20->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(self->mSizeNum))));
                                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0); }
                                    if(right_value55 && right_value55 != __result_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
                                }
                                if(_if_conditional110=self!=((void*)0),                                _if_conditional110) {
                                    result_20->mDynamicArrayNum=self->mDynamicArrayNum;
                                }
                                if(_if_conditional111=self!=((void*)0),                                _if_conditional111) {
                                    result_20->mTypeOfExpression=self->mTypeOfExpression;
                                }
                                if(_if_conditional112=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional112) {
                                    __dec_obj34=result_20->mOriginalTypeName;
                                    result_20->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value56=string_clone(self->mOriginalTypeName))));
                                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value56 && right_value56 != __result_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                                }
                                if(_if_conditional113=self!=((void*)0),                                _if_conditional113) {
                                    result_20->mOriginalPointerNum=self->mOriginalPointerNum;
                                }
                                if(_if_conditional114=self!=((void*)0),                                _if_conditional114) {
                                    result_20->mFunctionParam=self->mFunctionParam;
                                }
                                if(_if_conditional115=self!=((void*)0),                                _if_conditional115) {
                                    result_20->mAllocaValue=self->mAllocaValue;
                                }
                                if(_if_conditional116=self!=((void*)0),                                _if_conditional116) {
                                    result_20->mGenericsStruct=self->mGenericsStruct;
                                }
                                if(_if_conditional117=self!=((void*)0),                                _if_conditional117) {
                                    result_20->mSolvedGenericsName=self->mSolvedGenericsName;
                                }
                                if(_if_conditional118=self!=((void*)0),                                _if_conditional118) {
                                    result_20->mComeMemCore=self->mComeMemCore;
                                }
                                if(_if_conditional119=self!=((void*)0),                                _if_conditional119) {
                                    result_20->mInline=self->mInline;
                                }
                                if(_if_conditional120=self!=((void*)0),                                _if_conditional120) {
                                    result_20->mNullValue=self->mNullValue;
                                }
                                if(_if_conditional121=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional121) {
                                    __dec_obj35=result_20->mAsmName;
                                    result_20->mAsmName=(char*)come_increment_ref_count(((char*)(right_value57=string_clone(self->mAsmName))));
                                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value57 && right_value57 != __result_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                                }
                                __result33__ = __result_obj__ = result_20;
                                if(result_20) { come_call_finalizer(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result33__;
                                if(result_20) { come_call_finalizer(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional52=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional52) {
                                                if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
struct list$1sTypeph* __result17__;
void* right_value28;
void* right_value29;
struct list$1sTypeph* result_23;
struct list_item$1sTypeph* it_24;
_Bool _while_condtional6;
void* right_value33;
struct list$1sTypeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value28 = (void*)0;
right_value29 = (void*)0;
memset(&result_23, 0, sizeof(struct list$1sTypeph*));
memset(&it_24, 0, sizeof(struct list_item$1sTypeph*));
right_value33 = (void*)0;
                                        if(_if_conditional59=self==((void*)0),                                        _if_conditional59) {
                                            __result17__ = __result_obj__ = ((void*)0);
                                            return __result17__;
                                        }
                                        result_23=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value29=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value28=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                                        if(right_value28 && right_value28 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value29 && right_value29 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        it_24=self->head;
                                        while(_while_condtional6=it_24!=((void*)0),                                        _while_condtional6) {
                                            list$1sTypeph_add(result_23,(struct sType*)come_increment_ref_count(((struct sType*)(right_value33=sType_clone(it_24->item)))));
                                            if(right_value33 && right_value33 != __result_obj__) { come_call_finalizer(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            it_24=it_24->next;
                                        }
                                        __result20__ = __result_obj__ = result_23;
                                        if(result_23) { come_call_finalizer(list$1sTypephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result20__;
                                        if(result_23) { come_call_finalizer(list$1sTypephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            self->head=((void*)0);
                                            self->tail=((void*)0);
                                            self->len=0;
                                            __result18__ = __result_obj__ = self;
                                            if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result18__;
                                            if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
void* right_value30;
struct list_item$1sTypeph* litem_25;
struct sType* __dec_obj17;
_Bool _if_conditional61;
void* right_value31;
struct list_item$1sTypeph* litem_26;
struct sType* __dec_obj18;
void* right_value32;
struct list_item$1sTypeph* litem_27;
struct sType* __dec_obj19;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value30 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1sTypeph*));
right_value31 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sTypeph*));
right_value32 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sTypeph*));
                                                if(_if_conditional60=self->len==0,                                                _if_conditional60) {
                                                    litem_25=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value30=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                                                    if(right_value30 && right_value30 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    litem_25->prev=((void*)0);
                                                    litem_25->next=((void*)0);
                                                    __dec_obj17=litem_25->item;
                                                    litem_25->item=(struct sType*)come_increment_ref_count(item);
                                                    if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    self->tail=litem_25;
                                                    self->head=litem_25;
                                                }
                                                else {
                                                    if(_if_conditional61=self->len==1,                                                    _if_conditional61) {
                                                        litem_26=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value31=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                                        if(right_value31 && right_value31 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        litem_26->prev=self->head;
                                                        litem_26->next=((void*)0);
                                                        __dec_obj18=litem_26->item;
                                                        litem_26->item=(struct sType*)come_increment_ref_count(item);
                                                        if(__dec_obj18) { come_call_finalizer(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        self->tail=litem_26;
                                                        self->head->next=litem_26;
                                                    }
                                                    else {
                                                        litem_27=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value32=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                                        if(right_value32 && right_value32 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        litem_27->prev=self->tail;
                                                        litem_27->next=((void*)0);
                                                        __dec_obj19=litem_27->item;
                                                        litem_27->item=(struct sType*)come_increment_ref_count(item);
                                                        if(__dec_obj19) { come_call_finalizer(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        self->tail->next=litem_27;
                                                        self->tail=litem_27;
                                                    }
                                                }
                                                self->len++;
                                                __result19__ = __result_obj__ = self;
                                                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result19__;
                                                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
struct list$1sNodeph* __result21__;
void* right_value35;
void* right_value36;
struct list$1sNodeph* result_28;
struct list_item$1sNodeph* it_29;
_Bool _while_condtional7;
void* right_value41;
struct list$1sNodeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value35 = (void*)0;
right_value36 = (void*)0;
memset(&result_28, 0, sizeof(struct list$1sNodeph*));
memset(&it_29, 0, sizeof(struct list_item$1sNodeph*));
right_value41 = (void*)0;
                                        if(_if_conditional63=self==((void*)0),                                        _if_conditional63) {
                                            __result21__ = __result_obj__ = ((void*)0);
                                            return __result21__;
                                        }
                                        result_28=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value36=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value35=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                                        if(right_value35 && right_value35 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value36 && right_value36 != __result_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        it_29=self->head;
                                        while(_while_condtional7=it_29!=((void*)0),                                        _while_condtional7) {
                                            list$1sNodeph_add(result_28,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(it_29->item)))));
                                            if(right_value41 && right_value41 != __result_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
                                            it_29=it_29->next;
                                        }
                                        __result26__ = __result_obj__ = result_28;
                                        if(result_28) { come_call_finalizer(list$1sNodephp_finalize,result_28, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result26__;
                                        if(result_28) { come_call_finalizer(list$1sNodephp_finalize,result_28, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            self->head=((void*)0);
                                            self->tail=((void*)0);
                                            self->len=0;
                                            __result22__ = __result_obj__ = self;
                                            if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result22__;
                                            if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional64;
void* right_value37;
struct list_item$1sNodeph* litem_30;
struct sNode* __dec_obj21;
_Bool _if_conditional65;
void* right_value38;
struct list_item$1sNodeph* litem_31;
struct sNode* __dec_obj22;
void* right_value39;
struct list_item$1sNodeph* litem_32;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value37 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1sNodeph*));
right_value38 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1sNodeph*));
right_value39 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1sNodeph*));
                                                if(_if_conditional64=self->len==0,                                                _if_conditional64) {
                                                    litem_30=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value37=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                                                    if(right_value37 && right_value37 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    litem_30->prev=((void*)0);
                                                    litem_30->next=((void*)0);
                                                    __dec_obj21=litem_30->item;
                                                    litem_30->item=(struct sNode*)come_increment_ref_count(item);
                                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                                                    self->tail=litem_30;
                                                    self->head=litem_30;
                                                }
                                                else {
                                                    if(_if_conditional65=self->len==1,                                                    _if_conditional65) {
                                                        litem_31=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value38=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                                        if(right_value38 && right_value38 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        litem_31->prev=self->head;
                                                        litem_31->next=((void*)0);
                                                        __dec_obj22=litem_31->item;
                                                        litem_31->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0); }
                                                        self->tail=litem_31;
                                                        self->head->next=litem_31;
                                                    }
                                                    else {
                                                        litem_32=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value39=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                                        if(right_value39 && right_value39 != __result_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        litem_32->prev=self->tail;
                                                        litem_32->next=((void*)0);
                                                        __dec_obj23=litem_32->item;
                                                        litem_32->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0); }
                                                        self->tail->next=litem_32;
                                                        self->tail=litem_32;
                                                    }
                                                }
                                                self->len++;
                                                __result23__ = __result_obj__ = self;
                                                if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                                return __result23__;
                                                if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
struct sNode* __result24__;
void* right_value40;
struct sNode* result_33;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
struct sNode* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value40 = (void*)0;
memset(&result_33, 0, sizeof(struct sNode*));
                                                if(_if_conditional66=self==(void*)0,                                                _if_conditional66) {
                                                    __result24__ = __result_obj__ = (void*)0;
                                                    return __result24__;
                                                }
                                                result_33=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                                                if(right_value40 && right_value40 != __result_obj__) { right_value40 = come_decrement_ref_count(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0); } 
                                                if(_if_conditional67=self!=((void*)0)&&self->clone!=((void*)0),                                                _if_conditional67) {
                                                    result_33->_protocol_obj=self->clone(self->_protocol_obj);
                                                }
                                                if(_if_conditional68=self!=((void*)0),                                                _if_conditional68) {
                                                    result_33->finalize=self->finalize;
                                                }
                                                if(_if_conditional69=self!=((void*)0),                                                _if_conditional69) {
                                                    result_33->clone=self->clone;
                                                }
                                                if(_if_conditional70=self!=((void*)0),                                                _if_conditional70) {
                                                    result_33->compile=self->compile;
                                                }
                                                if(_if_conditional71=self!=((void*)0),                                                _if_conditional71) {
                                                    result_33->sline=self->sline;
                                                }
                                                if(_if_conditional72=self!=((void*)0),                                                _if_conditional72) {
                                                    result_33->sname=self->sname;
                                                }
                                                if(_if_conditional73=self!=((void*)0),                                                _if_conditional73) {
                                                    result_33->terminated=self->terminated;
                                                }
                                                if(_if_conditional74=self!=((void*)0),                                                _if_conditional74) {
                                                    result_33->kind=self->kind;
                                                }
                                                __result25__ = __result_obj__ = result_33;
                                                if(result_33) { result_33 = come_decrement_ref_count(result_33, ((struct sNode*)result_33)->finalize, ((struct sNode*)result_33)->_protocol_obj, 0, 1, 0); } 
                                                return __result25__;
                                                if(result_33) { result_33 = come_decrement_ref_count(result_33, ((struct sNode*)result_33)->finalize, ((struct sNode*)result_33)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional78;
struct list$1charph* __result27__;
void* right_value44;
void* right_value45;
struct list$1charph* result_34;
struct list_item$1charph* it_35;
_Bool _while_condtional8;
void* right_value49;
struct list$1charph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value44 = (void*)0;
right_value45 = (void*)0;
memset(&result_34, 0, sizeof(struct list$1charph*));
memset(&it_35, 0, sizeof(struct list_item$1charph*));
right_value49 = (void*)0;
                                        if(_if_conditional78=self==((void*)0),                                        _if_conditional78) {
                                            __result27__ = __result_obj__ = ((void*)0);
                                            return __result27__;
                                        }
                                        result_34=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value45=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value44=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                                        if(right_value44 && right_value44 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value45 && right_value45 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        it_35=self->head;
                                        while(_while_condtional8=it_35!=((void*)0),                                        _while_condtional8) {
                                            list$1charph_add(result_34,(char*)come_increment_ref_count(((char*)(right_value49=string_clone(it_35->item)))));
                                            if(right_value49 && right_value49 != __result_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
                                            it_35=it_35->next;
                                        }
                                        __result30__ = __result_obj__ = result_34;
                                        if(result_34) { come_call_finalizer(list$1charphp_finalize,result_34, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result30__;
                                        if(result_34) { come_call_finalizer(list$1charphp_finalize,result_34, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            self->head=((void*)0);
                                            self->tail=((void*)0);
                                            self->len=0;
                                            __result28__ = __result_obj__ = self;
                                            if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result28__;
                                            if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional79;
void* right_value46;
struct list_item$1charph* litem_36;
char* __dec_obj26;
_Bool _if_conditional80;
void* right_value47;
struct list_item$1charph* litem_37;
char* __dec_obj27;
void* right_value48;
struct list_item$1charph* litem_38;
char* __dec_obj28;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value46 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1charph*));
right_value47 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1charph*));
right_value48 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1charph*));
                                                if(_if_conditional79=self->len==0,                                                _if_conditional79) {
                                                    litem_36=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value46=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                                                    if(right_value46 && right_value46 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    litem_36->prev=((void*)0);
                                                    litem_36->next=((void*)0);
                                                    __dec_obj26=litem_36->item;
                                                    litem_36->item=(char*)come_increment_ref_count(item);
                                                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                                                    self->tail=litem_36;
                                                    self->head=litem_36;
                                                }
                                                else {
                                                    if(_if_conditional80=self->len==1,                                                    _if_conditional80) {
                                                        litem_37=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value47=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                                        if(right_value47 && right_value47 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        litem_37->prev=self->head;
                                                        litem_37->next=((void*)0);
                                                        __dec_obj27=litem_37->item;
                                                        litem_37->item=(char*)come_increment_ref_count(item);
                                                        if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                                                        self->tail=litem_37;
                                                        self->head->next=litem_37;
                                                    }
                                                    else {
                                                        litem_38=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                                        if(right_value48 && right_value48 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        litem_38->prev=self->tail;
                                                        litem_38->next=((void*)0);
                                                        __dec_obj28=litem_38->item;
                                                        litem_38->item=(char*)come_increment_ref_count(item);
                                                        if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                                                        self->tail->next=litem_38;
                                                        self->tail=litem_38;
                                                    }
                                                }
                                                self->len++;
                                                __result29__ = __result_obj__ = self;
                                                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                                return __result29__;
                                                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional82;
struct tuple1$1sTypeph* __result31__;
void* right_value51;
struct tuple1$1sTypeph* result_39;
_Bool _if_conditional83;
void* right_value52;
struct sType* __dec_obj30;
struct tuple1$1sTypeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value51 = (void*)0;
memset(&result_39, 0, sizeof(struct tuple1$1sTypeph*));
right_value52 = (void*)0;
                                        if(_if_conditional82=self==(void*)0,                                        _if_conditional82) {
                                            __result31__ = __result_obj__ = (void*)0;
                                            return __result31__;
                                        }
                                        result_39=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value51=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                                        if(right_value51 && right_value51 != __result_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(_if_conditional83=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional83) {
                                            __dec_obj30=result_39->v1;
                                            result_39->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_clone(self->v1))));
                                            if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value52 && right_value52 != __result_obj__) { come_call_finalizer(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        }
                                        __result32__ = __result_obj__ = result_39;
                                        if(result_39) { come_call_finalizer(tuple1$1sTypeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result32__;
                                        if(result_39) { come_call_finalizer(tuple1$1sTypeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int sInterfaceNode_sline(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result38__ = self->sline;
    return __result38__;
}

char* sInterfaceNode_sname(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value64;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value64 = (void*)0;
    __result39__ = __result_obj__ = ((char*)(right_value64=__builtin_string(self->sname)));
    if(right_value64 && right_value64 != __result_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
    return __result39__;
}

_Bool sInterfaceNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result40__ = (_Bool)0;
    return __result40__;
}

char* sInterfaceNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value65;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value65 = (void*)0;
    __result41__ = __result_obj__ = ((char*)(right_value65=__builtin_string("sInterfaceNode")));
    if(right_value65 && right_value65 != __result_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
    return __result41__;
}

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value66;
char* name_40;
struct sClass* klass_41;
void* right_value67;
void* right_value68;
struct buffer* buf_42;
void* right_value69;
struct list$1tuple2$2charphsTypephph* o2_saved_43;
struct tuple2$2charphsTypeph* it_46;
_Bool _for_condtionalA1;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_49;
struct sType* type_50;
void* right_value70;
void* right_value71;
void* right_value80;
void* right_value81;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value66 = (void*)0;
memset(&name_40, 0, sizeof(char*));
memset(&klass_41, 0, sizeof(struct sClass*));
right_value67 = (void*)0;
right_value68 = (void*)0;
memset(&buf_42, 0, sizeof(struct buffer*));
right_value69 = (void*)0;
memset(&o2_saved_43, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_46, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_49, 0, sizeof(char*));
memset(&type_50, 0, sizeof(struct sType*));
memset(&name_49, 0, sizeof(char*));
memset(&type_50, 0, sizeof(struct sType*));
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
    name_40=(char*)come_increment_ref_count(((char*)(right_value66=__builtin_string(self->name))));
    if(right_value66 && right_value66 != __result_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
    klass_41=self->klass;
    klass_41->mProtocol=(_Bool)1;
    buf_42=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value68=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value67=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "23interface.c", 48, "struct buffer"))))))));
    if(right_value67 && right_value67 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value68 && right_value68 != __result_obj__) { come_call_finalizer(buffer_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
    buffer_append_str(buf_42,((char*)(right_value69=xsprintf("struct %s\n{\n",klass_41->mName))));
    if(right_value69 && right_value69 != __result_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
    for(
    o2_saved_43=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_41->mFields)),it_46=list$1tuple2$2charphsTypephph_begin((o2_saved_43)) ,    0;    _for_condtionalA1=    !list$1tuple2$2charphsTypephph_end((o2_saved_43)) ,    _for_condtionalA1;    it_46=list$1tuple2$2charphsTypephph_next((o2_saved_43)) ,    0    ){
        multiple_assign_var1=it_46;
        name_49=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_50=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        buffer_append_str(buf_42,"    ");
        buffer_append_str(buf_42,((char*)(right_value70=make_define_var(type_50,name_49,(_Bool)0,info))));
        if(right_value70 && right_value70 != __result_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
        buffer_append_str(buf_42,";\n");
        if(name_49) { name_49 = come_decrement_ref_count(name_49, (void*)0, (void*)0, 0, 0, 0); }
        if(type_50) { come_call_finalizer(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_43) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_43, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(buf_42,"};\n");
    add_come_code_at_source_head(info,"%s",((char*)(right_value71=buffer_to_string(buf_42))));
    if(right_value71 && right_value71 != __result_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(name_40)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value81=sClass_clone(klass_41)))));
    if(right_value80 && right_value80 != __result_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value81 && right_value81 != __result_obj__) { come_call_finalizer(sClass_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
    __result73__ = (_Bool)1;
    if(name_40) { name_40 = come_decrement_ref_count(name_40, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_42) { come_call_finalizer(buffer_finalize,buf_42, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result73__;
    if(name_40) { name_40 = come_decrement_ref_count(name_40, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_42) { come_call_finalizer(buffer_finalize,buf_42, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
struct tuple2$2charphsTypeph* result_44;
struct tuple2$2charphsTypeph* __result42__;
_Bool _if_conditional128;
struct tuple2$2charphsTypeph* __result43__;
struct tuple2$2charphsTypeph* result_45;
struct tuple2$2charphsTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_44, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_45, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional127=self==((void*)0),        _if_conditional127) {
            memset(&result_44,0,sizeof(struct tuple2$2charphsTypeph*));
            __result42__ = __result_obj__ = result_44;
            return __result42__;
        }
        self->it=self->head;
        if(_if_conditional128=self->it,        _if_conditional128) {
            __result43__ = __result_obj__ = self->it->item;
            return __result43__;
        }
        memset(&result_45,0,sizeof(struct tuple2$2charphsTypeph*));
        __result44__ = __result_obj__ = result_45;
        return __result44__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result45__ = self==((void*)0)||self->it==((void*)0);
        return __result45__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional129;
struct tuple2$2charphsTypeph* result_47;
struct tuple2$2charphsTypeph* __result46__;
_Bool _if_conditional130;
struct tuple2$2charphsTypeph* __result47__;
struct tuple2$2charphsTypeph* result_48;
struct tuple2$2charphsTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_47, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_48, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional129=self==((void*)0)||self->it==((void*)0),        _if_conditional129) {
            memset(&result_47,0,sizeof(struct tuple2$2charphsTypeph*));
            __result46__ = __result_obj__ = result_47;
            return __result46__;
        }
        self->it=self->it->next;
        if(_if_conditional130=self->it,        _if_conditional130) {
            __result47__ = __result_obj__ = self->it->item;
            return __result47__;
        }
        memset(&result_48,0,sizeof(struct tuple2$2charphsTypeph*));
        __result48__ = __result_obj__ = result_48;
        return __result48__;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
unsigned int hash_68;
unsigned int it_69;
_Bool _while_condtional11;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool same_key_exist_86;
char* it2_89;
_Bool _for_condtionalA3;
_Bool _if_conditional174;
_Bool _if_conditional175;
struct map$2charphsClassph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_68, 0, sizeof(unsigned int));
memset(&it_69, 0, sizeof(unsigned int));
memset(&same_key_exist_86, 0, sizeof(_Bool));
memset(&it2_89, 0, sizeof(char*));
        if(_if_conditional131=self->len*10>=self->size,        _if_conditional131) {
            map$2charphsClassph_rehash(self);
        }
        hash_68=string_get_hash_key(key)%self->size;
        it_69=hash_68;
        while(_while_condtional11=(_Bool)1,        _while_condtional11) {
            if(_if_conditional143=self->item_existance[it_69],            _if_conditional143) {
                if(_if_conditional144=string_equals(self->keys[it_69],key),                _if_conditional144) {
                    if(_if_conditional145=1,                    _if_conditional145) {
                        list$1charp_remove(self->key_list,self->keys[it_69]);
                        if(self->keys[it_69]) { self->keys[it_69] = come_decrement_ref_count(self->keys[it_69], (void*)0, (void*)0, 0, 0, 0); }
                        self->keys[it_69]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_69]);
                        self->keys[it_69]=key;
                    }
                    if(_if_conditional165=1,                    _if_conditional165) {
                        if(self->items[it_69]) { come_call_finalizer(sClass_finalize,self->items[it_69], (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->items[it_69]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_69]=item;
                    }
                    break;
                }
                it_69++;
                if(_if_conditional166=it_69>=self->size,                _if_conditional166) {
                    it_69=0;
                }
                else {
                    if(_if_conditional167=it_69==hash_68,                    _if_conditional167) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_69]=(_Bool)1;
                if(_if_conditional168=1,                _if_conditional168) {
                    self->keys[it_69]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_69]=key;
                }
                if(_if_conditional169=1,                _if_conditional169) {
                    self->items[it_69]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_69]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_86=(_Bool)0;
        for(
        it2_89=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA3=        !list$1charp_end(self->key_list) ,        _for_condtionalA3;        it2_89=list$1charp_next(self->key_list) ,        0        ){
            if(_if_conditional174=string_equals(it2_89,key),            _if_conditional174) {
                same_key_exist_86=(_Bool)1;
            }
        }
        if(_if_conditional175=!same_key_exist_86,        _if_conditional175) {
            list$1charp_push_back(self->key_list,key);
        }
        __result72__ = __result_obj__ = self;
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result72__;
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_51;
void* right_value72;
char** keys_52;
void* right_value73;
struct sClass** items_53;
void* right_value74;
_Bool* item_existance_54;
int len_55;
char* it_58;
_Bool _for_condtionalA2;
struct sClass* default_value_61;
void* right_value75;
struct sClass* it2_64;
unsigned int hash_65;
int n_66;
_Bool _while_condtional10;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct sClass* default_value_67;
void* right_value76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_51, 0, sizeof(int));
right_value72 = (void*)0;
memset(&keys_52, 0, sizeof(char**));
right_value73 = (void*)0;
memset(&items_53, 0, sizeof(struct sClass**));
right_value74 = (void*)0;
memset(&item_existance_54, 0, sizeof(_Bool*));
memset(&len_55, 0, sizeof(int));
memset(&it_58, 0, sizeof(char*));
memset(&default_value_61, 0, sizeof(struct sClass*));
right_value75 = (void*)0;
memset(&it2_64, 0, sizeof(struct sClass*));
memset(&hash_65, 0, sizeof(unsigned int));
memset(&n_66, 0, sizeof(int));
memset(&default_value_67, 0, sizeof(struct sClass*));
right_value76 = (void*)0;
                size_51=self->size*10;
                keys_52=(char**)come_increment_ref_count(((char**)(right_value72=(char**)come_calloc(1, sizeof(char*)*(1*(size_51)), "./comelang2.h", 1331, "char*"))));
                if(right_value72 && right_value72 != __result_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
                items_53=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value73=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_51)), "./comelang2.h", 1332, "struct sClass*"))));
                if(right_value73 && right_value73 != __result_obj__) { come_call_finalizer(sClass_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                item_existance_54=(_Bool*)come_increment_ref_count(((_Bool*)(right_value74=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_51)), "./comelang2.h", 1333, "_Bool"))));
                if(right_value74 && right_value74 != __result_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
                len_55=0;
                for(
                it_58=map$2charphsClassph_begin(self) ,                0;                _for_condtionalA2=                !map$2charphsClassph_end(self) ,                _for_condtionalA2;                it_58=map$2charphsClassph_next(self) ,                0                ){
                    memset(&default_value_61,0,sizeof(struct sClass*));
                    it2_64=((struct sClass*)(right_value75=map$2charphsClassph_at(self,it_58,default_value_61)));
                    if(right_value75 && right_value75 != __result_obj__) { come_call_finalizer(sClass_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                    hash_65=string_get_hash_key(it_58)%size_51;
                    n_66=hash_65;
                    while(_while_condtional10=(_Bool)1,                    _while_condtional10) {
                        if(_if_conditional140=item_existance_54[n_66],                        _if_conditional140) {
                            n_66++;
                            if(_if_conditional141=n_66>=size_51,                            _if_conditional141) {
                                n_66=0;
                            }
                            else {
                                if(_if_conditional142=n_66==hash_65,                                _if_conditional142) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_54[n_66]=(_Bool)1;
                            keys_52[n_66]=it_58;
                            items_53[n_66]=((struct sClass*)(right_value76=map$2charphsClassph_at(self,it_58,default_value_67)));
                            if(right_value76 && right_value76 != __result_obj__) { come_call_finalizer(sClass_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                            len_55++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                come_free((char*)self->keys);
                self->keys=keys_52;
                self->items=items_53;
                self->item_existance=item_existance_54;
                self->size=size_51;
                self->len=len_55;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
char* result_56;
char* __result49__;
_Bool _if_conditional133;
char* __result50__;
char* result_57;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_56, 0, sizeof(char*));
memset(&result_57, 0, sizeof(char*));
                    if(_if_conditional132=self==((void*)0),                    _if_conditional132) {
                        memset(&result_56,0,sizeof(char*));
                        __result49__ = __result_obj__ = result_56;
                        return __result49__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(_if_conditional133=self->key_list->it,                    _if_conditional133) {
                        __result50__ = __result_obj__ = self->key_list->it->item;
                        return __result50__;
                    }
                    memset(&result_57,0,sizeof(char*));
                    __result51__ = __result_obj__ = result_57;
                    return __result51__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result52__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result52__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
char* result_59;
char* __result53__;
_Bool _if_conditional135;
char* __result54__;
char* result_60;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_59, 0, sizeof(char*));
memset(&result_60, 0, sizeof(char*));
                    if(_if_conditional134=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional134) {
                        memset(&result_59,0,sizeof(char*));
                        __result53__ = __result_obj__ = result_59;
                        return __result53__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(_if_conditional135=self->key_list->it,                    _if_conditional135) {
                        __result54__ = __result_obj__ = self->key_list->it->item;
                        return __result54__;
                    }
                    memset(&result_60,0,sizeof(char*));
                    __result55__ = __result_obj__ = result_60;
                    return __result55__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_62;
unsigned int it_63;
_Bool _while_condtional9;
_Bool _if_conditional136;
_Bool _if_conditional137;
struct sClass* __result56__;
_Bool _if_conditional138;
_Bool _if_conditional139;
struct sClass* __result57__;
struct sClass* __result58__;
struct sClass* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_62, 0, sizeof(unsigned int));
memset(&it_63, 0, sizeof(unsigned int));
                        hash_62=string_get_hash_key(((char*)key))%self->size;
                        it_63=hash_62;
                        while(_while_condtional9=(_Bool)1,                        _while_condtional9) {
                            if(_if_conditional136=self->item_existance[it_63],                            _if_conditional136) {
                                if(_if_conditional137=string_equals(self->keys[it_63],key),                                _if_conditional137) {
                                    __result56__ = __result_obj__ = self->items[it_63];
                                    if(default_value) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result56__;
                                }
                                it_63++;
                                if(_if_conditional138=it_63>=self->size,                                _if_conditional138) {
                                    it_63=0;
                                }
                                else {
                                    if(_if_conditional139=it_63==hash_62,                                    _if_conditional139) {
                                        __result57__ = __result_obj__ = default_value;
                                        if(default_value) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result57__;
                                    }
                                }
                            }
                            else {
                                __result58__ = __result_obj__ = default_value;
                                if(default_value) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result58__;
                            }
                        }
                        __result59__ = __result_obj__ = default_value;
                        if(default_value) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result59__;
                        if(default_value) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_70;
struct list_item$1charp* it_71;
_Bool _while_condtional12;
_Bool _if_conditional146;
struct list$1charp* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_70, 0, sizeof(int));
memset(&it_71, 0, sizeof(struct list_item$1charp*));
                            it2_70=0;
                            it_71=self->head;
                            while(_while_condtional12=it_71!=((void*)0),                            _while_condtional12) {
                                if(_if_conditional146=string_equals(it_71->item,item),                                _if_conditional146) {
                                    list$1charp_delete(self,it2_70,it2_70+1);
                                    break;
                                }
                                it2_70++;
                                it_71=it_71->next;
                            }
                            __result63__ = __result_obj__ = self;
                            return __result63__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
int tmp_72;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct list$1charp* __result60__;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list_item$1charp* it_75;
int i_76;
_Bool _while_condtional14;
_Bool _if_conditional155;
struct list_item$1charp* prev_it_77;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct list_item$1charp* it_78;
int i_79;
_Bool _while_condtional15;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list_item$1charp* prev_it_80;
struct list_item$1charp* it_81;
struct list_item$1charp* head_prev_it_82;
struct list_item$1charp* tail_it_83;
int i_84;
_Bool _while_condtional16;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct list_item$1charp* prev_it_85;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct list$1charp* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_72, 0, sizeof(int));
memset(&it_75, 0, sizeof(struct list_item$1charp*));
memset(&i_76, 0, sizeof(int));
memset(&prev_it_77, 0, sizeof(struct list_item$1charp*));
memset(&it_78, 0, sizeof(struct list_item$1charp*));
memset(&i_79, 0, sizeof(int));
memset(&prev_it_80, 0, sizeof(struct list_item$1charp*));
memset(&it_81, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_82, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_83, 0, sizeof(struct list_item$1charp*));
memset(&i_84, 0, sizeof(int));
memset(&prev_it_85, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional147=head<0,                                        _if_conditional147) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional148=tail<0,                                        _if_conditional148) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional149=head>tail,                                        _if_conditional149) {
                                            tmp_72=tail;
                                            tail=head;
                                            head=tmp_72;
                                        }
                                        if(_if_conditional150=head<0,                                        _if_conditional150) {
                                            head=0;
                                        }
                                        if(_if_conditional151=tail>self->len,                                        _if_conditional151) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional152=head==tail,                                        _if_conditional152) {
                                            __result60__ = __result_obj__ = self;
                                            return __result60__;
                                        }
                                        if(_if_conditional153=head==0&&tail==self->len,                                        _if_conditional153) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional154=head==0,                                            _if_conditional154) {
                                                it_75=self->head;
                                                i_76=0;
                                                while(_while_condtional14=it_75!=((void*)0),                                                _while_condtional14) {
                                                    if(_if_conditional155=i_76<tail,                                                    _if_conditional155) {
                                                        prev_it_77=it_75;
                                                        it_75=it_75->next;
                                                        i_76++;
                                                        if(prev_it_77) { come_call_finalizer(list_item$1charpp_finalize,prev_it_77, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional156=i_76==tail,                                                        _if_conditional156) {
                                                            self->head=it_75;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_75=it_75->next;
                                                            i_76++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional157=tail==self->len,                                                _if_conditional157) {
                                                    it_78=self->head;
                                                    i_79=0;
                                                    while(_while_condtional15=it_78!=((void*)0),                                                    _while_condtional15) {
                                                        if(_if_conditional158=i_79==head,                                                        _if_conditional158) {
                                                            self->tail=it_78->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional159=i_79>=head,                                                        _if_conditional159) {
                                                            prev_it_80=it_78;
                                                            it_78=it_78->next;
                                                            i_79++;
                                                            if(prev_it_80) { come_call_finalizer(list_item$1charpp_finalize,prev_it_80, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_78=it_78->next;
                                                            i_79++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_81=self->head;
                                                    head_prev_it_82=((void*)0);
                                                    tail_it_83=((void*)0);
                                                    i_84=0;
                                                    while(_while_condtional16=it_81!=((void*)0),                                                    _while_condtional16) {
                                                        if(_if_conditional160=i_84==head,                                                        _if_conditional160) {
                                                            head_prev_it_82=it_81->prev;
                                                        }
                                                        if(_if_conditional161=i_84==tail,                                                        _if_conditional161) {
                                                            tail_it_83=it_81;
                                                        }
                                                        if(_if_conditional162=i_84>=head&&i_84<tail,                                                        _if_conditional162) {
                                                            prev_it_85=it_81;
                                                            it_81=it_81->next;
                                                            i_84++;
                                                            if(prev_it_85) { come_call_finalizer(list_item$1charpp_finalize,prev_it_85, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_81=it_81->next;
                                                            i_84++;
                                                        }
                                                    }
                                                    if(_if_conditional163=head_prev_it_82!=((void*)0),                                                    _if_conditional163) {
                                                        head_prev_it_82->next=tail_it_83;
                                                    }
                                                    if(_if_conditional164=tail_it_83!=((void*)0),                                                    _if_conditional164) {
                                                        tail_it_83->prev=head_prev_it_82;
                                                    }
                                                }
                                            }
                                        }
                                        __result62__ = __result_obj__ = self;
                                        return __result62__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_73;
_Bool _while_condtional13;
struct list_item$1charp* prev_it_74;
struct list$1charp* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_73, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_74, 0, sizeof(struct list_item$1charp*));
                                                it_73=self->head;
                                                while(_while_condtional13=it_73!=((void*)0),                                                _while_condtional13) {
                                                    prev_it_74=it_73;
                                                    it_73=it_73->next;
                                                    if(prev_it_74) { come_call_finalizer(list_item$1charpp_finalize,prev_it_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result61__ = __result_obj__ = self;
                                                return __result61__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
char* result_87;
char* __result64__;
_Bool _if_conditional171;
char* __result65__;
char* result_88;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_87, 0, sizeof(char*));
memset(&result_88, 0, sizeof(char*));
            if(_if_conditional170=self==((void*)0),            _if_conditional170) {
                memset(&result_87,0,sizeof(char*));
                __result64__ = __result_obj__ = result_87;
                return __result64__;
            }
            self->it=self->head;
            if(_if_conditional171=self->it,            _if_conditional171) {
                __result65__ = __result_obj__ = self->it->item;
                return __result65__;
            }
            memset(&result_88,0,sizeof(char*));
            __result66__ = __result_obj__ = result_88;
            return __result66__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result67__ = self==((void*)0)||self->it==((void*)0);
            return __result67__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional172;
char* result_90;
char* __result68__;
_Bool _if_conditional173;
char* __result69__;
char* result_91;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_90, 0, sizeof(char*));
memset(&result_91, 0, sizeof(char*));
            if(_if_conditional172=self==((void*)0)||self->it==((void*)0),            _if_conditional172) {
                memset(&result_90,0,sizeof(char*));
                __result68__ = __result_obj__ = result_90;
                return __result68__;
            }
            self->it=self->it->next;
            if(_if_conditional173=self->it,            _if_conditional173) {
                __result69__ = __result_obj__ = self->it->item;
                return __result69__;
            }
            memset(&result_91,0,sizeof(char*));
            __result70__ = __result_obj__ = result_91;
            return __result70__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional176;
void* right_value77;
struct list_item$1charp* litem_92;
_Bool _if_conditional177;
void* right_value78;
struct list_item$1charp* litem_93;
void* right_value79;
struct list_item$1charp* litem_94;
struct list$1charp* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value77 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1charp*));
right_value78 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1charp*));
right_value79 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional176=self->len==0,                _if_conditional176) {
                    litem_92=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value77=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 225, "struct list_item$1charp"))));
                    if(right_value77 && right_value77 != __result_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_92->prev=((void*)0);
                    litem_92->next=((void*)0);
                    litem_92->item=item;
                    self->tail=litem_92;
                    self->head=litem_92;
                }
                else {
                    if(_if_conditional177=self->len==1,                    _if_conditional177) {
                        litem_93=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value78=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 235, "struct list_item$1charp"))));
                        if(right_value78 && right_value78 != __result_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_93->prev=self->head;
                        litem_93->next=((void*)0);
                        litem_93->item=item;
                        self->tail=litem_93;
                        self->head->next=litem_93;
                    }
                    else {
                        litem_94=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value79=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 245, "struct list_item$1charp"))));
                        if(right_value79 && right_value79 != __result_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_94->prev=self->tail;
                        litem_94->next=((void*)0);
                        litem_94->item=item;
                        self->tail->next=litem_94;
                        self->tail=litem_94;
                    }
                }
                self->len++;
                __result71__ = __result_obj__ = self;
                return __result71__;
}

struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value82;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_95;
char* var_name_96;
_Bool err_97;
_Bool _if_conditional180;
void* right_value83;
char* fun_name_98;
void* right_value84;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_99;
struct list$1charph* param_names_100;
struct list$1charph* param_default_parametors_101;
_Bool var_args_102;
void* right_value91;
void* right_value92;
void* right_value99;
void* right_value100;
void* right_value101;
struct sType* type_119;
void* right_value105;
struct list$1sTypeph* __dec_obj53;
void* right_value109;
struct list$1charph* __dec_obj54;
void* right_value110;
void* right_value111;
void* right_value112;
struct tuple1$1sTypeph* __dec_obj56;
void* right_value113;
void* right_value114;
struct tuple2$2sTypephcharph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value82 = (void*)0;
memset(&result_type_95, 0, sizeof(struct sType*));
memset(&var_name_96, 0, sizeof(char*));
memset(&err_97, 0, sizeof(_Bool));
memset(&result_type_95, 0, sizeof(struct sType*));
memset(&var_name_96, 0, sizeof(char*));
memset(&err_97, 0, sizeof(_Bool));
right_value83 = (void*)0;
memset(&fun_name_98, 0, sizeof(char*));
right_value84 = (void*)0;
memset(&param_types_99, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_100, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_101, 0, sizeof(struct list$1charph*));
memset(&var_args_102, 0, sizeof(_Bool));
memset(&param_types_99, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_100, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_101, 0, sizeof(struct list$1charph*));
memset(&var_args_102, 0, sizeof(_Bool));
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&type_119, 0, sizeof(struct sType*));
right_value105 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value82=parse_type(info,(_Bool)0,(_Bool)1)));
    result_type_95=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    var_name_96=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_97=multiple_assign_var2->v3;
    if(right_value82 && right_value82 != __result_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(_if_conditional180=!err_97,    _if_conditional180) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    fun_name_98=(char*)come_increment_ref_count(((char*)(right_value83=parse_word(info))));
    if(right_value83 && right_value83 != __result_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value84=parse_params(info)));
    param_types_99=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
    param_names_100=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
    param_default_parametors_101=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
    var_args_102=multiple_assign_var3->v4;
    if(right_value84 && right_value84 != __result_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    list$1sTypeph_insert(param_types_99,0,(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value91=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 82, "struct sType")))),"void*",(_Bool)0,info)))));
    if(right_value91 && right_value91 != __result_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value92 && right_value92 != __result_obj__) { come_call_finalizer(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
    list$1charph_insert(param_names_100,0,(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string("self")))));
    if(right_value99 && right_value99 != __result_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    type_119=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 85, "struct sType")))),"lambda",(_Bool)0,info))));
    if(right_value100 && right_value100 != __result_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value101 && right_value101 != __result_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj53=type_119->mParamTypes;
    type_119->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypephp_clone(param_types_99))));
    if(__dec_obj53) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value105 && right_value105 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    __dec_obj54=type_119->mParamNames;
    type_119->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=list$1charphp_clone(param_names_100))));
    if(__dec_obj54) { come_call_finalizer(list$1charph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value109 && right_value109 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    type_119->mVarArgs=var_args_102;
    __dec_obj56=type_119->mResultType;
    type_119->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value112=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 90, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_clone(result_type_95))))))));
    if(__dec_obj56) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value110 && right_value110 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value111 && right_value111 != __result_obj__) { come_call_finalizer(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value112 && right_value112 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __result86__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value114=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value113=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "23interface.c", 92, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type_119),(char*)come_increment_ref_count(fun_name_98))));
    if(result_type_95) { come_call_finalizer(sType_finalize,result_type_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_96) { var_name_96 = come_decrement_ref_count(var_name_96, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name_98) { fun_name_98 = come_decrement_ref_count(fun_name_98, (void*)0, (void*)0, 0, 0, 0); }
    if(param_types_99) { come_call_finalizer(list$1sTypephp_finalize,param_types_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_100) { come_call_finalizer(list$1charphp_finalize,param_names_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_101) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_119) { come_call_finalizer(sType_finalize,type_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value113 && right_value113 != __result_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value114 && right_value114 != __result_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
    return __result86__;
    if(result_type_95) { come_call_finalizer(sType_finalize,result_type_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_96) { var_name_96 = come_decrement_ref_count(var_name_96, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name_98) { fun_name_98 = come_decrement_ref_count(fun_name_98, (void*)0, (void*)0, 0, 0, 0); }
    if(param_types_99) { come_call_finalizer(list$1sTypephp_finalize,param_types_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_100) { come_call_finalizer(list$1charphp_finalize,param_names_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_101) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_119) { come_call_finalizer(sType_finalize,type_119, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional178;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional178=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional178) {
            if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional179=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional179) {
            if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional181=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional181) {
            if(self->v1) { come_call_finalizer(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional182=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional182) {
            if(self->v2) { come_call_finalizer(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional183=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional183) {
            if(self->v3) { come_call_finalizer(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static struct list$1sTypeph* list$1sTypeph_insert(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
struct list$1sTypeph* __result75__;
_Bool _if_conditional189;
void* right_value88;
struct list_item$1sTypeph* litem_106;
struct sType* __dec_obj44;
_Bool _if_conditional190;
void* right_value89;
struct list_item$1sTypeph* litem_107;
struct sType* __dec_obj45;
struct list_item$1sTypeph* it_108;
int i_109;
_Bool _while_condtional17;
_Bool _if_conditional191;
void* right_value90;
struct list_item$1sTypeph* litem_110;
struct sType* __dec_obj46;
struct list$1sTypeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value88 = (void*)0;
memset(&litem_106, 0, sizeof(struct list_item$1sTypeph*));
right_value89 = (void*)0;
memset(&litem_107, 0, sizeof(struct list_item$1sTypeph*));
memset(&it_108, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_109, 0, sizeof(int));
right_value90 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional184=position<0,        _if_conditional184) {
            position+=self->len+1;
        }
        if(_if_conditional185=position<0,        _if_conditional185) {
            position=0;
        }
        if(_if_conditional186=self->len==0||position>=self->len,        _if_conditional186) {
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
            __result75__ = __result_obj__ = self;
            if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result75__;
        }
        if(_if_conditional189=position==0,        _if_conditional189) {
            litem_106=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 381, "struct list_item$1sTypeph"))));
            if(right_value88 && right_value88 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
            litem_106->prev=((void*)0);
            litem_106->next=self->head;
            __dec_obj44=litem_106->item;
            litem_106->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->head->prev=litem_106;
            self->head=litem_106;
            self->len++;
        }
        else {
            if(_if_conditional190=self->len==1,            _if_conditional190) {
                litem_107=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value89=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 393, "struct list_item$1sTypeph"))));
                if(right_value89 && right_value89 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                litem_107->prev=self->head;
                litem_107->next=self->tail;
                __dec_obj45=litem_107->item;
                litem_107->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj45) { come_call_finalizer(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->prev=litem_107;
                self->head->next=litem_107;
                self->len++;
            }
            else {
                it_108=self->head;
                i_109=0;
                while(_while_condtional17=it_108!=((void*)0),                _while_condtional17) {
                    if(_if_conditional191=position==i_109,                    _if_conditional191) {
                        litem_110=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 409, "struct list_item$1sTypeph"))));
                        if(right_value90 && right_value90 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_110->prev=it_108->prev;
                        litem_110->next=it_108;
                        __dec_obj46=litem_110->item;
                        litem_110->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        it_108->prev->next=litem_110;
                        it_108->prev=litem_110;
                        self->len++;
                    }
                    it_108=it_108->next;
                    i_109++;
                }
            }
        }
        __result76__ = __result_obj__ = self;
        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result76__;
        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
void* right_value85;
struct list_item$1sTypeph* litem_103;
struct sType* __dec_obj41;
_Bool _if_conditional188;
void* right_value86;
struct list_item$1sTypeph* litem_104;
struct sType* __dec_obj42;
void* right_value87;
struct list_item$1sTypeph* litem_105;
struct sType* __dec_obj43;
struct list$1sTypeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value85 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional187=self->len==0,                _if_conditional187) {
                    litem_103=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 225, "struct list_item$1sTypeph"))));
                    if(right_value85 && right_value85 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_103->prev=((void*)0);
                    litem_103->next=((void*)0);
                    __dec_obj41=litem_103->item;
                    litem_103->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_103;
                    self->head=litem_103;
                }
                else {
                    if(_if_conditional188=self->len==1,                    _if_conditional188) {
                        litem_104=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 235, "struct list_item$1sTypeph"))));
                        if(right_value86 && right_value86 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_104->prev=self->head;
                        litem_104->next=((void*)0);
                        __dec_obj42=litem_104->item;
                        litem_104->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj42) { come_call_finalizer(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_104;
                        self->head->next=litem_104;
                    }
                    else {
                        litem_105=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 245, "struct list_item$1sTypeph"))));
                        if(right_value87 && right_value87 != __result_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_105->prev=self->tail;
                        litem_105->next=((void*)0);
                        __dec_obj43=litem_105->item;
                        litem_105->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_105;
                        self->tail=litem_105;
                    }
                }
                self->len++;
                __result74__ = __result_obj__ = self;
                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result74__;
                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
struct list$1charph* __result78__;
_Bool _if_conditional197;
void* right_value96;
struct list_item$1charph* litem_114;
char* __dec_obj50;
_Bool _if_conditional198;
void* right_value97;
struct list_item$1charph* litem_115;
char* __dec_obj51;
struct list_item$1charph* it_116;
int i_117;
_Bool _while_condtional18;
_Bool _if_conditional199;
void* right_value98;
struct list_item$1charph* litem_118;
char* __dec_obj52;
struct list$1charph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value96 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1charph*));
right_value97 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1charph*));
memset(&it_116, 0, sizeof(struct list_item$1charph*));
memset(&i_117, 0, sizeof(int));
right_value98 = (void*)0;
memset(&litem_118, 0, sizeof(struct list_item$1charph*));
        if(_if_conditional192=position<0,        _if_conditional192) {
            position+=self->len+1;
        }
        if(_if_conditional193=position<0,        _if_conditional193) {
            position=0;
        }
        if(_if_conditional194=self->len==0||position>=self->len,        _if_conditional194) {
            list$1charph_push_back(self,(char*)come_increment_ref_count(item));
            __result78__ = __result_obj__ = self;
            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
            return __result78__;
        }
        if(_if_conditional197=position==0,        _if_conditional197) {
            litem_114=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value96=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 381, "struct list_item$1charph"))));
            if(right_value96 && right_value96 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
            litem_114->prev=((void*)0);
            litem_114->next=self->head;
            __dec_obj50=litem_114->item;
            litem_114->item=(char*)come_increment_ref_count(item);
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
            self->head->prev=litem_114;
            self->head=litem_114;
            self->len++;
        }
        else {
            if(_if_conditional198=self->len==1,            _if_conditional198) {
                litem_115=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value97=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 393, "struct list_item$1charph"))));
                if(right_value97 && right_value97 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                litem_115->prev=self->head;
                litem_115->next=self->tail;
                __dec_obj51=litem_115->item;
                litem_115->item=(char*)come_increment_ref_count(item);
                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                self->tail->prev=litem_115;
                self->head->next=litem_115;
                self->len++;
            }
            else {
                it_116=self->head;
                i_117=0;
                while(_while_condtional18=it_116!=((void*)0),                _while_condtional18) {
                    if(_if_conditional199=position==i_117,                    _if_conditional199) {
                        litem_118=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value98=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 409, "struct list_item$1charph"))));
                        if(right_value98 && right_value98 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_118->prev=it_116->prev;
                        litem_118->next=it_116;
                        __dec_obj52=litem_118->item;
                        litem_118->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                        it_116->prev->next=litem_118;
                        it_116->prev=litem_118;
                        self->len++;
                    }
                    it_116=it_116->next;
                    i_117++;
                }
            }
        }
        __result79__ = __result_obj__ = self;
        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
        return __result79__;
        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional195;
void* right_value93;
struct list_item$1charph* litem_111;
char* __dec_obj47;
_Bool _if_conditional196;
void* right_value94;
struct list_item$1charph* litem_112;
char* __dec_obj48;
void* right_value95;
struct list_item$1charph* litem_113;
char* __dec_obj49;
struct list$1charph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value93 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1charph*));
right_value94 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1charph*));
right_value95 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional195=self->len==0,                _if_conditional195) {
                    litem_111=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value93=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 225, "struct list_item$1charph"))));
                    if(right_value93 && right_value93 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_111->prev=((void*)0);
                    litem_111->next=((void*)0);
                    __dec_obj47=litem_111->item;
                    litem_111->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_111;
                    self->head=litem_111;
                }
                else {
                    if(_if_conditional196=self->len==1,                    _if_conditional196) {
                        litem_112=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value94=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 235, "struct list_item$1charph"))));
                        if(right_value94 && right_value94 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_112->prev=self->head;
                        litem_112->next=((void*)0);
                        __dec_obj48=litem_112->item;
                        litem_112->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_112;
                        self->head->next=litem_112;
                    }
                    else {
                        litem_113=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value95=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 245, "struct list_item$1charph"))));
                        if(right_value95 && right_value95 != __result_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                        litem_113->prev=self->tail;
                        litem_113->next=((void*)0);
                        __dec_obj49=litem_113->item;
                        litem_113->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_113;
                        self->tail=litem_113;
                    }
                }
                self->len++;
                __result77__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result77__;
                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
struct list$1sTypeph* __result80__;
void* right_value102;
void* right_value103;
struct list$1sTypeph* result_120;
struct list_item$1sTypeph* it_121;
_Bool _while_condtional19;
void* right_value104;
struct list$1sTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_120, 0, sizeof(struct list$1sTypeph*));
memset(&it_121, 0, sizeof(struct list_item$1sTypeph*));
right_value104 = (void*)0;
        if(_if_conditional200=self==((void*)0),        _if_conditional200) {
            __result80__ = __result_obj__ = ((void*)0);
            return __result80__;
        }
        result_120=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value103=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
        if(right_value102 && right_value102 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value103 && right_value103 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
        it_121=self->head;
        while(_while_condtional19=it_121!=((void*)0),        _while_condtional19) {
            list$1sTypeph_add(result_120,(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(it_121->item)))));
            if(right_value104 && right_value104 != __result_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
            it_121=it_121->next;
        }
        __result81__ = __result_obj__ = result_120;
        if(result_120) { come_call_finalizer(list$1sTypephp_finalize,result_120, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result81__;
        if(result_120) { come_call_finalizer(list$1sTypephp_finalize,result_120, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional201;
struct list$1charph* __result82__;
void* right_value106;
void* right_value107;
struct list$1charph* result_122;
struct list_item$1charph* it_123;
_Bool _while_condtional20;
void* right_value108;
struct list$1charph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_122, 0, sizeof(struct list$1charph*));
memset(&it_123, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
        if(_if_conditional201=self==((void*)0),        _if_conditional201) {
            __result82__ = __result_obj__ = ((void*)0);
            return __result82__;
        }
        result_122=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value107=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value106=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
        if(right_value106 && right_value106 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value107 && right_value107 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
        it_123=self->head;
        while(_while_condtional20=it_123!=((void*)0),        _while_condtional20) {
            list$1charph_add(result_122,(char*)come_increment_ref_count(((char*)(right_value108=string_clone(it_123->item)))));
            if(right_value108 && right_value108 != __result_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
            it_123=it_123->next;
        }
        __result83__ = __result_obj__ = result_122;
        if(result_122) { come_call_finalizer(list$1charphp_finalize,result_122, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result83__;
        if(result_122) { come_call_finalizer(list$1charphp_finalize,result_122, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj55;
struct tuple1$1sTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __dec_obj55=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
        __result84__ = __result_obj__ = self;
        if(self) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result84__;
        if(self) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj57;
char* __dec_obj58;
struct tuple2$2sTypephcharph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __dec_obj57=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
        __dec_obj58=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
        __result85__ = __result_obj__ = self;
        if(self) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
        return __result85__;
        if(self) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
_Bool _if_conditional203;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional202=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional202) {
                if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional203=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional203) {
                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
            }
}

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
void* right_value115;
char* type_name_124;
struct sClass* klass_125;
void* right_value116;
_Bool _if_conditional205;
void* right_value117;
void* right_value118;
struct sClass* __dec_obj59;
void* right_value119;
void* right_value120;
struct sClass* __dec_obj60;
void* right_value121;
void* right_value122;
struct sType* voidp_126;
void* right_value126;
void* right_value127;
void* right_value128;
void* right_value129;
void* right_value130;
struct sType* finalizer_130;
void* right_value131;
struct sType* __list_values1___131[1];
void* right_value132;
void* right_value133;
struct list$1sTypeph* __dec_obj66;
void* right_value134;
char* __list_values2___133[1];
void* right_value135;
void* right_value136;
struct list$1charph* __dec_obj67;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
struct tuple1$1sTypeph* __dec_obj68;
void* right_value141;
void* right_value142;
void* right_value143;
void* right_value144;
void* right_value145;
struct sType* cloner_135;
void* right_value146;
struct sType* __list_values3___136[1];
void* right_value147;
void* right_value148;
struct list$1sTypeph* __dec_obj69;
void* right_value149;
char* __list_values4___137[1];
void* right_value150;
void* right_value151;
struct list$1charph* __dec_obj70;
void* right_value152;
void* right_value153;
void* right_value154;
struct tuple1$1sTypeph* __dec_obj71;
void* right_value155;
void* right_value156;
void* right_value157;
_Bool _while_condtional21;
void* right_value158;
struct tuple2$2sTypephcharph* multiple_assign_var4;
struct sType* type2_138;
char* name_139;
void* right_value159;
void* right_value160;
_Bool _if_conditional208;
void* right_value161;
void* right_value162;
void* right_value163;
struct sNode* _inf_value1;
struct sInterfaceNode* _inf_obj_value1;
void* right_value168;
struct sNode* __result93__;
void* right_value169;
struct sNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value115 = (void*)0;
memset(&type_name_124, 0, sizeof(char*));
memset(&klass_125, 0, sizeof(struct sClass*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&voidp_126, 0, sizeof(struct sType*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&finalizer_130, 0, sizeof(struct sType*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&cloner_135, 0, sizeof(struct sType*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&type2_138, 0, sizeof(struct sType*));
memset(&name_139, 0, sizeof(char*));
memset(&type2_138, 0, sizeof(struct sType*));
memset(&name_139, 0, sizeof(char*));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
    if(_if_conditional204=charp_operator_equals(buf,"interface")||charp_operator_equals(buf,"protocol"),    _if_conditional204) {
        type_name_124=(char*)come_increment_ref_count(((char*)(right_value115=parse_word(info))));
        if(right_value115 && right_value115 != __result_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
        if(_if_conditional205=((struct sClass*)(right_value116=map$2charphsClassph_at(info->classes,type_name_124,((void*)0))))==((void*)0),        (right_value116 && right_value116 != __result_obj__) ? come_call_finalizer(sClass_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0):0,
        _if_conditional205) {
            __dec_obj59=klass_125;
            klass_125=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value118=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value117=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "23interface.c", 102, "struct sClass")))),type_name_124,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            if(__dec_obj59) { come_call_finalizer(sClass_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value117 && right_value117 != __result_obj__) { come_call_finalizer(sClass_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value118 && right_value118 != __result_obj__) { come_call_finalizer(sClass_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        else {
            __dec_obj60=klass_125;
            klass_125=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value120=sClass_clone(((struct sClass*)(right_value119=map$2charphsClassph_at(info->classes,type_name_124,((void*)0))))))));
            if(__dec_obj60) { come_call_finalizer(sClass_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value119 && right_value119 != __result_obj__) { come_call_finalizer(sClass_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value120 && right_value120 != __result_obj__) { come_call_finalizer(sClass_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        }
        expected_next_character(123,info);
        voidp_126=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value121=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 110, "struct sType")))),"void",(_Bool)0,info))));
        if(right_value121 && right_value121 != __result_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value122 && right_value122 != __result_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
        voidp_126->mPointerNum++;
        list$1tuple2$2charphsTypephph_push_back(klass_125->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value128=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value126=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 113, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string("_protocol_obj")))),(struct sType*)come_increment_ref_count(voidp_126))))));
        if(right_value126 && right_value126 != __result_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value127 && right_value127 != __result_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value128 && right_value128 != __result_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
        finalizer_130=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 115, "struct sType")))),"lambda",(_Bool)0,info))));
        if(right_value129 && right_value129 != __result_obj__) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value130 && right_value130 != __result_obj__) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
        {__list_values1___131[0]=come_increment_ref_count(((struct sType*)(right_value131=sType_clone(voidp_126))));
}        __dec_obj66=finalizer_130->mParamTypes;
        finalizer_130->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value133=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value132=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 117, "struct list$1sTypeph")))),1,__list_values1___131))));
        if(__dec_obj66) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value131 && right_value131 != __result_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value132 && right_value132 != __result_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value133 && right_value133 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        {__list_values2___133[0]=come_increment_ref_count(((char*)(right_value134=__builtin_string("self"))));
}        __dec_obj67=finalizer_130->mParamNames;
        finalizer_130->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value136=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 118, "struct list$1charph")))),1,__list_values2___133))));
        if(__dec_obj67) { come_call_finalizer(list$1charph_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value134 && right_value134 != __result_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value135 && right_value135 != __result_obj__) { come_call_finalizer(list$1charph_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value136 && right_value136 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
        finalizer_130->mVarArgs=(_Bool)0;
        __dec_obj68=finalizer_130->mResultType;
        finalizer_130->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value140=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value137=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 120, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value138=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 120, "struct sType")))),"void",(_Bool)0,info))))))));
        if(__dec_obj68) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value137 && right_value137 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value138 && right_value138 != __result_obj__) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value139 && right_value139 != __result_obj__) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value140 && right_value140 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
        list$1tuple2$2charphsTypephph_push_back(klass_125->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value143=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value141=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 122, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string("finalize")))),(struct sType*)come_increment_ref_count(finalizer_130))))));
        if(right_value141 && right_value141 != __result_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value142 && right_value142 != __result_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value143 && right_value143 != __result_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
        cloner_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 124, "struct sType")))),"lambda",(_Bool)0,info))));
        if(right_value144 && right_value144 != __result_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value145 && right_value145 != __result_obj__) { come_call_finalizer(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
        {__list_values3___136[0]=come_increment_ref_count(((struct sType*)(right_value146=sType_clone(voidp_126))));
}        __dec_obj69=cloner_135->mParamTypes;
        cloner_135->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value148=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value147=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 126, "struct list$1sTypeph")))),1,__list_values3___136))));
        if(__dec_obj69) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value146 && right_value146 != __result_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value147 && right_value147 != __result_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value148 && right_value148 != __result_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
        {__list_values4___137[0]=come_increment_ref_count(((char*)(right_value149=__builtin_string("self"))));
}        __dec_obj70=cloner_135->mParamNames;
        cloner_135->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 127, "struct list$1charph")))),1,__list_values4___137))));
        if(__dec_obj70) { come_call_finalizer(list$1charph_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value149 && right_value149 != __result_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value150 && right_value150 != __result_obj__) { come_call_finalizer(list$1charph_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value151 && right_value151 != __result_obj__) { come_call_finalizer(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
        cloner_135->mVarArgs=(_Bool)0;
        __dec_obj71=cloner_135->mResultType;
        cloner_135->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value154=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value152=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 129, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(voidp_126))))))));
        if(__dec_obj71) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value152 && right_value152 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value153 && right_value153 != __result_obj__) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value154 && right_value154 != __result_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        list$1tuple2$2charphsTypephph_push_back(klass_125->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value157=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value155=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 131, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string("clone")))),(struct sType*)come_increment_ref_count(cloner_135))))));
        if(right_value155 && right_value155 != __result_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value156 && right_value156 != __result_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value157 && right_value157 != __result_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
        while(_while_condtional21=(_Bool)1,        _while_condtional21) {
            parse_sharp_v5(info);
            multiple_assign_var4=((struct tuple2$2sTypephcharph*)(right_value158=parse_interface_function(info)));
            type2_138=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_139=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            if(right_value158 && right_value158 != __result_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
            expected_next_character(59,info);
            list$1tuple2$2charphsTypephph_push_back(klass_125->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value160=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value159=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 138, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_139),(struct sType*)come_increment_ref_count(type2_138))))));
            if(right_value159 && right_value159 != __result_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value160 && right_value160 != __result_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
            parse_sharp_v5(info);
            if(_if_conditional208=*info->p==125,            _if_conditional208) {
                info->p++;
                skip_spaces_and_lf(info);
                if(type2_138) { come_call_finalizer(sType_finalize,type2_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_139) { name_139 = come_decrement_ref_count(name_139, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            parse_sharp_v5(info);
            if(type2_138) { come_call_finalizer(sType_finalize,type2_138, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_139) { name_139 = come_decrement_ref_count(name_139, (void*)0, (void*)0, 0, 0, 0); }
        }
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23interface.c", 150, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sInterfaceNode*)(right_value163=sInterfaceNode_initialize((struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value161=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "23interface.c", 150, "struct sInterfaceNode")))),(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(type_name_124)))),(struct sClass*)come_increment_ref_count(klass_125),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sInterfaceNode_finalize;
        _inf_value1->clone=(void*)sInterfaceNode_clone;
        _inf_value1->compile=(void*)sInterfaceNode_compile;
        _inf_value1->sline=(void*)sInterfaceNode_sline;
        _inf_value1->sname=(void*)sInterfaceNode_sname;
        _inf_value1->terminated=(void*)sInterfaceNode_terminated;
        _inf_value1->kind=(void*)sInterfaceNode_kind;
        __result93__ = __result_obj__ = ((struct sNode*)(right_value168=_inf_value1));
        if(type_name_124) { type_name_124 = come_decrement_ref_count(type_name_124, (void*)0, (void*)0, 0, 0, 0); }
        if(klass_125) { come_call_finalizer(sClass_finalize,klass_125, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(voidp_126) { come_call_finalizer(sType_finalize,voidp_126, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(finalizer_130) { come_call_finalizer(sType_finalize,finalizer_130, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cloner_135) { come_call_finalizer(sType_finalize,cloner_135, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value161 && right_value161 != __result_obj__) { come_call_finalizer(sInterfaceNode_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value162 && right_value162 != __result_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value163 && right_value163 != __result_obj__) { come_call_finalizer(sInterfaceNode_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value168 && right_value168 != __result_obj__) { right_value168 = come_decrement_ref_count(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0, 0); } 
        return __result93__;
        if(type_name_124) { type_name_124 = come_decrement_ref_count(type_name_124, (void*)0, (void*)0, 0, 0, 0); }
        if(klass_125) { come_call_finalizer(sClass_finalize,klass_125, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(voidp_126) { come_call_finalizer(sType_finalize,voidp_126, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(finalizer_130) { come_call_finalizer(sType_finalize,finalizer_130, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cloner_135) { come_call_finalizer(sType_finalize,cloner_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result94__ = __result_obj__ = ((struct sNode*)(right_value169=top_level_v1(buf,head,head_sline,info)));
    if(right_value169 && right_value169 != __result_obj__) { right_value169 = come_decrement_ref_count(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0); } 
    return __result94__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional206;
void* right_value123;
struct list_item$1tuple2$2charphsTypephph* litem_127;
struct tuple2$2charphsTypeph* __dec_obj61;
_Bool _if_conditional207;
void* right_value124;
struct list_item$1tuple2$2charphsTypephph* litem_128;
struct tuple2$2charphsTypeph* __dec_obj62;
void* right_value125;
struct list_item$1tuple2$2charphsTypephph* litem_129;
struct tuple2$2charphsTypeph* __dec_obj63;
struct list$1tuple2$2charphsTypephph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value123 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value124 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value125 = (void*)0;
memset(&litem_129, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional206=self->len==0,            _if_conditional206) {
                litem_127=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value123=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 225, "struct list_item$1tuple2$2charphsTypephph"))));
                if(right_value123 && right_value123 != __result_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                litem_127->prev=((void*)0);
                litem_127->next=((void*)0);
                __dec_obj61=litem_127->item;
                litem_127->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj61) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_127;
                self->head=litem_127;
            }
            else {
                if(_if_conditional207=self->len==1,                _if_conditional207) {
                    litem_128=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value124=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 235, "struct list_item$1tuple2$2charphsTypephph"))));
                    if(right_value124 && right_value124 != __result_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_128->prev=self->head;
                    litem_128->next=((void*)0);
                    __dec_obj62=litem_128->item;
                    litem_128->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj62) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_128;
                    self->head->next=litem_128;
                }
                else {
                    litem_129=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value125=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 245, "struct list_item$1tuple2$2charphsTypephph"))));
                    if(right_value125 && right_value125 != __result_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                    litem_129->prev=self->tail;
                    litem_129->next=((void*)0);
                    __dec_obj63=litem_129->item;
                    litem_129->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj63) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail->next=litem_129;
                    self->tail=litem_129;
                }
            }
            self->len++;
            __result87__ = __result_obj__ = self;
            if(item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result87__;
            if(item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj64;
struct sType* __dec_obj65;
struct tuple2$2charphsTypeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj64=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
            __dec_obj65=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
            __result88__ = __result_obj__ = self;
            if(self) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result88__;
            if(self) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_132;
_Bool _for_condtionalA4;
struct list$1sTypeph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_132, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(
            i_132=0 ,            0;            _for_condtionalA4=            i_132<num_value ,            _for_condtionalA4;            i_132++ ,            0            ){
                list$1sTypeph_push_back(self,values[i_132]);
            }
            __result89__ = __result_obj__ = self;
            if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result89__;
            if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_134;
_Bool _for_condtionalA5;
struct list$1charph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_134, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(
            i_134=0 ,            0;            _for_condtionalA5=            i_134<num_value ,            _for_condtionalA5;            i_134++ ,            0            ){
                list$1charph_push_back(self,values[i_134]);
            }
            __result90__ = __result_obj__ = self;
            if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result90__;
            if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sInterfaceNode_finalize(struct sInterfaceNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional209=self!=((void*)0)&&self->name!=((void*)0),            _if_conditional209) {
                if(self->name) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional210=self!=((void*)0)&&self->klass!=((void*)0),            _if_conditional210) {
                if(self->klass) { come_call_finalizer(sClass_finalize,self->klass, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional211=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional211) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
struct sInterfaceNode* __result91__;
void* right_value164;
struct sInterfaceNode* result_140;
_Bool _if_conditional213;
void* right_value165;
char* __dec_obj72;
_Bool _if_conditional214;
void* right_value166;
struct sClass* __dec_obj73;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value167;
char* __dec_obj74;
struct sInterfaceNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value164 = (void*)0;
memset(&result_140, 0, sizeof(struct sInterfaceNode*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
            if(_if_conditional212=self==(void*)0,            _if_conditional212) {
                __result91__ = __result_obj__ = (void*)0;
                return __result91__;
            }
            result_140=(struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value164=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "sInterfaceNode_clone", 3, "struct sInterfaceNode"))));
            if(right_value164 && right_value164 != __result_obj__) { come_call_finalizer(sInterfaceNode_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(_if_conditional213=self!=((void*)0)&&self->name!=((void*)0),            _if_conditional213) {
                __dec_obj72=result_140->name;
                result_140->name=(char*)come_increment_ref_count(((char*)(right_value165=string_clone(self->name))));
                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                if(right_value165 && right_value165 != __result_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
            }
            if(_if_conditional214=self!=((void*)0)&&self->klass!=((void*)0),            _if_conditional214) {
                __dec_obj73=result_140->klass;
                result_140->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value166=sClass_clone(self->klass))));
                if(__dec_obj73) { come_call_finalizer(sClass_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value166 && right_value166 != __result_obj__) { come_call_finalizer(sClass_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
            }
            if(_if_conditional215=self!=((void*)0),            _if_conditional215) {
                result_140->sline=self->sline;
            }
            if(_if_conditional216=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional216) {
                __dec_obj74=result_140->sname;
                result_140->sname=(char*)come_increment_ref_count(((char*)(right_value167=string_clone(self->sname))));
                if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                if(right_value167 && right_value167 != __result_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
            }
            __result92__ = __result_obj__ = result_140;
            if(result_140) { come_call_finalizer(sInterfaceNode_finalize,result_140, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result92__;
            if(result_140) { come_call_finalizer(sInterfaceNode_finalize,result_140, (void*)0, (void*)0, 0, 0, 0, 0); }
}

