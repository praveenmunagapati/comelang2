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

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

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

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info);

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info);

_Bool sLambdaNode_terminated();

char* sLambdaNode_kind();

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);

static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
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
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value13;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value13 = (void*)0;
    __result8__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value13=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value10=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2156, "smart_pointer$1char")))),self,sizeof(char)*len)));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result8__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value14;
void* right_value17;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
right_value17 = (void*)0;
    __result10__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value17=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value14=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2161, "smart_pointer$1short")))),self,sizeof(short short)*len)));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result10__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value18;
void* right_value21;
struct smart_pointer$1int* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
right_value21 = (void*)0;
    __result12__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value21=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2166, "smart_pointer$1int")))),self,sizeof(int)*len)));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result12__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1long* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result14__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value25=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value22=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2171, "smart_pointer$1long")))),self,sizeof(long)*len)));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1float* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result16__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value29=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value26=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2176, "smart_pointer$1float")))),self,sizeof(float)*len)));
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1double* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result18__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value33=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value30=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2181, "smart_pointer$1double")))),self,sizeof(double)*len)));
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value34;
char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
    __result19__ = __result_obj__ = ((char*)(right_value34=xsprintf(msg,self)));
    right_value34 = come_decrement_ref_count2(right_value34, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value35;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
    __result20__ = __result_obj__ = ((char*)(right_value35=xsprintf(msg,self)));
    right_value35 = come_decrement_ref_count2(right_value35, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value36;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
    __result21__ = __result_obj__ = ((char*)(right_value36=xsprintf(msg,self)));
    right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result21__;
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
void* right_value11;
void* right_value12;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
right_value12 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value12=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result7__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result7__;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value15;
void* right_value16;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
right_value16 = (void*)0;
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result9__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result9__;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value19;
void* right_value20;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
right_value20 = (void*)0;
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value20=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result11__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result11__;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result13__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result15__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result15__;
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
void* right_value31;
void* right_value32;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result17__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result17__;
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




struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
char* __dec_obj12;
struct sLambdaNode* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    self->mFun=fun;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result22__ = __result_obj__ = self;
    come_call_finalizer2(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result22__;
    come_call_finalizer2(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
int __result23__;
memset(&__result_obj__, 0, sizeof(void*));
    __result23__ = self->sline;
    return __result23__;
}

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value37;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
    __result24__ = __result_obj__ = ((char*)(right_value37=__builtin_string(self->sname)));
    right_value37 = come_decrement_ref_count2(right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result24__;
}

_Bool sLambdaNode_terminated(){
void* __result_obj__;
_Bool __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    __result25__ = (_Bool)0;
    return __result25__;
}

char* sLambdaNode_kind(){
void* __result_obj__;
void* right_value38;
char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
    __result26__ = __result_obj__ = ((char*)(right_value38=__builtin_string("sLambdaNode")));
    right_value38 = come_decrement_ref_count2(right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result26__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_5;
void* right_value39;
void* right_value40;
struct sType* result_type_6;
void* right_value41;
void* right_value42;
_Bool _if_conditional25;
void* right_value43;
struct CVALUE* come_value_13;
void* right_value44;
char* __dec_obj13;
void* right_value80;
struct sType* __dec_obj37;
_Bool __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_5, 0, sizeof(struct sFun*));
right_value39 = (void*)0;
right_value40 = (void*)0;
memset(&result_type_6, 0, sizeof(struct sType*));
right_value41 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
memset(&come_value_13, 0, sizeof(struct CVALUE*));
right_value44 = (void*)0;
right_value80 = (void*)0;
    come_fun_5=info->come_fun;
    info->come_fun=self->mFun;
    result_type_6=(struct sType*)come_increment_ref_count(((struct sType*)(right_value40=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value39=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 43, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value41=make_define_var(result_type_6,"__result_obj__",(_Bool)0,info))));
    right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value42=make_type_name_string(result_type_6,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    come_value_13=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value43=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function2.c", 52, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=come_value_13->c_value;
    come_value_13->c_value=(char*)come_increment_ref_count(((char*)(right_value44=xsprintf("%s",self->mFun->mName))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj37=come_value_13->type;
    come_value_13->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(self->mFun->mLambdaType))));
    come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_13->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_13->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_13));
    info->come_fun=come_fun_5;
    __result46__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result46__;
    come_call_finalizer2(sType_finalize,result_type_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional8=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional8) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional10=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional10) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional12=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional12) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional13=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional13) {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional14=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional14) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional15) {
            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional17) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional18) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional20) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional21) {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional22) {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional23) {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional24) {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional9=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional9) {
                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional11) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional16) {
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
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional19) {
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional26;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional26=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional26) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional27=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional27) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional28;
struct sType* __result27__;
void* right_value45;
struct sType* result_14;
_Bool _if_conditional29;
_Bool _if_conditional30;
void* right_value52;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional34;
void* right_value55;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional38;
void* right_value56;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional39;
void* right_value57;
char* __dec_obj21;
_Bool _if_conditional40;
void* right_value58;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional41;
void* right_value66;
struct list$1sNodeph* __dec_obj26;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value67;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional56;
void* right_value74;
struct list$1charph* __dec_obj31;
_Bool _if_conditional60;
void* right_value75;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional61;
_Bool _if_conditional62;
void* right_value76;
struct sNode* __dec_obj33;
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
void* right_value77;
struct sNode* __dec_obj34;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value78;
char* __dec_obj35;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
void* right_value79;
char* __dec_obj36;
_Bool _if_conditional99;
struct sType* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value45 = (void*)0;
memset(&result_14, 0, sizeof(struct sType*));
right_value52 = (void*)0;
right_value55 = (void*)0;
right_value56 = (void*)0;
right_value57 = (void*)0;
right_value58 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
        if(_if_conditional28=self==(void*)0,        _if_conditional28) {
            __result27__ = __result_obj__ = (void*)0;
            return __result27__;
        }
        result_14=(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional29=self!=((void*)0),        _if_conditional29) {
            result_14->mClass=self->mClass;
        }
        if(_if_conditional30=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional30) {
            __dec_obj17=result_14->mMultipleTypes;
            result_14->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value52=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional34) {
            __dec_obj19=result_14->mNoSolvedGenericsType;
            result_14->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value55=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional38=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional38) {
            __dec_obj20=result_14->mOriginalLoadVarType;
            result_14->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value56=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional39=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional39) {
            __dec_obj21=result_14->mGenericsName;
            result_14->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value57=string_clone(self->mGenericsName))));
            __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional40=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional40) {
            __dec_obj22=result_14->mGenericsTypes;
            result_14->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value58=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional41=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional41) {
            __dec_obj26=result_14->mArrayNum;
            result_14->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value66=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0),        _if_conditional54) {
            result_14->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional55=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional55) {
            __dec_obj27=result_14->mParamTypes;
            result_14->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value67=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional56=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional56) {
            __dec_obj31=result_14->mParamNames;
            result_14->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value74=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional60=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional60) {
            __dec_obj32=result_14->mResultType;
            result_14->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value75=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_14->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional62=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional62) {
            __dec_obj33=result_14->mAlignas;
            result_14->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=sNode_clone(self->mAlignas))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value76) { right_value76 = come_decrement_ref_count2(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_14->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_14->mShort=self->mShort;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_14->mLong=self->mLong;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_14->mLongLong=self->mLongLong;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_14->mConstant=self->mConstant;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_14->mRegister=self->mRegister;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_14->mVolatile=self->mVolatile;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_14->mStatic=self->mStatic;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_14->mExtern=self->mExtern;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_14->mRestrict=self->mRestrict;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_14->mImmutable=self->mImmutable;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_14->mHeap=self->mHeap;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_14->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_14->mDelegate=self->mDelegate;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_14->mShare=self->mShare;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_14->mClone=self->mClone;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_14->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_14->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_14->mRefference=self->mRefference;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_14->mException=self->mException;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_14->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_14->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_14->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional86=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional86) {
            __dec_obj34=result_14->mSizeNum;
            result_14->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=sNode_clone(self->mSizeNum))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value77) { right_value77 = come_decrement_ref_count2(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_14->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_14->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional89=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional89) {
            __dec_obj35=result_14->mOriginalTypeName;
            result_14->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value78=string_clone(self->mOriginalTypeName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_14->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_14->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_14->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_14->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_14->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_14->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_14->mInline=self->mInline;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_14->mNullValue=self->mNullValue;
        }
        if(_if_conditional98=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional98) {
            __dec_obj36=result_14->mAsmName;
            result_14->mAsmName=(char*)come_increment_ref_count(((char*)(right_value79=string_clone(self->mAsmName))));
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            result_14->mArrayPointerType=self->mArrayPointerType;
        }
        __result44__ = __result_obj__ = result_14;
        come_call_finalizer2(sType_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result44__;
        come_call_finalizer2(sType_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional31;
struct list$1sTypeph* __result28__;
void* right_value46;
void* right_value47;
struct list$1sTypeph* result_15;
struct list_item$1sTypeph* it_16;
_Bool _while_condtional4;
void* right_value51;
struct list$1sTypeph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value47 = (void*)0;
memset(&result_15, 0, sizeof(struct list$1sTypeph*));
memset(&it_16, 0, sizeof(struct list_item$1sTypeph*));
right_value51 = (void*)0;
                if(_if_conditional31=self==((void*)0),                _if_conditional31) {
                    __result28__ = __result_obj__ = ((void*)0);
                    return __result28__;
                }
                result_15=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value47=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value46=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_16=self->head;
                while(_while_condtional4=it_16!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_15,(struct sType*)come_increment_ref_count(((struct sType*)(right_value51=sType_clone(it_16->item)))));
                    come_call_finalizer2(sType_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_16=it_16->next;
                }
                __result31__ = __result_obj__ = result_15;
                come_call_finalizer2(list$1sTypephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result31__;
                come_call_finalizer2(list$1sTypephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result29__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result29__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional32;
void* right_value48;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj14;
_Bool _if_conditional33;
void* right_value49;
struct list_item$1sTypeph* litem_18;
struct sType* __dec_obj15;
void* right_value50;
struct list_item$1sTypeph* litem_19;
struct sType* __dec_obj16;
struct list$1sTypeph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
right_value49 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1sTypeph*));
right_value50 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional32=self->len==0,                        _if_conditional32) {
                            litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value48=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_17->prev=((void*)0);
                            litem_17->next=((void*)0);
                            __dec_obj14=litem_17->item;
                            litem_17->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_17;
                            self->head=litem_17;
                        }
                        else {
                            if(_if_conditional33=self->len==1,                            _if_conditional33) {
                                litem_18=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value49=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_18->prev=self->head;
                                litem_18->next=((void*)0);
                                __dec_obj15=litem_18->item;
                                litem_18->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_18;
                                self->head->next=litem_18;
                            }
                            else {
                                litem_19=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value50=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_19->prev=self->tail;
                                litem_19->next=((void*)0);
                                __dec_obj16=litem_19->item;
                                litem_19->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_19;
                                self->tail=litem_19;
                            }
                        }
                        self->len++;
                        __result30__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result30__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional35;
struct tuple1$1sTypeph* __result32__;
void* right_value53;
struct tuple1$1sTypeph* result_20;
_Bool _if_conditional37;
void* right_value54;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&result_20, 0, sizeof(struct tuple1$1sTypeph*));
right_value54 = (void*)0;
                if(_if_conditional35=self==(void*)0,                _if_conditional35) {
                    __result32__ = __result_obj__ = (void*)0;
                    return __result32__;
                }
                result_20=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value53=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional37=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional37) {
                    __dec_obj18=result_20->v1;
                    result_20->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result33__ = __result_obj__ = result_20;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result33__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list$1sNodeph* __result34__;
void* right_value59;
void* right_value60;
struct list$1sNodeph* result_21;
struct list_item$1sNodeph* it_22;
_Bool _while_condtional5;
void* right_value65;
struct list$1sNodeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
right_value60 = (void*)0;
memset(&result_21, 0, sizeof(struct list$1sNodeph*));
memset(&it_22, 0, sizeof(struct list_item$1sNodeph*));
right_value65 = (void*)0;
                if(_if_conditional42=self==((void*)0),                _if_conditional42) {
                    __result34__ = __result_obj__ = ((void*)0);
                    return __result34__;
                }
                result_21=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value60=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value59=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_22=self->head;
                while(_while_condtional5=it_22!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_21,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value65=sNode_clone(it_22->item)))));
                    if(right_value65) { right_value65 = come_decrement_ref_count2(right_value65, ((struct sNode*)right_value65)->finalize, ((struct sNode*)right_value65)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_22=it_22->next;
                }
                __result39__ = __result_obj__ = result_21;
                come_call_finalizer2(list$1sNodephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result39__;
                come_call_finalizer2(list$1sNodephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result35__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result35__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional43;
void* right_value61;
struct list_item$1sNodeph* litem_23;
struct sNode* __dec_obj23;
_Bool _if_conditional44;
void* right_value62;
struct list_item$1sNodeph* litem_24;
struct sNode* __dec_obj24;
void* right_value63;
struct list_item$1sNodeph* litem_25;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1sNodeph*));
right_value62 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1sNodeph*));
right_value63 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional43=self->len==0,                        _if_conditional43) {
                            litem_23=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value61=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_23->prev=((void*)0);
                            litem_23->next=((void*)0);
                            __dec_obj23=litem_23->item;
                            litem_23->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_23;
                            self->head=litem_23;
                        }
                        else {
                            if(_if_conditional44=self->len==1,                            _if_conditional44) {
                                litem_24=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value62=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_24->prev=self->head;
                                litem_24->next=((void*)0);
                                __dec_obj24=litem_24->item;
                                litem_24->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_24;
                                self->head->next=litem_24;
                            }
                            else {
                                litem_25=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value63=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_25->prev=self->tail;
                                litem_25->next=((void*)0);
                                __dec_obj25=litem_25->item;
                                litem_25->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_25;
                                self->tail=litem_25;
                            }
                        }
                        self->len++;
                        __result36__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result36__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional45;
struct sNode* __result37__;
void* right_value64;
struct sNode* result_26;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
struct sNode* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
memset(&result_26, 0, sizeof(struct sNode*));
                        if(_if_conditional45=self==(void*)0,                        _if_conditional45) {
                            __result37__ = __result_obj__ = (void*)0;
                            return __result37__;
                        }
                        result_26=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value64=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value64) { right_value64 = come_decrement_ref_count2(right_value64, ((struct sNode*)right_value64)->finalize, ((struct sNode*)right_value64)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional46=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional46) {
                            result_26->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_26->finalize=self->finalize;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_26->clone=self->clone;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_26->compile=self->compile;
                        }
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            result_26->sline=self->sline;
                        }
                        if(_if_conditional51=self!=((void*)0),                        _if_conditional51) {
                            result_26->sname=self->sname;
                        }
                        if(_if_conditional52=self!=((void*)0),                        _if_conditional52) {
                            result_26->terminated=self->terminated;
                        }
                        if(_if_conditional53=self!=((void*)0),                        _if_conditional53) {
                            result_26->kind=self->kind;
                        }
                        __result38__ = __result_obj__ = result_26;
                        if(result_26) { result_26 = come_decrement_ref_count2(result_26, ((struct sNode*)result_26)->finalize, ((struct sNode*)result_26)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result38__;
                        if(result_26) { result_26 = come_decrement_ref_count2(result_26, ((struct sNode*)result_26)->finalize, ((struct sNode*)result_26)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional57;
struct list$1charph* __result40__;
void* right_value68;
void* right_value69;
struct list$1charph* result_27;
struct list_item$1charph* it_28;
_Bool _while_condtional6;
void* right_value73;
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
right_value69 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1charph*));
memset(&it_28, 0, sizeof(struct list_item$1charph*));
right_value73 = (void*)0;
                if(_if_conditional57=self==((void*)0),                _if_conditional57) {
                    __result40__ = __result_obj__ = ((void*)0);
                    return __result40__;
                }
                result_27=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value69=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value68=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_28=self->head;
                while(_while_condtional6=it_28!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_27,(char*)come_increment_ref_count(((char*)(right_value73=string_clone(it_28->item)))));
                    right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_28=it_28->next;
                }
                __result43__ = __result_obj__ = result_27;
                come_call_finalizer2(list$1charphp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result43__;
                come_call_finalizer2(list$1charphp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result41__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result41__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional58;
void* right_value70;
struct list_item$1charph* litem_29;
char* __dec_obj28;
_Bool _if_conditional59;
void* right_value71;
struct list_item$1charph* litem_30;
char* __dec_obj29;
void* right_value72;
struct list_item$1charph* litem_31;
char* __dec_obj30;
struct list$1charph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1charph*));
right_value71 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1charph*));
right_value72 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional58=self->len==0,                        _if_conditional58) {
                            litem_29=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value70=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_29->prev=((void*)0);
                            litem_29->next=((void*)0);
                            __dec_obj28=litem_29->item;
                            litem_29->item=(char*)come_increment_ref_count(item);
                            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_29;
                            self->head=litem_29;
                        }
                        else {
                            if(_if_conditional59=self->len==1,                            _if_conditional59) {
                                litem_30=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value71=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_30->prev=self->head;
                                litem_30->next=((void*)0);
                                __dec_obj29=litem_30->item;
                                litem_30->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_30;
                                self->head->next=litem_30;
                            }
                            else {
                                litem_31=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value72=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_31->prev=self->tail;
                                litem_31->next=((void*)0);
                                __dec_obj30=litem_31->item;
                                litem_31->item=(char*)come_increment_ref_count(item);
                                __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_31;
                                self->tail=litem_31;
                            }
                        }
                        self->len++;
                        __result42__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result42__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional100;
void* right_value81;
struct list_item$1CVALUEph* litem_32;
struct CVALUE* __dec_obj38;
_Bool _if_conditional102;
void* right_value82;
struct list_item$1CVALUEph* litem_33;
struct CVALUE* __dec_obj39;
void* right_value83;
struct list_item$1CVALUEph* litem_34;
struct CVALUE* __dec_obj40;
struct list$1CVALUEph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1CVALUEph*));
right_value82 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1CVALUEph*));
right_value83 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional100=self->len==0,        _if_conditional100) {
            litem_32=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value81=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_32->prev=((void*)0);
            litem_32->next=((void*)0);
            __dec_obj38=litem_32->item;
            litem_32->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_32;
            self->head=litem_32;
        }
        else {
            if(_if_conditional102=self->len==1,            _if_conditional102) {
                litem_33=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value82=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_33->prev=self->head;
                litem_33->next=((void*)0);
                __dec_obj39=litem_33->item;
                litem_33->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_33;
                self->head->next=litem_33;
            }
            else {
                litem_34=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value83=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_34->prev=self->tail;
                litem_34->next=((void*)0);
                __dec_obj40=litem_34->item;
                litem_34->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_34;
                self->tail=litem_34;
            }
        }
        self->len++;
        __result45__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result45__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional101;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional101=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional101) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
struct sFun* __dec_obj41;
char* __dec_obj42;
struct sFunNode* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj41=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer2(sFun_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj42=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result47__ = __result_obj__ = self;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result47__;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional103=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional103) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional104=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional104) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional105=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional105) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional106=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional106) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional107=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional107) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional108=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional108) {
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional109=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional109) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional112=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional112) {
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional113=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional113) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional114=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional114) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional115=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional115) {
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional116=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional116) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional117=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional117) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional110;
_Bool _if_conditional111;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional110=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional110) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional111=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional111) {
                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

int sFunNode_sline(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    __result48__ = self->sline;
    return __result48__;
}

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value84;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
    __result49__ = __result_obj__ = ((char*)(right_value84=__builtin_string(self->sname)));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}

_Bool sFunNode_terminated(){
void* __result_obj__;
_Bool __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    __result50__ = (_Bool)0;
    return __result50__;
}

char* sFunNode_kind(){
void* __result_obj__;
void* right_value85;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
    __result51__ = __result_obj__ = ((char*)(right_value85=__builtin_string("sFunNode")));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
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
void* right_value86;
char* __dec_obj43;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value87;
void* right_value88;
struct sType* result_type_37;
void* right_value89;
void* right_value90;
_Bool _if_conditional122;
void* right_value91;
char* __dec_obj44;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_35, 0, sizeof(struct sFun*));
memset(&come_fun_name_36, 0, sizeof(char*));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&result_type_37, 0, sizeof(struct sType*));
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
    come_fun_35=info->come_fun;
    info->come_fun=self->mFun;
    caller_begin(info);
    come_fun_name_36=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj43=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(((char*)(right_value86=__builtin_string(info->come_fun->mName))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        if(_if_conditional121=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional121) {
            add_come_code(info,"come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_37=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value87=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 132, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value89=make_define_var(result_type_37,"__result_obj__",(_Bool)0,info))));
        right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value90=make_type_name_string(result_type_37,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        if(_if_conditional122=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional122) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value91=xsprintf("come_heap_final();\n"))));
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(sType_finalize,result_type_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    caller_end(info);
    info->come_fun=come_fun_35;
    __dec_obj44=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_36);
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result52__ = (_Bool)1;
    come_fun_name_36 = come_decrement_ref_count2(come_fun_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result52__;
    come_fun_name_36 = come_decrement_ref_count2(come_fun_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value92;
void* right_value93;
struct list$1sNodeph* __dec_obj45;
struct sBlock* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
right_value93 = (void*)0;
    __dec_obj45=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value92=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function2.c", 154, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result53__ = __result_obj__ = self;
    come_call_finalizer2(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result53__;
    come_call_finalizer2(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
void* right_value94;
struct sType* __dec_obj46;
void* right_value95;
struct list$1charph* __dec_obj47;
void* right_value96;
struct list$1charph* __dec_obj48;
char* __dec_obj49;
struct sType* __dec_obj50;
struct list$1sTypeph* __dec_obj51;
struct list$1charph* __dec_obj52;
struct list$1charph* __dec_obj53;
char* __dec_obj54;
void* right_value97;
char* __dec_obj55;
struct sGenericsFun* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
    __dec_obj46=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(impl_type))));
    come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value95=list$1charphp_clone(generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj48=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value96=list$1charphp_clone(method_generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj49=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj50=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj51=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj52=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer2(list$1charph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj53=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer2(list$1charph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj54=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj55=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value97=__builtin_string(generics_sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mGenericsSLine=generics_sline;
    __result54__ = __result_obj__ = self;
    come_call_finalizer2(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result54__;
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
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional123=self!=((void*)0)&&self->mImplType!=((void*)0),        _if_conditional123) {
            come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional124=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),        _if_conditional124) {
            come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional125=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),        _if_conditional125) {
            come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional126=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional126) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional127=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional127) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional128=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional128) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional129=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional129) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional130=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional130) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional131=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional131) {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional132=self!=((void*)0)&&self->mGenericsSName!=((void*)0),        _if_conditional132) {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level){
void* __result_obj__;
void* right_value98;
void* right_value99;
struct sBlock* result_38;
int block_level_39;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _while_condtional7;
_Bool _if_conditional135;
int sline_40;
char* sname_41;
void* right_value100;
struct sNode* node_42;
void* right_value101;
char* __dec_obj56;
_Bool _if_conditional136;
_Bool _if_conditional139;
_Bool _while_condtional8;
_Bool _if_conditional140;
void* right_value105;
struct sNode* node_46;
_Bool _if_conditional141;
struct sBlock* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&result_38, 0, sizeof(struct sBlock*));
memset(&block_level_39, 0, sizeof(int));
memset(&sline_40, 0, sizeof(int));
memset(&sname_41, 0, sizeof(char*));
right_value100 = (void*)0;
memset(&node_42, 0, sizeof(struct sNode*));
right_value101 = (void*)0;
right_value105 = (void*)0;
memset(&node_46, 0, sizeof(struct sNode*));
    result_38=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value99=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value98=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function2.c", 184, "sBlock")))),info))));
    come_call_finalizer2(sBlock_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sBlock_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    block_level_39=info->block_level;
    if(_if_conditional133=!no_block_level,    _if_conditional133) {
        info->block_level++;
    }
    if(_if_conditional134=*info->p==123,    _if_conditional134) {
        info->p++;
        skip_spaces_and_lf(info);
        while(_while_condtional7=(_Bool)1,        _while_condtional7) {
            parse_sharp_v5(info);
            if(_if_conditional135=*info->p==125,            _if_conditional135) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            sline_40=info->sline;
            sname_41=info->sname;
            node_42=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=statment(info))));
            if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj56=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value101=node_42->sname(node_42->_protocol_obj))));
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline=node_42->sline(node_42->_protocol_obj);
            if(_if_conditional136=node_42==((void*)0),            _if_conditional136) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_38->mNodes,(struct sNode*)come_increment_ref_count(node_42));
            parse_sharp_v5(info);
            if(_if_conditional139=node_42->terminated(node_42->_protocol_obj),            _if_conditional139) {
                skip_spaces_and_lf(info);
            }
            while(_while_condtional8=*info->p==59,            _while_condtional8) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(_if_conditional140=*info->p==125,            _if_conditional140) {
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
        node_46=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=expression_v13(info))));
        if(right_value105) { right_value105 = come_decrement_ref_count2(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        if(_if_conditional141=node_46==((void*)0),        _if_conditional141) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_38->mNodes,(struct sNode*)come_increment_ref_count(node_46));
        if(node_46) { node_46 = come_decrement_ref_count2(node_46, ((struct sNode*)node_46)->finalize, ((struct sNode*)node_46)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_39;
    __result56__ = __result_obj__ = result_38;
    come_call_finalizer2(sBlock_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result56__;
    come_call_finalizer2(sBlock_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional137;
void* right_value102;
struct list_item$1sNodeph* litem_43;
struct sNode* __dec_obj57;
_Bool _if_conditional138;
void* right_value103;
struct list_item$1sNodeph* litem_44;
struct sNode* __dec_obj58;
void* right_value104;
struct list_item$1sNodeph* litem_45;
struct sNode* __dec_obj59;
struct list$1sNodeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1sNodeph*));
right_value103 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1sNodeph*));
right_value104 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional137=self->len==0,                _if_conditional137) {
                    litem_43=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value102=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_43->prev=((void*)0);
                    litem_43->next=((void*)0);
                    __dec_obj57=litem_43->item;
                    litem_43->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_43;
                    self->head=litem_43;
                }
                else {
                    if(_if_conditional138=self->len==1,                    _if_conditional138) {
                        litem_44=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 236, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_44->prev=self->head;
                        litem_44->next=((void*)0);
                        __dec_obj58=litem_44->item;
                        litem_44->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_44;
                        self->head->next=litem_44;
                    }
                    else {
                        litem_45=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value104=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 246, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_45->prev=self->tail;
                        litem_45->next=((void*)0);
                        __dec_obj59=litem_45->item;
                        litem_45->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_45;
                        self->tail=litem_45;
                    }
                }
                self->len++;
                __result55__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result55__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
void* __result_obj__;
_Bool _if_conditional142;
int __result57__;
struct sVarTable* old_table_47;
_Bool _if_conditional143;
void* right_value106;
void* right_value107;
struct sVarTable* __dec_obj60;
struct sVarTable* current_loop_vtable_48;
_Bool _if_conditional144;
struct list$1sTypeph* param_types__49;
struct list$1charph* param_names__50;
_Bool _if_conditional145;
int i_51;
struct list$1charph* o2_saved_52;
char* name_55;
void* right_value108;
struct sType* type_61;
void* right_value109;
int block_level_62;
_Bool _if_conditional152;
_Bool _if_conditional153;
int i_63;
struct list$1sNodeph* o2_saved_64;
struct sNode* node_67;
struct list$1sRightValueObjectph* right_value_objects_70;
void* right_value110;
void* right_value111;
struct list$1sRightValueObjectph* __dec_obj61;
char* __dec_obj62;
char* __dec_obj63;
char* __dec_obj64;
int stack_num_before_73;
int sline_74;
void* right_value112;
char* sname_75;
void* right_value113;
char* __dec_obj65;
_Bool _if_conditional162;
void* right_value114;
char* __dec_obj66;
struct list$1sRightValueObjectph* __dec_obj67;
_Bool _if_conditional163;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_table_47, 0, sizeof(struct sVarTable*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&current_loop_vtable_48, 0, sizeof(struct sVarTable*));
memset(&param_types__49, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__50, 0, sizeof(struct list$1charph*));
memset(&i_51, 0, sizeof(int));
memset(&o2_saved_52, 0, sizeof(struct list$1charph*));
memset(&name_55, 0, sizeof(char*));
right_value108 = (void*)0;
memset(&type_61, 0, sizeof(struct sType*));
right_value109 = (void*)0;
memset(&block_level_62, 0, sizeof(int));
memset(&i_63, 0, sizeof(int));
memset(&o2_saved_64, 0, sizeof(struct list$1sNodeph*));
memset(&node_67, 0, sizeof(struct sNode*));
memset(&right_value_objects_70, 0, sizeof(struct list$1sRightValueObjectph*));
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&stack_num_before_73, 0, sizeof(int));
memset(&sline_74, 0, sizeof(int));
right_value112 = (void*)0;
memset(&sname_75, 0, sizeof(char*));
right_value113 = (void*)0;
right_value114 = (void*)0;
    if(info->output_header_file) {
        __result57__ = 0;
        return __result57__;
    }
    old_table_47=info->lv_table;
    if(_if_conditional143=!no_var_table,    _if_conditional143) {
        __dec_obj60=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value107=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value106=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function2.c", 268, "sVarTable")))),(_Bool)0,old_table_47))));
        come_call_finalizer2(sVarTable_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sVarTable_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sVarTable_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    if(_if_conditional145=param_types&&param_names,    _if_conditional145) {
        for(        o2_saved_52=(param_names),name_55=list$1charph_begin((o2_saved_52));        !list$1charph_end((o2_saved_52));        name_55=list$1charph_next((o2_saved_52))        ){
            type_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_clone(list$1sTypephp_operator_load_element(param_types,i_51)))));
            come_call_finalizer2(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_61->mFunctionParam=(_Bool)1;
            type_61->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_55,(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(type_61)))),info);
            come_call_finalizer2(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            i_51++;
            come_call_finalizer2(sType_finalize,type_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_62=info->block_level;
    if(_if_conditional152=!no_var_table,    _if_conditional152) {
        info->block_level++;
    }
    if(_if_conditional153=list$1sNodeph_length(block->mNodes)==0,    _if_conditional153) {
    }
    else {
        for(        o2_saved_64=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_67=list$1sNodeph_begin((o2_saved_64));        !list$1sNodeph_end((o2_saved_64));        node_67=list$1sNodeph_next((o2_saved_64))        ){
            right_value_objects_70=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj61=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value111=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value110=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function2.c", 305, "list$1sRightValueObjectph"))))))));
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj62=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj63=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj64=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_73=list$1CVALUEph_length(info->stack);
            sline_74=info->sline;
            sname_75=(char*)come_increment_ref_count(((char*)(right_value112=__builtin_string(info->sname))));
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_67->sline(node_67->_protocol_obj);
            __dec_obj65=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value113=node_67->sname(node_67->_protocol_obj))));
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->writing_source_file_position=(_Bool)1;
            if(_if_conditional162=!node_compile(node_67,info),            _if_conditional162) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_74;
            __dec_obj66=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string(sname_75))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_73);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj67=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_70);
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value_objects_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            sname_75 = come_decrement_ref_count2(sname_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional163=!no_var_table,    _if_conditional163) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_47;
    info->block_level=block_level_62;
    info->param_types=param_types__49;
    info->param_names=param_names__50;
    info->current_loop_vtable=current_loop_vtable_48;
    __result78__ = 0;
    return __result78__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional146;
char* result_53;
char* __result58__;
_Bool _if_conditional147;
char* __result59__;
char* result_54;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_53, 0, sizeof(char*));
memset(&result_54, 0, sizeof(char*));
            if(_if_conditional146=self==((void*)0),            _if_conditional146) {
                memset(&result_53,0,sizeof(char*));
                __result58__ = __result_obj__ = result_53;
                return __result58__;
            }
            self->it=self->head;
            if(self->it) {
                __result59__ = __result_obj__ = self->it->item;
                return __result59__;
            }
            memset(&result_54,0,sizeof(char*));
            __result60__ = __result_obj__ = result_54;
            return __result60__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
            __result61__ = self==((void*)0)||self->it==((void*)0);
            return __result61__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional148;
char* result_56;
char* __result62__;
_Bool _if_conditional149;
char* __result63__;
char* result_57;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_56, 0, sizeof(char*));
memset(&result_57, 0, sizeof(char*));
            if(_if_conditional148=self==((void*)0)||self->it==((void*)0),            _if_conditional148) {
                memset(&result_56,0,sizeof(char*));
                __result62__ = __result_obj__ = result_56;
                return __result62__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result63__ = __result_obj__ = self->it->item;
                return __result63__;
            }
            memset(&result_57,0,sizeof(char*));
            __result64__ = __result_obj__ = result_57;
            return __result64__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional150;
struct list_item$1sTypeph* it_58;
int i_59;
_Bool _while_condtional9;
_Bool _if_conditional151;
struct sType* __result65__;
struct sType* default_value_60;
struct sType* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_59, 0, sizeof(int));
memset(&default_value_60, 0, sizeof(struct sType*));
                if(_if_conditional150=position<0,                _if_conditional150) {
                    position+=self->len;
                }
                it_58=self->head;
                i_59=0;
                while(_while_condtional9=it_58!=((void*)0),                _while_condtional9) {
                    if(_if_conditional151=position==i_59,                    _if_conditional151) {
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

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional154;
struct sNode* result_65;
struct sNode* __result68__;
_Bool _if_conditional155;
struct sNode* __result69__;
struct sNode* result_66;
struct sNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct sNode*));
memset(&result_66, 0, sizeof(struct sNode*));
            if(_if_conditional154=self==((void*)0),            _if_conditional154) {
                memset(&result_65,0,sizeof(struct sNode*));
                __result68__ = __result_obj__ = result_65;
                return __result68__;
            }
            self->it=self->head;
            if(self->it) {
                __result69__ = __result_obj__ = self->it->item;
                return __result69__;
            }
            memset(&result_66,0,sizeof(struct sNode*));
            __result70__ = __result_obj__ = result_66;
            return __result70__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
            __result71__ = self==((void*)0)||self->it==((void*)0);
            return __result71__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional156;
