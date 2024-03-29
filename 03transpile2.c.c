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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1948, "smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1958, "smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1968, "smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1978, "smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1988, "smart_pointer$1long"))));
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
void* right_value13;
void* right_value14;
struct buffer* buf_5;
char* class_name_6;
_Bool _if_conditional5;
_Bool _if_conditional6;
void* right_value15;
char* __result10__;
void* right_value16;
struct CVALUE* come_value_7;
void* right_value17;
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
_Bool _if_conditional47;
void* right_value18;
char* result_type_str_14;
int j_15;
struct list$1sTypeph* o2_saved_16;
struct sType* it_19;
void* right_value19;
char* param_type_str_22;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value20;
char* __result19__;
_Bool _if_conditional54;
int i_23;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value21;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
right_value14 = (void*)0;
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&class_name_6, 0, sizeof(char*));
right_value15 = (void*)0;
right_value16 = (void*)0;
memset(&come_value_7, 0, sizeof(struct CVALUE*));
right_value17 = (void*)0;
right_value18 = (void*)0;
memset(&result_type_str_14, 0, sizeof(char*));
memset(&j_15, 0, sizeof(int));
memset(&o2_saved_16, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct sType*));
right_value19 = (void*)0;
memset(&param_type_str_22, 0, sizeof(char*));
right_value20 = (void*)0;
memset(&i_23, 0, sizeof(int));
right_value21 = (void*)0;
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 15, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    class_name_6=type->mClass->mName;
    if(type->mAlignas) {
        if(_if_conditional6=!node_compile(type->mAlignas,info),        _if_conditional6) {
            printf("_Alignas error\n");
            __result10__ = __result_obj__ = ((char*)(right_value15=__builtin_string("")));
            come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result10__;
        }
        come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value16=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        buffer_append_str(buf_5,((char*)(right_value17=xsprintf("_Alignas(%s) ",come_value_7->c_value))));
        right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional26=type->mStatic&&!type->mClass->mStruct&&!type->mClass->mUnion,    _if_conditional26) {
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
    if(_if_conditional30=string_operator_equals(type->mOriginalTypeName,"va_list"),    _if_conditional30) {
        buffer_append_str(buf_5,"va_list");
    }
    else {
        if(_if_conditional31=string_operator_equals(type->mOriginalTypeName,"__builtin_va_list"),        _if_conditional31) {
            buffer_append_str(buf_5,"__builtin_va_list");
        }
        else {
            if(_if_conditional32=charp_operator_equals(class_name_6,"__builtin_va_list"),            _if_conditional32) {
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
                                if(_if_conditional38=charp_operator_equals(class_name_6,"int"),                                _if_conditional38) {
                                    buffer_append_str(buf_5,"long long int");
                                }
                                else {
                                    if(_if_conditional39=charp_operator_equals(class_name_6,"long"),                                    _if_conditional39) {
                                        buffer_append_str(buf_5,"long long");
                                    }
                                }
                            }
                            else {
                                if(type->mLong) {
                                    if(_if_conditional41=charp_operator_equals(class_name_6,"int"),                                    _if_conditional41) {
                                        buffer_append_str(buf_5,"long int");
                                    }
                                    else {
                                        if(_if_conditional42=charp_operator_equals(class_name_6,"long"),                                        _if_conditional42) {
                                            buffer_append_str(buf_5,"long long");
                                        }
                                        else {
                                            if(_if_conditional43=charp_operator_equals(class_name_6,"double"),                                            _if_conditional43) {
                                                buffer_append_str(buf_5,"long double");
                                            }
                                        }
                                    }
                                }
                                else {
                                    if(_if_conditional44=charp_operator_equals(class_name_6,"long"),                                    _if_conditional44) {
                                        buffer_append_str(buf_5,"long");
                                    }
                                    else {
                                        if(_if_conditional45=charp_operator_equals(class_name_6,"__uint128_t"),                                        _if_conditional45) {
                                            buffer_append_str(buf_5,"__uint128_t");
                                        }
                                        else {
                                            if(_if_conditional46=charp_operator_equals(class_name_6,"bool"),                                            _if_conditional46) {
                                                buffer_append_str(buf_5,"_Bool");
                                            }
                                            else {
                                                if(_if_conditional47=charp_operator_equals(class_name_6,"lambda"),                                                _if_conditional47) {
                                                    result_type_str_14=(char*)come_increment_ref_count(((char*)(right_value18=make_type_name_string(type->mResultType->v1,in_header,(_Bool)0,(_Bool)0,info))));
                                                    right_value18 = come_decrement_ref_count2(right_value18, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    buffer_append_str(buf_5,result_type_str_14);
                                                    buffer_append_str(buf_5," (*)(");
                                                    j_15=0;
                                                    for(                                                    o2_saved_16=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_19=list$1sTypeph_begin((o2_saved_16));                                                    !list$1sTypeph_end((o2_saved_16));                                                    it_19=list$1sTypeph_next((o2_saved_16))                                                    ){
                                                        param_type_str_22=(char*)come_increment_ref_count(((char*)(right_value19=make_type_name_string(it_19,in_header,(_Bool)0,(_Bool)0,info))));
                                                        right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        buffer_append_str(buf_5,param_type_str_22);
                                                        if(_if_conditional52=j_15!=list$1sTypeph_length(type->mParamTypes)-1,                                                        _if_conditional52) {
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
                                                    if(_if_conditional53=class_name_6==((void*)0),                                                    _if_conditional53) {
                                                        err_msg(info,"class name is null");
                                                        __result19__ = __result_obj__ = ((char*)(right_value20=__builtin_string("")));
                                                        come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        right_value20 = come_decrement_ref_count2(right_value20, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        return __result19__;
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
    if(_if_conditional54=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_6,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional54) {
        for(        i_23=0;        i_23<type->mPointerNum;        i_23++        ){
            buffer_append_str(buf_5,"*");
        }
    }
    if(_if_conditional55=array_cast_pointer&&list$1sNodeph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional55) {
        buffer_append_str(buf_5,"*");
    }
    if(type->mRestrict) {
        buffer_append_str(buf_5,"restrict");
    }
    __result21__ = __result_obj__ = ((char*)(right_value21=buffer_to_string(buf_5)));
    come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value21 = come_decrement_ref_count2(right_value21, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result21__;
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
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional9=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                    _if_conditional9) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional11=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional11) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional13=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional13) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional14=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional14) {
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional15=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional15) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional16=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional16) {
                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional18=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional18) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional19=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional19) {
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional21=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional21) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional22=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional22) {
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional23=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional23) {
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional24=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional24) {
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional25=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional25) {
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional10=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional10) {
                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional12=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional12) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional17) {
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
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional20) {
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
struct sType* result_17;
struct sType* __result11__;
_Bool _if_conditional49;
struct sType* __result12__;
struct sType* result_18;
struct sType* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct sType*));
memset(&result_18, 0, sizeof(struct sType*));
                                                        if(_if_conditional48=self==((void*)0),                                                        _if_conditional48) {
                                                            memset(&result_17,0,sizeof(struct sType*));
                                                            __result11__ = __result_obj__ = result_17;
                                                            return __result11__;
                                                        }
                                                        self->it=self->head;
                                                        if(self->it) {
                                                            __result12__ = __result_obj__ = self->it->item;
                                                            return __result12__;
                                                        }
                                                        memset(&result_18,0,sizeof(struct sType*));
                                                        __result13__ = __result_obj__ = result_18;
                                                        return __result13__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result14__;
memset(&__result_obj__, 0, sizeof(void*));
                                                        __result14__ = self==((void*)0)||self->it==((void*)0);
                                                        return __result14__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct sType* result_20;
struct sType* __result15__;
_Bool _if_conditional51;
struct sType* __result16__;
struct sType* result_21;
struct sType* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct sType*));
memset(&result_21, 0, sizeof(struct sType*));
                                                        if(_if_conditional50=self==((void*)0)||self->it==((void*)0),                                                        _if_conditional50) {
                                                            memset(&result_20,0,sizeof(struct sType*));
                                                            __result15__ = __result_obj__ = result_20;
                                                            return __result15__;
                                                        }
                                                        self->it=self->it->next;
                                                        if(self->it) {
                                                            __result16__ = __result_obj__ = self->it->item;
                                                            return __result16__;
                                                        }
                                                        memset(&result_21,0,sizeof(struct sType*));
                                                        __result17__ = __result_obj__ = result_21;
                                                        return __result17__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result18__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            __result18__ = self->len;
                                                            return __result18__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result20__;
memset(&__result_obj__, 0, sizeof(void*));
        __result20__ = self->len;
        return __result20__;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value22;
void* right_value23;
struct buffer* buf_24;
char* class_name_25;
_Bool _if_conditional57;
int i_26;
struct sType* gtype_30;
void* right_value24;
_Bool _if_conditional60;
_Bool _if_conditional61;
int i_31;
_Bool _if_conditional62;
int i_32;
_Bool _if_conditional63;
void* right_value25;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value23 = (void*)0;
memset(&buf_24, 0, sizeof(struct buffer*));
memset(&class_name_25, 0, sizeof(char*));
memset(&i_26, 0, sizeof(int));
memset(&gtype_30, 0, sizeof(struct sType*));
right_value24 = (void*)0;
memset(&i_31, 0, sizeof(int));
memset(&i_32, 0, sizeof(int));
right_value25 = (void*)0;
    buf_24=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value22=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 147, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    class_name_25=type->mClass->mName;
    buffer_append_str(buf_24,class_name_25);
    if(_if_conditional57=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional57) {
        buffer_append_str(buf_24,"<");
        for(        i_26=0;        i_26<list$1sTypeph_length(type->mGenericsTypes);        i_26++        ){
            gtype_30=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_26);
            buffer_append_str(buf_24,((char*)(right_value24=make_come_type_name_string(gtype_30,info))));
            right_value24 = come_decrement_ref_count2(right_value24, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional60=i_26!=list$1sTypeph_length(type->mGenericsTypes)-1,            _if_conditional60) {
                buffer_append_str(buf_24,",");
            }
        }
        buffer_append_str(buf_24,">");
    }
    if(_if_conditional61=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_25,"lambda"),    _if_conditional61) {
        for(        i_31=0;        i_31<type->mPointerNum;        i_31++        ){
            buffer_append_str(buf_24,"*");
        }
    }
    if(_if_conditional62=list$1sNodeph_length(type->mArrayNum)>0,    _if_conditional62) {
        for(        i_32=0;        i_32<list$1sNodeph_length(type->mArrayNum);        i_32++        ){
            buffer_append_str(buf_24,"[]");
        }
    }
    if(type->mHeap) {
        buffer_append_str(buf_24,"%");
    }
    __result24__ = __result_obj__ = ((char*)(right_value25=buffer_to_string(buf_24)));
    come_call_finalizer2(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value25 = come_decrement_ref_count2(right_value25, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result24__;
    come_call_finalizer2(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional58;
struct list_item$1sTypeph* it_27;
int i_28;
_Bool _while_condtional4;
_Bool _if_conditional59;
struct sType* __result22__;
struct sType* default_value_29;
struct sType* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_27, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_28, 0, sizeof(int));
memset(&default_value_29, 0, sizeof(struct sType*));
                if(_if_conditional58=position<0,                _if_conditional58) {
                    position+=self->len;
                }
                it_27=self->head;
                i_28=0;
                while(_while_condtional4=it_27!=((void*)0),                _while_condtional4) {
                    if(_if_conditional59=position==i_28,                    _if_conditional59) {
                        __result22__ = __result_obj__ = it_27->item;
                        return __result22__;
                    }
                    it_27=it_27->next;
                    i_28++;
                }
                memset(&default_value_29,0,sizeof(struct sType*));
                __result23__ = __result_obj__ = default_value_29;
                come_call_finalizer2(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result23__;
                come_call_finalizer2(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value26;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
    puts(((char*)(right_value26=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value26 = come_decrement_ref_count2(right_value26, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* buf_33;
_Bool _if_conditional64;
void* right_value29;
char* __result25__;
_Bool _if_conditional65;
void* right_value30;
int i_34;
struct list$1sTypeph* o2_saved_35;
struct sType* it_36;
void* right_value31;
_Bool _if_conditional66;
void* right_value32;
void* right_value33;
char* __result26__;
void* right_value34;
void* right_value35;
int i_37;
struct list$1sTypeph* o2_saved_38;
struct sType* it_39;
void* right_value36;
_Bool _if_conditional67;
void* right_value37;
char* __result27__;
void* right_value38;
char* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
memset(&buf_33, 0, sizeof(struct buffer*));
right_value29 = (void*)0;
right_value30 = (void*)0;
memset(&i_34, 0, sizeof(int));
memset(&o2_saved_35, 0, sizeof(struct list$1sTypeph*));
memset(&it_36, 0, sizeof(struct sType*));
right_value31 = (void*)0;
right_value32 = (void*)0;
right_value33 = (void*)0;
right_value34 = (void*)0;
right_value35 = (void*)0;
memset(&i_37, 0, sizeof(int));
memset(&o2_saved_38, 0, sizeof(struct list$1sTypeph*));
memset(&it_39, 0, sizeof(struct sType*));
right_value36 = (void*)0;
right_value37 = (void*)0;
right_value38 = (void*)0;
    buf_33=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 194, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional64=type->mResultType==((void*)0),    _if_conditional64) {
        err_msg(info,"invalid lambda type");
        __result25__ = __result_obj__ = ((char*)(right_value29=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value29 = come_decrement_ref_count2(right_value29, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result25__;
    }
    if(_if_conditional65=type->mResultType->v1&&string_operator_equals(type->mResultType->v1->mClass->mName,"lambda"),    _if_conditional65) {
        buffer_append_str(buf_33,((char*)(right_value30=xsprintf("(*%s)(",var_name))));
        right_value30 = come_decrement_ref_count2(right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_34=0;
        for(        o2_saved_35=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_36=list$1sTypeph_begin((o2_saved_35));        !list$1sTypeph_end((o2_saved_35));        it_36=list$1sTypeph_next((o2_saved_35))        ){
            buffer_append_str(buf_33,((char*)(right_value31=make_type_name_string(it_36,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value31 = come_decrement_ref_count2(right_value31, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional66=i_34!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional66) {
                buffer_append_str(buf_33,",");
            }
            i_34++;
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_33,")");
        __result26__ = __result_obj__ = ((char*)(right_value33=make_lambda_type_name_string(type->mResultType->v1,((char*)(right_value32=buffer_to_string(buf_33))),info)));
        come_call_finalizer2(buffer_finalize,buf_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value32 = come_decrement_ref_count2(right_value32, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value33 = come_decrement_ref_count2(right_value33, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result26__;
    }
    else {
        buffer_append_str(buf_33,((char*)(right_value35=xsprintf("%s (*%s)(",((char*)(right_value34=make_type_name_string(type->mResultType->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))),var_name))));
        right_value34 = come_decrement_ref_count2(right_value34, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value35 = come_decrement_ref_count2(right_value35, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_37=0;
        for(        o2_saved_38=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_39=list$1sTypeph_begin((o2_saved_38));        !list$1sTypeph_end((o2_saved_38));        it_39=list$1sTypeph_next((o2_saved_38))        ){
            buffer_append_str(buf_33,((char*)(right_value36=make_type_name_string(it_39,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional67=i_37!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional67) {
                buffer_append_str(buf_33,",");
            }
            i_37++;
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_33,")");
        __result27__ = __result_obj__ = ((char*)(right_value37=buffer_to_string(buf_33)));
        come_call_finalizer2(buffer_finalize,buf_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value37 = come_decrement_ref_count2(right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result27__;
    }
    __result28__ = __result_obj__ = ((char*)(right_value38=buffer_to_string(buf_33)));
    come_call_finalizer2(buffer_finalize,buf_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value38 = come_decrement_ref_count2(right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result28__;
    come_call_finalizer2(buffer_finalize,buf_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* buf_40;
_Bool _if_conditional68;
void* right_value41;
char* str_41;
_Bool _if_conditional69;
void* right_value42;
char* str_42;
_Bool _if_conditional70;
_Bool _if_conditional71;
void* right_value43;
char* __result29__;
void* right_value44;
struct CVALUE* come_value_43;
void* right_value45;
char* type_str_44;
void* right_value46;
void* right_value47;
_Bool _if_conditional72;
void* right_value48;
_Bool _if_conditional73;
void* right_value49;
_Bool _if_conditional74;
void* right_value50;
char* type_str_45;
_Bool _if_conditional75;
void* right_value51;
_Bool _if_conditional76;
void* right_value52;
char* type_str_46;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct list$1sNodeph* o2_saved_47;
struct sNode* it_50;
_Bool _if_conditional83;
void* right_value53;
char* __result37__;
void* right_value54;
struct CVALUE* cvalue_53;
void* right_value55;
_Bool _if_conditional84;
void* right_value56;
void* right_value57;
char* type_str_54;
_Bool _if_conditional85;
void* right_value58;
char* __result38__;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
void* right_value59;
void* right_value60;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
memset(&buf_40, 0, sizeof(struct buffer*));
right_value41 = (void*)0;
memset(&str_41, 0, sizeof(char*));
right_value42 = (void*)0;
memset(&str_42, 0, sizeof(char*));
right_value43 = (void*)0;
right_value44 = (void*)0;
memset(&come_value_43, 0, sizeof(struct CVALUE*));
right_value45 = (void*)0;
memset(&type_str_44, 0, sizeof(char*));
right_value46 = (void*)0;
right_value47 = (void*)0;
right_value48 = (void*)0;
right_value49 = (void*)0;
right_value50 = (void*)0;
memset(&type_str_45, 0, sizeof(char*));
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&type_str_46, 0, sizeof(char*));
memset(&o2_saved_47, 0, sizeof(struct list$1sNodeph*));
memset(&it_50, 0, sizeof(struct sNode*));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&cvalue_53, 0, sizeof(struct CVALUE*));
right_value55 = (void*)0;
right_value56 = (void*)0;
right_value57 = (void*)0;
memset(&type_str_54, 0, sizeof(char*));
right_value58 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
    buf_40=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 243, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional68=string_operator_equals(type->mClass->mName,"lambda")&&type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),    _if_conditional68) {
        str_41=(char*)come_increment_ref_count(((char*)(right_value41=header_lambda(type,(char*)come_increment_ref_count(type->mAsmName),info))));
        right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_40,str_41);
        str_41 = come_decrement_ref_count2(str_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional69=string_operator_equals(type->mClass->mName,"lambda"),        _if_conditional69) {
            str_42=(char*)come_increment_ref_count(((char*)(right_value42=make_lambda_type_name_string(type,name,info))));
            right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_40,str_42);
            str_42 = come_decrement_ref_count2(str_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional70=type->mSizeNum!=((void*)0),            _if_conditional70) {
                if(_if_conditional71=!node_compile(type->mSizeNum,info),                _if_conditional71) {
                    err_msg(info,"invalid bit field number");
                    __result29__ = __result_obj__ = ((char*)(right_value43=__builtin_string("")));
                    come_call_finalizer2(buffer_finalize,buf_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result29__;
                }
                come_value_43=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value44=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                type_str_44=(char*)come_increment_ref_count(((char*)(right_value45=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(buf_40,((char*)(right_value46=xsprintf("%s ",type_str_44))));
                right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(buf_40,((char*)(right_value47=xsprintf("%s:%s",name,come_value_43->c_value))));
                right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional72=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional72) {
                    buffer_append_str(buf_40,((char*)(right_value48=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional73=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional73) {
                    buffer_append_str(buf_40,((char*)(right_value49=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(CVALUE_finalize,come_value_43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_str_44 = come_decrement_ref_count2(type_str_44, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(type->mOmitArrayNum) {
                    type_str_45=(char*)come_increment_ref_count(((char*)(right_value50=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(buf_40,type_str_45);
                    buffer_append_str(buf_40," ");
                    buffer_append_str(buf_40,name);
                    buffer_append_str(buf_40,"[]");
                    if(_if_conditional75=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                    _if_conditional75) {
                        buffer_append_str(buf_40,((char*)(right_value51=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                        right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    type_str_45 = come_decrement_ref_count2(type_str_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional76=list$1sNodeph_length(type->mArrayNum)>0,                    _if_conditional76) {
                        type_str_46=(char*)come_increment_ref_count(((char*)(right_value52=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        buffer_append_str(buf_40,type_str_46);
                        buffer_append_str(buf_40," ");
                        if(_if_conditional77=type->mNoArrayPointerNum>0,                        _if_conditional77) {
                            buffer_append_str(buf_40,"(*");
                        }
                        buffer_append_str(buf_40,name);
                        if(_if_conditional78=type->mNoArrayPointerNum>0,                        _if_conditional78) {
                            buffer_append_str(buf_40,")");
                        }
                        for(                        o2_saved_47=(struct list$1sNodeph*)come_increment_ref_count((type->mArrayNum)),it_50=list$1sNodeph_begin((o2_saved_47));                        !list$1sNodeph_end((o2_saved_47));                        it_50=list$1sNodeph_next((o2_saved_47))                        ){
                            if(_if_conditional83=!node_compile(it_50,info),                            _if_conditional83) {
                                err_msg(info,"invalid array number");
                                __result37__ = __result_obj__ = ((char*)(right_value53=__builtin_string("")));
                                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_str_46 = come_decrement_ref_count2(type_str_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(buffer_finalize,buf_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                return __result37__;
                            }
                            cvalue_53=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value54=get_value_from_stack(-1,info))));
                            come_call_finalizer2(CVALUE_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            dec_stack_ptr(1,info);
                            buffer_append_str(buf_40,((char*)(right_value55=xsprintf("[%s]",cvalue_53->c_value))));
                            right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(CVALUE_finalize,cvalue_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(_if_conditional84=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional84) {
                            buffer_append_str(buf_40,((char*)(right_value56=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_46 = come_decrement_ref_count2(type_str_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        type_str_54=(char*)come_increment_ref_count(((char*)(right_value57=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional85=string_operator_equals(type_str_54,""),                        _if_conditional85) {
                            __result38__ = __result_obj__ = ((char*)(right_value58=__builtin_string("")));
                            type_str_54 = come_decrement_ref_count2(type_str_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,buf_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            return __result38__;
                        }
                        buffer_append_str(buf_40,type_str_54);
                        buffer_append_str(buf_40," ");
                        if(_if_conditional86=type->mNoArrayPointerNum>0,                        _if_conditional86) {
                            buffer_append_str(buf_40,"(*");
                        }
                        buffer_append_str(buf_40,name);
                        if(_if_conditional87=type->mNoArrayPointerNum>0,                        _if_conditional87) {
                            buffer_append_str(buf_40,")");
                        }
                        if(_if_conditional88=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional88) {
                            buffer_append_str(buf_40,((char*)(right_value59=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_54 = come_decrement_ref_count2(type_str_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    __result39__ = __result_obj__ = ((char*)(right_value60=buffer_to_string(buf_40)));
    come_call_finalizer2(buffer_finalize,buf_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result39__;
    come_call_finalizer2(buffer_finalize,buf_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional79;
struct sNode* result_48;
struct sNode* __result30__;
_Bool _if_conditional80;
struct sNode* __result31__;
struct sNode* result_49;
struct sNode* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_48, 0, sizeof(struct sNode*));
memset(&result_49, 0, sizeof(struct sNode*));
                            if(_if_conditional79=self==((void*)0),                            _if_conditional79) {
                                memset(&result_48,0,sizeof(struct sNode*));
                                __result30__ = __result_obj__ = result_48;
                                return __result30__;
                            }
                            self->it=self->head;
                            if(self->it) {
                                __result31__ = __result_obj__ = self->it->item;
                                return __result31__;
                            }
                            memset(&result_49,0,sizeof(struct sNode*));
                            __result32__ = __result_obj__ = result_49;
                            return __result32__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result33__ = self==((void*)0)||self->it==((void*)0);
                            return __result33__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional81;
struct sNode* result_51;
struct sNode* __result34__;
_Bool _if_conditional82;
struct sNode* __result35__;
struct sNode* result_52;
struct sNode* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_51, 0, sizeof(struct sNode*));
memset(&result_52, 0, sizeof(struct sNode*));
                            if(_if_conditional81=self==((void*)0)||self->it==((void*)0),                            _if_conditional81) {
                                memset(&result_51,0,sizeof(struct sNode*));
                                __result34__ = __result_obj__ = result_51;
                                return __result34__;
                            }
                            self->it=self->it->next;
                            if(self->it) {
                                __result35__ = __result_obj__ = self->it->item;
                                return __result35__;
                            }
                            memset(&result_52,0,sizeof(struct sNode*));
                            __result36__ = __result_obj__ = result_52;
                            return __result36__;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value61;
void* right_value62;
struct buffer* output_55;
_Bool _if_conditional89;
void* right_value63;
void* right_value64;
struct buffer* output2_56;
int i_57;
struct list$1sTypeph* o2_saved_58;
struct sType* it_59;
char* name_63;
void* right_value65;
char* str_64;
_Bool _if_conditional92;
_Bool _if_conditional93;
void* right_value66;
void* right_value67;
char* str_65;
void* right_value68;
_Bool _if_conditional94;
void* right_value104;
struct sType* base_result_type_84;
void* right_value105;
void* right_value106;
struct list$1sNodeph* __dec_obj29;
void* right_value107;
char* result_type_str_85;
int i_86;
struct list$1sTypeph* o2_saved_87;
struct sType* it_88;
char* name_89;
void* right_value108;
char* str_90;
_Bool _if_conditional167;
_Bool _if_conditional168;
struct sNode* node_94;
_Bool _if_conditional171;
void* right_value109;
char* __result62__;
void* right_value110;
struct CVALUE* cvalue_95;
void* right_value111;
void* right_value112;
void* right_value113;
char* result_type_str_96;
int i_97;
struct list$1sTypeph* o2_saved_98;
struct sType* it_99;
char* name_100;
void* right_value114;
char* str_101;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value115;
void* right_value116;
void* right_value117;
void* right_value118;
void* right_value119;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value62 = (void*)0;
memset(&output_55, 0, sizeof(struct buffer*));
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&output2_56, 0, sizeof(struct buffer*));
memset(&i_57, 0, sizeof(int));
memset(&o2_saved_58, 0, sizeof(struct list$1sTypeph*));
memset(&it_59, 0, sizeof(struct sType*));
memset(&name_63, 0, sizeof(char*));
right_value65 = (void*)0;
memset(&str_64, 0, sizeof(char*));
right_value66 = (void*)0;
right_value67 = (void*)0;
memset(&str_65, 0, sizeof(char*));
right_value68 = (void*)0;
right_value104 = (void*)0;
memset(&base_result_type_84, 0, sizeof(struct sType*));
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_type_str_85, 0, sizeof(char*));
memset(&i_86, 0, sizeof(int));
memset(&o2_saved_87, 0, sizeof(struct list$1sTypeph*));
memset(&it_88, 0, sizeof(struct sType*));
memset(&name_89, 0, sizeof(char*));
right_value108 = (void*)0;
memset(&str_90, 0, sizeof(char*));
memset(&node_94, 0, sizeof(struct sNode*));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&cvalue_95, 0, sizeof(struct CVALUE*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&result_type_str_96, 0, sizeof(char*));
memset(&i_97, 0, sizeof(int));
memset(&o2_saved_98, 0, sizeof(struct list$1sTypeph*));
memset(&it_99, 0, sizeof(struct sType*));
memset(&name_100, 0, sizeof(char*));
right_value114 = (void*)0;
memset(&str_101, 0, sizeof(char*));
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
    output_55=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value62=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value61=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 347, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(fun->mResultType->mResultType) {
        output2_56=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value64=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value63=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 349, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(output2_56,fun->mName);
        buffer_append_str(output2_56,"(");
        i_57=0;
        for(        o2_saved_58=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_59=list$1sTypeph_begin((o2_saved_58));        !list$1sTypeph_end((o2_saved_58));        it_59=list$1sTypeph_next((o2_saved_58))        ){
            name_63=list$1charphp_operator_load_element(fun->mParamNames,i_57);
            str_64=(char*)come_increment_ref_count(((char*)(right_value65=make_define_var(it_59,name_63,(_Bool)0,info))));
            right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output2_56,str_64);
            if(_if_conditional92=i_57==list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional92) {
                if(fun->mVarArgs) {
                    buffer_append_str(output2_56,", ...");
                }
            }
            else {
                buffer_append_str(output2_56,", ");
            }
            i_57++;
            str_64 = come_decrement_ref_count2(str_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(output2_56,")");
        str_65=(char*)come_increment_ref_count(((char*)(right_value67=make_lambda_type_name_string(fun->mResultType,((char*)(right_value66=buffer_to_string(output2_56))),info))));
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(output_55,str_65);
        buffer_append_str(info->module->mSourceHead,((char*)(right_value68=buffer_to_string(output_55))));
        right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(info->module->mSourceHead,";\n");
        come_call_finalizer2(buffer_finalize,output2_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str_65 = come_decrement_ref_count2(str_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional94=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional94) {
            base_result_type_84=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj29=base_result_type_84->mArrayNum;
            base_result_type_84->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value106=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value105=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 385, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type_str_85=(char*)come_increment_ref_count(((char*)(right_value107=make_type_name_string(base_result_type_84,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_55,result_type_str_85);
            buffer_append_str(output_55," (*");
            buffer_append_str(output_55,fun->mName);
            buffer_append_str(output_55,"(");
            i_86=0;
            for(            o2_saved_87=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_88=list$1sTypeph_begin((o2_saved_87));            !list$1sTypeph_end((o2_saved_87));            it_88=list$1sTypeph_next((o2_saved_87))            ){
                name_89=list$1charphp_operator_load_element(fun->mParamNames,i_86);
                str_90=(char*)come_increment_ref_count(((char*)(right_value108=make_define_var(it_88,name_89,(_Bool)0,info))));
                right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_55,str_90);
                if(_if_conditional167=i_86==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional167) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_55,", ...");
                    }
                }
                else {
                    buffer_append_str(output_55,", ");
                }
                i_86++;
                str_90 = come_decrement_ref_count2(str_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            node_94=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0);
            if(_if_conditional171=!node_compile(node_94,info),            _if_conditional171) {
                err_msg(info,"invalid array number");
                __result62__ = __result_obj__ = ((char*)(right_value109=__builtin_string("")));
                come_call_finalizer2(sType_finalize,base_result_type_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_type_str_85 = come_decrement_ref_count2(result_type_str_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,output_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result62__;
            }
            cvalue_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value110=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            buffer_append_str(output_55,((char*)(right_value111=xsprintf("))[%s]",cvalue_95->c_value))));
            right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(info->module->mSourceHead,((char*)(right_value112=buffer_to_string(output_55))));
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(info->module->mSourceHead,";\n");
            come_call_finalizer2(sType_finalize,base_result_type_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            result_type_str_85 = come_decrement_ref_count2(result_type_str_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,cvalue_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_type_str_96=(char*)come_increment_ref_count(((char*)(right_value113=make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_55,result_type_str_96);
            buffer_append_str(output_55," ");
            buffer_append_str(output_55,fun->mName);
            buffer_append_str(output_55,"(");
            i_97=0;
            for(            o2_saved_98=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_99=list$1sTypeph_begin((o2_saved_98));            !list$1sTypeph_end((o2_saved_98));            it_99=list$1sTypeph_next((o2_saved_98))            ){
                name_100=list$1charphp_operator_load_element(fun->mParamNames,i_97);
                str_101=(char*)come_increment_ref_count(((char*)(right_value114=make_define_var(it_99,name_100,(_Bool)0,info))));
                right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_55,str_101);
                if(_if_conditional172=i_97==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional172) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_55,", ...");
                    }
                }
                else {
                    buffer_append_str(output_55,", ");
                }
                i_97++;
                str_101 = come_decrement_ref_count2(str_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(output_55,")");
            buffer_append_str(info->module->mSourceHead,((char*)(right_value115=buffer_to_string(output_55))));
            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(info->module->mSourceHead,";\n");
            result_type_str_96 = come_decrement_ref_count2(result_type_str_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    buffer_append_str(output_55,"{\n");
    buffer_append_str(output_55,((char*)(right_value116=buffer_to_string(fun->mSourceHead))));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_55,((char*)(right_value117=buffer_to_string(fun->mSourceHead2))));
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_55,((char*)(right_value118=buffer_to_string(fun->mSource))));
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_55,"}\n");
    __result63__ = __result_obj__ = ((char*)(right_value119=buffer_to_string(output_55)));
    come_call_finalizer2(buffer_finalize,output_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
    come_call_finalizer2(buffer_finalize,output_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional90;
struct list_item$1charph* it_60;
int i_61;
_Bool _while_condtional5;
_Bool _if_conditional91;
char* __result40__;
char* default_value_62;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct list_item$1charph*));
memset(&i_61, 0, sizeof(int));
memset(&default_value_62, 0, sizeof(char*));
                if(_if_conditional90=position<0,                _if_conditional90) {
                    position+=self->len;
                }
                it_60=self->head;
                i_61=0;
                while(_while_condtional5=it_60!=((void*)0),                _while_condtional5) {
                    if(_if_conditional91=position==i_61,                    _if_conditional91) {
                        __result40__ = __result_obj__ = it_60->item;
                        return __result40__;
                    }
                    it_60=it_60->next;
                    i_61++;
                }
                memset(&default_value_62,0,sizeof(char*));
                __result41__ = __result_obj__ = default_value_62;
                default_value_62 = come_decrement_ref_count2(default_value_62, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result41__;
                default_value_62 = come_decrement_ref_count2(default_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional95;
struct sType* __result42__;
void* right_value69;
struct sType* result_66;
_Bool _if_conditional96;
_Bool _if_conditional97;
void* right_value76;
struct list$1sTypeph* __dec_obj9;
_Bool _if_conditional101;
void* right_value79;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional105;
void* right_value80;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional106;
void* right_value81;
char* __dec_obj13;
_Bool _if_conditional107;
void* right_value82;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional108;
void* right_value90;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional121;
_Bool _if_conditional122;
void* right_value91;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional123;
void* right_value98;
struct list$1charph* __dec_obj23;
_Bool _if_conditional127;
void* right_value99;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value100;
struct sNode* __dec_obj25;
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
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value101;
struct sNode* __dec_obj26;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
void* right_value102;
char* __dec_obj27;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
void* right_value103;
char* __dec_obj28;
_Bool _if_conditional166;
struct sType* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
memset(&result_66, 0, sizeof(struct sType*));
right_value76 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
                if(_if_conditional95=self==(void*)0,                _if_conditional95) {
                    __result42__ = __result_obj__ = (void*)0;
                    return __result42__;
                }
                result_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value69=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer2(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    result_66->mClass=self->mClass;
                }
                if(_if_conditional97=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional97) {
                    __dec_obj9=result_66->mMultipleTypes;
                    result_66->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value76=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional101=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional101) {
                    __dec_obj11=result_66->mNoSolvedGenericsType;
                    result_66->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value79=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional105=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional105) {
                    __dec_obj12=result_66->mOriginalLoadVarType;
                    result_66->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value80=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional106=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional106) {
                    __dec_obj13=result_66->mGenericsName;
                    result_66->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value81=string_clone(self->mGenericsName))));
                    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional107=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional107) {
                    __dec_obj14=result_66->mGenericsTypes;
                    result_66->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional108=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional108) {
                    __dec_obj18=result_66->mArrayNum;
                    result_66->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value90=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional121=self!=((void*)0),                _if_conditional121) {
                    result_66->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional122=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional122) {
                    __dec_obj19=result_66->mParamTypes;
                    result_66->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value91=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional123=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional123) {
                    __dec_obj23=result_66->mParamNames;
                    result_66->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value98=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional127=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional127) {
                    __dec_obj24=result_66->mResultType;
                    result_66->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value99=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional128=self!=((void*)0),                _if_conditional128) {
                    result_66->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional129=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional129) {
                    __dec_obj25=result_66->mAlignas;
                    result_66->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=sNode_clone(self->mAlignas))));
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional130=self!=((void*)0),                _if_conditional130) {
                    result_66->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional131=self!=((void*)0),                _if_conditional131) {
                    result_66->mShort=self->mShort;
                }
                if(_if_conditional132=self!=((void*)0),                _if_conditional132) {
                    result_66->mLong=self->mLong;
                }
                if(_if_conditional133=self!=((void*)0),                _if_conditional133) {
                    result_66->mLongLong=self->mLongLong;
                }
                if(_if_conditional134=self!=((void*)0),                _if_conditional134) {
                    result_66->mConstant=self->mConstant;
                }
                if(_if_conditional135=self!=((void*)0),                _if_conditional135) {
                    result_66->mRegister=self->mRegister;
                }
                if(_if_conditional136=self!=((void*)0),                _if_conditional136) {
                    result_66->mVolatile=self->mVolatile;
                }
                if(_if_conditional137=self!=((void*)0),                _if_conditional137) {
                    result_66->mStatic=self->mStatic;
                }
                if(_if_conditional138=self!=((void*)0),                _if_conditional138) {
                    result_66->mExtern=self->mExtern;
                }
                if(_if_conditional139=self!=((void*)0),                _if_conditional139) {
                    result_66->mRestrict=self->mRestrict;
                }
                if(_if_conditional140=self!=((void*)0),                _if_conditional140) {
                    result_66->mImmutable=self->mImmutable;
                }
                if(_if_conditional141=self!=((void*)0),                _if_conditional141) {
                    result_66->mHeap=self->mHeap;
                }
                if(_if_conditional142=self!=((void*)0),                _if_conditional142) {
                    result_66->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional143=self!=((void*)0),                _if_conditional143) {
                    result_66->mDelegate=self->mDelegate;
                }
                if(_if_conditional144=self!=((void*)0),                _if_conditional144) {
                    result_66->mShare=self->mShare;
                }
                if(_if_conditional145=self!=((void*)0),                _if_conditional145) {
                    result_66->mClone=self->mClone;
                }
                if(_if_conditional146=self!=((void*)0),                _if_conditional146) {
                    result_66->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional147=self!=((void*)0),                _if_conditional147) {
                    result_66->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional148=self!=((void*)0),                _if_conditional148) {
                    result_66->mRefference=self->mRefference;
                }
                if(_if_conditional149=self!=((void*)0),                _if_conditional149) {
                    result_66->mException=self->mException;
                }
                if(_if_conditional150=self!=((void*)0),                _if_conditional150) {
                    result_66->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional151=self!=((void*)0),                _if_conditional151) {
                    result_66->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional152=self!=((void*)0),                _if_conditional152) {
                    result_66->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional153=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional153) {
                    __dec_obj26=result_66->mSizeNum;
                    result_66->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=sNode_clone(self->mSizeNum))));
                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional154=self!=((void*)0),                _if_conditional154) {
                    result_66->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional155=self!=((void*)0),                _if_conditional155) {
                    result_66->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional156=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional156) {
                    __dec_obj27=result_66->mOriginalTypeName;
                    result_66->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value102=string_clone(self->mOriginalTypeName))));
                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional157=self!=((void*)0),                _if_conditional157) {
                    result_66->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional158=self!=((void*)0),                _if_conditional158) {
                    result_66->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional159=self!=((void*)0),                _if_conditional159) {
                    result_66->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional160=self!=((void*)0),                _if_conditional160) {
                    result_66->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional161=self!=((void*)0),                _if_conditional161) {
                    result_66->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional162=self!=((void*)0),                _if_conditional162) {
                    result_66->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional163=self!=((void*)0),                _if_conditional163) {
                    result_66->mInline=self->mInline;
                }
                if(_if_conditional164=self!=((void*)0),                _if_conditional164) {
                    result_66->mNullValue=self->mNullValue;
                }
                if(_if_conditional165=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional165) {
                    __dec_obj28=result_66->mAsmName;
                    result_66->mAsmName=(char*)come_increment_ref_count(((char*)(right_value103=string_clone(self->mAsmName))));
                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional166=self!=((void*)0),                _if_conditional166) {
                    result_66->mArrayPointerType=self->mArrayPointerType;
                }
                __result59__ = __result_obj__ = result_66;
                come_call_finalizer2(sType_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result59__;
                come_call_finalizer2(sType_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional98;
struct list$1sTypeph* __result43__;
void* right_value70;
void* right_value71;
struct list$1sTypeph* result_67;
struct list_item$1sTypeph* it_68;
_Bool _while_condtional6;
void* right_value75;
struct list$1sTypeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&result_67, 0, sizeof(struct list$1sTypeph*));
memset(&it_68, 0, sizeof(struct list_item$1sTypeph*));
right_value75 = (void*)0;
                        if(_if_conditional98=self==((void*)0),                        _if_conditional98) {
                            __result43__ = __result_obj__ = ((void*)0);
                            return __result43__;
                        }
                        result_67=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value71=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value70=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_68=self->head;
                        while(_while_condtional6=it_68!=((void*)0),                        _while_condtional6) {
                            list$1sTypeph_add(result_67,(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(it_68->item)))));
                            come_call_finalizer2(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            it_68=it_68->next;
                        }
                        __result46__ = __result_obj__ = result_67;
                        come_call_finalizer2(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result46__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result44__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result44__;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional99;
void* right_value72;
struct list_item$1sTypeph* litem_69;
struct sType* __dec_obj6;
_Bool _if_conditional100;
void* right_value73;
struct list_item$1sTypeph* litem_70;
struct sType* __dec_obj7;
void* right_value74;
struct list_item$1sTypeph* litem_71;
struct sType* __dec_obj8;
struct list$1sTypeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1sTypeph*));
right_value73 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1sTypeph*));
right_value74 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional99=self->len==0,                                _if_conditional99) {
                                    litem_69=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value72=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_69->prev=((void*)0);
                                    litem_69->next=((void*)0);
                                    __dec_obj6=litem_69->item;
                                    litem_69->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_69;
                                    self->head=litem_69;
                                }
                                else {
                                    if(_if_conditional100=self->len==1,                                    _if_conditional100) {
                                        litem_70=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value73=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_70->prev=self->head;
                                        litem_70->next=((void*)0);
                                        __dec_obj7=litem_70->item;
                                        litem_70->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail=litem_70;
                                        self->head->next=litem_70;
                                    }
                                    else {
                                        litem_71=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value74=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_71->prev=self->tail;
                                        litem_71->next=((void*)0);
                                        __dec_obj8=litem_71->item;
                                        litem_71->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail->next=litem_71;
                                        self->tail=litem_71;
                                    }
                                }
                                self->len++;
                                __result45__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result45__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional102;
struct tuple1$1sTypeph* __result47__;
void* right_value77;
struct tuple1$1sTypeph* result_72;
_Bool _if_conditional104;
void* right_value78;
struct sType* __dec_obj10;
struct tuple1$1sTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
memset(&result_72, 0, sizeof(struct tuple1$1sTypeph*));
right_value78 = (void*)0;
                        if(_if_conditional102=self==(void*)0,                        _if_conditional102) {
                            __result47__ = __result_obj__ = (void*)0;
                            return __result47__;
                        }
                        result_72=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value77=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional104=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional104) {
                            __dec_obj10=result_72->v1;
                            result_72->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value78=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result48__ = __result_obj__ = result_72;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result48__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional103;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional103=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional103) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional109;
struct list$1sNodeph* __result49__;
void* right_value83;
void* right_value84;
struct list$1sNodeph* result_73;
struct list_item$1sNodeph* it_74;
_Bool _while_condtional7;
void* right_value89;
struct list$1sNodeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_73, 0, sizeof(struct list$1sNodeph*));
memset(&it_74, 0, sizeof(struct list_item$1sNodeph*));
right_value89 = (void*)0;
                        if(_if_conditional109=self==((void*)0),                        _if_conditional109) {
                            __result49__ = __result_obj__ = ((void*)0);
                            return __result49__;
                        }
                        result_73=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value84=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value83=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_74=self->head;
                        while(_while_condtional7=it_74!=((void*)0),                        _while_condtional7) {
                            list$1sNodeph_add(result_73,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value89=sNode_clone(it_74->item)))));
                            if(right_value89) { right_value89 = come_decrement_ref_count2(right_value89, ((struct sNode*)right_value89)->finalize, ((struct sNode*)right_value89)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_74=it_74->next;
                        }
                        __result54__ = __result_obj__ = result_73;
                        come_call_finalizer2(list$1sNodephp_finalize,result_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result54__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result50__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result50__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional110;
void* right_value85;
struct list_item$1sNodeph* litem_75;
struct sNode* __dec_obj15;
_Bool _if_conditional111;
void* right_value86;
struct list_item$1sNodeph* litem_76;
struct sNode* __dec_obj16;
void* right_value87;
struct list_item$1sNodeph* litem_77;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1sNodeph*));
right_value86 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1sNodeph*));
right_value87 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional110=self->len==0,                                _if_conditional110) {
                                    litem_75=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value85=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_75->prev=((void*)0);
                                    litem_75->next=((void*)0);
                                    __dec_obj15=litem_75->item;
                                    litem_75->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_75;
                                    self->head=litem_75;
                                }
                                else {
                                    if(_if_conditional111=self->len==1,                                    _if_conditional111) {
                                        litem_76=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value86=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_76->prev=self->head;
                                        litem_76->next=((void*)0);
                                        __dec_obj16=litem_76->item;
                                        litem_76->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail=litem_76;
                                        self->head->next=litem_76;
                                    }
                                    else {
                                        litem_77=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value87=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_77->prev=self->tail;
                                        litem_77->next=((void*)0);
                                        __dec_obj17=litem_77->item;
                                        litem_77->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail->next=litem_77;
                                        self->tail=litem_77;
                                    }
                                }
                                self->len++;
                                __result51__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result51__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional112;
struct sNode* __result52__;
void* right_value88;
struct sNode* result_78;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct sNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_78, 0, sizeof(struct sNode*));
                                if(_if_conditional112=self==(void*)0,                                _if_conditional112) {
                                    __result52__ = __result_obj__ = (void*)0;
                                    return __result52__;
                                }
                                result_78=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value88=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value88) { right_value88 = come_decrement_ref_count2(right_value88, ((struct sNode*)right_value88)->finalize, ((struct sNode*)right_value88)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional113=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional113) {
                                    result_78->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional114=self!=((void*)0),                                _if_conditional114) {
                                    result_78->finalize=self->finalize;
                                }
                                if(_if_conditional115=self!=((void*)0),                                _if_conditional115) {
                                    result_78->clone=self->clone;
                                }
                                if(_if_conditional116=self!=((void*)0),                                _if_conditional116) {
                                    result_78->compile=self->compile;
                                }
                                if(_if_conditional117=self!=((void*)0),                                _if_conditional117) {
                                    result_78->sline=self->sline;
                                }
                                if(_if_conditional118=self!=((void*)0),                                _if_conditional118) {
                                    result_78->sname=self->sname;
                                }
                                if(_if_conditional119=self!=((void*)0),                                _if_conditional119) {
                                    result_78->terminated=self->terminated;
                                }
                                if(_if_conditional120=self!=((void*)0),                                _if_conditional120) {
                                    result_78->kind=self->kind;
                                }
                                __result53__ = __result_obj__ = result_78;
                                if(result_78) { result_78 = come_decrement_ref_count2(result_78, ((struct sNode*)result_78)->finalize, ((struct sNode*)result_78)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result53__;
                                if(result_78) { result_78 = come_decrement_ref_count2(result_78, ((struct sNode*)result_78)->finalize, ((struct sNode*)result_78)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional124;
struct list$1charph* __result55__;
void* right_value92;
void* right_value93;
struct list$1charph* result_79;
struct list_item$1charph* it_80;
_Bool _while_condtional8;
void* right_value97;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1charph*));
memset(&it_80, 0, sizeof(struct list_item$1charph*));
right_value97 = (void*)0;
                        if(_if_conditional124=self==((void*)0),                        _if_conditional124) {
                            __result55__ = __result_obj__ = ((void*)0);
                            return __result55__;
                        }
                        result_79=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value93=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value92=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_80=self->head;
                        while(_while_condtional8=it_80!=((void*)0),                        _while_condtional8) {
                            list$1charph_add(result_79,(char*)come_increment_ref_count(((char*)(right_value97=string_clone(it_80->item)))));
                            right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_80=it_80->next;
                        }
                        __result58__ = __result_obj__ = result_79;
                        come_call_finalizer2(list$1charphp_finalize,result_79, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result58__;
                        come_call_finalizer2(list$1charphp_finalize,result_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result56__ = __result_obj__ = self;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result56__;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional125;
void* right_value94;
struct list_item$1charph* litem_81;
char* __dec_obj20;
_Bool _if_conditional126;
void* right_value95;
struct list_item$1charph* litem_82;
char* __dec_obj21;
void* right_value96;
struct list_item$1charph* litem_83;
char* __dec_obj22;
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1charph*));
right_value95 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
right_value96 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional125=self->len==0,                                _if_conditional125) {
                                    litem_81=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value94=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_81->prev=((void*)0);
                                    litem_81->next=((void*)0);
                                    __dec_obj20=litem_81->item;
                                    litem_81->item=(char*)come_increment_ref_count(item);
                                    __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_81;
                                    self->head=litem_81;
                                }
                                else {
                                    if(_if_conditional126=self->len==1,                                    _if_conditional126) {
                                        litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value95=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_82->prev=self->head;
                                        litem_82->next=((void*)0);
                                        __dec_obj21=litem_82->item;
                                        litem_82->item=(char*)come_increment_ref_count(item);
                                        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail=litem_82;
                                        self->head->next=litem_82;
                                    }
                                    else {
                                        litem_83=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value96=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_83->prev=self->tail;
                                        litem_83->next=((void*)0);
                                        __dec_obj22=litem_83->item;
                                        litem_83->item=(char*)come_increment_ref_count(item);
                                        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail->next=litem_83;
                                        self->tail=litem_83;
                                    }
                                }
                                self->len++;
                                __result57__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result57__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional169;
struct list_item$1sNodeph* it_91;
int i_92;
_Bool _while_condtional9;
_Bool _if_conditional170;
struct sNode* __result60__;
struct sNode* default_value_93;
struct sNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_91, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_92, 0, sizeof(int));
memset(&default_value_93, 0, sizeof(struct sNode*));
                if(_if_conditional169=position<0,                _if_conditional169) {
                    position+=self->len;
                }
                it_91=self->head;
                i_92=0;
                while(_while_condtional9=it_91!=((void*)0),                _while_condtional9) {
                    if(_if_conditional170=position==i_92,                    _if_conditional170) {
                        __result60__ = __result_obj__ = it_91->item;
                        return __result60__;
                    }
                    it_91=it_91->next;
                    i_92++;
                }
                memset(&default_value_93,0,sizeof(struct sNode*));
                __result61__ = __result_obj__ = default_value_93;
                if(default_value_93) { default_value_93 = come_decrement_ref_count2(default_value_93, ((struct sNode*)default_value_93)->finalize, ((struct sNode*)default_value_93)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result61__;
                if(default_value_93) { default_value_93 = come_decrement_ref_count2(default_value_93, ((struct sNode*)default_value_93)->finalize, ((struct sNode*)default_value_93)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value120;
void* right_value121;
struct buffer* output_102;
_Bool _if_conditional174;
void* right_value122;
void* right_value123;
struct buffer* output2_103;
int i_104;
struct list$1sTypeph* o2_saved_105;
struct sType* it_106;
char* name_107;
void* right_value124;
char* str_108;
_Bool _if_conditional175;
void* right_value125;
void* right_value126;
char* str_109;
_Bool _if_conditional176;
void* right_value127;
struct sType* base_result_type_110;
void* right_value128;
void* right_value129;
struct list$1sNodeph* __dec_obj30;
void* right_value130;
char* result_type_str_111;
int i_112;
struct list$1sTypeph* o2_saved_113;
struct sType* it_114;
char* name_115;
void* right_value131;
char* str_116;
_Bool _if_conditional177;
_Bool _if_conditional178;
struct sNode* node_117;
_Bool _if_conditional179;
void* right_value132;
char* __result64__;
void* right_value133;
struct CVALUE* cvalue_118;
void* right_value134;
void* right_value135;
char* result_type_str_119;
int i_120;
struct list$1sTypeph* o2_saved_121;
struct sType* it_122;
char* name_123;
void* right_value136;
char* str_124;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value137;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&output_102, 0, sizeof(struct buffer*));
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&output2_103, 0, sizeof(struct buffer*));
memset(&i_104, 0, sizeof(int));
memset(&o2_saved_105, 0, sizeof(struct list$1sTypeph*));
memset(&it_106, 0, sizeof(struct sType*));
memset(&name_107, 0, sizeof(char*));
right_value124 = (void*)0;
memset(&str_108, 0, sizeof(char*));
right_value125 = (void*)0;
right_value126 = (void*)0;
memset(&str_109, 0, sizeof(char*));
right_value127 = (void*)0;
memset(&base_result_type_110, 0, sizeof(struct sType*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&result_type_str_111, 0, sizeof(char*));
memset(&i_112, 0, sizeof(int));
memset(&o2_saved_113, 0, sizeof(struct list$1sTypeph*));
memset(&it_114, 0, sizeof(struct sType*));
memset(&name_115, 0, sizeof(char*));
right_value131 = (void*)0;
memset(&str_116, 0, sizeof(char*));
memset(&node_117, 0, sizeof(struct sNode*));
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&cvalue_118, 0, sizeof(struct CVALUE*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&result_type_str_119, 0, sizeof(char*));
memset(&i_120, 0, sizeof(int));
memset(&o2_saved_121, 0, sizeof(struct list$1sTypeph*));
memset(&it_122, 0, sizeof(struct sType*));
memset(&name_123, 0, sizeof(char*));
right_value136 = (void*)0;
memset(&str_124, 0, sizeof(char*));
right_value137 = (void*)0;
    output_102=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value121=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value120=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 474, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(fun->mResultType->mResultType) {
        output2_103=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value123=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value122=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 477, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(output2_103,fun->mName);
        buffer_append_str(output2_103,"(");
        i_104=0;
        for(        o2_saved_105=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_106=list$1sTypeph_begin((o2_saved_105));        !list$1sTypeph_end((o2_saved_105));        it_106=list$1sTypeph_next((o2_saved_105))        ){
            name_107=list$1charphp_operator_load_element(fun->mParamNames,i_104);
            str_108=(char*)come_increment_ref_count(((char*)(right_value124=make_define_var(it_106,name_107,(_Bool)0,info))));
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output2_103,str_108);
            if(_if_conditional175=i_104!=list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional175) {
                buffer_append_str(output2_103,", ");
            }
            i_104++;
            str_108 = come_decrement_ref_count2(str_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(output2_103,")");
        str_109=(char*)come_increment_ref_count(((char*)(right_value126=make_lambda_type_name_string(fun->mResultType,((char*)(right_value125=buffer_to_string(output2_103))),info))));
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(output_102,str_109);
        buffer_append_str(output_102,";\n");
        come_call_finalizer2(buffer_finalize,output2_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str_109 = come_decrement_ref_count2(str_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional176=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional176) {
            base_result_type_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=sType_clone(fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj30=base_result_type_110->mArrayNum;
            base_result_type_110->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value129=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value128=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 503, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type_str_111=(char*)come_increment_ref_count(((char*)(right_value130=make_type_name_string(base_result_type_110,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_102,result_type_str_111);
            buffer_append_str(output_102," (*");
            buffer_append_str(output_102,fun->mName);
            buffer_append_str(output_102,"(");
            i_112=0;
            for(            o2_saved_113=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_114=list$1sTypeph_begin((o2_saved_113));            !list$1sTypeph_end((o2_saved_113));            it_114=list$1sTypeph_next((o2_saved_113))            ){
                name_115=list$1charphp_operator_load_element(fun->mParamNames,i_112);
                str_116=(char*)come_increment_ref_count(((char*)(right_value131=make_define_var(it_114,name_115,(_Bool)0,info))));
                right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_102,str_116);
                if(_if_conditional177=i_112==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional177) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_102,", ...");
                    }
                }
                else {
                    buffer_append_str(output_102,", ");
                }
                i_112++;
                str_116 = come_decrement_ref_count2(str_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            node_117=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0);
            if(_if_conditional179=!node_compile(node_117,info),            _if_conditional179) {
                err_msg(info,"invalid array number");
                __result64__ = __result_obj__ = ((char*)(right_value132=__builtin_string("")));
                come_call_finalizer2(sType_finalize,base_result_type_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_type_str_111 = come_decrement_ref_count2(result_type_str_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,output_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result64__;
            }
            cvalue_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value133=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            buffer_append_str(output_102,((char*)(right_value134=xsprintf("))[%s];\n",cvalue_118->c_value))));
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,base_result_type_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            result_type_str_111 = come_decrement_ref_count2(result_type_str_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,cvalue_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_type_str_119=(char*)come_increment_ref_count(((char*)(right_value135=make_type_name_string(fun->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_102,result_type_str_119);
            buffer_append_str(output_102," ");
            buffer_append_str(output_102,fun->mName);
            buffer_append_str(output_102,"(");
            i_120=0;
            for(            o2_saved_121=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_122=list$1sTypeph_begin((o2_saved_121));            !list$1sTypeph_end((o2_saved_121));            it_122=list$1sTypeph_next((o2_saved_121))            ){
                name_123=list$1charphp_operator_load_element(fun->mParamNames,i_120);
                str_124=(char*)come_increment_ref_count(((char*)(right_value136=make_define_var(it_122,name_123,(_Bool)0,info))));
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_102,str_124);
                if(_if_conditional180=i_120==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional180) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_102,", ...");
                    }
                }
                else {
                    buffer_append_str(output_102,", ");
                }
                i_120++;
                str_124 = come_decrement_ref_count2(str_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(output_102,");\n");
            result_type_str_119 = come_decrement_ref_count2(result_type_str_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result65__ = __result_obj__ = ((char*)(right_value137=buffer_to_string(output_102)));
    come_call_finalizer2(buffer_finalize,output_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
    come_call_finalizer2(buffer_finalize,output_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value138;
void* right_value139;
struct buffer* output_125;
void* right_value140;
char* result_type_str_126;
int i_127;
struct list$1sTypeph* o2_saved_128;
struct sType* it_129;
char* name_130;
void* right_value141;
char* str_131;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value142;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&output_125, 0, sizeof(struct buffer*));
right_value140 = (void*)0;
memset(&result_type_str_126, 0, sizeof(char*));
memset(&i_127, 0, sizeof(int));
memset(&o2_saved_128, 0, sizeof(struct list$1sTypeph*));
memset(&it_129, 0, sizeof(struct sType*));
memset(&name_130, 0, sizeof(char*));
right_value141 = (void*)0;
memset(&str_131, 0, sizeof(char*));
right_value142 = (void*)0;
    output_125=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value139=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value138=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 576, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type_str_126=(char*)come_increment_ref_count(((char*)(right_value140=make_type_name_string(lambda_type->mResultType->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))));
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_125,result_type_str_126);
    buffer_append_str(output_125," ");
    buffer_append_str(output_125,name);
    buffer_append_str(output_125,"(");
    i_127=0;
    for(    o2_saved_128=(struct list$1sTypeph*)come_increment_ref_count((lambda_type->mParamTypes)),it_129=list$1sTypeph_begin((o2_saved_128));    !list$1sTypeph_end((o2_saved_128));    it_129=list$1sTypeph_next((o2_saved_128))    ){
        name_130=list$1charphp_operator_load_element(lambda_type->mParamNames,i_127);
        str_131=(char*)come_increment_ref_count(((char*)(right_value141=make_define_var(it_129,name_130,(_Bool)0,info))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(output_125,str_131);
        if(_if_conditional182=i_127==list$1sTypeph_length(lambda_type->mParamTypes)-1,        _if_conditional182) {
            if(lambda_type->mVarArgs) {
                buffer_append_str(output_125,", ...");
            }
        }
        else {
            buffer_append_str(output_125,", ");
        }
        i_127++;
        str_131 = come_decrement_ref_count2(str_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buffer_append_str(output_125,");\n");
    __result66__ = __result_obj__ = ((char*)(right_value142=buffer_to_string(output_125)));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,output_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_type_str_126 = come_decrement_ref_count2(result_type_str_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,output_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_type_str_126 = come_decrement_ref_count2(result_type_str_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional184;
char* msg2_132;
va_list args_133;
int len_134;
_Bool _if_conditional185;
int i_135;
void* right_value143;
void* right_value144;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_132, 0, sizeof(char*));
memset(&args_133, 0, sizeof(va_list));
memset(&len_134, 0, sizeof(int));
memset(&i_135, 0, sizeof(int));
right_value143 = (void*)0;
right_value144 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_133,msg);
    len_134=vasprintf(&msg2_132,msg,args_133);
    __builtin_va_end(args_133);
    if(info->come_fun) {
        for(        i_135=0;        i_135<info->block_level;        i_135++        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(right_value143=xsprintf("%s",msg2_132))));
        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(right_value144=xsprintf("%s",msg2_132))));
        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    free(msg2_132);
    come_call_finalizer2(va_list_finalize,(&args_133), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional186;
char* msg2_136;
va_list args_137;
int len_138;
void* right_value145;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_136, 0, sizeof(char*));
memset(&args_137, 0, sizeof(va_list));
memset(&len_138, 0, sizeof(int));
right_value145 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_137,msg);
    len_138=vasprintf(&msg2_136,msg,args_137);
    __builtin_va_end(args_137);
    buffer_append_str(info->module->mSourceHead,((char*)(right_value145=xsprintf("%s",msg2_136))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_136);
    come_call_finalizer2(va_list_finalize,(&args_137), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional187;
_Bool _if_conditional188;
char* msg2_139;
va_list args_140;
int len_141;
void* right_value146;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_139, 0, sizeof(char*));
memset(&args_140, 0, sizeof(va_list));
memset(&len_141, 0, sizeof(int));
right_value146 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    if(_if_conditional188=string_operator_equals(info->sname,info->base_sname),    _if_conditional188) {
        __builtin_va_start(args_140,msg);
        len_141=vasprintf(&msg2_139,msg,args_140);
        __builtin_va_end(args_140);
        buffer_append_str(info->module->mHeader,((char*)(right_value146=xsprintf("%s",msg2_139))));
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        free(msg2_139);
        come_call_finalizer2(va_list_finalize,(&args_140), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    }
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
void* right_value147;
char* name_142;
void* right_value148;
void* right_value149;
struct sType* result_type_143;
void* right_value150;
void* right_value151;
void* right_value152;
void* right_value153;
struct sType* __list_values1___144[2];
void* right_value157;
void* right_value158;
struct list$1sTypeph* param_types_149;
void* right_value159;
void* right_value160;
char* __list_values2___150[2];
void* right_value164;
void* right_value165;
struct list$1charph* param_names_155;
void* right_value166;
void* right_value167;
struct list$1charph* param_default_parametors_156;
void* right_value168;
void* right_value169;
void* right_value170;
void* right_value171;
struct sFun* main_fun_157;
void* right_value178;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
memset(&name_142, 0, sizeof(char*));
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&result_type_143, 0, sizeof(struct sType*));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&param_types_149, 0, sizeof(struct list$1sTypeph*));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
memset(&param_names_155, 0, sizeof(struct list$1charph*));
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&param_default_parametors_156, 0, sizeof(struct list$1charph*));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&main_fun_157, 0, sizeof(struct sFun*));
right_value178 = (void*)0;
    name_142=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string("main"))));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_type_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value148=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 676, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    {__list_values1___144[0]=come_increment_ref_count(((struct sType*)(right_value151=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value150=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 677, "sType")))),"int",(_Bool)0,info))));
__list_values1___144[1]=come_increment_ref_count(((struct sType*)(right_value153=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value152=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 677, "sType")))),"char**",(_Bool)0,info))));
}    param_types_149=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value158=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value157=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 677, "struct list$1sTypeph")))),2,__list_values1___144))));
    come_call_finalizer2(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypeph_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    {__list_values2___150[0]=come_increment_ref_count(((char*)(right_value159=__builtin_string("argc"))));
__list_values2___150[1]=come_increment_ref_count(((char*)(right_value160=__builtin_string("argv"))));
}    param_names_155=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value165=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value164=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 678, "struct list$1charph")))),2,__list_values2___150))));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charph_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_156=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value167=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value166=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 679, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    main_fun_157=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value171=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value168=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 680, "sFun")))),(char*)come_increment_ref_count(name_142),(struct sType*)come_increment_ref_count(result_type_143),(struct list$1sTypeph*)come_increment_ref_count(param_types_149),(struct list$1charph*)come_increment_ref_count(param_names_155),(struct list$1charph*)come_increment_ref_count(param_default_parametors_156),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value169=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string(name_142)))),(struct sFun*)come_increment_ref_count(main_fun_157));
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,"#include <stdio.h>\n");
    info->come_fun=main_fun_157;
    info->block_level++;
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    add_come_code(info,"return 0;\n");
    info->block_level--;
    __result95__ = 0;
    name_142 = come_decrement_ref_count2(name_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,main_fun_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result95__;
    name_142 = come_decrement_ref_count2(name_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,main_fun_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_145;
struct list$1sTypeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_145, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_145=0;        i_145<num_value;        i_145++        ){
            list$1sTypeph_push_back(self,values[i_145]);
        }
        __result68__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result68__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional189;
void* right_value154;
struct list_item$1sTypeph* litem_146;
struct sType* __dec_obj31;
_Bool _if_conditional190;
void* right_value155;
struct list_item$1sTypeph* litem_147;
struct sType* __dec_obj32;
void* right_value156;
struct list_item$1sTypeph* litem_148;
struct sType* __dec_obj33;
struct list$1sTypeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
memset(&litem_146, 0, sizeof(struct list_item$1sTypeph*));
right_value155 = (void*)0;
memset(&litem_147, 0, sizeof(struct list_item$1sTypeph*));
right_value156 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional189=self->len==0,                _if_conditional189) {
                    litem_146=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value154=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_146->prev=((void*)0);
                    litem_146->next=((void*)0);
                    __dec_obj31=litem_146->item;
                    litem_146->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_146;
                    self->head=litem_146;
                }
                else {
                    if(_if_conditional190=self->len==1,                    _if_conditional190) {
                        litem_147=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value155=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_147->prev=self->head;
                        litem_147->next=((void*)0);
                        __dec_obj32=litem_147->item;
                        litem_147->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_147;
                        self->head->next=litem_147;
                    }
                    else {
                        litem_148=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value156=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_148->prev=self->tail;
                        litem_148->next=((void*)0);
                        __dec_obj33=litem_148->item;
                        litem_148->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_148;
                        self->tail=litem_148;
                    }
                }
                self->len++;
                __result67__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result67__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_151;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_151, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_151=0;        i_151<num_value;        i_151++        ){
            list$1charph_push_back(self,values[i_151]);
        }
        __result70__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result70__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional191;
void* right_value161;
struct list_item$1charph* litem_152;
char* __dec_obj34;
_Bool _if_conditional192;
void* right_value162;
struct list_item$1charph* litem_153;
char* __dec_obj35;
void* right_value163;
struct list_item$1charph* litem_154;
char* __dec_obj36;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
memset(&litem_152, 0, sizeof(struct list_item$1charph*));
right_value162 = (void*)0;
memset(&litem_153, 0, sizeof(struct list_item$1charph*));
right_value163 = (void*)0;
memset(&litem_154, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional191=self->len==0,                _if_conditional191) {
                    litem_152=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value161=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_152->prev=((void*)0);
                    litem_152->next=((void*)0);
                    __dec_obj34=litem_152->item;
                    litem_152->item=(char*)come_increment_ref_count(item);
                    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_152;
                    self->head=litem_152;
                }
                else {
                    if(_if_conditional192=self->len==1,                    _if_conditional192) {
                        litem_153=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value162=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_153->prev=self->head;
                        litem_153->next=((void*)0);
                        __dec_obj35=litem_153->item;
                        litem_153->item=(char*)come_increment_ref_count(item);
                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_153;
                        self->head->next=litem_153;
                    }
                    else {
                        litem_154=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value163=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_154->prev=self->tail;
                        litem_154->next=((void*)0);
                        __dec_obj36=litem_154->item;
                        litem_154->item=(char*)come_increment_ref_count(item);
                        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_154;
                        self->tail=litem_154;
                    }
                }
                self->len++;
                __result69__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result69__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional193=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional193) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional194=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional194) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional195=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional195) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional196=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional196) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional197=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional197) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional198=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional198) {
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional199=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional199) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional202=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional202) {
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional203=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional203) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional204=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional204) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional205=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional205) {
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional206=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional206) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional207=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional207) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional200;
_Bool _if_conditional201;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional200=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional200) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional201=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional201) {
                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional208;
unsigned int hash_175;
unsigned int it_176;
_Bool _while_condtional12;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool same_key_exist_193;
char* it2_196;
_Bool _if_conditional251;
_Bool _if_conditional252;
struct map$2charphsFunph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_175, 0, sizeof(unsigned int));
memset(&it_176, 0, sizeof(unsigned int));
memset(&same_key_exist_193, 0, sizeof(_Bool));
memset(&it2_196, 0, sizeof(char*));
        if(_if_conditional208=self->len*10>=self->size,        _if_conditional208) {
            map$2charphsFunph_rehash(self);
        }
        hash_175=string_get_hash_key(key)%self->size;
        it_176=hash_175;
        while(_while_condtional12=(_Bool)1,        _while_condtional12) {
            if(_if_conditional220=self->item_existance[it_176],            _if_conditional220) {
                if(_if_conditional221=string_equals(self->keys[it_176],key),                _if_conditional221) {
                    if(_if_conditional222=1,                    _if_conditional222) {
                        list$1charp_remove(self->key_list,self->keys[it_176]);
                        self->keys[it_176] = come_decrement_ref_count2(self->keys[it_176], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_176]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_176]);
                        self->keys[it_176]=key;
                    }
                    if(_if_conditional242=1,                    _if_conditional242) {
                        come_call_finalizer2(sFun_finalize,self->items[it_176], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->items[it_176]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_176]=item;
                    }
                    break;
                }
                it_176++;
                if(_if_conditional243=it_176>=self->size,                _if_conditional243) {
                    it_176=0;
                }
                else {
                    if(_if_conditional244=it_176==hash_175,                    _if_conditional244) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_176]=(_Bool)1;
                if(_if_conditional245=1,                _if_conditional245) {
                    self->keys[it_176]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_176]=key;
                }
                if(_if_conditional246=1,                _if_conditional246) {
                    self->items[it_176]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_176]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_193=(_Bool)0;
        for(        it2_196=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_196=list$1charp_next(self->key_list)        ){
            if(_if_conditional251=string_equals(it2_196,key),            _if_conditional251) {
                puts("SAME KEY");
                same_key_exist_193=(_Bool)1;
            }
        }
        if(_if_conditional252=!same_key_exist_193,        _if_conditional252) {
            list$1charp_push_back(self->key_list,key);
        }
        __result94__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result94__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_158;
void* right_value172;
char** keys_159;
void* right_value173;
struct sFun** items_160;
void* right_value174;
_Bool* item_existance_161;
int len_162;
char* it_165;
struct sFun* default_value_168;
struct sFun* it2_171;
unsigned int hash_172;
int n_173;
_Bool _while_condtional11;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
struct sFun* default_value_174;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_158, 0, sizeof(int));
right_value172 = (void*)0;
memset(&keys_159, 0, sizeof(char**));
right_value173 = (void*)0;
memset(&items_160, 0, sizeof(struct sFun**));
right_value174 = (void*)0;
memset(&item_existance_161, 0, sizeof(_Bool*));
memset(&len_162, 0, sizeof(int));
memset(&it_165, 0, sizeof(char*));
memset(&default_value_168, 0, sizeof(struct sFun*));
memset(&it2_171, 0, sizeof(struct sFun*));
memset(&hash_172, 0, sizeof(unsigned int));
memset(&n_173, 0, sizeof(int));
memset(&default_value_174, 0, sizeof(struct sFun*));
                size_158=self->size*10;
                keys_159=(char**)come_increment_ref_count(((char**)(right_value172=(char**)come_calloc(1, sizeof(char*)*(1*(size_158)), "./comelang2.h", 1335, "char*%"))));
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_160=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value173=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_158)), "./comelang2.h", 1336, "sFun*%"))));
                come_call_finalizer2(sFun_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                item_existance_161=(_Bool*)come_increment_ref_count(((_Bool*)(right_value174=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_158)), "./comelang2.h", 1337, "bool"))));
                right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_162=0;
                for(                it_165=map$2charphsFunph_begin(self);                !map$2charphsFunph_end(self);                it_165=map$2charphsFunph_next(self)                ){
                    memset(&default_value_168,0,sizeof(struct sFun*));
                    it2_171=map$2charphsFunph_at(self,it_165,default_value_168);
                    hash_172=string_get_hash_key(it_165)%size_158;
                    n_173=hash_172;
                    while(_while_condtional11=(_Bool)1,                    _while_condtional11) {
                        if(_if_conditional217=item_existance_161[n_173],                        _if_conditional217) {
                            n_173++;
                            if(_if_conditional218=n_173>=size_158,                            _if_conditional218) {
                                n_173=0;
                            }
                            else {
                                if(_if_conditional219=n_173==hash_172,                                _if_conditional219) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_161[n_173]=(_Bool)1;
                            keys_159[n_173]=it_165;
                            items_160[n_173]=map$2charphsFunph_at(self,it_165,default_value_174);
                            len_162++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_159;
                self->items=items_160;
                self->item_existance=item_existance_161;
                self->size=size_158;
                self->len=len_162;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional209;
char* result_163;
char* __result71__;
_Bool _if_conditional210;
char* __result72__;
char* result_164;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_163, 0, sizeof(char*));
memset(&result_164, 0, sizeof(char*));
                    if(_if_conditional209=self==((void*)0),                    _if_conditional209) {
                        memset(&result_163,0,sizeof(char*));
                        __result71__ = __result_obj__ = result_163;
                        return __result71__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result72__ = __result_obj__ = self->key_list->it->item;
                        return __result72__;
                    }
                    memset(&result_164,0,sizeof(char*));
                    __result73__ = __result_obj__ = result_164;
                    return __result73__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result74__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result74__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional211;
char* result_166;
char* __result75__;
_Bool _if_conditional212;
char* __result76__;
char* result_167;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_166, 0, sizeof(char*));
memset(&result_167, 0, sizeof(char*));
                    if(_if_conditional211=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional211) {
                        memset(&result_166,0,sizeof(char*));
                        __result75__ = __result_obj__ = result_166;
                        return __result75__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result76__ = __result_obj__ = self->key_list->it->item;
                        return __result76__;
                    }
                    memset(&result_167,0,sizeof(char*));
                    __result77__ = __result_obj__ = result_167;
                    return __result77__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_169;
unsigned int it_170;
_Bool _while_condtional10;
_Bool _if_conditional213;
_Bool _if_conditional214;
struct sFun* __result78__;
_Bool _if_conditional215;
_Bool _if_conditional216;
struct sFun* __result79__;
struct sFun* __result80__;
struct sFun* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&it_170, 0, sizeof(unsigned int));
                        hash_169=string_get_hash_key(((char*)key))%self->size;
                        it_170=hash_169;
                        while(_while_condtional10=(_Bool)1,                        _while_condtional10) {
                            if(_if_conditional213=self->item_existance[it_170],                            _if_conditional213) {
                                if(_if_conditional214=string_equals(self->keys[it_170],key),                                _if_conditional214) {
                                    __result78__ = __result_obj__ = self->items[it_170];
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result78__;
                                }
                                it_170++;
                                if(_if_conditional215=it_170>=self->size,                                _if_conditional215) {
                                    it_170=0;
                                }
                                else {
                                    if(_if_conditional216=it_170==hash_169,                                    _if_conditional216) {
                                        __result79__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result79__;
                                    }
                                }
                            }
                            else {
                                __result80__ = __result_obj__ = default_value;
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result80__;
                            }
                        }
                        __result81__ = __result_obj__ = default_value;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result81__;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_177;
struct list_item$1charp* it_178;
_Bool _while_condtional13;
_Bool _if_conditional223;
struct list$1charp* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_177, 0, sizeof(int));
memset(&it_178, 0, sizeof(struct list_item$1charp*));
                            it2_177=0;
                            it_178=self->head;
                            while(_while_condtional13=it_178!=((void*)0),                            _while_condtional13) {
                                if(_if_conditional223=string_equals(it_178->item,item),                                _if_conditional223) {
                                    list$1charp_delete(self,it2_177,it2_177+1);
                                    break;
                                }
                                it2_177++;
                                it_178=it_178->next;
                            }
                            __result85__ = __result_obj__ = self;
                            return __result85__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
