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
struct sUnionNode
{
    struct sType* mType;
    int sline;
    char* sname;
    _Bool mOutput;
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

struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, struct sType* type, _Bool output, struct sInfo* info);

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
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
_Bool sUnionNode_terminated();

char* sUnionNode_kind();

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
int sUnionNode_sline(struct sUnionNode* self, struct sInfo* info);

char* sUnionNode_sname(struct sUnionNode* self, struct sInfo* info);

struct sNode* parse_union(char* type_name, struct sInfo* info);

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

static void sUnionNode_finalize(struct sUnionNode* self);
static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

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










struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, struct sType* type, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
void* right_value85;
struct sType* __dec_obj36;
void* right_value92;
void* right_value93;
struct sUnionNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value85 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj36=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string(type->mClass->mName)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(type)))));
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mOutput=output;
    __result76__ = __result_obj__ = self;
    come_call_finalizer2(sUnionNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer2(sUnionNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional7;
struct sType* __result34__;
void* right_value50;
struct sType* result_11;
_Bool _if_conditional25;
_Bool _if_conditional26;
void* right_value57;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional30;
void* right_value60;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional34;
void* right_value61;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional35;
void* right_value62;
char* __dec_obj20;
_Bool _if_conditional36;
void* right_value63;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional37;
void* right_value71;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value72;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional52;
void* right_value79;
struct list$1charph* __dec_obj30;
_Bool _if_conditional56;
void* right_value80;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional57;
_Bool _if_conditional58;
void* right_value81;
struct sNode* __dec_obj32;
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
void* right_value82;
struct sNode* __dec_obj33;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value83;
char* __dec_obj34;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
void* right_value84;
char* __dec_obj35;
_Bool _if_conditional95;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
memset(&result_11, 0, sizeof(struct sType*));
right_value57 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
        if(_if_conditional7=self==(void*)0,        _if_conditional7) {
            __result34__ = __result_obj__ = (void*)0;
            return __result34__;
        }
        result_11=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional25=self!=((void*)0),        _if_conditional25) {
            result_11->mClass=self->mClass;
        }
        if(_if_conditional26=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional26) {
            __dec_obj16=result_11->mMultipleTypes;
            result_11->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value57=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional30=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional30) {
            __dec_obj18=result_11->mNoSolvedGenericsType;
            result_11->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional34) {
            __dec_obj19=result_11->mOriginalLoadVarType;
            result_11->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value61=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional35=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional35) {
            __dec_obj20=result_11->mGenericsName;
            result_11->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value62=string_clone(self->mGenericsName))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional36=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional36) {
            __dec_obj21=result_11->mGenericsTypes;
            result_11->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value63=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional37=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional37) {
            __dec_obj25=result_11->mArrayNum;
            result_11->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value71=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional50=self!=((void*)0),        _if_conditional50) {
            result_11->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional51=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional51) {
            __dec_obj26=result_11->mParamTypes;
            result_11->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value72=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional52) {
            __dec_obj30=result_11->mParamNames;
            result_11->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value79=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional56=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional56) {
            __dec_obj31=result_11->mResultType;
            result_11->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value80=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_11->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional58=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional58) {
            __dec_obj32=result_11->mAlignas;
            result_11->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=sNode_clone(self->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_11->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_11->mShort=self->mShort;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_11->mLong=self->mLong;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_11->mLongLong=self->mLongLong;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_11->mConstant=self->mConstant;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_11->mRegister=self->mRegister;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_11->mVolatile=self->mVolatile;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_11->mStatic=self->mStatic;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_11->mExtern=self->mExtern;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_11->mRestrict=self->mRestrict;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_11->mImmutable=self->mImmutable;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_11->mHeap=self->mHeap;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_11->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_11->mDelegate=self->mDelegate;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_11->mShare=self->mShare;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_11->mClone=self->mClone;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_11->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_11->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_11->mRefference=self->mRefference;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_11->mException=self->mException;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_11->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_11->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_11->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional82=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional82) {
            __dec_obj33=result_11->mSizeNum;
            result_11->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value82=sNode_clone(self->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value82) { right_value82 = come_decrement_ref_count2(right_value82, ((struct sNode*)right_value82)->finalize, ((struct sNode*)right_value82)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_11->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_11->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional85=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional85) {
            __dec_obj34=result_11->mOriginalTypeName;
            result_11->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value83=string_clone(self->mOriginalTypeName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_11->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_11->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_11->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_11->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_11->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_11->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_11->mInline=self->mInline;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_11->mNullValue=self->mNullValue;
        }
        if(_if_conditional94=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional94) {
            __dec_obj35=result_11->mAsmName;
            result_11->mAsmName=(char*)come_increment_ref_count(((char*)(right_value84=string_clone(self->mAsmName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_11->mArrayPointerType=self->mArrayPointerType;
        }
        __result51__ = __result_obj__ = result_11;
        come_call_finalizer2(sType_finalize,result_11, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result51__;
        come_call_finalizer2(sType_finalize,result_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
            if(_if_conditional8=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional8) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional10=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional10) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional12=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional12) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional13=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional13) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional14=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional14) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional17) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional18) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional20) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional21) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional22) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional23) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional24) {
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
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional9=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional9) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional11) {
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
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
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
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional19) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
struct list$1sTypeph* __result35__;
void* right_value51;
void* right_value52;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional4;
void* right_value56;
struct list$1sTypeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
right_value56 = (void*)0;
                if(_if_conditional27=self==((void*)0),                _if_conditional27) {
                    __result35__ = __result_obj__ = ((void*)0);
                    return __result35__;
                }
                result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value52=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value51=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional4=it_19!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(it_19->item)))));
                    come_call_finalizer2(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional28;
void* right_value53;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj13;
_Bool _if_conditional29;
void* right_value54;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj14;
void* right_value55;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj15;
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
right_value54 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
right_value55 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional28=self->len==0,                        _if_conditional28) {
                            litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj13=litem_20->item;
                            litem_20->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional29=self->len==1,                            _if_conditional29) {
                                litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj14=litem_21->item;
                                litem_21->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj15=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional31;
struct tuple1$1sTypeph* __result39__;
void* right_value58;
struct tuple1$1sTypeph* result_23;
_Bool _if_conditional33;
void* right_value59;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
memset(&result_23, 0, sizeof(struct tuple1$1sTypeph*));
right_value59 = (void*)0;
                if(_if_conditional31=self==(void*)0,                _if_conditional31) {
                    __result39__ = __result_obj__ = (void*)0;
                    return __result39__;
                }
                result_23=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value58=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional33=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional33) {
                    __dec_obj17=result_23->v1;
                    result_23->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result40__ = __result_obj__ = result_23;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional32) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional38;