struct sNode* result_68;
struct sNode* __result72__;
_Bool _if_conditional157;
struct sNode* __result73__;
struct sNode* result_69;
struct sNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct sNode*));
memset(&result_69, 0, sizeof(struct sNode*));
            if(_if_conditional156=self==((void*)0)||self->it==((void*)0),            _if_conditional156) {
                memset(&result_68,0,sizeof(struct sNode*));
                __result72__ = __result_obj__ = result_68;
                return __result72__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result73__ = __result_obj__ = self->it->item;
                return __result73__;
            }
            memset(&result_69,0,sizeof(struct sNode*));
            __result74__ = __result_obj__ = result_69;
            return __result74__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result75__ = __result_obj__ = self;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result75__;
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
_Bool _if_conditional158;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional158=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional158) {
                                come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional159=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional159) {
                                        come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional160=self!=((void*)0)&&self->mVarName!=((void*)0),                                    _if_conditional160) {
                                        self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional161=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional161) {
                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result76__;
memset(&__result_obj__, 0, sizeof(void*));
                __result76__ = self->len;
                return __result76__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_76;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_77;
struct list$1sRightValueObjectph* __result77__;
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
                __result77__ = __result_obj__ = self;
                return __result77__;
}

void arrange_stack(struct sInfo* info, int top){
void* __result_obj__;
_Bool _if_conditional164;
_Bool _if_conditional165;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional164=list$1CVALUEph_length(info->stack)>top,    _if_conditional164) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(_if_conditional165=list$1CVALUEph_length(info->stack)<top,    _if_conditional165) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional166;
_Bool _if_conditional167;
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    parse_sharp_v5(info);
    if(_if_conditional166=*info->p!=c,    _if_conditional166) {
        if(_if_conditional167=!info->no_output_err,        _if_conditional167) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    __result79__ = 0;
    return __result79__;
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
char* head_78;
_Bool _if_conditional168;
_Bool dquort_79;
_Bool squort_80;
int sline_81;
int nest_82;
_Bool _while_condtional12;
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
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
char* tail_83;
void* right_value115;
char* buf_84;
void* right_value116;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_78, 0, sizeof(char*));
memset(&dquort_79, 0, sizeof(_Bool));
memset(&squort_80, 0, sizeof(_Bool));
memset(&sline_81, 0, sizeof(int));
memset(&nest_82, 0, sizeof(int));
memset(&tail_83, 0, sizeof(char*));
right_value115 = (void*)0;
memset(&buf_84, 0, sizeof(char*));
right_value116 = (void*)0;
    head_78=info->p;
    if(_if_conditional168=*info->p==123,    _if_conditional168) {
        info->p++;
        dquort_79=(_Bool)0;
        squort_80=(_Bool)0;
        sline_81=0;
        nest_82=0;
        while(_while_condtional12=1,        _while_condtional12) {
            if(dquort_79) {
                if(_if_conditional170=*info->p==92,                _if_conditional170) {
                    info->p++;
                    if(_if_conditional171=*info->p==0,                    _if_conditional171) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                        exit(2);
                    }
                    info->p++;
                }
                else {
                    if(_if_conditional172=*info->p==34,                    _if_conditional172) {
                        info->p++;
                        dquort_79=!dquort_79;
                    }
                    else {
                        info->p++;
                        if(_if_conditional173=*info->p==0,                        _if_conditional173) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                            exit(2);
                        }
                    }
                }
            }
            else {
                if(squort_80) {
                    if(_if_conditional175=*info->p==92,                    _if_conditional175) {
                        info->p++;
                        if(_if_conditional176=*info->p==0,                        _if_conditional176) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                            exit(2);
                        }
                        info->p++;
                    }
                    else {
                        if(_if_conditional177=*info->p==39,                        _if_conditional177) {
                            info->p++;
                            squort_80=!squort_80;
                        }
                        else {
                            info->p++;
                            if(_if_conditional178=*info->p==0,                            _if_conditional178) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional179=*info->p==39,                    _if_conditional179) {
                        sline_81=info->sline;
                        info->p++;
                        squort_80=!squort_80;
                    }
                    else {
                        if(_if_conditional180=*info->p==34,                        _if_conditional180) {
                            sline_81=info->sline;
                            info->p++;
                            dquort_79=!dquort_79;
                        }
                        else {
                            if(_if_conditional181=*info->p==35,                            _if_conditional181) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(_if_conditional182=*info->p==123,                                _if_conditional182) {
                                    info->p++;
                                    nest_82++;
                                }
                                else {
                                    if(_if_conditional183=*info->p==125,                                    _if_conditional183) {
                                        info->p++;
                                        if(_if_conditional184=nest_82==0,                                        _if_conditional184) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_82--;
                                    }
                                    else {
                                        if(_if_conditional185=*info->p==0,                                        _if_conditional185) {
                                            err_msg(info,"The block requires } character for closing block");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional186=*info->p==10,                                            _if_conditional186) {
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
    buf_84=(char*)come_increment_ref_count(((char*)(right_value115=(char*)come_calloc(1, sizeof(char)*(1*(tail_83-head_78+1)), "05function2.c", 488, "char"))));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(buf_84,head_78,tail_83-head_78);
    buf_84[tail_83-head_78]=0;
    __result80__ = __result_obj__ = ((char*)(right_value116=__builtin_string(buf_84)));
    buf_84 = come_decrement_ref_count2(buf_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result80__;
    buf_84 = come_decrement_ref_count2(buf_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
void* __result_obj__;
_Bool terminated_85;
char* p3_86;
int i_87;
_Bool _if_conditional187;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&terminated_85, 0, sizeof(_Bool));
memset(&p3_86, 0, sizeof(char*));
memset(&i_87, 0, sizeof(int));
    terminated_85=(_Bool)0;
    p3_86=p;
    for(    i_87=0;    i_87<strlen(p2);    i_87++    ){
        if(_if_conditional187=*p3_86==0,        _if_conditional187) {
            terminated_85=(_Bool)1;
            break;
        }
        p3_86++;
    }
    __result81__ = !terminated_85&&memcmp(p,p2,strlen(p2))==0;
    return __result81__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
void* right_value117;
void* right_value118;
struct buffer* asm_fun_name_88;
_Bool _while_condtional13;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
int brace_num_89;
_Bool _while_condtional14;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
int len_90;
_Bool in_dquort_91;
int brace_num_92;
_Bool _while_condtional15;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
int brace_num_93;
_Bool _while_condtional16;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value119;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&asm_fun_name_88, 0, sizeof(struct buffer*));
memset(&brace_num_89, 0, sizeof(int));
memset(&len_90, 0, sizeof(int));
memset(&in_dquort_91, 0, sizeof(_Bool));
memset(&brace_num_92, 0, sizeof(int));
memset(&brace_num_93, 0, sizeof(int));
right_value119 = (void*)0;
    asm_fun_name_88=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value118=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value117=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 511, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional13=(_Bool)1,    _while_condtional13) {
        if(_if_conditional188=strmemcmp(info->p,"__attribute_pure__"),        _if_conditional188) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional189=strmemcmp(info->p,"__attribute_malloc__"),            _if_conditional189) {
                info->p+=strlen("__attribute_malloc__");
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional190=strmemcmp(info->p,"__attr_dealloc_fclose"),                _if_conditional190) {
                    info->p+=strlen("__attr_dealloc_fclose");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(_if_conditional191=strmemcmp(info->p,"__wur"),                    _if_conditional191) {
                        info->p+=strlen("__wur");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional192=strmemcmp(info->p,"__noreturn"),                        _if_conditional192) {
                            info->p+=strlen("__noreturn");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(_if_conditional193=strmemcmp(info->p,"__attribute__"),                            _if_conditional193) {
                                info->p+=strlen("__attribute__");
                                skip_spaces_and_lf(info);
                                brace_num_89=0;
                                while(_while_condtional14=*info->p,                                _while_condtional14) {
                                    if(_if_conditional194=*info->p==40,                                    _if_conditional194) {
                                        info->p++;
                                        brace_num_89++;
                                    }
                                    else {
                                        if(_if_conditional195=*info->p==41,                                        _if_conditional195) {
                                            info->p++;
                                            brace_num_89--;
                                            if(_if_conditional196=brace_num_89==0,                                            _if_conditional196) {
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
                                if(_if_conditional197=strmemcmp(info->p,"__asm__"),                                _if_conditional197) {
                                    info->p+=strlen("__asm__");
                                    skip_spaces_and_lf(info);
                                    len_90=0;
                                    in_dquort_91=(_Bool)0;
                                    brace_num_92=0;
                                    while(_while_condtional15=*info->p,                                    _while_condtional15) {
                                        if(_if_conditional198=*info->p==34,                                        _if_conditional198) {
                                            info->p++;
                                            in_dquort_91=!in_dquort_91;
                                        }
                                        else {
                                            if(in_dquort_91) {
                                                buffer_append_char(asm_fun_name_88,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional200=*info->p==40,                                                _if_conditional200) {
                                                    info->p++;
                                                    brace_num_92++;
                                                }
                                                else {
                                                    if(_if_conditional201=*info->p==41,                                                    _if_conditional201) {
                                                        info->p++;
                                                        brace_num_92--;
                                                        if(_if_conditional202=brace_num_92==0,                                                        _if_conditional202) {
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
                                    if(_if_conditional203=strmemcmp(info->p,"__asm"),                                    _if_conditional203) {
                                        info->p+=strlen("__asm");
                                        skip_spaces_and_lf(info);
                                        brace_num_93=0;
                                        while(_while_condtional16=*info->p,                                        _while_condtional16) {
                                            if(_if_conditional204=*info->p==40,                                            _if_conditional204) {
                                                info->p++;
                                                brace_num_93++;
                                            }
                                            else {
                                                if(_if_conditional205=*info->p==41,                                                _if_conditional205) {
                                                    info->p++;
                                                    brace_num_93--;
                                                    if(_if_conditional206=brace_num_93==0,                                                    _if_conditional206) {
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
    __result82__ = __result_obj__ = ((char*)(right_value119=buffer_to_string(asm_fun_name_88)));
    come_call_finalizer2(buffer_finalize,asm_fun_name_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
    come_call_finalizer2(buffer_finalize,asm_fun_name_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional17;
char* head_94;
int head_sline_95;
void* right_value120;
char* buf_96;
_Bool _if_conditional207;
void* right_value121;
struct sNode* node_97;
_Bool _while_condtional18;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_94, 0, sizeof(char*));
memset(&head_sline_95, 0, sizeof(int));
right_value120 = (void*)0;
memset(&buf_96, 0, sizeof(char*));
right_value121 = (void*)0;
memset(&node_97, 0, sizeof(struct sNode*));
    while(_while_condtional17=*info->p,    _while_condtional17) {
        parse_sharp_v5(info);
        head_94=info->p;
        head_sline_95=info->sline;
        buf_96=(char*)come_increment_ref_count(((char*)(right_value120=parse_word(info))));
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional207=block&&*info->p==125,        _if_conditional207) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_96 = come_decrement_ref_count2(buf_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_97=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value121=top_level_v99(buf_96,head_94,head_sline_95,info))));
        if(right_value121) { right_value121 = come_decrement_ref_count2(right_value121, ((struct sNode*)right_value121)->finalize, ((struct sNode*)right_value121)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        while(_while_condtional18=*info->p==59,        _while_condtional18) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(_if_conditional208=node_97!=((void*)0),        _if_conditional208) {
            if(_if_conditional209=!node_compile(node_97,info),            _if_conditional209) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(_if_conditional210=block&&*info->p==125,        _if_conditional210) {
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
void* right_value122;
char* name_98;
void* right_value123;
void* right_value124;
struct sType* result_type_99;
void* right_value125;
void* right_value126;
void* right_value127;
void* right_value128;
void* right_value129;
void* right_value130;
void* right_value131;
void* right_value132;
void* right_value133;
void* right_value134;
struct sType* __list_values1___100[5];
void* right_value138;
void* right_value139;
struct list$1sTypeph* param_types_105;
void* right_value140;
void* right_value141;
void* right_value142;
void* right_value143;
void* right_value144;
char* __list_values2___106[5];
void* right_value148;
void* right_value149;
struct list$1charph* param_names_111;
void* right_value150;
void* right_value151;
struct list$1charph* param_default_parametors_112;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
void* right_value156;
void* right_value157;
void* right_value158;
struct sFun* main_fun_113;
void* right_value165;
void* right_value166;
char* name_158;
void* right_value167;
void* right_value168;
struct sType* result_type_159;
void* right_value169;
void* right_value170;
struct sType* __list_values3___160[1];
void* right_value171;
void* right_value172;
struct list$1sTypeph* param_types_161;
void* right_value173;
char* __list_values4___162[1];
void* right_value174;
void* right_value175;
struct list$1charph* param_names_163;
void* right_value176;
void* right_value177;
struct list$1charph* param_default_parametors_164;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
struct sFun* main_fun_165;
void* right_value182;
void* right_value183;
char* name_166;
void* right_value184;
void* right_value185;
struct sType* result_type_167;
void* right_value186;
void* right_value187;
void* right_value188;
void* right_value189;
void* right_value190;
void* right_value191;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
struct sType* __list_values5___168[7];
void* right_value200;
void* right_value201;
struct list$1sTypeph* param_types_169;
void* right_value202;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
char* __list_values6___170[7];
void* right_value209;
void* right_value210;
struct list$1charph* param_names_171;
void* right_value211;
void* right_value212;
struct list$1charph* param_default_parametors_172;
void* right_value213;
void* right_value214;
void* right_value215;
void* right_value216;
struct sFun* main_fun_173;
void* right_value217;
void* right_value218;
char* name_174;
void* right_value219;
void* right_value220;
struct sType* result_type_175;
void* right_value221;
void* right_value222;
void* right_value223;
void* right_value224;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
void* right_value229;
void* right_value230;
struct sType* __list_values7___176[5];
void* right_value231;
void* right_value232;
struct list$1sTypeph* param_types_177;
void* right_value233;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
char* __list_values8___178[5];
void* right_value238;
void* right_value239;
struct list$1charph* param_names_179;
void* right_value240;
void* right_value241;
struct list$1charph* param_default_parametors_180;
void* right_value242;
void* right_value243;
void* right_value244;
void* right_value245;
struct sFun* main_fun_181;
void* right_value246;
void* right_value247;
char* name_182;
void* right_value248;
void* right_value249;
struct sType* result_type_183;
void* right_value250;
void* right_value251;
struct sType* __list_values9___184[1];
void* right_value252;
void* right_value253;
struct list$1sTypeph* param_types_185;
void* right_value254;
char* __list_values10___186[1];
void* right_value255;
void* right_value256;
struct list$1charph* param_names_187;
void* right_value257;
void* right_value258;
struct list$1charph* param_default_parametors_188;
void* right_value259;
void* right_value260;
void* right_value261;
void* right_value262;
struct sFun* main_fun_189;
void* right_value263;
void* right_value264;
char* name_190;
void* right_value265;
void* right_value266;
struct sType* result_type_191;
void* right_value267;
void* right_value268;
void* right_value269;
void* right_value270;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
struct sType* __list_values11___192[4];
void* right_value275;
void* right_value276;
struct list$1sTypeph* param_types_193;
void* right_value277;
void* right_value278;
void* right_value279;
void* right_value280;
char* __list_values12___194[4];
void* right_value281;
void* right_value282;
struct list$1charph* param_names_195;
void* right_value283;
void* right_value284;
struct list$1charph* param_default_parametors_196;
void* right_value285;
void* right_value286;
void* right_value287;
void* right_value288;
void* right_value289;
void* right_value290;
void* right_value291;
struct sFun* main_fun_197;
void* right_value292;
void* right_value293;
char* name_198;
void* right_value294;
void* right_value295;
struct sType* result_type_199;
void* right_value296;
void* right_value297;
void* right_value298;
void* right_value299;
void* right_value300;
void* right_value301;
struct sType* __list_values13___200[3];
void* right_value302;
void* right_value303;
struct list$1sTypeph* param_types_201;
void* right_value304;
void* right_value305;
void* right_value306;
char* __list_values14___202[3];
void* right_value307;
void* right_value308;
struct list$1charph* param_names_203;
void* right_value309;
void* right_value310;
struct list$1charph* param_default_parametors_204;
void* right_value311;
void* right_value312;
void* right_value313;
void* right_value314;
struct sFun* main_fun_205;
void* right_value315;
void* right_value316;
char* name_206;
void* right_value317;
void* right_value318;
struct sType* result_type_207;
void* right_value319;
void* right_value320;
struct sType* __list_values15___208[1];
void* right_value321;
void* right_value322;
struct list$1sTypeph* param_types_209;
void* right_value323;
char* __list_values16___210[1];
void* right_value324;
void* right_value325;
struct list$1charph* param_names_211;
void* right_value326;
void* right_value327;
struct list$1charph* param_default_parametors_212;
void* right_value328;
void* right_value329;
void* right_value330;
void* right_value331;
struct sFun* main_fun_213;
void* right_value332;
void* right_value333;
char* name_214;
void* right_value334;
void* right_value335;
struct sType* result_type_215;
void* right_value336;
void* right_value337;
void* right_value338;
void* right_value339;
void* right_value340;
void* right_value341;
struct sType* __list_values17___216[3];
void* right_value342;
void* right_value343;
struct list$1sTypeph* param_types_217;
void* right_value344;
void* right_value345;
void* right_value346;
char* __list_values18___218[3];
void* right_value347;
void* right_value348;
struct list$1charph* param_names_219;
void* right_value349;
void* right_value350;
struct list$1charph* param_default_parametors_220;
void* right_value351;
void* right_value352;
void* right_value353;
void* right_value354;
struct sFun* main_fun_221;
void* right_value355;
void* right_value356;
char* name_222;
void* right_value357;
void* right_value358;
struct sType* result_type_223;
void* right_value359;
void* right_value360;
struct list$1sTypeph* param_types_224;
void* right_value361;
void* right_value362;
struct list$1charph* param_names_225;
void* right_value363;
void* right_value364;
struct list$1charph* param_default_parametors_226;
void* right_value365;
void* right_value366;
void* right_value367;
void* right_value368;
struct sFun* main_fun_227;
void* right_value369;
void* right_value370;
char* name_228;
void* right_value371;
void* right_value372;
struct sType* result_type_229;
void* right_value373;
void* right_value374;
void* right_value375;
void* right_value376;
void* right_value377;
void* right_value378;
void* right_value379;
void* right_value380;
struct sType* __list_values19___230[4];
void* right_value381;
void* right_value382;
struct list$1sTypeph* param_types_231;
void* right_value383;
void* right_value384;
void* right_value385;
void* right_value386;
char* __list_values20___232[4];
void* right_value387;
void* right_value388;
struct list$1charph* param_names_233;
void* right_value389;
void* right_value390;
struct list$1charph* param_default_parametors_234;
void* right_value391;
void* right_value392;
void* right_value393;
void* right_value394;
struct sFun* main_fun_235;
void* right_value395;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&name_98, 0, sizeof(char*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&result_type_99, 0, sizeof(struct sType*));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&param_types_105, 0, sizeof(struct list$1sTypeph*));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&param_names_111, 0, sizeof(struct list$1charph*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&param_default_parametors_112, 0, sizeof(struct list$1charph*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&main_fun_113, 0, sizeof(struct sFun*));
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&name_158, 0, sizeof(char*));
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&result_type_159, 0, sizeof(struct sType*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&param_types_161, 0, sizeof(struct list$1sTypeph*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&param_names_163, 0, sizeof(struct list$1charph*));
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&param_default_parametors_164, 0, sizeof(struct list$1charph*));
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&main_fun_165, 0, sizeof(struct sFun*));
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&name_166, 0, sizeof(char*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&result_type_167, 0, sizeof(struct sType*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&param_types_169, 0, sizeof(struct list$1sTypeph*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&param_names_171, 0, sizeof(struct list$1charph*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&param_default_parametors_172, 0, sizeof(struct list$1charph*));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&main_fun_173, 0, sizeof(struct sFun*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&name_174, 0, sizeof(char*));
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&result_type_175, 0, sizeof(struct sType*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&param_types_177, 0, sizeof(struct list$1sTypeph*));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&param_names_179, 0, sizeof(struct list$1charph*));
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&param_default_parametors_180, 0, sizeof(struct list$1charph*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&main_fun_181, 0, sizeof(struct sFun*));
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&name_182, 0, sizeof(char*));
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&result_type_183, 0, sizeof(struct sType*));
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&param_types_185, 0, sizeof(struct list$1sTypeph*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&param_names_187, 0, sizeof(struct list$1charph*));
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&param_default_parametors_188, 0, sizeof(struct list$1charph*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&main_fun_189, 0, sizeof(struct sFun*));
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&name_190, 0, sizeof(char*));
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&result_type_191, 0, sizeof(struct sType*));
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
memset(&param_types_193, 0, sizeof(struct list$1sTypeph*));
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&param_names_195, 0, sizeof(struct list$1charph*));
right_value283 = (void*)0;
right_value284 = (void*)0;
memset(&param_default_parametors_196, 0, sizeof(struct list$1charph*));
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&main_fun_197, 0, sizeof(struct sFun*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&name_198, 0, sizeof(char*));
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&result_type_199, 0, sizeof(struct sType*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
memset(&param_types_201, 0, sizeof(struct list$1sTypeph*));
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&param_names_203, 0, sizeof(struct list$1charph*));
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&param_default_parametors_204, 0, sizeof(struct list$1charph*));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&main_fun_205, 0, sizeof(struct sFun*));
right_value315 = (void*)0;
right_value316 = (void*)0;
memset(&name_206, 0, sizeof(char*));
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&result_type_207, 0, sizeof(struct sType*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&param_types_209, 0, sizeof(struct list$1sTypeph*));
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&param_names_211, 0, sizeof(struct list$1charph*));
right_value326 = (void*)0;
right_value327 = (void*)0;
memset(&param_default_parametors_212, 0, sizeof(struct list$1charph*));
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&main_fun_213, 0, sizeof(struct sFun*));
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&name_214, 0, sizeof(char*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&result_type_215, 0, sizeof(struct sType*));
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&param_types_217, 0, sizeof(struct list$1sTypeph*));
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
memset(&param_names_219, 0, sizeof(struct list$1charph*));
right_value349 = (void*)0;
right_value350 = (void*)0;
memset(&param_default_parametors_220, 0, sizeof(struct list$1charph*));
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
memset(&main_fun_221, 0, sizeof(struct sFun*));
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&name_222, 0, sizeof(char*));
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&result_type_223, 0, sizeof(struct sType*));
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&param_types_224, 0, sizeof(struct list$1sTypeph*));
right_value361 = (void*)0;
right_value362 = (void*)0;
memset(&param_names_225, 0, sizeof(struct list$1charph*));
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&param_default_parametors_226, 0, sizeof(struct list$1charph*));
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
memset(&main_fun_227, 0, sizeof(struct sFun*));
right_value369 = (void*)0;
right_value370 = (void*)0;
memset(&name_228, 0, sizeof(char*));
right_value371 = (void*)0;
right_value372 = (void*)0;
memset(&result_type_229, 0, sizeof(struct sType*));
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
memset(&param_types_231, 0, sizeof(struct list$1sTypeph*));
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
memset(&param_names_233, 0, sizeof(struct list$1charph*));
right_value389 = (void*)0;
right_value390 = (void*)0;
memset(&param_default_parametors_234, 0, sizeof(struct list$1charph*));
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&main_fun_235, 0, sizeof(struct sFun*));
right_value395 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_98=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string("come_calloc"))));
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_99=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value123=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 680, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values1___100[0]=come_increment_ref_count(((struct sType*)(right_value126=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value125=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___100[1]=come_increment_ref_count(((struct sType*)(right_value128=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value127=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___100[2]=come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"char*",(_Bool)0,info))));
__list_values1___100[3]=come_increment_ref_count(((struct sType*)(right_value132=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value131=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___100[4]=come_increment_ref_count(((struct sType*)(right_value134=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value133=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"char*",(_Bool)0,info))));
}        param_types_105=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value139=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value138=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 681, "struct list$1sTypeph")))),5,__list_values1___100))));
        come_call_finalizer2(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values2___106[0]=come_increment_ref_count(((char*)(right_value140=__builtin_string("count"))));
__list_values2___106[1]=come_increment_ref_count(((char*)(right_value141=__builtin_string("size"))));
__list_values2___106[2]=come_increment_ref_count(((char*)(right_value142=__builtin_string("sname"))));
__list_values2___106[3]=come_increment_ref_count(((char*)(right_value143=__builtin_string("sline"))));
__list_values2___106[4]=come_increment_ref_count(((char*)(right_value144=__builtin_string("class_name"))));
}        param_names_111=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value149=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value148=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 682, "struct list$1charph")))),5,__list_values2___106))));
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_112=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 683, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_112,((void*)0));
        list$1charph_push_back(param_default_parametors_112,((void*)0));
        list$1charph_push_back(param_default_parametors_112,(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("null")))));
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_112,(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string("0")))));
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_112,(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string("null")))));
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_113=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value158=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value155=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 689, "sFun")))),(char*)come_increment_ref_count(name_98),(struct sType*)come_increment_ref_count(result_type_99),(struct list$1sTypeph*)come_increment_ref_count(param_types_105),(struct list$1charph*)come_increment_ref_count(param_names_111),(struct list$1charph*)come_increment_ref_count(param_default_parametors_112),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string(name_98)))),(struct sFun*)come_increment_ref_count(main_fun_113));
        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_98 = come_decrement_ref_count2(name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_158=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string("come_increment_ref_count"))));
        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 700, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values3___160[0]=come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 701, "sType")))),"void*",(_Bool)0,info))));
}        param_types_161=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value172=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value171=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 701, "struct list$1sTypeph")))),1,__list_values3___160))));
        come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values4___162[0]=come_increment_ref_count(((char*)(right_value173=__builtin_string("mem"))));
}        param_names_163=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value175=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value174=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 702, "struct list$1charph")))),1,__list_values4___162))));
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_164=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value177=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value176=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 703, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_165=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value181=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value178=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 704, "sFun")))),(char*)come_increment_ref_count(name_158),(struct sType*)come_increment_ref_count(result_type_159),(struct list$1sTypeph*)come_increment_ref_count(param_types_161),(struct list$1charph*)come_increment_ref_count(param_names_163),(struct list$1charph*)come_increment_ref_count(param_default_parametors_164),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(name_158)))),(struct sFun*)come_increment_ref_count(main_fun_165));
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_158 = come_decrement_ref_count2(name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_166=(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string("come_call_finalizer"))));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values5___168[0]=come_increment_ref_count(((struct sType*)(right_value187=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value186=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___168[1]=come_increment_ref_count(((struct sType*)(right_value189=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value188=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___168[2]=come_increment_ref_count(((struct sType*)(right_value191=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value190=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___168[3]=come_increment_ref_count(((struct sType*)(right_value193=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value192=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___168[4]=come_increment_ref_count(((struct sType*)(right_value195=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value194=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"int",(_Bool)0,info))));
__list_values5___168[5]=come_increment_ref_count(((struct sType*)(right_value197=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value196=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"int",(_Bool)0,info))));
__list_values5___168[6]=come_increment_ref_count(((struct sType*)(right_value199=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value198=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"int",(_Bool)0,info))));
}        param_types_169=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value201=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value200=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 716, "struct list$1sTypeph")))),7,__list_values5___168))));
        come_call_finalizer2(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values6___170[0]=come_increment_ref_count(((char*)(right_value202=__builtin_string("fun"))));
__list_values6___170[1]=come_increment_ref_count(((char*)(right_value203=__builtin_string("mem"))));
__list_values6___170[2]=come_increment_ref_count(((char*)(right_value204=__builtin_string("protocol_fun"))));
__list_values6___170[3]=come_increment_ref_count(((char*)(right_value205=__builtin_string("protocol_obj"))));
__list_values6___170[4]=come_increment_ref_count(((char*)(right_value206=__builtin_string("call_finalizer_only"))));
__list_values6___170[5]=come_increment_ref_count(((char*)(right_value207=__builtin_string("no_decrement"))));
__list_values6___170[6]=come_increment_ref_count(((char*)(right_value208=__builtin_string("no_free"))));
}        param_names_171=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value210=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value209=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 717, "struct list$1charph")))),7,__list_values6___170))));
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_172=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value212=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value211=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 718, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_173=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value216=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value213=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 719, "sFun")))),(char*)come_increment_ref_count(name_166),(struct sType*)come_increment_ref_count(result_type_167),(struct list$1sTypeph*)come_increment_ref_count(param_types_169),(struct list$1charph*)come_increment_ref_count(param_names_171),(struct list$1charph*)come_increment_ref_count(param_default_parametors_172),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(name_166)))),(struct sFun*)come_increment_ref_count(main_fun_173));
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_166 = come_decrement_ref_count2(name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_174=(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string("come_decrement_ref_count"))));
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_175=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value219=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 730, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values7___176[0]=come_increment_ref_count(((struct sType*)(right_value222=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value221=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___176[1]=come_increment_ref_count(((struct sType*)(right_value224=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value223=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___176[2]=come_increment_ref_count(((struct sType*)(right_value226=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value225=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___176[3]=come_increment_ref_count(((struct sType*)(right_value228=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value227=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"bool",(_Bool)0,info))));
__list_values7___176[4]=come_increment_ref_count(((struct sType*)(right_value230=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"bool",(_Bool)0,info))));
}        param_types_177=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value232=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value231=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 731, "struct list$1sTypeph")))),5,__list_values7___176))));
        come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values8___178[0]=come_increment_ref_count(((char*)(right_value233=__builtin_string("mem"))));
__list_values8___178[1]=come_increment_ref_count(((char*)(right_value234=__builtin_string("protocol_fun"))));
__list_values8___178[2]=come_increment_ref_count(((char*)(right_value235=__builtin_string("protocol_obj"))));
__list_values8___178[3]=come_increment_ref_count(((char*)(right_value236=__builtin_string("no_decrement"))));
__list_values8___178[4]=come_increment_ref_count(((char*)(right_value237=__builtin_string("no_free"))));
}        param_names_179=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value239=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value238=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 732, "struct list$1charph")))),5,__list_values8___178))));
        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_180=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value241=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value240=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 733, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_181=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value245=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value242=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 734, "sFun")))),(char*)come_increment_ref_count(name_174),(struct sType*)come_increment_ref_count(result_type_175),(struct list$1sTypeph*)come_increment_ref_count(param_types_177),(struct list$1charph*)come_increment_ref_count(param_names_179),(struct list$1charph*)come_increment_ref_count(param_default_parametors_180),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(name_174)))),(struct sFun*)come_increment_ref_count(main_fun_181));
        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_182=(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string("come_free_object"))));
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value248=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 745, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values9___184[0]=come_increment_ref_count(((struct sType*)(right_value251=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 746, "sType")))),"void*",(_Bool)0,info))));
}        param_types_185=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value253=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value252=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 746, "struct list$1sTypeph")))),1,__list_values9___184))));
        come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values10___186[0]=come_increment_ref_count(((char*)(right_value254=__builtin_string("mem"))));
}        param_names_187=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value256=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value255=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 747, "struct list$1charph")))),1,__list_values10___186))));
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_188=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value258=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value257=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 748, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_189=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value262=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value259=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 749, "sFun")))),(char*)come_increment_ref_count(name_182),(struct sType*)come_increment_ref_count(result_type_183),(struct list$1sTypeph*)come_increment_ref_count(param_types_185),(struct list$1charph*)come_increment_ref_count(param_names_187),(struct list$1charph*)come_increment_ref_count(param_default_parametors_188),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string(name_182)))),(struct sFun*)come_increment_ref_count(main_fun_189));
        right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_182 = come_decrement_ref_count2(name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_190=(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string("come_memdup"))));
        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 760, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values11___192[0]=come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"void*",(_Bool)0,info))));
__list_values11___192[1]=come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"char*",(_Bool)0,info))));
__list_values11___192[2]=come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"int",(_Bool)0,info))));
__list_values11___192[3]=come_increment_ref_count(((struct sType*)(right_value274=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value273=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"char*",(_Bool)0,info))));
}        param_types_193=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value276=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value275=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 761, "struct list$1sTypeph")))),4,__list_values11___192))));
        come_call_finalizer2(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values12___194[0]=come_increment_ref_count(((char*)(right_value277=__builtin_string("block"))));
__list_values12___194[1]=come_increment_ref_count(((char*)(right_value278=__builtin_string("sname"))));
__list_values12___194[2]=come_increment_ref_count(((char*)(right_value279=__builtin_string("sline"))));
__list_values12___194[3]=come_increment_ref_count(((char*)(right_value280=__builtin_string("class_name"))));
}        param_names_195=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value282=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value281=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 762, "struct list$1charph")))),4,__list_values12___194))));
        right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_196=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value284=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value283=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 763, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_196,((void*)0));
        list$1charph_push_back(param_default_parametors_196,(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("null")))));
        right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_196,(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string("0")))));
        right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_196,(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string("null")))));
        right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_197=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value291=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value288=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 768, "sFun")))),(char*)come_increment_ref_count(name_190),(struct sType*)come_increment_ref_count(result_type_191),(struct list$1sTypeph*)come_increment_ref_count(param_types_193),(struct list$1charph*)come_increment_ref_count(param_names_195),(struct list$1charph*)come_increment_ref_count(param_default_parametors_196),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value289=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string(name_190)))),(struct sFun*)come_increment_ref_count(main_fun_197));
        right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_190 = come_decrement_ref_count2(name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_198=(char*)come_increment_ref_count(((char*)(right_value293=__builtin_string("memset"))));
        right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value294=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 779, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values13___200[0]=come_increment_ref_count(((struct sType*)(right_value297=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value296=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "sType")))),"void*",(_Bool)0,info))));
