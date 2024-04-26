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
struct sWhileNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mBlock;
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

struct sWhileNode* sWhileNode_initialize(struct sWhileNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool sWhileNode_terminated();

char* sWhileNode_kind();

_Bool sWhileNode_compile(struct sWhileNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
int sWhileNode_sline(struct sWhileNode* self, struct sInfo* info);

char* sWhileNode_sname(struct sWhileNode* self, struct sInfo* info);

struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

static void sWhileNode_finalize(struct sWhileNode* self);
static struct sWhileNode* sWhileNode_clone(struct sWhileNode* self);
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










struct sWhileNode* sWhileNode_initialize(struct sWhileNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
void* right_value51;
struct sNode* __dec_obj13;
void* right_value78;
struct sBlock* __dec_obj22;
struct sWhileNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value51 = (void*)0;
right_value78 = (void*)0;
    # 15 "09while.c"
    self->sline=info->sline;
    # 16 "09while.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 18 "09while.c"
    __dec_obj13=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value51=sNode_clone(expression_node))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count2(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value51) { right_value51 = come_decrement_ref_count2(right_value51, ((struct sNode*)right_value51)->finalize, ((struct sNode*)right_value51)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 19 "09while.c"
    __dec_obj22=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value78=sBlock_clone(block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 21 "09while.c"
    __result72__ = __result_obj__ = self;
    come_call_finalizer2(sWhileNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result72__;
    come_call_finalizer2(sWhileNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional7;
struct sNode* __result34__;
void* right_value50;
struct sNode* result_11;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
struct sNode* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
memset(&result_11, 0, sizeof(struct sNode*));
        # 3 "sNode_clone"
        # 2 "sNode_clone"
        if(_if_conditional7=self==(void*)0,        _if_conditional7) {
            # 2 "sNode_clone"
            __result34__ = __result_obj__ = (void*)0;
            return __result34__;
        }
        # 3 "sNode_clone"
        result_11=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value50=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
        if(right_value50) { right_value50 = come_decrement_ref_count2(right_value50, ((struct sNode*)right_value50)->finalize, ((struct sNode*)right_value50)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 5 "sNode_clone"
        # 4 "sNode_clone"
        if(_if_conditional8=self!=((void*)0)&&self->clone!=((void*)0),        _if_conditional8) {
            # 4 "sNode_clone"
            result_11->_protocol_obj=self->clone(self->_protocol_obj);
        }
        # 6 "sNode_clone"
        # 5 "sNode_clone"
        if(_if_conditional9=self!=((void*)0),        _if_conditional9) {
            # 5 "sNode_clone"
            result_11->finalize=self->finalize;
        }
        # 7 "sNode_clone"
        # 6 "sNode_clone"
        if(_if_conditional10=self!=((void*)0),        _if_conditional10) {
            # 6 "sNode_clone"
            result_11->clone=self->clone;
        }
        # 8 "sNode_clone"
        # 7 "sNode_clone"
        if(_if_conditional11=self!=((void*)0),        _if_conditional11) {
            # 7 "sNode_clone"
            result_11->compile=self->compile;
        }
        # 9 "sNode_clone"
        # 8 "sNode_clone"
        if(_if_conditional12=self!=((void*)0),        _if_conditional12) {
            # 8 "sNode_clone"
            result_11->sline=self->sline;
        }
        # 10 "sNode_clone"
        # 9 "sNode_clone"
        if(_if_conditional13=self!=((void*)0),        _if_conditional13) {
            # 9 "sNode_clone"
            result_11->sname=self->sname;
        }
        # 11 "sNode_clone"
        # 10 "sNode_clone"
        if(_if_conditional14=self!=((void*)0),        _if_conditional14) {
            # 10 "sNode_clone"
            result_11->terminated=self->terminated;
        }
        # 12 "sNode_clone"
        # 11 "sNode_clone"
        if(_if_conditional15=self!=((void*)0),        _if_conditional15) {
            # 11 "sNode_clone"
            result_11->kind=self->kind;
        }
        # 12 "sNode_clone"
        __result35__ = __result_obj__ = result_11;
        if(result_11) { result_11 = come_decrement_ref_count2(result_11, ((struct sNode*)result_11)->finalize, ((struct sNode*)result_11)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result35__;
        if(result_11) { result_11 = come_decrement_ref_count2(result_11, ((struct sNode*)result_11)->finalize, ((struct sNode*)result_11)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional16;
struct sBlock* __result36__;
void* right_value52;
struct sBlock* result_12;
_Bool _if_conditional20;
void* right_value59;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional24;
void* right_value77;
struct sVarTable* __dec_obj21;
struct sBlock* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&result_12, 0, sizeof(struct sBlock*));
right_value59 = (void*)0;
right_value77 = (void*)0;
        # 3 "sBlock_clone"
        # 2 "sBlock_clone"
        if(_if_conditional16=self==(void*)0,        _if_conditional16) {
            # 2 "sBlock_clone"
            __result36__ = __result_obj__ = (void*)0;
            return __result36__;
        }
        # 3 "sBlock_clone"
        result_12=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value52=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sBlock_clone"
        # 4 "sBlock_clone"
        if(_if_conditional20=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional20) {
            # 4 "sBlock_clone"
            __dec_obj17=result_12->mNodes;
            result_12->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value59=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sBlock_clone"
        # 5 "sBlock_clone"
        if(_if_conditional24=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional24) {
            # 5 "sBlock_clone"
            __dec_obj21=result_12->mVarTable;
            result_12->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value77=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sBlock_clone"
        __result71__ = __result_obj__ = result_12;
        come_call_finalizer2(sBlock_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result71__;
        come_call_finalizer2(sBlock_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional17;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sBlock_finalize"
            # 0 "sBlock_finalize"
            if(_if_conditional17=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional17) {
                # 0 "sBlock_finalize"
                come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sBlock_finalize"
            # 1 "sBlock_finalize"
            if(_if_conditional19=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional19) {
                # 1 "sBlock_finalize"
                come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_13;
_Bool _while_condtional1;
struct list_item$1sNodeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_13, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sNodeph*));
                    # 123 "./comelang2.h"
                    it_13=self->head;
                    # 129 "./comelang2.h"
                    while(_while_condtional1=it_13!=((void*)0),                    _while_condtional1) {
                        # 125 "./comelang2.h"
                        prev_it_14=it_13;
                        # 126 "./comelang2.h"
                        it_13=it_13->next;
                        # 127 "./comelang2.h"
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional18) {
                                # 0 "list_item$1sNodephp_finalize"
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional21;
struct list$1sNodeph* __result37__;
void* right_value53;
void* right_value54;
struct list$1sNodeph* result_15;
struct list_item$1sNodeph* it_16;
_Bool _while_condtional2;
void* right_value58;
struct list$1sNodeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&result_15, 0, sizeof(struct list$1sNodeph*));
memset(&it_16, 0, sizeof(struct list_item$1sNodeph*));
right_value58 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional21=self==((void*)0),                _if_conditional21) {
                    # 140 "./comelang2.h"
                    __result37__ = __result_obj__ = ((void*)0);
                    return __result37__;
                }
                # 142 "./comelang2.h"
                result_15=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value54=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value53=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_16=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional2=it_16!=((void*)0),                _while_condtional2) {
                    # 146 "./comelang2.h"
                    list$1sNodeph_add(result_15,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value58=sNode_clone(it_16->item)))));
                    if(right_value58) { right_value58 = come_decrement_ref_count2(right_value58, ((struct sNode*)right_value58)->finalize, ((struct sNode*)right_value58)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 148 "./comelang2.h"
                    it_16=it_16->next;
                }
                # 151 "./comelang2.h"
                __result40__ = __result_obj__ = result_15;
                come_call_finalizer2(list$1sNodephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(list$1sNodephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result38__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result38__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional22;
void* right_value55;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj14;
_Bool _if_conditional23;
void* right_value56;
struct list_item$1sNodeph* litem_18;
struct sNode* __dec_obj15;
void* right_value57;
struct list_item$1sNodeph* litem_19;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*));
right_value56 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1sNodeph*));
right_value57 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional22=self->len==0,                        _if_conditional22) {
                            # 156 "./comelang2.h"
                            litem_17=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value55=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_17->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_17->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj14=litem_17->item;
                            litem_17->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0, (void*)0); }
                            # 162 "./comelang2.h"
                            self->tail=litem_17;
                            # 163 "./comelang2.h"
                            self->head=litem_17;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional23=self->len==1,                            _if_conditional23) {
                                # 166 "./comelang2.h"
                                litem_18=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value56=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_18->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_18->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj15=litem_18->item;
                                litem_18->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                                # 172 "./comelang2.h"
                                self->tail=litem_18;
                                # 173 "./comelang2.h"
                                self->head->next=litem_18;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_19=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value57=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_19->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_19->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj16=litem_19->item;
                                litem_19->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                # 182 "./comelang2.h"
                                self->tail->next=litem_19;
                                # 183 "./comelang2.h"
                                self->tail=litem_19;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
                        __result39__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result39__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional25;
struct sVarTable* __result41__;
void* right_value60;
struct sVarTable* result_20;
_Bool _if_conditional26;
void* right_value76;
struct map$2charphsVarph* __dec_obj20;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
struct sVarTable* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
memset(&result_20, 0, sizeof(struct sVarTable*));
right_value76 = (void*)0;
                # 3 "sVarTable_clone"
                # 2 "sVarTable_clone"
                if(_if_conditional25=self==(void*)0,                _if_conditional25) {
                    # 2 "sVarTable_clone"
                    __result41__ = __result_obj__ = (void*)0;
                    return __result41__;
                }
                # 3 "sVarTable_clone"
                result_20=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value60=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sVarTable_clone"
                # 4 "sVarTable_clone"
                if(_if_conditional26=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional26) {
                    # 4 "sVarTable_clone"
                    __dec_obj20=result_20->mVars;
                    result_20->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value76=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 6 "sVarTable_clone"
                # 5 "sVarTable_clone"
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    # 5 "sVarTable_clone"
                    result_20->mGlobal=self->mGlobal;
                }
                # 7 "sVarTable_clone"
                # 6 "sVarTable_clone"
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    # 6 "sVarTable_clone"
                    result_20->mParent=self->mParent;
                }
                # 8 "sVarTable_clone"
                # 7 "sVarTable_clone"
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    # 7 "sVarTable_clone"
                    result_20->mID=self->mID;
                }
                # 8 "sVarTable_clone"
                __result70__ = __result_obj__ = result_20;
                come_call_finalizer2(sVarTable_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result70__;
                come_call_finalizer2(sVarTable_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional27;
struct map$2charphsVarph* __result42__;
void* right_value61;
void* right_value67;
struct map$2charphsVarph* result_30;
void* right_value68;
void* right_value69;
struct list$1charp* __dec_obj19;
char* it_33;
struct sVar* default_value_36;
struct sVar* it2_39;
struct map$2charphsVarph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value67 = (void*)0;
memset(&result_30, 0, sizeof(struct map$2charphsVarph*));
right_value68 = (void*)0;
right_value69 = (void*)0;
memset(&it_33, 0, sizeof(char*));
memset(&default_value_36, 0, sizeof(struct sVar*));
memset(&it2_39, 0, sizeof(struct sVar*));
                        # 1181 "./comelang2.h"
                        # 1177 "./comelang2.h"
                        if(_if_conditional27=self==((void*)0),                        _if_conditional27) {
                            # 1178 "./comelang2.h"
                            __result42__ = __result_obj__ = ((void*)0);
                            return __result42__;
                        }
                        # 1181 "./comelang2.h"
                        result_30=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value67=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value61=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1181, "map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1183 "./comelang2.h"
                        __dec_obj19=result_30->key_list;
                        result_30->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value69=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value68=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1183, "list$1charp"))))))));
                        come_call_finalizer2(list$1charp_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charpp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charpp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1194 "./comelang2.h"
                        for(                        it_33=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_33=map$2charphsVarph_next(self)                        ){
                            # 1186 "./comelang2.h"
                            # 1187 "./comelang2.h"
                            memset(&default_value_36,0,sizeof(struct sVar*));
                            # 1189 "./comelang2.h"
                            it2_39=map$2charphsVarph_at(self,it_33,default_value_36);
                            # 1191 "./comelang2.h"
                            map$2charphsVarph_insert2(result_30,it_33,it2_39);
                        }
                        # 1194 "./comelang2.h"
                        __result69__ = __result_obj__ = result_30;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result69__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value62;
void* right_value63;
void* right_value64;
int i_25;
void* right_value65;
void* right_value66;
struct list$1charp* __dec_obj18;
struct map$2charphsVarph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&i_25, 0, sizeof(int));
right_value65 = (void*)0;
right_value66 = (void*)0;
                            # 1087 "./comelang2.h"
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value62=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1087, "char*%"))));
                            right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1088 "./comelang2.h"
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value63=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1088, "sVar*%"))));
                            come_call_finalizer2(sVar_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1089 "./comelang2.h"
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value64=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1089, "bool"))));
                            right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1096 "./comelang2.h"
                            for(                            i_25=0;                            i_25<1024;                            i_25++                            ){
                                # 1093 "./comelang2.h"
                                self->item_existance[i_25]=(_Bool)0;
                            }
                            # 1096 "./comelang2.h"
                            self->size=1024;
                            # 1097 "./comelang2.h"
                            self->len=0;
                            # 1099 "./comelang2.h"
                            __dec_obj18=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value66=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value65=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1099, "list$1charp"))))))));
                            come_call_finalizer2(list$1charp_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charpp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charpp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1101 "./comelang2.h"
                            self->it=0;
                            # 1103 "./comelang2.h"
                            __result44__ = __result_obj__ = self;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result44__;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sVar_finalize"
                                # 0 "sVar_finalize"
                                if(_if_conditional28=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional28) {
                                    # 0 "sVar_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sVar_finalize"
                                # 1 "sVar_finalize"
                                if(_if_conditional29=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional29) {
                                    # 1 "sVar_finalize"
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sVar_finalize"
                                # 2 "sVar_finalize"
                                if(_if_conditional30=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional30) {
                                    # 2 "sVar_finalize"
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sVar_finalize"
                                # 3 "sVar_finalize"
                                if(_if_conditional47=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional47) {
                                    # 3 "sVar_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sType_finalize"
                                        # 0 "sType_finalize"
                                        if(_if_conditional31=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                        _if_conditional31) {
                                            # 0 "sType_finalize"
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sType_finalize"
                                        # 1 "sType_finalize"
                                        if(_if_conditional33=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional33) {
                                            # 1 "sType_finalize"
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 3 "sType_finalize"
                                        # 2 "sType_finalize"
                                        if(_if_conditional35=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional35) {
                                            # 2 "sType_finalize"
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 4 "sType_finalize"
                                        # 3 "sType_finalize"
                                        if(_if_conditional36=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional36) {
                                            # 3 "sType_finalize"
                                            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 5 "sType_finalize"
                                        # 4 "sType_finalize"
                                        if(_if_conditional37=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional37) {
                                            # 4 "sType_finalize"
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 6 "sType_finalize"
                                        # 5 "sType_finalize"
                                        if(_if_conditional38=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional38) {
                                            # 5 "sType_finalize"
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 7 "sType_finalize"
                                        # 6 "sType_finalize"
                                        if(_if_conditional39=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional39) {
                                            # 6 "sType_finalize"
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 8 "sType_finalize"
                                        # 7 "sType_finalize"
                                        if(_if_conditional40=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional40) {
                                            # 7 "sType_finalize"
                                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 9 "sType_finalize"
                                        # 8 "sType_finalize"
                                        if(_if_conditional42=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional42) {
                                            # 8 "sType_finalize"
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 10 "sType_finalize"
                                        # 9 "sType_finalize"
                                        if(_if_conditional43=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional43) {
                                            # 9 "sType_finalize"
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 11 "sType_finalize"
                                        # 10 "sType_finalize"
                                        if(_if_conditional44=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional44) {
                                            # 10 "sType_finalize"
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 12 "sType_finalize"
                                        # 11 "sType_finalize"
                                        if(_if_conditional45=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional45) {
                                            # 11 "sType_finalize"
                                            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 13 "sType_finalize"
                                        # 12 "sType_finalize"
                                        if(_if_conditional46=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional46) {
                                            # 12 "sType_finalize"
                                            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_21;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_21, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_22, 0, sizeof(struct list_item$1sTypeph*));
                                                # 123 "./comelang2.h"
                                                it_21=self->head;
                                                # 129 "./comelang2.h"
                                                while(_while_condtional3=it_21!=((void*)0),                                                _while_condtional3) {
                                                    # 125 "./comelang2.h"
                                                    prev_it_22=it_21;
                                                    # 126 "./comelang2.h"
                                                    it_21=it_21->next;
                                                    # 127 "./comelang2.h"
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1sTypephp_finalize"
                                                        # 0 "list_item$1sTypephp_finalize"
                                                        if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional32) {
                                                            # 0 "list_item$1sTypephp_finalize"
                                                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple1$1sTypephp_finalize"
                                                # 0 "tuple1$1sTypephp_finalize"
                                                if(_if_conditional34=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional34) {
                                                    # 0 "tuple1$1sTypephp_finalize"
                                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_23;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_23, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_24, 0, sizeof(struct list_item$1charph*));
                                                # 123 "./comelang2.h"
                                                it_23=self->head;
                                                # 129 "./comelang2.h"
                                                while(_while_condtional4=it_23!=((void*)0),                                                _while_condtional4) {
                                                    # 125 "./comelang2.h"
                                                    prev_it_24=it_23;
                                                    # 126 "./comelang2.h"
                                                    it_23=it_23->next;
                                                    # 127 "./comelang2.h"
                                                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1charphp_finalize"
                                                        # 0 "list_item$1charphp_finalize"
                                                        if(_if_conditional41=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional41) {
                                                            # 0 "list_item$1charphp_finalize"
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 104 "./comelang2.h"
                                self->head=((void*)0);
                                # 105 "./comelang2.h"
                                self->tail=((void*)0);
                                # 106 "./comelang2.h"
                                self->len=0;
                                # 108 "./comelang2.h"
                                __result43__ = __result_obj__ = self;
                                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result43__;
                                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_26;
_Bool _while_condtional5;
struct list_item$1charp* prev_it_27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_26, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_27, 0, sizeof(struct list_item$1charp*));
                                    # 123 "./comelang2.h"
                                    it_26=self->head;
                                    # 129 "./comelang2.h"
                                    while(_while_condtional5=it_26!=((void*)0),                                    _while_condtional5) {
                                        # 125 "./comelang2.h"
                                        prev_it_27=it_26;
                                        # 126 "./comelang2.h"
                                        it_26=it_26->next;
                                        # 127 "./comelang2.h"
                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_28;
_Bool _if_conditional48;
_Bool _if_conditional49;
int i_29;
_Bool _if_conditional50;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_28, 0, sizeof(int));
memset(&i_29, 0, sizeof(int));
                                # 1137 "./comelang2.h"
                                for(                                i_28=0;                                i_28<self->size;                                i_28++                                ){
                                    # 1136 "./comelang2.h"
                                    # 1131 "./comelang2.h"
                                    if(_if_conditional48=self->item_existance[i_28],                                    _if_conditional48) {
                                        # 1135 "./comelang2.h"
                                        # 1132 "./comelang2.h"
                                        if(_if_conditional49=1,                                        _if_conditional49) {
                                            # 1133 "./comelang2.h"
                                            come_call_finalizer2(sVar_finalize,self->items[i_28], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                # 1137 "./comelang2.h"
                                come_free((char*)self->items);
                                # 1146 "./comelang2.h"
                                for(                                i_29=0;                                i_29<self->size;                                i_29++                                ){
                                    # 1145 "./comelang2.h"
                                    # 1140 "./comelang2.h"
                                    if(_if_conditional50=self->item_existance[i_29],                                    _if_conditional50) {
                                        # 1144 "./comelang2.h"
                                        # 1141 "./comelang2.h"
                                        if(_if_conditional51=1,                                        _if_conditional51) {
                                            # 1142 "./comelang2.h"
                                            self->keys[i_29] = come_decrement_ref_count2(self->keys[i_29], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional52;
char* result_31;
char* __result45__;
_Bool _if_conditional53;
char* __result46__;
char* result_32;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_31, 0, sizeof(char*));
memset(&result_32, 0, sizeof(char*));
                            # 1304 "./comelang2.h"
                            # 1299 "./comelang2.h"
                            if(_if_conditional52=self==((void*)0),                            _if_conditional52) {
                                # 1300 "./comelang2.h"
                                # 1301 "./comelang2.h"
                                memset(&result_31,0,sizeof(char*));
                                # 1302 "./comelang2.h"
                                __result45__ = __result_obj__ = result_31;
                                return __result45__;
                            }
                            # 1304 "./comelang2.h"
                            self->key_list->it=self->key_list->head;
                            # 1310 "./comelang2.h"
                            # 1306 "./comelang2.h"
                            if(self->key_list->it) {
                                # 1307 "./comelang2.h"
                                __result46__ = __result_obj__ = self->key_list->it->item;
                                return __result46__;
                            }
                            # 1310 "./comelang2.h"
                            # 1311 "./comelang2.h"
                            memset(&result_32,0,sizeof(char*));
                            # 1312 "./comelang2.h"
                            __result47__ = __result_obj__ = result_32;
                            return __result47__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1333 "./comelang2.h"
                            __result48__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result48__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional54;
char* result_34;
char* __result49__;
_Bool _if_conditional55;
char* __result50__;
char* result_35;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_34, 0, sizeof(char*));
memset(&result_35, 0, sizeof(char*));
                            # 1321 "./comelang2.h"
                            # 1316 "./comelang2.h"
                            if(_if_conditional54=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional54) {
                                # 1317 "./comelang2.h"
                                # 1318 "./comelang2.h"
                                memset(&result_34,0,sizeof(char*));
                                # 1319 "./comelang2.h"
                                __result49__ = __result_obj__ = result_34;
                                return __result49__;
                            }
                            # 1321 "./comelang2.h"
                            self->key_list->it=self->key_list->it->next;
                            # 1327 "./comelang2.h"
                            # 1323 "./comelang2.h"
                            if(self->key_list->it) {
                                # 1324 "./comelang2.h"
                                __result50__ = __result_obj__ = self->key_list->it->item;
                                return __result50__;
                            }
                            # 1327 "./comelang2.h"
                            # 1328 "./comelang2.h"
                            memset(&result_35,0,sizeof(char*));
                            # 1329 "./comelang2.h"
                            __result51__ = __result_obj__ = result_35;
                            return __result51__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional6;
_Bool _if_conditional56;
_Bool _if_conditional57;
struct sVar* __result52__;
_Bool _if_conditional58;
_Bool _if_conditional59;
struct sVar* __result53__;
struct sVar* __result54__;
struct sVar* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
                                # 1226 "./comelang2.h"
                                hash_37=string_get_hash_key(((char*)key))%self->size;
                                # 1227 "./comelang2.h"
                                it_38=hash_37;
                                # 1251 "./comelang2.h"
                                while(_while_condtional6=(_Bool)1,                                _while_condtional6) {
                                    # 1249 "./comelang2.h"
                                    # 1230 "./comelang2.h"
                                    if(_if_conditional56=self->item_existance[it_38],                                    _if_conditional56) {
                                        # 1237 "./comelang2.h"
                                        # 1232 "./comelang2.h"
                                        if(_if_conditional57=string_equals(self->keys[it_38],key),                                        _if_conditional57) {
                                            # 1234 "./comelang2.h"
                                            __result52__ = __result_obj__ = self->items[it_38];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result52__;
                                        }
                                        # 1237 "./comelang2.h"
                                        it_38++;
                                        # 1245 "./comelang2.h"
                                        # 1239 "./comelang2.h"
                                        if(_if_conditional58=it_38>=self->size,                                        _if_conditional58) {
                                            # 1240 "./comelang2.h"
                                            it_38=0;
                                        }
                                        else {
                                            # 1245 "./comelang2.h"
                                            # 1242 "./comelang2.h"
                                            if(_if_conditional59=it_38==hash_37,                                            _if_conditional59) {
                                                # 1243 "./comelang2.h"
                                                __result53__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result53__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1247 "./comelang2.h"
                                        __result54__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result54__;
                                    }
                                }
                                # 1251 "./comelang2.h"
                                __result55__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result55__;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional60;
unsigned int hash_51;
int it_52;
_Bool _while_condtional8;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool same_key_exist_69;
char* it2_72;
_Bool _if_conditional95;
_Bool _if_conditional96;
struct map$2charphsVarph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_51, 0, sizeof(unsigned int));
memset(&it_52, 0, sizeof(int));
memset(&same_key_exist_69, 0, sizeof(_Bool));
memset(&it2_72, 0, sizeof(char*));
                                # 1471 "./comelang2.h"
                                # 1468 "./comelang2.h"
                                if(_if_conditional60=self->len*2>=self->size,                                _if_conditional60) {
                                    # 1469 "./comelang2.h"
                                    map$2charphsVarph_rehash(self);
                                }
                                # 1471 "./comelang2.h"
                                hash_51=string_get_hash_key(key)%self->size;
                                # 1472 "./comelang2.h"
                                it_52=hash_51;
                                # 1530 "./comelang2.h"
                                while(_while_condtional8=(_Bool)1,                                _while_condtional8) {
                                    # 1528 "./comelang2.h"
                                    # 1475 "./comelang2.h"
                                    if(_if_conditional64=self->item_existance[it_52],                                    _if_conditional64) {
                                        # 1498 "./comelang2.h"
                                        # 1477 "./comelang2.h"
                                        if(_if_conditional65=string_equals(self->keys[it_52],key),                                        _if_conditional65) {
                                            # 1488 "./comelang2.h"
                                            # 1479 "./comelang2.h"
                                            if(_if_conditional66=1,                                            _if_conditional66) {
                                                # 1480 "./comelang2.h"
                                                self->keys[it_52] = come_decrement_ref_count2(self->keys[it_52], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                # 1481 "./comelang2.h"
                                                list$1charp_remove(self->key_list,self->keys[it_52]);
                                                # 1482 "./comelang2.h"
                                                self->keys[it_52]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                # 1485 "./comelang2.h"
                                                list$1charp_remove(self->key_list,self->keys[it_52]);
                                                # 1486 "./comelang2.h"
                                                self->keys[it_52]=key;
                                            }
                                            # 1495 "./comelang2.h"
                                            # 1488 "./comelang2.h"
                                            if(_if_conditional86=1,                                            _if_conditional86) {
                                                # 1489 "./comelang2.h"
                                                come_call_finalizer2(sVar_finalize,self->items[it_52], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                # 1490 "./comelang2.h"
                                                self->items[it_52]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                # 1493 "./comelang2.h"
                                                self->items[it_52]=item;
                                            }
                                            # 1495 "./comelang2.h"
                                            break;
                                        }
                                        # 1498 "./comelang2.h"
                                        it_52++;
                                        # 1508 "./comelang2.h"
                                        # 1500 "./comelang2.h"
                                        if(_if_conditional87=it_52>=self->size,                                        _if_conditional87) {
                                            # 1501 "./comelang2.h"
                                            it_52=0;
                                        }
                                        else {
                                            # 1508 "./comelang2.h"
                                            # 1503 "./comelang2.h"
                                            if(_if_conditional88=it_52==hash_51,                                            _if_conditional88) {
                                                # 1504 "./comelang2.h"
                                                printf("unexpected error in map.insert\n");
                                                # 1505 "./comelang2.h"
                                                stackframe();
                                                # 1506 "./comelang2.h"
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        # 1510 "./comelang2.h"
                                        self->item_existance[it_52]=(_Bool)1;
                                        # 1517 "./comelang2.h"
                                        # 1511 "./comelang2.h"
                                        if(_if_conditional89=1,                                        _if_conditional89) {
                                            # 1512 "./comelang2.h"
                                            self->keys[it_52]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            # 1515 "./comelang2.h"
                                            self->keys[it_52]=key;
                                        }
                                        # 1524 "./comelang2.h"
                                        # 1517 "./comelang2.h"
                                        if(_if_conditional90=1,                                        _if_conditional90) {
                                            # 1518 "./comelang2.h"
                                            self->items[it_52]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            # 1521 "./comelang2.h"
                                            self->items[it_52]=item;
                                        }
                                        # 1524 "./comelang2.h"
                                        self->len++;
                                        # 1526 "./comelang2.h"
                                        break;
                                    }
                                }
                                # 1530 "./comelang2.h"
                                same_key_exist_69=(_Bool)0;
                                # 1538 "./comelang2.h"
                                for(                                it2_72=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_72=list$1charp_next(self->key_list)                                ){
                                    # 1536 "./comelang2.h"
                                    # 1533 "./comelang2.h"
                                    if(_if_conditional95=string_equals(it2_72,key),                                    _if_conditional95) {
                                        # 1534 "./comelang2.h"
                                        same_key_exist_69=(_Bool)1;
                                    }
                                }
                                # 1542 "./comelang2.h"
                                # 1538 "./comelang2.h"
                                if(_if_conditional96=!same_key_exist_69,                                _if_conditional96) {
                                    # 1539 "./comelang2.h"
                                    list$1charp_push_back(self->key_list,key);
                                }
                                # 1542 "./comelang2.h"
                                __result68__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result68__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_40;
void* right_value70;
char** keys_41;
void* right_value71;
struct sVar** items_42;
void* right_value72;
_Bool* item_existance_43;
int len_44;
char* it_45;
struct sVar* default_value_46;
struct sVar* it2_47;
unsigned int hash_48;
int n_49;
_Bool _while_condtional7;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
struct sVar* default_value_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_40, 0, sizeof(int));
right_value70 = (void*)0;
memset(&keys_41, 0, sizeof(char**));
right_value71 = (void*)0;
memset(&items_42, 0, sizeof(struct sVar**));
right_value72 = (void*)0;
memset(&item_existance_43, 0, sizeof(_Bool*));
memset(&len_44, 0, sizeof(int));
memset(&it_45, 0, sizeof(char*));
memset(&default_value_46, 0, sizeof(struct sVar*));
memset(&it2_47, 0, sizeof(struct sVar*));
memset(&hash_48, 0, sizeof(unsigned int));
memset(&n_49, 0, sizeof(int));
memset(&default_value_50, 0, sizeof(struct sVar*));
                                        # 1337 "./comelang2.h"
                                        size_40=self->size*10;
                                        # 1338 "./comelang2.h"
                                        keys_41=(char**)come_increment_ref_count(((char**)(right_value70=(char**)come_calloc(1, sizeof(char*)*(1*(size_40)), "./comelang2.h", 1338, "char*%"))));
                                        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1339 "./comelang2.h"
                                        items_42=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value71=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_40)), "./comelang2.h", 1339, "sVar*%"))));
                                        come_call_finalizer2(sVar_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 1340 "./comelang2.h"
                                        item_existance_43=(_Bool*)come_increment_ref_count(((_Bool*)(right_value72=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_40)), "./comelang2.h", 1340, "bool"))));
                                        right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1342 "./comelang2.h"
                                        len_44=0;
                                        # 1377 "./comelang2.h"
                                        for(                                        it_45=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_45=map$2charphsVarph_next(self)                                        ){
                                            # 1345 "./comelang2.h"
                                            # 1346 "./comelang2.h"
                                            memset(&default_value_46,0,sizeof(struct sVar*));
                                            # 1347 "./comelang2.h"
                                            it2_47=map$2charphsVarph_at(self,it_45,default_value_46);
                                            # 1348 "./comelang2.h"
                                            hash_48=string_get_hash_key(it_45)%size_40;
                                            # 1349 "./comelang2.h"
                                            n_49=hash_48;
                                            # 1375 "./comelang2.h"
                                            while(_while_condtional7=(_Bool)1,                                            _while_condtional7) {
                                                # 1374 "./comelang2.h"
                                                # 1352 "./comelang2.h"
                                                if(_if_conditional61=item_existance_43[n_49],                                                _if_conditional61) {
                                                    # 1354 "./comelang2.h"
                                                    n_49++;
                                                    # 1364 "./comelang2.h"
                                                    # 1356 "./comelang2.h"
                                                    if(_if_conditional62=n_49>=size_40,                                                    _if_conditional62) {
                                                        # 1357 "./comelang2.h"
                                                        n_49=0;
                                                    }
                                                    else {
                                                        # 1364 "./comelang2.h"
                                                        # 1359 "./comelang2.h"
                                                        if(_if_conditional63=n_49==hash_48,                                                        _if_conditional63) {
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
                                                    item_existance_43[n_49]=(_Bool)1;
                                                    # 1367 "./comelang2.h"
                                                    keys_41[n_49]=it_45;
                                                    # 1368 "./comelang2.h"
                                                    # 1369 "./comelang2.h"
                                                    items_42[n_49]=map$2charphsVarph_at(self,it_45,default_value_50);
                                                    # 1371 "./comelang2.h"
                                                    len_44++;
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
                                        self->keys=keys_41;
                                        # 1382 "./comelang2.h"
                                        self->items=items_42;
                                        # 1383 "./comelang2.h"
                                        self->item_existance=item_existance_43;
                                        # 1385 "./comelang2.h"
                                        self->size=size_40;
                                        # 1386 "./comelang2.h"
                                        self->len=len_44;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_53;
struct list_item$1charp* it_54;
_Bool _while_condtional9;
_Bool _if_conditional67;
struct list$1charp* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_53, 0, sizeof(int));
memset(&it_54, 0, sizeof(struct list_item$1charp*));
                                                    # 448 "./comelang2.h"
                                                    it2_53=0;
                                                    # 449 "./comelang2.h"
                                                    it_54=self->head;
                                                    # 460 "./comelang2.h"
                                                    while(_while_condtional9=it_54!=((void*)0),                                                    _while_condtional9) {
                                                        # 455 "./comelang2.h"
                                                        # 451 "./comelang2.h"
                                                        if(_if_conditional67=string_equals(it_54->item,item),                                                        _if_conditional67) {
                                                            # 452 "./comelang2.h"
                                                            list$1charp_delete(self,it2_53,it2_53+1);
                                                            # 453 "./comelang2.h"
                                                            break;
                                                        }
                                                        # 455 "./comelang2.h"
                                                        it2_53++;
                                                        # 457 "./comelang2.h"
                                                        it_54=it_54->next;
                                                    }
                                                    # 460 "./comelang2.h"
                                                    __result59__ = __result_obj__ = self;
                                                    return __result59__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
int tmp_55;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct list$1charp* __result56__;
_Bool _if_conditional74;
_Bool _if_conditional75;
struct list_item$1charp* it_58;
int i_59;
_Bool _while_condtional11;
_Bool _if_conditional76;
struct list_item$1charp* prev_it_60;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct list_item$1charp* it_61;
int i_62;
_Bool _while_condtional12;
_Bool _if_conditional79;
_Bool _if_conditional80;
struct list_item$1charp* prev_it_63;
struct list_item$1charp* it_64;
struct list_item$1charp* head_prev_it_65;
struct list_item$1charp* tail_it_66;
int i_67;
_Bool _while_condtional13;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct list_item$1charp* prev_it_68;
_Bool _if_conditional84;
_Bool _if_conditional85;
struct list$1charp* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_55, 0, sizeof(int));
memset(&it_58, 0, sizeof(struct list_item$1charp*));
memset(&i_59, 0, sizeof(int));
memset(&prev_it_60, 0, sizeof(struct list_item$1charp*));
memset(&it_61, 0, sizeof(struct list_item$1charp*));
memset(&i_62, 0, sizeof(int));
memset(&prev_it_63, 0, sizeof(struct list_item$1charp*));
memset(&it_64, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_65, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_66, 0, sizeof(struct list_item$1charp*));
memset(&i_67, 0, sizeof(int));
memset(&prev_it_68, 0, sizeof(struct list_item$1charp*));
                                                                # 467 "./comelang2.h"
                                                                # 464 "./comelang2.h"
                                                                if(_if_conditional68=head<0,                                                                _if_conditional68) {
                                                                    # 465 "./comelang2.h"
                                                                    head+=self->len;
                                                                }
                                                                # 471 "./comelang2.h"
                                                                # 467 "./comelang2.h"
                                                                if(_if_conditional69=tail<0,                                                                _if_conditional69) {
                                                                    # 468 "./comelang2.h"
                                                                    tail+=self->len+1;
                                                                }
                                                                # 477 "./comelang2.h"
                                                                # 471 "./comelang2.h"
                                                                if(_if_conditional70=head>tail,                                                                _if_conditional70) {
                                                                    # 472 "./comelang2.h"
                                                                    tmp_55=tail;
                                                                    # 473 "./comelang2.h"
                                                                    tail=head;
                                                                    # 474 "./comelang2.h"
                                                                    head=tmp_55;
                                                                }
                                                                # 481 "./comelang2.h"
                                                                # 477 "./comelang2.h"
                                                                if(_if_conditional71=head<0,                                                                _if_conditional71) {
                                                                    # 478 "./comelang2.h"
                                                                    head=0;
                                                                }
                                                                # 485 "./comelang2.h"
                                                                # 481 "./comelang2.h"
                                                                if(_if_conditional72=tail>self->len,                                                                _if_conditional72) {
                                                                    # 482 "./comelang2.h"
                                                                    tail=self->len;
                                                                }
                                                                # 489 "./comelang2.h"
                                                                # 485 "./comelang2.h"
                                                                if(_if_conditional73=head==tail,                                                                _if_conditional73) {
                                                                    # 486 "./comelang2.h"
                                                                    __result56__ = __result_obj__ = self;
                                                                    return __result56__;
                                                                }
                                                                # 584 "./comelang2.h"
                                                                # 489 "./comelang2.h"
                                                                if(_if_conditional74=head==0&&tail==self->len,                                                                _if_conditional74) {
                                                                    # 491 "./comelang2.h"
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    # 584 "./comelang2.h"
                                                                    # 493 "./comelang2.h"
                                                                    if(_if_conditional75=head==0,                                                                    _if_conditional75) {
                                                                        # 494 "./comelang2.h"
                                                                        it_58=self->head;
                                                                        # 495 "./comelang2.h"
                                                                        i_59=0;
                                                                        # 517 "./comelang2.h"
                                                                        while(_while_condtional11=it_58!=((void*)0),                                                                        _while_condtional11) {
                                                                            # 516 "./comelang2.h"
                                                                            # 497 "./comelang2.h"
                                                                            if(_if_conditional76=i_59<tail,                                                                            _if_conditional76) {
                                                                                # 498 "./comelang2.h"
                                                                                prev_it_60=it_58;
                                                                                # 500 "./comelang2.h"
                                                                                it_58=it_58->next;
                                                                                # 501 "./comelang2.h"
                                                                                i_59++;
                                                                                # 503 "./comelang2.h"
                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                # 505 "./comelang2.h"
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                # 516 "./comelang2.h"
                                                                                # 507 "./comelang2.h"
                                                                                if(_if_conditional77=i_59==tail,                                                                                _if_conditional77) {
                                                                                    # 508 "./comelang2.h"
                                                                                    self->head=it_58;
                                                                                    # 509 "./comelang2.h"
                                                                                    self->head->prev=((void*)0);
                                                                                    # 510 "./comelang2.h"
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    # 513 "./comelang2.h"
                                                                                    it_58=it_58->next;
                                                                                    # 514 "./comelang2.h"
                                                                                    i_59++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 584 "./comelang2.h"
                                                                        # 518 "./comelang2.h"
                                                                        if(_if_conditional78=tail==self->len,                                                                        _if_conditional78) {
                                                                            # 519 "./comelang2.h"
                                                                            it_61=self->head;
                                                                            # 520 "./comelang2.h"
                                                                            i_62=0;
                                                                            # 542 "./comelang2.h"
                                                                            while(_while_condtional12=it_61!=((void*)0),                                                                            _while_condtional12) {
                                                                                # 527 "./comelang2.h"
                                                                                # 522 "./comelang2.h"
                                                                                if(_if_conditional79=i_62==head,                                                                                _if_conditional79) {
                                                                                    # 523 "./comelang2.h"
                                                                                    self->tail=it_61->prev;
                                                                                    # 524 "./comelang2.h"
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                # 541 "./comelang2.h"
                                                                                # 527 "./comelang2.h"
                                                                                if(_if_conditional80=i_62>=head,                                                                                _if_conditional80) {
                                                                                    # 528 "./comelang2.h"
                                                                                    prev_it_63=it_61;
                                                                                    # 530 "./comelang2.h"
                                                                                    it_61=it_61->next;
                                                                                    # 531 "./comelang2.h"
                                                                                    i_62++;
                                                                                    # 533 "./comelang2.h"
                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    # 535 "./comelang2.h"
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    # 538 "./comelang2.h"
                                                                                    it_61=it_61->next;
                                                                                    # 539 "./comelang2.h"
                                                                                    i_62++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 544 "./comelang2.h"
                                                                            it_64=self->head;
                                                                            # 546 "./comelang2.h"
                                                                            head_prev_it_65=((void*)0);
                                                                            # 547 "./comelang2.h"
                                                                            tail_it_66=((void*)0);
                                                                            # 550 "./comelang2.h"
                                                                            i_67=0;
                                                                            # 576 "./comelang2.h"
                                                                            while(_while_condtional13=it_64!=((void*)0),                                                                            _while_condtional13) {
                                                                                # 555 "./comelang2.h"
                                                                                # 552 "./comelang2.h"
                                                                                if(_if_conditional81=i_67==head,                                                                                _if_conditional81) {
                                                                                    # 553 "./comelang2.h"
                                                                                    head_prev_it_65=it_64->prev;
                                                                                }
                                                                                # 559 "./comelang2.h"
                                                                                # 555 "./comelang2.h"
                                                                                if(_if_conditional82=i_67==tail,                                                                                _if_conditional82) {
                                                                                    # 556 "./comelang2.h"
                                                                                    tail_it_66=it_64;
                                                                                }
                                                                                # 574 "./comelang2.h"
                                                                                # 559 "./comelang2.h"
                                                                                if(_if_conditional83=i_67>=head&&i_67<tail,                                                                                _if_conditional83) {
                                                                                    # 561 "./comelang2.h"
                                                                                    prev_it_68=it_64;
                                                                                    # 563 "./comelang2.h"
                                                                                    it_64=it_64->next;
                                                                                    # 564 "./comelang2.h"
                                                                                    i_67++;
                                                                                    # 566 "./comelang2.h"
                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    # 568 "./comelang2.h"
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    # 571 "./comelang2.h"
                                                                                    it_64=it_64->next;
                                                                                    # 572 "./comelang2.h"
                                                                                    i_67++;
                                                                                }
                                                                            }
                                                                            # 579 "./comelang2.h"
                                                                            # 576 "./comelang2.h"
                                                                            if(_if_conditional84=head_prev_it_65!=((void*)0),                                                                            _if_conditional84) {
                                                                                # 577 "./comelang2.h"
                                                                                head_prev_it_65->next=tail_it_66;
                                                                            }
                                                                            # 582 "./comelang2.h"
                                                                            # 579 "./comelang2.h"
                                                                            if(_if_conditional85=tail_it_66!=((void*)0),                                                                            _if_conditional85) {
                                                                                # 580 "./comelang2.h"
                                                                                tail_it_66->prev=head_prev_it_65;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                # 584 "./comelang2.h"
                                                                __result58__ = __result_obj__ = self;
                                                                return __result58__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_56;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_57;
struct list$1charp* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_56, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_57, 0, sizeof(struct list_item$1charp*));
                                                                        # 433 "./comelang2.h"
                                                                        it_56=self->head;
                                                                        # 440 "./comelang2.h"
                                                                        while(_while_condtional10=it_56!=((void*)0),                                                                        _while_condtional10) {
                                                                            # 435 "./comelang2.h"
                                                                            prev_it_57=it_56;
                                                                            # 436 "./comelang2.h"
                                                                            it_56=it_56->next;
                                                                            # 437 "./comelang2.h"
                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 440 "./comelang2.h"
                                                                        self->head=((void*)0);
                                                                        # 441 "./comelang2.h"
                                                                        self->tail=((void*)0);
                                                                        # 443 "./comelang2.h"
                                                                        self->len=0;
                                                                        # 445 "./comelang2.h"
                                                                        __result57__ = __result_obj__ = self;
                                                                        return __result57__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional91;
char* result_70;
char* __result60__;
_Bool _if_conditional92;
char* __result61__;
char* result_71;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_70, 0, sizeof(char*));
memset(&result_71, 0, sizeof(char*));
                                    # 290 "./comelang2.h"
                                    # 285 "./comelang2.h"
                                    if(_if_conditional91=self==((void*)0),                                    _if_conditional91) {
                                        # 286 "./comelang2.h"
                                        # 287 "./comelang2.h"
                                        memset(&result_70,0,sizeof(char*));
                                        # 288 "./comelang2.h"
                                        __result60__ = __result_obj__ = result_70;
                                        return __result60__;
                                    }
                                    # 290 "./comelang2.h"
                                    self->it=self->head;
                                    # 296 "./comelang2.h"
                                    # 292 "./comelang2.h"
                                    if(self->it) {
                                        # 293 "./comelang2.h"
                                        __result61__ = __result_obj__ = self->it->item;
                                        return __result61__;
                                    }
                                    # 296 "./comelang2.h"
                                    # 297 "./comelang2.h"
                                    memset(&result_71,0,sizeof(char*));
                                    # 298 "./comelang2.h"
                                    __result62__ = __result_obj__ = result_71;
                                    return __result62__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 320 "./comelang2.h"
                                    __result63__ = self==((void*)0)||self->it==((void*)0);
                                    return __result63__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional93;
char* result_73;
char* __result64__;
_Bool _if_conditional94;
char* __result65__;
char* result_74;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_73, 0, sizeof(char*));
memset(&result_74, 0, sizeof(char*));
                                    # 308 "./comelang2.h"
                                    # 302 "./comelang2.h"
                                    if(_if_conditional93=self==((void*)0)||self->it==((void*)0),                                    _if_conditional93) {
                                        # 303 "./comelang2.h"
                                        # 304 "./comelang2.h"
                                        memset(&result_73,0,sizeof(char*));
                                        # 305 "./comelang2.h"
                                        __result64__ = __result_obj__ = result_73;
                                        return __result64__;
                                    }
                                    # 308 "./comelang2.h"
                                    self->it=self->it->next;
                                    # 314 "./comelang2.h"
                                    # 310 "./comelang2.h"
                                    if(self->it) {
                                        # 311 "./comelang2.h"
                                        __result65__ = __result_obj__ = self->it->item;
                                        return __result65__;
                                    }
                                    # 314 "./comelang2.h"
                                    # 315 "./comelang2.h"
                                    memset(&result_74,0,sizeof(char*));
                                    # 316 "./comelang2.h"
                                    __result66__ = __result_obj__ = result_74;
                                    return __result66__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional97;
void* right_value73;
struct list_item$1charp* litem_75;
_Bool _if_conditional98;
void* right_value74;
struct list_item$1charp* litem_76;
void* right_value75;
struct list_item$1charp* litem_77;
struct list$1charp* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charp*));
right_value74 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1charp*));
right_value75 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1charp*));
                                        # 256 "./comelang2.h"
                                        # 225 "./comelang2.h"
                                        if(_if_conditional97=self->len==0,                                        _if_conditional97) {
                                            # 226 "./comelang2.h"
                                            litem_75=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value73=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                                            come_call_finalizer2(list_item$1charpp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 228 "./comelang2.h"
                                            litem_75->prev=((void*)0);
                                            # 229 "./comelang2.h"
                                            litem_75->next=((void*)0);
                                            # 230 "./comelang2.h"
                                            litem_75->item=item;
                                            # 232 "./comelang2.h"
                                            self->tail=litem_75;
                                            # 233 "./comelang2.h"
                                            self->head=litem_75;
                                        }
                                        else {
                                            # 256 "./comelang2.h"
                                            # 235 "./comelang2.h"
                                            if(_if_conditional98=self->len==1,                                            _if_conditional98) {
                                                # 236 "./comelang2.h"
                                                litem_76=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value74=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                                                come_call_finalizer2(list_item$1charpp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                # 238 "./comelang2.h"
                                                litem_76->prev=self->head;
                                                # 239 "./comelang2.h"
                                                litem_76->next=((void*)0);
                                                # 240 "./comelang2.h"
                                                litem_76->item=item;
                                                # 242 "./comelang2.h"
                                                self->tail=litem_76;
                                                # 243 "./comelang2.h"
                                                self->head->next=litem_76;
                                            }
                                            else {
                                                # 246 "./comelang2.h"
                                                litem_77=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value75=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                                                come_call_finalizer2(list_item$1charpp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                # 248 "./comelang2.h"
                                                litem_77->prev=self->tail;
                                                # 249 "./comelang2.h"
                                                litem_77->next=((void*)0);
                                                # 250 "./comelang2.h"
                                                litem_77->item=item;
                                                # 252 "./comelang2.h"
                                                self->tail->next=litem_77;
                                                # 253 "./comelang2.h"
                                                self->tail=litem_77;
                                            }
                                        }
                                        # 256 "./comelang2.h"
                                        self->len++;
                                        # 258 "./comelang2.h"
                                        __result67__ = __result_obj__ = self;
                                        return __result67__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional99;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "map$2charphsVarph_finalize"
                        # 0 "map$2charphsVarph_finalize"
                        if(_if_conditional99=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional99) {
                            # 0 "map$2charphsVarph_finalize"
                            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

_Bool sWhileNode_terminated(){
void* __result_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    # 26 "09while.c"
    __result73__ = (_Bool)1;
    return __result73__;
}

char* sWhileNode_kind(){
void* __result_obj__;
void* right_value79;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    # 31 "09while.c"
    __result74__ = __result_obj__ = ((char*)(right_value79=__builtin_string("sWhileNode")));
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}

_Bool sWhileNode_compile(struct sWhileNode* self, struct sInfo* info){
void* __result_obj__;
_Bool in_loop_78;
struct sNode* expression_node_79;
_Bool _if_conditional106;
_Bool __result75__;
struct sBlock* block_80;
_Bool normal_if_81;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value80;
struct CVALUE* conditional_value_82;
void* right_value81;
struct CVALUE* conditional_value_83;
static int num_while_condtional_84=0;
int num_while_conditional_stack_85;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&in_loop_78, 0, sizeof(_Bool));
memset(&expression_node_79, 0, sizeof(struct sNode*));
memset(&block_80, 0, sizeof(struct sBlock*));
memset(&normal_if_81, 0, sizeof(_Bool));
right_value80 = (void*)0;
memset(&conditional_value_82, 0, sizeof(struct CVALUE*));
right_value81 = (void*)0;
memset(&conditional_value_83, 0, sizeof(struct CVALUE*));
memset(&num_while_conditional_stack_85, 0, sizeof(int));
    # 36 "09while.c"
    in_loop_78=info->in_loop;
    # 37 "09while.c"
    info->in_loop=(_Bool)1;
    # 40 "09while.c"
    expression_node_79=self->mExpressionNode;
    # 42 "09while.c"
    info->without_semicolon=(_Bool)1;
    # 46 "09while.c"
    # 43 "09while.c"
    if(_if_conditional106=!node_compile(expression_node_79,info),    _if_conditional106) {
        # 44 "09while.c"
        __result75__ = (_Bool)0;
        return __result75__;
    }
    # 46 "09while.c"
    info->without_semicolon=(_Bool)0;
    # 48 "09while.c"
    block_80=self->mBlock;
    # 50 "09while.c"
    normal_if_81=(_Bool)1;
    # 54 "09while.c"
    # 51 "09while.c"
    if(_if_conditional107=info->module->mLastCode||info->module->mLastCode2||info->module->mLastCode3,    _if_conditional107) {
        # 52 "09while.c"
        normal_if_81=(_Bool)0;
    }
    # 58 "09while.c"
    # 54 "09while.c"
    if(_if_conditional108=existance_free_right_value_objects(info),    _if_conditional108) {
        # 55 "09while.c"
        normal_if_81=(_Bool)0;
    }
    # 77 "09while.c"
    # 58 "09while.c"
    if(normal_if_81) {
        # 59 "09while.c"
        conditional_value_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value80=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 60 "09while.c"
        dec_stack_ptr(1,info);
        # 61 "09while.c"
        add_come_code(info,"while(%s) {\n",conditional_value_82->c_value);
        come_call_finalizer2(CVALUE_finalize,conditional_value_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 64 "09while.c"
        conditional_value_83=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value81=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 65 "09while.c"
        dec_stack_ptr(1,info);
        # 66 "09while.c"
        # 67 "09while.c"
        add_come_code_at_function_head(info,"_Bool _while_condtional%d;\n",++num_while_condtional_84);
        # 68 "09while.c"
        num_while_conditional_stack_85=num_while_condtional_84;
        # 70 "09while.c"
        add_come_code(info,"while(_while_condtional%d=%s,",num_while_condtional_84,conditional_value_83->c_value);
        # 71 "09while.c"
        add_last_code_to_source_with_comma(info);
        # 73 "09while.c"
        free_right_value_objects(info,(_Bool)1);
        # 74 "09while.c"
        add_come_code(info,"_while_condtional%d) {\n",num_while_conditional_stack_85);
        come_call_finalizer2(CVALUE_finalize,conditional_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 77 "09while.c"
    transpile_block(block_80,((void*)0),((void*)0),info,(_Bool)0,(_Bool)1);
    # 79 "09while.c"
    add_come_code(info,"}\n");
    # 81 "09while.c"
    transpiler_clear_last_code(info);
    # 83 "09while.c"
    info->in_loop=in_loop_78;
    # 85 "09while.c"
    __result76__ = (_Bool)1;
    return __result76__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional110;
_Bool _if_conditional111;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional110=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional110) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional111=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional111) {
                # 1 "CVALUE_finalize"
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

int sWhileNode_sline(struct sWhileNode* self, struct sInfo* info){
void* __result_obj__;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    # 90 "09while.c"
    __result77__ = self->sline;
    return __result77__;
}

char* sWhileNode_sname(struct sWhileNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value82;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
    # 95 "09while.c"
    __result78__ = __result_obj__ = ((char*)(right_value82=__builtin_string(self->sname)));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional112;
void* right_value83;
char* sname_86;
int sline_87;
void* right_value84;
struct sNode* expression_node_88;
void* right_value85;
struct sBlock* block_89;
void* right_value86;
void* right_value87;
struct sNode* _inf_value1;
struct sWhileNode* _inf_obj_value1;
void* right_value92;
struct sNode* __result81__;
void* right_value93;
struct sNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&sname_86, 0, sizeof(char*));
memset(&sline_87, 0, sizeof(int));
right_value84 = (void*)0;
memset(&expression_node_88, 0, sizeof(struct sNode*));
right_value85 = (void*)0;
memset(&block_89, 0, sizeof(struct sBlock*));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
    # 116 "09while.c"
    # 100 "09while.c"
    if(_if_conditional112=charp_operator_equals(buf,"while"),    _if_conditional112) {
        # 101 "09while.c"
        sname_86=(char*)come_increment_ref_count(((char*)(right_value83=string_clone(info->sname))));
        right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 102 "09while.c"
        sline_87=info->sline;
        # 104 "09while.c"
        expected_next_character(40,info);
        # 107 "09while.c"
        expression_node_88=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=expression_v13(info))));
        if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 109 "09while.c"
        expected_next_character(41,info);
        # 111 "09while.c"
        block_89=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value85=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 113 "09while.c"
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09while.c", 113, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sWhileNode*)(right_value87=sWhileNode_initialize((struct sWhileNode*)come_increment_ref_count(((struct sWhileNode*)(right_value86=(struct sWhileNode*)come_calloc(1, sizeof(struct sWhileNode)*(1), "09while.c", 113, "sWhileNode")))),(struct sNode*)come_increment_ref_count(expression_node_88),block_89,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sWhileNode_finalize;
        _inf_value1->clone=(void*)sWhileNode_clone;
        _inf_value1->compile=(void*)sWhileNode_compile;
        _inf_value1->sline=(void*)sWhileNode_sline;
        _inf_value1->sname=(void*)sWhileNode_sname;
        _inf_value1->terminated=(void*)sWhileNode_terminated;
        _inf_value1->kind=(void*)sWhileNode_kind;
        __result81__ = __result_obj__ = ((struct sNode*)(right_value92=_inf_value1));
        sname_86 = come_decrement_ref_count2(sname_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_88) { expression_node_88 = come_decrement_ref_count2(expression_node_88, ((struct sNode*)expression_node_88)->finalize, ((struct sNode*)expression_node_88)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sBlock_finalize,block_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sWhileNode_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sWhileNode_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value92) { right_value92 = come_decrement_ref_count2(right_value92, ((struct sNode*)right_value92)->finalize, ((struct sNode*)right_value92)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result81__;
        sname_86 = come_decrement_ref_count2(sname_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_88) { expression_node_88 = come_decrement_ref_count2(expression_node_88, ((struct sNode*)expression_node_88)->finalize, ((struct sNode*)expression_node_88)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sBlock_finalize,block_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 116 "09while.c"
    __result82__ = __result_obj__ = ((struct sNode*)(right_value93=string_node_v8(buf,head,head_sline,info)));
    if(right_value93) { right_value93 = come_decrement_ref_count2(right_value93, ((struct sNode*)right_value93)->finalize, ((struct sNode*)right_value93)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result82__;
}

static void sWhileNode_finalize(struct sWhileNode* self){
void* __result_obj__;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sWhileNode_finalize"
            # 0 "sWhileNode_finalize"
            if(_if_conditional113=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional113) {
                # 0 "sWhileNode_finalize"
                if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 2 "sWhileNode_finalize"
            # 1 "sWhileNode_finalize"
            if(_if_conditional114=self!=((void*)0)&&self->mBlock!=((void*)0),            _if_conditional114) {
                # 1 "sWhileNode_finalize"
                come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sWhileNode_finalize"
            # 2 "sWhileNode_finalize"
            if(_if_conditional115=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional115) {
                # 2 "sWhileNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sWhileNode* sWhileNode_clone(struct sWhileNode* self){
void* __result_obj__;
_Bool _if_conditional116;
struct sWhileNode* __result79__;
void* right_value88;
struct sWhileNode* result_90;
_Bool _if_conditional117;
void* right_value89;
struct sNode* __dec_obj23;
_Bool _if_conditional118;
void* right_value90;
struct sBlock* __dec_obj24;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value91;
char* __dec_obj25;
struct sWhileNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_90, 0, sizeof(struct sWhileNode*));
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
            # 3 "sWhileNode_clone"
            # 2 "sWhileNode_clone"
            if(_if_conditional116=self==(void*)0,            _if_conditional116) {
                # 2 "sWhileNode_clone"
                __result79__ = __result_obj__ = (void*)0;
                return __result79__;
            }
            # 3 "sWhileNode_clone"
            result_90=(struct sWhileNode*)come_increment_ref_count(((struct sWhileNode*)(right_value88=(struct sWhileNode*)come_calloc(1, sizeof(struct sWhileNode)*(1), "sWhileNode_clone", 3, "sWhileNode"))));
            come_call_finalizer2(sWhileNode_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sWhileNode_clone"
            # 4 "sWhileNode_clone"
            if(_if_conditional117=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional117) {
                # 4 "sWhileNode_clone"
                __dec_obj23=result_90->mExpressionNode;
                result_90->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value89=sNode_clone(self->mExpressionNode))));
                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value89) { right_value89 = come_decrement_ref_count2(right_value89, ((struct sNode*)right_value89)->finalize, ((struct sNode*)right_value89)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 6 "sWhileNode_clone"
            # 5 "sWhileNode_clone"
            if(_if_conditional118=self!=((void*)0)&&self->mBlock!=((void*)0),            _if_conditional118) {
                # 5 "sWhileNode_clone"
                __dec_obj24=result_90->mBlock;
                result_90->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value90=sBlock_clone(self->mBlock))));
                come_call_finalizer2(sBlock_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sWhileNode_clone"
            # 6 "sWhileNode_clone"
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                # 6 "sWhileNode_clone"
                result_90->sline=self->sline;
            }
            # 8 "sWhileNode_clone"
            # 7 "sWhileNode_clone"
            if(_if_conditional120=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional120) {
                # 7 "sWhileNode_clone"
                __dec_obj25=result_90->sname;
                result_90->sname=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(self->sname))));
                __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 8 "sWhileNode_clone"
            __result80__ = __result_obj__ = result_90;
            come_call_finalizer2(sWhileNode_finalize,result_90, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result80__;
            come_call_finalizer2(sWhileNode_finalize,result_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