struct list$1sNodeph* __result41__;
void* right_value64;
void* right_value65;
struct list$1sNodeph* result_24;
struct list_item$1sNodeph* it_25;
_Bool _while_condtional5;
void* right_value70;
struct list$1sNodeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
right_value65 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1sNodeph*));
memset(&it_25, 0, sizeof(struct list_item$1sNodeph*));
right_value70 = (void*)0;
                if(_if_conditional38=self==((void*)0),                _if_conditional38) {
                    __result41__ = __result_obj__ = ((void*)0);
                    return __result41__;
                }
                result_24=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value65=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value64=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional5=it_25!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_24,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value70=sNode_clone(it_25->item)))));
                    if(right_value70) { right_value70 = come_decrement_ref_count2(right_value70, ((struct sNode*)right_value70)->finalize, ((struct sNode*)right_value70)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
_Bool _if_conditional39;
void* right_value66;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj22;
_Bool _if_conditional40;
void* right_value67;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj23;
void* right_value68;
struct list_item$1sNodeph* litem_28;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
right_value67 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
right_value68 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional39=self->len==0,                        _if_conditional39) {
                            litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value66=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj22=litem_26->item;
                            litem_26->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional40=self->len==1,                            _if_conditional40) {
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value67=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj23=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value68=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj24=litem_28->item;
                                litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
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
_Bool _if_conditional41;
struct sNode* __result44__;
void* right_value69;
struct sNode* result_29;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
struct sNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
memset(&result_29, 0, sizeof(struct sNode*));
                        if(_if_conditional41=self==(void*)0,                        _if_conditional41) {
                            __result44__ = __result_obj__ = (void*)0;
                            return __result44__;
                        }
                        result_29=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value69=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value69) { right_value69 = come_decrement_ref_count2(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional42=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional42) {
                            result_29->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_29->finalize=self->finalize;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_29->clone=self->clone;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_29->compile=self->compile;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_29->sline=self->sline;
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_29->sname=self->sname;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_29->terminated=self->terminated;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
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
_Bool _if_conditional53;
struct list$1charph* __result47__;
void* right_value73;
void* right_value74;
struct list$1charph* result_30;
struct list_item$1charph* it_31;
_Bool _while_condtional6;
void* right_value78;
struct list$1charph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
right_value74 = (void*)0;
memset(&result_30, 0, sizeof(struct list$1charph*));
memset(&it_31, 0, sizeof(struct list_item$1charph*));
right_value78 = (void*)0;
                if(_if_conditional53=self==((void*)0),                _if_conditional53) {
                    __result47__ = __result_obj__ = ((void*)0);
                    return __result47__;
                }
                result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value74=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value73=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_31=self->head;
                while(_while_condtional6=it_31!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value78=string_clone(it_31->item)))));
                    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional54;
void* right_value75;
struct list_item$1charph* litem_32;
char* __dec_obj27;
_Bool _if_conditional55;
void* right_value76;
struct list_item$1charph* litem_33;
char* __dec_obj28;
void* right_value77;
struct list_item$1charph* litem_34;
char* __dec_obj29;
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value75 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
right_value76 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
right_value77 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional54=self->len==0,                        _if_conditional54) {
                            litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value75=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_32->prev=((void*)0);
                            litem_32->next=((void*)0);
                            __dec_obj27=litem_32->item;
                            litem_32->item=(char*)come_increment_ref_count(item);
                            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_32;
                            self->head=litem_32;
                        }
                        else {
                            if(_if_conditional55=self->len==1,                            _if_conditional55) {
                                litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value76=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_33->prev=self->head;
                                litem_33->next=((void*)0);
                                __dec_obj28=litem_33->item;
                                litem_33->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_33;
                                self->head->next=litem_33;
                            }
                            else {
                                litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value77=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_34->prev=self->tail;
                                litem_34->next=((void*)0);
                                __dec_obj29=litem_34->item;
                                litem_34->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
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

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional96;
unsigned int hash_52;
unsigned int it_53;
_Bool _while_condtional9;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool same_key_exist_70;
char* it2_73;
_Bool _if_conditional139;
_Bool _if_conditional140;
struct map$2charphsTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_52, 0, sizeof(unsigned int));
memset(&it_53, 0, sizeof(unsigned int));
memset(&same_key_exist_70, 0, sizeof(_Bool));
memset(&it2_73, 0, sizeof(char*));
        if(_if_conditional96=self->len*10>=self->size,        _if_conditional96) {
            map$2charphsTypeph_rehash(self);
        }
        hash_52=string_get_hash_key(key)%self->size;
        it_53=hash_52;
        while(_while_condtional9=(_Bool)1,        _while_condtional9) {
            if(_if_conditional108=self->item_existance[it_53],            _if_conditional108) {
                if(_if_conditional109=string_equals(self->keys[it_53],key),                _if_conditional109) {
                    if(_if_conditional110=1,                    _if_conditional110) {
                        list$1charp_remove(self->key_list,self->keys[it_53]);
                        self->keys[it_53] = come_decrement_ref_count2(self->keys[it_53], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_53]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_53]);
                        self->keys[it_53]=key;
                    }
                    if(_if_conditional130=1,                    _if_conditional130) {
                        come_call_finalizer2(sType_finalize,self->items[it_53], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->items[it_53]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_53]=item;
                    }
                    break;
                }
                it_53++;
                if(_if_conditional131=it_53>=self->size,                _if_conditional131) {
                    it_53=0;
                }
                else {
                    if(_if_conditional132=it_53==hash_52,                    _if_conditional132) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_53]=(_Bool)1;
                if(_if_conditional133=1,                _if_conditional133) {
                    self->keys[it_53]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_53]=key;
                }
                if(_if_conditional134=1,                _if_conditional134) {
                    self->items[it_53]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_53]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_70=(_Bool)0;
        for(        it2_73=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_73=list$1charp_next(self->key_list)        ){
            if(_if_conditional139=string_equals(it2_73,key),            _if_conditional139) {
                puts("SAME KEY");
                same_key_exist_70=(_Bool)1;
            }
        }
        if(_if_conditional140=!same_key_exist_70,        _if_conditional140) {
            list$1charp_push_back(self->key_list,key);
        }
        __result75__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result75__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_35;
