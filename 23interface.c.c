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
struct sInterfaceNode
{
    char* name;
    struct sClass* klass;
    _Bool mOutput;
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

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
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
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
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

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static void sInterfaceNode_finalize(struct sInterfaceNode* self);
static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self);
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










struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
void* right_value102;
struct sClass* __dec_obj46;
void* right_value103;
char* __dec_obj47;
struct sInterfaceNode* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
    # 14 "23interface.c"
    __dec_obj12=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(name))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 15 "23interface.c"
    __dec_obj46=self->klass;
    self->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value102=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 17 "23interface.c"
    self->sline=info->sline;
    # 18 "23interface.c"
    __dec_obj47=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(info->sname))));
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 20 "23interface.c"
    self->mOutput=output;
    # 22 "23interface.c"
    __result64__ = __result_obj__ = self;
    come_call_finalizer2(sInterfaceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result64__;
    come_call_finalizer2(sInterfaceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional7;
struct sClass* __result34__;
void* right_value50;
struct sClass* result_11;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value51;
char* __dec_obj13;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
void* right_value100;
struct list$1tuple2$2charphsTypephph* __dec_obj44;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value101;
char* __dec_obj45;
_Bool _if_conditional130;
struct sClass* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
memset(&result_11, 0, sizeof(struct sClass*));
right_value51 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
        # 3 "sClass_clone"
        # 2 "sClass_clone"
        if(_if_conditional7=self==(void*)0,        _if_conditional7) {
            # 2 "sClass_clone"
            __result34__ = __result_obj__ = (void*)0;
            return __result34__;
        }
        # 3 "sClass_clone"
        result_11=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value50=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
        come_call_finalizer2(sClass_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sClass_clone"
        # 4 "sClass_clone"
        if(_if_conditional31=self!=((void*)0),        _if_conditional31) {
            # 4 "sClass_clone"
            result_11->mStruct=self->mStruct;
        }
        # 6 "sClass_clone"
        # 5 "sClass_clone"
        if(_if_conditional32=self!=((void*)0),        _if_conditional32) {
            # 5 "sClass_clone"
            result_11->mFloat=self->mFloat;
        }
        # 7 "sClass_clone"
        # 6 "sClass_clone"
        if(_if_conditional33=self!=((void*)0),        _if_conditional33) {
            # 6 "sClass_clone"
            result_11->mUnion=self->mUnion;
        }
        # 8 "sClass_clone"
        # 7 "sClass_clone"
        if(_if_conditional34=self!=((void*)0),        _if_conditional34) {
            # 7 "sClass_clone"
            result_11->mGenerics=self->mGenerics;
        }
        # 9 "sClass_clone"
        # 8 "sClass_clone"
        if(_if_conditional35=self!=((void*)0),        _if_conditional35) {
            # 8 "sClass_clone"
            result_11->mMethodGenerics=self->mMethodGenerics;
        }
        # 10 "sClass_clone"
        # 9 "sClass_clone"
        if(_if_conditional36=self!=((void*)0),        _if_conditional36) {
            # 9 "sClass_clone"
            result_11->mEnum=self->mEnum;
        }
        # 11 "sClass_clone"
        # 10 "sClass_clone"
        if(_if_conditional37=self!=((void*)0),        _if_conditional37) {
            # 10 "sClass_clone"
            result_11->mProtocol=self->mProtocol;
        }
        # 12 "sClass_clone"
        # 11 "sClass_clone"
        if(_if_conditional38=self!=((void*)0),        _if_conditional38) {
            # 11 "sClass_clone"
            result_11->mNumber=self->mNumber;
        }
        # 13 "sClass_clone"
        # 12 "sClass_clone"
        if(_if_conditional39=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional39) {
            # 12 "sClass_clone"
            __dec_obj13=result_11->mName;
            result_11->mName=(char*)come_increment_ref_count(((char*)(right_value51=string_clone(self->mName))));
            __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 14 "sClass_clone"
        # 13 "sClass_clone"
        if(_if_conditional40=self!=((void*)0),        _if_conditional40) {
            # 13 "sClass_clone"
            result_11->mGenericsNum=self->mGenericsNum;
        }
        # 15 "sClass_clone"
        # 14 "sClass_clone"
        if(_if_conditional41=self!=((void*)0),        _if_conditional41) {
            # 14 "sClass_clone"
            result_11->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        # 16 "sClass_clone"
        # 15 "sClass_clone"
        if(_if_conditional42=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional42) {
            # 15 "sClass_clone"
            __dec_obj44=result_11->mFields;
            result_11->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value100=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 17 "sClass_clone"
        # 16 "sClass_clone"
        if(_if_conditional128=self!=((void*)0),        _if_conditional128) {
            # 16 "sClass_clone"
            result_11->mOutputed=self->mOutputed;
        }
        # 18 "sClass_clone"
        # 17 "sClass_clone"
        if(_if_conditional129=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional129) {
            # 17 "sClass_clone"
            __dec_obj45=result_11->mDeclareSName;
            result_11->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value101=string_clone(self->mDeclareSName))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 19 "sClass_clone"
        # 18 "sClass_clone"
        if(_if_conditional130=self!=((void*)0),        _if_conditional130) {
            # 18 "sClass_clone"
            result_11->mNobodyStruct=self->mNobodyStruct;
        }
        # 19 "sClass_clone"
        __result63__ = __result_obj__ = result_11;
        come_call_finalizer2(sClass_finalize,result_11, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result63__;
        come_call_finalizer2(sClass_finalize,result_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sClass_finalize"
            # 0 "sClass_finalize"
            if(_if_conditional8=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional8) {
                # 0 "sClass_finalize"
                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sClass_finalize"
            # 1 "sClass_finalize"
            if(_if_conditional9=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional9) {
                # 1 "sClass_finalize"
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sClass_finalize"
            # 2 "sClass_finalize"
            if(_if_conditional30=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional30) {
                # 2 "sClass_finalize"
                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_12;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_12, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    # 123 "./comelang2.h"
                    it_12=self->head;
                    # 129 "./comelang2.h"
                    while(_while_condtional1=it_12!=((void*)0),                    _while_condtional1) {
                        # 125 "./comelang2.h"
                        prev_it_13=it_12;
                        # 126 "./comelang2.h"
                        it_12=it_12->next;
                        # 127 "./comelang2.h"
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                            if(_if_conditional10=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional10) {
                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "tuple2$2charphsTypephp_finalize"
                                    # 0 "tuple2$2charphsTypephp_finalize"
                                    if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional11) {
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "tuple2$2charphsTypephp_finalize"
                                    # 1 "tuple2$2charphsTypephp_finalize"
                                    if(_if_conditional12=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional12) {
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sType_finalize"
                                            # 0 "sType_finalize"
                                            if(_if_conditional13=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                            _if_conditional13) {
                                                # 0 "sType_finalize"
                                                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sType_finalize"
                                            # 1 "sType_finalize"
                                            if(_if_conditional15=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                            _if_conditional15) {
                                                # 1 "sType_finalize"
                                                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 3 "sType_finalize"
                                            # 2 "sType_finalize"
                                            if(_if_conditional17=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                            _if_conditional17) {
                                                # 2 "sType_finalize"
                                                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 4 "sType_finalize"
                                            # 3 "sType_finalize"
                                            if(_if_conditional18=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                            _if_conditional18) {
                                                # 3 "sType_finalize"
                                                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 5 "sType_finalize"
                                            # 4 "sType_finalize"
                                            if(_if_conditional19=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                            _if_conditional19) {
                                                # 4 "sType_finalize"
                                                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 6 "sType_finalize"
                                            # 5 "sType_finalize"
                                            if(_if_conditional20=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                            _if_conditional20) {
                                                # 5 "sType_finalize"
                                                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 7 "sType_finalize"
                                            # 6 "sType_finalize"
                                            if(_if_conditional22=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                            _if_conditional22) {
                                                # 6 "sType_finalize"
                                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 8 "sType_finalize"
                                            # 7 "sType_finalize"
                                            if(_if_conditional23=self!=((void*)0)&&self->mParamNames!=((void*)0),                                            _if_conditional23) {
                                                # 7 "sType_finalize"
                                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 9 "sType_finalize"
                                            # 8 "sType_finalize"
                                            if(_if_conditional25=self!=((void*)0)&&self->mResultType!=((void*)0),                                            _if_conditional25) {
                                                # 8 "sType_finalize"
                                                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 10 "sType_finalize"
                                            # 9 "sType_finalize"
                                            if(_if_conditional26=self!=((void*)0)&&self->mAlignas!=((void*)0),                                            _if_conditional26) {
                                                # 9 "sType_finalize"
                                                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 11 "sType_finalize"
                                            # 10 "sType_finalize"
                                            if(_if_conditional27=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                            _if_conditional27) {
                                                # 10 "sType_finalize"
                                                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 12 "sType_finalize"
                                            # 11 "sType_finalize"
                                            if(_if_conditional28=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                            _if_conditional28) {
                                                # 11 "sType_finalize"
                                                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 13 "sType_finalize"
                                            # 12 "sType_finalize"
                                            if(_if_conditional29=self!=((void*)0)&&self->mAsmName!=((void*)0),                                            _if_conditional29) {
                                                # 12 "sType_finalize"
                                                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_15, 0, sizeof(struct list_item$1sTypeph*));
                                                    # 123 "./comelang2.h"
                                                    it_14=self->head;
                                                    # 129 "./comelang2.h"
                                                    while(_while_condtional2=it_14!=((void*)0),                                                    _while_condtional2) {
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
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "list_item$1sTypephp_finalize"
                                                            # 0 "list_item$1sTypephp_finalize"
                                                            if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                                            _if_conditional14) {
                                                                # 0 "list_item$1sTypephp_finalize"
                                                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "tuple1$1sTypephp_finalize"
                                                    # 0 "tuple1$1sTypephp_finalize"
                                                    if(_if_conditional16=self!=((void*)0)&&self->v1!=((void*)0),                                                    _if_conditional16) {
                                                        # 0 "tuple1$1sTypephp_finalize"
                                                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_16;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1sNodeph*));
                                                    # 123 "./comelang2.h"
                                                    it_16=self->head;
                                                    # 129 "./comelang2.h"
                                                    while(_while_condtional3=it_16!=((void*)0),                                                    _while_condtional3) {
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
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "list_item$1sNodephp_finalize"
                                                            # 0 "list_item$1sNodephp_finalize"
                                                            if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                                                            _if_conditional21) {
                                                                # 0 "list_item$1sNodephp_finalize"
                                                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_18;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_18, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_19, 0, sizeof(struct list_item$1charph*));
                                                    # 123 "./comelang2.h"
                                                    it_18=self->head;
                                                    # 129 "./comelang2.h"
                                                    while(_while_condtional4=it_18!=((void*)0),                                                    _while_condtional4) {
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
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "list_item$1charphp_finalize"
                                                            # 0 "list_item$1charphp_finalize"
                                                            if(_if_conditional24=self!=((void*)0)&&self->item!=((void*)0),                                                            _if_conditional24) {
                                                                # 0 "list_item$1charphp_finalize"
                                                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct list$1tuple2$2charphsTypephph* __result35__;
void* right_value52;
void* right_value53;
struct list$1tuple2$2charphsTypephph* result_20;
struct list_item$1tuple2$2charphsTypephph* it_21;
_Bool _while_condtional5;
void* right_value99;
struct list$1tuple2$2charphsTypephph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
right_value53 = (void*)0;
memset(&result_20, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_21, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value99 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional43=self==((void*)0),                _if_conditional43) {
                    # 140 "./comelang2.h"
                    __result35__ = __result_obj__ = ((void*)0);
                    return __result35__;
                }
                # 142 "./comelang2.h"
                result_20=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value53=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value52=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsTypephph"))))))));
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_21=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional5=it_21!=((void*)0),                _while_condtional5) {
                    # 146 "./comelang2.h"
                    list$1tuple2$2charphsTypephph_add(result_20,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value99=tuple2$2charphsTypephp_clone(it_21->item)))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./comelang2.h"
                    it_21=it_21->next;
                }
                # 151 "./comelang2.h"
                __result62__ = __result_obj__ = result_20;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result62__;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result36__ = __result_obj__ = self;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result36__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional44;
void* right_value54;
struct list_item$1tuple2$2charphsTypephph* litem_22;
struct tuple2$2charphsTypeph* __dec_obj14;
_Bool _if_conditional47;
void* right_value55;
struct list_item$1tuple2$2charphsTypephph* litem_23;
struct tuple2$2charphsTypeph* __dec_obj15;
void* right_value56;
struct list_item$1tuple2$2charphsTypephph* litem_24;
struct tuple2$2charphsTypeph* __dec_obj16;
struct list$1tuple2$2charphsTypephph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value55 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value56 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional44=self->len==0,                        _if_conditional44) {
                            # 156 "./comelang2.h"
                            litem_22=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value54=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_22->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_22->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj14=litem_22->item;
                            litem_22->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./comelang2.h"
                            self->tail=litem_22;
                            # 163 "./comelang2.h"
                            self->head=litem_22;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional47=self->len==1,                            _if_conditional47) {
                                # 166 "./comelang2.h"
                                litem_23=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value55=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_23->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_23->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj15=litem_23->item;
                                litem_23->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./comelang2.h"
                                self->tail=litem_23;
                                # 173 "./comelang2.h"
                                self->head->next=litem_23;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_24=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value56=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_24->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_24->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj16=litem_24->item;
                                litem_24->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 182 "./comelang2.h"
                                self->tail->next=litem_24;
                                # 183 "./comelang2.h"
                                self->tail=litem_24;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
                        __result37__ = __result_obj__ = self;
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result37__;
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsTypeph_finalize"
                                # 0 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional45) {
                                    # 0 "tuple2$2charphsTypeph_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsTypeph_finalize"
                                # 1 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional46=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional46) {
                                    # 1 "tuple2$2charphsTypeph_finalize"
                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
struct tuple2$2charphsTypeph* __result38__;
void* right_value57;
struct tuple2$2charphsTypeph* result_25;
_Bool _if_conditional49;
void* right_value58;
char* __dec_obj17;
_Bool _if_conditional50;
void* right_value98;
struct sType* __dec_obj43;
struct tuple2$2charphsTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&result_25, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value58 = (void*)0;
right_value98 = (void*)0;
                        # 3 "tuple2$2charphsTypephp_clone"
                        # 2 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional48=self==(void*)0,                        _if_conditional48) {
                            # 2 "tuple2$2charphsTypephp_clone"
                            __result38__ = __result_obj__ = (void*)0;
                            return __result38__;
                        }
                        # 3 "tuple2$2charphsTypephp_clone"
                        result_25=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value57=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple2$2charphsTypephp_clone"
                        # 4 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional49=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional49) {
                            # 4 "tuple2$2charphsTypephp_clone"
                            __dec_obj17=result_25->v1;
                            result_25->v1=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->v1))));
                            __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        # 5 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional50=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional50) {
                            # 5 "tuple2$2charphsTypephp_clone"
                            __dec_obj43=result_25->v2;
                            result_25->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(self->v2))));
                            come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        __result61__ = __result_obj__ = result_25;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_25, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result61__;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional51;
struct sType* __result39__;
void* right_value59;
struct sType* result_26;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value66;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional57;
void* right_value69;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional61;
void* right_value72;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional64;
void* right_value73;
char* __dec_obj26;
_Bool _if_conditional65;
void* right_value74;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional66;
void* right_value82;
struct list$1sNodeph* __dec_obj31;
_Bool _if_conditional79;
_Bool _if_conditional80;
void* right_value83;
struct list$1sTypeph* __dec_obj32;
_Bool _if_conditional81;
void* right_value90;
struct list$1charph* __dec_obj36;
_Bool _if_conditional85;
void* right_value93;
struct tuple1$1sTypeph* __dec_obj38;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value94;
struct sNode* __dec_obj39;
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
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
void* right_value95;
struct sNode* __dec_obj40;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value96;
char* __dec_obj41;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value97;
char* __dec_obj42;
_Bool _if_conditional127;
struct sType* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
memset(&result_26, 0, sizeof(struct sType*));
right_value66 = (void*)0;
right_value69 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value90 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
                                # 3 "sType_clone"
                                # 2 "sType_clone"
                                if(_if_conditional51=self==(void*)0,                                _if_conditional51) {
                                    # 2 "sType_clone"
                                    __result39__ = __result_obj__ = (void*)0;
                                    return __result39__;
                                }
                                # 3 "sType_clone"
                                result_26=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                come_call_finalizer2(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sType_clone"
                                # 4 "sType_clone"
                                if(_if_conditional52=self!=((void*)0),                                _if_conditional52) {
                                    # 4 "sType_clone"
                                    result_26->mClass=self->mClass;
                                }
                                # 6 "sType_clone"
                                # 5 "sType_clone"
                                if(_if_conditional53=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                _if_conditional53) {
                                    # 5 "sType_clone"
                                    __dec_obj21=result_26->mMultipleTypes;
                                    result_26->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value66=list$1sTypeph_clone(self->mMultipleTypes))));
                                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sType_clone"
                                # 6 "sType_clone"
                                if(_if_conditional57=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional57) {
                                    # 6 "sType_clone"
                                    __dec_obj23=result_26->mNoSolvedGenericsType;
                                    result_26->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value69=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                # 8 "sType_clone"
                                # 7 "sType_clone"
                                if(_if_conditional61=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional61) {
                                    # 7 "sType_clone"
                                    __dec_obj25=result_26->mOriginalLoadVarType;
                                    result_26->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value72=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                # 9 "sType_clone"
                                # 8 "sType_clone"
                                if(_if_conditional64=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional64) {
                                    # 8 "sType_clone"
                                    __dec_obj26=result_26->mGenericsName;
                                    result_26->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value73=string_clone(self->mGenericsName))));
                                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 10 "sType_clone"
                                # 9 "sType_clone"
                                if(_if_conditional65=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional65) {
                                    # 9 "sType_clone"
                                    __dec_obj27=result_26->mGenericsTypes;
                                    result_26->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value74=list$1sTypeph_clone(self->mGenericsTypes))));
                                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                # 11 "sType_clone"
                                # 10 "sType_clone"
                                if(_if_conditional66=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional66) {
                                    # 10 "sType_clone"
                                    __dec_obj31=result_26->mArrayNum;
                                    result_26->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value82=list$1sNodeph_clone(self->mArrayNum))));
                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                # 12 "sType_clone"
                                # 11 "sType_clone"
                                if(_if_conditional79=self!=((void*)0),                                _if_conditional79) {
                                    # 11 "sType_clone"
                                    result_26->mOmitArrayNum=self->mOmitArrayNum;
                                }
                                # 13 "sType_clone"
                                # 12 "sType_clone"
                                if(_if_conditional80=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional80) {
                                    # 12 "sType_clone"
                                    __dec_obj32=result_26->mParamTypes;
                                    result_26->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=list$1sTypeph_clone(self->mParamTypes))));
                                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                # 14 "sType_clone"
                                # 13 "sType_clone"
                                if(_if_conditional81=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional81) {
                                    # 13 "sType_clone"
                                    __dec_obj36=result_26->mParamNames;
                                    result_26->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=list$1charph_clone(self->mParamNames))));
                                    come_call_finalizer2(list$1charph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                # 15 "sType_clone"
                                # 14 "sType_clone"
                                if(_if_conditional85=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional85) {
                                    # 14 "sType_clone"
                                    __dec_obj38=result_26->mResultType;
                                    result_26->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=tuple1$1sTypephp_clone(self->mResultType))));
                                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                # 16 "sType_clone"
                                # 15 "sType_clone"
                                if(_if_conditional88=self!=((void*)0),                                _if_conditional88) {
                                    # 15 "sType_clone"
                                    result_26->mVarArgs=self->mVarArgs;
                                }
                                # 17 "sType_clone"
                                # 16 "sType_clone"
                                if(_if_conditional89=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional89) {
                                    # 16 "sType_clone"
                                    __dec_obj39=result_26->mAlignas;
                                    result_26->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=sNode_clone(self->mAlignas))));
                                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value94) { right_value94 = come_decrement_ref_count2(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 18 "sType_clone"
                                # 17 "sType_clone"
                                if(_if_conditional90=self!=((void*)0),                                _if_conditional90) {
                                    # 17 "sType_clone"
                                    result_26->mUnsigned=self->mUnsigned;
                                }
                                # 19 "sType_clone"
                                # 18 "sType_clone"
                                if(_if_conditional91=self!=((void*)0),                                _if_conditional91) {
                                    # 18 "sType_clone"
                                    result_26->mShort=self->mShort;
                                }
                                # 20 "sType_clone"
                                # 19 "sType_clone"
                                if(_if_conditional92=self!=((void*)0),                                _if_conditional92) {
                                    # 19 "sType_clone"
                                    result_26->mLong=self->mLong;
                                }
                                # 21 "sType_clone"
                                # 20 "sType_clone"
                                if(_if_conditional93=self!=((void*)0),                                _if_conditional93) {
                                    # 20 "sType_clone"
                                    result_26->mLongLong=self->mLongLong;
                                }
                                # 22 "sType_clone"
                                # 21 "sType_clone"
                                if(_if_conditional94=self!=((void*)0),                                _if_conditional94) {
                                    # 21 "sType_clone"
                                    result_26->mConstant=self->mConstant;
                                }
                                # 23 "sType_clone"
                                # 22 "sType_clone"
                                if(_if_conditional95=self!=((void*)0),                                _if_conditional95) {
                                    # 22 "sType_clone"
                                    result_26->mRegister=self->mRegister;
                                }
                                # 24 "sType_clone"
                                # 23 "sType_clone"
                                if(_if_conditional96=self!=((void*)0),                                _if_conditional96) {
                                    # 23 "sType_clone"
                                    result_26->mVolatile=self->mVolatile;
                                }
                                # 25 "sType_clone"
                                # 24 "sType_clone"
                                if(_if_conditional97=self!=((void*)0),                                _if_conditional97) {
                                    # 24 "sType_clone"
                                    result_26->mStatic=self->mStatic;
                                }
                                # 26 "sType_clone"
                                # 25 "sType_clone"
                                if(_if_conditional98=self!=((void*)0),                                _if_conditional98) {
                                    # 25 "sType_clone"
                                    result_26->mExtern=self->mExtern;
                                }
                                # 27 "sType_clone"
                                # 26 "sType_clone"
                                if(_if_conditional99=self!=((void*)0),                                _if_conditional99) {
                                    # 26 "sType_clone"
                                    result_26->mRestrict=self->mRestrict;
                                }
                                # 28 "sType_clone"
                                # 27 "sType_clone"
                                if(_if_conditional100=self!=((void*)0),                                _if_conditional100) {
                                    # 27 "sType_clone"
                                    result_26->mImmutable=self->mImmutable;
                                }
                                # 29 "sType_clone"
                                # 28 "sType_clone"
                                if(_if_conditional101=self!=((void*)0),                                _if_conditional101) {
                                    # 28 "sType_clone"
                                    result_26->mHeap=self->mHeap;
                                }
                                # 30 "sType_clone"
                                # 29 "sType_clone"
                                if(_if_conditional102=self!=((void*)0),                                _if_conditional102) {
                                    # 29 "sType_clone"
                                    result_26->mDummyHeap=self->mDummyHeap;
                                }
                                # 31 "sType_clone"
                                # 30 "sType_clone"
                                if(_if_conditional103=self!=((void*)0),                                _if_conditional103) {
                                    # 30 "sType_clone"
                                    result_26->mDelegate=self->mDelegate;
                                }
                                # 32 "sType_clone"
                                # 31 "sType_clone"
                                if(_if_conditional104=self!=((void*)0),                                _if_conditional104) {
                                    # 31 "sType_clone"
                                    result_26->mShare=self->mShare;
                                }
                                # 33 "sType_clone"
                                # 32 "sType_clone"
                                if(_if_conditional105=self!=((void*)0),                                _if_conditional105) {
                                    # 32 "sType_clone"
                                    result_26->mClone=self->mClone;
                                }
                                # 34 "sType_clone"
                                # 33 "sType_clone"
                                if(_if_conditional106=self!=((void*)0),                                _if_conditional106) {
                                    # 33 "sType_clone"
                                    result_26->mNoHeap=self->mNoHeap;
                                }
                                # 35 "sType_clone"
                                # 34 "sType_clone"
                                if(_if_conditional107=self!=((void*)0),                                _if_conditional107) {
                                    # 34 "sType_clone"
                                    result_26->mNoCallingDestructor=self->mNoCallingDestructor;
                                }
                                # 36 "sType_clone"
                                # 35 "sType_clone"
                                if(_if_conditional108=self!=((void*)0),                                _if_conditional108) {
                                    # 35 "sType_clone"
                                    result_26->mRefference=self->mRefference;
                                }
                                # 37 "sType_clone"
                                # 36 "sType_clone"
                                if(_if_conditional109=self!=((void*)0),                                _if_conditional109) {
                                    # 36 "sType_clone"
                                    result_26->mException=self->mException;
                                }
                                # 38 "sType_clone"
                                # 37 "sType_clone"
                                if(_if_conditional110=self!=((void*)0),                                _if_conditional110) {
                                    # 37 "sType_clone"
                                    result_26->mPointerNum=self->mPointerNum;
                                }
                                # 39 "sType_clone"
                                # 38 "sType_clone"
                                if(_if_conditional111=self!=((void*)0),                                _if_conditional111) {
                                    # 38 "sType_clone"
                                    result_26->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                }
                                # 40 "sType_clone"
                                # 39 "sType_clone"
                                if(_if_conditional112=self!=((void*)0),                                _if_conditional112) {
                                    # 39 "sType_clone"
                                    result_26->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                }
                                # 41 "sType_clone"
                                # 40 "sType_clone"
                                if(_if_conditional113=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional113) {
                                    # 40 "sType_clone"
                                    __dec_obj40=result_26->mSizeNum;
                                    result_26->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value95=sNode_clone(self->mSizeNum))));
                                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value95) { right_value95 = come_decrement_ref_count2(right_value95, ((struct sNode*)right_value95)->finalize, ((struct sNode*)right_value95)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 42 "sType_clone"
                                # 41 "sType_clone"
                                if(_if_conditional114=self!=((void*)0),                                _if_conditional114) {
                                    # 41 "sType_clone"
                                    result_26->mDynamicArrayNum=self->mDynamicArrayNum;
                                }
                                # 43 "sType_clone"
                                # 42 "sType_clone"
                                if(_if_conditional115=self!=((void*)0),                                _if_conditional115) {
                                    # 42 "sType_clone"
                                    result_26->mTypeOfExpression=self->mTypeOfExpression;
                                }
                                # 44 "sType_clone"
                                # 43 "sType_clone"
                                if(_if_conditional116=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional116) {
                                    # 43 "sType_clone"
                                    __dec_obj41=result_26->mOriginalTypeName;
                                    result_26->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value96=string_clone(self->mOriginalTypeName))));
                                    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 45 "sType_clone"
                                # 44 "sType_clone"
                                if(_if_conditional117=self!=((void*)0),                                _if_conditional117) {
                                    # 44 "sType_clone"
                                    result_26->mOriginalPointerNum=self->mOriginalPointerNum;
                                }
                                # 46 "sType_clone"
                                # 45 "sType_clone"
                                if(_if_conditional118=self!=((void*)0),                                _if_conditional118) {
                                    # 45 "sType_clone"
                                    result_26->mFunctionParam=self->mFunctionParam;
                                }
                                # 47 "sType_clone"
                                # 46 "sType_clone"
                                if(_if_conditional119=self!=((void*)0),                                _if_conditional119) {
                                    # 46 "sType_clone"
                                    result_26->mAllocaValue=self->mAllocaValue;
                                }
                                # 48 "sType_clone"
                                # 47 "sType_clone"
                                if(_if_conditional120=self!=((void*)0),                                _if_conditional120) {
                                    # 47 "sType_clone"
                                    result_26->mGenericsStruct=self->mGenericsStruct;
                                }
                                # 49 "sType_clone"
                                # 48 "sType_clone"
                                if(_if_conditional121=self!=((void*)0),                                _if_conditional121) {
                                    # 48 "sType_clone"
                                    result_26->mSolvedGenericsName=self->mSolvedGenericsName;
                                }
                                # 50 "sType_clone"
                                # 49 "sType_clone"
                                if(_if_conditional122=self!=((void*)0),                                _if_conditional122) {
                                    # 49 "sType_clone"
                                    result_26->mComeMemCore=self->mComeMemCore;
                                }
                                # 51 "sType_clone"
                                # 50 "sType_clone"
                                if(_if_conditional123=self!=((void*)0),                                _if_conditional123) {
                                    # 50 "sType_clone"
                                    result_26->mInline=self->mInline;
                                }
                                # 52 "sType_clone"
                                # 51 "sType_clone"
                                if(_if_conditional124=self!=((void*)0),                                _if_conditional124) {
                                    # 51 "sType_clone"
                                    result_26->mNullValue=self->mNullValue;
                                }
                                # 53 "sType_clone"
                                # 52 "sType_clone"
                                if(_if_conditional125=self!=((void*)0),                                _if_conditional125) {
                                    # 52 "sType_clone"
                                    result_26->mGuardValue=self->mGuardValue;
                                }
                                # 54 "sType_clone"
                                # 53 "sType_clone"
                                if(_if_conditional126=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional126) {
                                    # 53 "sType_clone"
                                    __dec_obj42=result_26->mAsmName;
                                    result_26->mAsmName=(char*)come_increment_ref_count(((char*)(right_value97=string_clone(self->mAsmName))));
                                    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 55 "sType_clone"
                                # 54 "sType_clone"
                                if(_if_conditional127=self!=((void*)0),                                _if_conditional127) {
                                    # 54 "sType_clone"
                                    result_26->mArrayPointerType=self->mArrayPointerType;
                                }
                                # 55 "sType_clone"
                                __result60__ = __result_obj__ = result_26;
                                come_call_finalizer2(sType_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result60__;
                                come_call_finalizer2(sType_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional54;
struct list$1sTypeph* __result40__;
void* right_value60;
void* right_value61;
struct list$1sTypeph* result_27;
struct list_item$1sTypeph* it_28;
_Bool _while_condtional6;
void* right_value65;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
right_value61 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1sTypeph*));
memset(&it_28, 0, sizeof(struct list_item$1sTypeph*));
right_value65 = (void*)0;
                                        # 142 "./comelang2.h"
                                        # 139 "./comelang2.h"
                                        if(_if_conditional54=self==((void*)0),                                        _if_conditional54) {
                                            # 140 "./comelang2.h"
                                            __result40__ = __result_obj__ = ((void*)0);
                                            return __result40__;
                                        }
                                        # 142 "./comelang2.h"
                                        result_27=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value61=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value60=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 144 "./comelang2.h"
                                        it_28=self->head;
                                        # 151 "./comelang2.h"
                                        while(_while_condtional6=it_28!=((void*)0),                                        _while_condtional6) {
                                            # 146 "./comelang2.h"
                                            list$1sTypeph_add(result_27,(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(it_28->item)))));
                                            come_call_finalizer2(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 148 "./comelang2.h"
                                            it_28=it_28->next;
                                        }
                                        # 151 "./comelang2.h"
                                        __result43__ = __result_obj__ = result_27;
                                        come_call_finalizer2(list$1sTypephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result43__;
                                        come_call_finalizer2(list$1sTypephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 104 "./comelang2.h"
                                            self->head=((void*)0);
                                            # 105 "./comelang2.h"
                                            self->tail=((void*)0);
                                            # 106 "./comelang2.h"
                                            self->len=0;
                                            # 108 "./comelang2.h"
                                            __result41__ = __result_obj__ = self;
                                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result41__;
                                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional55;
void* right_value62;
struct list_item$1sTypeph* litem_29;
struct sType* __dec_obj18;
_Bool _if_conditional56;
void* right_value63;
struct list_item$1sTypeph* litem_30;
struct sType* __dec_obj19;
void* right_value64;
struct list_item$1sTypeph* litem_31;
struct sType* __dec_obj20;
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1sTypeph*));
right_value63 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1sTypeph*));
right_value64 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1sTypeph*));
                                                # 186 "./comelang2.h"
                                                # 155 "./comelang2.h"
                                                if(_if_conditional55=self->len==0,                                                _if_conditional55) {
                                                    # 156 "./comelang2.h"
                                                    litem_29=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value62=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 158 "./comelang2.h"
                                                    litem_29->prev=((void*)0);
                                                    # 159 "./comelang2.h"
                                                    litem_29->next=((void*)0);
                                                    # 160 "./comelang2.h"
                                                    __dec_obj18=litem_29->item;
                                                    litem_29->item=(struct sType*)come_increment_ref_count(item);
                                                    come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    # 162 "./comelang2.h"
                                                    self->tail=litem_29;
                                                    # 163 "./comelang2.h"
                                                    self->head=litem_29;
                                                }
                                                else {
                                                    # 186 "./comelang2.h"
                                                    # 165 "./comelang2.h"
                                                    if(_if_conditional56=self->len==1,                                                    _if_conditional56) {
                                                        # 166 "./comelang2.h"
                                                        litem_30=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value63=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 168 "./comelang2.h"
                                                        litem_30->prev=self->head;
                                                        # 169 "./comelang2.h"
                                                        litem_30->next=((void*)0);
                                                        # 170 "./comelang2.h"
                                                        __dec_obj19=litem_30->item;
                                                        litem_30->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        # 172 "./comelang2.h"
                                                        self->tail=litem_30;
                                                        # 173 "./comelang2.h"
                                                        self->head->next=litem_30;
                                                    }
                                                    else {
                                                        # 176 "./comelang2.h"
                                                        litem_31=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value64=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 178 "./comelang2.h"
                                                        litem_31->prev=self->tail;
                                                        # 179 "./comelang2.h"
                                                        litem_31->next=((void*)0);
                                                        # 180 "./comelang2.h"
                                                        __dec_obj20=litem_31->item;
                                                        litem_31->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        # 182 "./comelang2.h"
                                                        self->tail->next=litem_31;
                                                        # 183 "./comelang2.h"
                                                        self->tail=litem_31;
                                                    }
                                                }
                                                # 186 "./comelang2.h"
                                                self->len++;
                                                # 188 "./comelang2.h"
                                                __result42__ = __result_obj__ = self;
                                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result42__;
                                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional59;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "tuple1$1sTypeph_finalize"
                                            # 0 "tuple1$1sTypeph_finalize"
                                            if(_if_conditional59=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional59) {
                                                # 0 "tuple1$1sTypeph_finalize"
                                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional67;
struct list$1sNodeph* __result48__;
void* right_value75;
void* right_value76;
struct list$1sNodeph* result_34;
struct list_item$1sNodeph* it_35;
_Bool _while_condtional7;
void* right_value81;
struct list$1sNodeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value75 = (void*)0;
right_value76 = (void*)0;
memset(&result_34, 0, sizeof(struct list$1sNodeph*));
memset(&it_35, 0, sizeof(struct list_item$1sNodeph*));
right_value81 = (void*)0;
                                        # 142 "./comelang2.h"
                                        # 139 "./comelang2.h"
                                        if(_if_conditional67=self==((void*)0),                                        _if_conditional67) {
                                            # 140 "./comelang2.h"
                                            __result48__ = __result_obj__ = ((void*)0);
                                            return __result48__;
                                        }
                                        # 142 "./comelang2.h"
                                        result_34=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value76=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value75=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                                        come_call_finalizer2(list$1sNodephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(list$1sNodephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 144 "./comelang2.h"
                                        it_35=self->head;
                                        # 151 "./comelang2.h"
                                        while(_while_condtional7=it_35!=((void*)0),                                        _while_condtional7) {
                                            # 146 "./comelang2.h"
                                            list$1sNodeph_add(result_34,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=sNode_clone(it_35->item)))));
                                            if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            # 148 "./comelang2.h"
                                            it_35=it_35->next;
                                        }
                                        # 151 "./comelang2.h"
                                        __result53__ = __result_obj__ = result_34;
                                        come_call_finalizer2(list$1sNodephp_finalize,result_34, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result53__;
                                        come_call_finalizer2(list$1sNodephp_finalize,result_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 104 "./comelang2.h"
                                            self->head=((void*)0);
                                            # 105 "./comelang2.h"
                                            self->tail=((void*)0);
                                            # 106 "./comelang2.h"
                                            self->len=0;
                                            # 108 "./comelang2.h"
                                            __result49__ = __result_obj__ = self;
                                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result49__;
                                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional68;
void* right_value77;
struct list_item$1sNodeph* litem_36;
struct sNode* __dec_obj28;
_Bool _if_conditional69;
void* right_value78;
struct list_item$1sNodeph* litem_37;
struct sNode* __dec_obj29;
void* right_value79;
struct list_item$1sNodeph* litem_38;
struct sNode* __dec_obj30;
struct list$1sNodeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1sNodeph*));
right_value78 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1sNodeph*));
right_value79 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1sNodeph*));
                                                # 186 "./comelang2.h"
                                                # 155 "./comelang2.h"
                                                if(_if_conditional68=self->len==0,                                                _if_conditional68) {
                                                    # 156 "./comelang2.h"
                                                    litem_36=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value77=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 158 "./comelang2.h"
                                                    litem_36->prev=((void*)0);
                                                    # 159 "./comelang2.h"
                                                    litem_36->next=((void*)0);
                                                    # 160 "./comelang2.h"
                                                    __dec_obj28=litem_36->item;
                                                    litem_36->item=(struct sNode*)come_increment_ref_count(item);
                                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                                    # 162 "./comelang2.h"
                                                    self->tail=litem_36;
                                                    # 163 "./comelang2.h"
                                                    self->head=litem_36;
                                                }
                                                else {
                                                    # 186 "./comelang2.h"
                                                    # 165 "./comelang2.h"
                                                    if(_if_conditional69=self->len==1,                                                    _if_conditional69) {
                                                        # 166 "./comelang2.h"
                                                        litem_37=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value78=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 168 "./comelang2.h"
                                                        litem_37->prev=self->head;
                                                        # 169 "./comelang2.h"
                                                        litem_37->next=((void*)0);
                                                        # 170 "./comelang2.h"
                                                        __dec_obj29=litem_37->item;
                                                        litem_37->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                                                        # 172 "./comelang2.h"
                                                        self->tail=litem_37;
                                                        # 173 "./comelang2.h"
                                                        self->head->next=litem_37;
                                                    }
                                                    else {
                                                        # 176 "./comelang2.h"
                                                        litem_38=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value79=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 178 "./comelang2.h"
                                                        litem_38->prev=self->tail;
                                                        # 179 "./comelang2.h"
                                                        litem_38->next=((void*)0);
                                                        # 180 "./comelang2.h"
                                                        __dec_obj30=litem_38->item;
                                                        litem_38->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
                                                        # 182 "./comelang2.h"
                                                        self->tail->next=litem_38;
                                                        # 183 "./comelang2.h"
                                                        self->tail=litem_38;
                                                    }
                                                }
                                                # 186 "./comelang2.h"
                                                self->len++;
                                                # 188 "./comelang2.h"
                                                __result50__ = __result_obj__ = self;
                                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                return __result50__;
                                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional70;
