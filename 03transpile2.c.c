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

void come_init_v3();

void come_final_v3();

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
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
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);

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
void* right_value49;
void* right_value50;
struct buffer* buf_11;
char* class_name_12;
_Bool _if_conditional7;
_Bool _if_conditional8;
void* right_value51;
char* __result34__;
void* right_value52;
struct CVALUE* come_value_13;
void* right_value53;
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
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
void* right_value54;
char* result_type_str_20;
int j_21;
struct list$1sTypeph* o2_saved_22;
struct sType* it_25;
void* right_value55;
char* param_type_str_28;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value56;
char* __result44__;
_Bool _if_conditional57;
int i_29;
_Bool _if_conditional59;
_Bool _if_conditional60;
void* right_value57;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value50 = (void*)0;
memset(&buf_11, 0, sizeof(struct buffer*));
memset(&class_name_12, 0, sizeof(char*));
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&come_value_13, 0, sizeof(struct CVALUE*));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&result_type_str_20, 0, sizeof(char*));
memset(&j_21, 0, sizeof(int));
memset(&o2_saved_22, 0, sizeof(struct list$1sTypeph*));
memset(&it_25, 0, sizeof(struct sType*));
right_value55 = (void*)0;
memset(&param_type_str_28, 0, sizeof(char*));
right_value56 = (void*)0;
memset(&i_29, 0, sizeof(int));
right_value57 = (void*)0;
    # 15 "03transpile2.c"
    buf_11=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value50=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value49=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 15, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 17 "03transpile2.c"
    class_name_12=type->mClass->mName;
    # 31 "03transpile2.c"
    # 19 "03transpile2.c"
    if(type->mAlignas) {
        # 25 "03transpile2.c"
        # 20 "03transpile2.c"
        if(_if_conditional8=!node_compile(type->mAlignas,info),        _if_conditional8) {
            # 21 "03transpile2.c"
            printf("_Alignas error\n");
            # 22 "03transpile2.c"
            __result34__ = __result_obj__ = ((char*)(right_value51=__builtin_string("")));
            come_call_finalizer2(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result34__;
        }
        # 25 "03transpile2.c"
        come_value_13=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value52=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 26 "03transpile2.c"
        dec_stack_ptr(1,info);
        # 28 "03transpile2.c"
        buffer_append_str(buf_11,((char*)(right_value53=xsprintf("_Alignas(%s) ",come_value_13->c_value))));
        right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 35 "03transpile2.c"
    # 31 "03transpile2.c"
    if(_if_conditional28=type->mStatic&&!type->mClass->mStruct&&!type->mClass->mUnion,    _if_conditional28) {
        # 32 "03transpile2.c"
        buffer_append_str(buf_11,"static ");
    }
    # 39 "03transpile2.c"
    # 35 "03transpile2.c"
    if(type->mConstant) {
        # 36 "03transpile2.c"
        buffer_append_str(buf_11,"const ");
    }
    # 44 "03transpile2.c"
    # 39 "03transpile2.c"
    if(type->mUnsigned) {
        # 40 "03transpile2.c"
        buffer_append_str(buf_11,"unsigned ");
    }
    # 48 "03transpile2.c"
    # 44 "03transpile2.c"
    if(type->mShort) {
        # 45 "03transpile2.c"
        buffer_append_str(buf_11,"short ");
    }
    # 128 "03transpile2.c"
    # 48 "03transpile2.c"
    if(_if_conditional32=string_operator_equals(type->mOriginalTypeName,"va_list"),    _if_conditional32) {
        # 49 "03transpile2.c"
        buffer_append_str(buf_11,"va_list");
    }
    else {
        # 128 "03transpile2.c"
        # 51 "03transpile2.c"
        if(_if_conditional33=string_operator_equals(type->mOriginalTypeName,"__builtin_va_list"),        _if_conditional33) {
            # 52 "03transpile2.c"
            buffer_append_str(buf_11,"__builtin_va_list");
        }
        else {
            # 128 "03transpile2.c"
            # 54 "03transpile2.c"
            if(_if_conditional34=charp_operator_equals(class_name_12,"__builtin_va_list"),            _if_conditional34) {
                # 61 "03transpile2.c"
                # 55 "03transpile2.c"
                if(in_header) {
                    # 56 "03transpile2.c"
                    buffer_append_str(buf_11,class_name_12);
                }
                else {
                    # 59 "03transpile2.c"
                    buffer_append_str(buf_11,"va_list");
                }
            }
            else {
                # 128 "03transpile2.c"
                # 62 "03transpile2.c"
                if(type->mClass->mStruct) {
                    # 63 "03transpile2.c"
                    buffer_append_str(buf_11,"struct ");
                    # 64 "03transpile2.c"
                    buffer_append_str(buf_11,class_name_12);
                }
                else {
                    # 128 "03transpile2.c"
                    # 66 "03transpile2.c"
                    if(type->mClass->mUnion) {
                        # 67 "03transpile2.c"
                        buffer_append_str(buf_11,"union ");
                        # 68 "03transpile2.c"
                        buffer_append_str(buf_11,class_name_12);
                    }
                    else {
                        # 128 "03transpile2.c"
                        # 70 "03transpile2.c"
                        if(type->mClass->mEnum) {
                            # 71 "03transpile2.c"
                            buffer_append_str(buf_11,"enum ");
                            # 72 "03transpile2.c"
                            buffer_append_str(buf_11,class_name_12);
                        }
                        else {
                            # 128 "03transpile2.c"
                            # 74 "03transpile2.c"
                            if(type->mLongLong) {
                                # 81 "03transpile2.c"
                                # 75 "03transpile2.c"
                                if(_if_conditional40=charp_operator_equals(class_name_12,"int"),                                _if_conditional40) {
                                    # 76 "03transpile2.c"
                                    buffer_append_str(buf_11,"long long int");
                                }
                                else {
                                    # 81 "03transpile2.c"
                                    # 78 "03transpile2.c"
                                    if(_if_conditional41=charp_operator_equals(class_name_12,"long"),                                    _if_conditional41) {
                                        # 79 "03transpile2.c"
                                        buffer_append_str(buf_11,"long long");
                                    }
                                }
                            }
                            else {
                                # 128 "03transpile2.c"
                                # 82 "03transpile2.c"
                                if(type->mLong) {
                                    # 92 "03transpile2.c"
                                    # 83 "03transpile2.c"
                                    if(_if_conditional43=charp_operator_equals(class_name_12,"int"),                                    _if_conditional43) {
                                        # 84 "03transpile2.c"
                                        buffer_append_str(buf_11,"long int");
                                    }
                                    else {
                                        # 92 "03transpile2.c"
                                        # 86 "03transpile2.c"
                                        if(_if_conditional44=charp_operator_equals(class_name_12,"long"),                                        _if_conditional44) {
                                            # 87 "03transpile2.c"
                                            buffer_append_str(buf_11,"long long");
                                        }
                                        else {
                                            # 92 "03transpile2.c"
                                            # 89 "03transpile2.c"
                                            if(_if_conditional45=charp_operator_equals(class_name_12,"double"),                                            _if_conditional45) {
                                                # 90 "03transpile2.c"
                                                buffer_append_str(buf_11,"long double");
                                            }
                                        }
                                    }
                                }
                                else {
                                    # 128 "03transpile2.c"
                                    # 93 "03transpile2.c"
                                    if(_if_conditional46=charp_operator_equals(class_name_12,"long"),                                    _if_conditional46) {
                                        # 94 "03transpile2.c"
                                        buffer_append_str(buf_11,"long");
                                    }
                                    else {
                                        # 128 "03transpile2.c"
                                        # 96 "03transpile2.c"
                                        if(_if_conditional47=charp_operator_equals(class_name_12,"__uint128_t"),                                        _if_conditional47) {
                                            # 97 "03transpile2.c"
                                            buffer_append_str(buf_11,"__uint128_t");
                                        }
                                        else {
                                            # 128 "03transpile2.c"
                                            # 99 "03transpile2.c"
                                            if(_if_conditional48=charp_operator_equals(class_name_12,"bool"),                                            _if_conditional48) {
                                                # 100 "03transpile2.c"
                                                buffer_append_str(buf_11,"_Bool");
                                            }
                                            else {
                                                # 128 "03transpile2.c"
                                                # 102 "03transpile2.c"
                                                if(_if_conditional49=charp_operator_equals(class_name_12,"lambda"),                                                _if_conditional49) {
                                                    # 103 "03transpile2.c"
                                                    result_type_str_20=(char*)come_increment_ref_count(((char*)(right_value54=make_type_name_string(type->mResultType->v1,in_header,(_Bool)0,(_Bool)0,info))));
                                                    right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 104 "03transpile2.c"
                                                    buffer_append_str(buf_11,result_type_str_20);
                                                    # 105 "03transpile2.c"
                                                    buffer_append_str(buf_11," (*)(");
                                                    # 107 "03transpile2.c"
                                                    j_21=0;
                                                    # 118 "03transpile2.c"
                                                    for(                                                    o2_saved_22=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_25=list$1sTypeph_begin((o2_saved_22));                                                    !list$1sTypeph_end((o2_saved_22));                                                    it_25=list$1sTypeph_next((o2_saved_22))                                                    ){
                                                        # 109 "03transpile2.c"
                                                        param_type_str_28=(char*)come_increment_ref_count(((char*)(right_value55=make_type_name_string(it_25,in_header,(_Bool)0,(_Bool)0,info))));
                                                        right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 111 "03transpile2.c"
                                                        buffer_append_str(buf_11,param_type_str_28);
                                                        # 116 "03transpile2.c"
                                                        # 113 "03transpile2.c"
                                                        if(_if_conditional55=j_21!=list$1sTypeph_length(type->mParamTypes)-1,                                                        _if_conditional55) {
                                                            # 114 "03transpile2.c"
                                                            buffer_append_str(buf_11,",");
                                                        }
                                                        # 116 "03transpile2.c"
                                                        j_21++;
                                                        param_type_str_28 = come_decrement_ref_count2(param_type_str_28, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    # 118 "03transpile2.c"
                                                    buffer_append_str(buf_11,")");
                                                    result_type_str_20 = come_decrement_ref_count2(result_type_str_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                else {
                                                    # 125 "03transpile2.c"
                                                    # 121 "03transpile2.c"
                                                    if(_if_conditional56=class_name_12==((void*)0),                                                    _if_conditional56) {
                                                        # 122 "03transpile2.c"
                                                        err_msg(info,"class name is null");
                                                        # 123 "03transpile2.c"
                                                        __result44__ = __result_obj__ = ((char*)(right_value56=__builtin_string("")));
                                                        come_call_finalizer2(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        return __result44__;
                                                    }
                                                    # 125 "03transpile2.c"
                                                    buffer_append_str(buf_11,class_name_12);
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
    # 134 "03transpile2.c"
    # 128 "03transpile2.c"
    if(_if_conditional57=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_12,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional57) {
        # 132 "03transpile2.c"
        for(        i_29=0;        i_29<type->mPointerNum;        i_29++        ){
            # 130 "03transpile2.c"
            buffer_append_str(buf_11,"*");
        }
    }
    # 138 "03transpile2.c"
    # 134 "03transpile2.c"
    if(_if_conditional59=array_cast_pointer&&list$1sNodeph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional59) {
        # 135 "03transpile2.c"
        buffer_append_str(buf_11,"*");
    }
    # 142 "03transpile2.c"
    # 138 "03transpile2.c"
    if(type->mRestrict) {
        # 139 "03transpile2.c"
        buffer_append_str(buf_11,"restrict");
    }
    # 142 "03transpile2.c"
    __result47__ = __result_obj__ = ((char*)(right_value57=buffer_to_string(buf_11)));
    come_call_finalizer2(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result47__;
    come_call_finalizer2(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional9=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional9) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional10=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional10) {
                # 1 "CVALUE_finalize"
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sType_finalize"
                    # 0 "sType_finalize"
                    if(_if_conditional11=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                    _if_conditional11) {
                        # 0 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sType_finalize"
                    # 1 "sType_finalize"
                    if(_if_conditional13=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional13) {
                        # 1 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sType_finalize"
                    # 2 "sType_finalize"
                    if(_if_conditional15=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional15) {
                        # 2 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 4 "sType_finalize"
                    # 3 "sType_finalize"
                    if(_if_conditional16=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional16) {
                        # 3 "sType_finalize"
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 5 "sType_finalize"
                    # 4 "sType_finalize"
                    if(_if_conditional17=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional17) {
                        # 4 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 6 "sType_finalize"
                    # 5 "sType_finalize"
                    if(_if_conditional18=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional18) {
                        # 5 "sType_finalize"
                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 7 "sType_finalize"
                    # 6 "sType_finalize"
                    if(_if_conditional20=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional20) {
                        # 6 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 8 "sType_finalize"
                    # 7 "sType_finalize"
                    if(_if_conditional21=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional21) {
                        # 7 "sType_finalize"
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 9 "sType_finalize"
                    # 8 "sType_finalize"
                    if(_if_conditional23=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional23) {
                        # 8 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 10 "sType_finalize"
                    # 9 "sType_finalize"
                    if(_if_conditional24=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional24) {
                        # 9 "sType_finalize"
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 11 "sType_finalize"
                    # 10 "sType_finalize"
                    if(_if_conditional25=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional25) {
                        # 10 "sType_finalize"
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 12 "sType_finalize"
                    # 11 "sType_finalize"
                    if(_if_conditional26=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional26) {
                        # 11 "sType_finalize"
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 13 "sType_finalize"
                    # 12 "sType_finalize"
                    if(_if_conditional27=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional27) {
                        # 12 "sType_finalize"
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_15, 0, sizeof(struct list_item$1sTypeph*));
                            # 123 "./comelang2.h"
                            it_14=self->head;
                            # 129 "./comelang2.h"
                            while(_while_condtional1=it_14!=((void*)0),                            _while_condtional1) {
                                # 125 "./comelang2.h"
                                prev_it_15=it_14;
                                # 126 "./comelang2.h"
                                it_14=it_14->next;
                                # 127 "./comelang2.h"
                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sTypephp_finalize"
                                    # 0 "list_item$1sTypephp_finalize"
                                    if(_if_conditional12=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional12) {
                                        # 0 "list_item$1sTypephp_finalize"
                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypephp_finalize"
                            # 0 "tuple1$1sTypephp_finalize"
                            if(_if_conditional14=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional14) {
                                # 0 "tuple1$1sTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_16;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1sNodeph*));
                            # 123 "./comelang2.h"
                            it_16=self->head;
                            # 129 "./comelang2.h"
                            while(_while_condtional2=it_16!=((void*)0),                            _while_condtional2) {
                                # 125 "./comelang2.h"
                                prev_it_17=it_16;
                                # 126 "./comelang2.h"
                                it_16=it_16->next;
                                # 127 "./comelang2.h"
                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sNodephp_finalize"
                                    # 0 "list_item$1sNodephp_finalize"
                                    if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional19) {
                                        # 0 "list_item$1sNodephp_finalize"
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_18;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_18, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_19, 0, sizeof(struct list_item$1charph*));
                            # 123 "./comelang2.h"
                            it_18=self->head;
                            # 129 "./comelang2.h"
                            while(_while_condtional3=it_18!=((void*)0),                            _while_condtional3) {
                                # 125 "./comelang2.h"
                                prev_it_19=it_18;
                                # 126 "./comelang2.h"
                                it_18=it_18->next;
                                # 127 "./comelang2.h"
                                come_call_finalizer2(list_item$1charphp_finalize,prev_it_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1charphp_finalize"
                                    # 0 "list_item$1charphp_finalize"
                                    if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional22) {
                                        # 0 "list_item$1charphp_finalize"
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct sType* result_23;
struct sType* __result35__;
_Bool _if_conditional51;
struct sType* __result36__;
struct sType* result_24;
struct sType* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sType*));
memset(&result_24, 0, sizeof(struct sType*));
                                                        # 290 "./comelang2.h"
                                                        # 285 "./comelang2.h"
                                                        if(_if_conditional50=self==((void*)0),                                                        _if_conditional50) {
                                                            # 286 "./comelang2.h"
                                                            # 287 "./comelang2.h"
                                                            memset(&result_23,0,sizeof(struct sType*));
                                                            # 288 "./comelang2.h"
                                                            __result35__ = __result_obj__ = result_23;
                                                            return __result35__;
                                                        }
                                                        # 290 "./comelang2.h"
                                                        self->it=self->head;
                                                        # 296 "./comelang2.h"
                                                        # 292 "./comelang2.h"
                                                        if(self->it) {
                                                            # 293 "./comelang2.h"
                                                            __result36__ = __result_obj__ = self->it->item;
                                                            return __result36__;
                                                        }
                                                        # 296 "./comelang2.h"
                                                        # 297 "./comelang2.h"
                                                        memset(&result_24,0,sizeof(struct sType*));
                                                        # 298 "./comelang2.h"
                                                        __result37__ = __result_obj__ = result_24;
                                                        return __result37__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 320 "./comelang2.h"
                                                        __result38__ = self==((void*)0)||self->it==((void*)0);
                                                        return __result38__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional52;
struct sType* result_26;
struct sType* __result39__;
_Bool _if_conditional53;
struct sType* __result40__;
struct sType* result_27;
struct sType* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_26, 0, sizeof(struct sType*));
memset(&result_27, 0, sizeof(struct sType*));
                                                        # 308 "./comelang2.h"
                                                        # 302 "./comelang2.h"
                                                        if(_if_conditional52=self==((void*)0)||self->it==((void*)0),                                                        _if_conditional52) {
                                                            # 303 "./comelang2.h"
                                                            # 304 "./comelang2.h"
                                                            memset(&result_26,0,sizeof(struct sType*));
                                                            # 305 "./comelang2.h"
                                                            __result39__ = __result_obj__ = result_26;
                                                            return __result39__;
                                                        }
                                                        # 308 "./comelang2.h"
                                                        self->it=self->it->next;
                                                        # 314 "./comelang2.h"
                                                        # 310 "./comelang2.h"
                                                        if(self->it) {
                                                            # 311 "./comelang2.h"
                                                            __result40__ = __result_obj__ = self->it->item;
                                                            return __result40__;
                                                        }
                                                        # 314 "./comelang2.h"
                                                        # 315 "./comelang2.h"
                                                        memset(&result_27,0,sizeof(struct sType*));
                                                        # 316 "./comelang2.h"
                                                        __result41__ = __result_obj__ = result_27;
                                                        return __result41__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional54;
int __result42__;
int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 367 "./comelang2.h"
                                                            # 364 "./comelang2.h"
                                                            if(_if_conditional54=self==((void*)0),                                                            _if_conditional54) {
                                                                # 365 "./comelang2.h"
                                                                __result42__ = 0;
                                                                return __result42__;
                                                            }
                                                            # 367 "./comelang2.h"
                                                            __result43__ = self->len;
                                                            return __result43__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional58;
int __result45__;
int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./comelang2.h"
        # 364 "./comelang2.h"
        if(_if_conditional58=self==((void*)0),        _if_conditional58) {
            # 365 "./comelang2.h"
            __result45__ = 0;
            return __result45__;
        }
        # 367 "./comelang2.h"
        __result46__ = self->len;
        return __result46__;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value58;
void* right_value59;
struct buffer* buf_30;
char* class_name_31;
_Bool _if_conditional61;
int i_32;
struct sType* gtype_36;
void* right_value60;
_Bool _if_conditional64;
_Bool _if_conditional65;
int i_37;
_Bool _if_conditional66;
int i_38;
_Bool _if_conditional67;
void* right_value61;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
right_value59 = (void*)0;
memset(&buf_30, 0, sizeof(struct buffer*));
memset(&class_name_31, 0, sizeof(char*));
memset(&i_32, 0, sizeof(int));
memset(&gtype_36, 0, sizeof(struct sType*));
right_value60 = (void*)0;
memset(&i_37, 0, sizeof(int));
memset(&i_38, 0, sizeof(int));
right_value61 = (void*)0;
    # 147 "03transpile2.c"
    buf_30=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value59=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value58=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 147, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 149 "03transpile2.c"
    class_name_31=type->mClass->mName;
    # 151 "03transpile2.c"
    buffer_append_str(buf_30,class_name_31);
    # 168 "03transpile2.c"
    # 153 "03transpile2.c"
    if(_if_conditional61=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional61) {
        # 154 "03transpile2.c"
        buffer_append_str(buf_30,"<");
        # 165 "03transpile2.c"
        for(        i_32=0;        i_32<list$1sTypeph_length(type->mGenericsTypes);        i_32++        ){
            # 156 "03transpile2.c"
            gtype_36=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_32), "03transpile2.c", 156, 0));
            # 158 "03transpile2.c"
            buffer_append_str(buf_30,((char*)(right_value60=make_come_type_name_string(gtype_36,info))));
            right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 163 "03transpile2.c"
            # 160 "03transpile2.c"
            if(_if_conditional64=i_32!=list$1sTypeph_length(type->mGenericsTypes)-1,            _if_conditional64) {
                # 161 "03transpile2.c"
                buffer_append_str(buf_30,",");
            }
        }
        # 165 "03transpile2.c"
        buffer_append_str(buf_30,">");
    }
    # 174 "03transpile2.c"
    # 168 "03transpile2.c"
    if(_if_conditional65=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_31,"lambda"),    _if_conditional65) {
        # 172 "03transpile2.c"
        for(        i_37=0;        i_37<type->mPointerNum;        i_37++        ){
            # 170 "03transpile2.c"
            buffer_append_str(buf_30,"*");
        }
    }
    # 180 "03transpile2.c"
    # 174 "03transpile2.c"
    if(_if_conditional66=list$1sNodeph_length(type->mArrayNum)>0,    _if_conditional66) {
        # 178 "03transpile2.c"
        for(        i_38=0;        i_38<list$1sNodeph_length(type->mArrayNum);        i_38++        ){
            # 176 "03transpile2.c"
            buffer_append_str(buf_30,"[]");
        }
    }
    # 184 "03transpile2.c"
    # 180 "03transpile2.c"
    if(type->mHeap) {
        # 181 "03transpile2.c"
        buffer_append_str(buf_30,"%");
    }
    # 184 "03transpile2.c"
    __result50__ = __result_obj__ = ((char*)(right_value61=buffer_to_string(buf_30)));
    come_call_finalizer2(buffer_finalize,buf_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
    come_call_finalizer2(buffer_finalize,buf_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional62;
struct list_item$1sTypeph* it_33;
int i_34;
_Bool _while_condtional4;
_Bool _if_conditional63;
struct sType* __result48__;
struct sType* default_value_35;
struct sType* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_33, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_34, 0, sizeof(int));
memset(&default_value_35, 0, sizeof(struct sType*));
                # 686 "./comelang2.h"
                # 682 "./comelang2.h"
                if(_if_conditional62=position<0,                _if_conditional62) {
                    # 683 "./comelang2.h"
                    position+=self->len;
                }
                # 686 "./comelang2.h"
                it_33=self->head;
                # 687 "./comelang2.h"
                i_34=0;
                # 694 "./comelang2.h"
                while(_while_condtional4=it_33!=((void*)0),                _while_condtional4) {
                    # 692 "./comelang2.h"
                    # 689 "./comelang2.h"
                    if(_if_conditional63=position==i_34,                    _if_conditional63) {
                        # 690 "./comelang2.h"
                        __result48__ = __result_obj__ = it_33->item;
                        return __result48__;
                    }
                    # 692 "./comelang2.h"
                    it_33=it_33->next;
                    # 693 "./comelang2.h"
                    i_34++;
                }
                # 696 "./comelang2.h"
                # 697 "./comelang2.h"
                memset(&default_value_35,0,sizeof(struct sType*));
                # 698 "./comelang2.h"
                __result49__ = __result_obj__ = default_value_35;
                come_call_finalizer2(sType_finalize,default_value_35, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result49__;
                come_call_finalizer2(sType_finalize,default_value_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value62;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
    # 189 "03transpile2.c"
    puts(((char*)(right_value62=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
void* right_value63;
void* right_value64;
struct buffer* buf_39;
_Bool _if_conditional68;
void* right_value65;
char* __result51__;
_Bool _if_conditional69;
void* right_value66;
int i_40;
struct list$1sTypeph* o2_saved_41;
struct sType* it_42;
void* right_value67;
_Bool _if_conditional70;
void* right_value68;
void* right_value69;
char* __result52__;
void* right_value70;
void* right_value71;
int i_43;
struct list$1sTypeph* o2_saved_44;
struct sType* it_45;
void* right_value72;
_Bool _if_conditional71;
void* right_value73;
char* __result53__;
void* right_value74;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&buf_39, 0, sizeof(struct buffer*));
right_value65 = (void*)0;
right_value66 = (void*)0;
memset(&i_40, 0, sizeof(int));
memset(&o2_saved_41, 0, sizeof(struct list$1sTypeph*));
memset(&it_42, 0, sizeof(struct sType*));
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&i_43, 0, sizeof(int));
memset(&o2_saved_44, 0, sizeof(struct list$1sTypeph*));
memset(&it_45, 0, sizeof(struct sType*));
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
    # 194 "03transpile2.c"
    buf_39=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value64=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value63=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 194, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 200 "03transpile2.c"
    # 195 "03transpile2.c"
    if(_if_conditional68=type->mResultType==((void*)0),    _if_conditional68) {
        # 196 "03transpile2.c"
        err_msg(info,"invalid lambda type");
        # 197 "03transpile2.c"
        __result51__ = __result_obj__ = ((char*)(right_value65=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result51__;
    }
    # 236 "03transpile2.c"
    # 200 "03transpile2.c"
    if(_if_conditional69=type->mResultType->v1&&string_operator_equals(type->mResultType->v1->mClass->mName,"lambda"),    _if_conditional69) {
        # 202 "03transpile2.c"
        buffer_append_str(buf_39,((char*)(right_value66=xsprintf("(*%s)(",var_name))));
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 204 "03transpile2.c"
        i_40=0;
        # 214 "03transpile2.c"
        for(        o2_saved_41=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_42=list$1sTypeph_begin((o2_saved_41));        !list$1sTypeph_end((o2_saved_41));        it_42=list$1sTypeph_next((o2_saved_41))        ){
            # 206 "03transpile2.c"
            buffer_append_str(buf_39,((char*)(right_value67=make_type_name_string(it_42,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 211 "03transpile2.c"
            # 207 "03transpile2.c"
            if(_if_conditional70=i_40!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional70) {
                # 208 "03transpile2.c"
                buffer_append_str(buf_39,",");
            }
            # 211 "03transpile2.c"
            i_40++;
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 214 "03transpile2.c"
        buffer_append_str(buf_39,")");
        # 216 "03transpile2.c"
        __result52__ = __result_obj__ = ((char*)(right_value69=make_lambda_type_name_string(type->mResultType->v1,((char*)(right_value68=buffer_to_string(buf_39))),info)));
        come_call_finalizer2(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result52__;
    }
    else {
        # 219 "03transpile2.c"
        buffer_append_str(buf_39,((char*)(right_value71=xsprintf("%s (*%s)(",((char*)(right_value70=make_type_name_string(type->mResultType->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))),var_name))));
        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 221 "03transpile2.c"
        i_43=0;
        # 231 "03transpile2.c"
        for(        o2_saved_44=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_45=list$1sTypeph_begin((o2_saved_44));        !list$1sTypeph_end((o2_saved_44));        it_45=list$1sTypeph_next((o2_saved_44))        ){
            # 223 "03transpile2.c"
            buffer_append_str(buf_39,((char*)(right_value72=make_type_name_string(it_45,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 228 "03transpile2.c"
            # 224 "03transpile2.c"
            if(_if_conditional71=i_43!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional71) {
                # 225 "03transpile2.c"
                buffer_append_str(buf_39,",");
            }
            # 228 "03transpile2.c"
            i_43++;
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 231 "03transpile2.c"
        buffer_append_str(buf_39,")");
        # 233 "03transpile2.c"
        __result53__ = __result_obj__ = ((char*)(right_value73=buffer_to_string(buf_39)));
        come_call_finalizer2(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result53__;
    }
    # 236 "03transpile2.c"
    __result54__ = __result_obj__ = ((char*)(right_value74=buffer_to_string(buf_39)));
    come_call_finalizer2(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
    come_call_finalizer2(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
void* right_value75;
void* right_value76;
struct buffer* buf_46;
_Bool _if_conditional72;
void* right_value77;
char* str_47;
_Bool _if_conditional73;
void* right_value78;
char* str_48;
_Bool _if_conditional74;
_Bool _if_conditional75;
void* right_value79;
char* __result55__;
void* right_value80;
struct CVALUE* come_value_49;
void* right_value81;
char* type_str_50;
void* right_value82;
void* right_value83;
_Bool _if_conditional76;
void* right_value84;
_Bool _if_conditional77;
void* right_value85;
_Bool _if_conditional78;
void* right_value86;
char* type_str_51;
_Bool _if_conditional79;
void* right_value87;
_Bool _if_conditional80;
void* right_value88;
char* type_str_52;
_Bool _if_conditional81;
_Bool _if_conditional82;
struct list$1sNodeph* o2_saved_53;
struct sNode* it_56;
_Bool _if_conditional87;
void* right_value89;
char* __result63__;
void* right_value90;
struct CVALUE* cvalue_59;
void* right_value91;
_Bool _if_conditional88;
void* right_value92;
void* right_value93;
char* type_str_60;
_Bool _if_conditional89;
void* right_value94;
char* __result64__;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
void* right_value95;
void* right_value96;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value75 = (void*)0;
right_value76 = (void*)0;
memset(&buf_46, 0, sizeof(struct buffer*));
right_value77 = (void*)0;
memset(&str_47, 0, sizeof(char*));
right_value78 = (void*)0;
memset(&str_48, 0, sizeof(char*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&come_value_49, 0, sizeof(struct CVALUE*));
right_value81 = (void*)0;
memset(&type_str_50, 0, sizeof(char*));
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&type_str_51, 0, sizeof(char*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&type_str_52, 0, sizeof(char*));
memset(&o2_saved_53, 0, sizeof(struct list$1sNodeph*));
memset(&it_56, 0, sizeof(struct sNode*));
right_value89 = (void*)0;
right_value90 = (void*)0;
memset(&cvalue_59, 0, sizeof(struct CVALUE*));
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&type_str_60, 0, sizeof(char*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
    # 243 "03transpile2.c"
    buf_46=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value76=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 243, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 342 "03transpile2.c"
    # 245 "03transpile2.c"
    if(_if_conditional72=string_operator_equals(type->mClass->mName,"lambda")&&type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),    _if_conditional72) {
        # 246 "03transpile2.c"
        str_47=(char*)come_increment_ref_count(((char*)(right_value77=header_lambda(type,(char*)come_increment_ref_count(type->mAsmName),info))));
        right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 248 "03transpile2.c"
        buffer_append_str(buf_46,str_47);
        str_47 = come_decrement_ref_count2(str_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 342 "03transpile2.c"
        # 250 "03transpile2.c"
        if(_if_conditional73=string_operator_equals(type->mClass->mName,"lambda"),        _if_conditional73) {
            # 251 "03transpile2.c"
            str_48=(char*)come_increment_ref_count(((char*)(right_value78=make_lambda_type_name_string(type,name,info))));
            right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 253 "03transpile2.c"
            buffer_append_str(buf_46,str_48);
            str_48 = come_decrement_ref_count2(str_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 342 "03transpile2.c"
            # 255 "03transpile2.c"
            if(_if_conditional74=type->mSizeNum!=((void*)0),            _if_conditional74) {
                # 261 "03transpile2.c"
                # 256 "03transpile2.c"
                if(_if_conditional75=!node_compile(type->mSizeNum,info),                _if_conditional75) {
                    # 257 "03transpile2.c"
                    err_msg(info,"invalid bit field number");
                    # 258 "03transpile2.c"
                    __result55__ = __result_obj__ = ((char*)(right_value79=__builtin_string("")));
                    come_call_finalizer2(buffer_finalize,buf_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result55__;
                }
                # 261 "03transpile2.c"
                come_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value80=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 262 "03transpile2.c"
                dec_stack_ptr(1,info);
                # 264 "03transpile2.c"
                type_str_50=(char*)come_increment_ref_count(((char*)(right_value81=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 265 "03transpile2.c"
                buffer_append_str(buf_46,((char*)(right_value82=xsprintf("%s ",type_str_50))));
                right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 266 "03transpile2.c"
                buffer_append_str(buf_46,((char*)(right_value83=xsprintf("%s:%s",name,come_value_49->c_value))));
                right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 272 "03transpile2.c"
                # 268 "03transpile2.c"
                if(_if_conditional76=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional76) {
                    # 269 "03transpile2.c"
                    buffer_append_str(buf_46,((char*)(right_value84=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 275 "03transpile2.c"
                # 272 "03transpile2.c"
                if(_if_conditional77=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional77) {
                    # 273 "03transpile2.c"
                    buffer_append_str(buf_46,((char*)(right_value85=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_str_50 = come_decrement_ref_count2(type_str_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 342 "03transpile2.c"
                # 276 "03transpile2.c"
                if(type->mOmitArrayNum) {
                    # 277 "03transpile2.c"
                    type_str_51=(char*)come_increment_ref_count(((char*)(right_value86=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 279 "03transpile2.c"
                    buffer_append_str(buf_46,type_str_51);
                    # 281 "03transpile2.c"
                    buffer_append_str(buf_46," ");
                    # 282 "03transpile2.c"
                    buffer_append_str(buf_46,name);
                    # 284 "03transpile2.c"
                    buffer_append_str(buf_46,"[]");
                    # 289 "03transpile2.c"
                    # 286 "03transpile2.c"
                    if(_if_conditional79=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                    _if_conditional79) {
                        # 287 "03transpile2.c"
                        buffer_append_str(buf_46,((char*)(right_value87=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    type_str_51 = come_decrement_ref_count2(type_str_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 342 "03transpile2.c"
                    # 290 "03transpile2.c"
                    if(_if_conditional80=list$1sNodeph_length(type->mArrayNum)>0,                    _if_conditional80) {
                        # 291 "03transpile2.c"
                        type_str_52=(char*)come_increment_ref_count(((char*)(right_value88=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 293 "03transpile2.c"
                        buffer_append_str(buf_46,type_str_52);
                        # 295 "03transpile2.c"
                        buffer_append_str(buf_46," ");
                        # 299 "03transpile2.c"
                        # 296 "03transpile2.c"
                        if(_if_conditional81=type->mNoArrayPointerNum>0,                        _if_conditional81) {
                            # 297 "03transpile2.c"
                            buffer_append_str(buf_46,"(*");
                        }
                        # 299 "03transpile2.c"
                        buffer_append_str(buf_46,name);
                        # 304 "03transpile2.c"
                        # 300 "03transpile2.c"
                        if(_if_conditional82=type->mNoArrayPointerNum>0,                        _if_conditional82) {
                            # 301 "03transpile2.c"
                            buffer_append_str(buf_46,")");
                        }
                        # 315 "03transpile2.c"
                        for(                        o2_saved_53=(struct list$1sNodeph*)come_increment_ref_count((type->mArrayNum)),it_56=list$1sNodeph_begin((o2_saved_53));                        !list$1sNodeph_end((o2_saved_53));                        it_56=list$1sNodeph_next((o2_saved_53))                        ){
                            # 309 "03transpile2.c"
                            # 305 "03transpile2.c"
                            if(_if_conditional87=!node_compile(it_56,info),                            _if_conditional87) {
                                # 306 "03transpile2.c"
                                err_msg(info,"invalid array number");
                                # 307 "03transpile2.c"
                                __result63__ = __result_obj__ = ((char*)(right_value89=__builtin_string("")));
                                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_str_52 = come_decrement_ref_count2(type_str_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(buffer_finalize,buf_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                return __result63__;
                            }
                            # 309 "03transpile2.c"
                            cvalue_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value90=get_value_from_stack(-1,info))));
                            come_call_finalizer2(CVALUE_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 310 "03transpile2.c"
                            dec_stack_ptr(1,info);
                            # 312 "03transpile2.c"
                            buffer_append_str(buf_46,((char*)(right_value91=xsprintf("[%s]",cvalue_59->c_value))));
                            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(CVALUE_finalize,cvalue_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 318 "03transpile2.c"
                        # 315 "03transpile2.c"
                        if(_if_conditional88=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional88) {
                            # 316 "03transpile2.c"
                            buffer_append_str(buf_46,((char*)(right_value92=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_52 = come_decrement_ref_count2(type_str_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 320 "03transpile2.c"
                        type_str_60=(char*)come_increment_ref_count(((char*)(right_value93=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 326 "03transpile2.c"
                        # 322 "03transpile2.c"
                        if(_if_conditional89=string_operator_equals(type_str_60,""),                        _if_conditional89) {
                            # 323 "03transpile2.c"
                            __result64__ = __result_obj__ = ((char*)(right_value94=__builtin_string("")));
                            type_str_60 = come_decrement_ref_count2(type_str_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,buf_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            return __result64__;
                        }
                        # 326 "03transpile2.c"
                        buffer_append_str(buf_46,type_str_60);
                        # 328 "03transpile2.c"
                        buffer_append_str(buf_46," ");
                        # 332 "03transpile2.c"
                        # 329 "03transpile2.c"
                        if(_if_conditional90=type->mNoArrayPointerNum>0,                        _if_conditional90) {
                            # 330 "03transpile2.c"
                            buffer_append_str(buf_46,"(*");
                        }
                        # 332 "03transpile2.c"
                        buffer_append_str(buf_46,name);
                        # 337 "03transpile2.c"
                        # 333 "03transpile2.c"
                        if(_if_conditional91=type->mNoArrayPointerNum>0,                        _if_conditional91) {
                            # 334 "03transpile2.c"
                            buffer_append_str(buf_46,")");
                        }
                        # 340 "03transpile2.c"
                        # 337 "03transpile2.c"
                        if(_if_conditional92=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional92) {
                            # 338 "03transpile2.c"
                            buffer_append_str(buf_46,((char*)(right_value95=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_60 = come_decrement_ref_count2(type_str_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    # 342 "03transpile2.c"
    __result65__ = __result_obj__ = ((char*)(right_value96=buffer_to_string(buf_46)));
    come_call_finalizer2(buffer_finalize,buf_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
    come_call_finalizer2(buffer_finalize,buf_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional83;
struct sNode* result_54;
struct sNode* __result56__;
_Bool _if_conditional84;
struct sNode* __result57__;
struct sNode* result_55;
struct sNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_54, 0, sizeof(struct sNode*));
memset(&result_55, 0, sizeof(struct sNode*));
                            # 290 "./comelang2.h"
                            # 285 "./comelang2.h"
                            if(_if_conditional83=self==((void*)0),                            _if_conditional83) {
                                # 286 "./comelang2.h"
                                # 287 "./comelang2.h"
                                memset(&result_54,0,sizeof(struct sNode*));
                                # 288 "./comelang2.h"
                                __result56__ = __result_obj__ = result_54;
                                return __result56__;
                            }
                            # 290 "./comelang2.h"
                            self->it=self->head;
                            # 296 "./comelang2.h"
                            # 292 "./comelang2.h"
                            if(self->it) {
                                # 293 "./comelang2.h"
                                __result57__ = __result_obj__ = self->it->item;
                                return __result57__;
                            }
                            # 296 "./comelang2.h"
                            # 297 "./comelang2.h"
                            memset(&result_55,0,sizeof(struct sNode*));
                            # 298 "./comelang2.h"
                            __result58__ = __result_obj__ = result_55;
                            return __result58__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 320 "./comelang2.h"
                            __result59__ = self==((void*)0)||self->it==((void*)0);
                            return __result59__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional85;
struct sNode* result_57;
struct sNode* __result60__;
_Bool _if_conditional86;
struct sNode* __result61__;
struct sNode* result_58;
struct sNode* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_57, 0, sizeof(struct sNode*));
memset(&result_58, 0, sizeof(struct sNode*));
                            # 308 "./comelang2.h"
                            # 302 "./comelang2.h"
                            if(_if_conditional85=self==((void*)0)||self->it==((void*)0),                            _if_conditional85) {
                                # 303 "./comelang2.h"
                                # 304 "./comelang2.h"
                                memset(&result_57,0,sizeof(struct sNode*));
                                # 305 "./comelang2.h"
                                __result60__ = __result_obj__ = result_57;
                                return __result60__;
                            }
                            # 308 "./comelang2.h"
                            self->it=self->it->next;
                            # 314 "./comelang2.h"
                            # 310 "./comelang2.h"
                            if(self->it) {
                                # 311 "./comelang2.h"
                                __result61__ = __result_obj__ = self->it->item;
                                return __result61__;
                            }
                            # 314 "./comelang2.h"
                            # 315 "./comelang2.h"
                            memset(&result_58,0,sizeof(struct sNode*));
                            # 316 "./comelang2.h"
                            __result62__ = __result_obj__ = result_58;
                            return __result62__;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value97;
void* right_value98;
struct buffer* output_61;
_Bool _if_conditional93;
void* right_value99;
void* right_value100;
struct buffer* output2_62;
int i_63;
struct list$1sTypeph* o2_saved_64;
struct sType* it_65;
char* name_69;
void* right_value101;
char* str_70;
_Bool _if_conditional96;
_Bool _if_conditional97;
void* right_value102;
void* right_value103;
char* str_71;
void* right_value104;
_Bool _if_conditional98;
void* right_value140;
struct sType* base_result_type_90;
void* right_value141;
void* right_value142;
struct list$1sNodeph* __dec_obj35;
void* right_value143;
char* result_type_str_91;
int i_92;
struct list$1sTypeph* o2_saved_93;
struct sType* it_94;
char* name_95;
void* right_value144;
char* str_96;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct sNode* node_100;
_Bool _if_conditional176;
void* right_value145;
char* __result88__;
void* right_value146;
struct CVALUE* cvalue_101;
void* right_value147;
void* right_value148;
void* right_value149;
char* result_type_str_102;
int i_103;
struct list$1sTypeph* o2_saved_104;
struct sType* it_105;
char* name_106;
void* right_value150;
char* str_107;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value151;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
right_value98 = (void*)0;
memset(&output_61, 0, sizeof(struct buffer*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&output2_62, 0, sizeof(struct buffer*));
memset(&i_63, 0, sizeof(int));
memset(&o2_saved_64, 0, sizeof(struct list$1sTypeph*));
memset(&it_65, 0, sizeof(struct sType*));
memset(&name_69, 0, sizeof(char*));
right_value101 = (void*)0;
memset(&str_70, 0, sizeof(char*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&str_71, 0, sizeof(char*));
right_value104 = (void*)0;
right_value140 = (void*)0;
memset(&base_result_type_90, 0, sizeof(struct sType*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&result_type_str_91, 0, sizeof(char*));
memset(&i_92, 0, sizeof(int));
memset(&o2_saved_93, 0, sizeof(struct list$1sTypeph*));
memset(&it_94, 0, sizeof(struct sType*));
memset(&name_95, 0, sizeof(char*));
right_value144 = (void*)0;
memset(&str_96, 0, sizeof(char*));
memset(&node_100, 0, sizeof(struct sNode*));
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&cvalue_101, 0, sizeof(struct CVALUE*));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&result_type_str_102, 0, sizeof(char*));
memset(&i_103, 0, sizeof(int));
memset(&o2_saved_104, 0, sizeof(struct list$1sTypeph*));
memset(&it_105, 0, sizeof(struct sType*));
memset(&name_106, 0, sizeof(char*));
right_value150 = (void*)0;
memset(&str_107, 0, sizeof(char*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
    # 347 "03transpile2.c"
    output_61=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value98=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value97=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 347, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 461 "03transpile2.c"
    # 348 "03transpile2.c"
    if(fun->mResultType->mResultType) {
        # 349 "03transpile2.c"
        output2_62=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value100=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value99=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 349, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 351 "03transpile2.c"
        buffer_append_str(output2_62,fun->mName);
        # 352 "03transpile2.c"
        buffer_append_str(output2_62,"(");
        # 354 "03transpile2.c"
        i_63=0;
        # 372 "03transpile2.c"
        for(        o2_saved_64=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_65=list$1sTypeph_begin((o2_saved_64));        !list$1sTypeph_end((o2_saved_64));        it_65=list$1sTypeph_next((o2_saved_64))        ){
            # 356 "03transpile2.c"
            name_69=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_63), "03transpile2.c", 356, 1));
            # 358 "03transpile2.c"
            str_70=(char*)come_increment_ref_count(((char*)(right_value101=make_define_var(it_65,name_69,(_Bool)0,info))));
            right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 359 "03transpile2.c"
            buffer_append_str(output2_62,str_70);
            # 370 "03transpile2.c"
            # 361 "03transpile2.c"
            if(_if_conditional96=i_63==list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional96) {
                # 365 "03transpile2.c"
                # 362 "03transpile2.c"
                if(fun->mVarArgs) {
                    # 363 "03transpile2.c"
                    buffer_append_str(output2_62,", ...");
                }
            }
            else {
                # 367 "03transpile2.c"
                buffer_append_str(output2_62,", ");
            }
            # 370 "03transpile2.c"
            i_63++;
            str_70 = come_decrement_ref_count2(str_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 372 "03transpile2.c"
        buffer_append_str(output2_62,")");
        # 374 "03transpile2.c"
        str_71=(char*)come_increment_ref_count(((char*)(right_value103=make_lambda_type_name_string(fun->mResultType,((char*)(right_value102=buffer_to_string(output2_62))),info))));
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 376 "03transpile2.c"
        buffer_append_str(output_61,str_71);
        # 380 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,((char*)(right_value104=buffer_to_string(output_61))));
        right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 381 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,";\n");
        come_call_finalizer2(buffer_finalize,output2_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str_71 = come_decrement_ref_count2(str_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 461 "03transpile2.c"
        # 383 "03transpile2.c"
        if(_if_conditional98=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional98) {
            # 384 "03transpile2.c"
            base_result_type_90=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 385 "03transpile2.c"
            __dec_obj35=base_result_type_90->mArrayNum;
            base_result_type_90->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value142=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value141=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 385, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 387 "03transpile2.c"
            result_type_str_91=(char*)come_increment_ref_count(((char*)(right_value143=make_type_name_string(base_result_type_90,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 389 "03transpile2.c"
            buffer_append_str(output_61,result_type_str_91);
            # 390 "03transpile2.c"
            buffer_append_str(output_61," (*");
            # 392 "03transpile2.c"
            buffer_append_str(output_61,fun->mName);
            # 393 "03transpile2.c"
            buffer_append_str(output_61,"(");
            # 395 "03transpile2.c"
            i_92=0;
            # 414 "03transpile2.c"
            for(            o2_saved_93=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_94=list$1sTypeph_begin((o2_saved_93));            !list$1sTypeph_end((o2_saved_93));            it_94=list$1sTypeph_next((o2_saved_93))            ){
                # 397 "03transpile2.c"
                name_95=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_92), "03transpile2.c", 397, 2));
                # 399 "03transpile2.c"
                str_96=(char*)come_increment_ref_count(((char*)(right_value144=make_define_var(it_94,name_95,(_Bool)0,info))));
                right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 400 "03transpile2.c"
                buffer_append_str(output_61,str_96);
                # 411 "03transpile2.c"
                # 402 "03transpile2.c"
                if(_if_conditional172=i_92==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional172) {
                    # 406 "03transpile2.c"
                    # 403 "03transpile2.c"
                    if(fun->mVarArgs) {
                        # 404 "03transpile2.c"
                        buffer_append_str(output_61,", ...");
                    }
                }
                else {
                    # 408 "03transpile2.c"
                    buffer_append_str(output_61,", ");
                }
                # 411 "03transpile2.c"
                i_92++;
                str_96 = come_decrement_ref_count2(str_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 414 "03transpile2.c"
            node_100=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0), "03transpile2.c", 414, 3));
            # 420 "03transpile2.c"
            # 416 "03transpile2.c"
            if(_if_conditional176=!node_compile(node_100,info),            _if_conditional176) {
                # 417 "03transpile2.c"
                err_msg(info,"invalid array number");
                # 418 "03transpile2.c"
                __result88__ = __result_obj__ = ((char*)(right_value145=__builtin_string("")));
                come_call_finalizer2(sType_finalize,base_result_type_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_type_str_91 = come_decrement_ref_count2(result_type_str_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,output_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result88__;
            }
            # 420 "03transpile2.c"
            cvalue_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 421 "03transpile2.c"
            dec_stack_ptr(1,info);
            # 423 "03transpile2.c"
            buffer_append_str(output_61,((char*)(right_value147=xsprintf("))[%s]",cvalue_101->c_value))));
            right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 425 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,((char*)(right_value148=buffer_to_string(output_61))));
            right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 426 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,";\n");
            come_call_finalizer2(sType_finalize,base_result_type_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            result_type_str_91 = come_decrement_ref_count2(result_type_str_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,cvalue_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 429 "03transpile2.c"
            result_type_str_102=(char*)come_increment_ref_count(((char*)(right_value149=make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 431 "03transpile2.c"
            buffer_append_str(output_61,result_type_str_102);
            # 432 "03transpile2.c"
            buffer_append_str(output_61," ");
            # 434 "03transpile2.c"
            buffer_append_str(output_61,fun->mName);
            # 435 "03transpile2.c"
            buffer_append_str(output_61,"(");
            # 437 "03transpile2.c"
            i_103=0;
            # 455 "03transpile2.c"
            for(            o2_saved_104=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_105=list$1sTypeph_begin((o2_saved_104));            !list$1sTypeph_end((o2_saved_104));            it_105=list$1sTypeph_next((o2_saved_104))            ){
                # 439 "03transpile2.c"
                name_106=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_103), "03transpile2.c", 439, 4));
                # 441 "03transpile2.c"
                str_107=(char*)come_increment_ref_count(((char*)(right_value150=make_define_var(it_105,name_106,(_Bool)0,info))));
                right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 442 "03transpile2.c"
                buffer_append_str(output_61,str_107);
                # 452 "03transpile2.c"
                # 444 "03transpile2.c"
                if(_if_conditional177=i_103==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional177) {
                    # 448 "03transpile2.c"
                    # 445 "03transpile2.c"
                    if(fun->mVarArgs) {
                        # 446 "03transpile2.c"
                        buffer_append_str(output_61,", ...");
                    }
                }
                else {
                    # 450 "03transpile2.c"
                    buffer_append_str(output_61,", ");
                }
                # 452 "03transpile2.c"
                i_103++;
                str_107 = come_decrement_ref_count2(str_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 455 "03transpile2.c"
            buffer_append_str(output_61,")");
            # 457 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,((char*)(right_value151=buffer_to_string(output_61))));
            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 458 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,";\n");
            result_type_str_102 = come_decrement_ref_count2(result_type_str_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 461 "03transpile2.c"
    buffer_append_str(output_61,"{\n");
    # 463 "03transpile2.c"
    buffer_append_str(output_61,((char*)(right_value152=buffer_to_string(fun->mSourceHead))));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 464 "03transpile2.c"
    buffer_append_str(output_61,((char*)(right_value153=buffer_to_string(fun->mSourceHead2))));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 465 "03transpile2.c"
    buffer_append_str(output_61,((char*)(right_value154=buffer_to_string(fun->mSource))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 467 "03transpile2.c"
    buffer_append_str(output_61,"}\n");
    # 469 "03transpile2.c"
    __result89__ = __result_obj__ = ((char*)(right_value155=buffer_to_string(output_61)));
    come_call_finalizer2(buffer_finalize,output_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
    come_call_finalizer2(buffer_finalize,output_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional94;
struct list_item$1charph* it_66;
int i_67;
_Bool _while_condtional5;
_Bool _if_conditional95;
char* __result66__;
char* default_value_68;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_66, 0, sizeof(struct list_item$1charph*));
memset(&i_67, 0, sizeof(int));
memset(&default_value_68, 0, sizeof(char*));
                # 686 "./comelang2.h"
                # 682 "./comelang2.h"
                if(_if_conditional94=position<0,                _if_conditional94) {
                    # 683 "./comelang2.h"
                    position+=self->len;
                }
                # 686 "./comelang2.h"
                it_66=self->head;
                # 687 "./comelang2.h"
                i_67=0;
                # 694 "./comelang2.h"
                while(_while_condtional5=it_66!=((void*)0),                _while_condtional5) {
                    # 692 "./comelang2.h"
                    # 689 "./comelang2.h"
                    if(_if_conditional95=position==i_67,                    _if_conditional95) {
                        # 690 "./comelang2.h"
                        __result66__ = __result_obj__ = it_66->item;
                        return __result66__;
                    }
                    # 692 "./comelang2.h"
                    it_66=it_66->next;
                    # 693 "./comelang2.h"
                    i_67++;
                }
                # 696 "./comelang2.h"
                # 697 "./comelang2.h"
                memset(&default_value_68,0,sizeof(char*));
                # 698 "./comelang2.h"
                __result67__ = __result_obj__ = default_value_68;
                default_value_68 = come_decrement_ref_count2(default_value_68, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result67__;
                default_value_68 = come_decrement_ref_count2(default_value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional99;
struct sType* __result68__;
void* right_value105;
struct sType* result_72;
_Bool _if_conditional100;
_Bool _if_conditional101;
void* right_value112;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional105;
void* right_value115;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional109;
void* right_value116;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional110;
void* right_value117;
char* __dec_obj19;
_Bool _if_conditional111;
void* right_value118;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional112;
void* right_value126;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value127;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional127;
void* right_value134;
struct list$1charph* __dec_obj29;
_Bool _if_conditional131;
void* right_value135;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional132;
_Bool _if_conditional133;
void* right_value136;
struct sNode* __dec_obj31;
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
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
void* right_value137;
struct sNode* __dec_obj32;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value138;
char* __dec_obj33;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value139;
char* __dec_obj34;
_Bool _if_conditional171;
struct sType* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
memset(&result_72, 0, sizeof(struct sType*));
right_value112 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
                # 3 "sType_clone"
                # 2 "sType_clone"
                if(_if_conditional99=self==(void*)0,                _if_conditional99) {
                    # 2 "sType_clone"
                    __result68__ = __result_obj__ = (void*)0;
                    return __result68__;
                }
                # 3 "sType_clone"
                result_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer2(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    # 4 "sType_clone"
                    result_72->mClass=self->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional101=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional101) {
                    # 5 "sType_clone"
                    __dec_obj15=result_72->mMultipleTypes;
                    result_72->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value112=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional105=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional105) {
                    # 6 "sType_clone"
                    __dec_obj17=result_72->mNoSolvedGenericsType;
                    result_72->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value115=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 8 "sType_clone"
                # 7 "sType_clone"
                if(_if_conditional109=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional109) {
                    # 7 "sType_clone"
                    __dec_obj18=result_72->mOriginalLoadVarType;
                    result_72->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value116=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 9 "sType_clone"
                # 8 "sType_clone"
                if(_if_conditional110=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional110) {
                    # 8 "sType_clone"
                    __dec_obj19=result_72->mGenericsName;
                    result_72->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(self->mGenericsName))));
                    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sType_clone"
                # 9 "sType_clone"
                if(_if_conditional111=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional111) {
                    # 9 "sType_clone"
                    __dec_obj20=result_72->mGenericsTypes;
                    result_72->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value118=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 11 "sType_clone"
                # 10 "sType_clone"
                if(_if_conditional112=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional112) {
                    # 10 "sType_clone"
                    __dec_obj24=result_72->mArrayNum;
                    result_72->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value126=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 12 "sType_clone"
                # 11 "sType_clone"
                if(_if_conditional125=self!=((void*)0),                _if_conditional125) {
                    # 11 "sType_clone"
                    result_72->mOmitArrayNum=self->mOmitArrayNum;
                }
                # 13 "sType_clone"
                # 12 "sType_clone"
                if(_if_conditional126=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional126) {
                    # 12 "sType_clone"
                    __dec_obj25=result_72->mParamTypes;
                    result_72->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value127=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 14 "sType_clone"
                # 13 "sType_clone"
                if(_if_conditional127=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional127) {
                    # 13 "sType_clone"
                    __dec_obj29=result_72->mParamNames;
                    result_72->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 15 "sType_clone"
                # 14 "sType_clone"
                if(_if_conditional131=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional131) {
                    # 14 "sType_clone"
                    __dec_obj30=result_72->mResultType;
                    result_72->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value135=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 16 "sType_clone"
                # 15 "sType_clone"
                if(_if_conditional132=self!=((void*)0),                _if_conditional132) {
                    # 15 "sType_clone"
                    result_72->mVarArgs=self->mVarArgs;
                }
                # 17 "sType_clone"
                # 16 "sType_clone"
                if(_if_conditional133=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional133) {
                    # 16 "sType_clone"
                    __dec_obj31=result_72->mAlignas;
                    result_72->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value136=sNode_clone(self->mAlignas))));
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value136) { right_value136 = come_decrement_ref_count2(right_value136, ((struct sNode*)right_value136)->finalize, ((struct sNode*)right_value136)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 18 "sType_clone"
                # 17 "sType_clone"
                if(_if_conditional134=self!=((void*)0),                _if_conditional134) {
                    # 17 "sType_clone"
                    result_72->mUnsigned=self->mUnsigned;
                }
                # 19 "sType_clone"
                # 18 "sType_clone"
                if(_if_conditional135=self!=((void*)0),                _if_conditional135) {
                    # 18 "sType_clone"
                    result_72->mShort=self->mShort;
                }
                # 20 "sType_clone"
                # 19 "sType_clone"
                if(_if_conditional136=self!=((void*)0),                _if_conditional136) {
                    # 19 "sType_clone"
                    result_72->mLong=self->mLong;
                }
                # 21 "sType_clone"
                # 20 "sType_clone"
                if(_if_conditional137=self!=((void*)0),                _if_conditional137) {
                    # 20 "sType_clone"
                    result_72->mLongLong=self->mLongLong;
                }
                # 22 "sType_clone"
                # 21 "sType_clone"
                if(_if_conditional138=self!=((void*)0),                _if_conditional138) {
                    # 21 "sType_clone"
                    result_72->mConstant=self->mConstant;
                }
                # 23 "sType_clone"
                # 22 "sType_clone"
                if(_if_conditional139=self!=((void*)0),                _if_conditional139) {
                    # 22 "sType_clone"
                    result_72->mRegister=self->mRegister;
                }
                # 24 "sType_clone"
                # 23 "sType_clone"
                if(_if_conditional140=self!=((void*)0),                _if_conditional140) {
                    # 23 "sType_clone"
                    result_72->mVolatile=self->mVolatile;
                }
                # 25 "sType_clone"
                # 24 "sType_clone"
                if(_if_conditional141=self!=((void*)0),                _if_conditional141) {
                    # 24 "sType_clone"
                    result_72->mStatic=self->mStatic;
                }
                # 26 "sType_clone"
                # 25 "sType_clone"
                if(_if_conditional142=self!=((void*)0),                _if_conditional142) {
                    # 25 "sType_clone"
                    result_72->mExtern=self->mExtern;
                }
                # 27 "sType_clone"
                # 26 "sType_clone"
                if(_if_conditional143=self!=((void*)0),                _if_conditional143) {
                    # 26 "sType_clone"
                    result_72->mRestrict=self->mRestrict;
                }
                # 28 "sType_clone"
                # 27 "sType_clone"
                if(_if_conditional144=self!=((void*)0),                _if_conditional144) {
                    # 27 "sType_clone"
                    result_72->mImmutable=self->mImmutable;
                }
                # 29 "sType_clone"
                # 28 "sType_clone"
                if(_if_conditional145=self!=((void*)0),                _if_conditional145) {
                    # 28 "sType_clone"
                    result_72->mHeap=self->mHeap;
                }
                # 30 "sType_clone"
                # 29 "sType_clone"
                if(_if_conditional146=self!=((void*)0),                _if_conditional146) {
                    # 29 "sType_clone"
                    result_72->mDummyHeap=self->mDummyHeap;
                }
                # 31 "sType_clone"
                # 30 "sType_clone"
                if(_if_conditional147=self!=((void*)0),                _if_conditional147) {
                    # 30 "sType_clone"
                    result_72->mDelegate=self->mDelegate;
                }
                # 32 "sType_clone"
                # 31 "sType_clone"
                if(_if_conditional148=self!=((void*)0),                _if_conditional148) {
                    # 31 "sType_clone"
                    result_72->mShare=self->mShare;
                }
                # 33 "sType_clone"
                # 32 "sType_clone"
                if(_if_conditional149=self!=((void*)0),                _if_conditional149) {
                    # 32 "sType_clone"
                    result_72->mClone=self->mClone;
                }
                # 34 "sType_clone"
                # 33 "sType_clone"
                if(_if_conditional150=self!=((void*)0),                _if_conditional150) {
                    # 33 "sType_clone"
                    result_72->mNoHeap=self->mNoHeap;
                }
                # 35 "sType_clone"
                # 34 "sType_clone"
                if(_if_conditional151=self!=((void*)0),                _if_conditional151) {
                    # 34 "sType_clone"
                    result_72->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                # 36 "sType_clone"
                # 35 "sType_clone"
                if(_if_conditional152=self!=((void*)0),                _if_conditional152) {
                    # 35 "sType_clone"
                    result_72->mRefference=self->mRefference;
                }
                # 37 "sType_clone"
                # 36 "sType_clone"
                if(_if_conditional153=self!=((void*)0),                _if_conditional153) {
                    # 36 "sType_clone"
                    result_72->mException=self->mException;
                }
                # 38 "sType_clone"
                # 37 "sType_clone"
                if(_if_conditional154=self!=((void*)0),                _if_conditional154) {
                    # 37 "sType_clone"
                    result_72->mPointerNum=self->mPointerNum;
                }
                # 39 "sType_clone"
                # 38 "sType_clone"
                if(_if_conditional155=self!=((void*)0),                _if_conditional155) {
                    # 38 "sType_clone"
                    result_72->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                # 40 "sType_clone"
                # 39 "sType_clone"
                if(_if_conditional156=self!=((void*)0),                _if_conditional156) {
                    # 39 "sType_clone"
                    result_72->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                # 41 "sType_clone"
                # 40 "sType_clone"
                if(_if_conditional157=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional157) {
                    # 40 "sType_clone"
                    __dec_obj32=result_72->mSizeNum;
                    result_72->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value137=sNode_clone(self->mSizeNum))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value137) { right_value137 = come_decrement_ref_count2(right_value137, ((struct sNode*)right_value137)->finalize, ((struct sNode*)right_value137)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 42 "sType_clone"
                # 41 "sType_clone"
                if(_if_conditional158=self!=((void*)0),                _if_conditional158) {
                    # 41 "sType_clone"
                    result_72->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                # 43 "sType_clone"
                # 42 "sType_clone"
                if(_if_conditional159=self!=((void*)0),                _if_conditional159) {
                    # 42 "sType_clone"
                    result_72->mTypeOfExpression=self->mTypeOfExpression;
                }
                # 44 "sType_clone"
                # 43 "sType_clone"
                if(_if_conditional160=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional160) {
                    # 43 "sType_clone"
                    __dec_obj33=result_72->mOriginalTypeName;
                    result_72->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value138=string_clone(self->mOriginalTypeName))));
                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 45 "sType_clone"
                # 44 "sType_clone"
                if(_if_conditional161=self!=((void*)0),                _if_conditional161) {
                    # 44 "sType_clone"
                    result_72->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                # 46 "sType_clone"
                # 45 "sType_clone"
                if(_if_conditional162=self!=((void*)0),                _if_conditional162) {
                    # 45 "sType_clone"
                    result_72->mFunctionParam=self->mFunctionParam;
                }
                # 47 "sType_clone"
                # 46 "sType_clone"
                if(_if_conditional163=self!=((void*)0),                _if_conditional163) {
                    # 46 "sType_clone"
                    result_72->mAllocaValue=self->mAllocaValue;
                }
                # 48 "sType_clone"
                # 47 "sType_clone"
                if(_if_conditional164=self!=((void*)0),                _if_conditional164) {
                    # 47 "sType_clone"
                    result_72->mGenericsStruct=self->mGenericsStruct;
                }
                # 49 "sType_clone"
                # 48 "sType_clone"
                if(_if_conditional165=self!=((void*)0),                _if_conditional165) {
                    # 48 "sType_clone"
                    result_72->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                # 50 "sType_clone"
                # 49 "sType_clone"
                if(_if_conditional166=self!=((void*)0),                _if_conditional166) {
                    # 49 "sType_clone"
                    result_72->mComeMemCore=self->mComeMemCore;
                }
                # 51 "sType_clone"
                # 50 "sType_clone"
                if(_if_conditional167=self!=((void*)0),                _if_conditional167) {
                    # 50 "sType_clone"
                    result_72->mInline=self->mInline;
                }
                # 52 "sType_clone"
                # 51 "sType_clone"
                if(_if_conditional168=self!=((void*)0),                _if_conditional168) {
                    # 51 "sType_clone"
                    result_72->mNullValue=self->mNullValue;
                }
                # 53 "sType_clone"
                # 52 "sType_clone"
                if(_if_conditional169=self!=((void*)0),                _if_conditional169) {
                    # 52 "sType_clone"
                    result_72->mGuardValue=self->mGuardValue;
                }
                # 54 "sType_clone"
                # 53 "sType_clone"
                if(_if_conditional170=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional170) {
                    # 53 "sType_clone"
                    __dec_obj34=result_72->mAsmName;
                    result_72->mAsmName=(char*)come_increment_ref_count(((char*)(right_value139=string_clone(self->mAsmName))));
                    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 55 "sType_clone"
                # 54 "sType_clone"
                if(_if_conditional171=self!=((void*)0),                _if_conditional171) {
                    # 54 "sType_clone"
                    result_72->mArrayPointerType=self->mArrayPointerType;
                }
                # 55 "sType_clone"
                __result85__ = __result_obj__ = result_72;
                come_call_finalizer2(sType_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result85__;
                come_call_finalizer2(sType_finalize,result_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional102;
struct list$1sTypeph* __result69__;
void* right_value106;
void* right_value107;
struct list$1sTypeph* result_73;
struct list_item$1sTypeph* it_74;
_Bool _while_condtional6;
void* right_value111;
struct list$1sTypeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_73, 0, sizeof(struct list$1sTypeph*));
memset(&it_74, 0, sizeof(struct list_item$1sTypeph*));
right_value111 = (void*)0;
                        # 142 "./comelang2.h"
                        # 139 "./comelang2.h"
                        if(_if_conditional102=self==((void*)0),                        _if_conditional102) {
                            # 140 "./comelang2.h"
                            __result69__ = __result_obj__ = ((void*)0);
                            return __result69__;
                        }
                        # 142 "./comelang2.h"
                        result_73=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value106=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./comelang2.h"
                        it_74=self->head;
                        # 151 "./comelang2.h"
                        while(_while_condtional6=it_74!=((void*)0),                        _while_condtional6) {
                            # 146 "./comelang2.h"
                            list$1sTypeph_add(result_73,(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_clone(it_74->item)))));
                            come_call_finalizer2(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 148 "./comelang2.h"
                            it_74=it_74->next;
                        }
                        # 151 "./comelang2.h"
                        __result72__ = __result_obj__ = result_73;
                        come_call_finalizer2(list$1sTypephp_finalize,result_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./comelang2.h"
                            self->head=((void*)0);
                            # 105 "./comelang2.h"
                            self->tail=((void*)0);
                            # 106 "./comelang2.h"
                            self->len=0;
                            # 108 "./comelang2.h"
                            __result70__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result70__;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional103;
void* right_value108;
struct list_item$1sTypeph* litem_75;
struct sType* __dec_obj12;
_Bool _if_conditional104;
void* right_value109;
struct list_item$1sTypeph* litem_76;
struct sType* __dec_obj13;
void* right_value110;
struct list_item$1sTypeph* litem_77;
struct sType* __dec_obj14;
struct list$1sTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1sTypeph*));
right_value109 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1sTypeph*));
right_value110 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1sTypeph*));
                                # 186 "./comelang2.h"
                                # 155 "./comelang2.h"
                                if(_if_conditional103=self->len==0,                                _if_conditional103) {
                                    # 156 "./comelang2.h"
                                    litem_75=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value108=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./comelang2.h"
                                    litem_75->prev=((void*)0);
                                    # 159 "./comelang2.h"
                                    litem_75->next=((void*)0);
                                    # 160 "./comelang2.h"
                                    __dec_obj12=litem_75->item;
                                    litem_75->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 162 "./comelang2.h"
                                    self->tail=litem_75;
                                    # 163 "./comelang2.h"
                                    self->head=litem_75;
                                }
                                else {
                                    # 186 "./comelang2.h"
                                    # 165 "./comelang2.h"
                                    if(_if_conditional104=self->len==1,                                    _if_conditional104) {
                                        # 166 "./comelang2.h"
                                        litem_76=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value109=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./comelang2.h"
                                        litem_76->prev=self->head;
                                        # 169 "./comelang2.h"
                                        litem_76->next=((void*)0);
                                        # 170 "./comelang2.h"
                                        __dec_obj13=litem_76->item;
                                        litem_76->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 172 "./comelang2.h"
                                        self->tail=litem_76;
                                        # 173 "./comelang2.h"
                                        self->head->next=litem_76;
                                    }
                                    else {
                                        # 176 "./comelang2.h"
                                        litem_77=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value110=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./comelang2.h"
                                        litem_77->prev=self->tail;
                                        # 179 "./comelang2.h"
                                        litem_77->next=((void*)0);
                                        # 180 "./comelang2.h"
                                        __dec_obj14=litem_77->item;
                                        litem_77->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 182 "./comelang2.h"
                                        self->tail->next=litem_77;
                                        # 183 "./comelang2.h"
                                        self->tail=litem_77;
                                    }
                                }
                                # 186 "./comelang2.h"
                                self->len++;
                                # 188 "./comelang2.h"
                                __result71__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result71__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional106;
struct tuple1$1sTypeph* __result73__;
void* right_value113;
struct tuple1$1sTypeph* result_78;
_Bool _if_conditional108;
void* right_value114;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
memset(&result_78, 0, sizeof(struct tuple1$1sTypeph*));
right_value114 = (void*)0;
                        # 3 "tuple1$1sTypephp_clone"
                        # 2 "tuple1$1sTypephp_clone"
                        if(_if_conditional106=self==(void*)0,                        _if_conditional106) {
                            # 2 "tuple1$1sTypephp_clone"
                            __result73__ = __result_obj__ = (void*)0;
                            return __result73__;
                        }
                        # 3 "tuple1$1sTypephp_clone"
                        result_78=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value113=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple1$1sTypephp_clone"
                        # 4 "tuple1$1sTypephp_clone"
                        if(_if_conditional108=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional108) {
                            # 4 "tuple1$1sTypephp_clone"
                            __dec_obj16=result_78->v1;
                            result_78->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 5 "tuple1$1sTypephp_clone"
                        __result74__ = __result_obj__ = result_78;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result74__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional107;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypeph_finalize"
                            # 0 "tuple1$1sTypeph_finalize"
                            if(_if_conditional107=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional107) {
                                # 0 "tuple1$1sTypeph_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional113;
struct list$1sNodeph* __result75__;
void* right_value119;
void* right_value120;
struct list$1sNodeph* result_79;
struct list_item$1sNodeph* it_80;
_Bool _while_condtional7;
void* right_value125;
struct list$1sNodeph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1sNodeph*));
memset(&it_80, 0, sizeof(struct list_item$1sNodeph*));
right_value125 = (void*)0;
                        # 142 "./comelang2.h"
                        # 139 "./comelang2.h"
                        if(_if_conditional113=self==((void*)0),                        _if_conditional113) {
                            # 140 "./comelang2.h"
                            __result75__ = __result_obj__ = ((void*)0);
                            return __result75__;
                        }
                        # 142 "./comelang2.h"
                        result_79=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value120=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value119=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./comelang2.h"
                        it_80=self->head;
                        # 151 "./comelang2.h"
                        while(_while_condtional7=it_80!=((void*)0),                        _while_condtional7) {
                            # 146 "./comelang2.h"
                            list$1sNodeph_add(result_79,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(it_80->item)))));
                            if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 148 "./comelang2.h"
                            it_80=it_80->next;
                        }
                        # 151 "./comelang2.h"
                        __result80__ = __result_obj__ = result_79;
                        come_call_finalizer2(list$1sNodephp_finalize,result_79, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result80__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./comelang2.h"
                            self->head=((void*)0);
                            # 105 "./comelang2.h"
                            self->tail=((void*)0);
                            # 106 "./comelang2.h"
                            self->len=0;
                            # 108 "./comelang2.h"
                            __result76__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result76__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional114;
void* right_value121;
struct list_item$1sNodeph* litem_81;
struct sNode* __dec_obj21;
_Bool _if_conditional115;
void* right_value122;
struct list_item$1sNodeph* litem_82;
struct sNode* __dec_obj22;
void* right_value123;
struct list_item$1sNodeph* litem_83;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1sNodeph*));
right_value122 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1sNodeph*));
right_value123 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1sNodeph*));
                                # 186 "./comelang2.h"
                                # 155 "./comelang2.h"
                                if(_if_conditional114=self->len==0,                                _if_conditional114) {
                                    # 156 "./comelang2.h"
                                    litem_81=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value121=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./comelang2.h"
                                    litem_81->prev=((void*)0);
                                    # 159 "./comelang2.h"
                                    litem_81->next=((void*)0);
                                    # 160 "./comelang2.h"
                                    __dec_obj21=litem_81->item;
                                    litem_81->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 162 "./comelang2.h"
                                    self->tail=litem_81;
                                    # 163 "./comelang2.h"
                                    self->head=litem_81;
                                }
                                else {
                                    # 186 "./comelang2.h"
                                    # 165 "./comelang2.h"
                                    if(_if_conditional115=self->len==1,                                    _if_conditional115) {
                                        # 166 "./comelang2.h"
                                        litem_82=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value122=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./comelang2.h"
                                        litem_82->prev=self->head;
                                        # 169 "./comelang2.h"
                                        litem_82->next=((void*)0);
                                        # 170 "./comelang2.h"
                                        __dec_obj22=litem_82->item;
                                        litem_82->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 172 "./comelang2.h"
                                        self->tail=litem_82;
                                        # 173 "./comelang2.h"
                                        self->head->next=litem_82;
                                    }
                                    else {
                                        # 176 "./comelang2.h"
                                        litem_83=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value123=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./comelang2.h"
                                        litem_83->prev=self->tail;
                                        # 179 "./comelang2.h"
                                        litem_83->next=((void*)0);
                                        # 180 "./comelang2.h"
                                        __dec_obj23=litem_83->item;
                                        litem_83->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 182 "./comelang2.h"
                                        self->tail->next=litem_83;
                                        # 183 "./comelang2.h"
                                        self->tail=litem_83;
                                    }
                                }
                                # 186 "./comelang2.h"
                                self->len++;
                                # 188 "./comelang2.h"
                                __result77__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result77__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional116;
struct sNode* __result78__;
void* right_value124;
struct sNode* result_84;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
struct sNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
memset(&result_84, 0, sizeof(struct sNode*));
                                # 3 "sNode_clone"
                                # 2 "sNode_clone"
                                if(_if_conditional116=self==(void*)0,                                _if_conditional116) {
                                    # 2 "sNode_clone"
                                    __result78__ = __result_obj__ = (void*)0;
                                    return __result78__;
                                }
                                # 3 "sNode_clone"
                                result_84=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value124) { right_value124 = come_decrement_ref_count2(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 5 "sNode_clone"
                                # 4 "sNode_clone"
                                if(_if_conditional117=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional117) {
                                    # 4 "sNode_clone"
                                    result_84->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                # 6 "sNode_clone"
                                # 5 "sNode_clone"
                                if(_if_conditional118=self!=((void*)0),                                _if_conditional118) {
                                    # 5 "sNode_clone"
                                    result_84->finalize=self->finalize;
                                }
                                # 7 "sNode_clone"
                                # 6 "sNode_clone"
                                if(_if_conditional119=self!=((void*)0),                                _if_conditional119) {
                                    # 6 "sNode_clone"
                                    result_84->clone=self->clone;
                                }
                                # 8 "sNode_clone"
                                # 7 "sNode_clone"
                                if(_if_conditional120=self!=((void*)0),                                _if_conditional120) {
                                    # 7 "sNode_clone"
                                    result_84->compile=self->compile;
                                }
                                # 9 "sNode_clone"
                                # 8 "sNode_clone"
                                if(_if_conditional121=self!=((void*)0),                                _if_conditional121) {
                                    # 8 "sNode_clone"
                                    result_84->sline=self->sline;
                                }
                                # 10 "sNode_clone"
                                # 9 "sNode_clone"
                                if(_if_conditional122=self!=((void*)0),                                _if_conditional122) {
                                    # 9 "sNode_clone"
                                    result_84->sname=self->sname;
                                }
                                # 11 "sNode_clone"
                                # 10 "sNode_clone"
                                if(_if_conditional123=self!=((void*)0),                                _if_conditional123) {
                                    # 10 "sNode_clone"
                                    result_84->terminated=self->terminated;
                                }
                                # 12 "sNode_clone"
                                # 11 "sNode_clone"
                                if(_if_conditional124=self!=((void*)0),                                _if_conditional124) {
                                    # 11 "sNode_clone"
                                    result_84->kind=self->kind;
                                }
                                # 12 "sNode_clone"
                                __result79__ = __result_obj__ = result_84;
                                if(result_84) { result_84 = come_decrement_ref_count2(result_84, ((struct sNode*)result_84)->finalize, ((struct sNode*)result_84)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result79__;
                                if(result_84) { result_84 = come_decrement_ref_count2(result_84, ((struct sNode*)result_84)->finalize, ((struct sNode*)result_84)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional128;
struct list$1charph* __result81__;
void* right_value128;
void* right_value129;
struct list$1charph* result_85;
struct list_item$1charph* it_86;
_Bool _while_condtional8;
void* right_value133;
struct list$1charph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&result_85, 0, sizeof(struct list$1charph*));
memset(&it_86, 0, sizeof(struct list_item$1charph*));
right_value133 = (void*)0;
                        # 142 "./comelang2.h"
                        # 139 "./comelang2.h"
                        if(_if_conditional128=self==((void*)0),                        _if_conditional128) {
                            # 140 "./comelang2.h"
                            __result81__ = __result_obj__ = ((void*)0);
                            return __result81__;
                        }
                        # 142 "./comelang2.h"
                        result_85=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value129=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value128=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./comelang2.h"
                        it_86=self->head;
                        # 151 "./comelang2.h"
                        while(_while_condtional8=it_86!=((void*)0),                        _while_condtional8) {
                            # 146 "./comelang2.h"
                            list$1charph_add(result_85,(char*)come_increment_ref_count(((char*)(right_value133=string_clone(it_86->item)))));
                            right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 148 "./comelang2.h"
                            it_86=it_86->next;
                        }
                        # 151 "./comelang2.h"
                        __result84__ = __result_obj__ = result_85;
                        come_call_finalizer2(list$1charphp_finalize,result_85, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result84__;
                        come_call_finalizer2(list$1charphp_finalize,result_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./comelang2.h"
                            self->head=((void*)0);
                            # 105 "./comelang2.h"
                            self->tail=((void*)0);
                            # 106 "./comelang2.h"
                            self->len=0;
                            # 108 "./comelang2.h"
                            __result82__ = __result_obj__ = self;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result82__;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional129;
void* right_value130;
struct list_item$1charph* litem_87;
char* __dec_obj26;
_Bool _if_conditional130;
void* right_value131;
struct list_item$1charph* litem_88;
char* __dec_obj27;
void* right_value132;
struct list_item$1charph* litem_89;
char* __dec_obj28;
struct list$1charph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1charph*));
right_value131 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1charph*));
right_value132 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1charph*));
                                # 186 "./comelang2.h"
                                # 155 "./comelang2.h"
                                if(_if_conditional129=self->len==0,                                _if_conditional129) {
                                    # 156 "./comelang2.h"
                                    litem_87=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value130=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./comelang2.h"
                                    litem_87->prev=((void*)0);
                                    # 159 "./comelang2.h"
                                    litem_87->next=((void*)0);
                                    # 160 "./comelang2.h"
                                    __dec_obj26=litem_87->item;
                                    litem_87->item=(char*)come_increment_ref_count(item);
                                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 162 "./comelang2.h"
                                    self->tail=litem_87;
                                    # 163 "./comelang2.h"
                                    self->head=litem_87;
                                }
                                else {
                                    # 186 "./comelang2.h"
                                    # 165 "./comelang2.h"
                                    if(_if_conditional130=self->len==1,                                    _if_conditional130) {
                                        # 166 "./comelang2.h"
                                        litem_88=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value131=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./comelang2.h"
                                        litem_88->prev=self->head;
                                        # 169 "./comelang2.h"
                                        litem_88->next=((void*)0);
                                        # 170 "./comelang2.h"
                                        __dec_obj27=litem_88->item;
                                        litem_88->item=(char*)come_increment_ref_count(item);
                                        __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 172 "./comelang2.h"
                                        self->tail=litem_88;
                                        # 173 "./comelang2.h"
                                        self->head->next=litem_88;
                                    }
                                    else {
                                        # 176 "./comelang2.h"
                                        litem_89=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value132=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./comelang2.h"
                                        litem_89->prev=self->tail;
                                        # 179 "./comelang2.h"
                                        litem_89->next=((void*)0);
                                        # 180 "./comelang2.h"
                                        __dec_obj28=litem_89->item;
                                        litem_89->item=(char*)come_increment_ref_count(item);
                                        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 182 "./comelang2.h"
                                        self->tail->next=litem_89;
                                        # 183 "./comelang2.h"
                                        self->tail=litem_89;
                                    }
                                }
                                # 186 "./comelang2.h"
                                self->len++;
                                # 188 "./comelang2.h"
                                __result83__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result83__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional174;
struct list_item$1sNodeph* it_97;
int i_98;
_Bool _while_condtional9;
_Bool _if_conditional175;
struct sNode* __result86__;
struct sNode* default_value_99;
struct sNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_97, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_98, 0, sizeof(int));
memset(&default_value_99, 0, sizeof(struct sNode*));
                # 686 "./comelang2.h"
                # 682 "./comelang2.h"
                if(_if_conditional174=position<0,                _if_conditional174) {
                    # 683 "./comelang2.h"
                    position+=self->len;
                }
                # 686 "./comelang2.h"
                it_97=self->head;
                # 687 "./comelang2.h"
                i_98=0;
                # 694 "./comelang2.h"
                while(_while_condtional9=it_97!=((void*)0),                _while_condtional9) {
                    # 692 "./comelang2.h"
                    # 689 "./comelang2.h"
                    if(_if_conditional175=position==i_98,                    _if_conditional175) {
                        # 690 "./comelang2.h"
                        __result86__ = __result_obj__ = it_97->item;
                        return __result86__;
                    }
                    # 692 "./comelang2.h"
                    it_97=it_97->next;
                    # 693 "./comelang2.h"
                    i_98++;
                }
                # 696 "./comelang2.h"
                # 697 "./comelang2.h"
                memset(&default_value_99,0,sizeof(struct sNode*));
                # 698 "./comelang2.h"
                __result87__ = __result_obj__ = default_value_99;
                if(default_value_99) { default_value_99 = come_decrement_ref_count2(default_value_99, ((struct sNode*)default_value_99)->finalize, ((struct sNode*)default_value_99)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result87__;
                if(default_value_99) { default_value_99 = come_decrement_ref_count2(default_value_99, ((struct sNode*)default_value_99)->finalize, ((struct sNode*)default_value_99)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value156;
void* right_value157;
struct buffer* output_108;
_Bool _if_conditional179;
void* right_value158;
void* right_value159;
struct buffer* output2_109;
int i_110;
struct list$1sTypeph* o2_saved_111;
struct sType* it_112;
char* name_113;
void* right_value160;
char* str_114;
_Bool _if_conditional180;
void* right_value161;
void* right_value162;
char* str_115;
_Bool _if_conditional181;
void* right_value163;
struct sType* base_result_type_116;
void* right_value164;
void* right_value165;
struct list$1sNodeph* __dec_obj36;
void* right_value166;
char* result_type_str_117;
int i_118;
struct list$1sTypeph* o2_saved_119;
struct sType* it_120;
char* name_121;
void* right_value167;
char* str_122;
_Bool _if_conditional182;
_Bool _if_conditional183;
struct sNode* node_123;
_Bool _if_conditional184;
void* right_value168;
char* __result90__;
void* right_value169;
struct CVALUE* cvalue_124;
void* right_value170;
void* right_value171;
char* result_type_str_125;
int i_126;
struct list$1sTypeph* o2_saved_127;
struct sType* it_128;
char* name_129;
void* right_value172;
char* str_130;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value173;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
right_value157 = (void*)0;
memset(&output_108, 0, sizeof(struct buffer*));
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&output2_109, 0, sizeof(struct buffer*));
memset(&i_110, 0, sizeof(int));
memset(&o2_saved_111, 0, sizeof(struct list$1sTypeph*));
memset(&it_112, 0, sizeof(struct sType*));
memset(&name_113, 0, sizeof(char*));
right_value160 = (void*)0;
memset(&str_114, 0, sizeof(char*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&str_115, 0, sizeof(char*));
right_value163 = (void*)0;
memset(&base_result_type_116, 0, sizeof(struct sType*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&result_type_str_117, 0, sizeof(char*));
memset(&i_118, 0, sizeof(int));
memset(&o2_saved_119, 0, sizeof(struct list$1sTypeph*));
memset(&it_120, 0, sizeof(struct sType*));
memset(&name_121, 0, sizeof(char*));
right_value167 = (void*)0;
memset(&str_122, 0, sizeof(char*));
memset(&node_123, 0, sizeof(struct sNode*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&cvalue_124, 0, sizeof(struct CVALUE*));
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&result_type_str_125, 0, sizeof(char*));
memset(&i_126, 0, sizeof(int));
memset(&o2_saved_127, 0, sizeof(struct list$1sTypeph*));
memset(&it_128, 0, sizeof(struct sType*));
memset(&name_129, 0, sizeof(char*));
right_value172 = (void*)0;
memset(&str_130, 0, sizeof(char*));
right_value173 = (void*)0;
    # 474 "03transpile2.c"
    output_108=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value157=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value156=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 474, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 571 "03transpile2.c"
    # 476 "03transpile2.c"
    if(fun->mResultType->mResultType) {
        # 477 "03transpile2.c"
        output2_109=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value158=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 477, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 479 "03transpile2.c"
        buffer_append_str(output2_109,fun->mName);
        # 480 "03transpile2.c"
        buffer_append_str(output2_109,"(");
        # 482 "03transpile2.c"
        i_110=0;
        # 494 "03transpile2.c"
        for(        o2_saved_111=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_112=list$1sTypeph_begin((o2_saved_111));        !list$1sTypeph_end((o2_saved_111));        it_112=list$1sTypeph_next((o2_saved_111))        ){
            # 484 "03transpile2.c"
            name_113=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_110), "03transpile2.c", 484, 5));
            # 486 "03transpile2.c"
            str_114=(char*)come_increment_ref_count(((char*)(right_value160=make_define_var(it_112,name_113,(_Bool)0,info))));
            right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 487 "03transpile2.c"
            buffer_append_str(output2_109,str_114);
            # 492 "03transpile2.c"
            # 489 "03transpile2.c"
            if(_if_conditional180=i_110!=list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional180) {
                # 490 "03transpile2.c"
                buffer_append_str(output2_109,", ");
            }
            # 492 "03transpile2.c"
            i_110++;
            str_114 = come_decrement_ref_count2(str_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 494 "03transpile2.c"
        buffer_append_str(output2_109,")");
        # 496 "03transpile2.c"
        str_115=(char*)come_increment_ref_count(((char*)(right_value162=make_lambda_type_name_string(fun->mResultType,((char*)(right_value161=buffer_to_string(output2_109))),info))));
        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 498 "03transpile2.c"
        buffer_append_str(output_108,str_115);
        # 499 "03transpile2.c"
        buffer_append_str(output_108,";\n");
        come_call_finalizer2(buffer_finalize,output2_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str_115 = come_decrement_ref_count2(str_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 571 "03transpile2.c"
        # 501 "03transpile2.c"
        if(_if_conditional181=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional181) {
            # 502 "03transpile2.c"
            base_result_type_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 503 "03transpile2.c"
            __dec_obj36=base_result_type_116->mArrayNum;
            base_result_type_116->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value165=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value164=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 503, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 505 "03transpile2.c"
            result_type_str_117=(char*)come_increment_ref_count(((char*)(right_value166=make_type_name_string(base_result_type_116,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 507 "03transpile2.c"
            buffer_append_str(output_108,result_type_str_117);
            # 508 "03transpile2.c"
            buffer_append_str(output_108," (*");
            # 510 "03transpile2.c"
            buffer_append_str(output_108,fun->mName);
            # 511 "03transpile2.c"
            buffer_append_str(output_108,"(");
            # 513 "03transpile2.c"
            i_118=0;
            # 531 "03transpile2.c"
            for(            o2_saved_119=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_120=list$1sTypeph_begin((o2_saved_119));            !list$1sTypeph_end((o2_saved_119));            it_120=list$1sTypeph_next((o2_saved_119))            ){
                # 515 "03transpile2.c"
                name_121=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_118), "03transpile2.c", 515, 6));
                # 517 "03transpile2.c"
                str_122=(char*)come_increment_ref_count(((char*)(right_value167=make_define_var(it_120,name_121,(_Bool)0,info))));
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 518 "03transpile2.c"
                buffer_append_str(output_108,str_122);
                # 528 "03transpile2.c"
                # 520 "03transpile2.c"
                if(_if_conditional182=i_118==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional182) {
                    # 524 "03transpile2.c"
                    # 521 "03transpile2.c"
                    if(fun->mVarArgs) {
                        # 522 "03transpile2.c"
                        buffer_append_str(output_108,", ...");
                    }
                }
                else {
                    # 526 "03transpile2.c"
                    buffer_append_str(output_108,", ");
                }
                # 528 "03transpile2.c"
                i_118++;
                str_122 = come_decrement_ref_count2(str_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 531 "03transpile2.c"
            node_123=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0), "03transpile2.c", 531, 7));
            # 536 "03transpile2.c"
            # 532 "03transpile2.c"
            if(_if_conditional184=!node_compile(node_123,info),            _if_conditional184) {
                # 533 "03transpile2.c"
                err_msg(info,"invalid array number");
                # 534 "03transpile2.c"
                __result90__ = __result_obj__ = ((char*)(right_value168=__builtin_string("")));
                come_call_finalizer2(sType_finalize,base_result_type_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_type_str_117 = come_decrement_ref_count2(result_type_str_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,output_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result90__;
            }
            # 536 "03transpile2.c"
            cvalue_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value169=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 537 "03transpile2.c"
            dec_stack_ptr(1,info);
            # 539 "03transpile2.c"
            buffer_append_str(output_108,((char*)(right_value170=xsprintf("))[%s];\n",cvalue_124->c_value))));
            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,base_result_type_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            result_type_str_117 = come_decrement_ref_count2(result_type_str_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,cvalue_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 542 "03transpile2.c"
            result_type_str_125=(char*)come_increment_ref_count(((char*)(right_value171=make_type_name_string(fun->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 544 "03transpile2.c"
            buffer_append_str(output_108,result_type_str_125);
            # 545 "03transpile2.c"
            buffer_append_str(output_108," ");
            # 547 "03transpile2.c"
            buffer_append_str(output_108,fun->mName);
            # 548 "03transpile2.c"
            buffer_append_str(output_108,"(");
            # 550 "03transpile2.c"
            i_126=0;
            # 568 "03transpile2.c"
            for(            o2_saved_127=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_128=list$1sTypeph_begin((o2_saved_127));            !list$1sTypeph_end((o2_saved_127));            it_128=list$1sTypeph_next((o2_saved_127))            ){
                # 552 "03transpile2.c"
                name_129=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_126), "03transpile2.c", 552, 8));
                # 554 "03transpile2.c"
                str_130=(char*)come_increment_ref_count(((char*)(right_value172=make_define_var(it_128,name_129,(_Bool)0,info))));
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 555 "03transpile2.c"
                buffer_append_str(output_108,str_130);
                # 565 "03transpile2.c"
                # 557 "03transpile2.c"
                if(_if_conditional185=i_126==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional185) {
                    # 561 "03transpile2.c"
                    # 558 "03transpile2.c"
                    if(fun->mVarArgs) {
                        # 559 "03transpile2.c"
                        buffer_append_str(output_108,", ...");
                    }
                }
                else {
                    # 563 "03transpile2.c"
                    buffer_append_str(output_108,", ");
                }
                # 565 "03transpile2.c"
                i_126++;
                str_130 = come_decrement_ref_count2(str_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 568 "03transpile2.c"
            buffer_append_str(output_108,");\n");
            result_type_str_125 = come_decrement_ref_count2(result_type_str_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 571 "03transpile2.c"
    __result91__ = __result_obj__ = ((char*)(right_value173=buffer_to_string(output_108)));
    come_call_finalizer2(buffer_finalize,output_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
    come_call_finalizer2(buffer_finalize,output_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value174;
void* right_value175;
struct buffer* output_131;
void* right_value176;
char* result_type_str_132;
int i_133;
struct list$1sTypeph* o2_saved_134;
struct sType* it_135;
char* name_136;
void* right_value177;
char* str_137;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value178;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&output_131, 0, sizeof(struct buffer*));
right_value176 = (void*)0;
memset(&result_type_str_132, 0, sizeof(char*));
memset(&i_133, 0, sizeof(int));
memset(&o2_saved_134, 0, sizeof(struct list$1sTypeph*));
memset(&it_135, 0, sizeof(struct sType*));
memset(&name_136, 0, sizeof(char*));
right_value177 = (void*)0;
memset(&str_137, 0, sizeof(char*));
right_value178 = (void*)0;
    # 576 "03transpile2.c"
    output_131=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value175=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 576, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 578 "03transpile2.c"
    result_type_str_132=(char*)come_increment_ref_count(((char*)(right_value176=make_type_name_string(lambda_type->mResultType->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))));
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 580 "03transpile2.c"
    buffer_append_str(output_131,result_type_str_132);
    # 581 "03transpile2.c"
    buffer_append_str(output_131," ");
    # 583 "03transpile2.c"
    buffer_append_str(output_131,name);
    # 584 "03transpile2.c"
    buffer_append_str(output_131,"(");
    # 586 "03transpile2.c"
    i_133=0;
    # 604 "03transpile2.c"
    for(    o2_saved_134=(struct list$1sTypeph*)come_increment_ref_count((lambda_type->mParamTypes)),it_135=list$1sTypeph_begin((o2_saved_134));    !list$1sTypeph_end((o2_saved_134));    it_135=list$1sTypeph_next((o2_saved_134))    ){
        # 588 "03transpile2.c"
        name_136=((char*)come_null_check(list$1charphp_operator_load_element(lambda_type->mParamNames,i_133), "03transpile2.c", 588, 9));
        # 590 "03transpile2.c"
        str_137=(char*)come_increment_ref_count(((char*)(right_value177=make_define_var(it_135,name_136,(_Bool)0,info))));
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 591 "03transpile2.c"
        buffer_append_str(output_131,str_137);
        # 601 "03transpile2.c"
        # 593 "03transpile2.c"
        if(_if_conditional187=i_133==list$1sTypeph_length(lambda_type->mParamTypes)-1,        _if_conditional187) {
            # 597 "03transpile2.c"
            # 594 "03transpile2.c"
            if(lambda_type->mVarArgs) {
                # 595 "03transpile2.c"
                buffer_append_str(output_131,", ...");
            }
        }
        else {
            # 599 "03transpile2.c"
            buffer_append_str(output_131,", ");
        }
        # 601 "03transpile2.c"
        i_133++;
        str_137 = come_decrement_ref_count2(str_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 604 "03transpile2.c"
    buffer_append_str(output_131,");\n");
    # 606 "03transpile2.c"
    __result92__ = __result_obj__ = ((char*)(right_value178=buffer_to_string(output_131)));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,output_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_type_str_132 = come_decrement_ref_count2(result_type_str_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,output_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_type_str_132 = come_decrement_ref_count2(result_type_str_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional189;
char* msg2_138;
va_list args_139;
int len_140;
_Bool _if_conditional190;
int i_141;
void* right_value179;
void* right_value180;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_138, 0, sizeof(char*));
memset(&args_139, 0, sizeof(va_list));
memset(&len_140, 0, sizeof(int));
memset(&i_141, 0, sizeof(int));
right_value179 = (void*)0;
right_value180 = (void*)0;
    # 615 "03transpile2.c"
    # 612 "03transpile2.c"
    if(info->no_output_come_code) {
        # 613 "03transpile2.c"
        return;
    }
    # 615 "03transpile2.c"
    # 617 "03transpile2.c"
    # 618 "03transpile2.c"
    __builtin_va_start(args_139,msg);
    # 619 "03transpile2.c"
    len_140=vasprintf(&msg2_138,msg,args_139);
    # 620 "03transpile2.c"
    __builtin_va_end(args_139);
    # 634 "03transpile2.c"
    # 622 "03transpile2.c"
    if(info->come_fun) {
        # 623 "03transpile2.c"
        # 628 "03transpile2.c"
        for(        i_141=0;        i_141<info->block_level;        i_141++        ){
            # 625 "03transpile2.c"
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        # 628 "03transpile2.c"
        buffer_append_str(info->come_fun->mSource,((char*)(right_value179=xsprintf("%s",msg2_138))));
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 631 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,((char*)(right_value180=xsprintf("%s",msg2_138))));
        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 634 "03transpile2.c"
    free(msg2_138);
    come_call_finalizer2(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional191;
char* msg2_142;
va_list args_143;
int len_144;
void* right_value181;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_142, 0, sizeof(char*));
memset(&args_143, 0, sizeof(va_list));
memset(&len_144, 0, sizeof(int));
right_value181 = (void*)0;
    # 642 "03transpile2.c"
    # 639 "03transpile2.c"
    if(info->no_output_come_code) {
        # 640 "03transpile2.c"
        return;
    }
    # 642 "03transpile2.c"
    # 644 "03transpile2.c"
    # 645 "03transpile2.c"
    __builtin_va_start(args_143,msg);
    # 646 "03transpile2.c"
    len_144=vasprintf(&msg2_142,msg,args_143);
    # 647 "03transpile2.c"
    __builtin_va_end(args_143);
    # 649 "03transpile2.c"
    buffer_append_str(info->module->mSourceHead,((char*)(right_value181=xsprintf("%s",msg2_142))));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 651 "03transpile2.c"
    free(msg2_142);
    come_call_finalizer2(va_list_finalize,(&args_143), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional192;
_Bool _if_conditional193;
char* msg2_145;
va_list args_146;
int len_147;
void* right_value182;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_145, 0, sizeof(char*));
memset(&args_146, 0, sizeof(va_list));
memset(&len_147, 0, sizeof(int));
right_value182 = (void*)0;
    # 659 "03transpile2.c"
    # 656 "03transpile2.c"
    if(info->no_output_come_code) {
        # 657 "03transpile2.c"
        return;
    }
    # 671 "03transpile2.c"
    # 659 "03transpile2.c"
    if(_if_conditional193=string_operator_equals(info->sname,info->base_sname),    _if_conditional193) {
        # 660 "03transpile2.c"
        # 662 "03transpile2.c"
        # 663 "03transpile2.c"
        __builtin_va_start(args_146,msg);
        # 664 "03transpile2.c"
        len_147=vasprintf(&msg2_145,msg,args_146);
        # 665 "03transpile2.c"
        __builtin_va_end(args_146);
        # 667 "03transpile2.c"
        buffer_append_str(info->module->mHeader,((char*)(right_value182=xsprintf("%s",msg2_145))));
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 669 "03transpile2.c"
        free(msg2_145);
        come_call_finalizer2(va_list_finalize,(&args_146), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    }
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
void* right_value183;
char* name_148;
void* right_value184;
void* right_value185;
struct sType* result_type_149;
void* right_value186;
void* right_value187;
void* right_value188;
void* right_value189;
struct sType* __list_values1___150[2];
void* right_value193;
void* right_value194;
struct list$1sTypeph* param_types_155;
void* right_value195;
void* right_value196;
char* __list_values2___156[2];
void* right_value200;
void* right_value201;
struct list$1charph* param_names_161;
void* right_value202;
void* right_value203;
struct list$1charph* param_default_parametors_162;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
struct sFun* main_fun_163;
void* right_value214;
int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
memset(&name_148, 0, sizeof(char*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&result_type_149, 0, sizeof(struct sType*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&param_types_155, 0, sizeof(struct list$1sTypeph*));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&param_names_161, 0, sizeof(struct list$1charph*));
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&param_default_parametors_162, 0, sizeof(struct list$1charph*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&main_fun_163, 0, sizeof(struct sFun*));
right_value214 = (void*)0;
    # 675 "03transpile2.c"
    name_148=(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string("main"))));
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 676 "03transpile2.c"
    result_type_149=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 676, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 677 "03transpile2.c"
    {__list_values1___150[0]=come_increment_ref_count(((struct sType*)(right_value187=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value186=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 677, "sType")))),"int",(_Bool)0,info))));
__list_values1___150[1]=come_increment_ref_count(((struct sType*)(right_value189=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value188=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 677, "sType")))),"char**",(_Bool)0,info))));
}    param_types_155=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value194=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value193=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 677, "struct list$1sTypeph")))),2,__list_values1___150))));
    come_call_finalizer2(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypeph_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 678 "03transpile2.c"
    {__list_values2___156[0]=come_increment_ref_count(((char*)(right_value195=__builtin_string("argc"))));
__list_values2___156[1]=come_increment_ref_count(((char*)(right_value196=__builtin_string("argv"))));
}    param_names_161=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value201=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value200=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 678, "struct list$1charph")))),2,__list_values2___156))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charph_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 679 "03transpile2.c"
    param_default_parametors_162=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value203=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value202=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 679, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 685 "03transpile2.c"
    main_fun_163=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value207=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value204=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 680, "sFun")))),(char*)come_increment_ref_count(name_148),(struct sType*)come_increment_ref_count(result_type_149),(struct list$1sTypeph*)come_increment_ref_count(param_types_155),(struct list$1charph*)come_increment_ref_count(param_names_161),(struct list$1charph*)come_increment_ref_count(param_default_parametors_162),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 687 "03transpile2.c"
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string(name_148)))),(struct sFun*)come_increment_ref_count(main_fun_163));
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 689 "03transpile2.c"
    add_come_code(info,"#include <stdio.h>\n");
    # 691 "03transpile2.c"
    info->come_fun=main_fun_163;
    # 693 "03transpile2.c"
    info->block_level++;
    # 694 "03transpile2.c"
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    # 695 "03transpile2.c"
    add_come_code(info,"return 0;\n");
    # 696 "03transpile2.c"
    info->block_level--;
    # 698 "03transpile2.c"
    __result121__ = 0;
    name_148 = come_decrement_ref_count2(name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,main_fun_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result121__;
    name_148 = come_decrement_ref_count2(name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,main_fun_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_151;
struct list$1sTypeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_151, 0, sizeof(int));
        # 112 "./comelang2.h"
        self->head=((void*)0);
        # 113 "./comelang2.h"
        self->tail=((void*)0);
        # 114 "./comelang2.h"
        self->len=0;
        # 120 "./comelang2.h"
        for(        i_151=0;        i_151<num_value;        i_151++        ){
            # 117 "./comelang2.h"
            list$1sTypeph_push_back(self,values[i_151]);
        }
        # 120 "./comelang2.h"
        __result94__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result94__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional194;
void* right_value190;
struct list_item$1sTypeph* litem_152;
struct sType* __dec_obj37;
_Bool _if_conditional195;
void* right_value191;
struct list_item$1sTypeph* litem_153;
struct sType* __dec_obj38;
void* right_value192;
struct list_item$1sTypeph* litem_154;
struct sType* __dec_obj39;
struct list$1sTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
memset(&litem_152, 0, sizeof(struct list_item$1sTypeph*));
right_value191 = (void*)0;
memset(&litem_153, 0, sizeof(struct list_item$1sTypeph*));
right_value192 = (void*)0;
memset(&litem_154, 0, sizeof(struct list_item$1sTypeph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional194=self->len==0,                _if_conditional194) {
                    # 226 "./comelang2.h"
                    litem_152=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value190=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_152->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_152->next=((void*)0);
                    # 230 "./comelang2.h"
                    __dec_obj37=litem_152->item;
                    litem_152->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./comelang2.h"
                    self->tail=litem_152;
                    # 233 "./comelang2.h"
                    self->head=litem_152;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional195=self->len==1,                    _if_conditional195) {
                        # 236 "./comelang2.h"
                        litem_153=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value191=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_153->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_153->next=((void*)0);
                        # 240 "./comelang2.h"
                        __dec_obj38=litem_153->item;
                        litem_153->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./comelang2.h"
                        self->tail=litem_153;
                        # 243 "./comelang2.h"
                        self->head->next=litem_153;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_154=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value192=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_154->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_154->next=((void*)0);
                        # 250 "./comelang2.h"
                        __dec_obj39=litem_154->item;
                        litem_154->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./comelang2.h"
                        self->tail->next=litem_154;
                        # 253 "./comelang2.h"
                        self->tail=litem_154;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result93__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result93__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_157;
struct list$1charph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_157, 0, sizeof(int));
        # 112 "./comelang2.h"
        self->head=((void*)0);
        # 113 "./comelang2.h"
        self->tail=((void*)0);
        # 114 "./comelang2.h"
        self->len=0;
        # 120 "./comelang2.h"
        for(        i_157=0;        i_157<num_value;        i_157++        ){
            # 117 "./comelang2.h"
            list$1charph_push_back(self,values[i_157]);
        }
        # 120 "./comelang2.h"
        __result96__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result96__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional196;
void* right_value197;
struct list_item$1charph* litem_158;
char* __dec_obj40;
_Bool _if_conditional197;
void* right_value198;
struct list_item$1charph* litem_159;
char* __dec_obj41;
void* right_value199;
struct list_item$1charph* litem_160;
char* __dec_obj42;
struct list$1charph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1charph*));
right_value198 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1charph*));
right_value199 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1charph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional196=self->len==0,                _if_conditional196) {
                    # 226 "./comelang2.h"
                    litem_158=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value197=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_158->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_158->next=((void*)0);
                    # 230 "./comelang2.h"
                    __dec_obj40=litem_158->item;
                    litem_158->item=(char*)come_increment_ref_count(item);
                    __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 232 "./comelang2.h"
                    self->tail=litem_158;
                    # 233 "./comelang2.h"
                    self->head=litem_158;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional197=self->len==1,                    _if_conditional197) {
                        # 236 "./comelang2.h"
                        litem_159=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value198=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_159->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_159->next=((void*)0);
                        # 240 "./comelang2.h"
                        __dec_obj41=litem_159->item;
                        litem_159->item=(char*)come_increment_ref_count(item);
                        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 242 "./comelang2.h"
                        self->tail=litem_159;
                        # 243 "./comelang2.h"
                        self->head->next=litem_159;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_160=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value199=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_160->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_160->next=((void*)0);
                        # 250 "./comelang2.h"
                        __dec_obj42=litem_160->item;
                        litem_160->item=(char*)come_increment_ref_count(item);
                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 252 "./comelang2.h"
                        self->tail->next=litem_160;
                        # 253 "./comelang2.h"
                        self->tail=litem_160;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result95__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result95__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFun_finalize"
        # 0 "sFun_finalize"
        if(_if_conditional198=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional198) {
            # 0 "sFun_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFun_finalize"
        # 1 "sFun_finalize"
        if(_if_conditional199=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional199) {
            # 1 "sFun_finalize"
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sFun_finalize"
        # 2 "sFun_finalize"
        if(_if_conditional200=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional200) {
            # 2 "sFun_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sFun_finalize"
        # 3 "sFun_finalize"
        if(_if_conditional201=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional201) {
            # 3 "sFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sFun_finalize"
        # 4 "sFun_finalize"
        if(_if_conditional202=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional202) {
            # 4 "sFun_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sFun_finalize"
        # 5 "sFun_finalize"
        if(_if_conditional203=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional203) {
            # 5 "sFun_finalize"
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 7 "sFun_finalize"
        # 6 "sFun_finalize"
        if(_if_conditional204=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional204) {
            # 6 "sFun_finalize"
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 8 "sFun_finalize"
        # 7 "sFun_finalize"
        if(_if_conditional207=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional207) {
            # 7 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 9 "sFun_finalize"
        # 8 "sFun_finalize"
        if(_if_conditional208=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional208) {
            # 8 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 10 "sFun_finalize"
        # 9 "sFun_finalize"
        if(_if_conditional209=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional209) {
            # 9 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 11 "sFun_finalize"
        # 10 "sFun_finalize"
        if(_if_conditional210=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional210) {
            # 10 "sFun_finalize"
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 12 "sFun_finalize"
        # 11 "sFun_finalize"
        if(_if_conditional211=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional211) {
            # 11 "sFun_finalize"
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 13 "sFun_finalize"
        # 12 "sFun_finalize"
        if(_if_conditional212=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional212) {
            # 12 "sFun_finalize"
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional205;
_Bool _if_conditional206;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sBlock_finalize"
                # 0 "sBlock_finalize"
                if(_if_conditional205=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional205) {
                    # 0 "sBlock_finalize"
                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sBlock_finalize"
                # 1 "sBlock_finalize"
                if(_if_conditional206=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional206) {
                    # 1 "sBlock_finalize"
                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional213;
unsigned int hash_181;
unsigned int it_182;
_Bool _while_condtional12;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool same_key_exist_199;
char* it2_202;
_Bool _if_conditional256;
_Bool _if_conditional257;
struct map$2charphsFunph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_181, 0, sizeof(unsigned int));
memset(&it_182, 0, sizeof(unsigned int));
memset(&same_key_exist_199, 0, sizeof(_Bool));
memset(&it2_202, 0, sizeof(char*));
        # 1393 "./comelang2.h"
        # 1390 "./comelang2.h"
        if(_if_conditional213=self->len*10>=self->size,        _if_conditional213) {
            # 1391 "./comelang2.h"
            map$2charphsFunph_rehash(self);
        }
        # 1393 "./comelang2.h"
        hash_181=string_get_hash_key(key)%self->size;
        # 1394 "./comelang2.h"
        it_182=hash_181;
        # 1452 "./comelang2.h"
        while(_while_condtional12=(_Bool)1,        _while_condtional12) {
            # 1450 "./comelang2.h"
            # 1397 "./comelang2.h"
            if(_if_conditional225=self->item_existance[it_182],            _if_conditional225) {
                # 1420 "./comelang2.h"
                # 1399 "./comelang2.h"
                if(_if_conditional226=string_equals(self->keys[it_182],key),                _if_conditional226) {
                    # 1410 "./comelang2.h"
                    # 1401 "./comelang2.h"
                    if(_if_conditional227=1,                    _if_conditional227) {
                        # 1402 "./comelang2.h"
                        list$1charp_remove(self->key_list,self->keys[it_182]);
                        # 1403 "./comelang2.h"
                        self->keys[it_182] = come_decrement_ref_count2(self->keys[it_182], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1404 "./comelang2.h"
                        self->keys[it_182]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1407 "./comelang2.h"
                        list$1charp_remove(self->key_list,self->keys[it_182]);
                        # 1408 "./comelang2.h"
                        self->keys[it_182]=key;
                    }
                    # 1417 "./comelang2.h"
                    # 1410 "./comelang2.h"
                    if(_if_conditional247=1,                    _if_conditional247) {
                        # 1411 "./comelang2.h"
                        come_call_finalizer2(sFun_finalize,self->items[it_182], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 1412 "./comelang2.h"
                        self->items[it_182]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        # 1415 "./comelang2.h"
                        self->items[it_182]=item;
                    }
                    # 1417 "./comelang2.h"
                    break;
                }
                # 1420 "./comelang2.h"
                it_182++;
                # 1430 "./comelang2.h"
                # 1422 "./comelang2.h"
                if(_if_conditional248=it_182>=self->size,                _if_conditional248) {
                    # 1423 "./comelang2.h"
                    it_182=0;
                }
                else {
                    # 1430 "./comelang2.h"
                    # 1425 "./comelang2.h"
                    if(_if_conditional249=it_182==hash_181,                    _if_conditional249) {
                        # 1426 "./comelang2.h"
                        printf("unexpected error in map.insert\n");
                        # 1427 "./comelang2.h"
                        stackframe();
                        # 1428 "./comelang2.h"
                        exit(2);
                    }
                }
            }
            else {
                # 1432 "./comelang2.h"
                self->item_existance[it_182]=(_Bool)1;
                # 1439 "./comelang2.h"
                # 1433 "./comelang2.h"
                if(_if_conditional250=1,                _if_conditional250) {
                    # 1434 "./comelang2.h"
                    self->keys[it_182]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1437 "./comelang2.h"
                    self->keys[it_182]=key;
                }
                # 1446 "./comelang2.h"
                # 1439 "./comelang2.h"
                if(_if_conditional251=1,                _if_conditional251) {
                    # 1440 "./comelang2.h"
                    self->items[it_182]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    # 1443 "./comelang2.h"
                    self->items[it_182]=item;
                }
                # 1446 "./comelang2.h"
                self->len++;
                # 1448 "./comelang2.h"
                break;
            }
        }
        # 1452 "./comelang2.h"
        same_key_exist_199=(_Bool)0;
        # 1461 "./comelang2.h"
        for(        it2_202=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_202=list$1charp_next(self->key_list)        ){
            # 1459 "./comelang2.h"
            # 1455 "./comelang2.h"
            if(_if_conditional256=string_equals(it2_202,key),            _if_conditional256) {
                # 1456 "./comelang2.h"
                puts("SAME KEY");
                # 1457 "./comelang2.h"
                same_key_exist_199=(_Bool)1;
            }
        }
        # 1465 "./comelang2.h"
        # 1461 "./comelang2.h"
        if(_if_conditional257=!same_key_exist_199,        _if_conditional257) {
            # 1462 "./comelang2.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1465 "./comelang2.h"
        __result120__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result120__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_164;
void* right_value208;
char** keys_165;
void* right_value209;
struct sFun** items_166;
void* right_value210;
_Bool* item_existance_167;
int len_168;
char* it_171;
struct sFun* default_value_174;
struct sFun* it2_177;
unsigned int hash_178;
int n_179;
_Bool _while_condtional11;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
struct sFun* default_value_180;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_164, 0, sizeof(int));
right_value208 = (void*)0;
memset(&keys_165, 0, sizeof(char**));
right_value209 = (void*)0;
memset(&items_166, 0, sizeof(struct sFun**));
right_value210 = (void*)0;
memset(&item_existance_167, 0, sizeof(_Bool*));
memset(&len_168, 0, sizeof(int));
memset(&it_171, 0, sizeof(char*));
memset(&default_value_174, 0, sizeof(struct sFun*));
memset(&it2_177, 0, sizeof(struct sFun*));
memset(&hash_178, 0, sizeof(unsigned int));
memset(&n_179, 0, sizeof(int));
memset(&default_value_180, 0, sizeof(struct sFun*));
                # 1337 "./comelang2.h"
                size_164=self->size*10;
                # 1338 "./comelang2.h"
                keys_165=(char**)come_increment_ref_count(((char**)(right_value208=(char**)come_calloc(1, sizeof(char*)*(1*(size_164)), "./comelang2.h", 1338, "char*%"))));
                right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1339 "./comelang2.h"
                items_166=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value209=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_164)), "./comelang2.h", 1339, "sFun*%"))));
                come_call_finalizer2(sFun_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1340 "./comelang2.h"
                item_existance_167=(_Bool*)come_increment_ref_count(((_Bool*)(right_value210=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_164)), "./comelang2.h", 1340, "bool"))));
                right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1342 "./comelang2.h"
                len_168=0;
                # 1377 "./comelang2.h"
                for(                it_171=map$2charphsFunph_begin(self);                !map$2charphsFunph_end(self);                it_171=map$2charphsFunph_next(self)                ){
                    # 1345 "./comelang2.h"
                    # 1346 "./comelang2.h"
                    memset(&default_value_174,0,sizeof(struct sFun*));
                    # 1347 "./comelang2.h"
                    it2_177=map$2charphsFunph_at(self,it_171,default_value_174);
                    # 1348 "./comelang2.h"
                    hash_178=string_get_hash_key(it_171)%size_164;
                    # 1349 "./comelang2.h"
                    n_179=hash_178;
                    # 1375 "./comelang2.h"
                    while(_while_condtional11=(_Bool)1,                    _while_condtional11) {
                        # 1374 "./comelang2.h"
                        # 1352 "./comelang2.h"
                        if(_if_conditional222=item_existance_167[n_179],                        _if_conditional222) {
                            # 1354 "./comelang2.h"
                            n_179++;
                            # 1364 "./comelang2.h"
                            # 1356 "./comelang2.h"
                            if(_if_conditional223=n_179>=size_164,                            _if_conditional223) {
                                # 1357 "./comelang2.h"
                                n_179=0;
                            }
                            else {
                                # 1364 "./comelang2.h"
                                # 1359 "./comelang2.h"
                                if(_if_conditional224=n_179==hash_178,                                _if_conditional224) {
                                    # 1360 "./comelang2.h"
                                    printf("unexpected error in map.rehash(1)\n");
                                    # 1361 "./comelang2.h"
                                    stackframe();
                                    # 1362 "./comelang2.h"
                                    exit(2);
                                }
                            }
                        }
                        else {
                            # 1366 "./comelang2.h"
                            item_existance_167[n_179]=(_Bool)1;
                            # 1367 "./comelang2.h"
                            keys_165[n_179]=it_171;
                            # 1368 "./comelang2.h"
                            # 1369 "./comelang2.h"
                            items_166[n_179]=map$2charphsFunph_at(self,it_171,default_value_180);
                            # 1371 "./comelang2.h"
                            len_168++;
                            # 1372 "./comelang2.h"
                            break;
                        }
                    }
                }
                # 1377 "./comelang2.h"
                come_free((char*)self->items);
                # 1378 "./comelang2.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                # 1379 "./comelang2.h"
                come_free((char*)self->keys);
                # 1381 "./comelang2.h"
                self->keys=keys_165;
                # 1382 "./comelang2.h"
                self->items=items_166;
                # 1383 "./comelang2.h"
                self->item_existance=item_existance_167;
                # 1385 "./comelang2.h"
                self->size=size_164;
                # 1386 "./comelang2.h"
                self->len=len_168;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional214;
char* result_169;
char* __result97__;
_Bool _if_conditional215;
char* __result98__;
char* result_170;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_169, 0, sizeof(char*));
memset(&result_170, 0, sizeof(char*));
                    # 1304 "./comelang2.h"
                    # 1299 "./comelang2.h"
                    if(_if_conditional214=self==((void*)0),                    _if_conditional214) {
                        # 1300 "./comelang2.h"
                        # 1301 "./comelang2.h"
                        memset(&result_169,0,sizeof(char*));
                        # 1302 "./comelang2.h"
                        __result97__ = __result_obj__ = result_169;
                        return __result97__;
                    }
                    # 1304 "./comelang2.h"
                    self->key_list->it=self->key_list->head;
                    # 1310 "./comelang2.h"
                    # 1306 "./comelang2.h"
                    if(self->key_list->it) {
                        # 1307 "./comelang2.h"
                        __result98__ = __result_obj__ = self->key_list->it->item;
                        return __result98__;
                    }
                    # 1310 "./comelang2.h"
                    # 1311 "./comelang2.h"
                    memset(&result_170,0,sizeof(char*));
                    # 1312 "./comelang2.h"
                    __result99__ = __result_obj__ = result_170;
                    return __result99__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1333 "./comelang2.h"
                    __result100__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result100__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional216;
char* result_172;
char* __result101__;
_Bool _if_conditional217;
char* __result102__;
char* result_173;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_172, 0, sizeof(char*));
memset(&result_173, 0, sizeof(char*));
                    # 1321 "./comelang2.h"
                    # 1316 "./comelang2.h"
                    if(_if_conditional216=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional216) {
                        # 1317 "./comelang2.h"
                        # 1318 "./comelang2.h"
                        memset(&result_172,0,sizeof(char*));
                        # 1319 "./comelang2.h"
                        __result101__ = __result_obj__ = result_172;
                        return __result101__;
                    }
                    # 1321 "./comelang2.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1327 "./comelang2.h"
                    # 1323 "./comelang2.h"
                    if(self->key_list->it) {
                        # 1324 "./comelang2.h"
                        __result102__ = __result_obj__ = self->key_list->it->item;
                        return __result102__;
                    }
                    # 1327 "./comelang2.h"
                    # 1328 "./comelang2.h"
                    memset(&result_173,0,sizeof(char*));
                    # 1329 "./comelang2.h"
                    __result103__ = __result_obj__ = result_173;
                    return __result103__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_175;
unsigned int it_176;
_Bool _while_condtional10;
_Bool _if_conditional218;
_Bool _if_conditional219;
struct sFun* __result104__;
_Bool _if_conditional220;
_Bool _if_conditional221;
struct sFun* __result105__;
struct sFun* __result106__;
struct sFun* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_175, 0, sizeof(unsigned int));
memset(&it_176, 0, sizeof(unsigned int));
                        # 1226 "./comelang2.h"
                        hash_175=string_get_hash_key(((char*)key))%self->size;
                        # 1227 "./comelang2.h"
                        it_176=hash_175;
                        # 1251 "./comelang2.h"
                        while(_while_condtional10=(_Bool)1,                        _while_condtional10) {
                            # 1249 "./comelang2.h"
                            # 1230 "./comelang2.h"
                            if(_if_conditional218=self->item_existance[it_176],                            _if_conditional218) {
                                # 1237 "./comelang2.h"
                                # 1232 "./comelang2.h"
                                if(_if_conditional219=string_equals(self->keys[it_176],key),                                _if_conditional219) {
                                    # 1234 "./comelang2.h"
                                    __result104__ = __result_obj__ = self->items[it_176];
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result104__;
                                }
                                # 1237 "./comelang2.h"
                                it_176++;
                                # 1245 "./comelang2.h"
                                # 1239 "./comelang2.h"
                                if(_if_conditional220=it_176>=self->size,                                _if_conditional220) {
                                    # 1240 "./comelang2.h"
                                    it_176=0;
                                }
                                else {
                                    # 1245 "./comelang2.h"
                                    # 1242 "./comelang2.h"
                                    if(_if_conditional221=it_176==hash_175,                                    _if_conditional221) {
                                        # 1243 "./comelang2.h"
                                        __result105__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result105__;
                                    }
                                }
                            }
                            else {
                                # 1247 "./comelang2.h"
                                __result106__ = __result_obj__ = default_value;
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result106__;
                            }
                        }
                        # 1251 "./comelang2.h"
                        __result107__ = __result_obj__ = default_value;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result107__;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_183;
struct list_item$1charp* it_184;
_Bool _while_condtional13;
_Bool _if_conditional228;
struct list$1charp* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_183, 0, sizeof(int));
memset(&it_184, 0, sizeof(struct list_item$1charp*));
                            # 448 "./comelang2.h"
                            it2_183=0;
                            # 449 "./comelang2.h"
                            it_184=self->head;
                            # 460 "./comelang2.h"
                            while(_while_condtional13=it_184!=((void*)0),                            _while_condtional13) {
                                # 455 "./comelang2.h"
                                # 451 "./comelang2.h"
                                if(_if_conditional228=string_equals(it_184->item,item),                                _if_conditional228) {
                                    # 452 "./comelang2.h"
                                    list$1charp_delete(self,it2_183,it2_183+1);
                                    # 453 "./comelang2.h"
                                    break;
                                }
                                # 455 "./comelang2.h"
                                it2_183++;
                                # 457 "./comelang2.h"
                                it_184=it_184->next;
                            }
                            # 460 "./comelang2.h"
                            __result111__ = __result_obj__ = self;
                            return __result111__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
int tmp_185;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
struct list$1charp* __result108__;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list_item$1charp* it_188;
int i_189;
_Bool _while_condtional15;
_Bool _if_conditional237;
struct list_item$1charp* prev_it_190;
_Bool _if_conditional238;
_Bool _if_conditional239;
struct list_item$1charp* it_191;
int i_192;
_Bool _while_condtional16;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct list_item$1charp* prev_it_193;
struct list_item$1charp* it_194;
struct list_item$1charp* head_prev_it_195;
struct list_item$1charp* tail_it_196;
int i_197;
_Bool _while_condtional17;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
struct list_item$1charp* prev_it_198;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct list$1charp* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_185, 0, sizeof(int));
memset(&it_188, 0, sizeof(struct list_item$1charp*));
memset(&i_189, 0, sizeof(int));
memset(&prev_it_190, 0, sizeof(struct list_item$1charp*));
memset(&it_191, 0, sizeof(struct list_item$1charp*));
memset(&i_192, 0, sizeof(int));
memset(&prev_it_193, 0, sizeof(struct list_item$1charp*));
memset(&it_194, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_195, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_196, 0, sizeof(struct list_item$1charp*));
memset(&i_197, 0, sizeof(int));
memset(&prev_it_198, 0, sizeof(struct list_item$1charp*));
                                        # 467 "./comelang2.h"
                                        # 464 "./comelang2.h"
                                        if(_if_conditional229=head<0,                                        _if_conditional229) {
                                            # 465 "./comelang2.h"
                                            head+=self->len;
                                        }
                                        # 471 "./comelang2.h"
                                        # 467 "./comelang2.h"
                                        if(_if_conditional230=tail<0,                                        _if_conditional230) {
                                            # 468 "./comelang2.h"
                                            tail+=self->len+1;
                                        }
                                        # 477 "./comelang2.h"
                                        # 471 "./comelang2.h"
                                        if(_if_conditional231=head>tail,                                        _if_conditional231) {
                                            # 472 "./comelang2.h"
                                            tmp_185=tail;
                                            # 473 "./comelang2.h"
                                            tail=head;
                                            # 474 "./comelang2.h"
                                            head=tmp_185;
                                        }
                                        # 481 "./comelang2.h"
                                        # 477 "./comelang2.h"
                                        if(_if_conditional232=head<0,                                        _if_conditional232) {
                                            # 478 "./comelang2.h"
                                            head=0;
                                        }
                                        # 485 "./comelang2.h"
                                        # 481 "./comelang2.h"
                                        if(_if_conditional233=tail>self->len,                                        _if_conditional233) {
                                            # 482 "./comelang2.h"
                                            tail=self->len;
                                        }
                                        # 489 "./comelang2.h"
                                        # 485 "./comelang2.h"
                                        if(_if_conditional234=head==tail,                                        _if_conditional234) {
                                            # 486 "./comelang2.h"
                                            __result108__ = __result_obj__ = self;
                                            return __result108__;
                                        }
                                        # 584 "./comelang2.h"
                                        # 489 "./comelang2.h"
                                        if(_if_conditional235=head==0&&tail==self->len,                                        _if_conditional235) {
                                            # 491 "./comelang2.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 584 "./comelang2.h"
                                            # 493 "./comelang2.h"
                                            if(_if_conditional236=head==0,                                            _if_conditional236) {
                                                # 494 "./comelang2.h"
                                                it_188=self->head;
                                                # 495 "./comelang2.h"
                                                i_189=0;
                                                # 517 "./comelang2.h"
                                                while(_while_condtional15=it_188!=((void*)0),                                                _while_condtional15) {
                                                    # 516 "./comelang2.h"
                                                    # 497 "./comelang2.h"
                                                    if(_if_conditional237=i_189<tail,                                                    _if_conditional237) {
                                                        # 498 "./comelang2.h"
                                                        prev_it_190=it_188;
                                                        # 500 "./comelang2.h"
                                                        it_188=it_188->next;
                                                        # 501 "./comelang2.h"
                                                        i_189++;
                                                        # 503 "./comelang2.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        # 505 "./comelang2.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 516 "./comelang2.h"
                                                        # 507 "./comelang2.h"
                                                        if(_if_conditional238=i_189==tail,                                                        _if_conditional238) {
                                                            # 508 "./comelang2.h"
                                                            self->head=it_188;
                                                            # 509 "./comelang2.h"
                                                            self->head->prev=((void*)0);
                                                            # 510 "./comelang2.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 513 "./comelang2.h"
                                                            it_188=it_188->next;
                                                            # 514 "./comelang2.h"
                                                            i_189++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 584 "./comelang2.h"
                                                # 518 "./comelang2.h"
                                                if(_if_conditional239=tail==self->len,                                                _if_conditional239) {
                                                    # 519 "./comelang2.h"
                                                    it_191=self->head;
                                                    # 520 "./comelang2.h"
                                                    i_192=0;
                                                    # 542 "./comelang2.h"
                                                    while(_while_condtional16=it_191!=((void*)0),                                                    _while_condtional16) {
                                                        # 527 "./comelang2.h"
                                                        # 522 "./comelang2.h"
                                                        if(_if_conditional240=i_192==head,                                                        _if_conditional240) {
                                                            # 523 "./comelang2.h"
                                                            self->tail=it_191->prev;
                                                            # 524 "./comelang2.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 541 "./comelang2.h"
                                                        # 527 "./comelang2.h"
                                                        if(_if_conditional241=i_192>=head,                                                        _if_conditional241) {
                                                            # 528 "./comelang2.h"
                                                            prev_it_193=it_191;
                                                            # 530 "./comelang2.h"
                                                            it_191=it_191->next;
                                                            # 531 "./comelang2.h"
                                                            i_192++;
                                                            # 533 "./comelang2.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 535 "./comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 538 "./comelang2.h"
                                                            it_191=it_191->next;
                                                            # 539 "./comelang2.h"
                                                            i_192++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 544 "./comelang2.h"
                                                    it_194=self->head;
                                                    # 546 "./comelang2.h"
                                                    head_prev_it_195=((void*)0);
                                                    # 547 "./comelang2.h"
                                                    tail_it_196=((void*)0);
                                                    # 550 "./comelang2.h"
                                                    i_197=0;
                                                    # 576 "./comelang2.h"
                                                    while(_while_condtional17=it_194!=((void*)0),                                                    _while_condtional17) {
                                                        # 555 "./comelang2.h"
                                                        # 552 "./comelang2.h"
                                                        if(_if_conditional242=i_197==head,                                                        _if_conditional242) {
                                                            # 553 "./comelang2.h"
                                                            head_prev_it_195=it_194->prev;
                                                        }
                                                        # 559 "./comelang2.h"
                                                        # 555 "./comelang2.h"
                                                        if(_if_conditional243=i_197==tail,                                                        _if_conditional243) {
                                                            # 556 "./comelang2.h"
                                                            tail_it_196=it_194;
                                                        }
                                                        # 574 "./comelang2.h"
                                                        # 559 "./comelang2.h"
                                                        if(_if_conditional244=i_197>=head&&i_197<tail,                                                        _if_conditional244) {
                                                            # 561 "./comelang2.h"
                                                            prev_it_198=it_194;
                                                            # 563 "./comelang2.h"
                                                            it_194=it_194->next;
                                                            # 564 "./comelang2.h"
                                                            i_197++;
                                                            # 566 "./comelang2.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 568 "./comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 571 "./comelang2.h"
                                                            it_194=it_194->next;
                                                            # 572 "./comelang2.h"
                                                            i_197++;
                                                        }
                                                    }
                                                    # 579 "./comelang2.h"
                                                    # 576 "./comelang2.h"
                                                    if(_if_conditional245=head_prev_it_195!=((void*)0),                                                    _if_conditional245) {
                                                        # 577 "./comelang2.h"
                                                        head_prev_it_195->next=tail_it_196;
                                                    }
                                                    # 582 "./comelang2.h"
                                                    # 579 "./comelang2.h"
                                                    if(_if_conditional246=tail_it_196!=((void*)0),                                                    _if_conditional246) {
                                                        # 580 "./comelang2.h"
                                                        tail_it_196->prev=head_prev_it_195;
                                                    }
                                                }
                                            }
                                        }
                                        # 584 "./comelang2.h"
                                        __result110__ = __result_obj__ = self;
                                        return __result110__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_186;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_187;
struct list$1charp* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_186, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_187, 0, sizeof(struct list_item$1charp*));
                                                # 433 "./comelang2.h"
                                                it_186=self->head;
                                                # 440 "./comelang2.h"
                                                while(_while_condtional14=it_186!=((void*)0),                                                _while_condtional14) {
                                                    # 435 "./comelang2.h"
                                                    prev_it_187=it_186;
                                                    # 436 "./comelang2.h"
                                                    it_186=it_186->next;
                                                    # 437 "./comelang2.h"
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 440 "./comelang2.h"
                                                self->head=((void*)0);
                                                # 441 "./comelang2.h"
                                                self->tail=((void*)0);
                                                # 443 "./comelang2.h"
                                                self->len=0;
                                                # 445 "./comelang2.h"
                                                __result109__ = __result_obj__ = self;
                                                return __result109__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional252;
char* result_200;
char* __result112__;
_Bool _if_conditional253;
char* __result113__;
char* result_201;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_200, 0, sizeof(char*));
memset(&result_201, 0, sizeof(char*));
            # 290 "./comelang2.h"
            # 285 "./comelang2.h"
            if(_if_conditional252=self==((void*)0),            _if_conditional252) {
                # 286 "./comelang2.h"
                # 287 "./comelang2.h"
                memset(&result_200,0,sizeof(char*));
                # 288 "./comelang2.h"
                __result112__ = __result_obj__ = result_200;
                return __result112__;
            }
            # 290 "./comelang2.h"
            self->it=self->head;
            # 296 "./comelang2.h"
            # 292 "./comelang2.h"
            if(self->it) {
                # 293 "./comelang2.h"
                __result113__ = __result_obj__ = self->it->item;
                return __result113__;
            }
            # 296 "./comelang2.h"
            # 297 "./comelang2.h"
            memset(&result_201,0,sizeof(char*));
            # 298 "./comelang2.h"
            __result114__ = __result_obj__ = result_201;
            return __result114__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./comelang2.h"
            __result115__ = self==((void*)0)||self->it==((void*)0);
            return __result115__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional254;
char* result_203;
char* __result116__;
_Bool _if_conditional255;
char* __result117__;
char* result_204;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_203, 0, sizeof(char*));
memset(&result_204, 0, sizeof(char*));
            # 308 "./comelang2.h"
            # 302 "./comelang2.h"
            if(_if_conditional254=self==((void*)0)||self->it==((void*)0),            _if_conditional254) {
                # 303 "./comelang2.h"
                # 304 "./comelang2.h"
                memset(&result_203,0,sizeof(char*));
                # 305 "./comelang2.h"
                __result116__ = __result_obj__ = result_203;
                return __result116__;
            }
            # 308 "./comelang2.h"
            self->it=self->it->next;
            # 314 "./comelang2.h"
            # 310 "./comelang2.h"
            if(self->it) {
                # 311 "./comelang2.h"
                __result117__ = __result_obj__ = self->it->item;
                return __result117__;
            }
            # 314 "./comelang2.h"
            # 315 "./comelang2.h"
            memset(&result_204,0,sizeof(char*));
            # 316 "./comelang2.h"
            __result118__ = __result_obj__ = result_204;
            return __result118__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional258;
void* right_value211;
struct list_item$1charp* litem_205;
_Bool _if_conditional259;
void* right_value212;
struct list_item$1charp* litem_206;
void* right_value213;
struct list_item$1charp* litem_207;
struct list$1charp* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
memset(&litem_205, 0, sizeof(struct list_item$1charp*));
right_value212 = (void*)0;
memset(&litem_206, 0, sizeof(struct list_item$1charp*));
right_value213 = (void*)0;
memset(&litem_207, 0, sizeof(struct list_item$1charp*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional258=self->len==0,                _if_conditional258) {
                    # 226 "./comelang2.h"
                    litem_205=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value211=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_205->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_205->next=((void*)0);
                    # 230 "./comelang2.h"
                    litem_205->item=item;
                    # 232 "./comelang2.h"
                    self->tail=litem_205;
                    # 233 "./comelang2.h"
                    self->head=litem_205;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional259=self->len==1,                    _if_conditional259) {
                        # 236 "./comelang2.h"
                        litem_206=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value212=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_206->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_206->next=((void*)0);
                        # 240 "./comelang2.h"
                        litem_206->item=item;
                        # 242 "./comelang2.h"
                        self->tail=litem_206;
                        # 243 "./comelang2.h"
                        self->head->next=litem_206;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_207=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value213=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_207->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_207->next=((void*)0);
                        # 250 "./comelang2.h"
                        litem_207->item=item;
                        # 252 "./comelang2.h"
                        self->tail->next=litem_207;
                        # 253 "./comelang2.h"
                        self->tail=litem_207;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result119__ = __result_obj__ = self;
                return __result119__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
void* right_value215;
char* output_file_name_208;
struct _IO_FILE* f_209;
void* right_value216;
struct map$2charphsFunph* o2_saved_210;
char* it_211;
void* right_value217;
struct sFun* it2_215;
void* right_value218;
char* header_216;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
struct map$2charphsFunph* o2_saved_221;
char* it_222;
void* right_value219;
struct sFun* it2_223;
void* right_value220;
char* header_224;
_Bool _if_conditional272;
void* right_value221;
char* output_225;
_Bool _if_conditional273;
void* right_value222;
char* output_226;
_Bool _if_conditional274;
_Bool _if_conditional275;
struct map$2charphsFunph* o2_saved_227;
char* it_228;
struct sFun* it2_229;
_Bool _if_conditional276;
void* right_value223;
char* output_230;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
memset(&output_file_name_208, 0, sizeof(char*));
memset(&f_209, 0, sizeof(struct _IO_FILE*));
right_value216 = (void*)0;
memset(&o2_saved_210, 0, sizeof(struct map$2charphsFunph*));
memset(&it_211, 0, sizeof(char*));
right_value217 = (void*)0;
memset(&it2_215, 0, sizeof(struct sFun*));
right_value218 = (void*)0;
memset(&header_216, 0, sizeof(char*));
memset(&o2_saved_221, 0, sizeof(struct map$2charphsFunph*));
memset(&it_222, 0, sizeof(char*));
right_value219 = (void*)0;
memset(&it2_223, 0, sizeof(struct sFun*));
right_value220 = (void*)0;
memset(&header_224, 0, sizeof(char*));
right_value221 = (void*)0;
memset(&output_225, 0, sizeof(char*));
right_value222 = (void*)0;
memset(&output_226, 0, sizeof(char*));
memset(&o2_saved_227, 0, sizeof(struct map$2charphsFunph*));
memset(&it_228, 0, sizeof(char*));
memset(&it2_229, 0, sizeof(struct sFun*));
right_value223 = (void*)0;
memset(&output_230, 0, sizeof(char*));
    # 704 "03transpile2.c"
    output_file_name_208=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s.c",info->sname))));
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 706 "03transpile2.c"
    f_209=fopen(output_file_name_208,"w");
    # 708 "03transpile2.c"
    fprintf(f_209,"// source head\n");
    # 709 "03transpile2.c"
    fprintf(f_209,"%s\n",((char*)(right_value216=buffer_to_string(info->module->mSourceHead))));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 711 "03transpile2.c"
    fprintf(f_209,"// header function\n");
    # 729 "03transpile2.c"
    for(    o2_saved_210=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_211=map$2charphsFunph_begin((o2_saved_210));    !map$2charphsFunph_end((o2_saved_210));    it_211=map$2charphsFunph_next((o2_saved_210))    ){
        # 713 "03transpile2.c"
        it2_215=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value217=__builtin_string(it_211))));
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 715 "03transpile2.c"
        header_216=(char*)come_increment_ref_count(((char*)(right_value218=header_function(it2_215,info))));
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 727 "03transpile2.c"
        # 717 "03transpile2.c"
        if(_if_conditional264=it2_215->mStatic&&it2_215->mResultType->mInline,        _if_conditional264) {
        }
        else {
            # 727 "03transpile2.c"
            # 719 "03transpile2.c"
            if(it2_215->mStatic) {
                # 720 "03transpile2.c"
                fprintf(f_209,"static %s",header_216);
            }
            else {
                # 727 "03transpile2.c"
                # 722 "03transpile2.c"
                if(it2_215->mResultType->mInline) {
                }
                else {
                    # 727 "03transpile2.c"
                    # 724 "03transpile2.c"
                    if(_if_conditional267=string_operator_not_equals(it_211,"__builtin_va_start")&&string_operator_not_equals(it_211,"__builtin_va_end"),                    _if_conditional267) {
                        # 725 "03transpile2.c"
                        fprintf(f_209,"%s\n",header_216,it_211);
                    }
                }
            }
        }
        header_216 = come_decrement_ref_count2(header_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 729 "03transpile2.c"
    fprintf(f_209,"// inline function\n");
    # 749 "03transpile2.c"
    for(    o2_saved_221=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_222=map$2charphsFunph_begin((o2_saved_221));    !map$2charphsFunph_end((o2_saved_221));    it_222=map$2charphsFunph_next((o2_saved_221))    ){
        # 731 "03transpile2.c"
        it2_223=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value219=__builtin_string(it_222))));
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 733 "03transpile2.c"
        header_224=(char*)come_increment_ref_count(((char*)(right_value220=header_function(it2_223,info))));
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 747 "03transpile2.c"
        # 735 "03transpile2.c"
        if(_if_conditional272=it2_223->mStatic&&it2_223->mResultType->mInline,        _if_conditional272) {
            # 736 "03transpile2.c"
            output_225=(char*)come_increment_ref_count(((char*)(right_value221=output_function(it2_223,info))));
            right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 737 "03transpile2.c"
            fprintf(f_209,"static inline %s",output_225);
            output_225 = come_decrement_ref_count2(output_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 747 "03transpile2.c"
            # 739 "03transpile2.c"
            if(it2_223->mResultType->mInline) {
                # 740 "03transpile2.c"
                output_226=(char*)come_increment_ref_count(((char*)(right_value222=output_function(it2_223,info))));
                right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 741 "03transpile2.c"
                fprintf(f_209,"static inline %s",output_226);
                output_226 = come_decrement_ref_count2(output_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 747 "03transpile2.c"
                # 743 "03transpile2.c"
                if(it2_223->mStatic) {
                }
                else {
                    # 747 "03transpile2.c"
                    # 745 "03transpile2.c"
                    if(_if_conditional275=string_operator_not_equals(it_222,"__builtin_va_start")&&string_operator_not_equals(it_222,"__builtin_va_end"),                    _if_conditional275) {
                    }
                }
            }
        }
        header_224 = come_decrement_ref_count2(header_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 749 "03transpile2.c"
    fprintf(f_209,"\n");
    # 751 "03transpile2.c"
    fprintf(f_209,"// body function\n");
    # 773 "03transpile2.c"
    for(    o2_saved_227=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_228=map$2charphsFunph_begin((o2_saved_227));    !map$2charphsFunph_end((o2_saved_227));    it_228=map$2charphsFunph_next((o2_saved_227))    ){
        # 753 "03transpile2.c"
        it2_229=map$2charphsFunphp_operator_load_element(info->funcs,it_228);
        # 771 "03transpile2.c"
        # 755 "03transpile2.c"
        if(_if_conditional276=!it2_229->mExternal,        _if_conditional276) {
            # 756 "03transpile2.c"
            output_230=(char*)come_increment_ref_count(((char*)(right_value223=output_function(it2_229,info))));
            right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 769 "03transpile2.c"
            # 758 "03transpile2.c"
            if(_if_conditional277=it2_229->mStatic&&it2_229->mResultType->mInline,            _if_conditional277) {
            }
            else {
                # 769 "03transpile2.c"
                # 760 "03transpile2.c"
                if(it2_229->mStatic) {
                    # 761 "03transpile2.c"
                    fprintf(f_209,"static %s",output_230);
                }
                else {
                    # 769 "03transpile2.c"
                    # 763 "03transpile2.c"
                    if(it2_229->mResultType->mInline) {
                    }
                    else {
                        # 766 "03transpile2.c"
                        fprintf(f_209,"%s",output_230);
                    }
                }
            }
            # 769 "03transpile2.c"
            fprintf(f_209,"\n");
            output_230 = come_decrement_ref_count2(output_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 773 "03transpile2.c"
    fclose(f_209);
    # 775 "03transpile2.c"
    __result126__ = (_Bool)1;
    output_file_name_208 = come_decrement_ref_count2(output_file_name_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result126__;
    output_file_name_208 = come_decrement_ref_count2(output_file_name_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_212;
unsigned int hash_213;
unsigned int it_214;
_Bool _while_condtional18;
_Bool _if_conditional260;
_Bool _if_conditional261;
struct sFun* __result122__;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct sFun* __result123__;
struct sFun* __result124__;
struct sFun* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_212, 0, sizeof(struct sFun*));
memset(&hash_213, 0, sizeof(unsigned int));
memset(&it_214, 0, sizeof(unsigned int));
            # 1545 "./comelang2.h"
            # 1546 "./comelang2.h"
            memset(&default_value_212,0,sizeof(struct sFun*));
            # 1548 "./comelang2.h"
            hash_213=string_get_hash_key(((char*)key))%self->size;
            # 1549 "./comelang2.h"
            it_214=hash_213;
            # 1573 "./comelang2.h"
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                # 1571 "./comelang2.h"
                # 1552 "./comelang2.h"
                if(_if_conditional260=self->item_existance[it_214],                _if_conditional260) {
                    # 1559 "./comelang2.h"
                    # 1554 "./comelang2.h"
                    if(_if_conditional261=string_equals(self->keys[it_214],key),                    _if_conditional261) {
                        # 1556 "./comelang2.h"
                        __result122__ = __result_obj__ = self->items[it_214];
                        come_call_finalizer2(sFun_finalize,default_value_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result122__;
                    }
                    # 1559 "./comelang2.h"
                    it_214++;
                    # 1567 "./comelang2.h"
                    # 1561 "./comelang2.h"
                    if(_if_conditional262=it_214>=self->size,                    _if_conditional262) {
                        # 1562 "./comelang2.h"
                        it_214=0;
                    }
                    else {
                        # 1567 "./comelang2.h"
                        # 1564 "./comelang2.h"
                        if(_if_conditional263=it_214==hash_213,                        _if_conditional263) {
                            # 1565 "./comelang2.h"
                            __result123__ = __result_obj__ = default_value_212;
                            come_call_finalizer2(sFun_finalize,default_value_212, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result123__;
                        }
                    }
                }
                else {
                    # 1569 "./comelang2.h"
                    __result124__ = __result_obj__ = default_value_212;
                    come_call_finalizer2(sFun_finalize,default_value_212, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result124__;
                }
            }
            # 1573 "./comelang2.h"
            __result125__ = __result_obj__ = default_value_212;
            come_call_finalizer2(sFun_finalize,default_value_212, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result125__;
            come_call_finalizer2(sFun_finalize,default_value_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_217;
_Bool _if_conditional268;
_Bool _if_conditional269;
int i_218;
_Bool _if_conditional270;
_Bool _if_conditional271;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_217, 0, sizeof(int));
memset(&i_218, 0, sizeof(int));
        # 1137 "./comelang2.h"
        for(        i_217=0;        i_217<self->size;        i_217++        ){
            # 1136 "./comelang2.h"
            # 1131 "./comelang2.h"
            if(_if_conditional268=self->item_existance[i_217],            _if_conditional268) {
                # 1135 "./comelang2.h"
                # 1132 "./comelang2.h"
                if(_if_conditional269=1,                _if_conditional269) {
                    # 1133 "./comelang2.h"
                    come_call_finalizer2(sFun_finalize,self->items[i_217], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1137 "./comelang2.h"
        come_free((char*)self->items);
        # 1146 "./comelang2.h"
        for(        i_218=0;        i_218<self->size;        i_218++        ){
            # 1145 "./comelang2.h"
            # 1140 "./comelang2.h"
            if(_if_conditional270=self->item_existance[i_218],            _if_conditional270) {
                # 1144 "./comelang2.h"
                # 1141 "./comelang2.h"
                if(_if_conditional271=1,                _if_conditional271) {
                    # 1142 "./comelang2.h"
                    self->keys[i_218] = come_decrement_ref_count2(self->keys[i_218], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1charp* it_219;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_220;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_219, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_220, 0, sizeof(struct list_item$1charp*));
            # 123 "./comelang2.h"
            it_219=self->head;
            # 129 "./comelang2.h"
            while(_while_condtional19=it_219!=((void*)0),            _while_condtional19) {
                # 125 "./comelang2.h"
                prev_it_220=it_219;
                # 126 "./comelang2.h"
                it_219=it_219->next;
                # 127 "./comelang2.h"
                come_call_finalizer2(list_item$1charpp_finalize,prev_it_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
char* output_file_name_231;
struct _IO_FILE* f_232;
_Bool _if_conditional280;
void* right_value224;
_Bool _if_conditional281;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_231, 0, sizeof(char*));
memset(&f_232, 0, sizeof(struct _IO_FILE*));
right_value224 = (void*)0;
    # 781 "03transpile2.c"
    output_file_name_231=(char*)come_increment_ref_count(info->output_file_name);
    # 783 "03transpile2.c"
    f_232=fopen(output_file_name_231,"a");
    # 791 "03transpile2.c"
    # 785 "03transpile2.c"
    if(_if_conditional280=string_operator_equals(info->output_file_name,"common.h"),    _if_conditional280) {
        # 786 "03transpile2.c"
        fprintf(f_232,"#ifndef __COMMON_H__\n");
        # 787 "03transpile2.c"
        fprintf(f_232,"#define __COMMON_H__\n");
        # 788 "03transpile2.c"
        fprintf(f_232,"#include <comelang2.h>\n");
    }
    # 791 "03transpile2.c"
    fprintf(f_232,"%s\n",((char*)(right_value224=buffer_to_string(info->module->mHeader))));
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 793 "03transpile2.c"
    fprintf(f_232,"\n");
    # 799 "03transpile2.c"
    # 795 "03transpile2.c"
    if(_if_conditional281=string_operator_equals(info->output_file_name,"common.h"),    _if_conditional281) {
        # 796 "03transpile2.c"
        fprintf(f_232,"#endif\n");
    }
    # 799 "03transpile2.c"
    fclose(f_232);
    # 801 "03transpile2.c"
    __result127__ = (_Bool)1;
    output_file_name_231 = come_decrement_ref_count2(output_file_name_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result127__;
    output_file_name_231 = come_decrement_ref_count2(output_file_name_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    # 809 "03transpile2.c"
    # 806 "03transpile2.c"
    if(info->no_output_come_code) {
        # 807 "03transpile2.c"
        return;
    }
    # 809 "03transpile2.c"
    # 811 "03transpile2.c"
    # 812 "03transpile2.c"
    __builtin_va_start(args_234,code);
    # 813 "03transpile2.c"
    len_235=vasprintf(&msg2_233,code,args_234);
    # 814 "03transpile2.c"
    __builtin_va_end(args_234);
    # 820 "03transpile2.c"
    # 816 "03transpile2.c"
    if(info->come_fun) {
        # 817 "03transpile2.c"
        buffer_append_str(info->come_fun->mSourceHead,msg2_233);
    }
    # 820 "03transpile2.c"
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
    # 828 "03transpile2.c"
    # 825 "03transpile2.c"
    if(info->no_output_come_code) {
        # 826 "03transpile2.c"
        return;
    }
    # 828 "03transpile2.c"
    # 830 "03transpile2.c"
    # 831 "03transpile2.c"
    __builtin_va_start(args_237,code);
    # 832 "03transpile2.c"
    len_238=vasprintf(&msg2_236,code,args_237);
    # 833 "03transpile2.c"
    __builtin_va_end(args_237);
    # 839 "03transpile2.c"
    # 835 "03transpile2.c"
    if(info->come_fun) {
        # 836 "03transpile2.c"
        buffer_append_str(info->come_fun->mSourceHead2,msg2_236);
    }
    # 839 "03transpile2.c"
    free(msg2_236);
    come_call_finalizer2(va_list_finalize,(&args_237), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional286;
_Bool _if_conditional287;
char* __dec_obj43;
_Bool _if_conditional288;
char* __dec_obj44;
_Bool _if_conditional289;
char* __dec_obj45;
memset(&__result_obj__, 0, sizeof(void*));
    # 847 "03transpile2.c"
    # 844 "03transpile2.c"
    if(info->no_output_come_code) {
        # 845 "03transpile2.c"
        return;
    }
    # 851 "03transpile2.c"
    # 847 "03transpile2.c"
    if(info->module->mLastCode) {
        # 848 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode);
        # 849 "03transpile2.c"
        __dec_obj43=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 855 "03transpile2.c"
    # 851 "03transpile2.c"
    if(info->module->mLastCode2) {
        # 852 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode2);
        # 853 "03transpile2.c"
        __dec_obj44=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 859 "03transpile2.c"
    # 855 "03transpile2.c"
    if(info->module->mLastCode3) {
        # 856 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode3);
        # 857 "03transpile2.c"
        __dec_obj45=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value225;
char* __dec_obj46;
_Bool _if_conditional292;
void* right_value226;
char* __dec_obj47;
_Bool _if_conditional293;
void* right_value227;
char* __dec_obj48;
memset(&__result_obj__, 0, sizeof(void*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
    # 866 "03transpile2.c"
    # 863 "03transpile2.c"
    if(info->no_output_come_code) {
        # 864 "03transpile2.c"
        return;
    }
    # 870 "03transpile2.c"
    # 866 "03transpile2.c"
    if(info->module->mLastCode) {
        # 867 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value225=string_substring(info->module->mLastCode,0,-3))));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 868 "03transpile2.c"
        __dec_obj46=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 874 "03transpile2.c"
    # 870 "03transpile2.c"
    if(info->module->mLastCode2) {
        # 871 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value226=string_substring(info->module->mLastCode2,0,-3))));
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 872 "03transpile2.c"
        __dec_obj47=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    # 878 "03transpile2.c"
    # 874 "03transpile2.c"
    if(info->module->mLastCode3) {
        # 875 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value227=string_substring(info->module->mLastCode3,0,-3))));
        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 876 "03transpile2.c"
        __dec_obj48=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional294;
char* msg2_239;
va_list args_240;
int len_241;
void* right_value228;
char* __dec_obj49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_239, 0, sizeof(char*));
memset(&args_240, 0, sizeof(va_list));
memset(&len_241, 0, sizeof(int));
right_value228 = (void*)0;
    # 885 "03transpile2.c"
    # 882 "03transpile2.c"
    if(info->no_output_come_code) {
        # 883 "03transpile2.c"
        return;
    }
    # 885 "03transpile2.c"
    # 887 "03transpile2.c"
    # 888 "03transpile2.c"
    __builtin_va_start(args_240,msg);
    # 889 "03transpile2.c"
    len_241=vasprintf(&msg2_239,msg,args_240);
    # 890 "03transpile2.c"
    __builtin_va_end(args_240);
    # 892 "03transpile2.c"
    __dec_obj49=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("%s",msg2_239))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 894 "03transpile2.c"
    free(msg2_239);
    come_call_finalizer2(va_list_finalize,(&args_240), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional295;
char* msg2_242;
va_list args_243;
int len_244;
void* right_value229;
char* __dec_obj50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_242, 0, sizeof(char*));
memset(&args_243, 0, sizeof(va_list));
memset(&len_244, 0, sizeof(int));
right_value229 = (void*)0;
    # 902 "03transpile2.c"
    # 899 "03transpile2.c"
    if(info->no_output_come_code) {
        # 900 "03transpile2.c"
        return;
    }
    # 902 "03transpile2.c"
    # 904 "03transpile2.c"
    # 905 "03transpile2.c"
    __builtin_va_start(args_243,msg);
    # 906 "03transpile2.c"
    len_244=vasprintf(&msg2_242,msg,args_243);
    # 907 "03transpile2.c"
    __builtin_va_end(args_243);
    # 909 "03transpile2.c"
    __dec_obj50=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value229=xsprintf("%s",msg2_242))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 911 "03transpile2.c"
    free(msg2_242);
    come_call_finalizer2(va_list_finalize,(&args_243), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional296;
char* msg2_245;
va_list args_246;
int len_247;
void* right_value230;
char* __dec_obj51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_245, 0, sizeof(char*));
memset(&args_246, 0, sizeof(va_list));
memset(&len_247, 0, sizeof(int));
right_value230 = (void*)0;
    # 919 "03transpile2.c"
    # 916 "03transpile2.c"
    if(info->no_output_come_code) {
        # 917 "03transpile2.c"
        return;
    }
    # 919 "03transpile2.c"
    # 921 "03transpile2.c"
    # 922 "03transpile2.c"
    __builtin_va_start(args_246,msg);
    # 923 "03transpile2.c"
    len_247=vasprintf(&msg2_245,msg,args_246);
    # 924 "03transpile2.c"
    __builtin_va_end(args_246);
    # 926 "03transpile2.c"
    __dec_obj51=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("%s",msg2_245))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 928 "03transpile2.c"
    free(msg2_245);
    come_call_finalizer2(va_list_finalize,(&args_246), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 933 "03transpile2.c"
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
struct list$1CVALUEph* __result128__;
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
struct list$1CVALUEph* __result130__;
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
        # 467 "./comelang2.h"
        # 464 "./comelang2.h"
        if(_if_conditional297=head<0,        _if_conditional297) {
            # 465 "./comelang2.h"
            head+=self->len;
        }
        # 471 "./comelang2.h"
        # 467 "./comelang2.h"
        if(_if_conditional298=tail<0,        _if_conditional298) {
            # 468 "./comelang2.h"
            tail+=self->len+1;
        }
        # 477 "./comelang2.h"
        # 471 "./comelang2.h"
        if(_if_conditional299=head>tail,        _if_conditional299) {
            # 472 "./comelang2.h"
            tmp_248=tail;
            # 473 "./comelang2.h"
            tail=head;
            # 474 "./comelang2.h"
            head=tmp_248;
        }
        # 481 "./comelang2.h"
        # 477 "./comelang2.h"
        if(_if_conditional300=head<0,        _if_conditional300) {
            # 478 "./comelang2.h"
            head=0;
        }
        # 485 "./comelang2.h"
        # 481 "./comelang2.h"
        if(_if_conditional301=tail>self->len,        _if_conditional301) {
            # 482 "./comelang2.h"
            tail=self->len;
        }
        # 489 "./comelang2.h"
        # 485 "./comelang2.h"
        if(_if_conditional302=head==tail,        _if_conditional302) {
            # 486 "./comelang2.h"
            __result128__ = __result_obj__ = self;
            return __result128__;
        }
        # 584 "./comelang2.h"
        # 489 "./comelang2.h"
        if(_if_conditional303=head==0&&tail==self->len,        _if_conditional303) {
            # 491 "./comelang2.h"
            list$1CVALUEph_reset(self);
        }
        else {
            # 584 "./comelang2.h"
            # 493 "./comelang2.h"
            if(_if_conditional305=head==0,            _if_conditional305) {
                # 494 "./comelang2.h"
                it_251=self->head;
                # 495 "./comelang2.h"
                i_252=0;
                # 517 "./comelang2.h"
                while(_while_condtional21=it_251!=((void*)0),                _while_condtional21) {
                    # 516 "./comelang2.h"
                    # 497 "./comelang2.h"
                    if(_if_conditional306=i_252<tail,                    _if_conditional306) {
                        # 498 "./comelang2.h"
                        prev_it_253=it_251;
                        # 500 "./comelang2.h"
                        it_251=it_251->next;
                        # 501 "./comelang2.h"
                        i_252++;
                        # 503 "./comelang2.h"
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 505 "./comelang2.h"
                        self->len--;
                    }
                    else {
                        # 516 "./comelang2.h"
                        # 507 "./comelang2.h"
                        if(_if_conditional307=i_252==tail,                        _if_conditional307) {
                            # 508 "./comelang2.h"
                            self->head=it_251;
                            # 509 "./comelang2.h"
                            self->head->prev=((void*)0);
                            # 510 "./comelang2.h"
                            break;
                        }
                        else {
                            # 513 "./comelang2.h"
                            it_251=it_251->next;
                            # 514 "./comelang2.h"
                            i_252++;
                        }
                    }
                }
            }
            else {
                # 584 "./comelang2.h"
                # 518 "./comelang2.h"
                if(_if_conditional308=tail==self->len,                _if_conditional308) {
                    # 519 "./comelang2.h"
                    it_254=self->head;
                    # 520 "./comelang2.h"
                    i_255=0;
                    # 542 "./comelang2.h"
                    while(_while_condtional22=it_254!=((void*)0),                    _while_condtional22) {
                        # 527 "./comelang2.h"
                        # 522 "./comelang2.h"
                        if(_if_conditional309=i_255==head,                        _if_conditional309) {
                            # 523 "./comelang2.h"
                            self->tail=it_254->prev;
                            # 524 "./comelang2.h"
                            self->tail->next=((void*)0);
                        }
                        # 541 "./comelang2.h"
                        # 527 "./comelang2.h"
                        if(_if_conditional310=i_255>=head,                        _if_conditional310) {
                            # 528 "./comelang2.h"
                            prev_it_256=it_254;
                            # 530 "./comelang2.h"
                            it_254=it_254->next;
                            # 531 "./comelang2.h"
                            i_255++;
                            # 533 "./comelang2.h"
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 535 "./comelang2.h"
                            self->len--;
                        }
                        else {
                            # 538 "./comelang2.h"
                            it_254=it_254->next;
                            # 539 "./comelang2.h"
                            i_255++;
                        }
                    }
                }
                else {
                    # 544 "./comelang2.h"
                    it_257=self->head;
                    # 546 "./comelang2.h"
                    head_prev_it_258=((void*)0);
                    # 547 "./comelang2.h"
                    tail_it_259=((void*)0);
                    # 550 "./comelang2.h"
                    i_260=0;
                    # 576 "./comelang2.h"
                    while(_while_condtional23=it_257!=((void*)0),                    _while_condtional23) {
                        # 555 "./comelang2.h"
                        # 552 "./comelang2.h"
                        if(_if_conditional311=i_260==head,                        _if_conditional311) {
                            # 553 "./comelang2.h"
                            head_prev_it_258=it_257->prev;
                        }
                        # 559 "./comelang2.h"
                        # 555 "./comelang2.h"
                        if(_if_conditional312=i_260==tail,                        _if_conditional312) {
                            # 556 "./comelang2.h"
                            tail_it_259=it_257;
                        }
                        # 574 "./comelang2.h"
                        # 559 "./comelang2.h"
                        if(_if_conditional313=i_260>=head&&i_260<tail,                        _if_conditional313) {
                            # 561 "./comelang2.h"
                            prev_it_261=it_257;
                            # 563 "./comelang2.h"
                            it_257=it_257->next;
                            # 564 "./comelang2.h"
                            i_260++;
                            # 566 "./comelang2.h"
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 568 "./comelang2.h"
                            self->len--;
                        }
                        else {
                            # 571 "./comelang2.h"
                            it_257=it_257->next;
                            # 572 "./comelang2.h"
                            i_260++;
                        }
                    }
                    # 579 "./comelang2.h"
                    # 576 "./comelang2.h"
                    if(_if_conditional314=head_prev_it_258!=((void*)0),                    _if_conditional314) {
                        # 577 "./comelang2.h"
                        head_prev_it_258->next=tail_it_259;
                    }
                    # 582 "./comelang2.h"
                    # 579 "./comelang2.h"
                    if(_if_conditional315=tail_it_259!=((void*)0),                    _if_conditional315) {
                        # 580 "./comelang2.h"
                        tail_it_259->prev=head_prev_it_258;
                    }
                }
            }
        }
        # 584 "./comelang2.h"
        __result130__ = __result_obj__ = self;
        return __result130__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_249;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_250;
struct list$1CVALUEph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_249, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_250, 0, sizeof(struct list_item$1CVALUEph*));
                # 433 "./comelang2.h"
                it_249=self->head;
                # 440 "./comelang2.h"
                while(_while_condtional20=it_249!=((void*)0),                _while_condtional20) {
                    # 435 "./comelang2.h"
                    prev_it_250=it_249;
                    # 436 "./comelang2.h"
                    it_249=it_249->next;
                    # 437 "./comelang2.h"
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 440 "./comelang2.h"
                self->head=((void*)0);
                # 441 "./comelang2.h"
                self->tail=((void*)0);
                # 443 "./comelang2.h"
                self->len=0;
                # 445 "./comelang2.h"
                __result129__ = __result_obj__ = self;
                return __result129__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1CVALUEphp_finalize"
                        # 0 "list_item$1CVALUEphp_finalize"
                        if(_if_conditional304=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional304) {
                            # 0 "list_item$1CVALUEphp_finalize"
                            come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
char* __dec_obj52;
void* right_value234;
struct CVALUE* result_266;
_Bool _if_conditional322;
struct CVALUE* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
memset(&result_266, 0, sizeof(struct CVALUE*));
    # 938 "03transpile2.c"
    __dec_obj52=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 941 "03transpile2.c"
    result_266=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=CVALUE_clone(((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(info->stack,offset), "03transpile2.c", 941, 10))))));
    come_call_finalizer2(CVALUE_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 948 "03transpile2.c"
    # 943 "03transpile2.c"
    if(_if_conditional322=result_266==((void*)0),    _if_conditional322) {
        # 944 "03transpile2.c"
        err_msg(info,"invalid stack value");
        # 945 "03transpile2.c"
        exit(2);
    }
    # 948 "03transpile2.c"
    __result135__ = __result_obj__ = result_266;
    come_call_finalizer2(CVALUE_finalize,result_266, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result135__;
    come_call_finalizer2(CVALUE_finalize,result_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional316;
struct list_item$1CVALUEph* it_262;
int i_263;
_Bool _while_condtional24;
_Bool _if_conditional317;
struct CVALUE* __result131__;
struct CVALUE* default_value_264;
struct CVALUE* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_262, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_263, 0, sizeof(int));
memset(&default_value_264, 0, sizeof(struct CVALUE*));
        # 686 "./comelang2.h"
        # 682 "./comelang2.h"
        if(_if_conditional316=position<0,        _if_conditional316) {
            # 683 "./comelang2.h"
            position+=self->len;
        }
        # 686 "./comelang2.h"
        it_262=self->head;
        # 687 "./comelang2.h"
        i_263=0;
        # 694 "./comelang2.h"
        while(_while_condtional24=it_262!=((void*)0),        _while_condtional24) {
            # 692 "./comelang2.h"
            # 689 "./comelang2.h"
            if(_if_conditional317=position==i_263,            _if_conditional317) {
                # 690 "./comelang2.h"
                __result131__ = __result_obj__ = it_262->item;
                return __result131__;
            }
            # 692 "./comelang2.h"
            it_262=it_262->next;
            # 693 "./comelang2.h"
            i_263++;
        }
        # 696 "./comelang2.h"
        # 697 "./comelang2.h"
        memset(&default_value_264,0,sizeof(struct CVALUE*));
        # 698 "./comelang2.h"
        __result132__ = __result_obj__ = default_value_264;
        come_call_finalizer2(CVALUE_finalize,default_value_264, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result132__;
        come_call_finalizer2(CVALUE_finalize,default_value_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional318;
struct CVALUE* __result133__;
void* right_value231;
struct CVALUE* result_265;
_Bool _if_conditional319;
void* right_value232;
char* __dec_obj53;
_Bool _if_conditional320;
void* right_value233;
struct sType* __dec_obj54;
_Bool _if_conditional321;
struct CVALUE* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
memset(&result_265, 0, sizeof(struct CVALUE*));
right_value232 = (void*)0;
right_value233 = (void*)0;
        # 3 "CVALUE_clone"
        # 2 "CVALUE_clone"
        if(_if_conditional318=self==(void*)0,        _if_conditional318) {
            # 2 "CVALUE_clone"
            __result133__ = __result_obj__ = (void*)0;
            return __result133__;
        }
        # 3 "CVALUE_clone"
        result_265=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "CVALUE_clone"
        # 4 "CVALUE_clone"
        if(_if_conditional319=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional319) {
            # 4 "CVALUE_clone"
            __dec_obj53=result_265->c_value;
            result_265->c_value=(char*)come_increment_ref_count(((char*)(right_value232=string_clone(self->c_value))));
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 6 "CVALUE_clone"
        # 5 "CVALUE_clone"
        if(_if_conditional320=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional320) {
            # 5 "CVALUE_clone"
            __dec_obj54=result_265->type;
            result_265->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_clone(self->type))));
            come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "CVALUE_clone"
        # 6 "CVALUE_clone"
        if(_if_conditional321=self!=((void*)0),        _if_conditional321) {
            # 6 "CVALUE_clone"
            result_265->var=self->var;
        }
        # 7 "CVALUE_clone"
        __result134__ = __result_obj__ = result_265;
        come_call_finalizer2(CVALUE_finalize,result_265, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result134__;
        come_call_finalizer2(CVALUE_finalize,result_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
memset(&__result_obj__, 0, sizeof(void*));
    # 953 "03transpile2.c"
    __dec_obj55=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 954 "03transpile2.c"
    __dec_obj56=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 955 "03transpile2.c"
    __dec_obj57=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
}