void* right_value86;
char** keys_36;
void* right_value87;
struct sType** items_37;
void* right_value88;
_Bool* item_existance_38;
int len_39;
char* it_42;
struct sType* default_value_45;
struct sType* it2_48;
unsigned int hash_49;
int n_50;
_Bool _while_condtional8;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
struct sType* default_value_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_35, 0, sizeof(int));
right_value86 = (void*)0;
memset(&keys_36, 0, sizeof(char**));
right_value87 = (void*)0;
memset(&items_37, 0, sizeof(struct sType**));
right_value88 = (void*)0;
memset(&item_existance_38, 0, sizeof(_Bool*));
memset(&len_39, 0, sizeof(int));
memset(&it_42, 0, sizeof(char*));
memset(&default_value_45, 0, sizeof(struct sType*));
memset(&it2_48, 0, sizeof(struct sType*));
memset(&hash_49, 0, sizeof(unsigned int));
memset(&n_50, 0, sizeof(int));
memset(&default_value_51, 0, sizeof(struct sType*));
                size_35=self->size*10;
                keys_36=(char**)come_increment_ref_count(((char**)(right_value86=(char**)come_calloc(1, sizeof(char*)*(1*(size_35)), "./comelang2.h", 1335, "char*%"))));
                right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_37=(struct sType**)come_increment_ref_count(((struct sType**)(right_value87=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_35)), "./comelang2.h", 1336, "sType*%"))));
                come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                item_existance_38=(_Bool*)come_increment_ref_count(((_Bool*)(right_value88=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_35)), "./comelang2.h", 1337, "bool"))));
                right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_39=0;
                for(                it_42=map$2charphsTypeph_begin(self);                !map$2charphsTypeph_end(self);                it_42=map$2charphsTypeph_next(self)                ){
                    memset(&default_value_45,0,sizeof(struct sType*));
                    it2_48=map$2charphsTypeph_at(self,it_42,default_value_45);
                    hash_49=string_get_hash_key(it_42)%size_35;
                    n_50=hash_49;
                    while(_while_condtional8=(_Bool)1,                    _while_condtional8) {
                        if(_if_conditional105=item_existance_38[n_50],                        _if_conditional105) {
                            n_50++;
                            if(_if_conditional106=n_50>=size_35,                            _if_conditional106) {
                                n_50=0;
                            }
                            else {
                                if(_if_conditional107=n_50==hash_49,                                _if_conditional107) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_38[n_50]=(_Bool)1;
                            keys_36[n_50]=it_42;
                            items_37[n_50]=map$2charphsTypeph_at(self,it_42,default_value_51);
                            len_39++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_36;
                self->items=items_37;
                self->item_existance=item_existance_38;
                self->size=size_35;
                self->len=len_39;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional97;
char* result_40;
char* __result52__;
_Bool _if_conditional98;
char* __result53__;
char* result_41;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_40, 0, sizeof(char*));
memset(&result_41, 0, sizeof(char*));
                    if(_if_conditional97=self==((void*)0),                    _if_conditional97) {
                        memset(&result_40,0,sizeof(char*));
                        __result52__ = __result_obj__ = result_40;
                        return __result52__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result53__ = __result_obj__ = self->key_list->it->item;
                        return __result53__;
                    }
                    memset(&result_41,0,sizeof(char*));
                    __result54__ = __result_obj__ = result_41;
                    return __result54__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result55__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result55__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional99;
char* result_43;
char* __result56__;
_Bool _if_conditional100;
char* __result57__;
char* result_44;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_43, 0, sizeof(char*));
memset(&result_44, 0, sizeof(char*));
                    if(_if_conditional99=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional99) {
                        memset(&result_43,0,sizeof(char*));
                        __result56__ = __result_obj__ = result_43;
                        return __result56__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result57__ = __result_obj__ = self->key_list->it->item;
                        return __result57__;
                    }
                    memset(&result_44,0,sizeof(char*));
                    __result58__ = __result_obj__ = result_44;
                    return __result58__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_46;
unsigned int it_47;
_Bool _while_condtional7;
_Bool _if_conditional101;
_Bool _if_conditional102;
struct sType* __result59__;
_Bool _if_conditional103;
_Bool _if_conditional104;
struct sType* __result60__;
struct sType* __result61__;
struct sType* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_46, 0, sizeof(unsigned int));
memset(&it_47, 0, sizeof(unsigned int));
                        hash_46=string_get_hash_key(((char*)key))%self->size;
                        it_47=hash_46;
                        while(_while_condtional7=(_Bool)1,                        _while_condtional7) {
                            if(_if_conditional101=self->item_existance[it_47],                            _if_conditional101) {
                                if(_if_conditional102=string_equals(self->keys[it_47],key),                                _if_conditional102) {
                                    __result59__ = __result_obj__ = self->items[it_47];
                                    come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result59__;
                                }
                                it_47++;
                                if(_if_conditional103=it_47>=self->size,                                _if_conditional103) {
                                    it_47=0;
                                }
                                else {
                                    if(_if_conditional104=it_47==hash_46,                                    _if_conditional104) {
                                        __result60__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result60__;
                                    }
                                }
                            }
                            else {
                                __result61__ = __result_obj__ = default_value;
                                come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result61__;
                            }
                        }
                        __result62__ = __result_obj__ = default_value;
                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result62__;
                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_54;
struct list_item$1charp* it_55;
_Bool _while_condtional10;
_Bool _if_conditional111;
struct list$1charp* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_54, 0, sizeof(int));
memset(&it_55, 0, sizeof(struct list_item$1charp*));
                            it2_54=0;
                            it_55=self->head;
                            while(_while_condtional10=it_55!=((void*)0),                            _while_condtional10) {
                                if(_if_conditional111=string_equals(it_55->item,item),                                _if_conditional111) {
                                    list$1charp_delete(self,it2_54,it2_54+1);
                                    break;
                                }
                                it2_54++;
                                it_55=it_55->next;
                            }
                            __result66__ = __result_obj__ = self;
                            return __result66__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
int tmp_56;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
struct list$1charp* __result63__;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct list_item$1charp* it_59;
int i_60;
_Bool _while_condtional12;
_Bool _if_conditional120;
struct list_item$1charp* prev_it_61;
_Bool _if_conditional121;
_Bool _if_conditional122;
struct list_item$1charp* it_62;
int i_63;
_Bool _while_condtional13;
_Bool _if_conditional123;
_Bool _if_conditional124;
struct list_item$1charp* prev_it_64;
struct list_item$1charp* it_65;
struct list_item$1charp* head_prev_it_66;
struct list_item$1charp* tail_it_67;
int i_68;
_Bool _while_condtional14;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct list_item$1charp* prev_it_69;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct list$1charp* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_56, 0, sizeof(int));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
memset(&i_60, 0, sizeof(int));
memset(&prev_it_61, 0, sizeof(struct list_item$1charp*));
memset(&it_62, 0, sizeof(struct list_item$1charp*));
memset(&i_63, 0, sizeof(int));
memset(&prev_it_64, 0, sizeof(struct list_item$1charp*));
memset(&it_65, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_66, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_67, 0, sizeof(struct list_item$1charp*));
memset(&i_68, 0, sizeof(int));
memset(&prev_it_69, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional112=head<0,                                        _if_conditional112) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional113=tail<0,                                        _if_conditional113) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional114=head>tail,                                        _if_conditional114) {
                                            tmp_56=tail;
                                            tail=head;
                                            head=tmp_56;
                                        }
                                        if(_if_conditional115=head<0,                                        _if_conditional115) {
                                            head=0;
                                        }
                                        if(_if_conditional116=tail>self->len,                                        _if_conditional116) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional117=head==tail,                                        _if_conditional117) {
                                            __result63__ = __result_obj__ = self;
                                            return __result63__;
                                        }
                                        if(_if_conditional118=head==0&&tail==self->len,                                        _if_conditional118) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional119=head==0,                                            _if_conditional119) {
                                                it_59=self->head;
                                                i_60=0;
                                                while(_while_condtional12=it_59!=((void*)0),                                                _while_condtional12) {
                                                    if(_if_conditional120=i_60<tail,                                                    _if_conditional120) {
                                                        prev_it_61=it_59;
                                                        it_59=it_59->next;
                                                        i_60++;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional121=i_60==tail,                                                        _if_conditional121) {
                                                            self->head=it_59;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_59=it_59->next;
                                                            i_60++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional122=tail==self->len,                                                _if_conditional122) {
                                                    it_62=self->head;
                                                    i_63=0;
                                                    while(_while_condtional13=it_62!=((void*)0),                                                    _while_condtional13) {
                                                        if(_if_conditional123=i_63==head,                                                        _if_conditional123) {
                                                            self->tail=it_62->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional124=i_63>=head,                                                        _if_conditional124) {
                                                            prev_it_64=it_62;
                                                            it_62=it_62->next;
                                                            i_63++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_62=it_62->next;
                                                            i_63++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_65=self->head;
                                                    head_prev_it_66=((void*)0);
                                                    tail_it_67=((void*)0);
                                                    i_68=0;
                                                    while(_while_condtional14=it_65!=((void*)0),                                                    _while_condtional14) {
                                                        if(_if_conditional125=i_68==head,                                                        _if_conditional125) {
                                                            head_prev_it_66=it_65->prev;
                                                        }
                                                        if(_if_conditional126=i_68==tail,                                                        _if_conditional126) {
                                                            tail_it_67=it_65;
                                                        }
                                                        if(_if_conditional127=i_68>=head&&i_68<tail,                                                        _if_conditional127) {
                                                            prev_it_69=it_65;
                                                            it_65=it_65->next;
                                                            i_68++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_65=it_65->next;
                                                            i_68++;
                                                        }
                                                    }
                                                    if(_if_conditional128=head_prev_it_66!=((void*)0),                                                    _if_conditional128) {
                                                        head_prev_it_66->next=tail_it_67;
                                                    }
                                                    if(_if_conditional129=tail_it_67!=((void*)0),                                                    _if_conditional129) {
                                                        tail_it_67->prev=head_prev_it_66;
                                                    }
                                                }
                                            }
                                        }
                                        __result65__ = __result_obj__ = self;
                                        return __result65__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_57;
_Bool _while_condtional11;
struct list_item$1charp* prev_it_58;
struct list$1charp* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_57, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_58, 0, sizeof(struct list_item$1charp*));
                                                it_57=self->head;
                                                while(_while_condtional11=it_57!=((void*)0),                                                _while_condtional11) {
                                                    prev_it_58=it_57;
                                                    it_57=it_57->next;
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result64__ = __result_obj__ = self;
                                                return __result64__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional135;
char* result_71;
char* __result67__;
_Bool _if_conditional136;
char* __result68__;
char* result_72;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_71, 0, sizeof(char*));
memset(&result_72, 0, sizeof(char*));
            if(_if_conditional135=self==((void*)0),            _if_conditional135) {
                memset(&result_71,0,sizeof(char*));
                __result67__ = __result_obj__ = result_71;
                return __result67__;
            }
            self->it=self->head;
            if(self->it) {
                __result68__ = __result_obj__ = self->it->item;
                return __result68__;
            }
            memset(&result_72,0,sizeof(char*));
            __result69__ = __result_obj__ = result_72;
            return __result69__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
            __result70__ = self==((void*)0)||self->it==((void*)0);
            return __result70__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional137;
char* result_74;
char* __result71__;
_Bool _if_conditional138;
char* __result72__;
char* result_75;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_74, 0, sizeof(char*));
memset(&result_75, 0, sizeof(char*));
            if(_if_conditional137=self==((void*)0)||self->it==((void*)0),            _if_conditional137) {
                memset(&result_74,0,sizeof(char*));
                __result71__ = __result_obj__ = result_74;
                return __result71__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result72__ = __result_obj__ = self->it->item;
                return __result72__;
            }
            memset(&result_75,0,sizeof(char*));
            __result73__ = __result_obj__ = result_75;
            return __result73__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional141;