int tmp_179;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
struct list$1charp* __result82__;
_Bool _if_conditional230;
_Bool _if_conditional231;
struct list_item$1charp* it_182;
int i_183;
_Bool _while_condtional15;
_Bool _if_conditional232;
struct list_item$1charp* prev_it_184;
_Bool _if_conditional233;
_Bool _if_conditional234;
struct list_item$1charp* it_185;
int i_186;
_Bool _while_condtional16;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list_item$1charp* prev_it_187;
struct list_item$1charp* it_188;
struct list_item$1charp* head_prev_it_189;
struct list_item$1charp* tail_it_190;
int i_191;
_Bool _while_condtional17;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
struct list_item$1charp* prev_it_192;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct list$1charp* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_179, 0, sizeof(int));
memset(&it_182, 0, sizeof(struct list_item$1charp*));
memset(&i_183, 0, sizeof(int));
memset(&prev_it_184, 0, sizeof(struct list_item$1charp*));
memset(&it_185, 0, sizeof(struct list_item$1charp*));
memset(&i_186, 0, sizeof(int));
memset(&prev_it_187, 0, sizeof(struct list_item$1charp*));
memset(&it_188, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_189, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_190, 0, sizeof(struct list_item$1charp*));
memset(&i_191, 0, sizeof(int));
memset(&prev_it_192, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional224=head<0,                                        _if_conditional224) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional225=tail<0,                                        _if_conditional225) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional226=head>tail,                                        _if_conditional226) {
                                            tmp_179=tail;
                                            tail=head;
                                            head=tmp_179;
                                        }
                                        if(_if_conditional227=head<0,                                        _if_conditional227) {
                                            head=0;
                                        }
                                        if(_if_conditional228=tail>self->len,                                        _if_conditional228) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional229=head==tail,                                        _if_conditional229) {
                                            __result82__ = __result_obj__ = self;
                                            return __result82__;
                                        }
                                        if(_if_conditional230=head==0&&tail==self->len,                                        _if_conditional230) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional231=head==0,                                            _if_conditional231) {
                                                it_182=self->head;
                                                i_183=0;
                                                while(_while_condtional15=it_182!=((void*)0),                                                _while_condtional15) {
                                                    if(_if_conditional232=i_183<tail,                                                    _if_conditional232) {
                                                        prev_it_184=it_182;
                                                        it_182=it_182->next;
                                                        i_183++;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional233=i_183==tail,                                                        _if_conditional233) {
                                                            self->head=it_182;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_182=it_182->next;
                                                            i_183++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional234=tail==self->len,                                                _if_conditional234) {
                                                    it_185=self->head;
                                                    i_186=0;
                                                    while(_while_condtional16=it_185!=((void*)0),                                                    _while_condtional16) {
                                                        if(_if_conditional235=i_186==head,                                                        _if_conditional235) {
                                                            self->tail=it_185->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional236=i_186>=head,                                                        _if_conditional236) {
                                                            prev_it_187=it_185;
                                                            it_185=it_185->next;
                                                            i_186++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_185=it_185->next;
                                                            i_186++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_188=self->head;
                                                    head_prev_it_189=((void*)0);
                                                    tail_it_190=((void*)0);
                                                    i_191=0;
                                                    while(_while_condtional17=it_188!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional237=i_191==head,                                                        _if_conditional237) {
                                                            head_prev_it_189=it_188->prev;
                                                        }
                                                        if(_if_conditional238=i_191==tail,                                                        _if_conditional238) {
                                                            tail_it_190=it_188;
                                                        }
                                                        if(_if_conditional239=i_191>=head&&i_191<tail,                                                        _if_conditional239) {
                                                            prev_it_192=it_188;
                                                            it_188=it_188->next;
                                                            i_191++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_188=it_188->next;
                                                            i_191++;
                                                        }
                                                    }
                                                    if(_if_conditional240=head_prev_it_189!=((void*)0),                                                    _if_conditional240) {
                                                        head_prev_it_189->next=tail_it_190;
                                                    }
                                                    if(_if_conditional241=tail_it_190!=((void*)0),                                                    _if_conditional241) {
                                                        tail_it_190->prev=head_prev_it_189;
                                                    }
                                                }
                                            }
                                        }
                                        __result84__ = __result_obj__ = self;
                                        return __result84__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_180;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_181;
struct list$1charp* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_180, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_181, 0, sizeof(struct list_item$1charp*));
                                                it_180=self->head;
                                                while(_while_condtional14=it_180!=((void*)0),                                                _while_condtional14) {
                                                    prev_it_181=it_180;
                                                    it_180=it_180->next;
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result83__ = __result_obj__ = self;
                                                return __result83__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional247;
char* result_194;
char* __result86__;
_Bool _if_conditional248;
char* __result87__;
char* result_195;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_194, 0, sizeof(char*));
memset(&result_195, 0, sizeof(char*));
            if(_if_conditional247=self==((void*)0),            _if_conditional247) {
                memset(&result_194,0,sizeof(char*));
                __result86__ = __result_obj__ = result_194;
                return __result86__;
            }
            self->it=self->head;
            if(self->it) {
                __result87__ = __result_obj__ = self->it->item;
                return __result87__;
            }
            memset(&result_195,0,sizeof(char*));
            __result88__ = __result_obj__ = result_195;
            return __result88__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
            __result89__ = self==((void*)0)||self->it==((void*)0);
            return __result89__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional249;