struct sNode* __result51__;
void* right_value80;
struct sNode* result_39;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct sNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&result_39, 0, sizeof(struct sNode*));
                                                # 3 "sNode_clone"
                                                # 2 "sNode_clone"
                                                if(_if_conditional70=self==(void*)0,                                                _if_conditional70) {
                                                    # 2 "sNode_clone"
                                                    __result51__ = __result_obj__ = (void*)0;
                                                    return __result51__;
                                                }
                                                # 3 "sNode_clone"
                                                result_39=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value80=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                                if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, ((struct sNode*)right_value80)->finalize, ((struct sNode*)right_value80)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 5 "sNode_clone"
                                                # 4 "sNode_clone"
                                                if(_if_conditional71=self!=((void*)0)&&self->clone!=((void*)0),                                                _if_conditional71) {
                                                    # 4 "sNode_clone"
                                                    result_39->_protocol_obj=self->clone(self->_protocol_obj);
                                                }
                                                # 6 "sNode_clone"
                                                # 5 "sNode_clone"
                                                if(_if_conditional72=self!=((void*)0),                                                _if_conditional72) {
                                                    # 5 "sNode_clone"
                                                    result_39->finalize=self->finalize;
                                                }
                                                # 7 "sNode_clone"
                                                # 6 "sNode_clone"
                                                if(_if_conditional73=self!=((void*)0),                                                _if_conditional73) {
                                                    # 6 "sNode_clone"
                                                    result_39->clone=self->clone;
                                                }
                                                # 8 "sNode_clone"
                                                # 7 "sNode_clone"
                                                if(_if_conditional74=self!=((void*)0),                                                _if_conditional74) {
                                                    # 7 "sNode_clone"
                                                    result_39->compile=self->compile;
                                                }
                                                # 9 "sNode_clone"
                                                # 8 "sNode_clone"
                                                if(_if_conditional75=self!=((void*)0),                                                _if_conditional75) {
                                                    # 8 "sNode_clone"
                                                    result_39->sline=self->sline;
                                                }
                                                # 10 "sNode_clone"
                                                # 9 "sNode_clone"
                                                if(_if_conditional76=self!=((void*)0),                                                _if_conditional76) {
                                                    # 9 "sNode_clone"
                                                    result_39->sname=self->sname;
                                                }
                                                # 11 "sNode_clone"
                                                # 10 "sNode_clone"
                                                if(_if_conditional77=self!=((void*)0),                                                _if_conditional77) {
                                                    # 10 "sNode_clone"
                                                    result_39->terminated=self->terminated;
                                                }
                                                # 12 "sNode_clone"
                                                # 11 "sNode_clone"
                                                if(_if_conditional78=self!=((void*)0),                                                _if_conditional78) {
                                                    # 11 "sNode_clone"
                                                    result_39->kind=self->kind;
                                                }
                                                # 12 "sNode_clone"
                                                __result52__ = __result_obj__ = result_39;
                                                if(result_39) { result_39 = come_decrement_ref_count2(result_39, ((struct sNode*)result_39)->finalize, ((struct sNode*)result_39)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                return __result52__;
                                                if(result_39) { result_39 = come_decrement_ref_count2(result_39, ((struct sNode*)result_39)->finalize, ((struct sNode*)result_39)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional82;
struct list$1charph* __result54__;
void* right_value84;
void* right_value85;
struct list$1charph* result_40;
struct list_item$1charph* it_41;
_Bool _while_condtional8;
void* right_value89;
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&result_40, 0, sizeof(struct list$1charph*));
memset(&it_41, 0, sizeof(struct list_item$1charph*));
right_value89 = (void*)0;
                                        # 142 "./comelang2.h"
                                        # 139 "./comelang2.h"
                                        if(_if_conditional82=self==((void*)0),                                        _if_conditional82) {
                                            # 140 "./comelang2.h"
                                            __result54__ = __result_obj__ = ((void*)0);
                                            return __result54__;
                                        }
                                        # 142 "./comelang2.h"
                                        result_40=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value85=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value84=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                                        come_call_finalizer2(list$1charphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(list$1charphp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 144 "./comelang2.h"
                                        it_41=self->head;
                                        # 151 "./comelang2.h"
                                        while(_while_condtional8=it_41!=((void*)0),                                        _while_condtional8) {
                                            # 146 "./comelang2.h"
                                            list$1charph_add(result_40,(char*)come_increment_ref_count(((char*)(right_value89=string_clone(it_41->item)))));
                                            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 148 "./comelang2.h"
                                            it_41=it_41->next;
                                        }
                                        # 151 "./comelang2.h"
                                        __result57__ = __result_obj__ = result_40;
                                        come_call_finalizer2(list$1charphp_finalize,result_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result57__;
                                        come_call_finalizer2(list$1charphp_finalize,result_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 104 "./comelang2.h"
                                            self->head=((void*)0);
                                            # 105 "./comelang2.h"
                                            self->tail=((void*)0);
                                            # 106 "./comelang2.h"
                                            self->len=0;
                                            # 108 "./comelang2.h"
                                            __result55__ = __result_obj__ = self;
                                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result55__;
                                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional83;
void* right_value86;
struct list_item$1charph* litem_42;
char* __dec_obj33;
_Bool _if_conditional84;
void* right_value87;
struct list_item$1charph* litem_43;
char* __dec_obj34;
void* right_value88;
struct list_item$1charph* litem_44;
char* __dec_obj35;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1charph*));
right_value87 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1charph*));
right_value88 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1charph*));
                                                # 186 "./comelang2.h"
                                                # 155 "./comelang2.h"
                                                if(_if_conditional83=self->len==0,                                                _if_conditional83) {
                                                    # 156 "./comelang2.h"
                                                    litem_42=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value86=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                                    come_call_finalizer2(list_item$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 158 "./comelang2.h"
                                                    litem_42->prev=((void*)0);
                                                    # 159 "./comelang2.h"
                                                    litem_42->next=((void*)0);
                                                    # 160 "./comelang2.h"
                                                    __dec_obj33=litem_42->item;
                                                    litem_42->item=(char*)come_increment_ref_count(item);
                                                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    # 162 "./comelang2.h"
                                                    self->tail=litem_42;
                                                    # 163 "./comelang2.h"
                                                    self->head=litem_42;
                                                }
                                                else {
                                                    # 186 "./comelang2.h"
                                                    # 165 "./comelang2.h"
                                                    if(_if_conditional84=self->len==1,                                                    _if_conditional84) {
                                                        # 166 "./comelang2.h"
                                                        litem_43=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value87=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                                        come_call_finalizer2(list_item$1charphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 168 "./comelang2.h"
                                                        litem_43->prev=self->head;
                                                        # 169 "./comelang2.h"
                                                        litem_43->next=((void*)0);
                                                        # 170 "./comelang2.h"
                                                        __dec_obj34=litem_43->item;
                                                        litem_43->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        # 172 "./comelang2.h"
                                                        self->tail=litem_43;
                                                        # 173 "./comelang2.h"
                                                        self->head->next=litem_43;
                                                    }
                                                    else {
                                                        # 176 "./comelang2.h"
                                                        litem_44=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value88=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                                        come_call_finalizer2(list_item$1charphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 178 "./comelang2.h"
                                                        litem_44->prev=self->tail;
                                                        # 179 "./comelang2.h"
                                                        litem_44->next=((void*)0);
                                                        # 180 "./comelang2.h"
                                                        __dec_obj35=litem_44->item;
                                                        litem_44->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        # 182 "./comelang2.h"
                                                        self->tail->next=litem_44;
                                                        # 183 "./comelang2.h"
                                                        self->tail=litem_44;
                                                    }
                                                }
                                                # 186 "./comelang2.h"
                                                self->len++;
                                                # 188 "./comelang2.h"
                                                __result56__ = __result_obj__ = self;
                                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                return __result56__;
                                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional86;
struct tuple1$1sTypeph* __result58__;
void* right_value91;
struct tuple1$1sTypeph* result_45;
_Bool _if_conditional87;
void* right_value92;
struct sType* __dec_obj37;
struct tuple1$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&result_45, 0, sizeof(struct tuple1$1sTypeph*));
right_value92 = (void*)0;
                                        # 3 "tuple1$1sTypephp_clone"
                                        # 2 "tuple1$1sTypephp_clone"
                                        if(_if_conditional86=self==(void*)0,                                        _if_conditional86) {
                                            # 2 "tuple1$1sTypephp_clone"
                                            __result58__ = __result_obj__ = (void*)0;
                                            return __result58__;
                                        }
                                        # 3 "tuple1$1sTypephp_clone"
                                        result_45=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 5 "tuple1$1sTypephp_clone"
                                        # 4 "tuple1$1sTypephp_clone"
                                        if(_if_conditional87=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional87) {
                                            # 4 "tuple1$1sTypephp_clone"
                                            __dec_obj37=result_45->v1;
                                            result_45->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(self->v1))));
                                            come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 5 "tuple1$1sTypephp_clone"
                                        __result59__ = __result_obj__ = result_45;
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_45, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result59__;
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sInterfaceNode_sline(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
    # 27 "23interface.c"
    __result65__ = self->sline;
    return __result65__;
}

char* sInterfaceNode_sname(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value104;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
    # 32 "23interface.c"
    __result66__ = __result_obj__ = ((char*)(right_value104=__builtin_string(self->sname)));
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}

_Bool sInterfaceNode_terminated(){
void* __result_obj__;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    # 37 "23interface.c"
    __result67__ = (_Bool)0;
    return __result67__;
}

char* sInterfaceNode_kind(){
void* __result_obj__;
void* right_value105;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
    # 42 "23interface.c"
    __result68__ = __result_obj__ = ((char*)(right_value105=__builtin_string("sInterfaceNode")));
    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result68__;
}

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value106;
char* name_46;
struct sClass* klass_47;
void* right_value107;
void* right_value108;
struct buffer* buf_48;
void* right_value109;
struct list$1tuple2$2charphsTypephph* o2_saved_49;
struct tuple2$2charphsTypeph* it_52;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_55;
struct sType* type_56;
void* right_value110;
_Bool _if_conditional138;
void* right_value111;
void* right_value118;
void* right_value119;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&name_46, 0, sizeof(char*));
memset(&klass_47, 0, sizeof(struct sClass*));
right_value107 = (void*)0;
right_value108 = (void*)0;
memset(&buf_48, 0, sizeof(struct buffer*));
right_value109 = (void*)0;
memset(&o2_saved_49, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_52, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_55, 0, sizeof(char*));
memset(&type_56, 0, sizeof(struct sType*));
memset(&name_55, 0, sizeof(char*));
memset(&type_56, 0, sizeof(struct sType*));
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
    # 47 "23interface.c"
    name_46=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(self->name))));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 48 "23interface.c"
    klass_47=self->klass;
    # 49 "23interface.c"
    klass_47->mProtocol=(_Bool)1;
    # 51 "23interface.c"
    buf_48=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value108=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value107=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "23interface.c", 51, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 53 "23interface.c"
    buffer_append_str(buf_48,((char*)(right_value109=xsprintf("struct %s\n{\n",klass_47->mName))));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 64 "23interface.c"
    for(    o2_saved_49=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_47->mFields)),it_52=list$1tuple2$2charphsTypephph_begin((o2_saved_49));    !list$1tuple2$2charphsTypephph_end((o2_saved_49));    it_52=list$1tuple2$2charphsTypephph_next((o2_saved_49))    ){
        # 57 "23interface.c"
        multiple_assign_var1=it_52;
        name_55=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_56=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 59 "23interface.c"
        buffer_append_str(buf_48,"    ");
        # 60 "23interface.c"
        buffer_append_str(buf_48,((char*)(right_value110=make_define_var(type_56,name_55,(_Bool)0,info))));
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 61 "23interface.c"
        buffer_append_str(buf_48,";\n");
        name_55 = come_decrement_ref_count2(name_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 64 "23interface.c"
    buffer_append_str(buf_48,"};\n");
    # 71 "23interface.c"
    # 66 "23interface.c"
    if(self->mOutput) {
        # 67 "23interface.c"
        add_come_code_at_source_head(info,"%s",((char*)(right_value111=buffer_to_string(buf_48))));
        right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 68 "23interface.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(name_46)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value119=sClass_clone(klass_47)))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    # 71 "23interface.c"
    __result100__ = (_Bool)1;
    name_46 = come_decrement_ref_count2(name_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result100__;
    name_46 = come_decrement_ref_count2(name_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional134;
struct tuple2$2charphsTypeph* result_50;
struct tuple2$2charphsTypeph* __result69__;
_Bool _if_conditional135;
struct tuple2$2charphsTypeph* __result70__;
struct tuple2$2charphsTypeph* result_51;
struct tuple2$2charphsTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_50, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_51, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 290 "./comelang2.h"
        # 285 "./comelang2.h"
        if(_if_conditional134=self==((void*)0),        _if_conditional134) {
            # 286 "./comelang2.h"
            # 287 "./comelang2.h"
            memset(&result_50,0,sizeof(struct tuple2$2charphsTypeph*));
            # 288 "./comelang2.h"
            __result69__ = __result_obj__ = result_50;
            return __result69__;
        }
        # 290 "./comelang2.h"
        self->it=self->head;
        # 296 "./comelang2.h"
        # 292 "./comelang2.h"
        if(self->it) {
            # 293 "./comelang2.h"
            __result70__ = __result_obj__ = self->it->item;
            return __result70__;
        }
        # 296 "./comelang2.h"
        # 297 "./comelang2.h"
        memset(&result_51,0,sizeof(struct tuple2$2charphsTypeph*));
        # 298 "./comelang2.h"
        __result71__ = __result_obj__ = result_51;
        return __result71__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./comelang2.h"
        __result72__ = self==((void*)0)||self->it==((void*)0);
        return __result72__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional136;
struct tuple2$2charphsTypeph* result_53;
struct tuple2$2charphsTypeph* __result73__;
_Bool _if_conditional137;
struct tuple2$2charphsTypeph* __result74__;
struct tuple2$2charphsTypeph* result_54;
struct tuple2$2charphsTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_53, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_54, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 308 "./comelang2.h"
        # 302 "./comelang2.h"
        if(_if_conditional136=self==((void*)0)||self->it==((void*)0),        _if_conditional136) {
            # 303 "./comelang2.h"
            # 304 "./comelang2.h"
            memset(&result_53,0,sizeof(struct tuple2$2charphsTypeph*));
            # 305 "./comelang2.h"
            __result73__ = __result_obj__ = result_53;
            return __result73__;
        }
        # 308 "./comelang2.h"
        self->it=self->it->next;
        # 314 "./comelang2.h"
        # 310 "./comelang2.h"
        if(self->it) {
            # 311 "./comelang2.h"
            __result74__ = __result_obj__ = self->it->item;
            return __result74__;
        }
        # 314 "./comelang2.h"
        # 315 "./comelang2.h"
        memset(&result_54,0,sizeof(struct tuple2$2charphsTypeph*));
        # 316 "./comelang2.h"
        __result75__ = __result_obj__ = result_54;
        return __result75__;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional139;
unsigned int hash_74;
unsigned int it_75;
_Bool _while_condtional11;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool same_key_exist_92;
char* it2_95;
_Bool _if_conditional182;
_Bool _if_conditional183;
struct map$2charphsClassph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_74, 0, sizeof(unsigned int));
memset(&it_75, 0, sizeof(unsigned int));
memset(&same_key_exist_92, 0, sizeof(_Bool));
memset(&it2_95, 0, sizeof(char*));
            # 1393 "./comelang2.h"
            # 1390 "./comelang2.h"
            if(_if_conditional139=self->len*10>=self->size,            _if_conditional139) {
                # 1391 "./comelang2.h"
                map$2charphsClassph_rehash(self);
            }
            # 1393 "./comelang2.h"
            hash_74=string_get_hash_key(key)%self->size;
            # 1394 "./comelang2.h"
            it_75=hash_74;
            # 1452 "./comelang2.h"
            while(_while_condtional11=(_Bool)1,            _while_condtional11) {
                # 1450 "./comelang2.h"
                # 1397 "./comelang2.h"
                if(_if_conditional151=self->item_existance[it_75],                _if_conditional151) {
                    # 1420 "./comelang2.h"
                    # 1399 "./comelang2.h"
                    if(_if_conditional152=string_equals(self->keys[it_75],key),                    _if_conditional152) {
                        # 1410 "./comelang2.h"
                        # 1401 "./comelang2.h"
                        if(_if_conditional153=1,                        _if_conditional153) {
                            # 1402 "./comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_75]);
                            # 1403 "./comelang2.h"
                            self->keys[it_75] = come_decrement_ref_count2(self->keys[it_75], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./comelang2.h"
                            self->keys[it_75]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_75]);
                            # 1408 "./comelang2.h"
                            self->keys[it_75]=key;
                        }
                        # 1417 "./comelang2.h"
                        # 1410 "./comelang2.h"
                        if(_if_conditional173=1,                        _if_conditional173) {
                            # 1411 "./comelang2.h"
                            come_call_finalizer2(sClass_finalize,self->items[it_75], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./comelang2.h"
                            self->items[it_75]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./comelang2.h"
                            self->items[it_75]=item;
                        }
                        # 1417 "./comelang2.h"
                        break;
                    }
                    # 1420 "./comelang2.h"
                    it_75++;
                    # 1430 "./comelang2.h"
                    # 1422 "./comelang2.h"
                    if(_if_conditional174=it_75>=self->size,                    _if_conditional174) {
                        # 1423 "./comelang2.h"
                        it_75=0;
                    }
                    else {
                        # 1430 "./comelang2.h"
                        # 1425 "./comelang2.h"
                        if(_if_conditional175=it_75==hash_74,                        _if_conditional175) {
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
                    self->item_existance[it_75]=(_Bool)1;
                    # 1439 "./comelang2.h"
                    # 1433 "./comelang2.h"
                    if(_if_conditional176=1,                    _if_conditional176) {
                        # 1434 "./comelang2.h"
                        self->keys[it_75]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./comelang2.h"
                        self->keys[it_75]=key;
                    }
                    # 1446 "./comelang2.h"
                    # 1439 "./comelang2.h"
                    if(_if_conditional177=1,                    _if_conditional177) {
                        # 1440 "./comelang2.h"
                        self->items[it_75]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./comelang2.h"
                        self->items[it_75]=item;
                    }
                    # 1446 "./comelang2.h"
                    self->len++;
                    # 1448 "./comelang2.h"
                    break;
                }
            }
            # 1452 "./comelang2.h"
            same_key_exist_92=(_Bool)0;
            # 1461 "./comelang2.h"
            for(            it2_95=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_95=list$1charp_next(self->key_list)            ){
                # 1459 "./comelang2.h"
                # 1455 "./comelang2.h"
                if(_if_conditional182=string_equals(it2_95,key),                _if_conditional182) {
                    # 1456 "./comelang2.h"
                    puts("SAME KEY");
                    # 1457 "./comelang2.h"
                    same_key_exist_92=(_Bool)1;
                }
            }
            # 1465 "./comelang2.h"
            # 1461 "./comelang2.h"
            if(_if_conditional183=!same_key_exist_92,            _if_conditional183) {
                # 1462 "./comelang2.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1465 "./comelang2.h"
            __result99__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result99__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_57;
void* right_value112;
char** keys_58;
void* right_value113;
struct sClass** items_59;
void* right_value114;
_Bool* item_existance_60;
int len_61;
char* it_64;
struct sClass* default_value_67;
struct sClass* it2_70;
unsigned int hash_71;
int n_72;
_Bool _while_condtional10;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
struct sClass* default_value_73;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_57, 0, sizeof(int));
right_value112 = (void*)0;
memset(&keys_58, 0, sizeof(char**));
right_value113 = (void*)0;
memset(&items_59, 0, sizeof(struct sClass**));
right_value114 = (void*)0;
memset(&item_existance_60, 0, sizeof(_Bool*));
memset(&len_61, 0, sizeof(int));
memset(&it_64, 0, sizeof(char*));
memset(&default_value_67, 0, sizeof(struct sClass*));
memset(&it2_70, 0, sizeof(struct sClass*));
memset(&hash_71, 0, sizeof(unsigned int));
memset(&n_72, 0, sizeof(int));
memset(&default_value_73, 0, sizeof(struct sClass*));
                    # 1337 "./comelang2.h"
                    size_57=self->size*10;
                    # 1338 "./comelang2.h"
                    keys_58=(char**)come_increment_ref_count(((char**)(right_value112=(char**)come_calloc(1, sizeof(char*)*(1*(size_57)), "./comelang2.h", 1338, "char*%"))));
                    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./comelang2.h"
                    items_59=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value113=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_57)), "./comelang2.h", 1339, "sClass*%"))));
                    come_call_finalizer2(sClass_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./comelang2.h"
                    item_existance_60=(_Bool*)come_increment_ref_count(((_Bool*)(right_value114=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_57)), "./comelang2.h", 1340, "bool"))));
                    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./comelang2.h"
                    len_61=0;
                    # 1377 "./comelang2.h"
                    for(                    it_64=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_64=map$2charphsClassph_next(self)                    ){
                        # 1345 "./comelang2.h"
                        # 1346 "./comelang2.h"
                        memset(&default_value_67,0,sizeof(struct sClass*));
                        # 1347 "./comelang2.h"
                        it2_70=map$2charphsClassph_at(self,it_64,default_value_67);
                        # 1348 "./comelang2.h"
                        hash_71=string_get_hash_key(it_64)%size_57;
                        # 1349 "./comelang2.h"
                        n_72=hash_71;
                        # 1375 "./comelang2.h"
                        while(_while_condtional10=(_Bool)1,                        _while_condtional10) {
                            # 1374 "./comelang2.h"
                            # 1352 "./comelang2.h"
                            if(_if_conditional148=item_existance_60[n_72],                            _if_conditional148) {
                                # 1354 "./comelang2.h"
                                n_72++;
                                # 1364 "./comelang2.h"
                                # 1356 "./comelang2.h"
                                if(_if_conditional149=n_72>=size_57,                                _if_conditional149) {
                                    # 1357 "./comelang2.h"
                                    n_72=0;
                                }
                                else {
                                    # 1364 "./comelang2.h"
                                    # 1359 "./comelang2.h"
                                    if(_if_conditional150=n_72==hash_71,                                    _if_conditional150) {
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
                                item_existance_60[n_72]=(_Bool)1;
                                # 1367 "./comelang2.h"
                                keys_58[n_72]=it_64;
                                # 1368 "./comelang2.h"
                                # 1369 "./comelang2.h"
                                items_59[n_72]=map$2charphsClassph_at(self,it_64,default_value_73);
                                # 1371 "./comelang2.h"
                                len_61++;
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
                    self->keys=keys_58;
                    # 1382 "./comelang2.h"
                    self->items=items_59;
                    # 1383 "./comelang2.h"
                    self->item_existance=item_existance_60;
                    # 1385 "./comelang2.h"
                    self->size=size_57;
                    # 1386 "./comelang2.h"
                    self->len=len_61;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional140;
char* result_62;
char* __result76__;
_Bool _if_conditional141;
char* __result77__;
char* result_63;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(char*));
memset(&result_63, 0, sizeof(char*));
                        # 1304 "./comelang2.h"
                        # 1299 "./comelang2.h"
                        if(_if_conditional140=self==((void*)0),                        _if_conditional140) {
                            # 1300 "./comelang2.h"
                            # 1301 "./comelang2.h"
                            memset(&result_62,0,sizeof(char*));
                            # 1302 "./comelang2.h"
                            __result76__ = __result_obj__ = result_62;
                            return __result76__;
                        }
                        # 1304 "./comelang2.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "./comelang2.h"
                        # 1306 "./comelang2.h"
                        if(self->key_list->it) {
                            # 1307 "./comelang2.h"
                            __result77__ = __result_obj__ = self->key_list->it->item;
                            return __result77__;
                        }
                        # 1310 "./comelang2.h"
                        # 1311 "./comelang2.h"
                        memset(&result_63,0,sizeof(char*));
                        # 1312 "./comelang2.h"
                        __result78__ = __result_obj__ = result_63;
                        return __result78__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "./comelang2.h"
                        __result79__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result79__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional142;
char* result_65;
char* __result80__;
_Bool _if_conditional143;
char* __result81__;
char* result_66;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(char*));
memset(&result_66, 0, sizeof(char*));
                        # 1321 "./comelang2.h"
                        # 1316 "./comelang2.h"
                        if(_if_conditional142=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional142) {
                            # 1317 "./comelang2.h"
                            # 1318 "./comelang2.h"
                            memset(&result_65,0,sizeof(char*));
                            # 1319 "./comelang2.h"
                            __result80__ = __result_obj__ = result_65;
                            return __result80__;
                        }
                        # 1321 "./comelang2.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "./comelang2.h"
                        # 1323 "./comelang2.h"
                        if(self->key_list->it) {
                            # 1324 "./comelang2.h"
                            __result81__ = __result_obj__ = self->key_list->it->item;
                            return __result81__;
                        }
                        # 1327 "./comelang2.h"
                        # 1328 "./comelang2.h"
                        memset(&result_66,0,sizeof(char*));
                        # 1329 "./comelang2.h"
                        __result82__ = __result_obj__ = result_66;
                        return __result82__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_68;
unsigned int it_69;
_Bool _while_condtional9;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct sClass* __result83__;
_Bool _if_conditional146;
_Bool _if_conditional147;
struct sClass* __result84__;
struct sClass* __result85__;
struct sClass* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_68, 0, sizeof(unsigned int));
memset(&it_69, 0, sizeof(unsigned int));
                            # 1226 "./comelang2.h"
                            hash_68=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "./comelang2.h"
                            it_69=hash_68;
                            # 1251 "./comelang2.h"
                            while(_while_condtional9=(_Bool)1,                            _while_condtional9) {
                                # 1249 "./comelang2.h"
                                # 1230 "./comelang2.h"
                                if(_if_conditional144=self->item_existance[it_69],                                _if_conditional144) {
                                    # 1237 "./comelang2.h"
                                    # 1232 "./comelang2.h"
                                    if(_if_conditional145=string_equals(self->keys[it_69],key),                                    _if_conditional145) {
                                        # 1234 "./comelang2.h"
                                        __result83__ = __result_obj__ = self->items[it_69];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result83__;
                                    }
                                    # 1237 "./comelang2.h"
                                    it_69++;
                                    # 1245 "./comelang2.h"
                                    # 1239 "./comelang2.h"
                                    if(_if_conditional146=it_69>=self->size,                                    _if_conditional146) {
                                        # 1240 "./comelang2.h"
                                        it_69=0;
                                    }
                                    else {
                                        # 1245 "./comelang2.h"
                                        # 1242 "./comelang2.h"
                                        if(_if_conditional147=it_69==hash_68,                                        _if_conditional147) {
                                            # 1243 "./comelang2.h"
                                            __result84__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result84__;
                                        }
                                    }
                                }
                                else {
                                    # 1247 "./comelang2.h"
                                    __result85__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result85__;
                                }
                            }
                            # 1251 "./comelang2.h"
                            __result86__ = __result_obj__ = default_value;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result86__;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_76;
struct list_item$1charp* it_77;
_Bool _while_condtional12;
_Bool _if_conditional154;
struct list$1charp* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_76, 0, sizeof(int));
memset(&it_77, 0, sizeof(struct list_item$1charp*));
                                # 448 "./comelang2.h"
                                it2_76=0;
                                # 449 "./comelang2.h"
                                it_77=self->head;
                                # 460 "./comelang2.h"
                                while(_while_condtional12=it_77!=((void*)0),                                _while_condtional12) {
                                    # 455 "./comelang2.h"
                                    # 451 "./comelang2.h"
                                    if(_if_conditional154=string_equals(it_77->item,item),                                    _if_conditional154) {
                                        # 452 "./comelang2.h"
                                        list$1charp_delete(self,it2_76,it2_76+1);
                                        # 453 "./comelang2.h"
                                        break;
                                    }
                                    # 455 "./comelang2.h"
                                    it2_76++;
                                    # 457 "./comelang2.h"
                                    it_77=it_77->next;
                                }
                                # 460 "./comelang2.h"
                                __result90__ = __result_obj__ = self;
                                return __result90__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
int tmp_78;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct list$1charp* __result87__;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct list_item$1charp* it_81;
int i_82;
_Bool _while_condtional14;
_Bool _if_conditional163;
struct list_item$1charp* prev_it_83;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct list_item$1charp* it_84;
int i_85;
_Bool _while_condtional15;
_Bool _if_conditional166;
_Bool _if_conditional167;
struct list_item$1charp* prev_it_86;
struct list_item$1charp* it_87;
struct list_item$1charp* head_prev_it_88;
struct list_item$1charp* tail_it_89;
int i_90;
_Bool _while_condtional16;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
struct list_item$1charp* prev_it_91;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct list$1charp* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_78, 0, sizeof(int));
memset(&it_81, 0, sizeof(struct list_item$1charp*));
memset(&i_82, 0, sizeof(int));
memset(&prev_it_83, 0, sizeof(struct list_item$1charp*));
memset(&it_84, 0, sizeof(struct list_item$1charp*));
memset(&i_85, 0, sizeof(int));
memset(&prev_it_86, 0, sizeof(struct list_item$1charp*));
memset(&it_87, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_88, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_89, 0, sizeof(struct list_item$1charp*));
memset(&i_90, 0, sizeof(int));
memset(&prev_it_91, 0, sizeof(struct list_item$1charp*));
                                            # 467 "./comelang2.h"
                                            # 464 "./comelang2.h"
                                            if(_if_conditional155=head<0,                                            _if_conditional155) {
                                                # 465 "./comelang2.h"
                                                head+=self->len;
                                            }
                                            # 471 "./comelang2.h"
                                            # 467 "./comelang2.h"
                                            if(_if_conditional156=tail<0,                                            _if_conditional156) {
                                                # 468 "./comelang2.h"
                                                tail+=self->len+1;
                                            }
                                            # 477 "./comelang2.h"
                                            # 471 "./comelang2.h"
                                            if(_if_conditional157=head>tail,                                            _if_conditional157) {
                                                # 472 "./comelang2.h"
                                                tmp_78=tail;
                                                # 473 "./comelang2.h"
                                                tail=head;
                                                # 474 "./comelang2.h"
                                                head=tmp_78;
                                            }
                                            # 481 "./comelang2.h"
                                            # 477 "./comelang2.h"
                                            if(_if_conditional158=head<0,                                            _if_conditional158) {
                                                # 478 "./comelang2.h"
                                                head=0;
                                            }
                                            # 485 "./comelang2.h"
                                            # 481 "./comelang2.h"
                                            if(_if_conditional159=tail>self->len,                                            _if_conditional159) {
                                                # 482 "./comelang2.h"
                                                tail=self->len;
                                            }
                                            # 489 "./comelang2.h"
                                            # 485 "./comelang2.h"
                                            if(_if_conditional160=head==tail,                                            _if_conditional160) {
                                                # 486 "./comelang2.h"
                                                __result87__ = __result_obj__ = self;
                                                return __result87__;
                                            }
                                            # 584 "./comelang2.h"
                                            # 489 "./comelang2.h"
                                            if(_if_conditional161=head==0&&tail==self->len,                                            _if_conditional161) {
                                                # 491 "./comelang2.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 584 "./comelang2.h"
                                                # 493 "./comelang2.h"
                                                if(_if_conditional162=head==0,                                                _if_conditional162) {
                                                    # 494 "./comelang2.h"
                                                    it_81=self->head;
                                                    # 495 "./comelang2.h"
                                                    i_82=0;
                                                    # 517 "./comelang2.h"
                                                    while(_while_condtional14=it_81!=((void*)0),                                                    _while_condtional14) {
                                                        # 516 "./comelang2.h"
                                                        # 497 "./comelang2.h"
                                                        if(_if_conditional163=i_82<tail,                                                        _if_conditional163) {
                                                            # 498 "./comelang2.h"
                                                            prev_it_83=it_81;
                                                            # 500 "./comelang2.h"
                                                            it_81=it_81->next;
                                                            # 501 "./comelang2.h"
                                                            i_82++;
                                                            # 503 "./comelang2.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 505 "./comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 516 "./comelang2.h"
                                                            # 507 "./comelang2.h"
                                                            if(_if_conditional164=i_82==tail,                                                            _if_conditional164) {
                                                                # 508 "./comelang2.h"
                                                                self->head=it_81;
                                                                # 509 "./comelang2.h"
                                                                self->head->prev=((void*)0);
                                                                # 510 "./comelang2.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 513 "./comelang2.h"
                                                                it_81=it_81->next;
                                                                # 514 "./comelang2.h"
                                                                i_82++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 584 "./comelang2.h"
                                                    # 518 "./comelang2.h"
                                                    if(_if_conditional165=tail==self->len,                                                    _if_conditional165) {
                                                        # 519 "./comelang2.h"
                                                        it_84=self->head;
                                                        # 520 "./comelang2.h"
                                                        i_85=0;
                                                        # 542 "./comelang2.h"
                                                        while(_while_condtional15=it_84!=((void*)0),                                                        _while_condtional15) {
                                                            # 527 "./comelang2.h"
                                                            # 522 "./comelang2.h"
                                                            if(_if_conditional166=i_85==head,                                                            _if_conditional166) {
                                                                # 523 "./comelang2.h"
                                                                self->tail=it_84->prev;
                                                                # 524 "./comelang2.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 541 "./comelang2.h"
                                                            # 527 "./comelang2.h"
                                                            if(_if_conditional167=i_85>=head,                                                            _if_conditional167) {
                                                                # 528 "./comelang2.h"
                                                                prev_it_86=it_84;
                                                                # 530 "./comelang2.h"
                                                                it_84=it_84->next;
                                                                # 531 "./comelang2.h"
                                                                i_85++;
                                                                # 533 "./comelang2.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 535 "./comelang2.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 538 "./comelang2.h"
                                                                it_84=it_84->next;
                                                                # 539 "./comelang2.h"
                                                                i_85++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 544 "./comelang2.h"
                                                        it_87=self->head;
                                                        # 546 "./comelang2.h"
                                                        head_prev_it_88=((void*)0);
                                                        # 547 "./comelang2.h"
                                                        tail_it_89=((void*)0);
                                                        # 550 "./comelang2.h"
                                                        i_90=0;
                                                        # 576 "./comelang2.h"
                                                        while(_while_condtional16=it_87!=((void*)0),                                                        _while_condtional16) {
                                                            # 555 "./comelang2.h"
                                                            # 552 "./comelang2.h"
                                                            if(_if_conditional168=i_90==head,                                                            _if_conditional168) {
                                                                # 553 "./comelang2.h"
                                                                head_prev_it_88=it_87->prev;
                                                            }
                                                            # 559 "./comelang2.h"
                                                            # 555 "./comelang2.h"
                                                            if(_if_conditional169=i_90==tail,                                                            _if_conditional169) {
                                                                # 556 "./comelang2.h"
                                                                tail_it_89=it_87;
                                                            }
                                                            # 574 "./comelang2.h"
                                                            # 559 "./comelang2.h"
                                                            if(_if_conditional170=i_90>=head&&i_90<tail,                                                            _if_conditional170) {
                                                                # 561 "./comelang2.h"
                                                                prev_it_91=it_87;
                                                                # 563 "./comelang2.h"
                                                                it_87=it_87->next;
                                                                # 564 "./comelang2.h"
                                                                i_90++;
                                                                # 566 "./comelang2.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 568 "./comelang2.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 571 "./comelang2.h"
                                                                it_87=it_87->next;
                                                                # 572 "./comelang2.h"
                                                                i_90++;
                                                            }
                                                        }
                                                        # 579 "./comelang2.h"
                                                        # 576 "./comelang2.h"
                                                        if(_if_conditional171=head_prev_it_88!=((void*)0),                                                        _if_conditional171) {
                                                            # 577 "./comelang2.h"
                                                            head_prev_it_88->next=tail_it_89;
                                                        }
                                                        # 582 "./comelang2.h"
                                                        # 579 "./comelang2.h"
                                                        if(_if_conditional172=tail_it_89!=((void*)0),                                                        _if_conditional172) {
                                                            # 580 "./comelang2.h"
                                                            tail_it_89->prev=head_prev_it_88;
                                                        }
                                                    }
                                                }
                                            }
                                            # 584 "./comelang2.h"
                                            __result89__ = __result_obj__ = self;
                                            return __result89__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_79;
_Bool _while_condtional13;
struct list_item$1charp* prev_it_80;
struct list$1charp* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_79, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_80, 0, sizeof(struct list_item$1charp*));
                                                    # 433 "./comelang2.h"
                                                    it_79=self->head;
                                                    # 440 "./comelang2.h"
                                                    while(_while_condtional13=it_79!=((void*)0),                                                    _while_condtional13) {
                                                        # 435 "./comelang2.h"
                                                        prev_it_80=it_79;
                                                        # 436 "./comelang2.h"
                                                        it_79=it_79->next;
                                                        # 437 "./comelang2.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 440 "./comelang2.h"
                                                    self->head=((void*)0);
                                                    # 441 "./comelang2.h"
                                                    self->tail=((void*)0);
                                                    # 443 "./comelang2.h"
                                                    self->len=0;
                                                    # 445 "./comelang2.h"
                                                    __result88__ = __result_obj__ = self;
                                                    return __result88__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional178;
char* result_93;
char* __result91__;
_Bool _if_conditional179;
char* __result92__;
char* result_94;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(char*));
memset(&result_94, 0, sizeof(char*));
                # 290 "./comelang2.h"
                # 285 "./comelang2.h"
                if(_if_conditional178=self==((void*)0),                _if_conditional178) {
                    # 286 "./comelang2.h"
                    # 287 "./comelang2.h"
                    memset(&result_93,0,sizeof(char*));
                    # 288 "./comelang2.h"
                    __result91__ = __result_obj__ = result_93;
                    return __result91__;
                }
                # 290 "./comelang2.h"
                self->it=self->head;
                # 296 "./comelang2.h"
                # 292 "./comelang2.h"
                if(self->it) {
                    # 293 "./comelang2.h"
                    __result92__ = __result_obj__ = self->it->item;
                    return __result92__;
                }
                # 296 "./comelang2.h"
                # 297 "./comelang2.h"
                memset(&result_94,0,sizeof(char*));
                # 298 "./comelang2.h"
                __result93__ = __result_obj__ = result_94;
                return __result93__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./comelang2.h"
                __result94__ = self==((void*)0)||self->it==((void*)0);
                return __result94__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional180;
char* result_96;
char* __result95__;
_Bool _if_conditional181;
char* __result96__;
char* result_97;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_96, 0, sizeof(char*));
memset(&result_97, 0, sizeof(char*));
                # 308 "./comelang2.h"
                # 302 "./comelang2.h"
                if(_if_conditional180=self==((void*)0)||self->it==((void*)0),                _if_conditional180) {
                    # 303 "./comelang2.h"
                    # 304 "./comelang2.h"
                    memset(&result_96,0,sizeof(char*));
                    # 305 "./comelang2.h"
                    __result95__ = __result_obj__ = result_96;
                    return __result95__;
                }
                # 308 "./comelang2.h"
                self->it=self->it->next;
                # 314 "./comelang2.h"
                # 310 "./comelang2.h"
                if(self->it) {
                    # 311 "./comelang2.h"
                    __result96__ = __result_obj__ = self->it->item;
                    return __result96__;
                }
                # 314 "./comelang2.h"
                # 315 "./comelang2.h"
                memset(&result_97,0,sizeof(char*));
                # 316 "./comelang2.h"
                __result97__ = __result_obj__ = result_97;
                return __result97__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional184;
void* right_value115;
struct list_item$1charp* litem_98;
_Bool _if_conditional185;
void* right_value116;
struct list_item$1charp* litem_99;
void* right_value117;
struct list_item$1charp* litem_100;
struct list$1charp* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
memset(&litem_98, 0, sizeof(struct list_item$1charp*));
right_value116 = (void*)0;
memset(&litem_99, 0, sizeof(struct list_item$1charp*));
right_value117 = (void*)0;
memset(&litem_100, 0, sizeof(struct list_item$1charp*));
                    # 256 "./comelang2.h"
                    # 225 "./comelang2.h"
                    if(_if_conditional184=self->len==0,                    _if_conditional184) {
                        # 226 "./comelang2.h"
                        litem_98=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value115=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./comelang2.h"
                        litem_98->prev=((void*)0);
                        # 229 "./comelang2.h"
                        litem_98->next=((void*)0);
                        # 230 "./comelang2.h"
                        litem_98->item=item;
                        # 232 "./comelang2.h"
                        self->tail=litem_98;
                        # 233 "./comelang2.h"
                        self->head=litem_98;
                    }
                    else {
                        # 256 "./comelang2.h"
                        # 235 "./comelang2.h"
                        if(_if_conditional185=self->len==1,                        _if_conditional185) {
                            # 236 "./comelang2.h"
                            litem_99=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value116=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./comelang2.h"
                            litem_99->prev=self->head;
                            # 239 "./comelang2.h"
                            litem_99->next=((void*)0);
                            # 240 "./comelang2.h"
                            litem_99->item=item;
                            # 242 "./comelang2.h"
                            self->tail=litem_99;
                            # 243 "./comelang2.h"
                            self->head->next=litem_99;
                        }
                        else {
                            # 246 "./comelang2.h"
                            litem_100=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value117=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./comelang2.h"
                            litem_100->prev=self->tail;
                            # 249 "./comelang2.h"
                            litem_100->next=((void*)0);
                            # 250 "./comelang2.h"
                            litem_100->item=item;
                            # 252 "./comelang2.h"
                            self->tail->next=litem_100;
                            # 253 "./comelang2.h"
                            self->tail=litem_100;
                        }
                    }
                    # 256 "./comelang2.h"
                    self->len++;
                    # 258 "./comelang2.h"
                    __result98__ = __result_obj__ = self;
                    return __result98__;
}

struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info){
void* __result_obj__;
void* right_value120;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_101;
char* var_name_102;
_Bool err_103;
_Bool _if_conditional188;
void* right_value121;
char* fun_name_104;
void* right_value122;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_105;
struct list$1charph* param_names_106;
struct list$1charph* param_default_parametors_107;
_Bool var_args_108;
void* right_value129;
void* right_value130;
void* right_value137;
void* right_value138;
void* right_value139;
struct sType* type_125;
void* right_value143;
struct list$1sTypeph* __dec_obj60;
void* right_value147;
struct list$1charph* __dec_obj61;
void* right_value148;
void* right_value149;
void* right_value150;
struct tuple1$1sTypeph* __dec_obj63;
void* right_value151;
void* right_value152;
struct tuple2$2sTypephcharph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&result_type_101, 0, sizeof(struct sType*));
memset(&var_name_102, 0, sizeof(char*));
memset(&err_103, 0, sizeof(_Bool));
memset(&result_type_101, 0, sizeof(struct sType*));
memset(&var_name_102, 0, sizeof(char*));
memset(&err_103, 0, sizeof(_Bool));
right_value121 = (void*)0;
memset(&fun_name_104, 0, sizeof(char*));
right_value122 = (void*)0;
memset(&param_types_105, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_106, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_107, 0, sizeof(struct list$1charph*));
memset(&var_args_108, 0, sizeof(_Bool));
memset(&param_types_105, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_106, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_107, 0, sizeof(struct list$1charph*));
memset(&var_args_108, 0, sizeof(_Bool));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&type_125, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
    # 76 "23interface.c"
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value120=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    result_type_101=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    var_name_102=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_103=multiple_assign_var2->v3;
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 82 "23interface.c"
    # 77 "23interface.c"
    if(_if_conditional188=!err_103,    _if_conditional188) {
        # 78 "23interface.c"
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        # 79 "23interface.c"
        exit(2);
    }
    # 82 "23interface.c"
    fun_name_104=(char*)come_increment_ref_count(((char*)(right_value121=parse_word(info))));
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 84 "23interface.c"
    multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value122=parse_params(info)));
    param_types_105=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
    param_names_106=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
    param_default_parametors_107=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
    var_args_108=multiple_assign_var3->v4;
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 86 "23interface.c"
    list$1sTypeph_insert(param_types_105,0,(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 86, "sType")))),"void*",(_Bool)0,info)))));
    come_call_finalizer2(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 87 "23interface.c"
    list$1charph_insert(param_names_106,0,(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string("self")))));
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 89 "23interface.c"
    type_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value138=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 89, "sType")))),"lambda",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 91 "23interface.c"
    __dec_obj60=type_125->mParamTypes;
    type_125->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value143=list$1sTypephp_clone(param_types_105))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 92 "23interface.c"
    __dec_obj61=type_125->mParamNames;
    type_125->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value147=list$1charphp_clone(param_names_106))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 93 "23interface.c"
    type_125->mVarArgs=var_args_108;
    # 94 "23interface.c"
    __dec_obj63=type_125->mResultType;
    type_125->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value150=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value148=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 94, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(result_type_101))))))));
    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 96 "23interface.c"
    __result113__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value152=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value151=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "23interface.c", 96, "tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type_125),(char*)come_increment_ref_count(fun_name_104))));
    come_call_finalizer2(sType_finalize,result_type_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_102 = come_decrement_ref_count2(var_name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_104 = come_decrement_ref_count2(fun_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result113__;
    come_call_finalizer2(sType_finalize,result_type_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_102 = come_decrement_ref_count2(var_name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_104 = come_decrement_ref_count2(fun_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional186;
_Bool _if_conditional187;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "tuple3$3sTypephcharphboolp_finalize"
        # 0 "tuple3$3sTypephcharphboolp_finalize"
        if(_if_conditional186=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional186) {
            # 0 "tuple3$3sTypephcharphboolp_finalize"
            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2 "tuple3$3sTypephcharphboolp_finalize"
        # 1 "tuple3$3sTypephcharphboolp_finalize"
        if(_if_conditional187=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional187) {
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional189=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional189) {
            # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional190=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional190) {
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
        if(_if_conditional191=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional191) {
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sTypeph* list$1sTypeph_insert(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
struct list$1sTypeph* __result102__;
_Bool _if_conditional197;
void* right_value126;
struct list_item$1sTypeph* litem_112;
struct sType* __dec_obj51;
_Bool _if_conditional198;
void* right_value127;
struct list_item$1sTypeph* litem_113;
struct sType* __dec_obj52;
struct list_item$1sTypeph* it_114;
int i_115;
_Bool _while_condtional17;
_Bool _if_conditional199;
void* right_value128;
struct list_item$1sTypeph* litem_116;
struct sType* __dec_obj53;
struct list$1sTypeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1sTypeph*));
right_value127 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1sTypeph*));
memset(&it_114, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_115, 0, sizeof(int));
right_value128 = (void*)0;
memset(&litem_116, 0, sizeof(struct list_item$1sTypeph*));
        # 375 "./comelang2.h"
        # 372 "./comelang2.h"
        if(_if_conditional192=position<0,        _if_conditional192) {
            # 373 "./comelang2.h"
            position+=self->len+1;
        }
        # 378 "./comelang2.h"
        # 375 "./comelang2.h"
        if(_if_conditional193=position<0,        _if_conditional193) {
            # 376 "./comelang2.h"
            position=0;
        }
        # 384 "./comelang2.h"
        # 378 "./comelang2.h"
        if(_if_conditional194=self->len==0||position>=self->len,        _if_conditional194) {
            # 380 "./comelang2.h"
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
            # 381 "./comelang2.h"
            __result102__ = __result_obj__ = self;
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result102__;
        }
        # 430 "./comelang2.h"
        # 384 "./comelang2.h"
        if(_if_conditional197=position==0,        _if_conditional197) {
            # 385 "./comelang2.h"
            litem_112=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value126=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 385, "list_item$1sTypeph"))));
            come_call_finalizer2(list_item$1sTypephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 387 "./comelang2.h"
            litem_112->prev=((void*)0);
            # 388 "./comelang2.h"
            litem_112->next=self->head;
            # 389 "./comelang2.h"
            __dec_obj51=litem_112->item;
            litem_112->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 391 "./comelang2.h"
            self->head->prev=litem_112;
            # 392 "./comelang2.h"
            self->head=litem_112;
            # 394 "./comelang2.h"
            self->len++;
        }
        else {
            # 430 "./comelang2.h"
            # 396 "./comelang2.h"
            if(_if_conditional198=self->len==1,            _if_conditional198) {
                # 397 "./comelang2.h"
                litem_113=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value127=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 397, "list_item$1sTypeph"))));
                come_call_finalizer2(list_item$1sTypephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 399 "./comelang2.h"
                litem_113->prev=self->head;
                # 400 "./comelang2.h"
                litem_113->next=self->tail;
                # 401 "./comelang2.h"
                __dec_obj52=litem_113->item;
                litem_113->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 403 "./comelang2.h"
                self->tail->prev=litem_113;
                # 404 "./comelang2.h"
                self->head->next=litem_113;
                # 406 "./comelang2.h"
                self->len++;
            }
            else {
                # 409 "./comelang2.h"
                it_114=self->head;
                # 410 "./comelang2.h"
                i_115=0;
                # 428 "./comelang2.h"
                while(_while_condtional17=it_114!=((void*)0),                _while_condtional17) {
                    # 425 "./comelang2.h"
                    # 412 "./comelang2.h"
                    if(_if_conditional199=position==i_115,                    _if_conditional199) {
                        # 413 "./comelang2.h"
                        litem_116=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value128=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 413, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 415 "./comelang2.h"
                        litem_116->prev=it_114->prev;
                        # 416 "./comelang2.h"
                        litem_116->next=it_114;
                        # 417 "./comelang2.h"
                        __dec_obj53=litem_116->item;
                        litem_116->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 419 "./comelang2.h"
                        it_114->prev->next=litem_116;
                        # 420 "./comelang2.h"
                        it_114->prev=litem_116;
                        # 422 "./comelang2.h"
                        self->len++;
                    }
                    # 425 "./comelang2.h"
                    it_114=it_114->next;
                    # 426 "./comelang2.h"
                    i_115++;
                }
            }
        }
        # 430 "./comelang2.h"
        __result103__ = __result_obj__ = self;
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result103__;
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional195;
void* right_value123;
struct list_item$1sTypeph* litem_109;
struct sType* __dec_obj48;
_Bool _if_conditional196;
void* right_value124;
struct list_item$1sTypeph* litem_110;
struct sType* __dec_obj49;
void* right_value125;
struct list_item$1sTypeph* litem_111;
struct sType* __dec_obj50;
struct list$1sTypeph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1sTypeph*));
right_value124 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1sTypeph*));
right_value125 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1sTypeph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional195=self->len==0,                _if_conditional195) {
                    # 226 "./comelang2.h"
                    litem_109=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value123=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_109->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_109->next=((void*)0);
                    # 230 "./comelang2.h"
                    __dec_obj48=litem_109->item;
                    litem_109->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./comelang2.h"
                    self->tail=litem_109;
                    # 233 "./comelang2.h"
                    self->head=litem_109;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional196=self->len==1,                    _if_conditional196) {
                        # 236 "./comelang2.h"
                        litem_110=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value124=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_110->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_110->next=((void*)0);
                        # 240 "./comelang2.h"
                        __dec_obj49=litem_110->item;
                        litem_110->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./comelang2.h"
                        self->tail=litem_110;
                        # 243 "./comelang2.h"
                        self->head->next=litem_110;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_111=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_111->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_111->next=((void*)0);
                        # 250 "./comelang2.h"
                        __dec_obj50=litem_111->item;
                        litem_111->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./comelang2.h"
                        self->tail->next=litem_111;
                        # 253 "./comelang2.h"
                        self->tail=litem_111;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result101__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result101__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
struct list$1charph* __result105__;
_Bool _if_conditional205;
void* right_value134;
struct list_item$1charph* litem_120;
char* __dec_obj57;
_Bool _if_conditional206;
void* right_value135;
struct list_item$1charph* litem_121;
char* __dec_obj58;
struct list_item$1charph* it_122;
int i_123;
_Bool _while_condtional18;
_Bool _if_conditional207;
void* right_value136;
struct list_item$1charph* litem_124;
char* __dec_obj59;
struct list$1charph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
memset(&litem_120, 0, sizeof(struct list_item$1charph*));
right_value135 = (void*)0;
memset(&litem_121, 0, sizeof(struct list_item$1charph*));
memset(&it_122, 0, sizeof(struct list_item$1charph*));
memset(&i_123, 0, sizeof(int));
right_value136 = (void*)0;
memset(&litem_124, 0, sizeof(struct list_item$1charph*));
        # 375 "./comelang2.h"
        # 372 "./comelang2.h"
        if(_if_conditional200=position<0,        _if_conditional200) {
            # 373 "./comelang2.h"
            position+=self->len+1;
        }
        # 378 "./comelang2.h"
        # 375 "./comelang2.h"
        if(_if_conditional201=position<0,        _if_conditional201) {
            # 376 "./comelang2.h"
            position=0;
        }
        # 384 "./comelang2.h"
        # 378 "./comelang2.h"
        if(_if_conditional202=self->len==0||position>=self->len,        _if_conditional202) {
            # 380 "./comelang2.h"
            list$1charph_push_back(self,(char*)come_increment_ref_count(item));
            # 381 "./comelang2.h"
            __result105__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result105__;
        }
        # 430 "./comelang2.h"
        # 384 "./comelang2.h"
        if(_if_conditional205=position==0,        _if_conditional205) {
            # 385 "./comelang2.h"
            litem_120=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value134=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 385, "list_item$1charph"))));
            come_call_finalizer2(list_item$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 387 "./comelang2.h"
            litem_120->prev=((void*)0);
            # 388 "./comelang2.h"
            litem_120->next=self->head;
            # 389 "./comelang2.h"
            __dec_obj57=litem_120->item;
            litem_120->item=(char*)come_increment_ref_count(item);
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 391 "./comelang2.h"
            self->head->prev=litem_120;
            # 392 "./comelang2.h"
            self->head=litem_120;
            # 394 "./comelang2.h"
            self->len++;
        }
        else {
            # 430 "./comelang2.h"
            # 396 "./comelang2.h"
            if(_if_conditional206=self->len==1,            _if_conditional206) {
                # 397 "./comelang2.h"
                litem_121=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value135=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 397, "list_item$1charph"))));
                come_call_finalizer2(list_item$1charphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 399 "./comelang2.h"
                litem_121->prev=self->head;
                # 400 "./comelang2.h"
                litem_121->next=self->tail;
                # 401 "./comelang2.h"
                __dec_obj58=litem_121->item;
                litem_121->item=(char*)come_increment_ref_count(item);
                __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 403 "./comelang2.h"
                self->tail->prev=litem_121;
                # 404 "./comelang2.h"
                self->head->next=litem_121;
                # 406 "./comelang2.h"
                self->len++;
            }
            else {
                # 409 "./comelang2.h"
                it_122=self->head;
                # 410 "./comelang2.h"
                i_123=0;
                # 428 "./comelang2.h"
                while(_while_condtional18=it_122!=((void*)0),                _while_condtional18) {
                    # 425 "./comelang2.h"
                    # 412 "./comelang2.h"
                    if(_if_conditional207=position==i_123,                    _if_conditional207) {
                        # 413 "./comelang2.h"
                        litem_124=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value136=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 413, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 415 "./comelang2.h"
                        litem_124->prev=it_122->prev;
                        # 416 "./comelang2.h"
                        litem_124->next=it_122;
                        # 417 "./comelang2.h"
                        __dec_obj59=litem_124->item;
                        litem_124->item=(char*)come_increment_ref_count(item);
                        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 419 "./comelang2.h"
                        it_122->prev->next=litem_124;
                        # 420 "./comelang2.h"
                        it_122->prev=litem_124;
                        # 422 "./comelang2.h"
                        self->len++;
                    }
                    # 425 "./comelang2.h"
                    it_122=it_122->next;
                    # 426 "./comelang2.h"
                    i_123++;
                }
            }
        }
        # 430 "./comelang2.h"
        __result106__ = __result_obj__ = self;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result106__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional203;