__list_values13___200[1]=come_increment_ref_count(((struct sType*)(right_value299=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value298=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "sType")))),"int",(_Bool)0,info))));
__list_values13___200[2]=come_increment_ref_count(((struct sType*)(right_value301=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value300=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "sType")))),"long",(_Bool)0,info))));
}        param_types_201=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value303=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value302=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 780, "struct list$1sTypeph")))),3,__list_values13___200))));
        come_call_finalizer2(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values14___202[0]=come_increment_ref_count(((char*)(right_value304=__builtin_string("b"))));
__list_values14___202[1]=come_increment_ref_count(((char*)(right_value305=__builtin_string("c"))));
__list_values14___202[2]=come_increment_ref_count(((char*)(right_value306=__builtin_string("len"))));
}        param_names_203=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value308=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value307=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 781, "struct list$1charph")))),3,__list_values14___202))));
        right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_204=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value310=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value309=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 782, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_205=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value314=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value311=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 783, "sFun")))),(char*)come_increment_ref_count(name_198),(struct sType*)come_increment_ref_count(result_type_199),(struct list$1sTypeph*)come_increment_ref_count(param_types_201),(struct list$1charph*)come_increment_ref_count(param_names_203),(struct list$1charph*)come_increment_ref_count(param_default_parametors_204),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value312=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(right_value313=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value315=__builtin_string(name_198)))),(struct sFun*)come_increment_ref_count(main_fun_205));
        right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_198 = come_decrement_ref_count2(name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_206=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string("__builtin_string"))));
        right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value317=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 794, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values15___208[0]=come_increment_ref_count(((struct sType*)(right_value320=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value319=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 795, "sType")))),"char*",(_Bool)0,info))));
}        param_types_209=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value322=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value321=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 795, "struct list$1sTypeph")))),1,__list_values15___208))));
        come_call_finalizer2(sType_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values16___210[0]=come_increment_ref_count(((char*)(right_value323=__builtin_string("str"))));
}        param_names_211=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value324=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 796, "struct list$1charph")))),1,__list_values16___210))));
        right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_212=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value327=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value326=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 797, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_213=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value331=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value328=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 798, "sFun")))),(char*)come_increment_ref_count(name_206),(struct sType*)come_increment_ref_count(result_type_207),(struct list$1sTypeph*)come_increment_ref_count(param_types_209),(struct list$1charph*)come_increment_ref_count(param_names_211),(struct list$1charph*)come_increment_ref_count(param_default_parametors_212),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value332=__builtin_string(name_206)))),(struct sFun*)come_increment_ref_count(main_fun_213));
        right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_214=(char*)come_increment_ref_count(((char*)(right_value333=__builtin_string("come_heap_init"))));
        right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_215=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value334=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 809, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values17___216[0]=come_increment_ref_count(((struct sType*)(right_value337=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value336=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "sType")))),"int",(_Bool)0,info))));
__list_values17___216[1]=come_increment_ref_count(((struct sType*)(right_value339=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value338=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "sType")))),"int",(_Bool)0,info))));
__list_values17___216[2]=come_increment_ref_count(((struct sType*)(right_value341=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value340=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "sType")))),"int",(_Bool)0,info))));
}        param_types_217=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value343=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value342=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 810, "struct list$1sTypeph")))),3,__list_values17___216))));
        come_call_finalizer2(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values18___218[0]=come_increment_ref_count(((char*)(right_value344=xsprintf("come_malloc"))));
__list_values18___218[1]=come_increment_ref_count(((char*)(right_value345=xsprintf("come_debug"))));
__list_values18___218[2]=come_increment_ref_count(((char*)(right_value346=xsprintf("come_gc"))));
}        param_names_219=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value348=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value347=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 811, "struct list$1charph")))),3,__list_values18___218))));
        right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_220=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value350=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value349=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 812, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_220,((void*)0));
        main_fun_221=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value354=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value351=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 814, "sFun")))),(char*)come_increment_ref_count(name_214),(struct sType*)come_increment_ref_count(result_type_215),(struct list$1sTypeph*)come_increment_ref_count(param_types_217),(struct list$1charph*)come_increment_ref_count(param_names_219),(struct list$1charph*)come_increment_ref_count(param_default_parametors_220),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value352=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value353=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value355=__builtin_string(name_214)))),(struct sFun*)come_increment_ref_count(main_fun_221));
        right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_214 = come_decrement_ref_count2(name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_222=(char*)come_increment_ref_count(((char*)(right_value356=__builtin_string("come_heap_final"))));
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value358=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value357=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 825, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_types_224=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value360=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value359=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 826, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_names_225=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value362=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value361=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 827, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_226=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value364=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value363=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 828, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_227=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value368=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value365=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 829, "sFun")))),(char*)come_increment_ref_count(name_222),(struct sType*)come_increment_ref_count(result_type_223),(struct list$1sTypeph*)come_increment_ref_count(param_types_224),(struct list$1charph*)come_increment_ref_count(param_names_225),(struct list$1charph*)come_increment_ref_count(param_default_parametors_226),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value366=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value367=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value369=__builtin_string(name_222)))),(struct sFun*)come_increment_ref_count(main_fun_227));
        right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_222 = come_decrement_ref_count2(name_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_228=(char*)come_increment_ref_count(((char*)(right_value370=__builtin_string("come_null_check"))));
        right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_229=(struct sType*)come_increment_ref_count(((struct sType*)(right_value372=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value371=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 840, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values19___230[0]=come_increment_ref_count(((struct sType*)(right_value374=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value373=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"void*",(_Bool)0,info))));
__list_values19___230[1]=come_increment_ref_count(((struct sType*)(right_value376=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value375=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"char*",(_Bool)0,info))));
__list_values19___230[2]=come_increment_ref_count(((struct sType*)(right_value378=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value377=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"int",(_Bool)0,info))));
__list_values19___230[3]=come_increment_ref_count(((struct sType*)(right_value380=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value379=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"int",(_Bool)0,info))));
}        param_types_231=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value382=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value381=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 841, "struct list$1sTypeph")))),4,__list_values19___230))));
        come_call_finalizer2(sType_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values20___232[0]=come_increment_ref_count(((char*)(right_value383=__builtin_string("mem"))));
__list_values20___232[1]=come_increment_ref_count(((char*)(right_value384=__builtin_string("sname"))));
__list_values20___232[2]=come_increment_ref_count(((char*)(right_value385=__builtin_string("sline"))));
__list_values20___232[3]=come_increment_ref_count(((char*)(right_value386=__builtin_string("id"))));
}        param_names_233=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value388=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value387=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 842, "struct list$1charph")))),4,__list_values20___232))));
        right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_234=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value390=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value389=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 843, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_235=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value394=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value391=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 844, "sFun")))),(char*)come_increment_ref_count(name_228),(struct sType*)come_increment_ref_count(result_type_229),(struct list$1sTypeph*)come_increment_ref_count(param_types_231),(struct list$1charph*)come_increment_ref_count(param_names_233),(struct list$1charph*)come_increment_ref_count(param_default_parametors_234),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value392=__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")))),(char*)come_increment_ref_count(((char*)(right_value393=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value395=__builtin_string(name_228)))),(struct sFun*)come_increment_ref_count(main_fun_235));
        right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    __result111__ = 0;
    return __result111__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_101;
struct list$1sTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_101, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_101=0;            i_101<num_value;            i_101++            ){
                list$1sTypeph_push_back(self,values[i_101]);
            }
            __result84__ = __result_obj__ = self;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result84__;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional211;
void* right_value135;
struct list_item$1sTypeph* litem_102;
struct sType* __dec_obj68;
_Bool _if_conditional212;
void* right_value136;
struct list_item$1sTypeph* litem_103;
struct sType* __dec_obj69;
void* right_value137;
struct list_item$1sTypeph* litem_104;
struct sType* __dec_obj70;
struct list$1sTypeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1sTypeph*));
right_value136 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1sTypeph*));
right_value137 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional211=self->len==0,                    _if_conditional211) {
                        litem_102=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_102->prev=((void*)0);
                        litem_102->next=((void*)0);
                        __dec_obj68=litem_102->item;
                        litem_102->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_102;
                        self->head=litem_102;
                    }
                    else {
                        if(_if_conditional212=self->len==1,                        _if_conditional212) {
                            litem_103=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_103->prev=self->head;
                            litem_103->next=((void*)0);
                            __dec_obj69=litem_103->item;
                            litem_103->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_103;
                            self->head->next=litem_103;
                        }
                        else {
                            litem_104=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_104->prev=self->tail;
                            litem_104->next=((void*)0);
                            __dec_obj70=litem_104->item;
                            litem_104->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_104;
                            self->tail=litem_104;
                        }
                    }
                    self->len++;
                    __result83__ = __result_obj__ = self;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result83__;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_107;
struct list$1charph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_107, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_107=0;            i_107<num_value;            i_107++            ){
                list$1charph_push_back(self,values[i_107]);
            }
            __result86__ = __result_obj__ = self;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result86__;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional213;
void* right_value145;
struct list_item$1charph* litem_108;
char* __dec_obj71;
_Bool _if_conditional214;
void* right_value146;
struct list_item$1charph* litem_109;
char* __dec_obj72;
void* right_value147;
struct list_item$1charph* litem_110;
char* __dec_obj73;
struct list$1charph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1charph*));
right_value146 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1charph*));
right_value147 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
                    if(_if_conditional213=self->len==0,                    _if_conditional213) {
                        litem_108=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_108->prev=((void*)0);
                        litem_108->next=((void*)0);
                        __dec_obj71=litem_108->item;
                        litem_108->item=(char*)come_increment_ref_count(item);
                        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_108;
                        self->head=litem_108;
                    }
                    else {
                        if(_if_conditional214=self->len==1,                        _if_conditional214) {
                            litem_109=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value146=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_109->prev=self->head;
                            litem_109->next=((void*)0);
                            __dec_obj72=litem_109->item;
                            litem_109->item=(char*)come_increment_ref_count(item);
                            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_109;
                            self->head->next=litem_109;
                        }
                        else {
                            litem_110=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value147=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_110->prev=self->tail;
                            litem_110->next=((void*)0);
                            __dec_obj73=litem_110->item;
                            litem_110->item=(char*)come_increment_ref_count(item);
                            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail->next=litem_110;
                            self->tail=litem_110;
                        }
                    }
                    self->len++;
                    __result85__ = __result_obj__ = self;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result85__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional215;
unsigned int hash_131;
unsigned int it_132;
_Bool _while_condtional21;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool same_key_exist_149;
char* it2_152;
_Bool _if_conditional258;
_Bool _if_conditional259;
struct map$2charphsFunph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_131, 0, sizeof(unsigned int));
memset(&it_132, 0, sizeof(unsigned int));
memset(&same_key_exist_149, 0, sizeof(_Bool));
memset(&it2_152, 0, sizeof(char*));
            if(_if_conditional215=self->len*10>=self->size,            _if_conditional215) {
                map$2charphsFunph_rehash(self);
            }
            hash_131=string_get_hash_key(key)%self->size;
            it_132=hash_131;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional227=self->item_existance[it_132],                _if_conditional227) {
                    if(_if_conditional228=string_equals(self->keys[it_132],key),                    _if_conditional228) {
                        if(_if_conditional229=1,                        _if_conditional229) {
                            list$1charp_remove(self->key_list,self->keys[it_132]);
                            self->keys[it_132] = come_decrement_ref_count2(self->keys[it_132], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_132]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_132]);
                            self->keys[it_132]=key;
                        }
                        if(_if_conditional249=1,                        _if_conditional249) {
                            come_call_finalizer2(sFun_finalize,self->items[it_132], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_132]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_132]=item;
                        }
                        break;
                    }
                    it_132++;
                    if(_if_conditional250=it_132>=self->size,                    _if_conditional250) {
                        it_132=0;
                    }
                    else {
                        if(_if_conditional251=it_132==hash_131,                        _if_conditional251) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_132]=(_Bool)1;
                    if(_if_conditional252=1,                    _if_conditional252) {
                        self->keys[it_132]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_132]=key;
                    }
                    if(_if_conditional253=1,                    _if_conditional253) {
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
                if(_if_conditional258=string_equals(it2_152,key),                _if_conditional258) {
                    puts("SAME KEY");
                    same_key_exist_149=(_Bool)1;
                }
            }
            if(_if_conditional259=!same_key_exist_149,            _if_conditional259) {
                list$1charp_push_back(self->key_list,key);
            }
            __result110__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result110__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_114;
void* right_value159;
char** keys_115;
void* right_value160;
struct sFun** items_116;
void* right_value161;
_Bool* item_existance_117;
int len_118;
char* it_121;
struct sFun* default_value_124;
struct sFun* it2_127;
unsigned int hash_128;
int n_129;
_Bool _while_condtional20;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct sFun* default_value_130;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_114, 0, sizeof(int));
right_value159 = (void*)0;
memset(&keys_115, 0, sizeof(char**));
right_value160 = (void*)0;
memset(&items_116, 0, sizeof(struct sFun**));
right_value161 = (void*)0;
memset(&item_existance_117, 0, sizeof(_Bool*));
memset(&len_118, 0, sizeof(int));
memset(&it_121, 0, sizeof(char*));
memset(&default_value_124, 0, sizeof(struct sFun*));
memset(&it2_127, 0, sizeof(struct sFun*));
memset(&hash_128, 0, sizeof(unsigned int));
memset(&n_129, 0, sizeof(int));
memset(&default_value_130, 0, sizeof(struct sFun*));
                    size_114=self->size*10;
                    keys_115=(char**)come_increment_ref_count(((char**)(right_value159=(char**)come_calloc(1, sizeof(char*)*(1*(size_114)), "./comelang2.h", 1335, "char*%"))));
                    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_116=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value160=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_114)), "./comelang2.h", 1336, "sFun*%"))));
                    come_call_finalizer2(sFun_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_117=(_Bool*)come_increment_ref_count(((_Bool*)(right_value161=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_114)), "./comelang2.h", 1337, "bool"))));
                    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_118=0;
                    for(                    it_121=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_121=map$2charphsFunph_next(self)                    ){
                        memset(&default_value_124,0,sizeof(struct sFun*));
                        it2_127=map$2charphsFunph_at(self,it_121,default_value_124);
                        hash_128=string_get_hash_key(it_121)%size_114;
                        n_129=hash_128;
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            if(_if_conditional224=item_existance_117[n_129],                            _if_conditional224) {
                                n_129++;
                                if(_if_conditional225=n_129>=size_114,                                _if_conditional225) {
                                    n_129=0;
                                }
                                else {
                                    if(_if_conditional226=n_129==hash_128,                                    _if_conditional226) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_117[n_129]=(_Bool)1;
                                keys_115[n_129]=it_121;
                                items_116[n_129]=map$2charphsFunph_at(self,it_121,default_value_130);
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
_Bool _if_conditional216;
char* result_119;
char* __result87__;
_Bool _if_conditional217;
char* __result88__;
char* result_120;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_119, 0, sizeof(char*));
memset(&result_120, 0, sizeof(char*));
                        if(_if_conditional216=self==((void*)0),                        _if_conditional216) {
                            memset(&result_119,0,sizeof(char*));
                            __result87__ = __result_obj__ = result_119;
                            return __result87__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result88__ = __result_obj__ = self->key_list->it->item;
                            return __result88__;
                        }
                        memset(&result_120,0,sizeof(char*));
                        __result89__ = __result_obj__ = result_120;
                        return __result89__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result90__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result90__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional218;
char* result_122;
char* __result91__;
_Bool _if_conditional219;
char* __result92__;
char* result_123;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_122, 0, sizeof(char*));
memset(&result_123, 0, sizeof(char*));
                        if(_if_conditional218=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional218) {
                            memset(&result_122,0,sizeof(char*));
                            __result91__ = __result_obj__ = result_122;
                            return __result91__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result92__ = __result_obj__ = self->key_list->it->item;
                            return __result92__;
                        }
                        memset(&result_123,0,sizeof(char*));
                        __result93__ = __result_obj__ = result_123;
                        return __result93__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_125;
unsigned int it_126;
_Bool _while_condtional19;
_Bool _if_conditional220;
_Bool _if_conditional221;
struct sFun* __result94__;
_Bool _if_conditional222;
_Bool _if_conditional223;
struct sFun* __result95__;
struct sFun* __result96__;
struct sFun* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_125, 0, sizeof(unsigned int));
memset(&it_126, 0, sizeof(unsigned int));
                            hash_125=string_get_hash_key(((char*)key))%self->size;
                            it_126=hash_125;
                            while(_while_condtional19=(_Bool)1,                            _while_condtional19) {
                                if(_if_conditional220=self->item_existance[it_126],                                _if_conditional220) {
                                    if(_if_conditional221=string_equals(self->keys[it_126],key),                                    _if_conditional221) {
                                        __result94__ = __result_obj__ = self->items[it_126];
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result94__;
                                    }
                                    it_126++;
                                    if(_if_conditional222=it_126>=self->size,                                    _if_conditional222) {
                                        it_126=0;
                                    }
                                    else {
                                        if(_if_conditional223=it_126==hash_125,                                        _if_conditional223) {
                                            __result95__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result95__;
                                        }
                                    }
                                }
                                else {
                                    __result96__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result96__;
                                }
                            }
                            __result97__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result97__;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_133;
struct list_item$1charp* it_134;
_Bool _while_condtional22;
_Bool _if_conditional230;
struct list$1charp* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_133, 0, sizeof(int));
memset(&it_134, 0, sizeof(struct list_item$1charp*));
                                it2_133=0;
                                it_134=self->head;
                                while(_while_condtional22=it_134!=((void*)0),                                _while_condtional22) {
                                    if(_if_conditional230=string_equals(it_134->item,item),                                    _if_conditional230) {
                                        list$1charp_delete(self,it2_133,it2_133+1);
                                        break;
                                    }
                                    it2_133++;
                                    it_134=it_134->next;
                                }
                                __result101__ = __result_obj__ = self;
                                return __result101__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
int tmp_135;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list$1charp* __result98__;
_Bool _if_conditional237;
_Bool _if_conditional238;
struct list_item$1charp* it_138;
int i_139;
_Bool _while_condtional24;
_Bool _if_conditional239;
struct list_item$1charp* prev_it_140;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct list_item$1charp* it_141;
int i_142;
_Bool _while_condtional25;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct list_item$1charp* prev_it_143;
struct list_item$1charp* it_144;
struct list_item$1charp* head_prev_it_145;
struct list_item$1charp* tail_it_146;
int i_147;
_Bool _while_condtional26;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct list_item$1charp* prev_it_148;
_Bool _if_conditional247;
_Bool _if_conditional248;
struct list$1charp* __result100__;
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
                                            if(_if_conditional231=head<0,                                            _if_conditional231) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional232=tail<0,                                            _if_conditional232) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional233=head>tail,                                            _if_conditional233) {
                                                tmp_135=tail;
                                                tail=head;
                                                head=tmp_135;
                                            }
                                            if(_if_conditional234=head<0,                                            _if_conditional234) {
                                                head=0;
                                            }
                                            if(_if_conditional235=tail>self->len,                                            _if_conditional235) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional236=head==tail,                                            _if_conditional236) {
                                                __result98__ = __result_obj__ = self;
                                                return __result98__;
                                            }
                                            if(_if_conditional237=head==0&&tail==self->len,                                            _if_conditional237) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional238=head==0,                                                _if_conditional238) {
                                                    it_138=self->head;
                                                    i_139=0;
                                                    while(_while_condtional24=it_138!=((void*)0),                                                    _while_condtional24) {
                                                        if(_if_conditional239=i_139<tail,                                                        _if_conditional239) {
                                                            prev_it_140=it_138;
                                                            it_138=it_138->next;
                                                            i_139++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional240=i_139==tail,                                                            _if_conditional240) {
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
                                                    if(_if_conditional241=tail==self->len,                                                    _if_conditional241) {
                                                        it_141=self->head;
                                                        i_142=0;
                                                        while(_while_condtional25=it_141!=((void*)0),                                                        _while_condtional25) {
                                                            if(_if_conditional242=i_142==head,                                                            _if_conditional242) {
                                                                self->tail=it_141->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional243=i_142>=head,                                                            _if_conditional243) {
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
                                                            if(_if_conditional244=i_147==head,                                                            _if_conditional244) {
                                                                head_prev_it_145=it_144->prev;
                                                            }
                                                            if(_if_conditional245=i_147==tail,                                                            _if_conditional245) {
                                                                tail_it_146=it_144;
                                                            }
                                                            if(_if_conditional246=i_147>=head&&i_147<tail,                                                            _if_conditional246) {
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
                                                        if(_if_conditional247=head_prev_it_145!=((void*)0),                                                        _if_conditional247) {
                                                            head_prev_it_145->next=tail_it_146;
                                                        }
                                                        if(_if_conditional248=tail_it_146!=((void*)0),                                                        _if_conditional248) {
                                                            tail_it_146->prev=head_prev_it_145;
                                                        }
                                                    }
                                                }
                                            }
                                            __result100__ = __result_obj__ = self;
                                            return __result100__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_136;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_137;
struct list$1charp* __result99__;
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
                                                    __result99__ = __result_obj__ = self;
                                                    return __result99__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional254;
char* result_150;
char* __result102__;
_Bool _if_conditional255;
char* __result103__;
char* result_151;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_150, 0, sizeof(char*));
memset(&result_151, 0, sizeof(char*));
                if(_if_conditional254=self==((void*)0),                _if_conditional254) {
                    memset(&result_150,0,sizeof(char*));
                    __result102__ = __result_obj__ = result_150;
                    return __result102__;
                }
                self->it=self->head;
                if(self->it) {
                    __result103__ = __result_obj__ = self->it->item;
                    return __result103__;
                }
                memset(&result_151,0,sizeof(char*));
                __result104__ = __result_obj__ = result_151;
                return __result104__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
                __result105__ = self==((void*)0)||self->it==((void*)0);
                return __result105__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional256;
char* result_153;
char* __result106__;
_Bool _if_conditional257;
char* __result107__;
char* result_154;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_153, 0, sizeof(char*));
memset(&result_154, 0, sizeof(char*));
                if(_if_conditional256=self==((void*)0)||self->it==((void*)0),                _if_conditional256) {
                    memset(&result_153,0,sizeof(char*));
                    __result106__ = __result_obj__ = result_153;
                    return __result106__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result107__ = __result_obj__ = self->it->item;
                    return __result107__;
                }
                memset(&result_154,0,sizeof(char*));
                __result108__ = __result_obj__ = result_154;
                return __result108__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional260;
void* right_value162;
struct list_item$1charp* litem_155;
_Bool _if_conditional261;
void* right_value163;
struct list_item$1charp* litem_156;
void* right_value164;
struct list_item$1charp* litem_157;
struct list$1charp* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1charp*));
right_value163 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charp*));
right_value164 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional260=self->len==0,                    _if_conditional260) {
                        litem_155=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value162=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_155->prev=((void*)0);
                        litem_155->next=((void*)0);
                        litem_155->item=item;
                        self->tail=litem_155;
                        self->head=litem_155;
                    }
                    else {
                        if(_if_conditional261=self->len==1,                        _if_conditional261) {
                            litem_156=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value163=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_156->prev=self->head;
                            litem_156->next=((void*)0);
                            litem_156->item=item;
                            self->tail=litem_156;
                            self->head->next=litem_156;
                        }
                        else {
                            litem_157=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value164=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_157->prev=self->tail;
                            litem_157->next=((void*)0);
                            litem_157->item=item;
                            self->tail->next=litem_157;
                            self->tail=litem_157;
                        }
                    }
                    self->len++;
                    __result109__ = __result_obj__ = self;
                    return __result109__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