void* right_value89;
struct list_item$1charp* litem_76;
_Bool _if_conditional142;
void* right_value90;
struct list_item$1charp* litem_77;
void* right_value91;
struct list_item$1charp* litem_78;
struct list$1charp* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1charp*));
right_value90 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1charp*));
right_value91 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional141=self->len==0,                _if_conditional141) {
                    litem_76=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value89=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_76->prev=((void*)0);
                    litem_76->next=((void*)0);
                    litem_76->item=item;
                    self->tail=litem_76;
                    self->head=litem_76;
                }
                else {
                    if(_if_conditional142=self->len==1,                    _if_conditional142) {
                        litem_77=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value90=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_77->prev=self->head;
                        litem_77->next=((void*)0);
                        litem_77->item=item;
                        self->tail=litem_77;
                        self->head->next=litem_77;
                    }
                    else {
                        litem_78=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value91=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_78->prev=self->tail;
                        litem_78->next=((void*)0);
                        litem_78->item=item;
                        self->tail->next=litem_78;
                        self->tail=litem_78;
                    }
                }
                self->len++;
                __result74__ = __result_obj__ = self;
                return __result74__;
}

_Bool sUnionNode_terminated(){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = (_Bool)1;
    return __result77__;
}

char* sUnionNode_kind(){
void* __result_obj__;
void* right_value94;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
    __result78__ = __result_obj__ = ((char*)(right_value94=__builtin_string("sUnionNode")));
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_79;
struct sClass* klass_80;
_Bool _if_conditional145;
_Bool _if_conditional146;
void* right_value95;
void* right_value96;
struct buffer* buf_81;
void* right_value97;
struct list$1tuple2$2charphsTypephph* o2_saved_82;
struct tuple2$2charphsTypeph* it_85;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_88;
struct sType* type_89;
void* right_value98;
void* right_value99;
_Bool _if_conditional154;
_Bool _if_conditional155;
void* right_value100;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_79, 0, sizeof(struct sType*));
memset(&klass_80, 0, sizeof(struct sClass*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&buf_81, 0, sizeof(struct buffer*));
right_value97 = (void*)0;
memset(&o2_saved_82, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_85, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_88, 0, sizeof(char*));
memset(&type_89, 0, sizeof(struct sType*));
memset(&name_88, 0, sizeof(char*));
memset(&type_89, 0, sizeof(struct sType*));
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
    type_79=self->mType;
    klass_80=type_79->mClass;
    if(_if_conditional145=!klass_80->mOutputed,    _if_conditional145) {
        klass_80->mOutputed=(_Bool)1;
        if(_if_conditional146=list$1tuple2$2charphsTypephph_length(klass_80->mFields)>0,        _if_conditional146) {
            buf_81=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value96=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value95=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "15union.c", 46, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_81,((char*)(right_value97=xsprintf("union %s\n{\n",type_79->mClass->mName))));
            right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            o2_saved_82=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_80->mFields)),it_85=list$1tuple2$2charphsTypephph_begin((o2_saved_82));            !list$1tuple2$2charphsTypephph_end((o2_saved_82));            it_85=list$1tuple2$2charphsTypephph_next((o2_saved_82))            ){
                multiple_assign_var1=it_85;
                name_88=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                type_89=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
                buffer_append_str(buf_81,((char*)(right_value98=make_define_var(type_89,name_88,(_Bool)0,info))));
                right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(buf_81,";\n");
                name_88 = come_decrement_ref_count2(name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_81,((char*)(right_value99=xsprintf("};\n"))));
            right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional154=info->output_header_file&&string_operator_not_equals(klass_80->mDeclareSName,info->base_sname),            _if_conditional154) {
            }
            else {
                if(self->mOutput) {
                    add_come_code_at_source_head(info,"%s",((char*)(right_value100=buffer_to_string(buf_81))));
                    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            come_call_finalizer2(buffer_finalize,buf_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    __result87__ = (_Bool)1;
    return __result87__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
            __result79__ = self->len;
            return __result79__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional147;
struct tuple2$2charphsTypeph* result_83;
struct tuple2$2charphsTypeph* __result80__;
_Bool _if_conditional148;
struct tuple2$2charphsTypeph* __result81__;
struct tuple2$2charphsTypeph* result_84;
struct tuple2$2charphsTypeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_83, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_84, 0, sizeof(struct tuple2$2charphsTypeph*));
                if(_if_conditional147=self==((void*)0),                _if_conditional147) {
                    memset(&result_83,0,sizeof(struct tuple2$2charphsTypeph*));
                    __result80__ = __result_obj__ = result_83;
                    return __result80__;
                }
                self->it=self->head;
                if(self->it) {
                    __result81__ = __result_obj__ = self->it->item;
                    return __result81__;
                }
                memset(&result_84,0,sizeof(struct tuple2$2charphsTypeph*));
                __result82__ = __result_obj__ = result_84;
                return __result82__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
                __result83__ = self==((void*)0)||self->it==((void*)0);
                return __result83__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional149;
struct tuple2$2charphsTypeph* result_86;
struct tuple2$2charphsTypeph* __result84__;
_Bool _if_conditional150;
struct tuple2$2charphsTypeph* __result85__;
struct tuple2$2charphsTypeph* result_87;
struct tuple2$2charphsTypeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_86, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_87, 0, sizeof(struct tuple2$2charphsTypeph*));
                if(_if_conditional149=self==((void*)0)||self->it==((void*)0),                _if_conditional149) {
                    memset(&result_86,0,sizeof(struct tuple2$2charphsTypeph*));
                    __result84__ = __result_obj__ = result_86;
                    return __result84__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result85__ = __result_obj__ = self->it->item;
                    return __result85__;
                }
                memset(&result_87,0,sizeof(struct tuple2$2charphsTypeph*));
                __result86__ = __result_obj__ = result_87;
                return __result86__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_90;
_Bool _while_condtional15;
struct list_item$1tuple2$2charphsTypephph* prev_it_91;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_90, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_91, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_90=self->head;
                while(_while_condtional15=it_90!=((void*)0),                _while_condtional15) {
                    prev_it_91=it_90;
                    it_90=it_90->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional151;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional151=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional151) {
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional152;
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional152=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional152) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional153=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional153) {
                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

int sUnionNode_sline(struct sUnionNode* self, struct sInfo* info){
void* __result_obj__;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = self->sline;
    return __result88__;
}

char* sUnionNode_sname(struct sUnionNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value101;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
    __result89__ = __result_obj__ = ((char*)(right_value101=__builtin_string(self->sname)));
    right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
}

struct sNode* parse_union(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_92;
_Bool output_93;
_Bool _if_conditional163;
void* right_value102;
void* right_value103;
void* right_value104;
struct sClass* __dec_obj37;
void* right_value108;
void* right_value122;
void* right_value123;
struct sClass* __dec_obj46;
void* right_value124;
void* right_value125;
struct sType* type_122;
_Bool _while_condtional21;
void* right_value126;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type2_125;
char* name_126;
_Bool err_127;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value130;
void* right_value131;
_Bool _if_conditional212;
void* right_value132;
void* right_value133;
struct sNode* _inf_value1;
struct sUnionNode* _inf_obj_value1;
void* right_value137;
struct sNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_92, 0, sizeof(struct sClass*));
memset(&output_93, 0, sizeof(_Bool));
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value108 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
memset(&type_122, 0, sizeof(struct sType*));
right_value126 = (void*)0;
memset(&type2_125, 0, sizeof(struct sType*));
memset(&name_126, 0, sizeof(char*));
memset(&err_127, 0, sizeof(_Bool));
memset(&type2_125, 0, sizeof(struct sType*));
memset(&name_126, 0, sizeof(char*));
memset(&err_127, 0, sizeof(_Bool));
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value137 = (void*)0;
    if(_if_conditional163=map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0),    _if_conditional163) {
        output_93=(_Bool)1;
        __dec_obj37=klass_92;
        klass_92=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value104=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value102=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "15union.c", 88, "sClass")))),((char*)(right_value103=__builtin_string(type_name))),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value122=sClass_clone(klass_92)))));
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        output_93=(_Bool)0;
        __dec_obj46=klass_92;
        klass_92=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value123=sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))))));
        come_call_finalizer2(sClass_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    type_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value124=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "15union.c", 96, "sType")))),type_name,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    expected_next_character(123,info);
    list$1tuple2$2charphsTypephph_reset(type_122->mClass->mFields);
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value126=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type2_125=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_126=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_127=multiple_assign_var2->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional208=!err_127,        _if_conditional208) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(59,info);
        if(_if_conditional209=!info->no_output_err,        _if_conditional209) {
            list$1tuple2$2charphsTypephph_push_back(type_122->mClass->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value131=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value130=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "15union.c", 112, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_126),(struct sType*)come_increment_ref_count(type2_125))))));
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional212=*info->p==125,        _if_conditional212) {
            info->p++;
            skip_spaces_and_lf(info);
            come_call_finalizer2(sType_finalize,type2_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_126 = come_decrement_ref_count2(name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        come_call_finalizer2(sType_finalize,type2_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_126 = come_decrement_ref_count2(name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "15union.c", 122, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sUnionNode*)(right_value133=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value132=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "15union.c", 122, "sUnionNode")))),(struct sType*)come_increment_ref_count(type_122),output_93,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sUnionNode_finalize;
    _inf_value1->clone=(void*)sUnionNode_clone;
    _inf_value1->compile=(void*)sUnionNode_compile;
    _inf_value1->sline=(void*)sUnionNode_sline;
    _inf_value1->sname=(void*)sUnionNode_sname;
    _inf_value1->terminated=(void*)sUnionNode_terminated;
    _inf_value1->kind=(void*)sUnionNode_kind;
    __result115__ = __result_obj__ = ((struct sNode*)(right_value137=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sUnionNode_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sUnionNode_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value137) { right_value137 = come_decrement_ref_count2(right_value137, ((struct sNode*)right_value137)->finalize, ((struct sNode*)right_value137)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result115__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_94;
unsigned int it_95;
_Bool _while_condtional16;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct sClass* __result90__;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct sClass* __result91__;
struct sClass* __result92__;
struct sClass* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_94, 0, sizeof(unsigned int));
memset(&it_95, 0, sizeof(unsigned int));
        hash_94=string_get_hash_key(((char*)key))%self->size;
        it_95=hash_94;
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            if(_if_conditional156=self->item_existance[it_95],            _if_conditional156) {
                if(_if_conditional157=string_equals(self->keys[it_95],key),                _if_conditional157) {
                    __result90__ = __result_obj__ = self->items[it_95];
                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result90__;
                }
                it_95++;
                if(_if_conditional161=it_95>=self->size,                _if_conditional161) {
                    it_95=0;
                }
                else {
                    if(_if_conditional162=it_95==hash_94,                    _if_conditional162) {
                        __result91__ = __result_obj__ = default_value;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result91__;
                    }
                }
            }
            else {
                __result92__ = __result_obj__ = default_value;
                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result92__;
            }
        }
        __result93__ = __result_obj__ = default_value;
        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result93__;
        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional158=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional158) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional159=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional159) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional160=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional160) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional164;