void* right_value131;
struct list_item$1charph* litem_117;
char* __dec_obj54;
_Bool _if_conditional204;
void* right_value132;
struct list_item$1charph* litem_118;
char* __dec_obj55;
void* right_value133;
struct list_item$1charph* litem_119;
char* __dec_obj56;
struct list$1charph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&litem_117, 0, sizeof(struct list_item$1charph*));
right_value132 = (void*)0;
memset(&litem_118, 0, sizeof(struct list_item$1charph*));
right_value133 = (void*)0;
memset(&litem_119, 0, sizeof(struct list_item$1charph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional203=self->len==0,                _if_conditional203) {
                    # 226 "./comelang2.h"
                    litem_117=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value131=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_117->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_117->next=((void*)0);
                    # 230 "./comelang2.h"
                    __dec_obj54=litem_117->item;
                    litem_117->item=(char*)come_increment_ref_count(item);
                    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 232 "./comelang2.h"
                    self->tail=litem_117;
                    # 233 "./comelang2.h"
                    self->head=litem_117;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional204=self->len==1,                    _if_conditional204) {
                        # 236 "./comelang2.h"
                        litem_118=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value132=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_118->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_118->next=((void*)0);
                        # 240 "./comelang2.h"
                        __dec_obj55=litem_118->item;
                        litem_118->item=(char*)come_increment_ref_count(item);
                        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 242 "./comelang2.h"
                        self->tail=litem_118;
                        # 243 "./comelang2.h"
                        self->head->next=litem_118;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_119=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value133=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_119->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_119->next=((void*)0);
                        # 250 "./comelang2.h"
                        __dec_obj56=litem_119->item;
                        litem_119->item=(char*)come_increment_ref_count(item);
                        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 252 "./comelang2.h"
                        self->tail->next=litem_119;
                        # 253 "./comelang2.h"
                        self->tail=litem_119;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result104__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result104__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional208;
struct list$1sTypeph* __result107__;
void* right_value140;
void* right_value141;
struct list$1sTypeph* result_126;
struct list_item$1sTypeph* it_127;
_Bool _while_condtional19;
void* right_value142;
struct list$1sTypeph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&result_126, 0, sizeof(struct list$1sTypeph*));
memset(&it_127, 0, sizeof(struct list_item$1sTypeph*));
right_value142 = (void*)0;
        # 142 "./comelang2.h"
        # 139 "./comelang2.h"
        if(_if_conditional208=self==((void*)0),        _if_conditional208) {
            # 140 "./comelang2.h"
            __result107__ = __result_obj__ = ((void*)0);
            return __result107__;
        }
        # 142 "./comelang2.h"
        result_126=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value141=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value140=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 144 "./comelang2.h"
        it_127=self->head;
        # 151 "./comelang2.h"
        while(_while_condtional19=it_127!=((void*)0),        _while_condtional19) {
            # 146 "./comelang2.h"
            list$1sTypeph_add(result_126,(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(it_127->item)))));
            come_call_finalizer2(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 148 "./comelang2.h"
            it_127=it_127->next;
        }
        # 151 "./comelang2.h"
        __result108__ = __result_obj__ = result_126;
        come_call_finalizer2(list$1sTypephp_finalize,result_126, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result108__;
        come_call_finalizer2(list$1sTypephp_finalize,result_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional209;
struct list$1charph* __result109__;
void* right_value144;
void* right_value145;
struct list$1charph* result_128;
struct list_item$1charph* it_129;
_Bool _while_condtional20;
void* right_value146;
struct list$1charph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&result_128, 0, sizeof(struct list$1charph*));
memset(&it_129, 0, sizeof(struct list_item$1charph*));
right_value146 = (void*)0;
        # 142 "./comelang2.h"
        # 139 "./comelang2.h"
        if(_if_conditional209=self==((void*)0),        _if_conditional209) {
            # 140 "./comelang2.h"
            __result109__ = __result_obj__ = ((void*)0);
            return __result109__;
        }
        # 142 "./comelang2.h"
        result_128=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value145=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value144=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 144 "./comelang2.h"
        it_129=self->head;
        # 151 "./comelang2.h"
        while(_while_condtional20=it_129!=((void*)0),        _while_condtional20) {
            # 146 "./comelang2.h"
            list$1charph_add(result_128,(char*)come_increment_ref_count(((char*)(right_value146=string_clone(it_129->item)))));
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 148 "./comelang2.h"
            it_129=it_129->next;
        }
        # 151 "./comelang2.h"
        __result110__ = __result_obj__ = result_128;
        come_call_finalizer2(list$1charphp_finalize,result_128, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result110__;
        come_call_finalizer2(list$1charphp_finalize,result_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj62;
struct tuple1$1sTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1736 "./comelang2.h"
        __dec_obj62=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1738 "./comelang2.h"
        __result111__ = __result_obj__ = self;
        come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result111__;
        come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj64;
char* __dec_obj65;
struct tuple2$2sTypephcharph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1768 "./comelang2.h"
        __dec_obj64=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1769 "./comelang2.h"
        __dec_obj65=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1771 "./comelang2.h"
        __result112__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result112__;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional210;
_Bool _if_conditional211;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2sTypephcharphp_finalize"
            # 0 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional210=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional210) {
                # 0 "tuple2$2sTypephcharphp_finalize"
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple2$2sTypephcharphp_finalize"
            # 1 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional211=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional211) {
                # 1 "tuple2$2sTypephcharphp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional212;
char* source_head_130;
_Bool output_131;
void* right_value153;
char* type_name_132;
struct sClass* klass_133;
_Bool _if_conditional213;
void* right_value154;
void* right_value155;
struct sClass* __dec_obj66;
void* right_value156;
struct sClass* __dec_obj67;
_Bool _if_conditional215;
void* right_value157;
void* right_value158;
struct sType* voidp_134;
void* right_value162;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
struct sType* finalizer_138;
void* right_value167;
struct sType* __list_values1___139[1];
void* right_value168;
void* right_value169;
struct list$1sTypeph* __dec_obj73;
void* right_value170;
char* __list_values2___141[1];
void* right_value171;
void* right_value172;
struct list$1charph* __dec_obj74;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
struct tuple1$1sTypeph* __dec_obj75;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
struct sType* cloner_143;
void* right_value182;
struct sType* __list_values3___144[1];
void* right_value183;
void* right_value184;
struct list$1sTypeph* __dec_obj76;
void* right_value185;
char* __list_values4___145[1];
void* right_value186;
void* right_value187;
struct list$1charph* __dec_obj77;
void* right_value188;
void* right_value189;
void* right_value190;
struct tuple1$1sTypeph* __dec_obj78;
void* right_value191;
void* right_value192;
void* right_value193;
_Bool _while_condtional21;
void* right_value194;
struct tuple2$2sTypephcharph* multiple_assign_var4;
struct sType* type2_146;
char* name_147;
void* right_value195;
void* right_value196;
_Bool _if_conditional218;
char* source_tail_148;
void* right_value197;
void* right_value198;
struct buffer* header_149;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
struct sNode* _inf_value1;
struct sInterfaceNode* _inf_obj_value1;
void* right_value207;
struct sNode* __result122__;
void* right_value208;
struct sNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_130, 0, sizeof(char*));
memset(&output_131, 0, sizeof(_Bool));
right_value153 = (void*)0;
memset(&type_name_132, 0, sizeof(char*));
memset(&klass_133, 0, sizeof(struct sClass*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&voidp_134, 0, sizeof(struct sType*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&finalizer_138, 0, sizeof(struct sType*));
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
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&cloner_143, 0, sizeof(struct sType*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&type2_146, 0, sizeof(struct sType*));
memset(&name_147, 0, sizeof(char*));
memset(&type2_146, 0, sizeof(struct sType*));
memset(&name_147, 0, sizeof(char*));
right_value195 = (void*)0;
right_value196 = (void*)0;
memset(&source_tail_148, 0, sizeof(char*));
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&header_149, 0, sizeof(struct buffer*));
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
    # 173 "23interface.c"
    # 101 "23interface.c"
    if(_if_conditional212=charp_operator_equals(buf,"interface")||charp_operator_equals(buf,"protocol"),    _if_conditional212) {
        # 102 "23interface.c"
        source_head_130=info->p;
        # 104 "23interface.c"
        output_131=(_Bool)1;
        # 106 "23interface.c"
        type_name_132=(char*)come_increment_ref_count(((char*)(right_value153=parse_word(info))));
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 108 "23interface.c"
        # 120 "23interface.c"
        # 109 "23interface.c"
        if(_if_conditional213=map$2charphsClassph_at(info->classes,type_name_132,((void*)0))==((void*)0),        _if_conditional213) {
            # 110 "23interface.c"
            __dec_obj66=klass_133;
            klass_133=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value155=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value154=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "23interface.c", 110, "sClass")))),type_name_132,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            come_call_finalizer2(sClass_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        else {
            # 113 "23interface.c"
            __dec_obj67=klass_133;
            klass_133=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value156=sClass_clone(map$2charphsClassph_at(info->classes,type_name_132,((void*)0))))));
            come_call_finalizer2(sClass_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 118 "23interface.c"
            # 115 "23interface.c"
            if(_if_conditional215=list$1tuple2$2charphsTypephph_length(klass_133->mFields)>0,            _if_conditional215) {
                # 116 "23interface.c"
                output_131=(_Bool)0;
            }
        }
        # 120 "23interface.c"
        expected_next_character(123,info);
        # 122 "23interface.c"
        voidp_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value157=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 122, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 123 "23interface.c"
        voidp_134->mPointerNum++;
        # 125 "23interface.c"
        list$1tuple2$2charphsTypephph_push_back(klass_133->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value164=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value162=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 125, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string("_protocol_obj")))),(struct sType*)come_increment_ref_count(voidp_134))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 127 "23interface.c"
        finalizer_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 127, "sType")))),"lambda",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 129 "23interface.c"
        {__list_values1___139[0]=come_increment_ref_count(((struct sType*)(right_value167=sType_clone(voidp_134))));
}        __dec_obj73=finalizer_138->mParamTypes;
        finalizer_138->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value169=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value168=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 129, "struct list$1sTypeph")))),1,__list_values1___139))));
        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 130 "23interface.c"
        {__list_values2___141[0]=come_increment_ref_count(((char*)(right_value170=__builtin_string("self"))));
}        __dec_obj74=finalizer_138->mParamNames;
        finalizer_138->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value172=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value171=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 130, "struct list$1charph")))),1,__list_values2___141))));
        come_call_finalizer2(list$1charph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 131 "23interface.c"
        finalizer_138->mVarArgs=(_Bool)0;
        # 132 "23interface.c"
        __dec_obj75=finalizer_138->mResultType;
        finalizer_138->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value176=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value173=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 132, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value174=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 132, "sType")))),"void",(_Bool)0,info))))))));
        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 134 "23interface.c"
        list$1tuple2$2charphsTypephph_push_back(klass_133->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value179=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value177=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 134, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string("finalize")))),(struct sType*)come_increment_ref_count(finalizer_138))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 136 "23interface.c"
        cloner_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value180=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 136, "sType")))),"lambda",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 138 "23interface.c"
        {__list_values3___144[0]=come_increment_ref_count(((struct sType*)(right_value182=sType_clone(voidp_134))));
}        __dec_obj76=cloner_143->mParamTypes;
        cloner_143->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value184=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value183=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 138, "struct list$1sTypeph")))),1,__list_values3___144))));
        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 139 "23interface.c"
        {__list_values4___145[0]=come_increment_ref_count(((char*)(right_value185=__builtin_string("self"))));
}        __dec_obj77=cloner_143->mParamNames;
        cloner_143->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value187=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value186=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 139, "struct list$1charph")))),1,__list_values4___145))));
        come_call_finalizer2(list$1charph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 140 "23interface.c"
        cloner_143->mVarArgs=(_Bool)0;
        # 141 "23interface.c"
        __dec_obj78=cloner_143->mResultType;
        cloner_143->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value190=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value188=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 141, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(voidp_134))))))));
        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 143 "23interface.c"
        list$1tuple2$2charphsTypephph_push_back(klass_133->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value193=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value191=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 143, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string("clone")))),(struct sType*)come_increment_ref_count(cloner_143))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 162 "23interface.c"
        while(_while_condtional21=(_Bool)1,        _while_condtional21) {
            # 146 "23interface.c"
            parse_sharp_v5(info);
            # 147 "23interface.c"
            multiple_assign_var4=((struct tuple2$2sTypephcharph*)(right_value194=parse_interface_function(info)));
            type2_146=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_147=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 148 "23interface.c"
            expected_next_character(59,info);
            # 150 "23interface.c"
            list$1tuple2$2charphsTypephph_push_back(klass_133->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value196=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value195=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 150, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_147),(struct sType*)come_increment_ref_count(type2_146))))));
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 152 "23interface.c"
            parse_sharp_v5(info);
            # 159 "23interface.c"
            # 154 "23interface.c"
            if(_if_conditional218=*info->p==125,            _if_conditional218) {
                # 155 "23interface.c"
                info->p++;
                # 156 "23interface.c"
                skip_spaces_and_lf(info);
                # 157 "23interface.c"
                come_call_finalizer2(sType_finalize,type2_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_147 = come_decrement_ref_count2(name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            # 159 "23interface.c"
            parse_sharp_v5(info);
            come_call_finalizer2(sType_finalize,type2_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_147 = come_decrement_ref_count2(name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 162 "23interface.c"
        source_tail_148=info->p;
        # 164 "23interface.c"
        header_149=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value198=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value197=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "23interface.c", 164, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 165 "23interface.c"
        buffer_append_str(header_149,"interface ");
        # 166 "23interface.c"
        buffer_append(header_149,source_head_130,source_tail_148-source_head_130);
        # 168 "23interface.c"
        add_come_code_at_come_header(info,"%s",((char*)(right_value199=buffer_to_string(header_149))));
        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 170 "23interface.c"
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23interface.c", 170, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sInterfaceNode*)(right_value202=sInterfaceNode_initialize((struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value200=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "23interface.c", 170, "sInterfaceNode")))),(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(type_name_132)))),(struct sClass*)come_increment_ref_count(klass_133),output_131,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sInterfaceNode_finalize;
        _inf_value1->clone=(void*)sInterfaceNode_clone;
        _inf_value1->compile=(void*)sInterfaceNode_compile;
        _inf_value1->sline=(void*)sInterfaceNode_sline;
        _inf_value1->sname=(void*)sInterfaceNode_sname;
        _inf_value1->terminated=(void*)sInterfaceNode_terminated;
        _inf_value1->kind=(void*)sInterfaceNode_kind;
        __result122__ = __result_obj__ = ((struct sNode*)(right_value207=_inf_value1));
        type_name_132 = come_decrement_ref_count2(type_name_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,klass_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,voidp_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,finalizer_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,cloner_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sInterfaceNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sInterfaceNode_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value207) { right_value207 = come_decrement_ref_count2(right_value207, ((struct sNode*)right_value207)->finalize, ((struct sNode*)right_value207)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result122__;
        type_name_132 = come_decrement_ref_count2(type_name_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,klass_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,voidp_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,finalizer_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,cloner_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 173 "23interface.c"
    __result123__ = __result_obj__ = ((struct sNode*)(right_value208=top_level_v1(buf,head,head_sline,info)));
    if(right_value208) { right_value208 = come_decrement_ref_count2(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result123__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional214;
int __result114__;
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
                # 367 "./comelang2.h"
                # 364 "./comelang2.h"
                if(_if_conditional214=self==((void*)0),                _if_conditional214) {
                    # 365 "./comelang2.h"
                    __result114__ = 0;
                    return __result114__;
                }
                # 367 "./comelang2.h"
                __result115__ = self->len;
                return __result115__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional216;
void* right_value159;
struct list_item$1tuple2$2charphsTypephph* litem_135;
struct tuple2$2charphsTypeph* __dec_obj68;
_Bool _if_conditional217;
void* right_value160;
struct list_item$1tuple2$2charphsTypephph* litem_136;
struct tuple2$2charphsTypeph* __dec_obj69;
void* right_value161;
struct list_item$1tuple2$2charphsTypephph* litem_137;
struct tuple2$2charphsTypeph* __dec_obj70;
struct list$1tuple2$2charphsTypephph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
memset(&litem_135, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value160 = (void*)0;
memset(&litem_136, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value161 = (void*)0;
memset(&litem_137, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            # 256 "./comelang2.h"
            # 225 "./comelang2.h"
            if(_if_conditional216=self->len==0,            _if_conditional216) {
                # 226 "./comelang2.h"
                litem_135=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value159=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "./comelang2.h"
                litem_135->prev=((void*)0);
                # 229 "./comelang2.h"
                litem_135->next=((void*)0);
                # 230 "./comelang2.h"
                __dec_obj68=litem_135->item;
                litem_135->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 232 "./comelang2.h"
                self->tail=litem_135;
                # 233 "./comelang2.h"
                self->head=litem_135;
            }
            else {
                # 256 "./comelang2.h"
                # 235 "./comelang2.h"
                if(_if_conditional217=self->len==1,                _if_conditional217) {
                    # 236 "./comelang2.h"
                    litem_136=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value160=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 238 "./comelang2.h"
                    litem_136->prev=self->head;
                    # 239 "./comelang2.h"
                    litem_136->next=((void*)0);
                    # 240 "./comelang2.h"
                    __dec_obj69=litem_136->item;
                    litem_136->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 242 "./comelang2.h"
                    self->tail=litem_136;
                    # 243 "./comelang2.h"
                    self->head->next=litem_136;
                }
                else {
                    # 246 "./comelang2.h"
                    litem_137=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value161=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 248 "./comelang2.h"
                    litem_137->prev=self->tail;
                    # 249 "./comelang2.h"
                    litem_137->next=((void*)0);
                    # 250 "./comelang2.h"
                    __dec_obj70=litem_137->item;
                    litem_137->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 252 "./comelang2.h"
                    self->tail->next=litem_137;
                    # 253 "./comelang2.h"
                    self->tail=litem_137;
                }
            }
            # 256 "./comelang2.h"
            self->len++;
            # 258 "./comelang2.h"
            __result116__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result116__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj71;
struct sType* __dec_obj72;
struct tuple2$2charphsTypeph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1768 "./comelang2.h"
            __dec_obj71=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 1769 "./comelang2.h"
            __dec_obj72=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1771 "./comelang2.h"
            __result117__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result117__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_140;
struct list$1sTypeph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_140, 0, sizeof(int));
            # 112 "./comelang2.h"
            self->head=((void*)0);
            # 113 "./comelang2.h"
            self->tail=((void*)0);
            # 114 "./comelang2.h"
            self->len=0;
            # 120 "./comelang2.h"
            for(            i_140=0;            i_140<num_value;            i_140++            ){
                # 117 "./comelang2.h"
                list$1sTypeph_push_back(self,values[i_140]);
            }
            # 120 "./comelang2.h"
            __result118__ = __result_obj__ = self;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result118__;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_142;
struct list$1charph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_142, 0, sizeof(int));
            # 112 "./comelang2.h"
            self->head=((void*)0);
            # 113 "./comelang2.h"
            self->tail=((void*)0);
            # 114 "./comelang2.h"
            self->len=0;
            # 120 "./comelang2.h"
            for(            i_142=0;            i_142<num_value;            i_142++            ){
                # 117 "./comelang2.h"
                list$1charph_push_back(self,values[i_142]);
            }
            # 120 "./comelang2.h"
            __result119__ = __result_obj__ = self;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result119__;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sInterfaceNode_finalize(struct sInterfaceNode* self){
void* __result_obj__;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sInterfaceNode_finalize"
            # 0 "sInterfaceNode_finalize"
            if(_if_conditional219=self!=((void*)0)&&self->name!=((void*)0),            _if_conditional219) {
                # 0 "sInterfaceNode_finalize"
                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sInterfaceNode_finalize"
            # 1 "sInterfaceNode_finalize"
            if(_if_conditional220=self!=((void*)0)&&self->klass!=((void*)0),            _if_conditional220) {
                # 1 "sInterfaceNode_finalize"
                come_call_finalizer2(sClass_finalize,self->klass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sInterfaceNode_finalize"
            # 2 "sInterfaceNode_finalize"
            if(_if_conditional221=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional221) {
                # 2 "sInterfaceNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self){
void* __result_obj__;
_Bool _if_conditional222;
struct sInterfaceNode* __result120__;
void* right_value203;
struct sInterfaceNode* result_150;
_Bool _if_conditional223;
void* right_value204;
char* __dec_obj79;
_Bool _if_conditional224;
void* right_value205;
struct sClass* __dec_obj80;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value206;
char* __dec_obj81;
struct sInterfaceNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
memset(&result_150, 0, sizeof(struct sInterfaceNode*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
            # 3 "sInterfaceNode_clone"
            # 2 "sInterfaceNode_clone"
            if(_if_conditional222=self==(void*)0,            _if_conditional222) {
                # 2 "sInterfaceNode_clone"
                __result120__ = __result_obj__ = (void*)0;
                return __result120__;
            }
            # 3 "sInterfaceNode_clone"
            result_150=(struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value203=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "sInterfaceNode_clone", 3, "sInterfaceNode"))));
            come_call_finalizer2(sInterfaceNode_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sInterfaceNode_clone"
            # 4 "sInterfaceNode_clone"
            if(_if_conditional223=self!=((void*)0)&&self->name!=((void*)0),            _if_conditional223) {
                # 4 "sInterfaceNode_clone"
                __dec_obj79=result_150->name;
                result_150->name=(char*)come_increment_ref_count(((char*)(right_value204=string_clone(self->name))));
                __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "sInterfaceNode_clone"
            # 5 "sInterfaceNode_clone"
            if(_if_conditional224=self!=((void*)0)&&self->klass!=((void*)0),            _if_conditional224) {
                # 5 "sInterfaceNode_clone"
                __dec_obj80=result_150->klass;
                result_150->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=sClass_clone(self->klass))));
                come_call_finalizer2(sClass_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sInterfaceNode_clone"
            # 6 "sInterfaceNode_clone"
            if(_if_conditional225=self!=((void*)0),            _if_conditional225) {
                # 6 "sInterfaceNode_clone"
                result_150->mOutput=self->mOutput;
            }
            # 8 "sInterfaceNode_clone"
            # 7 "sInterfaceNode_clone"
            if(_if_conditional226=self!=((void*)0),            _if_conditional226) {
                # 7 "sInterfaceNode_clone"
                result_150->sline=self->sline;
            }
            # 9 "sInterfaceNode_clone"
            # 8 "sInterfaceNode_clone"
            if(_if_conditional227=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional227) {
                # 8 "sInterfaceNode_clone"
                __dec_obj81=result_150->sname;
                result_150->sname=(char*)come_increment_ref_count(((char*)(right_value206=string_clone(self->sname))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 9 "sInterfaceNode_clone"
            __result121__ = __result_obj__ = result_150;
            come_call_finalizer2(sInterfaceNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result121__;
            come_call_finalizer2(sInterfaceNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