char* result_197;
char* __result90__;
_Bool _if_conditional250;
char* __result91__;
char* result_198;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_197, 0, sizeof(char*));
memset(&result_198, 0, sizeof(char*));
            if(_if_conditional249=self==((void*)0)||self->it==((void*)0),            _if_conditional249) {
                memset(&result_197,0,sizeof(char*));
                __result90__ = __result_obj__ = result_197;
                return __result90__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result91__ = __result_obj__ = self->it->item;
                return __result91__;
            }
            memset(&result_198,0,sizeof(char*));
            __result92__ = __result_obj__ = result_198;
            return __result92__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional253;
void* right_value175;
struct list_item$1charp* litem_199;
_Bool _if_conditional254;
void* right_value176;
struct list_item$1charp* litem_200;
void* right_value177;
struct list_item$1charp* litem_201;
struct list$1charp* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
memset(&litem_199, 0, sizeof(struct list_item$1charp*));
right_value176 = (void*)0;
memset(&litem_200, 0, sizeof(struct list_item$1charp*));
right_value177 = (void*)0;
memset(&litem_201, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional253=self->len==0,                _if_conditional253) {
                    litem_199=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value175=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_199->prev=((void*)0);
                    litem_199->next=((void*)0);
                    litem_199->item=item;
                    self->tail=litem_199;
                    self->head=litem_199;
                }
                else {
                    if(_if_conditional254=self->len==1,                    _if_conditional254) {
                        litem_200=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value176=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_200->prev=self->head;
                        litem_200->next=((void*)0);
                        litem_200->item=item;
                        self->tail=litem_200;
                        self->head->next=litem_200;
                    }
                    else {
                        litem_201=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value177=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_201->prev=self->tail;
                        litem_201->next=((void*)0);
                        litem_201->item=item;
                        self->tail->next=litem_201;
                        self->tail=litem_201;
                    }
                }
                self->len++;
                __result93__ = __result_obj__ = self;
                return __result93__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