unsigned int hash_111;
unsigned int it_112;
_Bool _while_condtional18;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool same_key_exist_113;
char* it2_114;
_Bool _if_conditional180;
_Bool _if_conditional181;
struct map$2charphsClassph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_111, 0, sizeof(unsigned int));
memset(&it_112, 0, sizeof(unsigned int));
memset(&same_key_exist_113, 0, sizeof(_Bool));
memset(&it2_114, 0, sizeof(char*));
            if(_if_conditional164=self->len*10>=self->size,            _if_conditional164) {
                map$2charphsClassph_rehash(self);
            }
            hash_111=string_get_hash_key(key)%self->size;
            it_112=hash_111;
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                if(_if_conditional172=self->item_existance[it_112],                _if_conditional172) {
                    if(_if_conditional173=string_equals(self->keys[it_112],key),                    _if_conditional173) {
                        if(_if_conditional174=1,                        _if_conditional174) {
                            list$1charp_remove(self->key_list,self->keys[it_112]);
                            self->keys[it_112] = come_decrement_ref_count2(self->keys[it_112], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_112]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_112]);
                            self->keys[it_112]=key;
                        }
                        if(_if_conditional175=1,                        _if_conditional175) {
                            come_call_finalizer2(sClass_finalize,self->items[it_112], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_112]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_112]=item;
                        }
                        break;
                    }
                    it_112++;
                    if(_if_conditional176=it_112>=self->size,                    _if_conditional176) {
                        it_112=0;
                    }
                    else {
                        if(_if_conditional177=it_112==hash_111,                        _if_conditional177) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_112]=(_Bool)1;
                    if(_if_conditional178=1,                    _if_conditional178) {
                        self->keys[it_112]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_112]=key;
                    }
                    if(_if_conditional179=1,                    _if_conditional179) {
                        self->items[it_112]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_112]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_113=(_Bool)0;
            for(            it2_114=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_114=list$1charp_next(self->key_list)            ){
                if(_if_conditional180=string_equals(it2_114,key),                _if_conditional180) {
                    puts("SAME KEY");
                    same_key_exist_113=(_Bool)1;
                }
            }
            if(_if_conditional181=!same_key_exist_113,            _if_conditional181) {
                list$1charp_push_back(self->key_list,key);
            }
            __result101__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result101__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_96;