char* source_head_236;
_Bool is_type_name_flag_237;
int sline_238;
_Bool define_struct_nobody_239;
char* p_240;
int sline_241;
_Bool _if_conditional262;
_Bool _if_conditional263;
void* right_value396;
char* word_242;
_Bool _if_conditional264;
_Bool define_function_pointer_result_function_243;
_Bool define_variable_between_brace_244;
_Bool _if_conditional265;
char* p_245;
_Bool _if_conditional266;
void* right_value397;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_246;
char* fun_name_247;
_Bool err_248;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value398;
char* word_249;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool define_function_flag_250;
_Bool _if_conditional274;
char* p_251;
_Bool invalid_type_252;
_Bool _if_conditional275;
void* right_value399;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_253;
char* fun_name_254;
_Bool err_255;
_Bool _if_conditional276;
char* word_256;
_Bool _if_conditional277;
void* right_value400;
char* __dec_obj74;
_Bool _if_conditional278;
void* right_value401;
char* __dec_obj75;
char* __dec_obj76;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _while_condtional27;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value402;
char* __dec_obj77;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool define_variable_257;
_Bool _if_conditional287;
char* p_258;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value403;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_259;
char* fun_name_260;
_Bool err_261;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
void* right_value404;
char* word_262;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value405;
char* word_263;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _while_condtional28;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value406;
char* word_264;
_Bool _if_conditional303;
_Bool _while_condtional30;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
void* right_value407;
char* word_267;
void* right_value408;
void* right_value409;
struct sNode* node_268;
struct sNode* __result113__;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value410;
struct sNode* __result114__;
_Bool _if_conditional309;
char* header_head_269;
void* right_value411;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_270;
char* fun_name_271;
_Bool err_272;
_Bool _if_conditional310;
void* right_value412;
void* right_value413;
struct list$1sTypeph* param_types_273;
void* right_value414;
void* right_value415;
struct list$1charph* param_names_274;
_Bool _if_conditional311;
_Bool _while_condtional31;
void* right_value416;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_275;
char* param_name_276;
_Bool err_277;
_Bool _if_conditional312;
static int num_function_pointer_result_var_name_a_278=0;
void* right_value417;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value418;
void* right_value419;
struct list$1sTypeph* param_types2_279;
void* right_value420;
void* right_value421;
struct list$1charph* param_names2_280;
_Bool _if_conditional316;
_Bool _while_condtional32;
void* right_value422;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_281;
char* param_name_282;
_Bool err_283;
_Bool _if_conditional317;
static int num_function_pointer_result_var_name_b_284=0;
void* right_value423;
_Bool _if_conditional318;
_Bool _if_conditional319;
char* header_tail_285;
void* right_value424;
void* right_value425;
struct sType* result_type2_286;
void* right_value426;
void* right_value427;
struct tuple1$1sTypeph* __dec_obj79;
void* right_value428;
struct list$1sTypeph* __dec_obj80;
void* right_value429;
struct list$1charph* __dec_obj81;
_Bool var_args_287;
void* right_value430;
void* right_value431;
struct buffer* header_buf_288;
void* right_value432;
void* right_value433;
struct list$1charph* param_default_parametors_289;
void* right_value434;
void* right_value435;
void* right_value436;
void* right_value437;
void* right_value438;
struct sFun* fun_290;
void* right_value439;
struct sFun* fun2_294;
_Bool _if_conditional324;
void* right_value440;
void* right_value441;
void* right_value442;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value477;
struct sNode* __result144__;
_Bool _if_conditional389;
void* right_value478;
struct sNode* __result145__;
_Bool _if_conditional390;
void* right_value479;
struct sNode* node_329;
char* source_tail_330;
void* right_value480;
void* right_value481;
struct buffer* header_331;
void* right_value482;
struct sNode* __result146__;
void* right_value483;
char* buf2_332;
void* right_value484;
struct sNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_236, 0, sizeof(char*));
memset(&is_type_name_flag_237, 0, sizeof(_Bool));
memset(&sline_238, 0, sizeof(int));
memset(&define_struct_nobody_239, 0, sizeof(_Bool));
memset(&p_240, 0, sizeof(char*));
memset(&sline_241, 0, sizeof(int));
right_value396 = (void*)0;
memset(&word_242, 0, sizeof(char*));
memset(&define_function_pointer_result_function_243, 0, sizeof(_Bool));
memset(&define_variable_between_brace_244, 0, sizeof(_Bool));
memset(&p_245, 0, sizeof(char*));
right_value397 = (void*)0;
memset(&result_type_246, 0, sizeof(struct sType*));
memset(&fun_name_247, 0, sizeof(char*));
memset(&err_248, 0, sizeof(_Bool));
memset(&result_type_246, 0, sizeof(struct sType*));
memset(&fun_name_247, 0, sizeof(char*));
memset(&err_248, 0, sizeof(_Bool));
right_value398 = (void*)0;
memset(&word_249, 0, sizeof(char*));
memset(&define_function_flag_250, 0, sizeof(_Bool));
memset(&p_251, 0, sizeof(char*));
memset(&invalid_type_252, 0, sizeof(_Bool));
right_value399 = (void*)0;
memset(&result_type_253, 0, sizeof(struct sType*));
memset(&fun_name_254, 0, sizeof(char*));
memset(&err_255, 0, sizeof(_Bool));
memset(&result_type_253, 0, sizeof(struct sType*));
memset(&fun_name_254, 0, sizeof(char*));
memset(&err_255, 0, sizeof(_Bool));
memset(&word_256, 0, sizeof(char*));
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&define_variable_257, 0, sizeof(_Bool));
memset(&p_258, 0, sizeof(char*));
right_value403 = (void*)0;
memset(&result_type_259, 0, sizeof(struct sType*));
memset(&fun_name_260, 0, sizeof(char*));
memset(&err_261, 0, sizeof(_Bool));
memset(&result_type_259, 0, sizeof(struct sType*));
memset(&fun_name_260, 0, sizeof(char*));
memset(&err_261, 0, sizeof(_Bool));
right_value404 = (void*)0;
memset(&word_262, 0, sizeof(char*));
right_value405 = (void*)0;
memset(&word_263, 0, sizeof(char*));
right_value406 = (void*)0;
memset(&word_264, 0, sizeof(char*));
right_value407 = (void*)0;
memset(&word_267, 0, sizeof(char*));
right_value408 = (void*)0;
right_value409 = (void*)0;
memset(&node_268, 0, sizeof(struct sNode*));
right_value410 = (void*)0;
memset(&header_head_269, 0, sizeof(char*));
right_value411 = (void*)0;
memset(&result_type_270, 0, sizeof(struct sType*));
memset(&fun_name_271, 0, sizeof(char*));
memset(&err_272, 0, sizeof(_Bool));
memset(&result_type_270, 0, sizeof(struct sType*));
memset(&fun_name_271, 0, sizeof(char*));
memset(&err_272, 0, sizeof(_Bool));
right_value412 = (void*)0;
right_value413 = (void*)0;
memset(&param_types_273, 0, sizeof(struct list$1sTypeph*));
right_value414 = (void*)0;
right_value415 = (void*)0;
memset(&param_names_274, 0, sizeof(struct list$1charph*));
right_value416 = (void*)0;
memset(&param_type_275, 0, sizeof(struct sType*));
memset(&param_name_276, 0, sizeof(char*));
memset(&err_277, 0, sizeof(_Bool));
memset(&param_type_275, 0, sizeof(struct sType*));
memset(&param_name_276, 0, sizeof(char*));
memset(&err_277, 0, sizeof(_Bool));
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
memset(&param_types2_279, 0, sizeof(struct list$1sTypeph*));
right_value420 = (void*)0;
right_value421 = (void*)0;
memset(&param_names2_280, 0, sizeof(struct list$1charph*));
right_value422 = (void*)0;
memset(&param_type_281, 0, sizeof(struct sType*));
memset(&param_name_282, 0, sizeof(char*));
memset(&err_283, 0, sizeof(_Bool));
memset(&param_type_281, 0, sizeof(struct sType*));
memset(&param_name_282, 0, sizeof(char*));
memset(&err_283, 0, sizeof(_Bool));
right_value423 = (void*)0;
memset(&header_tail_285, 0, sizeof(char*));
right_value424 = (void*)0;
right_value425 = (void*)0;
memset(&result_type2_286, 0, sizeof(struct sType*));
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
memset(&var_args_287, 0, sizeof(_Bool));
right_value430 = (void*)0;
right_value431 = (void*)0;
memset(&header_buf_288, 0, sizeof(struct buffer*));
right_value432 = (void*)0;
right_value433 = (void*)0;
memset(&param_default_parametors_289, 0, sizeof(struct list$1charph*));
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
memset(&fun_290, 0, sizeof(struct sFun*));
right_value439 = (void*)0;
memset(&fun2_294, 0, sizeof(struct sFun*));
right_value440 = (void*)0;
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value477 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
memset(&node_329, 0, sizeof(struct sNode*));
memset(&source_tail_330, 0, sizeof(char*));
right_value480 = (void*)0;
right_value481 = (void*)0;
memset(&header_331, 0, sizeof(struct buffer*));
right_value482 = (void*)0;
right_value483 = (void*)0;
memset(&buf2_332, 0, sizeof(char*));
right_value484 = (void*)0;
    source_head_236=info->p;
    is_type_name_flag_237=is_type_name(buf,info);
    sline_238=info->sline;
    define_struct_nobody_239=(_Bool)0;
    {
        p_240=info->p;
        sline_241=info->sline;
        if(_if_conditional262=charp_operator_equals(buf,"struct"),        _if_conditional262) {
            if(_if_conditional263=xisalpha(*info->p)||*info->p==95,            _if_conditional263) {
                word_242=(char*)come_increment_ref_count(((char*)(right_value396=parse_word(info))));
                right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional264=*info->p==59,                _if_conditional264) {
                    define_struct_nobody_239=(_Bool)1;
                }
                word_242 = come_decrement_ref_count2(word_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_241;
    }
    define_function_pointer_result_function_243=(_Bool)0;
    define_variable_between_brace_244=(_Bool)0;
    if(is_type_name_flag_237) {
        p_245=info->p;
        info->p=head;
        if(_if_conditional266=xisalpha(*info->p)||*info->p==95,        _if_conditional266) {
            info->no_output_err=(_Bool)1;
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value397=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_246=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_247=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_248=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=(_Bool)0;
            if(_if_conditional269=*info->p==40,            _if_conditional269) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional270=*info->p!=42,                _if_conditional270) {
                    define_function_pointer_result_function_243=(_Bool)1;
                    if(_if_conditional271=xisalpha(*info->p)||*info->p==95,                    _if_conditional271) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_249=(char*)come_increment_ref_count(((char*)(right_value398=parse_word(info))));
                        right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional272=!is_type_name(word_249,info)&&*info->p==41,                        _if_conditional272) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional273=*info->p==40,                            _if_conditional273) {
                            }
                            else {
                                define_variable_between_brace_244=(_Bool)1;
                            }
                        }
                        word_249 = come_decrement_ref_count2(word_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_247 = come_decrement_ref_count2(fun_name_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_238;
    }
    define_function_flag_250=(_Bool)0;
    if(_if_conditional274=is_type_name_flag_237&&!define_function_pointer_result_function_243&&charp_operator_not_equals(buf,"__typeof__"),    _if_conditional274) {
        p_251=info->p;
        info->p=head;
        invalid_type_252=(_Bool)0;
        info->no_output_err=(_Bool)1;
        if(_if_conditional275=xisalpha(*info->p)||*info->p==95,        _if_conditional275) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value399=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_253=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_254=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_255=multiple_assign_var2->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,result_type_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_254 = come_decrement_ref_count2(fun_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->no_output_err=(_Bool)0;
        if(_if_conditional276=!info->define_struct,        _if_conditional276) {
            info->define_struct=(_Bool)0;
            word_256=((void*)0);
            if(_if_conditional277=xisalnum(*info->p)||*info->p==95,            _if_conditional277) {
                __dec_obj74=word_256;
                word_256=(char*)come_increment_ref_count(((char*)(right_value400=parse_word(info))));
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional278=string_operator_equals(word_256,"extern"),                _if_conditional278) {
                    __dec_obj75=word_256;
                    word_256=(char*)come_increment_ref_count(((char*)(right_value401=parse_word(info))));
                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                __dec_obj76=word_256;
                word_256=((void*)0);
                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_256) {
                if(_if_conditional280=is_type_name(word_256,info),                _if_conditional280) {
                    while(_while_condtional27=*info->p==42,                    _while_condtional27) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional281=*info->p==91&&*(info->p+1)==93,                    _if_conditional281) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional282=*info->p==58,                    _if_conditional282) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional283=*info->p==58,                    _if_conditional283) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional284=xisalnum(*info->p)||*info->p==95,                    _if_conditional284) {
                        __dec_obj77=word_256;
                        word_256=(char*)come_increment_ref_count(((char*)(right_value402=parse_word(info))));
                        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value402 = come_decrement_ref_count2(right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                if(_if_conditional285=strlen(word_256)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                _if_conditional285) {
                    if(is_type_name_flag_237) {
                        define_function_flag_250=(_Bool)1;
                    }
                }
            }
            word_256 = come_decrement_ref_count2(word_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_251;
        info->sline=sline_238;
    }
    define_variable_257=(_Bool)1;
    if(_if_conditional287=is_type_name_flag_237&&!define_function_pointer_result_function_243,    _if_conditional287) {
        p_258=info->p;
        info->p=head;
        if(_if_conditional288=!is_type_name_flag_237,        _if_conditional288) {
            define_variable_257=(_Bool)0;
        }
        if(_if_conditional289=xisalpha(*info->p)||*info->p==95,        _if_conditional289) {
            info->no_output_err=(_Bool)1;
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value403=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_259=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_260=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_261=multiple_assign_var3->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=(_Bool)0;
            if(_if_conditional290=*info->p==40,            _if_conditional290) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional291=*info->p==42,                _if_conditional291) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional292=xisalpha(*info->p)||*info->p==95,                    _if_conditional292) {
                        word_262=(char*)come_increment_ref_count(((char*)(right_value404=parse_word(info))));
                        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional293=*info->p==41,                        _if_conditional293) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional294=*info->p==40,                            _if_conditional294) {
                                define_variable_257=(_Bool)1;
                            }
                        }
                        word_262 = come_decrement_ref_count2(word_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(_if_conditional295=xisalpha(*info->p)||*info->p==95,                    _if_conditional295) {
                        word_263=(char*)come_increment_ref_count(((char*)(right_value405=parse_word(info))));
                        right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional296=*info->p==41,                        _if_conditional296) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional297=!is_type_name(word_263,info)&&*info->p!=40,                            _if_conditional297) {
                                define_variable_257=(_Bool)1;
                            }
                        }
                        word_263 = come_decrement_ref_count2(word_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_260 = come_decrement_ref_count2(fun_name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_257=(_Bool)0;
        }
        else {
            if(define_variable_257) {
            }
            else {
                if(_if_conditional300=!(xisalpha(*info->p)||*info->p==95),                _if_conditional300) {
                    define_variable_257=(_Bool)0;
                }
                while(_while_condtional28=xisalpha(*info->p)||*info->p==95,                _while_condtional28) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional301=*info->p==40||*info->p==58,                _if_conditional301) {
                    define_variable_257=(_Bool)0;
                }
            }
        }
        info->p=p_258;
        info->sline=sline_238;
    }
    else {
        define_variable_257=(_Bool)0;
    }
    if(_if_conditional302=charp_operator_equals(buf,"template"),    _if_conditional302) {
        word_264=(char*)come_increment_ref_count(((char*)(right_value406=parse_word(info))));
        right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional303=*info->p==60,        _if_conditional303) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while(_while_condtional30=(_Bool)1,            _while_condtional30) {
                if(_if_conditional304=*info->p==62,                _if_conditional304) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(_if_conditional305=*info->p==44,                    _if_conditional305) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional306=*info->p==0,                        _if_conditional306) {
                            err_msg(info,"unexpected source end");
                            exit(2);
                        }
                        else {
                            word_267=(char*)come_increment_ref_count(((char*)(right_value407=parse_word(info))));
                            right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value408=string_clone(word_267)))));
                            right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            word_267 = come_decrement_ref_count2(word_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            node_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=parse_function(info))));
            if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1charph_reset(info->method_generics_type_names);
            __result113__ = __result_obj__ = node_268;
            if(node_268) { node_268 = come_decrement_ref_count2(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_264 = come_decrement_ref_count2(word_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result113__;
            if(node_268) { node_268 = come_decrement_ref_count2(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_264 = come_decrement_ref_count2(word_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_239) {
        }
        else {
            if(define_variable_between_brace_244) {
                info->p=head;
                info->sline=sline_238;
                __result114__ = __result_obj__ = ((struct sNode*)(right_value410=parse_global_variable(info)));
                if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result114__;
            }
            else {
                if(define_function_pointer_result_function_243) {
                    header_head_269=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value411=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_270=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_271=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_272=multiple_assign_var4->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional310=*info->p==40,                    _if_conditional310) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_273=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value413=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value412=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1148, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        param_names_274=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value415=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value414=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1149, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional311=*info->p==41,                        _if_conditional311) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while(_while_condtional31=(_Bool)1,                            _while_condtional31) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value416=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_275=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_276=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_277=multiple_assign_var5->v3;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional312=!err_277,                                _if_conditional312) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_273,(struct sType*)come_increment_ref_count(param_type_275));
                                list$1charph_push_back(param_names_274,(char*)come_increment_ref_count(((char*)(right_value417=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_278)))));
                                right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional313=*info->p==44,                                _if_conditional313) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(_if_conditional314=*info->p==41,                                    _if_conditional314) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        come_call_finalizer2(sType_finalize,param_type_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        param_name_276 = come_decrement_ref_count2(param_name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or )");
                                        exit(2);
                                    }
                                }
                                come_call_finalizer2(sType_finalize,param_type_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                param_name_276 = come_decrement_ref_count2(param_name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        expected_next_character(41,info);
                        if(_if_conditional315=*info->p==40,                        _if_conditional315) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_279=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value419=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value418=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1191, "list$1sTypeph"))))))));
                            come_call_finalizer2(list$1sTypephp_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            param_names2_280=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value421=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value420=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1192, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional316=*info->p==41,                            _if_conditional316) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while(_while_condtional32=(_Bool)1,                                _while_condtional32) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value422=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_281=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_282=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_283=multiple_assign_var6->v3;
                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional317=!err_283,                                    _if_conditional317) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_279,(struct sType*)come_increment_ref_count(param_type_281));
                                    list$1charph_push_back(param_names2_280,(char*)come_increment_ref_count(((char*)(right_value423=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_284)))));
                                    right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional318=*info->p==44,                                    _if_conditional318) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(_if_conditional319=*info->p==41,                                        _if_conditional319) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            come_call_finalizer2(sType_finalize,param_type_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            param_name_282 = come_decrement_ref_count2(param_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or )");
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer2(sType_finalize,param_type_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    param_name_282 = come_decrement_ref_count2(param_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_285=info->p;
                            result_type2_286=(struct sType*)come_increment_ref_count(((struct sType*)(right_value425=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value424=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1230, "sType")))),"lambda",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj79=result_type2_286->mResultType;
                            result_type2_286->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value427=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value426=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function2.c", 1232, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_270)))));
                            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj80=result_type2_286->mParamTypes;
                            result_type2_286->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value428=list$1sTypephp_clone(param_types2_279))));
                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj81=result_type2_286->mParamNames;
                            result_type2_286->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value429=list$1charphp_clone(param_names2_280))));
                            come_call_finalizer2(list$1charph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            result_type2_286->mVarArgs=(_Bool)0;
                            result_type2_286->mStatic=(_Bool)0;
                            var_args_287=(_Bool)0;
                            header_buf_288=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value431=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value430=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1240, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_buf_288,header_head_269,header_tail_285-header_head_269);
                            buffer_append_char(header_buf_288,0);
                            param_default_parametors_289=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value433=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value432=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1244, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            fun_290=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value438=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value434=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1246, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value435=__builtin_string(fun_name_271)))),(struct sType*)come_increment_ref_count(result_type2_286),(struct list$1sTypeph*)come_increment_ref_count(param_types_273),(struct list$1charph*)come_increment_ref_count(param_names_274),(struct list$1charph*)come_increment_ref_count(param_default_parametors_289),(_Bool)1,var_args_287,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value436=buffer_to_string(header_buf_288)))),(char*)come_increment_ref_count(((char*)(right_value437=__builtin_string(info->sname)))),info))));
                            come_call_finalizer2(sFun_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            fun2_294=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value439=__builtin_string(fun_name_271))));
                            right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional324=fun2_294==((void*)0)||fun2_294->mExternal,                            _if_conditional324) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value440=string_clone(fun_name_271)))),(struct sFun*)come_increment_ref_count(fun_290));
                                right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1267, "struct sNode");
                            _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value442=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value441=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1267, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_290),info))));
                            _inf_value1->_protocol_obj=_inf_obj_value1;
                            _inf_value1->finalize=(void*)sFunNode_finalize;
                            _inf_value1->clone=(void*)sFunNode_clone;
                            _inf_value1->compile=(void*)sFunNode_compile;
                            _inf_value1->sline=(void*)sFunNode_sline;
                            _inf_value1->sname=(void*)sFunNode_sname;
                            _inf_value1->terminated=(void*)sFunNode_terminated;
                            _inf_value1->kind=(void*)sFunNode_kind;
                            __result144__ = __result_obj__ = ((struct sNode*)(right_value477=_inf_value1));
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,param_types_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            fun_name_271 = come_decrement_ref_count2(fun_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFunNode_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFunNode_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value477) { right_value477 = come_decrement_ref_count2(right_value477, ((struct sNode*)right_value477)->finalize, ((struct sNode*)right_value477)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result144__;
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(sType_finalize,result_type_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    fun_name_271 = come_decrement_ref_count2(fun_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_250) {
                        info->p=head;
                        info->sline=sline_238;
                        __result145__ = __result_obj__ = ((struct sNode*)(right_value478=parse_function(info)));
                        if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result145__;
                    }
                    else {
                        if(define_variable_257) {
                            info->p=head;
                            info->sline=sline_238;
                            node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value479=parse_global_variable(info))));
                            if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            source_tail_330=info->p;
                            header_331=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value481=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value480=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1289, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_331,source_head_236,source_tail_330-source_head_236);
                            add_come_code_at_come_header(info,"%s %s;\n",buf,((char*)(right_value482=buffer_to_string(header_331))));
                            right_value482 = come_decrement_ref_count2(right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __result146__ = __result_obj__ = node_329;
                            if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer2(buffer_finalize,header_331, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result146__;
                            if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(buffer_finalize,header_331, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_238;
    buf2_332=(char*)come_increment_ref_count(((char*)(right_value483=parse_word(info))));
    right_value483 = come_decrement_ref_count2(right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result147__ = __result_obj__ = ((struct sNode*)(right_value484=top_level_v98(buf2_332,head,head_sline,info)));
    buf2_332 = come_decrement_ref_count2(buf2_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value484) { right_value484 = come_decrement_ref_count2(right_value484, ((struct sNode*)right_value484)->finalize, ((struct sNode*)right_value484)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result147__;
    buf2_332 = come_decrement_ref_count2(buf2_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional267;
_Bool _if_conditional268;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional267=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional267) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional268=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional268) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_265;
_Bool _while_condtional29;
struct list_item$1charph* prev_it_266;
struct list$1charph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_265, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_266, 0, sizeof(struct list_item$1charph*));
                it_265=self->head;
                while(_while_condtional29=it_265!=((void*)0),                _while_condtional29) {
                    prev_it_266=it_265;
                    it_265=it_265->next;
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result112__ = __result_obj__ = self;
                return __result112__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj78;
struct tuple1$1sTypeph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj78=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                __result115__ = __result_obj__ = self;
                                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result115__;
                                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_291;
unsigned int hash_292;
unsigned int it_293;
_Bool _while_condtional33;
_Bool _if_conditional320;
_Bool _if_conditional321;
struct sFun* __result116__;
_Bool _if_conditional322;
_Bool _if_conditional323;
struct sFun* __result117__;
struct sFun* __result118__;
struct sFun* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_291, 0, sizeof(struct sFun*));
memset(&hash_292, 0, sizeof(unsigned int));
memset(&it_293, 0, sizeof(unsigned int));
                                memset(&default_value_291,0,sizeof(struct sFun*));
                                hash_292=string_get_hash_key(((char*)key))%self->size;
                                it_293=hash_292;
                                while(_while_condtional33=(_Bool)1,                                _while_condtional33) {
                                    if(_if_conditional320=self->item_existance[it_293],                                    _if_conditional320) {
                                        if(_if_conditional321=string_equals(self->keys[it_293],key),                                        _if_conditional321) {
                                            __result116__ = __result_obj__ = self->items[it_293];
                                            come_call_finalizer2(sFun_finalize,default_value_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result116__;
                                        }
                                        it_293++;
                                        if(_if_conditional322=it_293>=self->size,                                        _if_conditional322) {
                                            it_293=0;
                                        }
                                        else {
                                            if(_if_conditional323=it_293==hash_292,                                            _if_conditional323) {
                                                __result117__ = __result_obj__ = default_value_291;
                                                come_call_finalizer2(sFun_finalize,default_value_291, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result117__;
                                            }
                                        }
                                    }
                                    else {
                                        __result118__ = __result_obj__ = default_value_291;
                                        come_call_finalizer2(sFun_finalize,default_value_291, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result118__;
                                    }
                                }
                                __result119__ = __result_obj__ = default_value_291;
                                come_call_finalizer2(sFun_finalize,default_value_291, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result119__;
                                come_call_finalizer2(sFun_finalize,default_value_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional329;
struct sFun* __result121__;
void* right_value444;
struct sFun* result_296;
_Bool _if_conditional330;
void* right_value445;
char* __dec_obj82;
_Bool _if_conditional331;
void* right_value446;
struct sType* __dec_obj83;
_Bool _if_conditional332;
void* right_value447;
struct list$1sTypeph* __dec_obj84;
_Bool _if_conditional333;
void* right_value448;
struct list$1charph* __dec_obj85;
_Bool _if_conditional334;
void* right_value449;
struct list$1charph* __dec_obj86;
_Bool _if_conditional335;
void* right_value450;
struct sType* __dec_obj87;
_Bool _if_conditional336;
void* right_value468;
struct sBlock* __dec_obj93;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool _if_conditional379;
void* right_value469;
struct buffer* __dec_obj94;
_Bool _if_conditional380;
void* right_value470;
struct buffer* __dec_obj95;
_Bool _if_conditional381;
void* right_value471;
struct buffer* __dec_obj96;
_Bool _if_conditional382;
void* right_value472;
struct buffer* __dec_obj97;
_Bool _if_conditional383;
_Bool _if_conditional384;
void* right_value473;
char* __dec_obj98;
_Bool _if_conditional385;
_Bool _if_conditional386;
void* right_value474;
char* __dec_obj99;
struct sFun* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value444 = (void*)0;
memset(&result_296, 0, sizeof(struct sFun*));
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value450 = (void*)0;
right_value468 = (void*)0;
right_value469 = (void*)0;
right_value470 = (void*)0;
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
                                        if(_if_conditional329=self==(void*)0,                                        _if_conditional329) {
                                            __result121__ = __result_obj__ = (void*)0;
                                            return __result121__;
                                        }
                                        result_296=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value444=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"))));
                                        come_call_finalizer2(sFun_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional330=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional330) {
                                            __dec_obj82=result_296->mName;
                                            result_296->mName=(char*)come_increment_ref_count(((char*)(right_value445=string_clone(self->mName))));
                                            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value445 = come_decrement_ref_count2(right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional331=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional331) {
                                            __dec_obj83=result_296->mResultType;
                                            result_296->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value446=sType_clone(self->mResultType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional332=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional332) {
                                            __dec_obj84=result_296->mParamTypes;
                                            result_296->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value447=list$1sTypephp_clone(self->mParamTypes))));
                                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional333=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional333) {
                                            __dec_obj85=result_296->mParamNames;
                                            result_296->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value448=list$1charphp_clone(self->mParamNames))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional334=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                        _if_conditional334) {
                                            __dec_obj86=result_296->mParamDefaultParametors;
                                            result_296->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value449=list$1charphp_clone(self->mParamDefaultParametors))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional335=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                        _if_conditional335) {
                                            __dec_obj87=result_296->mLambdaType;
                                            result_296->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value450=sType_clone(self->mLambdaType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional336=self!=((void*)0)&&self->mBlock!=((void*)0),                                        _if_conditional336) {
                                            __dec_obj93=result_296->mBlock;
                                            result_296->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value468=sBlock_clone(self->mBlock))));
                                            come_call_finalizer2(sBlock_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sBlock_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional377=self!=((void*)0),                                        _if_conditional377) {
                                            result_296->mExternal=self->mExternal;
                                        }
                                        if(_if_conditional378=self!=((void*)0),                                        _if_conditional378) {
                                            result_296->mVarArgs=self->mVarArgs;
                                        }
                                        if(_if_conditional379=self!=((void*)0)&&self->mSource!=((void*)0),                                        _if_conditional379) {
                                            __dec_obj94=result_296->mSource;
                                            result_296->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value469=buffer_clone(self->mSource))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional380=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                        _if_conditional380) {
                                            __dec_obj95=result_296->mSourceHead;
                                            result_296->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value470=buffer_clone(self->mSourceHead))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional381=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                        _if_conditional381) {
                                            __dec_obj96=result_296->mSourceHead2;
                                            result_296->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value471=buffer_clone(self->mSourceHead2))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional382=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                        _if_conditional382) {
                                            __dec_obj97=result_296->mSourceDefer;
                                            result_296->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value472=buffer_clone(self->mSourceDefer))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional383=self!=((void*)0),                                        _if_conditional383) {
                                            result_296->mStatic=self->mStatic;
                                        }
                                        if(_if_conditional384=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                        _if_conditional384) {
                                            __dec_obj98=result_296->mComeHeader;
                                            result_296->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value473=string_clone(self->mComeHeader))));
                                            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value473 = come_decrement_ref_count2(right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional385=self!=((void*)0),                                        _if_conditional385) {
                                            result_296->mCloner=self->mCloner;
                                        }
                                        if(_if_conditional386=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                        _if_conditional386) {
                                            __dec_obj99=result_296->mDeclareSName;
                                            result_296->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value474=string_clone(self->mDeclareSName))));
                                            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value474 = come_decrement_ref_count2(right_value474, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result142__ = __result_obj__ = result_296;
                                        come_call_finalizer2(sFun_finalize,result_296, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result142__;
                                        come_call_finalizer2(sFun_finalize,result_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional337;
struct sBlock* __result122__;
void* right_value451;
struct sBlock* result_297;
_Bool _if_conditional338;
void* right_value452;
struct list$1sNodeph* __dec_obj88;
_Bool _if_conditional339;
void* right_value467;
struct sVarTable* __dec_obj92;
struct sBlock* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value451 = (void*)0;
memset(&result_297, 0, sizeof(struct sBlock*));
right_value452 = (void*)0;
right_value467 = (void*)0;
                                                if(_if_conditional337=self==(void*)0,                                                _if_conditional337) {
                                                    __result122__ = __result_obj__ = (void*)0;
                                                    return __result122__;
                                                }
                                                result_297=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value451=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
                                                come_call_finalizer2(sBlock_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional338=self!=((void*)0)&&self->mNodes!=((void*)0),                                                _if_conditional338) {
                                                    __dec_obj88=result_297->mNodes;
                                                    result_297->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value452=list$1sNodephp_clone(self->mNodes))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional339=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                _if_conditional339) {
                                                    __dec_obj92=result_297->mVarTable;
                                                    result_297->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value467=sVarTable_clone(self->mVarTable))));
                                                    come_call_finalizer2(sVarTable_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sVarTable_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result141__ = __result_obj__ = result_297;
                                                come_call_finalizer2(sBlock_finalize,result_297, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result141__;
                                                come_call_finalizer2(sBlock_finalize,result_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional340;
struct sVarTable* __result123__;
void* right_value453;
struct sVarTable* result_298;
_Bool _if_conditional341;
void* right_value466;
struct map$2charphsVarph* __dec_obj91;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
struct sVarTable* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value453 = (void*)0;
memset(&result_298, 0, sizeof(struct sVarTable*));
right_value466 = (void*)0;
                                                        if(_if_conditional340=self==(void*)0,                                                        _if_conditional340) {
                                                            __result123__ = __result_obj__ = (void*)0;
                                                            return __result123__;
                                                        }
                                                        result_298=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value453=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                                                        come_call_finalizer2(sVarTable_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional341=self!=((void*)0)&&self->mVars!=((void*)0),                                                        _if_conditional341) {
                                                            __dec_obj91=result_298->mVars;
                                                            result_298->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value466=map$2charphsVarphp_clone(self->mVars))));
                                                            come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(map$2charphsVarphp_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional374=self!=((void*)0),                                                        _if_conditional374) {
                                                            result_298->mGlobal=self->mGlobal;
                                                        }
                                                        if(_if_conditional375=self!=((void*)0),                                                        _if_conditional375) {
                                                            result_298->mParent=self->mParent;
                                                        }
                                                        if(_if_conditional376=self!=((void*)0),                                                        _if_conditional376) {
                                                            result_298->mID=self->mID;
                                                        }
                                                        __result140__ = __result_obj__ = result_298;
                                                        come_call_finalizer2(sVarTable_finalize,result_298, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result140__;
                                                        come_call_finalizer2(sVarTable_finalize,result_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional342;
struct map$2charphsVarph* __result124__;
void* right_value454;
void* right_value460;
struct map$2charphsVarph* result_304;
void* right_value461;
void* right_value462;
struct list$1charp* __dec_obj90;
char* it_307;
struct sVar* default_value_310;
struct sVar* it2_313;
struct map$2charphsVarph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value454 = (void*)0;
right_value460 = (void*)0;
memset(&result_304, 0, sizeof(struct map$2charphsVarph*));
right_value461 = (void*)0;
right_value462 = (void*)0;
memset(&it_307, 0, sizeof(char*));
memset(&default_value_310, 0, sizeof(struct sVar*));
memset(&it2_313, 0, sizeof(struct sVar*));
                                                                if(_if_conditional342=self==((void*)0),                                                                _if_conditional342) {
                                                                    __result124__ = __result_obj__ = ((void*)0);
                                                                    return __result124__;
                                                                }
                                                                result_304=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value460=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value454=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1178, "map$2charphsVarph"))))))));
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                __dec_obj90=result_304->key_list;
                                                                result_304->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value462=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value461=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1180, "list$1charp"))))))));
                                                                come_call_finalizer2(list$1charp_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(list$1charpp_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(list$1charpp_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                for(                                                                it_307=map$2charphsVarph_begin(self);                                                                !map$2charphsVarph_end(self);                                                                it_307=map$2charphsVarph_next(self)                                                                ){
                                                                    memset(&default_value_310,0,sizeof(struct sVar*));
                                                                    it2_313=map$2charphsVarph_at(self,it_307,default_value_310);
                                                                    map$2charphsVarph_insert2(result_304,it_307,it2_313);
                                                                }
                                                                __result139__ = __result_obj__ = result_304;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_304, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result139__;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value455;
void* right_value456;
void* right_value457;
int i_299;
void* right_value458;
void* right_value459;
struct list$1charp* __dec_obj89;
struct map$2charphsVarph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
memset(&i_299, 0, sizeof(int));
right_value458 = (void*)0;
right_value459 = (void*)0;
                                                                    self->keys=(char**)come_increment_ref_count(((char**)(right_value455=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1084, "char*%"))));
                                                                    right_value455 = come_decrement_ref_count2(right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value456=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1085, "sVar*%"))));
                                                                    come_call_finalizer2(sVar_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value457=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1086, "bool"))));
                                                                    right_value457 = come_decrement_ref_count2(right_value457, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    for(                                                                    i_299=0;                                                                    i_299<1024;                                                                    i_299++                                                                    ){
                                                                        self->item_existance[i_299]=(_Bool)0;
                                                                    }
                                                                    self->size=1024;
                                                                    self->len=0;
                                                                    __dec_obj89=self->key_list;
                                                                    self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value459=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value458=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1096, "list$1charp"))))))));
                                                                    come_call_finalizer2(list$1charp_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    self->it=0;
                                                                    __result126__ = __result_obj__ = self;
                                                                    come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result126__;
                                                                    come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional343;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool _if_conditional346;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional343=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional343) {
                                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional344=self!=((void*)0)&&self->mCValueName!=((void*)0),                                                                        _if_conditional344) {
                                                                            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional345=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional345) {
                                                                            come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional346=self!=((void*)0)&&self->mFunName!=((void*)0),                                                                        _if_conditional346) {
                                                                            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result125__ = __result_obj__ = self;
                                                                        come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result125__;
                                                                        come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_300;
_Bool _while_condtional34;
struct list_item$1charp* prev_it_301;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_300, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_301, 0, sizeof(struct list_item$1charp*));
                                                                            it_300=self->head;
                                                                            while(_while_condtional34=it_300!=((void*)0),                                                                            _while_condtional34) {
                                                                                prev_it_301=it_300;
                                                                                it_300=it_300->next;
                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_302;
_Bool _if_conditional347;
_Bool _if_conditional348;
int i_303;
_Bool _if_conditional349;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_302, 0, sizeof(int));
memset(&i_303, 0, sizeof(int));
                                                                        for(                                                                        i_302=0;                                                                        i_302<self->size;                                                                        i_302++                                                                        ){
                                                                            if(_if_conditional347=self->item_existance[i_302],                                                                            _if_conditional347) {
                                                                                if(_if_conditional348=1,                                                                                _if_conditional348) {
                                                                                    come_call_finalizer2(sVar_finalize,self->items[i_302], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->items);
                                                                        for(                                                                        i_303=0;                                                                        i_303<self->size;                                                                        i_303++                                                                        ){
                                                                            if(_if_conditional349=self->item_existance[i_303],                                                                            _if_conditional349) {
                                                                                if(_if_conditional350=1,                                                                                _if_conditional350) {
                                                                                    self->keys[i_303] = come_decrement_ref_count2(self->keys[i_303], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->keys);
                                                                        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional351;
char* result_305;
char* __result127__;
_Bool _if_conditional352;
char* __result128__;
char* result_306;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_305, 0, sizeof(char*));
memset(&result_306, 0, sizeof(char*));
                                                                    if(_if_conditional351=self==((void*)0),                                                                    _if_conditional351) {
                                                                        memset(&result_305,0,sizeof(char*));
                                                                        __result127__ = __result_obj__ = result_305;
                                                                        return __result127__;
                                                                    }
                                                                    self->key_list->it=self->key_list->head;
                                                                    if(self->key_list->it) {
                                                                        __result128__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result128__;
                                                                    }
                                                                    memset(&result_306,0,sizeof(char*));
                                                                    __result129__ = __result_obj__ = result_306;
                                                                    return __result129__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    __result130__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                                    return __result130__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional353;
char* result_308;
char* __result131__;
_Bool _if_conditional354;
char* __result132__;
char* result_309;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_308, 0, sizeof(char*));
memset(&result_309, 0, sizeof(char*));
                                                                    if(_if_conditional353=self==((void*)0)||self->key_list->it==((void*)0),                                                                    _if_conditional353) {
                                                                        memset(&result_308,0,sizeof(char*));
                                                                        __result131__ = __result_obj__ = result_308;
                                                                        return __result131__;
                                                                    }
                                                                    self->key_list->it=self->key_list->it->next;
                                                                    if(self->key_list->it) {
                                                                        __result132__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result132__;
                                                                    }
                                                                    memset(&result_309,0,sizeof(char*));
                                                                    __result133__ = __result_obj__ = result_309;
                                                                    return __result133__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_311;
unsigned int it_312;
_Bool _while_condtional35;
_Bool _if_conditional355;
_Bool _if_conditional356;
struct sVar* __result134__;
_Bool _if_conditional357;
_Bool _if_conditional358;
struct sVar* __result135__;
struct sVar* __result136__;
struct sVar* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_311, 0, sizeof(unsigned int));
memset(&it_312, 0, sizeof(unsigned int));
                                                                        hash_311=string_get_hash_key(((char*)key))%self->size;
                                                                        it_312=hash_311;
                                                                        while(_while_condtional35=(_Bool)1,                                                                        _while_condtional35) {
                                                                            if(_if_conditional355=self->item_existance[it_312],                                                                            _if_conditional355) {
                                                                                if(_if_conditional356=string_equals(self->keys[it_312],key),                                                                                _if_conditional356) {
                                                                                    __result134__ = __result_obj__ = self->items[it_312];
                                                                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result134__;
                                                                                }
                                                                                it_312++;
                                                                                if(_if_conditional357=it_312>=self->size,                                                                                _if_conditional357) {
                                                                                    it_312=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional358=it_312==hash_311,                                                                                    _if_conditional358) {
                                                                                        __result135__ = __result_obj__ = default_value;
                                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result135__;
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                __result136__ = __result_obj__ = default_value;
                                                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result136__;
                                                                            }
                                                                        }
                                                                        __result137__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result137__;
                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional359;
unsigned int hash_325;
int it_326;
_Bool _while_condtional37;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool same_key_exist_327;
char* it2_328;
_Bool _if_conditional371;
_Bool _if_conditional372;
struct map$2charphsVarph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_325, 0, sizeof(unsigned int));
memset(&it_326, 0, sizeof(int));
memset(&same_key_exist_327, 0, sizeof(_Bool));
memset(&it2_328, 0, sizeof(char*));
                                                                        if(_if_conditional359=self->len*2>=self->size,                                                                        _if_conditional359) {
                                                                            map$2charphsVarph_rehash(self);
                                                                        }
                                                                        hash_325=string_get_hash_key(key)%self->size;
                                                                        it_326=hash_325;
                                                                        while(_while_condtional37=(_Bool)1,                                                                        _while_condtional37) {
                                                                            if(_if_conditional363=self->item_existance[it_326],                                                                            _if_conditional363) {
                                                                                if(_if_conditional364=string_equals(self->keys[it_326],key),                                                                                _if_conditional364) {
                                                                                    if(_if_conditional365=1,                                                                                    _if_conditional365) {
                                                                                        self->keys[it_326] = come_decrement_ref_count2(self->keys[it_326], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        list$1charp_remove(self->key_list,self->keys[it_326]);
                                                                                        self->keys[it_326]=(char*)come_increment_ref_count(key);
                                                                                    }
                                                                                    else {
                                                                                        list$1charp_remove(self->key_list,self->keys[it_326]);
                                                                                        self->keys[it_326]=key;
                                                                                    }
                                                                                    if(_if_conditional366=1,                                                                                    _if_conditional366) {
                                                                                        come_call_finalizer2(sVar_finalize,self->items[it_326], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        self->items[it_326]=(struct sVar*)come_increment_ref_count(item);
                                                                                    }
                                                                                    else {
                                                                                        self->items[it_326]=item;
                                                                                    }
                                                                                    break;
                                                                                }
                                                                                it_326++;
                                                                                if(_if_conditional367=it_326>=self->size,                                                                                _if_conditional367) {
                                                                                    it_326=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional368=it_326==hash_325,                                                                                    _if_conditional368) {
                                                                                        printf("unexpected error in map.insert\n");
                                                                                        stackframe();
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                self->item_existance[it_326]=(_Bool)1;
                                                                                if(_if_conditional369=1,                                                                                _if_conditional369) {
                                                                                    self->keys[it_326]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    self->keys[it_326]=key;
                                                                                }
                                                                                if(_if_conditional370=1,                                                                                _if_conditional370) {
                                                                                    self->items[it_326]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    self->items[it_326]=item;
                                                                                }
                                                                                self->len++;
                                                                                break;
                                                                            }
                                                                        }
                                                                        same_key_exist_327=(_Bool)0;
                                                                        for(                                                                        it2_328=list$1charp_begin(self->key_list);                                                                        !list$1charp_end(self->key_list);                                                                        it2_328=list$1charp_next(self->key_list)                                                                        ){
                                                                            if(_if_conditional371=string_equals(it2_328,key),                                                                            _if_conditional371) {
                                                                                same_key_exist_327=(_Bool)1;
                                                                            }
                                                                        }
                                                                        if(_if_conditional372=!same_key_exist_327,                                                                        _if_conditional372) {
                                                                            list$1charp_push_back(self->key_list,key);
                                                                        }
                                                                        __result138__ = __result_obj__ = self;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result138__;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_314;
void* right_value463;
char** keys_315;
void* right_value464;
struct sVar** items_316;
void* right_value465;
_Bool* item_existance_317;
int len_318;
char* it_319;
struct sVar* default_value_320;
struct sVar* it2_321;
unsigned int hash_322;
int n_323;
_Bool _while_condtional36;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
struct sVar* default_value_324;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_314, 0, sizeof(int));
right_value463 = (void*)0;
memset(&keys_315, 0, sizeof(char**));
right_value464 = (void*)0;
memset(&items_316, 0, sizeof(struct sVar**));
right_value465 = (void*)0;
memset(&item_existance_317, 0, sizeof(_Bool*));
memset(&len_318, 0, sizeof(int));
memset(&it_319, 0, sizeof(char*));
memset(&default_value_320, 0, sizeof(struct sVar*));
memset(&it2_321, 0, sizeof(struct sVar*));
memset(&hash_322, 0, sizeof(unsigned int));
memset(&n_323, 0, sizeof(int));
memset(&default_value_324, 0, sizeof(struct sVar*));
                                                                                size_314=self->size*10;
                                                                                keys_315=(char**)come_increment_ref_count(((char**)(right_value463=(char**)come_calloc(1, sizeof(char*)*(1*(size_314)), "./comelang2.h", 1335, "char*%"))));
                                                                                right_value463 = come_decrement_ref_count2(right_value463, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                items_316=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value464=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_314)), "./comelang2.h", 1336, "sVar*%"))));
                                                                                come_call_finalizer2(sVar_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                item_existance_317=(_Bool*)come_increment_ref_count(((_Bool*)(right_value465=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_314)), "./comelang2.h", 1337, "bool"))));
                                                                                right_value465 = come_decrement_ref_count2(right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                len_318=0;
                                                                                for(                                                                                it_319=map$2charphsVarph_begin(self);                                                                                !map$2charphsVarph_end(self);                                                                                it_319=map$2charphsVarph_next(self)                                                                                ){
                                                                                    memset(&default_value_320,0,sizeof(struct sVar*));
                                                                                    it2_321=map$2charphsVarph_at(self,it_319,default_value_320);
                                                                                    hash_322=string_get_hash_key(it_319)%size_314;
                                                                                    n_323=hash_322;
                                                                                    while(_while_condtional36=(_Bool)1,                                                                                    _while_condtional36) {
                                                                                        if(_if_conditional360=item_existance_317[n_323],                                                                                        _if_conditional360) {
                                                                                            n_323++;
                                                                                            if(_if_conditional361=n_323>=size_314,                                                                                            _if_conditional361) {
                                                                                                n_323=0;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional362=n_323==hash_322,                                                                                                _if_conditional362) {
                                                                                                    printf("unexpected error in map.rehash(1)\n");
                                                                                                    stackframe();
                                                                                                    exit(2);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            item_existance_317[n_323]=(_Bool)1;
                                                                                            keys_315[n_323]=it_319;
                                                                                            items_316[n_323]=map$2charphsVarph_at(self,it_319,default_value_324);
                                                                                            len_318++;
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                come_free((char*)self->items);
                                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_free((char*)self->keys);
                                                                                self->keys=keys_315;
                                                                                self->items=items_316;
                                                                                self->item_existance=item_existance_317;
                                                                                self->size=size_314;
                                                                                self->len=len_318;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional373;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional373=self!=((void*)0)&&self->key_list!=((void*)0),                                                                _if_conditional373) {
                                                                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_338;
struct sType* type_342;
struct sClass* generics_class_343;
void* right_value485;
_Bool generics_type_name_345;
void* right_value486;
_Bool mgenerics_type_name_346;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_338, 0, sizeof(struct sClass*));
memset(&type_342, 0, sizeof(struct sType*));
memset(&generics_class_343, 0, sizeof(struct sClass*));
right_value485 = (void*)0;
memset(&generics_type_name_345, 0, sizeof(_Bool));
right_value486 = (void*)0;
memset(&mgenerics_type_name_346, 0, sizeof(_Bool));
    klass_338=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_342=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_343=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_345=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value485=__builtin_string(buf)))));
    right_value485 = come_decrement_ref_count2(right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    mgenerics_type_name_346=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value486=__builtin_string(buf)))));
    right_value486 = come_decrement_ref_count2(right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result158__ = generics_class_343||generics_type_name_345||mgenerics_type_name_346||klass_338||type_342||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
    return __result158__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_333;
unsigned int hash_334;
unsigned int it_335;
_Bool _while_condtional38;
_Bool _if_conditional391;
_Bool _if_conditional392;
struct sClass* __result148__;
_Bool _if_conditional399;
_Bool _if_conditional400;
struct sClass* __result149__;
struct sClass* __result150__;
struct sClass* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_333, 0, sizeof(struct sClass*));
memset(&hash_334, 0, sizeof(unsigned int));
memset(&it_335, 0, sizeof(unsigned int));
        memset(&default_value_333,0,sizeof(struct sClass*));
        hash_334=string_get_hash_key(((char*)key))%self->size;
        it_335=hash_334;
        while(_while_condtional38=(_Bool)1,        _while_condtional38) {
            if(_if_conditional391=self->item_existance[it_335],            _if_conditional391) {
                if(_if_conditional392=string_equals(self->keys[it_335],key),                _if_conditional392) {
                    __result148__ = __result_obj__ = self->items[it_335];
                    come_call_finalizer2(sClass_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result148__;
                }
                it_335++;
                if(_if_conditional399=it_335>=self->size,                _if_conditional399) {
                    it_335=0;
                }
                else {
                    if(_if_conditional400=it_335==hash_334,                    _if_conditional400) {
                        __result149__ = __result_obj__ = default_value_333;
                        come_call_finalizer2(sClass_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result149__;
                    }
                }
            }
            else {
                __result150__ = __result_obj__ = default_value_333;
                come_call_finalizer2(sClass_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result150__;
            }
        }
        __result151__ = __result_obj__ = default_value_333;
        come_call_finalizer2(sClass_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result151__;
        come_call_finalizer2(sClass_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional398;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional393=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional393) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional394=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional394) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional398=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional398) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_336;
_Bool _while_condtional39;
struct list_item$1tuple2$2charphsTypephph* prev_it_337;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_336, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_337, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_336=self->head;
                                while(_while_condtional39=it_336!=((void*)0),                                _while_condtional39) {
                                    prev_it_337=it_336;
                                    it_336=it_336->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_337, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional395;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional395=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional395) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional396;
_Bool _if_conditional397;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional396=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional396) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional397=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional397) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_339;
unsigned int hash_340;
unsigned int it_341;
_Bool _while_condtional40;
_Bool _if_conditional401;
_Bool _if_conditional402;
struct sType* __result152__;
_Bool _if_conditional403;
_Bool _if_conditional404;
struct sType* __result153__;
struct sType* __result154__;
struct sType* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_339, 0, sizeof(struct sType*));
memset(&hash_340, 0, sizeof(unsigned int));
memset(&it_341, 0, sizeof(unsigned int));
        memset(&default_value_339,0,sizeof(struct sType*));
        hash_340=string_get_hash_key(((char*)key))%self->size;
        it_341=hash_340;
        while(_while_condtional40=(_Bool)1,        _while_condtional40) {
            if(_if_conditional401=self->item_existance[it_341],            _if_conditional401) {
                if(_if_conditional402=string_equals(self->keys[it_341],key),                _if_conditional402) {
                    __result152__ = __result_obj__ = self->items[it_341];
                    come_call_finalizer2(sType_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result152__;
                }
                it_341++;
                if(_if_conditional403=it_341>=self->size,                _if_conditional403) {
                    it_341=0;
                }
                else {
                    if(_if_conditional404=it_341==hash_340,                    _if_conditional404) {
                        __result153__ = __result_obj__ = default_value_339;
                        come_call_finalizer2(sType_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result153__;
                    }
                }
            }
            else {
                __result154__ = __result_obj__ = default_value_339;
                come_call_finalizer2(sType_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result154__;
            }
        }
        __result155__ = __result_obj__ = default_value_339;
        come_call_finalizer2(sType_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result155__;
        come_call_finalizer2(sType_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_344;
_Bool _if_conditional405;
_Bool __result156__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_344, 0, sizeof(char*));
        for(        it_344=list$1charph_begin(self);        !list$1charph_end(self);        it_344=list$1charph_next(self)        ){
            if(_if_conditional405=string_operator_equals(it_344,item),            _if_conditional405) {
                __result156__ = (_Bool)1;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result156__;
            }
        }
        __result157__ = (_Bool)0;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result157__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_347;
int caller_line_348;
char* caller_sname_349;
char* last_code_350;
char* __dec_obj102;
char* last_code2_351;
char* __dec_obj103;
char* last_code3_352;
char* __dec_obj104;
void* right_value487;
char* sname_top_353;
int sline_top_354;
_Bool _if_conditional406;
struct sFun* funX_355;
_Bool _if_conditional407;
_Bool __result159__;
void* right_value488;
struct sType* result_type_356;
void* right_value489;
void* right_value490;
struct list$1sTypeph* param_types_357;
struct list$1sTypeph* o2_saved_358;
struct sType* it_361;
void* right_value491;
void* right_value492;
struct sType* param_type_364;
void* right_value493;
void* right_value494;
struct list$1charph* param_names_365;
void* right_value495;
struct list$1charph* param_default_parametors_366;
char* p_367;
int sline_368;
char* sname_369;
char* head_370;
struct buffer* source_371;
void* right_value496;
struct buffer* __dec_obj105;
struct sType* generics_type_saved_372;
void* right_value497;
struct sType* __dec_obj106;
struct list$1charph* method_generics_type_names_373;
void* right_value498;
void* right_value499;
struct list$1charph* __dec_obj107;
struct list$1charph* o2_saved_374;
char* it_375;
void* right_value500;
void* right_value501;
struct list$1charph* __dec_obj108;
char* __dec_obj109;
void* right_value502;
struct sBlock* block_376;
struct buffer* __dec_obj110;
char* __dec_obj111;
_Bool var_args_377;
void* right_value503;
void* right_value504;
void* right_value505;
void* right_value506;
void* right_value507;
struct sFun* fun_378;
void* right_value508;
void* right_value509;
void* right_value510;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value514;
struct sNode* node_380;
_Bool _if_conditional418;
_Bool __result169__;
struct sType* __dec_obj114;
struct list$1charph* __dec_obj115;
struct list$1charph* __dec_obj116;
void* right_value515;
char* __dec_obj117;
char* __dec_obj118;
char* __dec_obj119;
char* __dec_obj120;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_347, 0, sizeof(struct sFun*));
memset(&caller_line_348, 0, sizeof(int));
memset(&caller_sname_349, 0, sizeof(char*));
memset(&last_code_350, 0, sizeof(char*));
memset(&last_code2_351, 0, sizeof(char*));
memset(&last_code3_352, 0, sizeof(char*));
right_value487 = (void*)0;
memset(&sname_top_353, 0, sizeof(char*));
memset(&sline_top_354, 0, sizeof(int));
memset(&funX_355, 0, sizeof(struct sFun*));
right_value488 = (void*)0;
memset(&result_type_356, 0, sizeof(struct sType*));
right_value489 = (void*)0;
right_value490 = (void*)0;
memset(&param_types_357, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_358, 0, sizeof(struct list$1sTypeph*));
memset(&it_361, 0, sizeof(struct sType*));
right_value491 = (void*)0;
right_value492 = (void*)0;
memset(&param_type_364, 0, sizeof(struct sType*));
right_value493 = (void*)0;
right_value494 = (void*)0;
memset(&param_names_365, 0, sizeof(struct list$1charph*));
right_value495 = (void*)0;
memset(&param_default_parametors_366, 0, sizeof(struct list$1charph*));
memset(&p_367, 0, sizeof(char*));
memset(&sline_368, 0, sizeof(int));
memset(&sname_369, 0, sizeof(char*));
memset(&head_370, 0, sizeof(char*));
memset(&source_371, 0, sizeof(struct buffer*));
right_value496 = (void*)0;
memset(&generics_type_saved_372, 0, sizeof(struct sType*));
right_value497 = (void*)0;
memset(&method_generics_type_names_373, 0, sizeof(struct list$1charph*));
right_value498 = (void*)0;
right_value499 = (void*)0;
memset(&o2_saved_374, 0, sizeof(struct list$1charph*));
memset(&it_375, 0, sizeof(char*));
right_value500 = (void*)0;
right_value501 = (void*)0;
right_value502 = (void*)0;
memset(&block_376, 0, sizeof(struct sBlock*));
memset(&var_args_377, 0, sizeof(_Bool));
right_value503 = (void*)0;
right_value504 = (void*)0;
right_value505 = (void*)0;
right_value506 = (void*)0;
right_value507 = (void*)0;
memset(&fun_378, 0, sizeof(struct sFun*));
right_value508 = (void*)0;
right_value509 = (void*)0;
right_value510 = (void*)0;
right_value514 = (void*)0;
memset(&node_380, 0, sizeof(struct sNode*));
right_value515 = (void*)0;
    caller_fun_347=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_348=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_349=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_350=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj102=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_351=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj103=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_352=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj104=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_353=(char*)come_increment_ref_count(((char*)(right_value487=__builtin_string(info->sname))));
    right_value487 = come_decrement_ref_count2(right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_top_354=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_355=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_355) {
        __result159__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_350 = come_decrement_ref_count2(last_code_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_351 = come_decrement_ref_count2(last_code2_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_352 = come_decrement_ref_count2(last_code3_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_353 = come_decrement_ref_count2(sname_top_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result159__;
    }
    result_type_356=(struct sType*)come_increment_ref_count(((struct sType*)(right_value488=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_types_357=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value490=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value489=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1345, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_358=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_361=list$1sTypeph_begin((o2_saved_358));    !list$1sTypeph_end((o2_saved_358));    it_361=list$1sTypeph_next((o2_saved_358))    ){
        param_type_364=(struct sType*)come_increment_ref_count(((struct sType*)(right_value492=solve_generics(((struct sType*)(right_value491=sType_clone(it_361))),generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_type_364->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_357,(struct sType*)come_increment_ref_count(((struct sType*)(right_value493=sType_clone(param_type_364)))));
        come_call_finalizer2(sType_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,param_type_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_358, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    param_names_365=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value494=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer2(list$1charphp_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_366=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value495=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer2(list$1charphp_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    p_367=info->p;
    sline_368=info->sline;
    sname_369=(char*)come_increment_ref_count(info->sname);
    head_370=info->head;
    source_371=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj105=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value496=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer2(buffer_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_372=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj106=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value497=sType_clone(generics_type))));
    come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    method_generics_type_names_373=info->method_generics_type_names;
    __dec_obj107=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value499=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value498=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1372, "list$1charph"))))))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_374=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_375=list$1charph_begin((o2_saved_374));    !list$1charph_end((o2_saved_374));    it_375=list$1charph_next((o2_saved_374))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value500=string_clone(it_375)))));
        right_value500 = come_decrement_ref_count2(right_value500, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_374, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj108=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value501=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj109=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_376=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value502=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->head=head_370;
    __dec_obj110=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_371);
    come_call_finalizer2(buffer_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    info->p=p_367;
    info->sline=sline_368;
    __dec_obj111=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_369);
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_356->mInline=(_Bool)0;
    var_args_377=generics_fun->mVarArgs;
    fun_378=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value507=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value503=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1394, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_356),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value504=list$1sTypephp_clone(param_types_357)))),(struct list$1charph*)come_increment_ref_count(param_names_365),(struct list$1charph*)come_increment_ref_count(param_default_parametors_366),(_Bool)0,var_args_377,(struct sBlock*)come_increment_ref_count(block_376),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value505=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value506=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value505 = come_decrement_ref_count2(right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value506 = come_decrement_ref_count2(right_value506, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value508=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_378));
    right_value508 = come_decrement_ref_count2(right_value508, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1401, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value510=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value509=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1401, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_378),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sFunNode_sline;
    _inf_value2->sname=(void*)sFunNode_sname;
    _inf_value2->terminated=(void*)sFunNode_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    node_380=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value514=_inf_value2)));
    come_call_finalizer2(sFunNode_finalize,right_value509, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunNode_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value514) { right_value514 = come_decrement_ref_count2(right_value514, ((struct sNode*)right_value514)->finalize, ((struct sNode*)right_value514)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if(_if_conditional418=!node_compile(node_380,info),    _if_conditional418) {
        __result169__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_350 = come_decrement_ref_count2(last_code_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_351 = come_decrement_ref_count2(last_code2_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_352 = come_decrement_ref_count2(last_code3_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_353 = come_decrement_ref_count2(sname_top_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_357, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_366, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_369 = come_decrement_ref_count2(sname_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,generics_type_saved_372, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_380) { node_380 = come_decrement_ref_count2(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result169__;
    }
    __dec_obj114=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_372);
    come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,info->method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj115=method_generics_type_names_373;
    __dec_obj116=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_373);
    come_call_finalizer2(list$1charph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj117=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value515=__builtin_string(sname_top_353))));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value515 = come_decrement_ref_count2(right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=sline_top_354;
    __dec_obj118=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_350);
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj119=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_351);
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj120=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_352);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_347;
    info->caller_line=caller_line_348;
    info->caller_sname=caller_sname_349;
    __result170__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_350 = come_decrement_ref_count2(last_code_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_351 = come_decrement_ref_count2(last_code2_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_352 = come_decrement_ref_count2(last_code3_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_353 = come_decrement_ref_count2(sname_top_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_357, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_366, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_369 = come_decrement_ref_count2(sname_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_372, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_380) { node_380 = come_decrement_ref_count2(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result170__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_350 = come_decrement_ref_count2(last_code_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_351 = come_decrement_ref_count2(last_code2_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_352 = come_decrement_ref_count2(last_code3_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_353 = come_decrement_ref_count2(sname_top_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_357, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_366, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_369 = come_decrement_ref_count2(sname_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_372, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_380) { node_380 = come_decrement_ref_count2(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional408;
struct sType* result_359;
struct sType* __result160__;
_Bool _if_conditional409;
struct sType* __result161__;
struct sType* result_360;
struct sType* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_359, 0, sizeof(struct sType*));
memset(&result_360, 0, sizeof(struct sType*));
        if(_if_conditional408=self==((void*)0),        _if_conditional408) {
            memset(&result_359,0,sizeof(struct sType*));
            __result160__ = __result_obj__ = result_359;
            return __result160__;
        }
        self->it=self->head;
        if(self->it) {
            __result161__ = __result_obj__ = self->it->item;
            return __result161__;
        }
        memset(&result_360,0,sizeof(struct sType*));
        __result162__ = __result_obj__ = result_360;
        return __result162__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
        __result163__ = self==((void*)0)||self->it==((void*)0);
        return __result163__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional410;
struct sType* result_362;
struct sType* __result164__;
_Bool _if_conditional411;
struct sType* __result165__;
struct sType* result_363;
struct sType* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_362, 0, sizeof(struct sType*));
memset(&result_363, 0, sizeof(struct sType*));
        if(_if_conditional410=self==((void*)0)||self->it==((void*)0),        _if_conditional410) {
            memset(&result_362,0,sizeof(struct sType*));
            __result164__ = __result_obj__ = result_362;
            return __result164__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result165__ = __result_obj__ = self->it->item;
            return __result165__;
        }
        memset(&result_363,0,sizeof(struct sType*));
        __result166__ = __result_obj__ = result_363;
        return __result166__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_381;
char* source_head_382;
void* right_value516;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type_383;
char* var_name_384;
_Bool err_385;
_Bool _if_conditional419;
_Bool method_definition_386;
char* p_387;
int sline_388;
void* right_value517;
void* right_value518;
struct buffer* buf2_389;
_Bool _while_condtional41;
_Bool _while_condtional42;
_Bool _while_condtional43;
_Bool _while_condtional44;
_Bool _if_conditional420;
char* fun_name_390;
char* base_fun_name_391;
_Bool _if_conditional421;
void* right_value519;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_392;
char* name_393;
_Bool err_394;
_Bool _if_conditional422;
void* right_value520;
void* right_value521;
char* __dec_obj121;
_Bool _if_conditional423;
void* right_value522;
void* right_value523;
char* __dec_obj122;
void* right_value524;
char* __dec_obj123;
void* right_value525;
void* right_value526;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_395;
struct list$1charph* param_names_396;
struct list$1charph* param_default_parametors_397;
_Bool var_args_398;
char* header_tail_399;
void* right_value527;
void* right_value528;
struct buffer* header_buf_400;
int version_401;
_Bool _if_conditional427;
int n_402;
_Bool _while_condtional45;
_Bool _if_conditional428;
void* right_value529;
struct sBlock* block_403;
static int lambda_num_404=0;
void* right_value530;
char* fun_name_405;
void* right_value531;
void* right_value532;
void* right_value533;
void* right_value534;
void* right_value535;
struct sFun* fun_406;
void* right_value536;
struct sFun* fun2_407;
_Bool _if_conditional429;
void* right_value537;
void* right_value538;
void* right_value539;
struct sNode* _inf_value3;
struct sLambdaNode* _inf_obj_value3;
void* right_value542;
struct sNode* __result173__;
_Bool _if_conditional435;
void* right_value543;
char* none_generics_name_409;
void* right_value544;
char* generics_sname_410;
int generics_sline_411;
void* right_value545;
char* block_412;
void* right_value546;
void* right_value547;
void* right_value548;
void* right_value549;
void* right_value550;
void* right_value551;
struct sGenericsFun* fun_413;
void* right_value552;
char* fun_name3_414;
void* right_value556;
struct sNode* __result187__;
_Bool _if_conditional458;
char* source_tail_436;
void* right_value557;
void* right_value558;
struct buffer* header_437;
void* right_value559;
void* right_value560;
struct sBlock* block_438;
_Bool static__439;
_Bool _if_conditional459;
_Bool _if_conditional460;
void* right_value561;
void* right_value562;
char* new_fun_name_440;
void* right_value563;
char* __dec_obj125;
void* right_value564;
void* right_value565;
void* right_value566;
void* right_value567;
void* right_value568;
void* right_value569;
struct sFun* fun_441;
void* right_value570;
struct sFun* fun2_442;
_Bool _if_conditional461;
void* right_value571;
void* right_value572;
void* right_value573;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* right_value577;
struct sNode* __result190__;
_Bool _if_conditional468;
_Bool _if_conditional469;
void* right_value578;
char* new_fun_name_444;
void* right_value579;
char* __dec_obj128;
_Bool _if_conditional470;
void* right_value580;
void* right_value581;
void* right_value582;
void* right_value583;
void* right_value584;
struct sFun* fun_445;
void* right_value585;
struct sFun* fun2_446;
_Bool _if_conditional471;
void* right_value586;
char* source_tail_447;
void* right_value587;
void* right_value588;
struct buffer* header_448;
void* right_value589;
void* right_value590;
void* right_value591;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value595;
struct sNode* __result193__;
void* right_value596;
char* asm_fun_450;
_Bool _if_conditional478;
void* right_value597;
char* __dec_obj131;
void* right_value598;
void* right_value599;
void* right_value600;
void* right_value601;
void* right_value602;
struct sFun* fun_451;
void* right_value603;
struct sFun* fun2_452;
_Bool _if_conditional479;
void* right_value604;
char* source_tail_453;
void* right_value605;
void* right_value606;
struct buffer* header_454;
void* right_value607;
void* right_value608;
void* right_value609;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value613;
struct sNode* __result196__;
struct sNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_381, 0, sizeof(char*));
memset(&source_head_382, 0, sizeof(char*));
right_value516 = (void*)0;
memset(&result_type_383, 0, sizeof(struct sType*));
memset(&var_name_384, 0, sizeof(char*));
memset(&err_385, 0, sizeof(_Bool));
memset(&result_type_383, 0, sizeof(struct sType*));
memset(&var_name_384, 0, sizeof(char*));
memset(&err_385, 0, sizeof(_Bool));
memset(&method_definition_386, 0, sizeof(_Bool));
memset(&p_387, 0, sizeof(char*));
memset(&sline_388, 0, sizeof(int));
right_value517 = (void*)0;
right_value518 = (void*)0;
memset(&buf2_389, 0, sizeof(struct buffer*));
memset(&fun_name_390, 0, sizeof(char*));
memset(&base_fun_name_391, 0, sizeof(char*));
right_value519 = (void*)0;
memset(&obj_type_392, 0, sizeof(struct sType*));
memset(&name_393, 0, sizeof(char*));
memset(&err_394, 0, sizeof(_Bool));
memset(&obj_type_392, 0, sizeof(struct sType*));
memset(&name_393, 0, sizeof(char*));
memset(&err_394, 0, sizeof(_Bool));
right_value520 = (void*)0;
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value523 = (void*)0;
right_value524 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
memset(&param_types_395, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_396, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_397, 0, sizeof(struct list$1charph*));
memset(&var_args_398, 0, sizeof(_Bool));
memset(&param_types_395, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_396, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_397, 0, sizeof(struct list$1charph*));
memset(&var_args_398, 0, sizeof(_Bool));
memset(&header_tail_399, 0, sizeof(char*));
right_value527 = (void*)0;
right_value528 = (void*)0;
memset(&header_buf_400, 0, sizeof(struct buffer*));
memset(&version_401, 0, sizeof(int));
memset(&n_402, 0, sizeof(int));
right_value529 = (void*)0;
memset(&block_403, 0, sizeof(struct sBlock*));
right_value530 = (void*)0;
memset(&fun_name_405, 0, sizeof(char*));
right_value531 = (void*)0;
right_value532 = (void*)0;
right_value533 = (void*)0;
right_value534 = (void*)0;
right_value535 = (void*)0;
memset(&fun_406, 0, sizeof(struct sFun*));
right_value536 = (void*)0;
memset(&fun2_407, 0, sizeof(struct sFun*));
right_value537 = (void*)0;
right_value538 = (void*)0;
right_value539 = (void*)0;
right_value542 = (void*)0;
right_value543 = (void*)0;
memset(&none_generics_name_409, 0, sizeof(char*));
right_value544 = (void*)0;
memset(&generics_sname_410, 0, sizeof(char*));
memset(&generics_sline_411, 0, sizeof(int));
right_value545 = (void*)0;
memset(&block_412, 0, sizeof(char*));
right_value546 = (void*)0;
right_value547 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
right_value550 = (void*)0;
right_value551 = (void*)0;
memset(&fun_413, 0, sizeof(struct sGenericsFun*));
right_value552 = (void*)0;
memset(&fun_name3_414, 0, sizeof(char*));
right_value556 = (void*)0;
memset(&source_tail_436, 0, sizeof(char*));
right_value557 = (void*)0;
right_value558 = (void*)0;
memset(&header_437, 0, sizeof(struct buffer*));
right_value559 = (void*)0;
right_value560 = (void*)0;
memset(&block_438, 0, sizeof(struct sBlock*));
memset(&static__439, 0, sizeof(_Bool));
right_value561 = (void*)0;
right_value562 = (void*)0;
memset(&new_fun_name_440, 0, sizeof(char*));
right_value563 = (void*)0;
right_value564 = (void*)0;
right_value565 = (void*)0;
right_value566 = (void*)0;
right_value567 = (void*)0;
right_value568 = (void*)0;
right_value569 = (void*)0;
memset(&fun_441, 0, sizeof(struct sFun*));
right_value570 = (void*)0;
memset(&fun2_442, 0, sizeof(struct sFun*));
right_value571 = (void*)0;
right_value572 = (void*)0;
right_value573 = (void*)0;
right_value577 = (void*)0;
right_value578 = (void*)0;
memset(&new_fun_name_444, 0, sizeof(char*));
right_value579 = (void*)0;
right_value580 = (void*)0;
right_value581 = (void*)0;
right_value582 = (void*)0;
right_value583 = (void*)0;
right_value584 = (void*)0;
memset(&fun_445, 0, sizeof(struct sFun*));
right_value585 = (void*)0;
memset(&fun2_446, 0, sizeof(struct sFun*));
right_value586 = (void*)0;
memset(&source_tail_447, 0, sizeof(char*));
right_value587 = (void*)0;
right_value588 = (void*)0;
memset(&header_448, 0, sizeof(struct buffer*));
right_value589 = (void*)0;
right_value590 = (void*)0;
right_value591 = (void*)0;
right_value595 = (void*)0;
right_value596 = (void*)0;
memset(&asm_fun_450, 0, sizeof(char*));
right_value597 = (void*)0;
right_value598 = (void*)0;
right_value599 = (void*)0;
right_value600 = (void*)0;
right_value601 = (void*)0;
right_value602 = (void*)0;
memset(&fun_451, 0, sizeof(struct sFun*));
right_value603 = (void*)0;
memset(&fun2_452, 0, sizeof(struct sFun*));
right_value604 = (void*)0;
memset(&source_tail_453, 0, sizeof(char*));
right_value605 = (void*)0;
right_value606 = (void*)0;
memset(&header_454, 0, sizeof(struct buffer*));
right_value607 = (void*)0;
right_value608 = (void*)0;
right_value609 = (void*)0;
right_value613 = (void*)0;
    header_head_381=info->p;
    source_head_382=info->p;
    multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value516=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    result_type_383=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
    var_name_384=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    err_385=multiple_assign_var7->v3;
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional419=!err_385,    _if_conditional419) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    method_definition_386=(_Bool)0;
    {
        p_387=info->p;
        sline_388=info->sline;
        buf2_389=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value518=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value517=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1444, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value517, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional41=xisalnum(*info->p)||*info->p==95,        _while_condtional41) {
            buffer_append_char(buf2_389,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(_while_condtional42=*info->p==91&&*(info->p+1)==93,        _while_condtional42) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(_while_condtional43=*info->p==42,        _while_condtional43) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(_while_condtional44=*info->p==37,        _while_condtional44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(_if_conditional420=buffer_length(buf2_389)>0&&*info->p==58&&*(info->p+1)==58,        _if_conditional420) {
            method_definition_386=(_Bool)1;
        }
        info->p=p_387;
        info->sline=sline_388;
        come_call_finalizer2(buffer_finalize,buf2_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_391=((void*)0);
    if(method_definition_386) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value519=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_392=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_393=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_394=multiple_assign_var8->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional422=!err_394,        _if_conditional422) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        base_fun_name_391=(char*)come_increment_ref_count(((char*)(right_value520=parse_word(info))));
        right_value520 = come_decrement_ref_count2(right_value520, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj121=fun_name_390;
        fun_name_390=(char*)come_increment_ref_count(((char*)(right_value521=create_method_name(obj_type_392,(_Bool)0,base_fun_name_391,info,(_Bool)1))));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value521 = come_decrement_ref_count2(right_value521, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,obj_type_392, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_393 = come_decrement_ref_count2(name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type) {
            base_fun_name_391=(char*)come_increment_ref_count(((char*)(right_value522=parse_word(info))));
            right_value522 = come_decrement_ref_count2(right_value522, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj122=fun_name_390;
            fun_name_390=(char*)come_increment_ref_count(((char*)(right_value523=create_method_name(info->impl_type,(_Bool)0,base_fun_name_391,info,(_Bool)1))));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value523 = come_decrement_ref_count2(right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj123=fun_name_390;
            fun_name_390=(char*)come_increment_ref_count(((char*)(right_value524=parse_word(info))));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value524 = come_decrement_ref_count2(right_value524, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_391=(char*)come_increment_ref_count(((char*)(right_value525=__builtin_string(fun_name_390))));
            right_value525 = come_decrement_ref_count2(right_value525, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value526=parse_params(info)));
    param_types_395=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_396=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_397=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_398=multiple_assign_var9->v4;
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    header_tail_399=info->p;
    header_buf_400=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value528=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value527=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1501, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(header_buf_400,header_head_381,header_tail_399-header_head_381);
    buffer_append_char(header_buf_400,0);
    version_401=0;
    if(_if_conditional427=strmemcmp(info->p,"version"),    _if_conditional427) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_402=0;
        while(_while_condtional45=xisdigit(*info->p),        _while_condtional45) {
            n_402=n_402*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_401=n_402;
    }
    if(_if_conditional428=charp_operator_equals(base_fun_name_391,"lambda"),    _if_conditional428) {
        block_403=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value529=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        lambda_num_404++;
        fun_name_405=(char*)come_increment_ref_count(((char*)(right_value530=xsprintf("lambda%d",lambda_num_404))));
        right_value530 = come_decrement_ref_count2(right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_383->mStatic=(_Bool)0;
        fun_406=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value535=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value531=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1531, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value532=__builtin_string(fun_name_405)))),(struct sType*)come_increment_ref_count(result_type_383),(struct list$1sTypeph*)come_increment_ref_count(param_types_395),(struct list$1charph*)come_increment_ref_count(param_names_396),(struct list$1charph*)come_increment_ref_count(param_default_parametors_397),(_Bool)0,var_args_398,(struct sBlock*)come_increment_ref_count(block_403),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value533=buffer_to_string(header_buf_400)))),(char*)come_increment_ref_count(((char*)(right_value534=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value532 = come_decrement_ref_count2(right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value533 = come_decrement_ref_count2(right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value534 = come_decrement_ref_count2(right_value534, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_407=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value536=__builtin_string(fun_name_405))));
        right_value536 = come_decrement_ref_count2(right_value536, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional429=fun2_407==((void*)0)||fun2_407->mExternal,        _if_conditional429) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value537=string_clone(fun_name_405)))),(struct sFun*)come_increment_ref_count(fun_406));
            right_value537 = come_decrement_ref_count2(right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        base_fun_name_391 = come_decrement_ref_count2(base_fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1543, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sLambdaNode*)(right_value539=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value538=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function2.c", 1543, "sLambdaNode")))),fun_406,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sLambdaNode_finalize;
        _inf_value3->clone=(void*)sLambdaNode_clone;
        _inf_value3->compile=(void*)sLambdaNode_compile;
        _inf_value3->sline=(void*)sLambdaNode_sline;
        _inf_value3->sname=(void*)sLambdaNode_sname;
        _inf_value3->terminated=(void*)sLambdaNode_terminated;
        _inf_value3->kind=(void*)sLambdaNode_kind;
        __result173__ = __result_obj__ = ((struct sNode*)(right_value542=_inf_value3));
        come_call_finalizer2(sBlock_finalize,block_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_405 = come_decrement_ref_count2(fun_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sLambdaNode_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sLambdaNode_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value542) { right_value542 = come_decrement_ref_count2(right_value542, ((struct sNode*)right_value542)->finalize, ((struct sNode*)right_value542)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result173__;
        come_call_finalizer2(sBlock_finalize,block_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_405 = come_decrement_ref_count2(fun_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional435=info->impl_type&&list$1charph_length(info->generics_type_names)>0,        _if_conditional435) {
            none_generics_name_409=(char*)come_increment_ref_count(((char*)(right_value543=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value543 = come_decrement_ref_count2(right_value543, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sname_410=(char*)come_increment_ref_count(((char*)(right_value544=__builtin_string(info->sname))));
            right_value544 = come_decrement_ref_count2(right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sline_411=info->sline;
            block_412=(char*)come_increment_ref_count(((char*)(right_value545=skip_block(info))));
            right_value545 = come_decrement_ref_count2(right_value545, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_413=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value551=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value546=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function2.c", 1553, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value547=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value548=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value549=__builtin_string(fun_name_390)))),(struct sType*)come_increment_ref_count(result_type_383),(struct list$1sTypeph*)come_increment_ref_count(param_types_395),(struct list$1charph*)come_increment_ref_count(param_names_396),(struct list$1charph*)come_increment_ref_count(param_default_parametors_397),var_args_398,(char*)come_increment_ref_count(block_412),info,(char*)come_increment_ref_count(((char*)(right_value550=__builtin_string(generics_sname_410)))),generics_sline_411))));
            come_call_finalizer2(sGenericsFun_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value549 = come_decrement_ref_count2(right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value550 = come_decrement_ref_count2(right_value550, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGenericsFun_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            fun_name3_414=(char*)come_increment_ref_count(((char*)(right_value552=xsprintf("%s_%s",none_generics_name_409,base_fun_name_391))));
            right_value552 = come_decrement_ref_count2(right_value552, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value556=__builtin_string(fun_name3_414)))),(struct sGenericsFun*)come_increment_ref_count(fun_413));
            right_value556 = come_decrement_ref_count2(right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_391 = come_decrement_ref_count2(base_fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result187__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_409 = come_decrement_ref_count2(none_generics_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_410 = come_decrement_ref_count2(generics_sname_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_412 = come_decrement_ref_count2(block_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_413, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_414 = come_decrement_ref_count2(fun_name3_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result187__;
            none_generics_name_409 = come_decrement_ref_count2(none_generics_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_410 = come_decrement_ref_count2(generics_sname_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_412 = come_decrement_ref_count2(block_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_413, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_414 = come_decrement_ref_count2(fun_name3_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional458=*info->p==123,            _if_conditional458) {
                source_tail_436=info->p-1;
                header_437=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value558=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value557=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1575, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                buffer_append(header_437,source_head_382,source_tail_436-source_head_382);
                buffer_append_str(header_437,";\n");
                add_come_code_at_come_header(info,"%s",((char*)(right_value559=buffer_to_string(header_437))));
                right_value559 = come_decrement_ref_count2(right_value559, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_438=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value560=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                static__439=(_Bool)0;
                if(result_type_383->mStatic) {
                    result_type_383->mStatic=(_Bool)0;
                    static__439=(_Bool)1;
                }
                if(_if_conditional460=version_401>0,                _if_conditional460) {
                    new_fun_name_440=(char*)come_increment_ref_count(((char*)(right_value562=xsprintf("%s_v%d",((char*)(right_value561=__builtin_string(fun_name_390))),version_401))));
                    right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value562 = come_decrement_ref_count2(right_value562, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj125=fun_name_390;
                    fun_name_390=(char*)come_increment_ref_count(((char*)(right_value563=__builtin_string(new_fun_name_440))));
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value563 = come_decrement_ref_count2(right_value563, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_440 = come_decrement_ref_count2(new_fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                fun_441=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value569=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value564=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1595, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value565=__builtin_string(fun_name_390)))),(struct sType*)come_increment_ref_count(result_type_383),(struct list$1sTypeph*)come_increment_ref_count(param_types_395),(struct list$1charph*)come_increment_ref_count(param_names_396),(struct list$1charph*)come_increment_ref_count(param_default_parametors_397),(_Bool)0,var_args_398,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value566=sBlock_clone(block_438)))),static__439,(char*)come_increment_ref_count(((char*)(right_value567=buffer_to_string(header_buf_400)))),(char*)come_increment_ref_count(((char*)(right_value568=__builtin_string(info->sname)))),info))));
                come_call_finalizer2(sFun_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value565 = come_decrement_ref_count2(right_value565, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sBlock_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value567 = come_decrement_ref_count2(right_value567, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value568 = come_decrement_ref_count2(right_value568, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFun_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                fun2_442=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value570=__builtin_string(fun_name_390))));
                right_value570 = come_decrement_ref_count2(right_value570, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional461=fun2_442==((void*)0)||fun2_442->mExternal,                _if_conditional461) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value571=string_clone(fun_name_390)))),(struct sFun*)come_increment_ref_count(fun_441));
                    right_value571 = come_decrement_ref_count2(right_value571, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                base_fun_name_391 = come_decrement_ref_count2(base_fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1612, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(right_value573=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value572=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1612, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_441),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sFunNode_finalize;
                _inf_value4->clone=(void*)sFunNode_clone;
                _inf_value4->compile=(void*)sFunNode_compile;
                _inf_value4->sline=(void*)sFunNode_sline;
                _inf_value4->sname=(void*)sFunNode_sname;
                _inf_value4->terminated=(void*)sFunNode_terminated;
                _inf_value4->kind=(void*)sFunNode_kind;
                __result190__ = __result_obj__ = ((struct sNode*)(right_value577=_inf_value4));
                come_call_finalizer2(buffer_finalize,header_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,block_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFunNode_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFunNode_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value577) { right_value577 = come_decrement_ref_count2(right_value577, ((struct sNode*)right_value577)->finalize, ((struct sNode*)right_value577)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result190__;
                come_call_finalizer2(buffer_finalize,header_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,block_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional468=xisalpha(*info->p)||*info->p==95||*info->p==59,                _if_conditional468) {
                    if(_if_conditional469=version_401>0,                    _if_conditional469) {
                        new_fun_name_444=(char*)come_increment_ref_count(((char*)(right_value578=xsprintf("%s_v%d",fun_name_390,version_401))));
                        right_value578 = come_decrement_ref_count2(right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj128=fun_name_390;
                        fun_name_390=(char*)come_increment_ref_count(((char*)(right_value579=__builtin_string(new_fun_name_444))));
                        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value579 = come_decrement_ref_count2(right_value579, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_444 = come_decrement_ref_count2(new_fun_name_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional470=*info->p==59,                    _if_conditional470) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        result_type_383->mStatic=(_Bool)0;
                        fun_445=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value584=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value580=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1626, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value581=__builtin_string(fun_name_390)))),(struct sType*)come_increment_ref_count(result_type_383),(struct list$1sTypeph*)come_increment_ref_count(param_types_395),(struct list$1charph*)come_increment_ref_count(param_names_396),(struct list$1charph*)come_increment_ref_count(param_default_parametors_397),(_Bool)1,var_args_398,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value582=buffer_to_string(header_buf_400)))),(char*)come_increment_ref_count(((char*)(right_value583=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value581 = come_decrement_ref_count2(right_value581, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value582 = come_decrement_ref_count2(right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value583 = come_decrement_ref_count2(right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_446=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value585=__builtin_string(fun_name_390))));
                        right_value585 = come_decrement_ref_count2(right_value585, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional471=fun2_446==((void*)0)||fun2_446->mExternal,                        _if_conditional471) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value586=string_clone(fun_name_390)))),(struct sFun*)come_increment_ref_count(fun_445));
                            right_value586 = come_decrement_ref_count2(right_value586, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        base_fun_name_391 = come_decrement_ref_count2(base_fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        source_tail_447=info->p;
                        header_448=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value588=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value587=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1642, "buffer"))))))));
                        come_call_finalizer2(buffer_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(buffer_finalize,right_value588, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        buffer_append(header_448,source_head_382,source_tail_447-source_head_382);
                        add_come_code_at_come_header(info,"%s",((char*)(right_value589=buffer_to_string(header_448))));
                        right_value589 = come_decrement_ref_count2(right_value589, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1647, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value591=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value590=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1647, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_445),info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sFunNode_finalize;
                        _inf_value5->clone=(void*)sFunNode_clone;
                        _inf_value5->compile=(void*)sFunNode_compile;
                        _inf_value5->sline=(void*)sFunNode_sline;
                        _inf_value5->sname=(void*)sFunNode_sname;
                        _inf_value5->terminated=(void*)sFunNode_terminated;
                        _inf_value5->kind=(void*)sFunNode_kind;
                        __result193__ = __result_obj__ = ((struct sNode*)(right_value595=_inf_value5));
                        come_call_finalizer2(sFun_finalize,fun_445, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_448, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value590, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value591, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value595) { right_value595 = come_decrement_ref_count2(right_value595, ((struct sNode*)right_value595)->finalize, ((struct sNode*)right_value595)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result193__;
                        come_call_finalizer2(sFun_finalize,fun_445, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_448, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        asm_fun_450=(char*)come_increment_ref_count(((char*)(right_value596=parse_attribute(info))));
                        right_value596 = come_decrement_ref_count2(right_value596, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional478=string_operator_not_equals(asm_fun_450,""),                        _if_conditional478) {
                            __dec_obj131=fun_name_390;
                            fun_name_390=(char*)come_increment_ref_count(((char*)(right_value597=__builtin_string(asm_fun_450))));
                            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value597 = come_decrement_ref_count2(right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        expected_next_character(59,info);
                        result_type_383->mStatic=(_Bool)0;
                        fun_451=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value602=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value598=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1660, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value599=__builtin_string(fun_name_390)))),(struct sType*)come_increment_ref_count(result_type_383),(struct list$1sTypeph*)come_increment_ref_count(param_types_395),(struct list$1charph*)come_increment_ref_count(param_names_396),(struct list$1charph*)come_increment_ref_count(param_default_parametors_397),(_Bool)1,var_args_398,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value600=buffer_to_string(header_buf_400)))),(char*)come_increment_ref_count(((char*)(right_value601=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value598, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value599 = come_decrement_ref_count2(right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value600 = come_decrement_ref_count2(right_value600, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value601 = come_decrement_ref_count2(right_value601, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_452=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value603=__builtin_string(fun_name_390))));
                        right_value603 = come_decrement_ref_count2(right_value603, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional479=fun2_452==((void*)0)||fun2_452->mExternal,                        _if_conditional479) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value604=string_clone(fun_name_390)))),(struct sFun*)come_increment_ref_count(fun_451));
                            right_value604 = come_decrement_ref_count2(right_value604, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        base_fun_name_391 = come_decrement_ref_count2(base_fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        source_tail_453=info->p;
                        header_454=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value606=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value605=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1676, "buffer"))))))));
                        come_call_finalizer2(buffer_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(buffer_finalize,right_value606, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        buffer_append(header_454,source_head_382,source_tail_453-source_head_382);
                        add_come_code_at_come_header(info,"%s",((char*)(right_value607=buffer_to_string(header_454))));
                        right_value607 = come_decrement_ref_count2(right_value607, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1681, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value609=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value608=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1681, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_451),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sFunNode_finalize;
                        _inf_value6->clone=(void*)sFunNode_clone;
                        _inf_value6->compile=(void*)sFunNode_compile;
                        _inf_value6->sline=(void*)sFunNode_sline;
                        _inf_value6->sname=(void*)sFunNode_sname;
                        _inf_value6->terminated=(void*)sFunNode_terminated;
                        _inf_value6->kind=(void*)sFunNode_kind;
                        __result196__ = __result_obj__ = ((struct sNode*)(right_value613=_inf_value6));
                        asm_fun_450 = come_decrement_ref_count2(asm_fun_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_451, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value608, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value613) { right_value613 = come_decrement_ref_count2(right_value613, ((struct sNode*)right_value613)->finalize, ((struct sNode*)right_value613)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result196__;
                        asm_fun_450 = come_decrement_ref_count2(asm_fun_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_451, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"invalid character(%c)(2)\n",*info->p);
                    exit(2);
                }
            }
        }
    }
    base_fun_name_391 = come_decrement_ref_count2(base_fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result197__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result197__;
    come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional424=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional424) {
            come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional425=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional425) {
            come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional426=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional426) {
            come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional430;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional430=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional430) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional431;
struct sLambdaNode* __result171__;
void* right_value540;
struct sLambdaNode* result_408;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value541;
char* __dec_obj124;
struct sLambdaNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value540 = (void*)0;
memset(&result_408, 0, sizeof(struct sLambdaNode*));
right_value541 = (void*)0;
            if(_if_conditional431=self==(void*)0,            _if_conditional431) {
                __result171__ = __result_obj__ = (void*)0;
                return __result171__;
            }
            result_408=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value540=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"))));
            come_call_finalizer2(sLambdaNode_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional432=self!=((void*)0),            _if_conditional432) {
                result_408->mFun=self->mFun;
            }
            if(_if_conditional433=self!=((void*)0),            _if_conditional433) {
                result_408->sline=self->sline;
            }
            if(_if_conditional434=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional434) {
                __dec_obj124=result_408->sname;
                result_408->sname=(char*)come_increment_ref_count(((char*)(right_value541=string_clone(self->sname))));
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value541 = come_decrement_ref_count2(right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result172__ = __result_obj__ = result_408;
            come_call_finalizer2(sLambdaNode_finalize,result_408, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result172__;
            come_call_finalizer2(sLambdaNode_finalize,result_408, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result174__;
memset(&__result_obj__, 0, sizeof(void*));
            __result174__ = self->len;
            return __result174__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
_Bool _if_conditional436;
unsigned int hash_432;
unsigned int it_433;
_Bool _while_condtional48;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
_Bool same_key_exist_434;
char* it2_435;
_Bool _if_conditional456;
_Bool _if_conditional457;
struct map$2charphsGenericsFunph* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_432, 0, sizeof(unsigned int));
memset(&it_433, 0, sizeof(unsigned int));
memset(&same_key_exist_434, 0, sizeof(_Bool));
memset(&it2_435, 0, sizeof(char*));
                if(_if_conditional436=self->len*10>=self->size,                _if_conditional436) {
                    map$2charphsGenericsFunph_rehash(self);
                }
                hash_432=string_get_hash_key(key)%self->size;
                it_433=hash_432;
                while(_while_condtional48=(_Bool)1,                _while_condtional48) {
                    if(_if_conditional448=self->item_existance[it_433],                    _if_conditional448) {
                        if(_if_conditional449=string_equals(self->keys[it_433],key),                        _if_conditional449) {
                            if(_if_conditional450=1,                            _if_conditional450) {
                                list$1charp_remove(self->key_list,self->keys[it_433]);
                                self->keys[it_433] = come_decrement_ref_count2(self->keys[it_433], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                self->keys[it_433]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                list$1charp_remove(self->key_list,self->keys[it_433]);
                                self->keys[it_433]=key;
                            }
                            if(_if_conditional451=1,                            _if_conditional451) {
                                come_call_finalizer2(sGenericsFun_finalize,self->items[it_433], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->items[it_433]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_433]=item;
                            }
                            break;
                        }
                        it_433++;
                        if(_if_conditional452=it_433>=self->size,                        _if_conditional452) {
                            it_433=0;
                        }
                        else {
                            if(_if_conditional453=it_433==hash_432,                            _if_conditional453) {
                                printf("unexpected error in map.insert\n");
                                stackframe();
                                exit(2);
                            }
                        }
                    }
                    else {
                        self->item_existance[it_433]=(_Bool)1;
                        if(_if_conditional454=1,                        _if_conditional454) {
                            self->keys[it_433]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            self->keys[it_433]=key;
                        }
                        if(_if_conditional455=1,                        _if_conditional455) {
                            self->items[it_433]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_433]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_434=(_Bool)0;
                for(                it2_435=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_435=list$1charp_next(self->key_list)                ){
                    if(_if_conditional456=string_equals(it2_435,key),                    _if_conditional456) {
                        puts("SAME KEY");
                        same_key_exist_434=(_Bool)1;
                    }
                }
                if(_if_conditional457=!same_key_exist_434,                _if_conditional457) {
                    list$1charp_push_back(self->key_list,key);
                }
                __result186__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result186__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int size_415;
void* right_value553;
char** keys_416;
void* right_value554;
struct sGenericsFun** items_417;
void* right_value555;
_Bool* item_existance_418;
int len_419;
char* it_422;
struct sGenericsFun* default_value_425;
struct sGenericsFun* it2_428;
unsigned int hash_429;
int n_430;
_Bool _while_condtional47;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
struct sGenericsFun* default_value_431;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_415, 0, sizeof(int));
right_value553 = (void*)0;
memset(&keys_416, 0, sizeof(char**));
right_value554 = (void*)0;
memset(&items_417, 0, sizeof(struct sGenericsFun**));
right_value555 = (void*)0;
memset(&item_existance_418, 0, sizeof(_Bool*));
memset(&len_419, 0, sizeof(int));
memset(&it_422, 0, sizeof(char*));
memset(&default_value_425, 0, sizeof(struct sGenericsFun*));
memset(&it2_428, 0, sizeof(struct sGenericsFun*));
memset(&hash_429, 0, sizeof(unsigned int));
memset(&n_430, 0, sizeof(int));
memset(&default_value_431, 0, sizeof(struct sGenericsFun*));
                        size_415=self->size*10;
                        keys_416=(char**)come_increment_ref_count(((char**)(right_value553=(char**)come_calloc(1, sizeof(char*)*(1*(size_415)), "./comelang2.h", 1335, "char*%"))));
                        right_value553 = come_decrement_ref_count2(right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        items_417=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value554=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_415)), "./comelang2.h", 1336, "sGenericsFun*%"))));
                        come_call_finalizer2(sGenericsFun_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        item_existance_418=(_Bool*)come_increment_ref_count(((_Bool*)(right_value555=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_415)), "./comelang2.h", 1337, "bool"))));
                        right_value555 = come_decrement_ref_count2(right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        len_419=0;
                        for(                        it_422=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_422=map$2charphsGenericsFunph_next(self)                        ){
                            memset(&default_value_425,0,sizeof(struct sGenericsFun*));
                            it2_428=map$2charphsGenericsFunph_at(self,it_422,default_value_425);
                            hash_429=string_get_hash_key(it_422)%size_415;
                            n_430=hash_429;
                            while(_while_condtional47=(_Bool)1,                            _while_condtional47) {
                                if(_if_conditional445=item_existance_418[n_430],                                _if_conditional445) {
                                    n_430++;
                                    if(_if_conditional446=n_430>=size_415,                                    _if_conditional446) {
                                        n_430=0;
                                    }
                                    else {
                                        if(_if_conditional447=n_430==hash_429,                                        _if_conditional447) {
                                            printf("unexpected error in map.rehash(1)\n");
                                            stackframe();
                                            exit(2);
                                        }
                                    }
                                }
                                else {
                                    item_existance_418[n_430]=(_Bool)1;
                                    keys_416[n_430]=it_422;
                                    items_417[n_430]=map$2charphsGenericsFunph_at(self,it_422,default_value_431);
                                    len_419++;
                                    break;
                                }
                            }
                        }
                        come_free((char*)self->items);
                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_free((char*)self->keys);
                        self->keys=keys_416;
                        self->items=items_417;
                        self->item_existance=item_existance_418;
                        self->size=size_415;
                        self->len=len_419;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional437;
char* result_420;
char* __result175__;
_Bool _if_conditional438;
char* __result176__;
char* result_421;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_420, 0, sizeof(char*));
memset(&result_421, 0, sizeof(char*));
                            if(_if_conditional437=self==((void*)0),                            _if_conditional437) {
                                memset(&result_420,0,sizeof(char*));
                                __result175__ = __result_obj__ = result_420;
                                return __result175__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result176__ = __result_obj__ = self->key_list->it->item;
                                return __result176__;
                            }
                            memset(&result_421,0,sizeof(char*));
                            __result177__ = __result_obj__ = result_421;
                            return __result177__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result178__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result178__;
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional439;
char* result_423;
char* __result179__;
_Bool _if_conditional440;
char* __result180__;
char* result_424;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_423, 0, sizeof(char*));
memset(&result_424, 0, sizeof(char*));
                            if(_if_conditional439=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional439) {
                                memset(&result_423,0,sizeof(char*));
                                __result179__ = __result_obj__ = result_423;
                                return __result179__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result180__ = __result_obj__ = self->key_list->it->item;
                                return __result180__;
                            }
                            memset(&result_424,0,sizeof(char*));
                            __result181__ = __result_obj__ = result_424;
                            return __result181__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_426;
unsigned int it_427;
_Bool _while_condtional46;
_Bool _if_conditional441;
_Bool _if_conditional442;
struct sGenericsFun* __result182__;
_Bool _if_conditional443;
_Bool _if_conditional444;
struct sGenericsFun* __result183__;
struct sGenericsFun* __result184__;
struct sGenericsFun* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_426, 0, sizeof(unsigned int));
memset(&it_427, 0, sizeof(unsigned int));
                                hash_426=string_get_hash_key(((char*)key))%self->size;
                                it_427=hash_426;
                                while(_while_condtional46=(_Bool)1,                                _while_condtional46) {
                                    if(_if_conditional441=self->item_existance[it_427],                                    _if_conditional441) {
                                        if(_if_conditional442=string_equals(self->keys[it_427],key),                                        _if_conditional442) {
                                            __result182__ = __result_obj__ = self->items[it_427];
                                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result182__;
                                        }
                                        it_427++;
                                        if(_if_conditional443=it_427>=self->size,                                        _if_conditional443) {
                                            it_427=0;
                                        }
                                        else {
                                            if(_if_conditional444=it_427==hash_426,                                            _if_conditional444) {
                                                __result183__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result183__;
                                            }
                                        }
                                    }
                                    else {
                                        __result184__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result184__;
                                    }
                                }
                                __result185__ = __result_obj__ = default_value;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result185__;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_456;
char* __dec_obj134;
char* last_code2_457;
char* __dec_obj135;
char* last_code3_458;
char* __dec_obj136;
struct sClass* current_stack_frame_struct_459;
struct sFun* finalizer_460;
void* right_value614;
char* real_fun_name_461;
void* right_value615;
struct sType* type2_462;
struct sClass* klass_463;
_Bool _if_conditional486;
void* right_value616;
void* right_value617;
struct buffer* source_464;
struct list$1tuple2$2charphsTypephph* o2_saved_465;
struct tuple2$2charphsTypeph* it_468;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_471;
struct sType* field_type_472;
_Bool _if_conditional491;
_Bool _if_conditional492;
char* p_474;
int sline_475;
char* sname_476;
char* head_477;
struct buffer* source3_478;
struct buffer* __dec_obj137;
void* right_value618;
char* __dec_obj138;
void* right_value619;
struct sBlock* block_479;
void* right_value620;
void* right_value621;
struct sType* result_type_480;
void* right_value622;
char* name_481;
void* right_value623;
struct sType* self_type_482;
_Bool _if_conditional493;
struct sType* __list_values21___483[1];
void* right_value624;
void* right_value625;
struct list$1sTypeph* param_types_484;
void* right_value626;
char* __list_values22___485[1];
void* right_value627;
void* right_value628;
struct list$1charph* param_names_486;
void* right_value629;
void* right_value630;
struct list$1charph* param_default_parametors_487;
void* right_value631;
void* right_value632;
struct buffer* header_buf_488;
void* right_value633;
int i_489;
struct sType* param_type_490;
char* param_name_494;
void* right_value634;
_Bool _if_conditional496;
void* right_value635;
void* right_value636;
void* right_value637;
void* right_value638;
struct sFun* fun_495;
void* right_value639;
struct sFun* fun2_496;
_Bool _if_conditional497;
void* right_value640;
void* right_value641;
void* right_value642;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value646;
struct sNode* node_498;
_Bool _if_conditional504;
struct buffer* __dec_obj141;
char* __dec_obj142;
char* __dec_obj143;
char* __dec_obj144;
char* __dec_obj145;
void* right_value647;
void* right_value648;
struct tuple2$2sFunpcharph* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_456, 0, sizeof(char*));
memset(&last_code2_457, 0, sizeof(char*));
memset(&last_code3_458, 0, sizeof(char*));
memset(&current_stack_frame_struct_459, 0, sizeof(struct sClass*));
memset(&finalizer_460, 0, sizeof(struct sFun*));
right_value614 = (void*)0;
memset(&real_fun_name_461, 0, sizeof(char*));
right_value615 = (void*)0;
memset(&type2_462, 0, sizeof(struct sType*));
memset(&klass_463, 0, sizeof(struct sClass*));
right_value616 = (void*)0;
right_value617 = (void*)0;
memset(&source_464, 0, sizeof(struct buffer*));
memset(&o2_saved_465, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_468, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_471, 0, sizeof(char*));
memset(&field_type_472, 0, sizeof(struct sType*));
memset(&name_471, 0, sizeof(char*));
memset(&field_type_472, 0, sizeof(struct sType*));
memset(&p_474, 0, sizeof(char*));
memset(&sline_475, 0, sizeof(int));
memset(&sname_476, 0, sizeof(char*));
memset(&head_477, 0, sizeof(char*));
memset(&source3_478, 0, sizeof(struct buffer*));
right_value618 = (void*)0;
right_value619 = (void*)0;
memset(&block_479, 0, sizeof(struct sBlock*));
right_value620 = (void*)0;
right_value621 = (void*)0;
memset(&result_type_480, 0, sizeof(struct sType*));
right_value622 = (void*)0;
memset(&name_481, 0, sizeof(char*));
right_value623 = (void*)0;
memset(&self_type_482, 0, sizeof(struct sType*));
right_value624 = (void*)0;
right_value625 = (void*)0;
memset(&param_types_484, 0, sizeof(struct list$1sTypeph*));
right_value626 = (void*)0;
right_value627 = (void*)0;
right_value628 = (void*)0;
memset(&param_names_486, 0, sizeof(struct list$1charph*));
right_value629 = (void*)0;
right_value630 = (void*)0;
memset(&param_default_parametors_487, 0, sizeof(struct list$1charph*));
right_value631 = (void*)0;
right_value632 = (void*)0;
memset(&header_buf_488, 0, sizeof(struct buffer*));
right_value633 = (void*)0;
memset(&i_489, 0, sizeof(int));
memset(&param_type_490, 0, sizeof(struct sType*));
memset(&param_name_494, 0, sizeof(char*));
right_value634 = (void*)0;
right_value635 = (void*)0;
right_value636 = (void*)0;
right_value637 = (void*)0;
right_value638 = (void*)0;
memset(&fun_495, 0, sizeof(struct sFun*));
right_value639 = (void*)0;
memset(&fun2_496, 0, sizeof(struct sFun*));
right_value640 = (void*)0;
right_value641 = (void*)0;
right_value642 = (void*)0;
right_value646 = (void*)0;
memset(&node_498, 0, sizeof(struct sNode*));
right_value647 = (void*)0;
right_value648 = (void*)0;
    last_code_456=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj134=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_457=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj135=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_458=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj136=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_459=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_460=((void*)0);
    real_fun_name_461=(char*)come_increment_ref_count(((char*)(right_value614=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value614 = come_decrement_ref_count2(right_value614, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_462=(struct sType*)come_increment_ref_count(((struct sType*)(right_value615=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value615, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_462;
    klass_463=type->mClass;
    if(_if_conditional486=type->mPointerNum>0&&klass_463->mStruct,    _if_conditional486) {
        source_464=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value617=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value616=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1717, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value616, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_464,123);
        klass_463=map$2charphsClassphp_operator_load_element(info->classes,klass_463->mName);
        for(        o2_saved_465=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_463->mFields)),it_468=list$1tuple2$2charphsTypephph_begin((o2_saved_465));        !list$1tuple2$2charphsTypephph_end((o2_saved_465));        it_468=list$1tuple2$2charphsTypephph_next((o2_saved_465))        ){
            multiple_assign_var10=it_468;
            name_471=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_472=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(_if_conditional491=string_operator_equals(type->mClass->mName,field_type_472->mClass->mName)&&type->mPointerNum==field_type_472->mPointerNum&&field_type_472->mHeap,            _if_conditional491) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_472->mHeap) {
                char source2_473[1024];
                memset(&source2_473, 0, sizeof(char)                *(1024)                );
                snprintf(source2_473,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_471,name_471);
                buffer_append_str(source_464,source2_473);
            }
            name_471 = come_decrement_ref_count2(name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_472, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_465, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_464,125);
        p_474=info->p;
        sline_475=info->sline;
        sname_476=(char*)come_increment_ref_count(info->sname);
        head_477=info->head;
        source3_478=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj137=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_464);
        come_call_finalizer2(buffer_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_464->buf;
        info->head=source_464->buf;
        __dec_obj138=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value618=__builtin_string(real_fun_name_461))));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value618 = come_decrement_ref_count2(right_value618, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_479=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value619=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value619, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_480=(struct sType*)come_increment_ref_count(((struct sType*)(right_value621=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value620=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1756, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value620, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_481=(char*)come_increment_ref_count(((char*)(right_value622=string_clone(real_fun_name_461))));
        right_value622 = come_decrement_ref_count2(right_value622, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_482=(struct sType*)come_increment_ref_count(((struct sType*)(right_value623=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value623, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_482->mHeap=(_Bool)0;
        if(_if_conditional493=self_type_482->mPointerNum>1,        _if_conditional493) {
            self_type_482->mPointerNum=1;
        }
        {__list_values21___483[0]=come_increment_ref_count(self_type_482);
}        param_types_484=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value625=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value624=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1763, "struct list$1sTypeph")))),1,__list_values21___483))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value624, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value625, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values22___485[0]=come_increment_ref_count(((char*)(right_value626=__builtin_string("self"))));
}        param_names_486=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value628=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value627=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1764, "struct list$1charph")))),1,__list_values22___485))));
        right_value626 = come_decrement_ref_count2(right_value626, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value627, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_487=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value630=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value629=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1765, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_487,((void*)0));
        header_buf_488=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value632=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value631=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1768, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value631, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value632, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_488,((char*)(right_value633=make_come_type_name_string(result_type_480,info))));
        right_value633 = come_decrement_ref_count2(right_value633, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_488," ");
        buffer_append_str(header_buf_488,real_fun_name_461);
        buffer_append_str(header_buf_488,"(");
        for(        i_489=0;        i_489<list$1sTypeph_length(param_types_484);        i_489++        ){
            param_type_490=list$1sTypephp_operator_load_element(param_types_484,i_489);
            param_name_494=list$1charphp_operator_load_element(param_names_486,i_489);
            buffer_append_str(header_buf_488,((char*)(right_value634=make_come_type_name_string(param_type_490,info))));
            right_value634 = come_decrement_ref_count2(right_value634, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_488," ");
            buffer_append_str(header_buf_488,param_name_494);
            if(_if_conditional496=i_489!=list$1sTypeph_length(param_types_484)-1,            _if_conditional496) {
                buffer_append_str(header_buf_488,",");
            }
        }
        buffer_append_str(header_buf_488,")");
        result_type_480->mStatic=(_Bool)0;
        fun_495=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value638=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value635=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1791, "sFun")))),(char*)come_increment_ref_count(name_481),(struct sType*)come_increment_ref_count(result_type_480),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_486),(struct list$1charph*)come_increment_ref_count(param_default_parametors_487),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_479),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value636=buffer_to_string(header_buf_488)))),(char*)come_increment_ref_count(((char*)(right_value637=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value635, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value636 = come_decrement_ref_count2(right_value636, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value637 = come_decrement_ref_count2(right_value637, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_496=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value639=__builtin_string(fun_name))));
        right_value639 = come_decrement_ref_count2(right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional497=fun2_496==((void*)0)||fun2_496->mExternal,        _if_conditional497) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value640=string_clone(name_481)))),(struct sFun*)come_increment_ref_count(fun_495));
            right_value640 = come_decrement_ref_count2(right_value640, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_460=fun_495;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1807, "struct sNode");
        _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value642=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value641=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1807, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_495),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFunNode_finalize;
        _inf_value7->clone=(void*)sFunNode_clone;
        _inf_value7->compile=(void*)sFunNode_compile;
        _inf_value7->sline=(void*)sFunNode_sline;
        _inf_value7->sname=(void*)sFunNode_sname;
        _inf_value7->terminated=(void*)sFunNode_terminated;
        _inf_value7->kind=(void*)sFunNode_kind;
        node_498=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value646=_inf_value7)));
        come_call_finalizer2(sFunNode_finalize,right_value641, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value642, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value646) { right_value646 = come_decrement_ref_count2(right_value646, ((struct sNode*)right_value646)->finalize, ((struct sNode*)right_value646)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional504=!node_compile(node_498,info),        _if_conditional504) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj141=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_478);
        come_call_finalizer2(buffer_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_474;
        info->head=head_477;
        info->sline=sline_475;
        __dec_obj142=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_476);
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_464, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_476 = come_decrement_ref_count2(sname_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_479, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_480, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_481 = come_decrement_ref_count2(name_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_482, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_484, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_486, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_487, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_488, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_495, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_498) { node_498 = come_decrement_ref_count2(node_498, ((struct sNode*)node_498)->finalize, ((struct sNode*)node_498)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_459;
    __dec_obj143=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_456);
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj144=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_457);
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj145=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_458);
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result211__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value648=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value647=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1827, "struct tuple2$2sFunpcharph")))),finalizer_460,(char*)come_increment_ref_count(real_fun_name_461))));
    last_code_456 = come_decrement_ref_count2(last_code_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_457 = come_decrement_ref_count2(last_code2_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_458 = come_decrement_ref_count2(last_code3_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_461 = come_decrement_ref_count2(real_fun_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_462, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value647 = come_decrement_ref_count2(right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value648, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result211__;
    last_code_456 = come_decrement_ref_count2(last_code_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_457 = come_decrement_ref_count2(last_code2_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_458 = come_decrement_ref_count2(last_code3_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_461 = come_decrement_ref_count2(real_fun_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_462, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional487;
struct tuple2$2charphsTypeph* result_466;
struct tuple2$2charphsTypeph* __result198__;
_Bool _if_conditional488;
struct tuple2$2charphsTypeph* __result199__;
struct tuple2$2charphsTypeph* result_467;
struct tuple2$2charphsTypeph* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_466, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_467, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional487=self==((void*)0),            _if_conditional487) {
                memset(&result_466,0,sizeof(struct tuple2$2charphsTypeph*));
                __result198__ = __result_obj__ = result_466;
                return __result198__;
            }
            self->it=self->head;
            if(self->it) {
                __result199__ = __result_obj__ = self->it->item;
                return __result199__;
            }
            memset(&result_467,0,sizeof(struct tuple2$2charphsTypeph*));
            __result200__ = __result_obj__ = result_467;
            return __result200__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result201__;
memset(&__result_obj__, 0, sizeof(void*));
            __result201__ = self==((void*)0)||self->it==((void*)0);
            return __result201__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional489;
struct tuple2$2charphsTypeph* result_469;
struct tuple2$2charphsTypeph* __result202__;
_Bool _if_conditional490;
struct tuple2$2charphsTypeph* __result203__;
struct tuple2$2charphsTypeph* result_470;
struct tuple2$2charphsTypeph* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_469, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_470, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional489=self==((void*)0)||self->it==((void*)0),            _if_conditional489) {
                memset(&result_469,0,sizeof(struct tuple2$2charphsTypeph*));
                __result202__ = __result_obj__ = result_469;
                return __result202__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result203__ = __result_obj__ = self->it->item;
                return __result203__;
            }
            memset(&result_470,0,sizeof(struct tuple2$2charphsTypeph*));
            __result204__ = __result_obj__ = result_470;
            return __result204__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result205__;
memset(&__result_obj__, 0, sizeof(void*));
            __result205__ = self->len;
            return __result205__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional494;
struct list_item$1charph* it_491;
int i_492;
_Bool _while_condtional49;
_Bool _if_conditional495;
char* __result206__;
char* default_value_493;
char* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_491, 0, sizeof(struct list_item$1charph*));
memset(&i_492, 0, sizeof(int));
memset(&default_value_493, 0, sizeof(char*));
                if(_if_conditional494=position<0,                _if_conditional494) {
                    position+=self->len;
                }
                it_491=self->head;
                i_492=0;
                while(_while_condtional49=it_491!=((void*)0),                _while_condtional49) {
                    if(_if_conditional495=position==i_492,                    _if_conditional495) {
                        __result206__ = __result_obj__ = it_491->item;
                        return __result206__;
                    }
                    it_491=it_491->next;
                    i_492++;
                }
                memset(&default_value_493,0,sizeof(char*));
                __result207__ = __result_obj__ = default_value_493;
                default_value_493 = come_decrement_ref_count2(default_value_493, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result207__;
                default_value_493 = come_decrement_ref_count2(default_value_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj146;
struct tuple2$2sFunpcharph* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
        self->v1=v1;
        __dec_obj146=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result210__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result210__;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional505;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional505=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional505) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_499;
char* __dec_obj147;
char* last_code2_500;
char* __dec_obj148;
char* last_code3_501;
char* __dec_obj149;
struct sClass* current_stack_frame_struct_502;
struct sFun* finalizer_503;
void* right_value649;
char* real_fun_name_504;
void* right_value650;
struct sType* type2_505;
struct sClass* klass_506;
_Bool _if_conditional506;
void* right_value651;
void* right_value652;
struct buffer* source_507;
struct list$1tuple2$2charphsTypephph* o2_saved_508;
struct tuple2$2charphsTypeph* it_509;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_510;
struct sType* field_type_511;
_Bool _if_conditional507;
_Bool _if_conditional508;
char* p_513;
int sline_514;
char* sname_515;
char* head_516;
struct buffer* source3_517;
struct buffer* __dec_obj150;
void* right_value653;
char* __dec_obj151;
void* right_value654;
struct sBlock* block_518;
void* right_value655;
void* right_value656;
struct sType* result_type_519;
void* right_value657;
char* name_520;
void* right_value658;
struct sType* self_type_521;
_Bool _if_conditional509;
struct sType* __list_values23___522[1];
void* right_value659;
void* right_value660;
struct list$1sTypeph* param_types_523;
void* right_value661;
char* __list_values24___524[1];
void* right_value662;
void* right_value663;
struct list$1charph* param_names_525;
void* right_value664;
void* right_value665;
struct list$1charph* param_default_parametors_526;
void* right_value666;
void* right_value667;
struct buffer* header_buf_527;
void* right_value668;
int i_528;
struct sType* param_type_529;
char* param_name_530;
void* right_value669;
_Bool _if_conditional510;
void* right_value670;
void* right_value671;
void* right_value672;
void* right_value673;
struct sFun* fun_531;
void* right_value674;
struct sFun* fun2_532;
_Bool _if_conditional511;
void* right_value675;
void* right_value676;
void* right_value677;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value681;
struct sNode* node_534;
_Bool _if_conditional518;
struct buffer* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
void* right_value682;
void* right_value683;
struct tuple2$2sFunpcharph* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_499, 0, sizeof(char*));
memset(&last_code2_500, 0, sizeof(char*));
memset(&last_code3_501, 0, sizeof(char*));
memset(&current_stack_frame_struct_502, 0, sizeof(struct sClass*));
memset(&finalizer_503, 0, sizeof(struct sFun*));
right_value649 = (void*)0;
memset(&real_fun_name_504, 0, sizeof(char*));
right_value650 = (void*)0;
memset(&type2_505, 0, sizeof(struct sType*));
memset(&klass_506, 0, sizeof(struct sClass*));
right_value651 = (void*)0;
right_value652 = (void*)0;
memset(&source_507, 0, sizeof(struct buffer*));
memset(&o2_saved_508, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_509, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_510, 0, sizeof(char*));
memset(&field_type_511, 0, sizeof(struct sType*));
memset(&name_510, 0, sizeof(char*));
memset(&field_type_511, 0, sizeof(struct sType*));
memset(&p_513, 0, sizeof(char*));
memset(&sline_514, 0, sizeof(int));
memset(&sname_515, 0, sizeof(char*));
memset(&head_516, 0, sizeof(char*));
memset(&source3_517, 0, sizeof(struct buffer*));
right_value653 = (void*)0;
right_value654 = (void*)0;
memset(&block_518, 0, sizeof(struct sBlock*));
right_value655 = (void*)0;
right_value656 = (void*)0;
memset(&result_type_519, 0, sizeof(struct sType*));
right_value657 = (void*)0;
memset(&name_520, 0, sizeof(char*));
right_value658 = (void*)0;
memset(&self_type_521, 0, sizeof(struct sType*));
right_value659 = (void*)0;
right_value660 = (void*)0;
memset(&param_types_523, 0, sizeof(struct list$1sTypeph*));
right_value661 = (void*)0;
right_value662 = (void*)0;
right_value663 = (void*)0;
memset(&param_names_525, 0, sizeof(struct list$1charph*));
right_value664 = (void*)0;
right_value665 = (void*)0;
memset(&param_default_parametors_526, 0, sizeof(struct list$1charph*));
right_value666 = (void*)0;
right_value667 = (void*)0;
memset(&header_buf_527, 0, sizeof(struct buffer*));
right_value668 = (void*)0;
memset(&i_528, 0, sizeof(int));
memset(&param_type_529, 0, sizeof(struct sType*));
memset(&param_name_530, 0, sizeof(char*));
right_value669 = (void*)0;
right_value670 = (void*)0;
right_value671 = (void*)0;
right_value672 = (void*)0;
right_value673 = (void*)0;
memset(&fun_531, 0, sizeof(struct sFun*));
right_value674 = (void*)0;
memset(&fun2_532, 0, sizeof(struct sFun*));
right_value675 = (void*)0;
right_value676 = (void*)0;
right_value677 = (void*)0;
right_value681 = (void*)0;
memset(&node_534, 0, sizeof(struct sNode*));
right_value682 = (void*)0;
right_value683 = (void*)0;
    last_code_499=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj147=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_500=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj148=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_501=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj149=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_502=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_503=((void*)0);
    real_fun_name_504=(char*)come_increment_ref_count(((char*)(right_value649=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value649 = come_decrement_ref_count2(right_value649, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_505=(struct sType*)come_increment_ref_count(((struct sType*)(right_value650=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value650, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_505;
    klass_506=type->mClass;
    if(_if_conditional506=type->mPointerNum>0&&klass_506->mStruct,    _if_conditional506) {
        source_507=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value652=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value651=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1854, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value651, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value652, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_507,123);
        klass_506=map$2charphsClassphp_operator_load_element(info->classes,klass_506->mName);
        for(        o2_saved_508=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_506->mFields)),it_509=list$1tuple2$2charphsTypephph_begin((o2_saved_508));        !list$1tuple2$2charphsTypephph_end((o2_saved_508));        it_509=list$1tuple2$2charphsTypephph_next((o2_saved_508))        ){
            multiple_assign_var11=it_509;
            name_510=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_511=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(_if_conditional507=string_operator_equals(type->mClass->mName,field_type_511->mClass->mName)&&type->mPointerNum==field_type_511->mPointerNum&&field_type_511->mHeap,            _if_conditional507) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_511->mHeap) {
                char source2_512[1024];
                memset(&source2_512, 0, sizeof(char)                *(1024)                );
                snprintf(source2_512,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_510,name_510);
                buffer_append_str(source_507,source2_512);
            }
            name_510 = come_decrement_ref_count2(name_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_511, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_508, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_507,125);
        p_513=info->p;
        sline_514=info->sline;
        sname_515=(char*)come_increment_ref_count(info->sname);
        head_516=info->head;
        source3_517=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj150=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_507);
        come_call_finalizer2(buffer_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_507->buf;
        info->head=source_507->buf;
        __dec_obj151=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value653=__builtin_string(real_fun_name_504))));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value653 = come_decrement_ref_count2(right_value653, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_518=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value654=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value654, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_519=(struct sType*)come_increment_ref_count(((struct sType*)(right_value656=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value655=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1893, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value655, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value656, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_520=(char*)come_increment_ref_count(((char*)(right_value657=string_clone(real_fun_name_504))));
        right_value657 = come_decrement_ref_count2(right_value657, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_521=(struct sType*)come_increment_ref_count(((struct sType*)(right_value658=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value658, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_521->mHeap=(_Bool)0;
        if(_if_conditional509=self_type_521->mPointerNum>1,        _if_conditional509) {
            self_type_521->mPointerNum=1;
        }
        {__list_values23___522[0]=come_increment_ref_count(self_type_521);
}        param_types_523=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value660=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value659=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1900, "struct list$1sTypeph")))),1,__list_values23___522))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value659, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value660, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values24___524[0]=come_increment_ref_count(((char*)(right_value661=__builtin_string("self"))));
}        param_names_525=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value663=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value662=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1901, "struct list$1charph")))),1,__list_values24___524))));
        right_value661 = come_decrement_ref_count2(right_value661, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value662, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value663, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_526=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value665=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value664=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1902, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value665, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_526,((void*)0));
        header_buf_527=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value667=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value666=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1905, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value666, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value667, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_527,((char*)(right_value668=make_come_type_name_string(result_type_519,info))));
        right_value668 = come_decrement_ref_count2(right_value668, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_527," ");
        buffer_append_str(header_buf_527,real_fun_name_504);
        buffer_append_str(header_buf_527,"(");
        for(        i_528=0;        i_528<list$1sTypeph_length(param_types_523);        i_528++        ){
            param_type_529=list$1sTypephp_operator_load_element(param_types_523,i_528);
            param_name_530=list$1charphp_operator_load_element(param_names_525,i_528);
            buffer_append_str(header_buf_527,((char*)(right_value669=make_come_type_name_string(param_type_529,info))));
            right_value669 = come_decrement_ref_count2(right_value669, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_527," ");
            buffer_append_str(header_buf_527,param_name_530);
            if(_if_conditional510=i_528!=list$1sTypeph_length(param_types_523)-1,            _if_conditional510) {
                buffer_append_str(header_buf_527,",");
            }
        }
        buffer_append_str(header_buf_527,")");
        result_type_519->mStatic=(_Bool)0;
        fun_531=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value673=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value670=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1928, "sFun")))),(char*)come_increment_ref_count(name_520),(struct sType*)come_increment_ref_count(result_type_519),(struct list$1sTypeph*)come_increment_ref_count(param_types_523),(struct list$1charph*)come_increment_ref_count(param_names_525),(struct list$1charph*)come_increment_ref_count(param_default_parametors_526),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_518),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value671=buffer_to_string(header_buf_527)))),(char*)come_increment_ref_count(((char*)(right_value672=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value671 = come_decrement_ref_count2(right_value671, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value672 = come_decrement_ref_count2(right_value672, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value673, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_532=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value674=__builtin_string(fun_name))));
        right_value674 = come_decrement_ref_count2(right_value674, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional511=fun2_532==((void*)0)||fun2_532->mExternal,        _if_conditional511) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value675=string_clone(name_520)))),(struct sFun*)come_increment_ref_count(fun_531));
            right_value675 = come_decrement_ref_count2(right_value675, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_503=fun_531;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1944, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value677=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value676=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1944, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_531),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFunNode_finalize;
        _inf_value8->clone=(void*)sFunNode_clone;
        _inf_value8->compile=(void*)sFunNode_compile;
        _inf_value8->sline=(void*)sFunNode_sline;
        _inf_value8->sname=(void*)sFunNode_sname;
        _inf_value8->terminated=(void*)sFunNode_terminated;
        _inf_value8->kind=(void*)sFunNode_kind;
        node_534=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value681=_inf_value8)));
        come_call_finalizer2(sFunNode_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value677, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value681) { right_value681 = come_decrement_ref_count2(right_value681, ((struct sNode*)right_value681)->finalize, ((struct sNode*)right_value681)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional518=!node_compile(node_534,info),        _if_conditional518) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj154=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_517);
        come_call_finalizer2(buffer_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_513;
        info->head=head_516;
        info->sline=sline_514;
        __dec_obj155=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_515);
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_507, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_515 = come_decrement_ref_count2(sname_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_517, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_518, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_519, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_520 = come_decrement_ref_count2(name_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_521, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_523, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_525, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_526, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_527, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_531, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_534) { node_534 = come_decrement_ref_count2(node_534, ((struct sNode*)node_534)->finalize, ((struct sNode*)node_534)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_502;
    __dec_obj156=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_499);
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj157=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_500);
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj158=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_501);
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result214__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value683=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value682=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1964, "struct tuple2$2sFunpcharph")))),finalizer_503,(char*)come_increment_ref_count(real_fun_name_504))));
    last_code_499 = come_decrement_ref_count2(last_code_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_500 = come_decrement_ref_count2(last_code2_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_501 = come_decrement_ref_count2(last_code3_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_504 = come_decrement_ref_count2(real_fun_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_505, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value682 = come_decrement_ref_count2(right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value683, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result214__;
    last_code_499 = come_decrement_ref_count2(last_code_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_500 = come_decrement_ref_count2(last_code2_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_501 = come_decrement_ref_count2(last_code3_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_504 = come_decrement_ref_count2(real_fun_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_505, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_535;
char* __dec_obj159;
char* last_code2_536;
char* __dec_obj160;
char* last_code3_537;
char* __dec_obj161;
struct sClass* current_stack_frame_struct_538;
struct sFun* equaler_539;
void* right_value684;
char* real_fun_name_540;
void* right_value685;
struct sType* type2_541;
struct sClass* klass_542;
_Bool _if_conditional519;
void* right_value686;
void* right_value687;
struct buffer* source_543;
_Bool _if_conditional520;
char* name_544;
struct list$1tuple2$2charphsTypephph* o2_saved_546;
struct tuple2$2charphsTypeph* it_547;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_548;
struct sType* field_type_549;
_Bool _if_conditional521;
char* p_551;
int sline_552;
char* sname_553;
char* head_554;
struct buffer* source3_555;
struct buffer* __dec_obj162;
void* right_value688;
char* __dec_obj163;
void* right_value689;
struct sBlock* block_556;
void* right_value690;
void* right_value691;
struct sType* result_type_557;
void* right_value692;
char* name_558;
void* right_value693;
struct sType* left_type_559;
void* right_value694;
struct sType* right_type_560;
struct sType* __list_values25___561[2];
void* right_value695;
void* right_value696;
struct list$1sTypeph* param_types_562;
void* right_value697;
void* right_value698;
char* __list_values26___563[2];
void* right_value699;
void* right_value700;
struct list$1charph* param_names_564;
void* right_value701;
void* right_value702;
struct list$1charph* param_default_parametors_565;
void* right_value703;
void* right_value704;
struct buffer* header_buf_566;
void* right_value705;
int i_567;
struct sType* param_type_568;
char* param_name_569;
void* right_value706;
_Bool _if_conditional522;
void* right_value707;
void* right_value708;
void* right_value709;
void* right_value710;
struct sFun* fun_570;
void* right_value711;
struct sFun* fun2_571;
_Bool _if_conditional523;
void* right_value712;
void* right_value713;
void* right_value714;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value718;
struct sNode* node_573;
_Bool _if_conditional530;
struct buffer* __dec_obj166;
char* __dec_obj167;
char* __dec_obj168;
char* __dec_obj169;
char* __dec_obj170;
void* right_value719;
void* right_value720;
struct tuple2$2sFunpcharph* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_535, 0, sizeof(char*));
memset(&last_code2_536, 0, sizeof(char*));
memset(&last_code3_537, 0, sizeof(char*));
memset(&current_stack_frame_struct_538, 0, sizeof(struct sClass*));
memset(&equaler_539, 0, sizeof(struct sFun*));
right_value684 = (void*)0;
memset(&real_fun_name_540, 0, sizeof(char*));
right_value685 = (void*)0;
memset(&type2_541, 0, sizeof(struct sType*));
memset(&klass_542, 0, sizeof(struct sClass*));
right_value686 = (void*)0;
right_value687 = (void*)0;
memset(&source_543, 0, sizeof(struct buffer*));
memset(&name_544, 0, sizeof(char*));
memset(&o2_saved_546, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_547, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_548, 0, sizeof(char*));
memset(&field_type_549, 0, sizeof(struct sType*));
memset(&name_548, 0, sizeof(char*));
memset(&field_type_549, 0, sizeof(struct sType*));
memset(&p_551, 0, sizeof(char*));
memset(&sline_552, 0, sizeof(int));
memset(&sname_553, 0, sizeof(char*));
memset(&head_554, 0, sizeof(char*));
memset(&source3_555, 0, sizeof(struct buffer*));
right_value688 = (void*)0;
right_value689 = (void*)0;
memset(&block_556, 0, sizeof(struct sBlock*));
right_value690 = (void*)0;
right_value691 = (void*)0;
memset(&result_type_557, 0, sizeof(struct sType*));
right_value692 = (void*)0;
memset(&name_558, 0, sizeof(char*));
right_value693 = (void*)0;
memset(&left_type_559, 0, sizeof(struct sType*));
right_value694 = (void*)0;
memset(&right_type_560, 0, sizeof(struct sType*));
right_value695 = (void*)0;
right_value696 = (void*)0;
memset(&param_types_562, 0, sizeof(struct list$1sTypeph*));
right_value697 = (void*)0;
right_value698 = (void*)0;
right_value699 = (void*)0;
right_value700 = (void*)0;
memset(&param_names_564, 0, sizeof(struct list$1charph*));
right_value701 = (void*)0;
right_value702 = (void*)0;
memset(&param_default_parametors_565, 0, sizeof(struct list$1charph*));
right_value703 = (void*)0;
right_value704 = (void*)0;
memset(&header_buf_566, 0, sizeof(struct buffer*));
right_value705 = (void*)0;
memset(&i_567, 0, sizeof(int));
memset(&param_type_568, 0, sizeof(struct sType*));
memset(&param_name_569, 0, sizeof(char*));
right_value706 = (void*)0;
right_value707 = (void*)0;
right_value708 = (void*)0;
right_value709 = (void*)0;
right_value710 = (void*)0;
memset(&fun_570, 0, sizeof(struct sFun*));
right_value711 = (void*)0;
memset(&fun2_571, 0, sizeof(struct sFun*));
right_value712 = (void*)0;
right_value713 = (void*)0;
right_value714 = (void*)0;
right_value718 = (void*)0;
memset(&node_573, 0, sizeof(struct sNode*));
right_value719 = (void*)0;
right_value720 = (void*)0;
    last_code_535=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj159=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_536=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj160=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_537=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj161=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_538=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_539=((void*)0);
    real_fun_name_540=(char*)come_increment_ref_count(((char*)(right_value684=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_541=(struct sType*)come_increment_ref_count(((struct sType*)(right_value685=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value685, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_541;
    klass_542=type->mClass;
    if(_if_conditional519=type->mPointerNum>0&&!klass_542->mNumber,    _if_conditional519) {
        source_543=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value687=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value686=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1989, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value686, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value687, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_543,123);
        if(klass_542->mProtocol) {
            name_544="_protocol_obj";
            char source2_545[1024];
            memset(&source2_545, 0, sizeof(char)            *(1024)            );
            snprintf(source2_545,1024,"return left.%s.equals(right.%s);\n",name_544,name_544);
            buffer_append_str(source_543,source2_545);
        }
        else {
            klass_542=map$2charphsClassphp_operator_load_element(info->classes,klass_542->mName);
            for(            o2_saved_546=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_542->mFields)),it_547=list$1tuple2$2charphsTypephph_begin((o2_saved_546));            !list$1tuple2$2charphsTypephph_end((o2_saved_546));            it_547=list$1tuple2$2charphsTypephph_next((o2_saved_546))            ){
                multiple_assign_var12=it_547;
                name_548=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_549=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(_if_conditional521=string_operator_equals(type->mClass->mName,field_type_549->mClass->mName)&&type->mPointerNum==field_type_549->mPointerNum&&field_type_549->mHeap,                _if_conditional521) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_550[1024];
                memset(&source2_550, 0, sizeof(char)                *(1024)                );
                snprintf(source2_550,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_548,name_548);
                buffer_append_str(source_543,source2_550);
                name_548 = come_decrement_ref_count2(name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_549, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_546, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_543,"return true;");
        buffer_append_char(source_543,125);
        p_551=info->p;
        sline_552=info->sline;
        sname_553=(char*)come_increment_ref_count(info->sname);
        head_554=info->head;
        source3_555=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj162=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_543);
        come_call_finalizer2(buffer_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_543->buf;
        info->head=source_543->buf;
        __dec_obj163=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value688=__builtin_string(real_fun_name_540))));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value688 = come_decrement_ref_count2(right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_556=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value689=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_557=(struct sType*)come_increment_ref_count(((struct sType*)(right_value691=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value690=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2035, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value690, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value691, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_558=(char*)come_increment_ref_count(((char*)(right_value692=string_clone(real_fun_name_540))));
        right_value692 = come_decrement_ref_count2(right_value692, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_559=(struct sType*)come_increment_ref_count(((struct sType*)(right_value693=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value693, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_559->mHeap=(_Bool)0;
        right_type_560=(struct sType*)come_increment_ref_count(((struct sType*)(right_value694=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value694, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_560->mHeap=(_Bool)0;
        {__list_values25___561[0]=come_increment_ref_count(left_type_559);
__list_values25___561[1]=come_increment_ref_count(right_type_560);
}        param_types_562=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value696=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value695=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2041, "struct list$1sTypeph")))),2,__list_values25___561))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value695, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values26___563[0]=come_increment_ref_count(((char*)(right_value697=__builtin_string("left"))));
__list_values26___563[1]=come_increment_ref_count(((char*)(right_value698=__builtin_string("right"))));
}        param_names_564=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value700=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value699=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2042, "struct list$1charph")))),2,__list_values26___563))));
        right_value697 = come_decrement_ref_count2(right_value697, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value698 = come_decrement_ref_count2(right_value698, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value700, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_565=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value702=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value701=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2043, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value701, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value702, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_565,((void*)0));
        list$1charph_push_back(param_default_parametors_565,((void*)0));
        header_buf_566=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value704=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value703=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2047, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value703, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value704, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_566,((char*)(right_value705=make_come_type_name_string(result_type_557,info))));
        right_value705 = come_decrement_ref_count2(right_value705, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_566," ");
        buffer_append_str(header_buf_566,real_fun_name_540);
        buffer_append_str(header_buf_566,"(");
        for(        i_567=0;        i_567<list$1sTypeph_length(param_types_562);        i_567++        ){
            param_type_568=list$1sTypephp_operator_load_element(param_types_562,i_567);
            param_name_569=list$1charphp_operator_load_element(param_names_564,i_567);
            buffer_append_str(header_buf_566,((char*)(right_value706=make_come_type_name_string(param_type_568,info))));
            right_value706 = come_decrement_ref_count2(right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_566," ");
            buffer_append_str(header_buf_566,param_name_569);
            if(_if_conditional522=i_567!=list$1sTypeph_length(param_types_562)-1,            _if_conditional522) {
                buffer_append_str(header_buf_566,",");
            }
        }
        buffer_append_str(header_buf_566,")");
        result_type_557->mStatic=(_Bool)0;
        fun_570=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value710=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value707=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2070, "sFun")))),(char*)come_increment_ref_count(name_558),(struct sType*)come_increment_ref_count(result_type_557),(struct list$1sTypeph*)come_increment_ref_count(param_types_562),(struct list$1charph*)come_increment_ref_count(param_names_564),(struct list$1charph*)come_increment_ref_count(param_default_parametors_565),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_556),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value708=buffer_to_string(header_buf_566)))),(char*)come_increment_ref_count(((char*)(right_value709=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value708 = come_decrement_ref_count2(right_value708, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value709 = come_decrement_ref_count2(right_value709, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value710, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_571=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value711=__builtin_string(fun_name))));
        right_value711 = come_decrement_ref_count2(right_value711, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional523=fun2_571==((void*)0)||fun2_571->mExternal,        _if_conditional523) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value712=string_clone(name_558)))),(struct sFun*)come_increment_ref_count(fun_570));
            right_value712 = come_decrement_ref_count2(right_value712, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_539=fun_570;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2086, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value714=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value713=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2086, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_570),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sFunNode_sline;
        _inf_value9->sname=(void*)sFunNode_sname;
        _inf_value9->terminated=(void*)sFunNode_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_573=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value718=_inf_value9)));
        come_call_finalizer2(sFunNode_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value714, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value718) { right_value718 = come_decrement_ref_count2(right_value718, ((struct sNode*)right_value718)->finalize, ((struct sNode*)right_value718)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional530=!node_compile(node_573,info),        _if_conditional530) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj166=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_555);
        come_call_finalizer2(buffer_finalize,__dec_obj166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_551;
        info->head=head_554;
        info->sline=sline_552;
        __dec_obj167=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_553);
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_543, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_553 = come_decrement_ref_count2(sname_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_555, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_556, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_557, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_558 = come_decrement_ref_count2(name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_559, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_560, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_562, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_564, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_565, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_566, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_570, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_573) { node_573 = come_decrement_ref_count2(node_573, ((struct sNode*)node_573)->finalize, ((struct sNode*)node_573)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_538;
    __dec_obj168=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_535);
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj169=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_536);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj170=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_537);
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result217__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value720=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value719=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2106, "struct tuple2$2sFunpcharph")))),equaler_539,(char*)come_increment_ref_count(real_fun_name_540))));
    last_code_535 = come_decrement_ref_count2(last_code_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_536 = come_decrement_ref_count2(last_code2_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_537 = come_decrement_ref_count2(last_code3_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_540 = come_decrement_ref_count2(real_fun_name_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_541, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value719 = come_decrement_ref_count2(right_value719, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value720, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result217__;
    last_code_535 = come_decrement_ref_count2(last_code_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_536 = come_decrement_ref_count2(last_code2_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_537 = come_decrement_ref_count2(last_code3_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_540 = come_decrement_ref_count2(real_fun_name_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_541, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_574;
char* __dec_obj171;
char* last_code2_575;
char* __dec_obj172;
char* last_code3_576;
char* __dec_obj173;
struct sClass* current_stack_frame_struct_577;
struct sFun* equaler_578;
void* right_value721;
char* real_fun_name_579;
void* right_value722;
struct sType* type2_580;
struct sClass* klass_581;
_Bool _if_conditional531;
void* right_value723;
void* right_value724;
struct buffer* source_582;
_Bool _if_conditional532;
char* name_583;
int i_586;
struct list$1tuple2$2charphsTypephph* o2_saved_587;
struct tuple2$2charphsTypeph* it_588;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_589;
struct sType* field_type_590;
_Bool _if_conditional533;
_Bool _if_conditional534;
char* p_594;
int sline_595;
char* sname_596;
char* head_597;
struct buffer* source3_598;
struct buffer* __dec_obj174;
void* right_value725;
char* __dec_obj175;
void* right_value726;
struct sBlock* block_599;
void* right_value727;
void* right_value728;
struct sType* result_type_600;
void* right_value729;
char* name_601;
void* right_value730;
struct sType* left_type_602;
void* right_value731;
struct sType* right_type_603;
struct sType* __list_values27___604[2];
void* right_value732;
void* right_value733;
struct list$1sTypeph* param_types_605;
void* right_value734;
void* right_value735;
char* __list_values28___606[2];
void* right_value736;
void* right_value737;
struct list$1charph* param_names_607;
void* right_value738;
void* right_value739;
struct list$1charph* param_default_parametors_608;
void* right_value740;
void* right_value741;
struct buffer* header_buf_609;
void* right_value742;
int i_610;
struct sType* param_type_611;
char* param_name_612;
void* right_value743;
_Bool _if_conditional535;
void* right_value744;
void* right_value745;
void* right_value746;
void* right_value747;
struct sFun* fun_613;
void* right_value748;
struct sFun* fun2_614;
_Bool _if_conditional536;
void* right_value749;
void* right_value750;
void* right_value751;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value755;
struct sNode* node_616;
_Bool _if_conditional543;
struct buffer* __dec_obj178;
char* __dec_obj179;
char* __dec_obj180;
char* __dec_obj181;
char* __dec_obj182;
void* right_value756;
void* right_value757;
struct tuple2$2sFunpcharph* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_574, 0, sizeof(char*));
memset(&last_code2_575, 0, sizeof(char*));
memset(&last_code3_576, 0, sizeof(char*));
memset(&current_stack_frame_struct_577, 0, sizeof(struct sClass*));
memset(&equaler_578, 0, sizeof(struct sFun*));
right_value721 = (void*)0;
memset(&real_fun_name_579, 0, sizeof(char*));
right_value722 = (void*)0;
memset(&type2_580, 0, sizeof(struct sType*));
memset(&klass_581, 0, sizeof(struct sClass*));
right_value723 = (void*)0;
right_value724 = (void*)0;
memset(&source_582, 0, sizeof(struct buffer*));
memset(&name_583, 0, sizeof(char*));
memset(&i_586, 0, sizeof(int));
memset(&o2_saved_587, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_588, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_589, 0, sizeof(char*));
memset(&field_type_590, 0, sizeof(struct sType*));
memset(&name_589, 0, sizeof(char*));
memset(&field_type_590, 0, sizeof(struct sType*));
memset(&p_594, 0, sizeof(char*));
memset(&sline_595, 0, sizeof(int));
memset(&sname_596, 0, sizeof(char*));
memset(&head_597, 0, sizeof(char*));
memset(&source3_598, 0, sizeof(struct buffer*));
right_value725 = (void*)0;
right_value726 = (void*)0;
memset(&block_599, 0, sizeof(struct sBlock*));
right_value727 = (void*)0;
right_value728 = (void*)0;
memset(&result_type_600, 0, sizeof(struct sType*));
right_value729 = (void*)0;
memset(&name_601, 0, sizeof(char*));
right_value730 = (void*)0;
memset(&left_type_602, 0, sizeof(struct sType*));
right_value731 = (void*)0;
memset(&right_type_603, 0, sizeof(struct sType*));
right_value732 = (void*)0;
right_value733 = (void*)0;
memset(&param_types_605, 0, sizeof(struct list$1sTypeph*));
right_value734 = (void*)0;
right_value735 = (void*)0;
right_value736 = (void*)0;
right_value737 = (void*)0;
memset(&param_names_607, 0, sizeof(struct list$1charph*));
right_value738 = (void*)0;
right_value739 = (void*)0;
memset(&param_default_parametors_608, 0, sizeof(struct list$1charph*));
right_value740 = (void*)0;
right_value741 = (void*)0;
memset(&header_buf_609, 0, sizeof(struct buffer*));
right_value742 = (void*)0;
memset(&i_610, 0, sizeof(int));
memset(&param_type_611, 0, sizeof(struct sType*));
memset(&param_name_612, 0, sizeof(char*));
right_value743 = (void*)0;
right_value744 = (void*)0;
right_value745 = (void*)0;
right_value746 = (void*)0;
right_value747 = (void*)0;
memset(&fun_613, 0, sizeof(struct sFun*));
right_value748 = (void*)0;
memset(&fun2_614, 0, sizeof(struct sFun*));
right_value749 = (void*)0;
right_value750 = (void*)0;
right_value751 = (void*)0;
right_value755 = (void*)0;
memset(&node_616, 0, sizeof(struct sNode*));
right_value756 = (void*)0;
right_value757 = (void*)0;
    last_code_574=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj171=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_575=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj172=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_576=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj173=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_577=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_578=((void*)0);
    real_fun_name_579=(char*)come_increment_ref_count(((char*)(right_value721=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value721 = come_decrement_ref_count2(right_value721, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_580=(struct sType*)come_increment_ref_count(((struct sType*)(right_value722=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value722, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_580;
    klass_581=type->mClass;
    if(_if_conditional531=type->mPointerNum>0&&!klass_581->mNumber,    _if_conditional531) {
        source_582=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value724=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value723=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2131, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value723, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value724, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_582,123);
        if(klass_581->mProtocol) {
            name_583="_protocol_obj";
            char source2_584[1024];
            memset(&source2_584, 0, sizeof(char)            *(1024)            );
            snprintf(source2_584,1024,"return !left.%s.equals(right.%s);\n",name_583,name_583);
            buffer_append_str(source_582,source2_584);
        }
        else {
            char source2_585[1024];
            memset(&source2_585, 0, sizeof(char)            *(1024)            );
            snprintf(source2_585,1024,"return !(");
            buffer_append_str(source_582,source2_585);
            i_586=0;
            klass_581=map$2charphsClassphp_operator_load_element(info->classes,klass_581->mName);
            for(            o2_saved_587=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_581->mFields)),it_588=list$1tuple2$2charphsTypephph_begin((o2_saved_587));            !list$1tuple2$2charphsTypephph_end((o2_saved_587));            it_588=list$1tuple2$2charphsTypephph_next((o2_saved_587))            ){
                multiple_assign_var13=it_588;
                name_589=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_590=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(_if_conditional533=string_operator_equals(type->mClass->mName,field_type_590->mClass->mName)&&type->mPointerNum==field_type_590->mPointerNum&&field_type_590->mHeap,                _if_conditional533) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_591[1024];
                memset(&source2_591, 0, sizeof(char)                *(1024)                );
                snprintf(source2_591,1024,"left.%s.equals(right.%s)",name_589,name_589);
                buffer_append_str(source_582,source2_591);
                if(_if_conditional534=i_586==list$1tuple2$2charphsTypephph_length(klass_581->mFields)-1,                _if_conditional534) {
                    char source2_592[1024];
                    memset(&source2_592, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_592,1024,");");
                    buffer_append_str(source_582,source2_592);
                }
                else {
                    char source2_593[1024];
                    memset(&source2_593, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_593,1024," && ");
                    buffer_append_str(source_582,source2_593);
                }
                i_586++;
                name_589 = come_decrement_ref_count2(name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_590, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_587, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_582,125);
        p_594=info->p;
        sline_595=info->sline;
        sname_596=(char*)come_increment_ref_count(info->sname);
        head_597=info->head;
        source3_598=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj174=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_582);
        come_call_finalizer2(buffer_finalize,__dec_obj174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_582->buf;
        info->head=source_582->buf;
        __dec_obj175=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value725=__builtin_string(real_fun_name_579))));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value725 = come_decrement_ref_count2(right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_599=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value726=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value726, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_600=(struct sType*)come_increment_ref_count(((struct sType*)(right_value728=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value727=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2194, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value727, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value728, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_601=(char*)come_increment_ref_count(((char*)(right_value729=string_clone(real_fun_name_579))));
        right_value729 = come_decrement_ref_count2(right_value729, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_602=(struct sType*)come_increment_ref_count(((struct sType*)(right_value730=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value730, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_602->mHeap=(_Bool)0;
        right_type_603=(struct sType*)come_increment_ref_count(((struct sType*)(right_value731=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value731, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_603->mHeap=(_Bool)0;
        {__list_values27___604[0]=come_increment_ref_count(left_type_602);
__list_values27___604[1]=come_increment_ref_count(right_type_603);
}        param_types_605=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value733=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value732=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2200, "struct list$1sTypeph")))),2,__list_values27___604))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value732, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value733, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values28___606[0]=come_increment_ref_count(((char*)(right_value734=__builtin_string("left"))));
__list_values28___606[1]=come_increment_ref_count(((char*)(right_value735=__builtin_string("right"))));
}        param_names_607=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value737=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value736=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2201, "struct list$1charph")))),2,__list_values28___606))));
        right_value734 = come_decrement_ref_count2(right_value734, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value735 = come_decrement_ref_count2(right_value735, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value736, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value737, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_608=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value739=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value738=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2202, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value738, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value739, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_608,((void*)0));
        list$1charph_push_back(param_default_parametors_608,((void*)0));
        header_buf_609=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value741=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value740=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2206, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value740, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value741, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_609,((char*)(right_value742=make_come_type_name_string(result_type_600,info))));
        right_value742 = come_decrement_ref_count2(right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_609," ");
        buffer_append_str(header_buf_609,real_fun_name_579);
        buffer_append_str(header_buf_609,"(");
        for(        i_610=0;        i_610<list$1sTypeph_length(param_types_605);        i_610++        ){
            param_type_611=list$1sTypephp_operator_load_element(param_types_605,i_610);
            param_name_612=list$1charphp_operator_load_element(param_names_607,i_610);
            buffer_append_str(header_buf_609,((char*)(right_value743=make_come_type_name_string(param_type_611,info))));
            right_value743 = come_decrement_ref_count2(right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_609," ");
            buffer_append_str(header_buf_609,param_name_612);
            if(_if_conditional535=i_610!=list$1sTypeph_length(param_types_605)-1,            _if_conditional535) {
                buffer_append_str(header_buf_609,",");
            }
        }
        buffer_append_str(header_buf_609,")");
        result_type_600->mStatic=(_Bool)0;
        fun_613=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value747=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value744=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2229, "sFun")))),(char*)come_increment_ref_count(name_601),(struct sType*)come_increment_ref_count(result_type_600),(struct list$1sTypeph*)come_increment_ref_count(param_types_605),(struct list$1charph*)come_increment_ref_count(param_names_607),(struct list$1charph*)come_increment_ref_count(param_default_parametors_608),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_599),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value745=buffer_to_string(header_buf_609)))),(char*)come_increment_ref_count(((char*)(right_value746=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value744, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value745 = come_decrement_ref_count2(right_value745, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value746 = come_decrement_ref_count2(right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value747, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_614=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value748=__builtin_string(fun_name))));
        right_value748 = come_decrement_ref_count2(right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional536=fun2_614==((void*)0)||fun2_614->mExternal,        _if_conditional536) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value749=string_clone(name_601)))),(struct sFun*)come_increment_ref_count(fun_613));
            right_value749 = come_decrement_ref_count2(right_value749, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_578=fun_613;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2245, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value751=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value750=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2245, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_613),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sFunNode_sline;
        _inf_value10->sname=(void*)sFunNode_sname;
        _inf_value10->terminated=(void*)sFunNode_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_616=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value755=_inf_value10)));
        come_call_finalizer2(sFunNode_finalize,right_value750, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value751, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value755) { right_value755 = come_decrement_ref_count2(right_value755, ((struct sNode*)right_value755)->finalize, ((struct sNode*)right_value755)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional543=!node_compile(node_616,info),        _if_conditional543) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj178=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_598);
        come_call_finalizer2(buffer_finalize,__dec_obj178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_594;
        info->head=head_597;
        info->sline=sline_595;
        __dec_obj179=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_596);
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_582, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_596 = come_decrement_ref_count2(sname_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_598, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_599, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_600, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_601 = come_decrement_ref_count2(name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_602, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_603, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_605, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_607, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_608, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_609, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_613, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_616) { node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_577;
    __dec_obj180=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_574);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj181=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_575);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj182=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_576);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result221__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value757=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value756=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2265, "struct tuple2$2sFunpcharph")))),equaler_578,(char*)come_increment_ref_count(real_fun_name_579))));
    last_code_574 = come_decrement_ref_count2(last_code_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_575 = come_decrement_ref_count2(last_code2_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_576 = come_decrement_ref_count2(last_code3_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_579 = come_decrement_ref_count2(real_fun_name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_580, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value756 = come_decrement_ref_count2(right_value756, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value757, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result221__;
    last_code_574 = come_decrement_ref_count2(last_code_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_575 = come_decrement_ref_count2(last_code2_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_576 = come_decrement_ref_count2(last_code3_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_579 = come_decrement_ref_count2(real_fun_name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_580, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result218__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result218__ = self->len;
                    return __result218__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_617;
char* __dec_obj183;
char* last_code2_618;
char* __dec_obj184;
char* last_code3_619;
char* __dec_obj185;
struct sClass* current_stack_frame_struct_620;
struct sFun* equaler_621;
void* right_value758;
char* real_fun_name_622;
void* right_value759;
struct sType* type2_623;
struct sClass* klass_624;
_Bool _if_conditional544;
void* right_value760;
void* right_value761;
struct buffer* source_625;
_Bool _if_conditional545;
char* name_626;
struct list$1tuple2$2charphsTypephph* o2_saved_628;
struct tuple2$2charphsTypeph* it_629;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_630;
struct sType* field_type_631;
_Bool _if_conditional546;
char* p_633;
int sline_634;
char* sname_635;
char* head_636;
struct buffer* source3_637;
struct buffer* __dec_obj186;
void* right_value762;
char* __dec_obj187;
void* right_value763;
struct sBlock* block_638;
void* right_value764;
void* right_value765;
struct sType* result_type_639;
void* right_value766;
char* name_640;
void* right_value767;
struct sType* left_type_641;
void* right_value768;
struct sType* right_type_642;
struct sType* __list_values29___643[2];
void* right_value769;
void* right_value770;
struct list$1sTypeph* param_types_644;
void* right_value771;
void* right_value772;
char* __list_values30___645[2];
void* right_value773;
void* right_value774;
struct list$1charph* param_names_646;
void* right_value775;
void* right_value776;
struct list$1charph* param_default_parametors_647;
void* right_value777;
void* right_value778;
struct buffer* header_buf_648;
void* right_value779;
int i_649;
struct sType* param_type_650;
char* param_name_651;
void* right_value780;
_Bool _if_conditional547;
void* right_value781;
void* right_value782;
void* right_value783;
void* right_value784;
struct sFun* fun_652;
void* right_value785;
struct sFun* fun2_653;
_Bool _if_conditional548;
void* right_value786;
void* right_value787;
void* right_value788;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value792;
struct sNode* node_655;
_Bool _if_conditional555;
struct buffer* __dec_obj190;
char* __dec_obj191;
char* __dec_obj192;
char* __dec_obj193;
char* __dec_obj194;
void* right_value793;
void* right_value794;
struct tuple2$2sFunpcharph* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_617, 0, sizeof(char*));
memset(&last_code2_618, 0, sizeof(char*));
memset(&last_code3_619, 0, sizeof(char*));
memset(&current_stack_frame_struct_620, 0, sizeof(struct sClass*));
memset(&equaler_621, 0, sizeof(struct sFun*));
right_value758 = (void*)0;
memset(&real_fun_name_622, 0, sizeof(char*));
right_value759 = (void*)0;
memset(&type2_623, 0, sizeof(struct sType*));
memset(&klass_624, 0, sizeof(struct sClass*));
right_value760 = (void*)0;
right_value761 = (void*)0;
memset(&source_625, 0, sizeof(struct buffer*));
memset(&name_626, 0, sizeof(char*));
memset(&o2_saved_628, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_629, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_630, 0, sizeof(char*));
memset(&field_type_631, 0, sizeof(struct sType*));
memset(&name_630, 0, sizeof(char*));
memset(&field_type_631, 0, sizeof(struct sType*));
memset(&p_633, 0, sizeof(char*));
memset(&sline_634, 0, sizeof(int));
memset(&sname_635, 0, sizeof(char*));
memset(&head_636, 0, sizeof(char*));
memset(&source3_637, 0, sizeof(struct buffer*));
right_value762 = (void*)0;
right_value763 = (void*)0;
memset(&block_638, 0, sizeof(struct sBlock*));
right_value764 = (void*)0;
right_value765 = (void*)0;
memset(&result_type_639, 0, sizeof(struct sType*));
right_value766 = (void*)0;
memset(&name_640, 0, sizeof(char*));
right_value767 = (void*)0;
memset(&left_type_641, 0, sizeof(struct sType*));
right_value768 = (void*)0;
memset(&right_type_642, 0, sizeof(struct sType*));
right_value769 = (void*)0;
right_value770 = (void*)0;
memset(&param_types_644, 0, sizeof(struct list$1sTypeph*));
right_value771 = (void*)0;
right_value772 = (void*)0;
right_value773 = (void*)0;
right_value774 = (void*)0;
memset(&param_names_646, 0, sizeof(struct list$1charph*));
right_value775 = (void*)0;
right_value776 = (void*)0;
memset(&param_default_parametors_647, 0, sizeof(struct list$1charph*));
right_value777 = (void*)0;
right_value778 = (void*)0;
memset(&header_buf_648, 0, sizeof(struct buffer*));
right_value779 = (void*)0;
memset(&i_649, 0, sizeof(int));
memset(&param_type_650, 0, sizeof(struct sType*));
memset(&param_name_651, 0, sizeof(char*));
right_value780 = (void*)0;
right_value781 = (void*)0;
right_value782 = (void*)0;
right_value783 = (void*)0;
right_value784 = (void*)0;
memset(&fun_652, 0, sizeof(struct sFun*));
right_value785 = (void*)0;
memset(&fun2_653, 0, sizeof(struct sFun*));
right_value786 = (void*)0;
right_value787 = (void*)0;
right_value788 = (void*)0;
right_value792 = (void*)0;
memset(&node_655, 0, sizeof(struct sNode*));
right_value793 = (void*)0;
right_value794 = (void*)0;
    last_code_617=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj183=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_618=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj184=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_619=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj185=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_620=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_621=((void*)0);
    real_fun_name_622=(char*)come_increment_ref_count(((char*)(right_value758=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value758 = come_decrement_ref_count2(right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_623=(struct sType*)come_increment_ref_count(((struct sType*)(right_value759=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value759, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_623;
    klass_624=type->mClass;
    if(_if_conditional544=type->mPointerNum>0&&!klass_624->mNumber,    _if_conditional544) {
        source_625=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value761=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value760=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2290, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value760, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value761, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_625,123);
        if(klass_624->mProtocol) {
            name_626="_protocol_obj";
            char source2_627[1024];
            memset(&source2_627, 0, sizeof(char)            *(1024)            );
            snprintf(source2_627,1024,"return left.%s.equals(right.%s);\n",name_626,name_626);
            buffer_append_str(source_625,source2_627);
        }
        else {
            klass_624=map$2charphsClassphp_operator_load_element(info->classes,klass_624->mName);
            for(            o2_saved_628=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_624->mFields)),it_629=list$1tuple2$2charphsTypephph_begin((o2_saved_628));            !list$1tuple2$2charphsTypephph_end((o2_saved_628));            it_629=list$1tuple2$2charphsTypephph_next((o2_saved_628))            ){
                multiple_assign_var14=it_629;
                name_630=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_631=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(_if_conditional546=string_operator_equals(type->mClass->mName,field_type_631->mClass->mName)&&type->mPointerNum==field_type_631->mPointerNum&&field_type_631->mHeap,                _if_conditional546) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_632[1024];
                memset(&source2_632, 0, sizeof(char)                *(1024)                );
                snprintf(source2_632,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_630,name_630);
                buffer_append_str(source_625,source2_632);
                name_630 = come_decrement_ref_count2(name_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_631, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_628, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_625,"return true;\n");
        buffer_append_char(source_625,125);
        p_633=info->p;
        sline_634=info->sline;
        sname_635=(char*)come_increment_ref_count(info->sname);
        head_636=info->head;
        source3_637=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj186=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_625);
        come_call_finalizer2(buffer_finalize,__dec_obj186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_625->buf;
        info->head=source_625->buf;
        __dec_obj187=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value762=__builtin_string(real_fun_name_622))));
        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value762 = come_decrement_ref_count2(right_value762, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_638=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value763=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value763, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_639=(struct sType*)come_increment_ref_count(((struct sType*)(right_value765=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value764=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2336, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value764, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value765, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_640=(char*)come_increment_ref_count(((char*)(right_value766=string_clone(real_fun_name_622))));
        right_value766 = come_decrement_ref_count2(right_value766, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_641=(struct sType*)come_increment_ref_count(((struct sType*)(right_value767=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value767, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_641->mHeap=(_Bool)0;
        right_type_642=(struct sType*)come_increment_ref_count(((struct sType*)(right_value768=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value768, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_642->mHeap=(_Bool)0;
        {__list_values29___643[0]=come_increment_ref_count(left_type_641);
__list_values29___643[1]=come_increment_ref_count(right_type_642);
}        param_types_644=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value770=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value769=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2342, "struct list$1sTypeph")))),2,__list_values29___643))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value769, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value770, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values30___645[0]=come_increment_ref_count(((char*)(right_value771=__builtin_string("left"))));
__list_values30___645[1]=come_increment_ref_count(((char*)(right_value772=__builtin_string("right"))));
}        param_names_646=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value774=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value773=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2343, "struct list$1charph")))),2,__list_values30___645))));
        right_value771 = come_decrement_ref_count2(right_value771, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value772 = come_decrement_ref_count2(right_value772, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value773, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value774, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_647=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value776=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value775=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2344, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value775, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value776, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_647,((void*)0));
        list$1charph_push_back(param_default_parametors_647,((void*)0));
        header_buf_648=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value778=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value777=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2348, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value777, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value778, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_648,((char*)(right_value779=make_come_type_name_string(result_type_639,info))));
        right_value779 = come_decrement_ref_count2(right_value779, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_648," ");
        buffer_append_str(header_buf_648,real_fun_name_622);
        buffer_append_str(header_buf_648,"(");
        for(        i_649=0;        i_649<list$1sTypeph_length(param_types_644);        i_649++        ){
            param_type_650=list$1sTypephp_operator_load_element(param_types_644,i_649);
            param_name_651=list$1charphp_operator_load_element(param_names_646,i_649);
            buffer_append_str(header_buf_648,((char*)(right_value780=make_come_type_name_string(param_type_650,info))));
            right_value780 = come_decrement_ref_count2(right_value780, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_648," ");
            buffer_append_str(header_buf_648,param_name_651);
            if(_if_conditional547=i_649!=list$1sTypeph_length(param_types_644)-1,            _if_conditional547) {
                buffer_append_str(header_buf_648,",");
            }
        }
        buffer_append_str(header_buf_648,")");
        result_type_639->mStatic=(_Bool)0;
        fun_652=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value784=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value781=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2371, "sFun")))),(char*)come_increment_ref_count(name_640),(struct sType*)come_increment_ref_count(result_type_639),(struct list$1sTypeph*)come_increment_ref_count(param_types_644),(struct list$1charph*)come_increment_ref_count(param_names_646),(struct list$1charph*)come_increment_ref_count(param_default_parametors_647),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_638),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value782=buffer_to_string(header_buf_648)))),(char*)come_increment_ref_count(((char*)(right_value783=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value781, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value782 = come_decrement_ref_count2(right_value782, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value783 = come_decrement_ref_count2(right_value783, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value784, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_653=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value785=__builtin_string(fun_name))));
        right_value785 = come_decrement_ref_count2(right_value785, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional548=fun2_653==((void*)0)||fun2_653->mExternal,        _if_conditional548) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value786=string_clone(name_640)))),(struct sFun*)come_increment_ref_count(fun_652));
            right_value786 = come_decrement_ref_count2(right_value786, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_621=fun_652;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2387, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value788=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value787=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2387, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_652),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sFunNode_sline;
        _inf_value11->sname=(void*)sFunNode_sname;
        _inf_value11->terminated=(void*)sFunNode_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_655=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value792=_inf_value11)));
        come_call_finalizer2(sFunNode_finalize,right_value787, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value788, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value792) { right_value792 = come_decrement_ref_count2(right_value792, ((struct sNode*)right_value792)->finalize, ((struct sNode*)right_value792)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional555=!node_compile(node_655,info),        _if_conditional555) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj190=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_637);
        come_call_finalizer2(buffer_finalize,__dec_obj190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_633;
        info->head=head_636;
        info->sline=sline_634;
        __dec_obj191=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_635);
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_625, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_635 = come_decrement_ref_count2(sname_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_637, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_638, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_639, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_640 = come_decrement_ref_count2(name_640, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_641, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_642, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_644, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_646, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_647, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_648, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_652, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_655) { node_655 = come_decrement_ref_count2(node_655, ((struct sNode*)node_655)->finalize, ((struct sNode*)node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_620;
    __dec_obj192=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_617);
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj193=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_618);
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj194=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_619);
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result224__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value794=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value793=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2407, "struct tuple2$2sFunpcharph")))),equaler_621,(char*)come_increment_ref_count(real_fun_name_622))));
    last_code_617 = come_decrement_ref_count2(last_code_617, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_618 = come_decrement_ref_count2(last_code2_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_619 = come_decrement_ref_count2(last_code3_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_622 = come_decrement_ref_count2(real_fun_name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_623, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value793 = come_decrement_ref_count2(right_value793, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value794, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result224__;
    last_code_617 = come_decrement_ref_count2(last_code_617, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_618 = come_decrement_ref_count2(last_code2_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_619 = come_decrement_ref_count2(last_code3_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_622 = come_decrement_ref_count2(real_fun_name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_623, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_656;
char* __dec_obj195;
char* last_code2_657;
char* __dec_obj196;
char* last_code3_658;
char* __dec_obj197;
struct sClass* current_stack_frame_struct_659;
struct sFun* cloner_660;
void* right_value795;
char* real_fun_name_661;
void* right_value796;
struct sType* type2_662;
struct sClass* klass_663;
_Bool _if_conditional556;
void* right_value797;
void* right_value798;
struct buffer* source_664;
void* right_value799;
void* right_value800;
_Bool _if_conditional557;
char* name_665;
struct list$1tuple2$2charphsTypephph* o2_saved_667;
struct tuple2$2charphsTypeph* it_668;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_669;
struct sType* field_type_670;
_Bool _if_conditional558;
_Bool _if_conditional559;
_Bool _if_conditional560;
struct list$1tuple2$2charphsTypephph* o2_saved_673;
struct tuple2$2charphsTypeph* it_674;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_675;
struct sType* field_type_676;
_Bool _if_conditional561;
_Bool _if_conditional562;
_Bool _if_conditional563;
void* right_value801;
char* p_680;
int sline_681;
char* sname_682;
struct buffer* source3_683;
char* head_684;
struct buffer* __dec_obj198;
void* right_value802;
char* __dec_obj199;
void* right_value803;
struct sBlock* block_685;
void* right_value804;
struct sType* result_type_686;
void* right_value805;
char* name_687;
void* right_value806;
struct sType* self_type_688;
struct sType* __list_values31___689[1];
void* right_value807;
void* right_value808;
struct list$1sTypeph* param_types_690;
void* right_value809;
char* __list_values32___691[1];
void* right_value810;
void* right_value811;
struct list$1charph* param_names_692;
void* right_value812;
void* right_value813;
struct list$1charph* param_default_parametors_693;
void* right_value814;
void* right_value815;
struct buffer* header_buf_694;
void* right_value816;
int i_695;
struct sType* param_type_696;
char* param_name_697;
void* right_value817;
_Bool _if_conditional564;
void* right_value818;
void* right_value819;
void* right_value820;
void* right_value821;
struct sFun* fun_698;
void* right_value822;
struct sFun* fun2_699;
_Bool _if_conditional565;
void* right_value823;
void* right_value824;
void* right_value825;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value829;
struct sNode* node_701;
_Bool _if_conditional572;
char* __dec_obj202;
struct buffer* __dec_obj203;
char* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
void* right_value830;
void* right_value831;
struct tuple2$2sFunpcharph* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_656, 0, sizeof(char*));
memset(&last_code2_657, 0, sizeof(char*));
memset(&last_code3_658, 0, sizeof(char*));
memset(&current_stack_frame_struct_659, 0, sizeof(struct sClass*));
memset(&cloner_660, 0, sizeof(struct sFun*));
right_value795 = (void*)0;
memset(&real_fun_name_661, 0, sizeof(char*));
right_value796 = (void*)0;
memset(&type2_662, 0, sizeof(struct sType*));
memset(&klass_663, 0, sizeof(struct sClass*));
right_value797 = (void*)0;
right_value798 = (void*)0;
memset(&source_664, 0, sizeof(struct buffer*));
right_value799 = (void*)0;
right_value800 = (void*)0;
memset(&name_665, 0, sizeof(char*));
memset(&o2_saved_667, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_668, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_669, 0, sizeof(char*));
memset(&field_type_670, 0, sizeof(struct sType*));
memset(&name_669, 0, sizeof(char*));
memset(&field_type_670, 0, sizeof(struct sType*));
memset(&o2_saved_673, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_674, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_675, 0, sizeof(char*));
memset(&field_type_676, 0, sizeof(struct sType*));
memset(&name_675, 0, sizeof(char*));
memset(&field_type_676, 0, sizeof(struct sType*));
right_value801 = (void*)0;
memset(&p_680, 0, sizeof(char*));
memset(&sline_681, 0, sizeof(int));
memset(&sname_682, 0, sizeof(char*));
memset(&source3_683, 0, sizeof(struct buffer*));
memset(&head_684, 0, sizeof(char*));
right_value802 = (void*)0;
right_value803 = (void*)0;
memset(&block_685, 0, sizeof(struct sBlock*));
right_value804 = (void*)0;
memset(&result_type_686, 0, sizeof(struct sType*));
right_value805 = (void*)0;
memset(&name_687, 0, sizeof(char*));
right_value806 = (void*)0;
memset(&self_type_688, 0, sizeof(struct sType*));
right_value807 = (void*)0;
right_value808 = (void*)0;
memset(&param_types_690, 0, sizeof(struct list$1sTypeph*));
right_value809 = (void*)0;
right_value810 = (void*)0;
right_value811 = (void*)0;
memset(&param_names_692, 0, sizeof(struct list$1charph*));
right_value812 = (void*)0;
right_value813 = (void*)0;
memset(&param_default_parametors_693, 0, sizeof(struct list$1charph*));
right_value814 = (void*)0;
right_value815 = (void*)0;
memset(&header_buf_694, 0, sizeof(struct buffer*));
right_value816 = (void*)0;
memset(&i_695, 0, sizeof(int));
memset(&param_type_696, 0, sizeof(struct sType*));
memset(&param_name_697, 0, sizeof(char*));
right_value817 = (void*)0;
right_value818 = (void*)0;
right_value819 = (void*)0;
right_value820 = (void*)0;
right_value821 = (void*)0;
memset(&fun_698, 0, sizeof(struct sFun*));
right_value822 = (void*)0;
memset(&fun2_699, 0, sizeof(struct sFun*));
right_value823 = (void*)0;
right_value824 = (void*)0;
right_value825 = (void*)0;
right_value829 = (void*)0;
memset(&node_701, 0, sizeof(struct sNode*));
right_value830 = (void*)0;
right_value831 = (void*)0;
    last_code_656=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj195=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_657=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj196=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_658=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj197=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_659=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_660=((void*)0);
    real_fun_name_661=(char*)come_increment_ref_count(((char*)(right_value795=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value795 = come_decrement_ref_count2(right_value795, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_662=(struct sType*)come_increment_ref_count(((struct sType*)(right_value796=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value796, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_662;
    klass_663=type->mClass;
    if(_if_conditional556=type->mPointerNum>0&&!klass_663->mNumber,    _if_conditional556) {
        source_664=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value798=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value797=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2432, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value797, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value798, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(source_664,"{\n");
        buffer_append_str(source_664,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_664,((char*)(right_value800=xsprintf("var result = new %s;\n",((char*)(right_value799=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value799 = come_decrement_ref_count2(right_value799, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value800 = come_decrement_ref_count2(right_value800, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_663->mProtocol) {
            name_665="_protocol_obj";
            char source2_666[1024];
            memset(&source2_666, 0, sizeof(char)            *(1024)            );
            snprintf(source2_666,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_664,source2_666);
            klass_663=map$2charphsClassphp_operator_load_element(info->classes,klass_663->mName);
            for(            o2_saved_667=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_663->mFields)),it_668=list$1tuple2$2charphsTypephph_begin((o2_saved_667));            !list$1tuple2$2charphsTypephph_end((o2_saved_667));            it_668=list$1tuple2$2charphsTypephph_next((o2_saved_667))            ){
                multiple_assign_var15=it_668;
                name_669=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_670=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(_if_conditional558=string_operator_equals(type->mClass->mName,field_type_670->mClass->mName)&&type->mPointerNum==field_type_670->mPointerNum&&field_type_670->mHeap,                _if_conditional558) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(_if_conditional559=string_operator_equals(name_669,"_protocol_obj"),                _if_conditional559) {
                }
                else {
                    if(_if_conditional560=list$1sNodeph_length(field_type_670->mArrayNum)>0,                    _if_conditional560) {
                        char source2_671[1024];
                        memset(&source2_671, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_671,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_669,name_669,name_669);
                        buffer_append_str(source_664,source2_671);
                    }
                    else {
                        char source2_672[1024];
                        memset(&source2_672, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_672,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_669,name_669);
                        buffer_append_str(source_664,source2_672);
                    }
                }
                name_669 = come_decrement_ref_count2(name_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_670, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_667, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_663=map$2charphsClassphp_operator_load_element(info->classes,klass_663->mName);
            for(            o2_saved_673=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_663->mFields)),it_674=list$1tuple2$2charphsTypephph_begin((o2_saved_673));            !list$1tuple2$2charphsTypephph_end((o2_saved_673));            it_674=list$1tuple2$2charphsTypephph_next((o2_saved_673))            ){
                multiple_assign_var16=it_674;
                name_675=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_676=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(_if_conditional561=string_operator_equals(type->mClass->mName,field_type_676->mClass->mName)&&type->mPointerNum==field_type_676->mPointerNum&&field_type_676->mHeap,                _if_conditional561) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_676->mHeap) {
                    char source2_677[1024];
                    memset(&source2_677, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_677,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_675,name_675,name_675);
                    buffer_append_str(source_664,source2_677);
                }
                else {
                    if(_if_conditional563=list$1sNodeph_length(field_type_676->mArrayNum)>0,                    _if_conditional563) {
                        char source2_678[1024];
                        memset(&source2_678, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_678,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_675,name_675,name_675);
                        buffer_append_str(source_664,source2_678);
                    }
                    else {
                        char source2_679[1024];
                        memset(&source2_679, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_679,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_675,name_675);
                        buffer_append_str(source_664,source2_679);
                    }
                }
                name_675 = come_decrement_ref_count2(name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_676, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_673, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_664,((char*)(right_value801=xsprintf("return result;"))));
        right_value801 = come_decrement_ref_count2(right_value801, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_664,125);
        p_680=info->p;
        sline_681=info->sline;
        sname_682=(char*)come_increment_ref_count(info->sname);
        source3_683=(struct buffer*)come_increment_ref_count(info->source);
        head_684=info->head;
        __dec_obj198=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_664);
        come_call_finalizer2(buffer_finalize,__dec_obj198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj199=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value802=__builtin_string(real_fun_name_661))));
        __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value802 = come_decrement_ref_count2(right_value802, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=1;
        block_685=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value803=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value803, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_686=(struct sType*)come_increment_ref_count(((struct sType*)(right_value804=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value804, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_687=(char*)come_increment_ref_count(((char*)(right_value805=string_clone(real_fun_name_661))));
        right_value805 = come_decrement_ref_count2(right_value805, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_688=(struct sType*)come_increment_ref_count(((struct sType*)(right_value806=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value806, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_688->mHeap=(_Bool)0;
        {__list_values31___689[0]=come_increment_ref_count(self_type_688);
}        param_types_690=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value808=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value807=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2526, "struct list$1sTypeph")))),1,__list_values31___689))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value807, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value808, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values32___691[0]=come_increment_ref_count(((char*)(right_value809=__builtin_string("self"))));
}        param_names_692=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value811=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value810=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2527, "struct list$1charph")))),1,__list_values32___691))));
        right_value809 = come_decrement_ref_count2(right_value809, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value810, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value811, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_693=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value813=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value812=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2528, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value812, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value813, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_693,((void*)0));
        header_buf_694=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value815=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value814=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2531, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value814, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value815, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_694,((char*)(right_value816=make_come_type_name_string(result_type_686,info))));
        right_value816 = come_decrement_ref_count2(right_value816, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_694," ");
        buffer_append_str(header_buf_694,real_fun_name_661);
        buffer_append_str(header_buf_694,"(");
        for(        i_695=0;        i_695<list$1sTypeph_length(param_types_690);        i_695++        ){
            param_type_696=list$1sTypephp_operator_load_element(param_types_690,i_695);
            param_name_697=list$1charphp_operator_load_element(param_names_692,i_695);
            buffer_append_str(header_buf_694,((char*)(right_value817=make_come_type_name_string(param_type_696,info))));
            right_value817 = come_decrement_ref_count2(right_value817, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_694," ");
            buffer_append_str(header_buf_694,param_name_697);
            if(_if_conditional564=i_695!=list$1sTypeph_length(param_types_690)-1,            _if_conditional564) {
                buffer_append_str(header_buf_694,",");
            }
        }
        buffer_append_str(header_buf_694,")");
        result_type_686->mStatic=(_Bool)0;
        fun_698=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value821=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value818=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2554, "sFun")))),(char*)come_increment_ref_count(name_687),(struct sType*)come_increment_ref_count(result_type_686),(struct list$1sTypeph*)come_increment_ref_count(param_types_690),(struct list$1charph*)come_increment_ref_count(param_names_692),(struct list$1charph*)come_increment_ref_count(param_default_parametors_693),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_685),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value819=buffer_to_string(header_buf_694)))),(char*)come_increment_ref_count(((char*)(right_value820=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value818, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value819 = come_decrement_ref_count2(right_value819, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value820 = come_decrement_ref_count2(right_value820, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value821, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun_698->mCloner=(_Bool)1;
        fun2_699=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value822=__builtin_string(fun_name))));
        right_value822 = come_decrement_ref_count2(right_value822, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional565=fun2_699==((void*)0)||fun2_699->mExternal,        _if_conditional565) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value823=string_clone(name_687)))),(struct sFun*)come_increment_ref_count(fun_698));
            right_value823 = come_decrement_ref_count2(right_value823, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        cloner_660=fun_698;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2571, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value825=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value824=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2571, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_698),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sFunNode_sline;
        _inf_value12->sname=(void*)sFunNode_sname;
        _inf_value12->terminated=(void*)sFunNode_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_701=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value829=_inf_value12)));
        come_call_finalizer2(sFunNode_finalize,right_value824, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value825, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value829) { right_value829 = come_decrement_ref_count2(right_value829, ((struct sNode*)right_value829)->finalize, ((struct sNode*)right_value829)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional572=!node_compile(node_701,info),        _if_conditional572) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj202=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_682);
        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_681;
        __dec_obj203=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_683);
        come_call_finalizer2(buffer_finalize,__dec_obj203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_680;
        info->head=head_684;
        info->sline=sline_681;
        come_call_finalizer2(buffer_finalize,source_664, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_682 = come_decrement_ref_count2(sname_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_683, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_685, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_686, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_687 = come_decrement_ref_count2(name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_688, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_690, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_692, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_693, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_694, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_698, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_701) { node_701 = come_decrement_ref_count2(node_701, ((struct sNode*)node_701)->finalize, ((struct sNode*)node_701)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_659;
    __dec_obj204=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_656);
    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj205=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_657);
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj206=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_658);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result227__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value831=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value830=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2593, "struct tuple2$2sFunpcharph")))),cloner_660,(char*)come_increment_ref_count(real_fun_name_661))));
    last_code_656 = come_decrement_ref_count2(last_code_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_657 = come_decrement_ref_count2(last_code2_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_658 = come_decrement_ref_count2(last_code3_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_661 = come_decrement_ref_count2(real_fun_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_662, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value830 = come_decrement_ref_count2(right_value830, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value831, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result227__;
    last_code_656 = come_decrement_ref_count2(last_code_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_657 = come_decrement_ref_count2(last_code2_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_658 = come_decrement_ref_count2(last_code3_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_661 = come_decrement_ref_count2(real_fun_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_662, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFunNode_finalize(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional566;
_Bool _if_conditional567;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional566=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional566) {
                come_call_finalizer2(sFun_finalize,self->mFun, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional567=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional567) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional568;
struct sFunNode* __result225__;
void* right_value826;
struct sFunNode* result_700;
_Bool _if_conditional569;
void* right_value827;
struct sFun* __dec_obj200;
_Bool _if_conditional570;
_Bool _if_conditional571;
void* right_value828;
char* __dec_obj201;
struct sFunNode* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
right_value826 = (void*)0;
memset(&result_700, 0, sizeof(struct sFunNode*));
right_value827 = (void*)0;
right_value828 = (void*)0;
            if(_if_conditional568=self==(void*)0,            _if_conditional568) {
                __result225__ = __result_obj__ = (void*)0;
                return __result225__;
            }
            result_700=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value826=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"))));
            come_call_finalizer2(sFunNode_finalize,right_value826, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional569=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional569) {
                __dec_obj200=result_700->mFun;
                result_700->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value827=sFun_clone(self->mFun))));
                come_call_finalizer2(sFun_finalize,__dec_obj200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,right_value827, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional570=self!=((void*)0),            _if_conditional570) {
                result_700->sline=self->sline;
            }
            if(_if_conditional571=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional571) {
                __dec_obj201=result_700->sname;
                result_700->sname=(char*)come_increment_ref_count(((char*)(right_value828=string_clone(self->sname))));
                __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value828 = come_decrement_ref_count2(right_value828, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result226__ = __result_obj__ = result_700;
            come_call_finalizer2(sFunNode_finalize,result_700, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result226__;
            come_call_finalizer2(sFunNode_finalize,result_700, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