void* right_value179;
char* output_file_name_202;
struct _IO_FILE* f_203;
void* right_value180;
struct map$2charphsFunph* o2_saved_204;
char* it_205;
void* right_value181;
struct sFun* it2_209;
void* right_value182;
char* header_210;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
struct map$2charphsFunph* o2_saved_215;
char* it_216;
void* right_value183;
struct sFun* it2_217;
void* right_value184;
char* header_218;
_Bool _if_conditional267;
void* right_value185;
char* output_219;
_Bool _if_conditional268;
void* right_value186;
char* output_220;
_Bool _if_conditional269;
_Bool _if_conditional270;
struct map$2charphsFunph* o2_saved_221;
char* it_222;
struct sFun* it2_223;
_Bool _if_conditional271;
void* right_value187;
char* output_224;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
memset(&output_file_name_202, 0, sizeof(char*));
memset(&f_203, 0, sizeof(struct _IO_FILE*));
right_value180 = (void*)0;
memset(&o2_saved_204, 0, sizeof(struct map$2charphsFunph*));
memset(&it_205, 0, sizeof(char*));
right_value181 = (void*)0;
memset(&it2_209, 0, sizeof(struct sFun*));
right_value182 = (void*)0;
memset(&header_210, 0, sizeof(char*));
memset(&o2_saved_215, 0, sizeof(struct map$2charphsFunph*));
memset(&it_216, 0, sizeof(char*));
right_value183 = (void*)0;
memset(&it2_217, 0, sizeof(struct sFun*));
right_value184 = (void*)0;
memset(&header_218, 0, sizeof(char*));
right_value185 = (void*)0;
memset(&output_219, 0, sizeof(char*));
right_value186 = (void*)0;
memset(&output_220, 0, sizeof(char*));
memset(&o2_saved_221, 0, sizeof(struct map$2charphsFunph*));
memset(&it_222, 0, sizeof(char*));
memset(&it2_223, 0, sizeof(struct sFun*));
right_value187 = (void*)0;
memset(&output_224, 0, sizeof(char*));
    output_file_name_202=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s.c",info->sname))));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    f_203=fopen(output_file_name_202,"w");
    fprintf(f_203,"// source head\n");
    fprintf(f_203,"%s\n",((char*)(right_value180=buffer_to_string(info->module->mSourceHead))));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fprintf(f_203,"// header function\n");
    for(    o2_saved_204=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_205=map$2charphsFunph_begin((o2_saved_204));    !map$2charphsFunph_end((o2_saved_204));    it_205=map$2charphsFunph_next((o2_saved_204))    ){
        it2_209=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value181=__builtin_string(it_205))));
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        header_210=(char*)come_increment_ref_count(((char*)(right_value182=header_function(it2_209,info))));
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional259=it2_209->mStatic&&it2_209->mResultType->mInline,        _if_conditional259) {
        }
        else {
            if(it2_209->mStatic) {
                fprintf(f_203,"static %s",header_210);
            }
            else {
                if(it2_209->mResultType->mInline) {
                }
                else {
                    if(_if_conditional262=string_operator_not_equals(it_205,"__builtin_va_start")&&string_operator_not_equals(it_205,"__builtin_va_end"),                    _if_conditional262) {
                        fprintf(f_203,"%s\n",header_210,it_205);
                    }
                }
            }
        }
        header_210 = come_decrement_ref_count2(header_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fprintf(f_203,"// inline function\n");
    for(    o2_saved_215=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_216=map$2charphsFunph_begin((o2_saved_215));    !map$2charphsFunph_end((o2_saved_215));    it_216=map$2charphsFunph_next((o2_saved_215))    ){
        it2_217=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value183=__builtin_string(it_216))));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        header_218=(char*)come_increment_ref_count(((char*)(right_value184=header_function(it2_217,info))));
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional267=it2_217->mStatic&&it2_217->mResultType->mInline,        _if_conditional267) {
            output_219=(char*)come_increment_ref_count(((char*)(right_value185=output_function(it2_217,info))));
            right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fprintf(f_203,"static inline %s",output_219);
            output_219 = come_decrement_ref_count2(output_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(it2_217->mResultType->mInline) {
                output_220=(char*)come_increment_ref_count(((char*)(right_value186=output_function(it2_217,info))));
                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fprintf(f_203,"static inline %s",output_220);
                output_220 = come_decrement_ref_count2(output_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(it2_217->mStatic) {
                }
                else {
                    if(_if_conditional270=string_operator_not_equals(it_216,"__builtin_va_start")&&string_operator_not_equals(it_216,"__builtin_va_end"),                    _if_conditional270) {
                    }
                }
            }
        }
        header_218 = come_decrement_ref_count2(header_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fprintf(f_203,"\n");
    fprintf(f_203,"// body function\n");
    for(    o2_saved_221=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_222=map$2charphsFunph_begin((o2_saved_221));    !map$2charphsFunph_end((o2_saved_221));    it_222=map$2charphsFunph_next((o2_saved_221))    ){
        it2_223=map$2charphsFunphp_operator_load_element(info->funcs,it_222);
        if(_if_conditional271=!it2_223->mExternal,        _if_conditional271) {
            output_224=(char*)come_increment_ref_count(((char*)(right_value187=output_function(it2_223,info))));
            right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional272=it2_223->mStatic&&it2_223->mResultType->mInline,            _if_conditional272) {
            }
            else {
                if(it2_223->mStatic) {
                    fprintf(f_203,"static %s",output_224);
                }
                else {
                    if(it2_223->mResultType->mInline) {
                    }
                    else {
                        fprintf(f_203,"%s",output_224);
                    }
                }
            }
            fprintf(f_203,"\n");
            output_224 = come_decrement_ref_count2(output_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fclose(f_203);
    __result100__ = (_Bool)1;
    output_file_name_202 = come_decrement_ref_count2(output_file_name_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result100__;
    output_file_name_202 = come_decrement_ref_count2(output_file_name_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_206;
unsigned int hash_207;
unsigned int it_208;
_Bool _while_condtional18;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct sFun* __result96__;
_Bool _if_conditional257;
_Bool _if_conditional258;
struct sFun* __result97__;
struct sFun* __result98__;
struct sFun* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_206, 0, sizeof(struct sFun*));
memset(&hash_207, 0, sizeof(unsigned int));
memset(&it_208, 0, sizeof(unsigned int));
            memset(&default_value_206,0,sizeof(struct sFun*));
            hash_207=string_get_hash_key(((char*)key))%self->size;
            it_208=hash_207;
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                if(_if_conditional255=self->item_existance[it_208],                _if_conditional255) {
                    if(_if_conditional256=string_equals(self->keys[it_208],key),                    _if_conditional256) {
                        __result96__ = __result_obj__ = self->items[it_208];
                        come_call_finalizer2(sFun_finalize,default_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result96__;
                    }
                    it_208++;
                    if(_if_conditional257=it_208>=self->size,                    _if_conditional257) {
                        it_208=0;
                    }
                    else {
                        if(_if_conditional258=it_208==hash_207,                        _if_conditional258) {
                            __result97__ = __result_obj__ = default_value_206;
                            come_call_finalizer2(sFun_finalize,default_value_206, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result97__;
                        }
                    }
                }
                else {
                    __result98__ = __result_obj__ = default_value_206;
                    come_call_finalizer2(sFun_finalize,default_value_206, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result98__;
                }
            }
            __result99__ = __result_obj__ = default_value_206;
            come_call_finalizer2(sFun_finalize,default_value_206, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result99__;
            come_call_finalizer2(sFun_finalize,default_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_211;
_Bool _if_conditional263;
_Bool _if_conditional264;
int i_212;
_Bool _if_conditional265;
_Bool _if_conditional266;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_211, 0, sizeof(int));
memset(&i_212, 0, sizeof(int));
        for(        i_211=0;        i_211<self->size;        i_211++        ){
            if(_if_conditional263=self->item_existance[i_211],            _if_conditional263) {
                if(_if_conditional264=1,                _if_conditional264) {
                    come_call_finalizer2(sFun_finalize,self->items[i_211], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->items);
        for(        i_212=0;        i_212<self->size;        i_212++        ){
            if(_if_conditional265=self->item_existance[i_212],            _if_conditional265) {
                if(_if_conditional266=1,                _if_conditional266) {
                    self->keys[i_212] = come_decrement_ref_count2(self->keys[i_212], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->keys);
        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_213;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_214;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_213, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_214, 0, sizeof(struct list_item$1charp*));
            it_213=self->head;
            while(_while_condtional19=it_213!=((void*)0),            _while_condtional19) {
                prev_it_214=it_213;
                it_213=it_213->next;
                come_call_finalizer2(list_item$1charpp_finalize,prev_it_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
char* output_file_name_225;
struct _IO_FILE* f_226;
_Bool _if_conditional275;
void* right_value188;
_Bool _if_conditional276;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_225, 0, sizeof(char*));
memset(&f_226, 0, sizeof(struct _IO_FILE*));
right_value188 = (void*)0;
    output_file_name_225=(char*)come_increment_ref_count(info->output_file_name);
    f_226=fopen(output_file_name_225,"a");
    if(_if_conditional275=info->num_source_files==0&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional275) {
        fprintf(f_226,"#ifndef __COMMON_H__\n");
        fprintf(f_226,"#define __COMMON_H__\n");
        fprintf(f_226,"#include <comelang2.h>\n");
    }
    fprintf(f_226,"%s\n",((char*)(right_value188=buffer_to_string(info->module->mHeader))));
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fprintf(f_226,"\n");
    if(_if_conditional276=info->num_source_files==info->max_source_files-1&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional276) {
        fprintf(f_226,"#endif\n");
    }
    fclose(f_226);
    __result101__ = (_Bool)1;
    output_file_name_225 = come_decrement_ref_count2(output_file_name_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result101__;
    output_file_name_225 = come_decrement_ref_count2(output_file_name_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional277;
char* msg2_227;
va_list args_228;
int len_229;
_Bool _if_conditional278;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_227, 0, sizeof(char*));
memset(&args_228, 0, sizeof(va_list));
memset(&len_229, 0, sizeof(int));
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_228,code);
    len_229=vasprintf(&msg2_227,code,args_228);
    __builtin_va_end(args_228);
    if(info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_227);
    }
    free(msg2_227);
    come_call_finalizer2(va_list_finalize,(&args_228), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional279;
char* msg2_230;
va_list args_231;
int len_232;
_Bool _if_conditional280;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_230, 0, sizeof(char*));
memset(&args_231, 0, sizeof(va_list));
memset(&len_232, 0, sizeof(int));
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_231,code);
    len_232=vasprintf(&msg2_230,code,args_231);
    __builtin_va_end(args_231);
    if(info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_230);
    }
    free(msg2_230);
    come_call_finalizer2(va_list_finalize,(&args_231), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional281;
_Bool _if_conditional282;
char* __dec_obj37;
_Bool _if_conditional283;
char* __dec_obj38;
_Bool _if_conditional284;
char* __dec_obj39;
memset(&__result_obj__, 0, sizeof(void*));
    if(info->no_output_come_code) {
        return;
    }
    if(info->module->mLastCode) {
        add_come_code(info,"%s",info->module->mLastCode);
        __dec_obj37=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode2) {
        add_come_code(info,"%s",info->module->mLastCode2);
        __dec_obj38=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode3) {
        add_come_code(info,"%s",info->module->mLastCode3);
        __dec_obj39=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value189;
char* __dec_obj40;
_Bool _if_conditional287;
void* right_value190;
char* __dec_obj41;
_Bool _if_conditional288;
void* right_value191;
char* __dec_obj42;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    if(info->module->mLastCode) {
        add_come_code(info,"%s ,",((char*)(right_value189=string_substring(info->module->mLastCode,0,-3))));
        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj40=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode2) {
        add_come_code(info,"%s ,",((char*)(right_value190=string_substring(info->module->mLastCode2,0,-3))));
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj41=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode3) {
        add_come_code(info,"%s ,",((char*)(right_value191=string_substring(info->module->mLastCode3,0,-3))));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj42=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional289;
char* msg2_233;
va_list args_234;
int len_235;
void* right_value192;
char* __dec_obj43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_233, 0, sizeof(char*));
memset(&args_234, 0, sizeof(va_list));
memset(&len_235, 0, sizeof(int));
right_value192 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_234,msg);
    len_235=vasprintf(&msg2_233,msg,args_234);
    __builtin_va_end(args_234);
    __dec_obj43=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s",msg2_233))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_233);
    come_call_finalizer2(va_list_finalize,(&args_234), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional290;
char* msg2_236;
va_list args_237;
int len_238;
void* right_value193;
char* __dec_obj44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_236, 0, sizeof(char*));
memset(&args_237, 0, sizeof(va_list));
memset(&len_238, 0, sizeof(int));
right_value193 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_237,msg);
    len_238=vasprintf(&msg2_236,msg,args_237);
    __builtin_va_end(args_237);
    __dec_obj44=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s",msg2_236))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_236);
    come_call_finalizer2(va_list_finalize,(&args_237), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional291;
char* msg2_239;
va_list args_240;
int len_241;
void* right_value194;
char* __dec_obj45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_239, 0, sizeof(char*));
memset(&args_240, 0, sizeof(va_list));
memset(&len_241, 0, sizeof(int));
right_value194 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_240,msg);
    len_241=vasprintf(&msg2_239,msg,args_240);
    __builtin_va_end(args_240);
    __dec_obj45=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value194=xsprintf("%s",msg2_239))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_239);
    come_call_finalizer2(va_list_finalize,(&args_240), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    list$1CVALUEph_delete(info->stack,-value,-1);
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
int tmp_242;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct list$1CVALUEph* __result102__;
_Bool _if_conditional298;
_Bool _if_conditional300;
struct list_item$1CVALUEph* it_245;
int i_246;
_Bool _while_condtional21;
_Bool _if_conditional301;
struct list_item$1CVALUEph* prev_it_247;
_Bool _if_conditional302;
_Bool _if_conditional303;
struct list_item$1CVALUEph* it_248;
int i_249;
_Bool _while_condtional22;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct list_item$1CVALUEph* prev_it_250;
struct list_item$1CVALUEph* it_251;
struct list_item$1CVALUEph* head_prev_it_252;
struct list_item$1CVALUEph* tail_it_253;
int i_254;
_Bool _while_condtional23;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
struct list_item$1CVALUEph* prev_it_255;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list$1CVALUEph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_242, 0, sizeof(int));
memset(&it_245, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_246, 0, sizeof(int));
memset(&prev_it_247, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_248, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_249, 0, sizeof(int));
memset(&prev_it_250, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_251, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_252, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_253, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_254, 0, sizeof(int));
memset(&prev_it_255, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional292=head<0,        _if_conditional292) {
            head+=self->len;
        }
        if(_if_conditional293=tail<0,        _if_conditional293) {
            tail+=self->len+1;
        }
        if(_if_conditional294=head>tail,        _if_conditional294) {
            tmp_242=tail;
            tail=head;
            head=tmp_242;
        }
        if(_if_conditional295=head<0,        _if_conditional295) {
            head=0;
        }
        if(_if_conditional296=tail>self->len,        _if_conditional296) {
            tail=self->len;
        }
        if(_if_conditional297=head==tail,        _if_conditional297) {
            __result102__ = __result_obj__ = self;
            return __result102__;
        }
        if(_if_conditional298=head==0&&tail==self->len,        _if_conditional298) {
            list$1CVALUEph_reset(self);
        }
        else {
            if(_if_conditional300=head==0,            _if_conditional300) {
                it_245=self->head;
                i_246=0;
                while(_while_condtional21=it_245!=((void*)0),                _while_condtional21) {
                    if(_if_conditional301=i_246<tail,                    _if_conditional301) {
                        prev_it_247=it_245;
                        it_245=it_245->next;
                        i_246++;
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        if(_if_conditional302=i_246==tail,                        _if_conditional302) {
                            self->head=it_245;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_245=it_245->next;
                            i_246++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional303=tail==self->len,                _if_conditional303) {
                    it_248=self->head;
                    i_249=0;
                    while(_while_condtional22=it_248!=((void*)0),                    _while_condtional22) {
                        if(_if_conditional304=i_249==head,                        _if_conditional304) {
                            self->tail=it_248->prev;
                            self->tail->next=((void*)0);
                        }
                        if(_if_conditional305=i_249>=head,                        _if_conditional305) {
                            prev_it_250=it_248;
                            it_248=it_248->next;
                            i_249++;
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_248=it_248->next;
                            i_249++;
                        }
                    }
                }
                else {
                    it_251=self->head;
                    head_prev_it_252=((void*)0);
                    tail_it_253=((void*)0);
                    i_254=0;
                    while(_while_condtional23=it_251!=((void*)0),                    _while_condtional23) {
                        if(_if_conditional306=i_254==head,                        _if_conditional306) {
                            head_prev_it_252=it_251->prev;
                        }
                        if(_if_conditional307=i_254==tail,                        _if_conditional307) {
                            tail_it_253=it_251;
                        }
                        if(_if_conditional308=i_254>=head&&i_254<tail,                        _if_conditional308) {
                            prev_it_255=it_251;
                            it_251=it_251->next;
                            i_254++;
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_251=it_251->next;
                            i_254++;
                        }
                    }
                    if(_if_conditional309=head_prev_it_252!=((void*)0),                    _if_conditional309) {
                        head_prev_it_252->next=tail_it_253;
                    }
                    if(_if_conditional310=tail_it_253!=((void*)0),                    _if_conditional310) {
                        tail_it_253->prev=head_prev_it_252;
                    }
                }
            }
        }
        __result104__ = __result_obj__ = self;
        return __result104__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_243;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_244;
struct list$1CVALUEph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_243, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_244, 0, sizeof(struct list_item$1CVALUEph*));
                it_243=self->head;
                while(_while_condtional20=it_243!=((void*)0),                _while_condtional20) {
                    prev_it_244=it_243;
                    it_243=it_243->next;
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result103__ = __result_obj__ = self;
                return __result103__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional299;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional299=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional299) {
                            come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
char* __dec_obj46;
void* right_value198;
struct CVALUE* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
    __dec_obj46=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result109__ = __result_obj__ = ((struct CVALUE*)(right_value198=CVALUE_clone(list$1CVALUEphp_operator_load_element(info->stack,offset))));
    come_call_finalizer2(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result109__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional311;
struct list_item$1CVALUEph* it_256;
int i_257;
_Bool _while_condtional24;
_Bool _if_conditional312;
struct CVALUE* __result105__;
struct CVALUE* default_value_258;
struct CVALUE* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_256, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_257, 0, sizeof(int));
memset(&default_value_258, 0, sizeof(struct CVALUE*));
        if(_if_conditional311=position<0,        _if_conditional311) {
            position+=self->len;
        }
        it_256=self->head;
        i_257=0;
        while(_while_condtional24=it_256!=((void*)0),        _while_condtional24) {
            if(_if_conditional312=position==i_257,            _if_conditional312) {
                __result105__ = __result_obj__ = it_256->item;
                return __result105__;
            }
            it_256=it_256->next;
            i_257++;
        }
        memset(&default_value_258,0,sizeof(struct CVALUE*));
        __result106__ = __result_obj__ = default_value_258;
        come_call_finalizer2(CVALUE_finalize,default_value_258, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result106__;
        come_call_finalizer2(CVALUE_finalize,default_value_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional313;
struct CVALUE* __result107__;
void* right_value195;
struct CVALUE* result_259;
_Bool _if_conditional314;
void* right_value196;
char* __dec_obj47;
_Bool _if_conditional315;
void* right_value197;
struct sType* __dec_obj48;
_Bool _if_conditional316;
struct CVALUE* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
memset(&result_259, 0, sizeof(struct CVALUE*));
right_value196 = (void*)0;
right_value197 = (void*)0;
        if(_if_conditional313=self==(void*)0,        _if_conditional313) {
            __result107__ = __result_obj__ = (void*)0;
            return __result107__;
        }
        result_259=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional314=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional314) {
            __dec_obj47=result_259->c_value;
            result_259->c_value=(char*)come_increment_ref_count(((char*)(right_value196=string_clone(self->c_value))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional315=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional315) {
            __dec_obj48=result_259->type;
            result_259->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_clone(self->type))));
            come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional316=self!=((void*)0),        _if_conditional316) {
            result_259->var=self->var;
        }
        __result108__ = __result_obj__ = result_259;
        come_call_finalizer2(CVALUE_finalize,result_259, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result108__;
        come_call_finalizer2(CVALUE_finalize,result_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj49=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj50=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj51=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
}