void* right_value105;
char** keys_97;
void* right_value106;
struct sClass** items_98;
void* right_value107;
_Bool* item_existance_99;
int len_100;
char* it_103;
struct sClass* default_value_106;
struct sClass* it2_107;
unsigned int hash_108;
int n_109;
_Bool _while_condtional17;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
struct sClass* default_value_110;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_96, 0, sizeof(int));
right_value105 = (void*)0;
memset(&keys_97, 0, sizeof(char**));
right_value106 = (void*)0;
memset(&items_98, 0, sizeof(struct sClass**));
right_value107 = (void*)0;
memset(&item_existance_99, 0, sizeof(_Bool*));
memset(&len_100, 0, sizeof(int));
memset(&it_103, 0, sizeof(char*));
memset(&default_value_106, 0, sizeof(struct sClass*));
memset(&it2_107, 0, sizeof(struct sClass*));
memset(&hash_108, 0, sizeof(unsigned int));
memset(&n_109, 0, sizeof(int));
memset(&default_value_110, 0, sizeof(struct sClass*));
                    size_96=self->size*10;
                    keys_97=(char**)come_increment_ref_count(((char**)(right_value105=(char**)come_calloc(1, sizeof(char*)*(1*(size_96)), "./comelang2.h", 1335, "char*%"))));
                    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_98=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value106=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_96)), "./comelang2.h", 1336, "sClass*%"))));
                    come_call_finalizer2(sClass_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_99=(_Bool*)come_increment_ref_count(((_Bool*)(right_value107=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_96)), "./comelang2.h", 1337, "bool"))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_100=0;
                    for(                    it_103=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_103=map$2charphsClassph_next(self)                    ){
                        memset(&default_value_106,0,sizeof(struct sClass*));
                        it2_107=map$2charphsClassph_at(self,it_103,default_value_106);
                        hash_108=string_get_hash_key(it_103)%size_96;
                        n_109=hash_108;
                        while(_while_condtional17=(_Bool)1,                        _while_condtional17) {
                            if(_if_conditional169=item_existance_99[n_109],                            _if_conditional169) {
                                n_109++;
                                if(_if_conditional170=n_109>=size_96,                                _if_conditional170) {
                                    n_109=0;
                                }
                                else {
                                    if(_if_conditional171=n_109==hash_108,                                    _if_conditional171) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_99[n_109]=(_Bool)1;
                                keys_97[n_109]=it_103;
                                items_98[n_109]=map$2charphsClassph_at(self,it_103,default_value_110);
                                len_100++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_97;
                    self->items=items_98;
                    self->item_existance=item_existance_99;
                    self->size=size_96;
                    self->len=len_100;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional165;
char* result_101;
char* __result94__;
_Bool _if_conditional166;
char* __result95__;
char* result_102;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_101, 0, sizeof(char*));
memset(&result_102, 0, sizeof(char*));
                        if(_if_conditional165=self==((void*)0),                        _if_conditional165) {
                            memset(&result_101,0,sizeof(char*));
                            __result94__ = __result_obj__ = result_101;
                            return __result94__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result95__ = __result_obj__ = self->key_list->it->item;
                            return __result95__;
                        }
                        memset(&result_102,0,sizeof(char*));
                        __result96__ = __result_obj__ = result_102;
                        return __result96__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result97__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result97__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional167;
char* result_104;
char* __result98__;
_Bool _if_conditional168;
char* __result99__;
char* result_105;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_104, 0, sizeof(char*));
memset(&result_105, 0, sizeof(char*));
                        if(_if_conditional167=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional167) {
                            memset(&result_104,0,sizeof(char*));
                            __result98__ = __result_obj__ = result_104;
                            return __result98__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result99__ = __result_obj__ = self->key_list->it->item;
                            return __result99__;
                        }
                        memset(&result_105,0,sizeof(char*));
                        __result100__ = __result_obj__ = result_105;
                        return __result100__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional182;
struct sClass* __result102__;
void* right_value109;
struct sClass* result_115;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value110;
char* __dec_obj38;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value120;
struct list$1tuple2$2charphsTypephph* __dec_obj44;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value121;
char* __dec_obj45;
_Bool _if_conditional205;
struct sClass* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
memset(&result_115, 0, sizeof(struct sClass*));
right_value110 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
            if(_if_conditional182=self==(void*)0,            _if_conditional182) {
                __result102__ = __result_obj__ = (void*)0;
                return __result102__;
            }
            result_115=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value109=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer2(sClass_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional183=self!=((void*)0),            _if_conditional183) {
                result_115->mStruct=self->mStruct;
            }
            if(_if_conditional184=self!=((void*)0),            _if_conditional184) {
                result_115->mFloat=self->mFloat;
            }
            if(_if_conditional185=self!=((void*)0),            _if_conditional185) {
                result_115->mUnion=self->mUnion;
            }
            if(_if_conditional186=self!=((void*)0),            _if_conditional186) {
                result_115->mGenerics=self->mGenerics;
            }
            if(_if_conditional187=self!=((void*)0),            _if_conditional187) {
                result_115->mMethodGenerics=self->mMethodGenerics;
            }
            if(_if_conditional188=self!=((void*)0),            _if_conditional188) {
                result_115->mEnum=self->mEnum;
            }
            if(_if_conditional189=self!=((void*)0),            _if_conditional189) {
                result_115->mProtocol=self->mProtocol;
            }
            if(_if_conditional190=self!=((void*)0),            _if_conditional190) {
                result_115->mNumber=self->mNumber;
            }
            if(_if_conditional191=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional191) {
                __dec_obj38=result_115->mName;
                result_115->mName=(char*)come_increment_ref_count(((char*)(right_value110=string_clone(self->mName))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional192=self!=((void*)0),            _if_conditional192) {
                result_115->mGenericsNum=self->mGenericsNum;
            }
            if(_if_conditional193=self!=((void*)0),            _if_conditional193) {
                result_115->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            if(_if_conditional194=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional194) {
                __dec_obj44=result_115->mFields;
                result_115->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value120=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional203=self!=((void*)0),            _if_conditional203) {
                result_115->mOutputed=self->mOutputed;
            }
            if(_if_conditional204=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional204) {
                __dec_obj45=result_115->mDeclareSName;
                result_115->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value121=string_clone(self->mDeclareSName))));
                __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional205=self!=((void*)0),            _if_conditional205) {
                result_115->mNobodyStruct=self->mNobodyStruct;
            }
            __result109__ = __result_obj__ = result_115;
            come_call_finalizer2(sClass_finalize,result_115, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result109__;
            come_call_finalizer2(sClass_finalize,result_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional195;
struct list$1tuple2$2charphsTypephph* __result103__;
void* right_value111;
void* right_value112;
struct list$1tuple2$2charphsTypephph* result_116;
struct list_item$1tuple2$2charphsTypephph* it_117;
_Bool _while_condtional19;
void* right_value119;
struct list$1tuple2$2charphsTypephph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&result_116, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_117, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value119 = (void*)0;
                    if(_if_conditional195=self==((void*)0),                    _if_conditional195) {
                        __result103__ = __result_obj__ = ((void*)0);
                        return __result103__;
                    }
                    result_116=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value112=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value111=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_117=self->head;
                    while(_while_condtional19=it_117!=((void*)0),                    _while_condtional19) {
                        list$1tuple2$2charphsTypephph_add(result_116,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value119=tuple2$2charphsTypephp_clone(it_117->item)))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_117=it_117->next;
                    }
                    __result108__ = __result_obj__ = result_116;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_116, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result108__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result104__ = __result_obj__ = self;
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result104__;
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional196;
void* right_value113;
struct list_item$1tuple2$2charphsTypephph* litem_118;
struct tuple2$2charphsTypeph* __dec_obj39;
_Bool _if_conditional199;
void* right_value114;
struct list_item$1tuple2$2charphsTypephph* litem_119;
struct tuple2$2charphsTypeph* __dec_obj40;
void* right_value115;
struct list_item$1tuple2$2charphsTypephph* litem_120;
struct tuple2$2charphsTypeph* __dec_obj41;
struct list$1tuple2$2charphsTypephph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
memset(&litem_118, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value114 = (void*)0;
memset(&litem_119, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value115 = (void*)0;
memset(&litem_120, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional196=self->len==0,                            _if_conditional196) {
                                litem_118=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value113=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_118->prev=((void*)0);
                                litem_118->next=((void*)0);
                                __dec_obj39=litem_118->item;
                                litem_118->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_118;
                                self->head=litem_118;
                            }
                            else {
                                if(_if_conditional199=self->len==1,                                _if_conditional199) {
                                    litem_119=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value114=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_119->prev=self->head;
                                    litem_119->next=((void*)0);
                                    __dec_obj40=litem_119->item;
                                    litem_119->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_119;
                                    self->head->next=litem_119;
                                }
                                else {
                                    litem_120=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value115=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_120->prev=self->tail;
                                    litem_120->next=((void*)0);
                                    __dec_obj41=litem_120->item;
                                    litem_120->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_120;
                                    self->tail=litem_120;
                                }
                            }
                            self->len++;
                            __result105__ = __result_obj__ = self;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result105__;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional197;
_Bool _if_conditional198;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional197=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional197) {
                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional198=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional198) {
                                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional200;
struct tuple2$2charphsTypeph* __result106__;
void* right_value116;
struct tuple2$2charphsTypeph* result_121;
_Bool _if_conditional201;
void* right_value117;
char* __dec_obj42;
_Bool _if_conditional202;
void* right_value118;
struct sType* __dec_obj43;
struct tuple2$2charphsTypeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&result_121, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value117 = (void*)0;
right_value118 = (void*)0;
                            if(_if_conditional200=self==(void*)0,                            _if_conditional200) {
                                __result106__ = __result_obj__ = (void*)0;
                                return __result106__;
                            }
                            result_121=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value116=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional201=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional201) {
                                __dec_obj42=result_121->v1;
                                result_121->v1=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(self->v1))));
                                __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional202=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional202) {
                                __dec_obj43=result_121->v2;
                                result_121->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(self->v2))));
                                come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                            __result107__ = __result_obj__ = result_121;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result107__;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_123;
_Bool _while_condtional20;
struct list_item$1tuple2$2charphsTypephph* prev_it_124;
struct list$1tuple2$2charphsTypephph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_123, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_124, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_123=self->head;
        while(_while_condtional20=it_123!=((void*)0),        _while_condtional20) {
            prev_it_124=it_123;
            it_123=it_123->next;
            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result110__ = __result_obj__ = self;
        return __result110__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional206;
_Bool _if_conditional207;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional206=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional206) {
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional207=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional207) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional210;
void* right_value127;
struct list_item$1tuple2$2charphsTypephph* litem_128;
struct tuple2$2charphsTypeph* __dec_obj47;
_Bool _if_conditional211;
void* right_value128;
struct list_item$1tuple2$2charphsTypephph* litem_129;
struct tuple2$2charphsTypeph* __dec_obj48;
void* right_value129;
struct list_item$1tuple2$2charphsTypephph* litem_130;
struct tuple2$2charphsTypeph* __dec_obj49;
struct list$1tuple2$2charphsTypephph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value128 = (void*)0;
memset(&litem_129, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value129 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                if(_if_conditional210=self->len==0,                _if_conditional210) {
                    litem_128=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value127=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_128->prev=((void*)0);
                    litem_128->next=((void*)0);
                    __dec_obj47=litem_128->item;
                    litem_128->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_128;
                    self->head=litem_128;
                }
                else {
                    if(_if_conditional211=self->len==1,                    _if_conditional211) {
                        litem_129=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value128=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_129->prev=self->head;
                        litem_129->next=((void*)0);
                        __dec_obj48=litem_129->item;
                        litem_129->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_129;
                        self->head->next=litem_129;
                    }
                    else {
                        litem_130=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value129=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_130->prev=self->tail;
                        litem_130->next=((void*)0);
                        __dec_obj49=litem_130->item;
                        litem_130->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_130;
                        self->tail=litem_130;
                    }
                }
                self->len++;
                __result111__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result111__;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj50;
struct sType* __dec_obj51;
struct tuple2$2charphsTypeph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj50=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj51=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __result112__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result112__;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional220;
char* source_head_132;
void* right_value138;
char* type_name_133;
_Bool output_134;
_Bool _if_conditional221;
void* right_value139;
void* right_value140;
void* right_value141;
void* right_value142;
void* right_value143;
void* right_value144;
void* right_value145;
void* right_value146;
void* right_value147;
void* right_value148;
void* right_value149;
struct sType* type_135;
_Bool _while_condtional22;
void* right_value150;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type2_136;
char* name_137;
_Bool err_138;
_Bool _if_conditional222;
void* right_value151;
void* right_value152;
_Bool _if_conditional223;
char* source_tail_139;
void* right_value153;
void* right_value154;
struct buffer* header_140;
void* right_value155;
void* right_value156;
void* right_value157;
struct sNode* _inf_value2;
struct sUnionNode* _inf_obj_value2;
void* right_value161;
struct sNode* __result118__;
void* right_value162;
struct sNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_132, 0, sizeof(char*));
right_value138 = (void*)0;
memset(&type_name_133, 0, sizeof(char*));
memset(&output_134, 0, sizeof(_Bool));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&type_135, 0, sizeof(struct sType*));
right_value150 = (void*)0;
memset(&type2_136, 0, sizeof(struct sType*));
memset(&name_137, 0, sizeof(char*));
memset(&err_138, 0, sizeof(_Bool));
memset(&type2_136, 0, sizeof(struct sType*));
memset(&name_137, 0, sizeof(char*));
memset(&err_138, 0, sizeof(_Bool));
right_value151 = (void*)0;
right_value152 = (void*)0;
memset(&source_tail_139, 0, sizeof(char*));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&header_140, 0, sizeof(struct buffer*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
    if(_if_conditional220=charp_operator_equals(buf,"union"),    _if_conditional220) {
        source_head_132=info->p;
        type_name_133=(char*)come_increment_ref_count(((char*)(right_value138=parse_word(info))));
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        output_134=(_Bool)1;
        if(_if_conditional221=map$2charphsClassph_at(info->classes,type_name_133,((void*)0))==((void*)0),        _if_conditional221) {
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_133),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value141=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value139=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "15union.c", 134, "sClass")))),((char*)(right_value140=__builtin_string(type_name_133))),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
            come_call_finalizer2(sClass_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        else {
            output_134=(_Bool)0;
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_133),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value144=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value142=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "15union.c", 138, "sClass")))),((char*)(right_value143=__builtin_string(type_name_133))),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
            come_call_finalizer2(sClass_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_133),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value147=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value145=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "15union.c", 141, "sClass")))),((char*)(right_value146=__builtin_string(type_name_133))),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        come_call_finalizer2(sClass_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value148=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "15union.c", 143, "sType")))),type_name_133,(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        expected_next_character(123,info);
        list$1tuple2$2charphsTypephph_reset(type_135->mClass->mFields);
        while(_while_condtional22=(_Bool)1,        _while_condtional22) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value150=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_136=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name_137=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_138=multiple_assign_var3->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional222=!err_138,            _if_conditional222) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            expected_next_character(59,info);
            list$1tuple2$2charphsTypephph_push_back(type_135->mClass->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value152=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value151=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "15union.c", 157, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_137),(struct sType*)come_increment_ref_count(type2_136))))));
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional223=*info->p==125,            _if_conditional223) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer2(sType_finalize,type2_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_137 = come_decrement_ref_count2(name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer2(sType_finalize,type2_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_137 = come_decrement_ref_count2(name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        source_tail_139=info->p;
        header_140=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value154=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value153=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "15union.c", 168, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_140,"union ");
        buffer_append(header_140,source_head_132,source_tail_139-source_head_132);
        add_come_code_at_come_header(info,"%s;\n",((char*)(right_value155=buffer_to_string(header_140))));
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "15union.c", 174, "struct sNode");
        _inf_obj_value2=come_increment_ref_count(((struct sUnionNode*)(right_value157=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value156=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "15union.c", 174, "sUnionNode")))),(struct sType*)come_increment_ref_count(type_135),output_134,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sUnionNode_finalize;
        _inf_value2->clone=(void*)sUnionNode_clone;
        _inf_value2->compile=(void*)sUnionNode_compile;
        _inf_value2->sline=(void*)sUnionNode_sline;
        _inf_value2->sname=(void*)sUnionNode_sname;
        _inf_value2->terminated=(void*)sUnionNode_terminated;
        _inf_value2->kind=(void*)sUnionNode_kind;
        __result118__ = __result_obj__ = ((struct sNode*)(right_value161=_inf_value2));
        type_name_133 = come_decrement_ref_count2(type_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sUnionNode_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sUnionNode_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value161) { right_value161 = come_decrement_ref_count2(right_value161, ((struct sNode*)right_value161)->finalize, ((struct sNode*)right_value161)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result118__;
        type_name_133 = come_decrement_ref_count2(type_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result119__ = __result_obj__ = ((struct sNode*)(right_value162=top_level_v96(buf,head,head_sline,info)));
    if(right_value162) { right_value162 = come_decrement_ref_count2(right_value162, ((struct sNode*)right_value162)->finalize, ((struct sNode*)right_value162)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result119__;
}

static void sUnionNode_finalize(struct sUnionNode* self){
void* __result_obj__;
_Bool _if_conditional224;
_Bool _if_conditional225;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional224=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional224) {
                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional225=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional225) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self){
void* __result_obj__;
_Bool _if_conditional226;
struct sUnionNode* __result116__;
void* right_value158;
struct sUnionNode* result_141;
_Bool _if_conditional227;
void* right_value159;
struct sType* __dec_obj54;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value160;
char* __dec_obj55;
_Bool _if_conditional230;
struct sUnionNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
memset(&result_141, 0, sizeof(struct sUnionNode*));
right_value159 = (void*)0;
right_value160 = (void*)0;
            if(_if_conditional226=self==(void*)0,            _if_conditional226) {
                __result116__ = __result_obj__ = (void*)0;
                return __result116__;
            }
            result_141=(struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value158=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "sUnionNode_clone", 3, "sUnionNode"))));
            come_call_finalizer2(sUnionNode_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional227=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional227) {
                __dec_obj54=result_141->mType;
                result_141->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(self->mType))));
                come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional228=self!=((void*)0),            _if_conditional228) {
                result_141->sline=self->sline;
            }
            if(_if_conditional229=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional229) {
                __dec_obj55=result_141->sname;
                result_141->sname=(char*)come_increment_ref_count(((char*)(right_value160=string_clone(self->sname))));
                __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional230=self!=((void*)0),            _if_conditional230) {
                result_141->mOutput=self->mOutput;
            }
            __result117__ = __result_obj__ = result_141;
            come_call_finalizer2(sUnionNode_finalize,result_141, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result117__;
            come_call_finalizer2(sUnionNode_finalize,result_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool define_struct_142;
char* p_143;
int sline_144;
_Bool _if_conditional231;
void* right_value163;
char* type_name_145;
_Bool _if_conditional232;
void* right_value164;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value165;
char* type_name_146;
void* right_value166;
struct sNode* __result120__;
void* right_value167;
struct sNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&define_struct_142, 0, sizeof(_Bool));
memset(&p_143, 0, sizeof(char*));
memset(&sline_144, 0, sizeof(int));
right_value163 = (void*)0;
memset(&type_name_145, 0, sizeof(char*));
right_value164 = (void*)0;
right_value165 = (void*)0;
memset(&type_name_146, 0, sizeof(char*));
right_value166 = (void*)0;
right_value167 = (void*)0;
    define_struct_142=(_Bool)0;
    {
        p_143=info->p;
        sline_144=info->sline;
        if(_if_conditional231=charp_operator_equals(buf,"union"),        _if_conditional231) {
            type_name_145=(char*)come_increment_ref_count(((char*)(right_value163=parse_word(info))));
            right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional232=*info->p==123,            _if_conditional232) {
                ((char*)(right_value164=skip_block(info)));
                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional233=*info->p==59,                _if_conditional233) {
                    define_struct_142=(_Bool)1;
                }
            }
            type_name_145 = come_decrement_ref_count2(type_name_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_143;
        info->sline=sline_144;
    }
    if(define_struct_142) {
        type_name_146=(char*)come_increment_ref_count(((char*)(right_value165=parse_word(info))));
        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __result120__ = __result_obj__ = ((struct sNode*)(right_value166=parse_union((char*)come_increment_ref_count(type_name_146),info)));
        type_name_146 = come_decrement_ref_count2(type_name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_value166) { right_value166 = come_decrement_ref_count2(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result120__;
        type_name_146 = come_decrement_ref_count2(type_name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result121__ = __result_obj__ = ((struct sNode*)(right_value167=string_node_v14(buf,head,head_sline,info)));
    if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result121__;
}

