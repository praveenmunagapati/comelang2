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










struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
char* __dec_obj12;
struct sLambdaNode* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
    self->mFun=fun;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result34__ = __result_obj__ = self;
    come_call_finalizer2(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result34__;
    come_call_finalizer2(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
int __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    __result35__ = self->sline;
    return __result35__;
}

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
    __result36__ = __result_obj__ = ((char*)(right_value49=__builtin_string(self->sname)));
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
}

_Bool sLambdaNode_terminated(){
void* __result_obj__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    __result37__ = (_Bool)0;
    return __result37__;
}

char* sLambdaNode_kind(){
void* __result_obj__;
void* right_value50;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    __result38__ = __result_obj__ = ((char*)(right_value50=__builtin_string("sLambdaNode")));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result38__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_11;
void* right_value51;
void* right_value52;
struct sType* result_type_12;
void* right_value53;
void* right_value54;
_Bool _if_conditional25;
void* right_value55;
struct CVALUE* come_value_19;
void* right_value56;
char* __dec_obj13;
void* right_value92;
struct sType* __dec_obj37;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_11, 0, sizeof(struct sFun*));
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&result_type_12, 0, sizeof(struct sType*));
right_value53 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
memset(&come_value_19, 0, sizeof(struct CVALUE*));
right_value56 = (void*)0;
right_value92 = (void*)0;
    come_fun_11=info->come_fun;
    info->come_fun=self->mFun;
    result_type_12=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value51=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 43, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value53=make_define_var(result_type_12,"__result_obj__",(_Bool)0,info))));
    right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value54=make_type_name_string(result_type_12,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    come_value_19=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value55=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function2.c", 52, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=come_value_19->c_value;
    come_value_19->c_value=(char*)come_increment_ref_count(((char*)(right_value56=xsprintf("%s",self->mFun->mName))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj37=come_value_19->type;
    come_value_19->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(self->mFun->mLambdaType))));
    come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_19->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_19->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_19));
    info->come_fun=come_fun_11;
    __result58__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result58__;
    come_call_finalizer2(sType_finalize,result_type_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_13;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sTypeph*));
                it_13=self->head;
                while(_while_condtional1=it_13!=((void*)0),                _while_condtional1) {
                    prev_it_14=it_13;
                    it_13=it_13->next;
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_15;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sNodeph*));
                it_15=self->head;
                while(_while_condtional2=it_15!=((void*)0),                _while_condtional2) {
                    prev_it_16=it_15;
                    it_15=it_15->next;
                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_17;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                it_17=self->head;
                while(_while_condtional3=it_17!=((void*)0),                _while_condtional3) {
                    prev_it_18=it_17;
                    it_17=it_17->next;
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct sType* __result39__;
void* right_value57;
struct sType* result_20;
_Bool _if_conditional29;
_Bool _if_conditional30;
void* right_value64;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional34;
void* right_value67;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional38;
void* right_value68;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional39;
void* right_value69;
char* __dec_obj21;
_Bool _if_conditional40;
void* right_value70;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional41;
void* right_value78;
struct list$1sNodeph* __dec_obj26;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value79;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional56;
void* right_value86;
struct list$1charph* __dec_obj31;
_Bool _if_conditional60;
void* right_value87;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional61;
_Bool _if_conditional62;
void* right_value88;
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
void* right_value89;
struct sNode* __dec_obj34;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value90;
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
void* right_value91;
char* __dec_obj36;
_Bool _if_conditional99;
struct sType* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&result_20, 0, sizeof(struct sType*));
right_value64 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
        if(_if_conditional28=self==(void*)0,        _if_conditional28) {
            __result39__ = __result_obj__ = (void*)0;
            return __result39__;
        }
        result_20=(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional29=self!=((void*)0),        _if_conditional29) {
            result_20->mClass=self->mClass;
        }
        if(_if_conditional30=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional30) {
            __dec_obj17=result_20->mMultipleTypes;
            result_20->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value64=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional34) {
            __dec_obj19=result_20->mNoSolvedGenericsType;
            result_20->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value67=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional38=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional38) {
            __dec_obj20=result_20->mOriginalLoadVarType;
            result_20->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value68=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional39=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional39) {
            __dec_obj21=result_20->mGenericsName;
            result_20->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(self->mGenericsName))));
            __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional40=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional40) {
            __dec_obj22=result_20->mGenericsTypes;
            result_20->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value70=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional41=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional41) {
            __dec_obj26=result_20->mArrayNum;
            result_20->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value78=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0),        _if_conditional54) {
            result_20->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional55=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional55) {
            __dec_obj27=result_20->mParamTypes;
            result_20->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value79=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional56=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional56) {
            __dec_obj31=result_20->mParamNames;
            result_20->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value86=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional60=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional60) {
            __dec_obj32=result_20->mResultType;
            result_20->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value87=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_20->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional62=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional62) {
            __dec_obj33=result_20->mAlignas;
            result_20->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value88=sNode_clone(self->mAlignas))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value88) { right_value88 = come_decrement_ref_count2(right_value88, ((struct sNode*)right_value88)->finalize, ((struct sNode*)right_value88)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_20->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_20->mShort=self->mShort;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_20->mLong=self->mLong;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_20->mLongLong=self->mLongLong;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_20->mConstant=self->mConstant;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_20->mRegister=self->mRegister;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_20->mVolatile=self->mVolatile;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_20->mStatic=self->mStatic;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_20->mExtern=self->mExtern;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_20->mRestrict=self->mRestrict;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_20->mImmutable=self->mImmutable;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_20->mHeap=self->mHeap;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_20->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_20->mDelegate=self->mDelegate;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_20->mShare=self->mShare;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_20->mClone=self->mClone;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_20->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_20->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_20->mRefference=self->mRefference;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_20->mException=self->mException;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_20->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_20->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_20->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional86=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional86) {
            __dec_obj34=result_20->mSizeNum;
            result_20->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value89=sNode_clone(self->mSizeNum))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value89) { right_value89 = come_decrement_ref_count2(right_value89, ((struct sNode*)right_value89)->finalize, ((struct sNode*)right_value89)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_20->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_20->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional89=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional89) {
            __dec_obj35=result_20->mOriginalTypeName;
            result_20->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value90=string_clone(self->mOriginalTypeName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_20->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_20->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_20->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_20->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_20->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_20->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_20->mInline=self->mInline;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_20->mNullValue=self->mNullValue;
        }
        if(_if_conditional98=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional98) {
            __dec_obj36=result_20->mAsmName;
            result_20->mAsmName=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(self->mAsmName))));
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            result_20->mArrayPointerType=self->mArrayPointerType;
        }
        __result56__ = __result_obj__ = result_20;
        come_call_finalizer2(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result56__;
        come_call_finalizer2(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional31;
struct list$1sTypeph* __result40__;
void* right_value58;
void* right_value59;
struct list$1sTypeph* result_21;
struct list_item$1sTypeph* it_22;
_Bool _while_condtional4;
void* right_value63;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
right_value59 = (void*)0;
memset(&result_21, 0, sizeof(struct list$1sTypeph*));
memset(&it_22, 0, sizeof(struct list_item$1sTypeph*));
right_value63 = (void*)0;
                if(_if_conditional31=self==((void*)0),                _if_conditional31) {
                    __result40__ = __result_obj__ = ((void*)0);
                    return __result40__;
                }
                result_21=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value59=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value58=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_22=self->head;
                while(_while_condtional4=it_22!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_21,(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_clone(it_22->item)))));
                    come_call_finalizer2(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_22=it_22->next;
                }
                __result43__ = __result_obj__ = result_21;
                come_call_finalizer2(list$1sTypephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result43__;
                come_call_finalizer2(list$1sTypephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result41__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result41__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional32;
void* right_value60;
struct list_item$1sTypeph* litem_23;
struct sType* __dec_obj14;
_Bool _if_conditional33;
void* right_value61;
struct list_item$1sTypeph* litem_24;
struct sType* __dec_obj15;
void* right_value62;
struct list_item$1sTypeph* litem_25;
struct sType* __dec_obj16;
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1sTypeph*));
right_value61 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1sTypeph*));
right_value62 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional32=self->len==0,                        _if_conditional32) {
                            litem_23=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value60=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_23->prev=((void*)0);
                            litem_23->next=((void*)0);
                            __dec_obj14=litem_23->item;
                            litem_23->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_23;
                            self->head=litem_23;
                        }
                        else {
                            if(_if_conditional33=self->len==1,                            _if_conditional33) {
                                litem_24=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value61=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_24->prev=self->head;
                                litem_24->next=((void*)0);
                                __dec_obj15=litem_24->item;
                                litem_24->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_24;
                                self->head->next=litem_24;
                            }
                            else {
                                litem_25=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value62=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_25->prev=self->tail;
                                litem_25->next=((void*)0);
                                __dec_obj16=litem_25->item;
                                litem_25->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_25;
                                self->tail=litem_25;
                            }
                        }
                        self->len++;
                        __result42__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result42__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional35;
struct tuple1$1sTypeph* __result44__;
void* right_value65;
struct tuple1$1sTypeph* result_26;
_Bool _if_conditional37;
void* right_value66;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
memset(&result_26, 0, sizeof(struct tuple1$1sTypeph*));
right_value66 = (void*)0;
                if(_if_conditional35=self==(void*)0,                _if_conditional35) {
                    __result44__ = __result_obj__ = (void*)0;
                    return __result44__;
                }
                result_26=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value65=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional37=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional37) {
                    __dec_obj18=result_26->v1;
                    result_26->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result45__ = __result_obj__ = result_26;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result45__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list$1sNodeph* __result46__;
void* right_value71;
void* right_value72;
struct list$1sNodeph* result_27;
struct list_item$1sNodeph* it_28;
_Bool _while_condtional5;
void* right_value77;
struct list$1sNodeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value72 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1sNodeph*));
memset(&it_28, 0, sizeof(struct list_item$1sNodeph*));
right_value77 = (void*)0;
                if(_if_conditional42=self==((void*)0),                _if_conditional42) {
                    __result46__ = __result_obj__ = ((void*)0);
                    return __result46__;
                }
                result_27=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value72=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value71=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_28=self->head;
                while(_while_condtional5=it_28!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_27,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=sNode_clone(it_28->item)))));
                    if(right_value77) { right_value77 = come_decrement_ref_count2(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_28=it_28->next;
                }
                __result51__ = __result_obj__ = result_27;
                come_call_finalizer2(list$1sNodephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result51__;
                come_call_finalizer2(list$1sNodephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result47__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result47__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional43;
void* right_value73;
struct list_item$1sNodeph* litem_29;
struct sNode* __dec_obj23;
_Bool _if_conditional44;
void* right_value74;
struct list_item$1sNodeph* litem_30;
struct sNode* __dec_obj24;
void* right_value75;
struct list_item$1sNodeph* litem_31;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1sNodeph*));
right_value74 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1sNodeph*));
right_value75 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional43=self->len==0,                        _if_conditional43) {
                            litem_29=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value73=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_29->prev=((void*)0);
                            litem_29->next=((void*)0);
                            __dec_obj23=litem_29->item;
                            litem_29->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_29;
                            self->head=litem_29;
                        }
                        else {
                            if(_if_conditional44=self->len==1,                            _if_conditional44) {
                                litem_30=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value74=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_30->prev=self->head;
                                litem_30->next=((void*)0);
                                __dec_obj24=litem_30->item;
                                litem_30->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_30;
                                self->head->next=litem_30;
                            }
                            else {
                                litem_31=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value75=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_31->prev=self->tail;
                                litem_31->next=((void*)0);
                                __dec_obj25=litem_31->item;
                                litem_31->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_31;
                                self->tail=litem_31;
                            }
                        }
                        self->len++;
                        __result48__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result48__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional45;
struct sNode* __result49__;
void* right_value76;
struct sNode* result_32;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
struct sNode* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
memset(&result_32, 0, sizeof(struct sNode*));
                        if(_if_conditional45=self==(void*)0,                        _if_conditional45) {
                            __result49__ = __result_obj__ = (void*)0;
                            return __result49__;
                        }
                        result_32=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value76) { right_value76 = come_decrement_ref_count2(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional46=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional46) {
                            result_32->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_32->finalize=self->finalize;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_32->clone=self->clone;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_32->compile=self->compile;
                        }
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            result_32->sline=self->sline;
                        }
                        if(_if_conditional51=self!=((void*)0),                        _if_conditional51) {
                            result_32->sname=self->sname;
                        }
                        if(_if_conditional52=self!=((void*)0),                        _if_conditional52) {
                            result_32->terminated=self->terminated;
                        }
                        if(_if_conditional53=self!=((void*)0),                        _if_conditional53) {
                            result_32->kind=self->kind;
                        }
                        __result50__ = __result_obj__ = result_32;
                        if(result_32) { result_32 = come_decrement_ref_count2(result_32, ((struct sNode*)result_32)->finalize, ((struct sNode*)result_32)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result50__;
                        if(result_32) { result_32 = come_decrement_ref_count2(result_32, ((struct sNode*)result_32)->finalize, ((struct sNode*)result_32)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional57;
struct list$1charph* __result52__;
void* right_value80;
void* right_value81;
struct list$1charph* result_33;
struct list_item$1charph* it_34;
_Bool _while_condtional6;
void* right_value85;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&result_33, 0, sizeof(struct list$1charph*));
memset(&it_34, 0, sizeof(struct list_item$1charph*));
right_value85 = (void*)0;
                if(_if_conditional57=self==((void*)0),                _if_conditional57) {
                    __result52__ = __result_obj__ = ((void*)0);
                    return __result52__;
                }
                result_33=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value81=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value80=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_34=self->head;
                while(_while_condtional6=it_34!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_33,(char*)come_increment_ref_count(((char*)(right_value85=string_clone(it_34->item)))));
                    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_34=it_34->next;
                }
                __result55__ = __result_obj__ = result_33;
                come_call_finalizer2(list$1charphp_finalize,result_33, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result55__;
                come_call_finalizer2(list$1charphp_finalize,result_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result53__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result53__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional58;
void* right_value82;
struct list_item$1charph* litem_35;
char* __dec_obj28;
_Bool _if_conditional59;
void* right_value83;
struct list_item$1charph* litem_36;
char* __dec_obj29;
void* right_value84;
struct list_item$1charph* litem_37;
char* __dec_obj30;
struct list$1charph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1charph*));
right_value83 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1charph*));
right_value84 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional58=self->len==0,                        _if_conditional58) {
                            litem_35=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value82=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_35->prev=((void*)0);
                            litem_35->next=((void*)0);
                            __dec_obj28=litem_35->item;
                            litem_35->item=(char*)come_increment_ref_count(item);
                            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_35;
                            self->head=litem_35;
                        }
                        else {
                            if(_if_conditional59=self->len==1,                            _if_conditional59) {
                                litem_36=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value83=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_36->prev=self->head;
                                litem_36->next=((void*)0);
                                __dec_obj29=litem_36->item;
                                litem_36->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_36;
                                self->head->next=litem_36;
                            }
                            else {
                                litem_37=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value84=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_37->prev=self->tail;
                                litem_37->next=((void*)0);
                                __dec_obj30=litem_37->item;
                                litem_37->item=(char*)come_increment_ref_count(item);
                                __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_37;
                                self->tail=litem_37;
                            }
                        }
                        self->len++;
                        __result54__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result54__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional100;
void* right_value93;
struct list_item$1CVALUEph* litem_38;
struct CVALUE* __dec_obj38;
_Bool _if_conditional102;
void* right_value94;
struct list_item$1CVALUEph* litem_39;
struct CVALUE* __dec_obj39;
void* right_value95;
struct list_item$1CVALUEph* litem_40;
struct CVALUE* __dec_obj40;
struct list$1CVALUEph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1CVALUEph*));
right_value94 = (void*)0;
memset(&litem_39, 0, sizeof(struct list_item$1CVALUEph*));
right_value95 = (void*)0;
memset(&litem_40, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional100=self->len==0,        _if_conditional100) {
            litem_38=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value93=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_38->prev=((void*)0);
            litem_38->next=((void*)0);
            __dec_obj38=litem_38->item;
            litem_38->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_38;
            self->head=litem_38;
        }
        else {
            if(_if_conditional102=self->len==1,            _if_conditional102) {
                litem_39=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value94=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_39->prev=self->head;
                litem_39->next=((void*)0);
                __dec_obj39=litem_39->item;
                litem_39->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_39;
                self->head->next=litem_39;
            }
            else {
                litem_40=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value95=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_40->prev=self->tail;
                litem_40->next=((void*)0);
                __dec_obj40=litem_40->item;
                litem_40->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_40;
                self->tail=litem_40;
            }
        }
        self->len++;
        __result57__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result57__;
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
struct sFunNode* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj41=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer2(sFun_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj42=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result59__ = __result_obj__ = self;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result59__;
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
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    __result60__ = self->sline;
    return __result60__;
}

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value96;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
    __result61__ = __result_obj__ = ((char*)(right_value96=__builtin_string(self->sname)));
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result61__;
}

_Bool sFunNode_terminated(){
void* __result_obj__;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    __result62__ = (_Bool)0;
    return __result62__;
}

char* sFunNode_kind(){
void* __result_obj__;
void* right_value97;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
    __result63__ = __result_obj__ = ((char*)(right_value97=__builtin_string("sFunNode")));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
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
struct sFun* come_fun_41;
char* come_fun_name_42;
void* right_value98;
char* __dec_obj43;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value99;
void* right_value100;
struct sType* result_type_43;
void* right_value101;
void* right_value102;
_Bool _if_conditional122;
void* right_value103;
char* __dec_obj44;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_41, 0, sizeof(struct sFun*));
memset(&come_fun_name_42, 0, sizeof(char*));
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&result_type_43, 0, sizeof(struct sType*));
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
    come_fun_41=info->come_fun;
    info->come_fun=self->mFun;
    caller_begin(info);
    come_fun_name_42=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj43=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(((char*)(right_value98=__builtin_string(info->come_fun->mName))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        if(_if_conditional121=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional121) {
            add_come_code(info,"come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_43=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value99=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 132, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value101=make_define_var(result_type_43,"__result_obj__",(_Bool)0,info))));
        right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value102=make_type_name_string(result_type_43,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        if(_if_conditional122=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional122) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value103=xsprintf("come_heap_final();\n"))));
            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(sType_finalize,result_type_43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    caller_end(info);
    info->come_fun=come_fun_41;
    __dec_obj44=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_42);
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result64__ = (_Bool)1;
    come_fun_name_42 = come_decrement_ref_count2(come_fun_name_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result64__;
    come_fun_name_42 = come_decrement_ref_count2(come_fun_name_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value104;
void* right_value105;
struct list$1sNodeph* __dec_obj45;
struct sBlock* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
    __dec_obj45=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value105=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value104=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function2.c", 154, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result65__ = __result_obj__ = self;
    come_call_finalizer2(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result65__;
    come_call_finalizer2(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
void* right_value106;
struct sType* __dec_obj46;
void* right_value107;
struct list$1charph* __dec_obj47;
void* right_value108;
struct list$1charph* __dec_obj48;
char* __dec_obj49;
struct sType* __dec_obj50;
struct list$1sTypeph* __dec_obj51;
struct list$1charph* __dec_obj52;
struct list$1charph* __dec_obj53;
char* __dec_obj54;
void* right_value109;
char* __dec_obj55;
struct sGenericsFun* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
    __dec_obj46=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(impl_type))));
    come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value107=list$1charphp_clone(generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj48=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=list$1charphp_clone(method_generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(generics_sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mGenericsSLine=generics_sline;
    __result66__ = __result_obj__ = self;
    come_call_finalizer2(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result66__;
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
void* right_value110;
void* right_value111;
struct sBlock* result_44;
int block_level_45;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _while_condtional7;
_Bool _if_conditional135;
int sline_46;
char* sname_47;
void* right_value112;
struct sNode* node_48;
void* right_value113;
char* __dec_obj56;
_Bool _if_conditional136;
_Bool _if_conditional139;
_Bool _while_condtional8;
_Bool _if_conditional140;
void* right_value117;
struct sNode* node_52;
_Bool _if_conditional141;
struct sBlock* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&result_44, 0, sizeof(struct sBlock*));
memset(&block_level_45, 0, sizeof(int));
memset(&sline_46, 0, sizeof(int));
memset(&sname_47, 0, sizeof(char*));
right_value112 = (void*)0;
memset(&node_48, 0, sizeof(struct sNode*));
right_value113 = (void*)0;
right_value117 = (void*)0;
memset(&node_52, 0, sizeof(struct sNode*));
    result_44=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value111=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value110=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function2.c", 184, "sBlock")))),info))));
    come_call_finalizer2(sBlock_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sBlock_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    block_level_45=info->block_level;
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
            sline_46=info->sline;
            sname_47=info->sname;
            node_48=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=statment(info))));
            if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj56=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value113=node_48->sname(node_48->_protocol_obj))));
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline=node_48->sline(node_48->_protocol_obj);
            if(_if_conditional136=node_48==((void*)0),            _if_conditional136) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_44->mNodes,(struct sNode*)come_increment_ref_count(node_48));
            parse_sharp_v5(info);
            if(_if_conditional139=node_48->terminated(node_48->_protocol_obj),            _if_conditional139) {
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
                if(node_48) { node_48 = come_decrement_ref_count2(node_48, ((struct sNode*)node_48)->finalize, ((struct sNode*)node_48)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            if(node_48) { node_48 = come_decrement_ref_count2(node_48, ((struct sNode*)node_48)->finalize, ((struct sNode*)node_48)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        node_52=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=expression_v13(info))));
        if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        if(_if_conditional141=node_52==((void*)0),        _if_conditional141) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_44->mNodes,(struct sNode*)come_increment_ref_count(node_52));
        if(node_52) { node_52 = come_decrement_ref_count2(node_52, ((struct sNode*)node_52)->finalize, ((struct sNode*)node_52)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_45;
    __result68__ = __result_obj__ = result_44;
    come_call_finalizer2(sBlock_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result68__;
    come_call_finalizer2(sBlock_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional137;
void* right_value114;
struct list_item$1sNodeph* litem_49;
struct sNode* __dec_obj57;
_Bool _if_conditional138;
void* right_value115;
struct list_item$1sNodeph* litem_50;
struct sNode* __dec_obj58;
void* right_value116;
struct list_item$1sNodeph* litem_51;
struct sNode* __dec_obj59;
struct list$1sNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&litem_49, 0, sizeof(struct list_item$1sNodeph*));
right_value115 = (void*)0;
memset(&litem_50, 0, sizeof(struct list_item$1sNodeph*));
right_value116 = (void*)0;
memset(&litem_51, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional137=self->len==0,                _if_conditional137) {
                    litem_49=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_49->prev=((void*)0);
                    litem_49->next=((void*)0);
                    __dec_obj57=litem_49->item;
                    litem_49->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_49;
                    self->head=litem_49;
                }
                else {
                    if(_if_conditional138=self->len==1,                    _if_conditional138) {
                        litem_50=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 236, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_50->prev=self->head;
                        litem_50->next=((void*)0);
                        __dec_obj58=litem_50->item;
                        litem_50->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_50;
                        self->head->next=litem_50;
                    }
                    else {
                        litem_51=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 246, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_51->prev=self->tail;
                        litem_51->next=((void*)0);
                        __dec_obj59=litem_51->item;
                        litem_51->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_51;
                        self->tail=litem_51;
                    }
                }
                self->len++;
                __result67__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result67__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
void* __result_obj__;
_Bool _if_conditional142;
int __result69__;
struct sVarTable* old_table_53;
_Bool _if_conditional143;
void* right_value118;
void* right_value119;
struct sVarTable* __dec_obj60;
struct sVarTable* current_loop_vtable_54;
_Bool _if_conditional144;
struct list$1sTypeph* param_types__55;
struct list$1charph* param_names__56;
_Bool _if_conditional145;
int i_57;
struct list$1charph* o2_saved_58;
char* name_61;
void* right_value120;
struct sType* type_67;
void* right_value121;
int block_level_68;
_Bool _if_conditional152;
_Bool _if_conditional153;
int i_69;
struct list$1sNodeph* o2_saved_70;
struct sNode* node_73;
struct list$1sRightValueObjectph* right_value_objects_76;
void* right_value122;
void* right_value123;
struct list$1sRightValueObjectph* __dec_obj61;
char* __dec_obj62;
char* __dec_obj63;
char* __dec_obj64;
int stack_num_before_79;
int sline_80;
void* right_value124;
char* sname_81;
void* right_value125;
char* __dec_obj65;
_Bool _if_conditional162;
void* right_value126;
char* __dec_obj66;
struct list$1sRightValueObjectph* __dec_obj67;
_Bool _if_conditional163;
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_table_53, 0, sizeof(struct sVarTable*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&current_loop_vtable_54, 0, sizeof(struct sVarTable*));
memset(&param_types__55, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__56, 0, sizeof(struct list$1charph*));
memset(&i_57, 0, sizeof(int));
memset(&o2_saved_58, 0, sizeof(struct list$1charph*));
memset(&name_61, 0, sizeof(char*));
right_value120 = (void*)0;
memset(&type_67, 0, sizeof(struct sType*));
right_value121 = (void*)0;
memset(&block_level_68, 0, sizeof(int));
memset(&i_69, 0, sizeof(int));
memset(&o2_saved_70, 0, sizeof(struct list$1sNodeph*));
memset(&node_73, 0, sizeof(struct sNode*));
memset(&right_value_objects_76, 0, sizeof(struct list$1sRightValueObjectph*));
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&stack_num_before_79, 0, sizeof(int));
memset(&sline_80, 0, sizeof(int));
right_value124 = (void*)0;
memset(&sname_81, 0, sizeof(char*));
right_value125 = (void*)0;
right_value126 = (void*)0;
    if(info->output_header_file) {
        __result69__ = 0;
        return __result69__;
    }
    old_table_53=info->lv_table;
    if(_if_conditional143=!no_var_table,    _if_conditional143) {
        __dec_obj60=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value119=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value118=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function2.c", 268, "sVarTable")))),(_Bool)0,old_table_53))));
        come_call_finalizer2(sVarTable_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sVarTable_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sVarTable_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_54=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__55=info->param_types;
    param_names__56=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(_if_conditional145=param_types&&param_names,    _if_conditional145) {
        for(        o2_saved_58=(param_names),name_61=list$1charph_begin((o2_saved_58));        !list$1charph_end((o2_saved_58));        name_61=list$1charph_next((o2_saved_58))        ){
            type_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(list$1sTypephp_operator_load_element(param_types,i_57)))));
            come_call_finalizer2(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_67->mFunctionParam=(_Bool)1;
            type_67->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_61,(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(type_67)))),info);
            come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            i_57++;
            come_call_finalizer2(sType_finalize,type_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_68=info->block_level;
    if(_if_conditional152=!no_var_table,    _if_conditional152) {
        info->block_level++;
    }
    if(_if_conditional153=list$1sNodeph_length(block->mNodes)==0,    _if_conditional153) {
    }
    else {
        for(        o2_saved_70=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_73=list$1sNodeph_begin((o2_saved_70));        !list$1sNodeph_end((o2_saved_70));        node_73=list$1sNodeph_next((o2_saved_70))        ){
            right_value_objects_76=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj61=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value123=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value122=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function2.c", 305, "list$1sRightValueObjectph"))))))));
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj62=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj63=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj64=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_79=list$1CVALUEph_length(info->stack);
            sline_80=info->sline;
            sname_81=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(info->sname))));
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_73->sline(node_73->_protocol_obj);
            __dec_obj65=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value125=node_73->sname(node_73->_protocol_obj))));
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->writing_source_file_position=(_Bool)1;
            if(_if_conditional162=!node_compile(node_73,info),            _if_conditional162) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_80;
            __dec_obj66=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(sname_81))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_79);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj67=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_76);
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value_objects_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            sname_81 = come_decrement_ref_count2(sname_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional163=!no_var_table,    _if_conditional163) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_53;
    info->block_level=block_level_68;
    info->param_types=param_types__55;
    info->param_names=param_names__56;
    info->current_loop_vtable=current_loop_vtable_54;
    __result90__ = 0;
    return __result90__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional146;
char* result_59;
char* __result70__;
_Bool _if_conditional147;
char* __result71__;
char* result_60;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(char*));
memset(&result_60, 0, sizeof(char*));
            if(_if_conditional146=self==((void*)0),            _if_conditional146) {
                memset(&result_59,0,sizeof(char*));
                __result70__ = __result_obj__ = result_59;
                return __result70__;
            }
            self->it=self->head;
            if(self->it) {
                __result71__ = __result_obj__ = self->it->item;
                return __result71__;
            }
            memset(&result_60,0,sizeof(char*));
            __result72__ = __result_obj__ = result_60;
            return __result72__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
            __result73__ = self==((void*)0)||self->it==((void*)0);
            return __result73__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional148;
char* result_62;
char* __result74__;
_Bool _if_conditional149;
char* __result75__;
char* result_63;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(char*));
memset(&result_63, 0, sizeof(char*));
            if(_if_conditional148=self==((void*)0)||self->it==((void*)0),            _if_conditional148) {
                memset(&result_62,0,sizeof(char*));
                __result74__ = __result_obj__ = result_62;
                return __result74__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result75__ = __result_obj__ = self->it->item;
                return __result75__;
            }
            memset(&result_63,0,sizeof(char*));
            __result76__ = __result_obj__ = result_63;
            return __result76__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional150;
struct list_item$1sTypeph* it_64;
int i_65;
_Bool _while_condtional9;
_Bool _if_conditional151;
struct sType* __result77__;
struct sType* default_value_66;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_64, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_65, 0, sizeof(int));
memset(&default_value_66, 0, sizeof(struct sType*));
                if(_if_conditional150=position<0,                _if_conditional150) {
                    position+=self->len;
                }
                it_64=self->head;
                i_65=0;
                while(_while_condtional9=it_64!=((void*)0),                _while_condtional9) {
                    if(_if_conditional151=position==i_65,                    _if_conditional151) {
                        __result77__ = __result_obj__ = it_64->item;
                        return __result77__;
                    }
                    it_64=it_64->next;
                    i_65++;
                }
                memset(&default_value_66,0,sizeof(struct sType*));
                __result78__ = __result_obj__ = default_value_66;
                come_call_finalizer2(sType_finalize,default_value_66, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result78__;
                come_call_finalizer2(sType_finalize,default_value_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
        __result79__ = self->len;
        return __result79__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional154;
struct sNode* result_71;
struct sNode* __result80__;
_Bool _if_conditional155;
struct sNode* __result81__;
struct sNode* result_72;
struct sNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_71, 0, sizeof(struct sNode*));
memset(&result_72, 0, sizeof(struct sNode*));
            if(_if_conditional154=self==((void*)0),            _if_conditional154) {
                memset(&result_71,0,sizeof(struct sNode*));
                __result80__ = __result_obj__ = result_71;
                return __result80__;
            }
            self->it=self->head;
            if(self->it) {
                __result81__ = __result_obj__ = self->it->item;
                return __result81__;
            }
            memset(&result_72,0,sizeof(struct sNode*));
            __result82__ = __result_obj__ = result_72;
            return __result82__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
            __result83__ = self==((void*)0)||self->it==((void*)0);
            return __result83__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional156;
struct sNode* result_74;
struct sNode* __result84__;
_Bool _if_conditional157;
struct sNode* __result85__;
struct sNode* result_75;
struct sNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_74, 0, sizeof(struct sNode*));
memset(&result_75, 0, sizeof(struct sNode*));
            if(_if_conditional156=self==((void*)0)||self->it==((void*)0),            _if_conditional156) {
                memset(&result_74,0,sizeof(struct sNode*));
                __result84__ = __result_obj__ = result_74;
                return __result84__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result85__ = __result_obj__ = self->it->item;
                return __result85__;
            }
            memset(&result_75,0,sizeof(struct sNode*));
            __result86__ = __result_obj__ = result_75;
            return __result86__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result87__ = __result_obj__ = self;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result87__;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_77;
_Bool _while_condtional10;
struct list_item$1sRightValueObjectph* prev_it_78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_77, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_77=self->head;
                    while(_while_condtional10=it_77!=((void*)0),                    _while_condtional10) {
                        prev_it_78=it_77;
                        it_77=it_77->next;
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
                __result88__ = self->len;
                return __result88__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_82;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_83;
struct list$1sRightValueObjectph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_82, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_83, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_82=self->head;
                while(_while_condtional11=it_82!=((void*)0),                _while_condtional11) {
                    prev_it_83=it_82;
                    it_82=it_82->next;
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result89__ = __result_obj__ = self;
                return __result89__;
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
int __result91__;
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
    __result91__ = 0;
    return __result91__;
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
char* head_84;
_Bool _if_conditional168;
_Bool dquort_85;
_Bool squort_86;
int sline_87;
int nest_88;
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
char* tail_89;
void* right_value127;
char* buf_90;
void* right_value128;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_84, 0, sizeof(char*));
memset(&dquort_85, 0, sizeof(_Bool));
memset(&squort_86, 0, sizeof(_Bool));
memset(&sline_87, 0, sizeof(int));
memset(&nest_88, 0, sizeof(int));
memset(&tail_89, 0, sizeof(char*));
right_value127 = (void*)0;
memset(&buf_90, 0, sizeof(char*));
right_value128 = (void*)0;
    head_84=info->p;
    if(_if_conditional168=*info->p==123,    _if_conditional168) {
        info->p++;
        dquort_85=(_Bool)0;
        squort_86=(_Bool)0;
        sline_87=0;
        nest_88=0;
        while(_while_condtional12=1,        _while_condtional12) {
            if(dquort_85) {
                if(_if_conditional170=*info->p==92,                _if_conditional170) {
                    info->p++;
                    if(_if_conditional171=*info->p==0,                    _if_conditional171) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_87);
                        exit(2);
                    }
                    info->p++;
                }
                else {
                    if(_if_conditional172=*info->p==34,                    _if_conditional172) {
                        info->p++;
                        dquort_85=!dquort_85;
                    }
                    else {
                        info->p++;
                        if(_if_conditional173=*info->p==0,                        _if_conditional173) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_87);
                            exit(2);
                        }
                    }
                }
            }
            else {
                if(squort_86) {
                    if(_if_conditional175=*info->p==92,                    _if_conditional175) {
                        info->p++;
                        if(_if_conditional176=*info->p==0,                        _if_conditional176) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_87);
                            exit(2);
                        }
                        info->p++;
                    }
                    else {
                        if(_if_conditional177=*info->p==39,                        _if_conditional177) {
                            info->p++;
                            squort_86=!squort_86;
                        }
                        else {
                            info->p++;
                            if(_if_conditional178=*info->p==0,                            _if_conditional178) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_87);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional179=*info->p==39,                    _if_conditional179) {
                        sline_87=info->sline;
                        info->p++;
                        squort_86=!squort_86;
                    }
                    else {
                        if(_if_conditional180=*info->p==34,                        _if_conditional180) {
                            sline_87=info->sline;
                            info->p++;
                            dquort_85=!dquort_85;
                        }
                        else {
                            if(_if_conditional181=*info->p==35,                            _if_conditional181) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(_if_conditional182=*info->p==123,                                _if_conditional182) {
                                    info->p++;
                                    nest_88++;
                                }
                                else {
                                    if(_if_conditional183=*info->p==125,                                    _if_conditional183) {
                                        info->p++;
                                        if(_if_conditional184=nest_88==0,                                        _if_conditional184) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_88--;
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
    tail_89=info->p;
    buf_90=(char*)come_increment_ref_count(((char*)(right_value127=(char*)come_calloc(1, sizeof(char)*(1*(tail_89-head_84+1)), "05function2.c", 488, "char"))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(buf_90,head_84,tail_89-head_84);
    buf_90[tail_89-head_84]=0;
    __result92__ = __result_obj__ = ((char*)(right_value128=__builtin_string(buf_90)));
    buf_90 = come_decrement_ref_count2(buf_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
    buf_90 = come_decrement_ref_count2(buf_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
void* __result_obj__;
_Bool terminated_91;
char* p3_92;
int i_93;
_Bool _if_conditional187;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&terminated_91, 0, sizeof(_Bool));
memset(&p3_92, 0, sizeof(char*));
memset(&i_93, 0, sizeof(int));
    terminated_91=(_Bool)0;
    p3_92=p;
    for(    i_93=0;    i_93<strlen(p2);    i_93++    ){
        if(_if_conditional187=*p3_92==0,        _if_conditional187) {
            terminated_91=(_Bool)1;
            break;
        }
        p3_92++;
    }
    __result93__ = !terminated_91&&memcmp(p,p2,strlen(p2))==0;
    return __result93__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
void* right_value129;
void* right_value130;
struct buffer* asm_fun_name_94;
_Bool _while_condtional13;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
int brace_num_95;
_Bool _while_condtional14;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
int len_96;
_Bool in_dquort_97;
int brace_num_98;
_Bool _while_condtional15;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
int brace_num_99;
_Bool _while_condtional16;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value131;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&asm_fun_name_94, 0, sizeof(struct buffer*));
memset(&brace_num_95, 0, sizeof(int));
memset(&len_96, 0, sizeof(int));
memset(&in_dquort_97, 0, sizeof(_Bool));
memset(&brace_num_98, 0, sizeof(int));
memset(&brace_num_99, 0, sizeof(int));
right_value131 = (void*)0;
    asm_fun_name_94=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value130=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value129=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 511, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                brace_num_95=0;
                                while(_while_condtional14=*info->p,                                _while_condtional14) {
                                    if(_if_conditional194=*info->p==40,                                    _if_conditional194) {
                                        info->p++;
                                        brace_num_95++;
                                    }
                                    else {
                                        if(_if_conditional195=*info->p==41,                                        _if_conditional195) {
                                            info->p++;
                                            brace_num_95--;
                                            if(_if_conditional196=brace_num_95==0,                                            _if_conditional196) {
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
                                    len_96=0;
                                    in_dquort_97=(_Bool)0;
                                    brace_num_98=0;
                                    while(_while_condtional15=*info->p,                                    _while_condtional15) {
                                        if(_if_conditional198=*info->p==34,                                        _if_conditional198) {
                                            info->p++;
                                            in_dquort_97=!in_dquort_97;
                                        }
                                        else {
                                            if(in_dquort_97) {
                                                buffer_append_char(asm_fun_name_94,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional200=*info->p==40,                                                _if_conditional200) {
                                                    info->p++;
                                                    brace_num_98++;
                                                }
                                                else {
                                                    if(_if_conditional201=*info->p==41,                                                    _if_conditional201) {
                                                        info->p++;
                                                        brace_num_98--;
                                                        if(_if_conditional202=brace_num_98==0,                                                        _if_conditional202) {
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
                                        brace_num_99=0;
                                        while(_while_condtional16=*info->p,                                        _while_condtional16) {
                                            if(_if_conditional204=*info->p==40,                                            _if_conditional204) {
                                                info->p++;
                                                brace_num_99++;
                                            }
                                            else {
                                                if(_if_conditional205=*info->p==41,                                                _if_conditional205) {
                                                    info->p++;
                                                    brace_num_99--;
                                                    if(_if_conditional206=brace_num_99==0,                                                    _if_conditional206) {
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
    __result94__ = __result_obj__ = ((char*)(right_value131=buffer_to_string(asm_fun_name_94)));
    come_call_finalizer2(buffer_finalize,asm_fun_name_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
    come_call_finalizer2(buffer_finalize,asm_fun_name_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional17;
char* head_100;
int head_sline_101;
void* right_value132;
char* buf_102;
_Bool _if_conditional207;
void* right_value133;
struct sNode* node_103;
_Bool _while_condtional18;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_100, 0, sizeof(char*));
memset(&head_sline_101, 0, sizeof(int));
right_value132 = (void*)0;
memset(&buf_102, 0, sizeof(char*));
right_value133 = (void*)0;
memset(&node_103, 0, sizeof(struct sNode*));
    while(_while_condtional17=*info->p,    _while_condtional17) {
        parse_sharp_v5(info);
        head_100=info->p;
        head_sline_101=info->sline;
        buf_102=(char*)come_increment_ref_count(((char*)(right_value132=parse_word(info))));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional207=block&&*info->p==125,        _if_conditional207) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_102 = come_decrement_ref_count2(buf_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_103=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value133=top_level_v99(buf_102,head_100,head_sline_101,info))));
        if(right_value133) { right_value133 = come_decrement_ref_count2(right_value133, ((struct sNode*)right_value133)->finalize, ((struct sNode*)right_value133)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        while(_while_condtional18=*info->p==59,        _while_condtional18) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(_if_conditional208=node_103!=((void*)0),        _if_conditional208) {
            if(_if_conditional209=!node_compile(node_103,info),            _if_conditional209) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(_if_conditional210=block&&*info->p==125,        _if_conditional210) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_102 = come_decrement_ref_count2(buf_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_103) { node_103 = come_decrement_ref_count2(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_102 = come_decrement_ref_count2(buf_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_103) { node_103 = come_decrement_ref_count2(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __result_obj__;
void* right_value134;
char* name_104;
void* right_value135;
void* right_value136;
struct sType* result_type_105;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
void* right_value141;
void* right_value142;
void* right_value143;
void* right_value144;
void* right_value145;
void* right_value146;
struct sType* __list_values1___106[5];
void* right_value150;
void* right_value151;
struct list$1sTypeph* param_types_111;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
void* right_value156;
char* __list_values2___112[5];
void* right_value160;
void* right_value161;
struct list$1charph* param_names_117;
void* right_value162;
void* right_value163;
struct list$1charph* param_default_parametors_118;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value167;
void* right_value168;
void* right_value169;
void* right_value170;
struct sFun* main_fun_119;
void* right_value177;
void* right_value178;
char* name_164;
void* right_value179;
void* right_value180;
struct sType* result_type_165;
void* right_value181;
void* right_value182;
struct sType* __list_values3___166[1];
void* right_value183;
void* right_value184;
struct list$1sTypeph* param_types_167;
void* right_value185;
char* __list_values4___168[1];
void* right_value186;
void* right_value187;
struct list$1charph* param_names_169;
void* right_value188;
void* right_value189;
struct list$1charph* param_default_parametors_170;
void* right_value190;
void* right_value191;
void* right_value192;
void* right_value193;
struct sFun* main_fun_171;
void* right_value194;
void* right_value195;
char* name_172;
void* right_value196;
void* right_value197;
struct sType* result_type_173;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
struct sType* __list_values5___174[7];
void* right_value212;
void* right_value213;
struct list$1sTypeph* param_types_175;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
void* right_value219;
void* right_value220;
char* __list_values6___176[7];
void* right_value221;
void* right_value222;
struct list$1charph* param_names_177;
void* right_value223;
void* right_value224;
struct list$1charph* param_default_parametors_178;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
struct sFun* main_fun_179;
void* right_value229;
void* right_value230;
char* name_180;
void* right_value231;
void* right_value232;
struct sType* result_type_181;
void* right_value233;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
void* right_value238;
void* right_value239;
void* right_value240;
void* right_value241;
void* right_value242;
struct sType* __list_values7___182[5];
void* right_value243;
void* right_value244;
struct list$1sTypeph* param_types_183;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
char* __list_values8___184[5];
void* right_value250;
void* right_value251;
struct list$1charph* param_names_185;
void* right_value252;
void* right_value253;
struct list$1charph* param_default_parametors_186;
void* right_value254;
void* right_value255;
void* right_value256;
void* right_value257;
struct sFun* main_fun_187;
void* right_value258;
void* right_value259;
char* name_188;
void* right_value260;
void* right_value261;
struct sType* result_type_189;
void* right_value262;
void* right_value263;
struct sType* __list_values9___190[1];
void* right_value264;
void* right_value265;
struct list$1sTypeph* param_types_191;
void* right_value266;
char* __list_values10___192[1];
void* right_value267;
void* right_value268;
struct list$1charph* param_names_193;
void* right_value269;
void* right_value270;
struct list$1charph* param_default_parametors_194;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
struct sFun* main_fun_195;
void* right_value275;
void* right_value276;
char* name_196;
void* right_value277;
void* right_value278;
struct sType* result_type_197;
void* right_value279;
void* right_value280;
void* right_value281;
void* right_value282;
void* right_value283;
void* right_value284;
void* right_value285;
void* right_value286;
struct sType* __list_values11___198[4];
void* right_value287;
void* right_value288;
struct list$1sTypeph* param_types_199;
void* right_value289;
void* right_value290;
void* right_value291;
void* right_value292;
char* __list_values12___200[4];
void* right_value293;
void* right_value294;
struct list$1charph* param_names_201;
void* right_value295;
void* right_value296;
struct list$1charph* param_default_parametors_202;
void* right_value297;
void* right_value298;
void* right_value299;
void* right_value300;
void* right_value301;
void* right_value302;
void* right_value303;
struct sFun* main_fun_203;
void* right_value304;
void* right_value305;
char* name_204;
void* right_value306;
void* right_value307;
struct sType* result_type_205;
void* right_value308;
void* right_value309;
void* right_value310;
void* right_value311;
void* right_value312;
void* right_value313;
struct sType* __list_values13___206[3];
void* right_value314;
void* right_value315;
struct list$1sTypeph* param_types_207;
void* right_value316;
void* right_value317;
void* right_value318;
char* __list_values14___208[3];
void* right_value319;
void* right_value320;
struct list$1charph* param_names_209;
void* right_value321;
void* right_value322;
struct list$1charph* param_default_parametors_210;
void* right_value323;
void* right_value324;
void* right_value325;
void* right_value326;
struct sFun* main_fun_211;
void* right_value327;
void* right_value328;
char* name_212;
void* right_value329;
void* right_value330;
struct sType* result_type_213;
void* right_value331;
void* right_value332;
struct sType* __list_values15___214[1];
void* right_value333;
void* right_value334;
struct list$1sTypeph* param_types_215;
void* right_value335;
char* __list_values16___216[1];
void* right_value336;
void* right_value337;
struct list$1charph* param_names_217;
void* right_value338;
void* right_value339;
struct list$1charph* param_default_parametors_218;
void* right_value340;
void* right_value341;
void* right_value342;
void* right_value343;
struct sFun* main_fun_219;
void* right_value344;
void* right_value345;
char* name_220;
void* right_value346;
void* right_value347;
struct sType* result_type_221;
void* right_value348;
void* right_value349;
void* right_value350;
void* right_value351;
void* right_value352;
void* right_value353;
struct sType* __list_values17___222[3];
void* right_value354;
void* right_value355;
struct list$1sTypeph* param_types_223;
void* right_value356;
void* right_value357;
void* right_value358;
char* __list_values18___224[3];
void* right_value359;
void* right_value360;
struct list$1charph* param_names_225;
void* right_value361;
void* right_value362;
struct list$1charph* param_default_parametors_226;
void* right_value363;
void* right_value364;
void* right_value365;
void* right_value366;
struct sFun* main_fun_227;
void* right_value367;
void* right_value368;
char* name_228;
void* right_value369;
void* right_value370;
struct sType* result_type_229;
void* right_value371;
void* right_value372;
struct list$1sTypeph* param_types_230;
void* right_value373;
void* right_value374;
struct list$1charph* param_names_231;
void* right_value375;
void* right_value376;
struct list$1charph* param_default_parametors_232;
void* right_value377;
void* right_value378;
void* right_value379;
void* right_value380;
struct sFun* main_fun_233;
void* right_value381;
void* right_value382;
char* name_234;
void* right_value383;
void* right_value384;
struct sType* result_type_235;
void* right_value385;
void* right_value386;
void* right_value387;
void* right_value388;
void* right_value389;
void* right_value390;
void* right_value391;
void* right_value392;
struct sType* __list_values19___236[4];
void* right_value393;
void* right_value394;
struct list$1sTypeph* param_types_237;
void* right_value395;
void* right_value396;
void* right_value397;
void* right_value398;
char* __list_values20___238[4];
void* right_value399;
void* right_value400;
struct list$1charph* param_names_239;
void* right_value401;
void* right_value402;
struct list$1charph* param_default_parametors_240;
void* right_value403;
void* right_value404;
void* right_value405;
void* right_value406;
struct sFun* main_fun_241;
void* right_value407;
int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
memset(&name_104, 0, sizeof(char*));
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&result_type_105, 0, sizeof(struct sType*));
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&param_types_111, 0, sizeof(struct list$1sTypeph*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&param_names_117, 0, sizeof(struct list$1charph*));
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&param_default_parametors_118, 0, sizeof(struct list$1charph*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&main_fun_119, 0, sizeof(struct sFun*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&name_164, 0, sizeof(char*));
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&result_type_165, 0, sizeof(struct sType*));
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&param_types_167, 0, sizeof(struct list$1sTypeph*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&param_names_169, 0, sizeof(struct list$1charph*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&param_default_parametors_170, 0, sizeof(struct list$1charph*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&main_fun_171, 0, sizeof(struct sFun*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&name_172, 0, sizeof(char*));
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&result_type_173, 0, sizeof(struct sType*));
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
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&param_types_175, 0, sizeof(struct list$1sTypeph*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&param_names_177, 0, sizeof(struct list$1charph*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&param_default_parametors_178, 0, sizeof(struct list$1charph*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&main_fun_179, 0, sizeof(struct sFun*));
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&name_180, 0, sizeof(char*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&result_type_181, 0, sizeof(struct sType*));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&param_types_183, 0, sizeof(struct list$1sTypeph*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&param_names_185, 0, sizeof(struct list$1charph*));
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&param_default_parametors_186, 0, sizeof(struct list$1charph*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&main_fun_187, 0, sizeof(struct sFun*));
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&name_188, 0, sizeof(char*));
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&result_type_189, 0, sizeof(struct sType*));
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&param_types_191, 0, sizeof(struct list$1sTypeph*));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&param_names_193, 0, sizeof(struct list$1charph*));
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&param_default_parametors_194, 0, sizeof(struct list$1charph*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&main_fun_195, 0, sizeof(struct sFun*));
right_value275 = (void*)0;
right_value276 = (void*)0;
memset(&name_196, 0, sizeof(char*));
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&result_type_197, 0, sizeof(struct sType*));
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&param_types_199, 0, sizeof(struct list$1sTypeph*));
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&param_names_201, 0, sizeof(struct list$1charph*));
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&param_default_parametors_202, 0, sizeof(struct list$1charph*));
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
memset(&main_fun_203, 0, sizeof(struct sFun*));
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&name_204, 0, sizeof(char*));
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&result_type_205, 0, sizeof(struct sType*));
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
memset(&param_types_207, 0, sizeof(struct list$1sTypeph*));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&param_names_209, 0, sizeof(struct list$1charph*));
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&param_default_parametors_210, 0, sizeof(struct list$1charph*));
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&main_fun_211, 0, sizeof(struct sFun*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&name_212, 0, sizeof(char*));
right_value329 = (void*)0;
right_value330 = (void*)0;
memset(&result_type_213, 0, sizeof(struct sType*));
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&param_types_215, 0, sizeof(struct list$1sTypeph*));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&param_names_217, 0, sizeof(struct list$1charph*));
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&param_default_parametors_218, 0, sizeof(struct list$1charph*));
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&main_fun_219, 0, sizeof(struct sFun*));
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&name_220, 0, sizeof(char*));
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&result_type_221, 0, sizeof(struct sType*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
memset(&param_types_223, 0, sizeof(struct list$1sTypeph*));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&param_names_225, 0, sizeof(struct list$1charph*));
right_value361 = (void*)0;
right_value362 = (void*)0;
memset(&param_default_parametors_226, 0, sizeof(struct list$1charph*));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&main_fun_227, 0, sizeof(struct sFun*));
right_value367 = (void*)0;
right_value368 = (void*)0;
memset(&name_228, 0, sizeof(char*));
right_value369 = (void*)0;
right_value370 = (void*)0;
memset(&result_type_229, 0, sizeof(struct sType*));
right_value371 = (void*)0;
right_value372 = (void*)0;
memset(&param_types_230, 0, sizeof(struct list$1sTypeph*));
right_value373 = (void*)0;
right_value374 = (void*)0;
memset(&param_names_231, 0, sizeof(struct list$1charph*));
right_value375 = (void*)0;
right_value376 = (void*)0;
memset(&param_default_parametors_232, 0, sizeof(struct list$1charph*));
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
memset(&main_fun_233, 0, sizeof(struct sFun*));
right_value381 = (void*)0;
right_value382 = (void*)0;
memset(&name_234, 0, sizeof(char*));
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&result_type_235, 0, sizeof(struct sType*));
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&param_types_237, 0, sizeof(struct list$1sTypeph*));
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&param_names_239, 0, sizeof(struct list$1charph*));
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&param_default_parametors_240, 0, sizeof(struct list$1charph*));
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&main_fun_241, 0, sizeof(struct sFun*));
right_value407 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_104=(char*)come_increment_ref_count(((char*)(right_value134=__builtin_string("come_calloc"))));
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_105=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value135=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 680, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values1___106[0]=come_increment_ref_count(((struct sType*)(right_value138=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value137=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___106[1]=come_increment_ref_count(((struct sType*)(right_value140=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value139=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___106[2]=come_increment_ref_count(((struct sType*)(right_value142=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value141=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"char*",(_Bool)0,info))));
__list_values1___106[3]=come_increment_ref_count(((struct sType*)(right_value144=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value143=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___106[4]=come_increment_ref_count(((struct sType*)(right_value146=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value145=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"char*",(_Bool)0,info))));
}        param_types_111=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value151=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value150=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 681, "struct list$1sTypeph")))),5,__list_values1___106))));
        come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values2___112[0]=come_increment_ref_count(((char*)(right_value152=__builtin_string("count"))));
__list_values2___112[1]=come_increment_ref_count(((char*)(right_value153=__builtin_string("size"))));
__list_values2___112[2]=come_increment_ref_count(((char*)(right_value154=__builtin_string("sname"))));
__list_values2___112[3]=come_increment_ref_count(((char*)(right_value155=__builtin_string("sline"))));
__list_values2___112[4]=come_increment_ref_count(((char*)(right_value156=__builtin_string("class_name"))));
}        param_names_117=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value161=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value160=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 682, "struct list$1charph")))),5,__list_values2___112))));
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_118=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value163=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value162=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 683, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_118,((void*)0));
        list$1charph_push_back(param_default_parametors_118,((void*)0));
        list$1charph_push_back(param_default_parametors_118,(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string("null")))));
        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_118,(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string("0")))));
        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_118,(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string("null")))));
        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_119=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value170=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value167=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 689, "sFun")))),(char*)come_increment_ref_count(name_104),(struct sType*)come_increment_ref_count(result_type_105),(struct list$1sTypeph*)come_increment_ref_count(param_types_111),(struct list$1charph*)come_increment_ref_count(param_names_117),(struct list$1charph*)come_increment_ref_count(param_default_parametors_118),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value169=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(name_104)))),(struct sFun*)come_increment_ref_count(main_fun_119));
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_104 = come_decrement_ref_count2(name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_164=(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string("come_increment_ref_count"))));
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value179=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 700, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values3___166[0]=come_increment_ref_count(((struct sType*)(right_value182=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value181=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 701, "sType")))),"void*",(_Bool)0,info))));
}        param_types_167=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value184=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value183=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 701, "struct list$1sTypeph")))),1,__list_values3___166))));
        come_call_finalizer2(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values4___168[0]=come_increment_ref_count(((char*)(right_value185=__builtin_string("mem"))));
}        param_names_169=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value187=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value186=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 702, "struct list$1charph")))),1,__list_values4___168))));
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_170=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value189=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value188=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 703, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_171=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value193=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value190=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 704, "sFun")))),(char*)come_increment_ref_count(name_164),(struct sType*)come_increment_ref_count(result_type_165),(struct list$1sTypeph*)come_increment_ref_count(param_types_167),(struct list$1charph*)come_increment_ref_count(param_names_169),(struct list$1charph*)come_increment_ref_count(param_default_parametors_170),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(name_164)))),(struct sFun*)come_increment_ref_count(main_fun_171));
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_164 = come_decrement_ref_count2(name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_172=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("come_call_finalizer"))));
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_173=(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value196=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values5___174[0]=come_increment_ref_count(((struct sType*)(right_value199=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value198=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___174[1]=come_increment_ref_count(((struct sType*)(right_value201=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value200=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___174[2]=come_increment_ref_count(((struct sType*)(right_value203=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value202=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___174[3]=come_increment_ref_count(((struct sType*)(right_value205=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value204=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___174[4]=come_increment_ref_count(((struct sType*)(right_value207=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value206=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"int",(_Bool)0,info))));
__list_values5___174[5]=come_increment_ref_count(((struct sType*)(right_value209=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value208=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"int",(_Bool)0,info))));
__list_values5___174[6]=come_increment_ref_count(((struct sType*)(right_value211=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value210=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"int",(_Bool)0,info))));
}        param_types_175=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value213=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value212=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 716, "struct list$1sTypeph")))),7,__list_values5___174))));
        come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values6___176[0]=come_increment_ref_count(((char*)(right_value214=__builtin_string("fun"))));
__list_values6___176[1]=come_increment_ref_count(((char*)(right_value215=__builtin_string("mem"))));
__list_values6___176[2]=come_increment_ref_count(((char*)(right_value216=__builtin_string("protocol_fun"))));
__list_values6___176[3]=come_increment_ref_count(((char*)(right_value217=__builtin_string("protocol_obj"))));
__list_values6___176[4]=come_increment_ref_count(((char*)(right_value218=__builtin_string("call_finalizer_only"))));
__list_values6___176[5]=come_increment_ref_count(((char*)(right_value219=__builtin_string("no_decrement"))));
__list_values6___176[6]=come_increment_ref_count(((char*)(right_value220=__builtin_string("no_free"))));
}        param_names_177=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value222=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value221=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 717, "struct list$1charph")))),7,__list_values6___176))));
        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_178=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value224=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value223=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 718, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_179=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value228=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value225=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 719, "sFun")))),(char*)come_increment_ref_count(name_172),(struct sType*)come_increment_ref_count(result_type_173),(struct list$1sTypeph*)come_increment_ref_count(param_types_175),(struct list$1charph*)come_increment_ref_count(param_names_177),(struct list$1charph*)come_increment_ref_count(param_default_parametors_178),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string(name_172)))),(struct sFun*)come_increment_ref_count(main_fun_179));
        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_172 = come_decrement_ref_count2(name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_180=(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string("come_decrement_ref_count"))));
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_181=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 730, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values7___182[0]=come_increment_ref_count(((struct sType*)(right_value234=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value233=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___182[1]=come_increment_ref_count(((struct sType*)(right_value236=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value235=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___182[2]=come_increment_ref_count(((struct sType*)(right_value238=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value237=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___182[3]=come_increment_ref_count(((struct sType*)(right_value240=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value239=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"bool",(_Bool)0,info))));
__list_values7___182[4]=come_increment_ref_count(((struct sType*)(right_value242=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value241=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"bool",(_Bool)0,info))));
}        param_types_183=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value244=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value243=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 731, "struct list$1sTypeph")))),5,__list_values7___182))));
        come_call_finalizer2(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values8___184[0]=come_increment_ref_count(((char*)(right_value245=__builtin_string("mem"))));
__list_values8___184[1]=come_increment_ref_count(((char*)(right_value246=__builtin_string("protocol_fun"))));
__list_values8___184[2]=come_increment_ref_count(((char*)(right_value247=__builtin_string("protocol_obj"))));
__list_values8___184[3]=come_increment_ref_count(((char*)(right_value248=__builtin_string("no_decrement"))));
__list_values8___184[4]=come_increment_ref_count(((char*)(right_value249=__builtin_string("no_free"))));
}        param_names_185=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value251=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value250=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 732, "struct list$1charph")))),5,__list_values8___184))));
        right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_186=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value253=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value252=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 733, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_187=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value257=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value254=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 734, "sFun")))),(char*)come_increment_ref_count(name_180),(struct sType*)come_increment_ref_count(result_type_181),(struct list$1sTypeph*)come_increment_ref_count(param_types_183),(struct list$1charph*)come_increment_ref_count(param_names_185),(struct list$1charph*)come_increment_ref_count(param_default_parametors_186),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value255=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string(name_180)))),(struct sFun*)come_increment_ref_count(main_fun_187));
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_180 = come_decrement_ref_count2(name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_188=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string("come_free_object"))));
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value260=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 745, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values9___190[0]=come_increment_ref_count(((struct sType*)(right_value263=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value262=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 746, "sType")))),"void*",(_Bool)0,info))));
}        param_types_191=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value265=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value264=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 746, "struct list$1sTypeph")))),1,__list_values9___190))));
        come_call_finalizer2(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values10___192[0]=come_increment_ref_count(((char*)(right_value266=__builtin_string("mem"))));
}        param_names_193=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value268=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value267=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 747, "struct list$1charph")))),1,__list_values10___192))));
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_194=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value270=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value269=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 748, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_195=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value274=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value271=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 749, "sFun")))),(char*)come_increment_ref_count(name_188),(struct sType*)come_increment_ref_count(result_type_189),(struct list$1sTypeph*)come_increment_ref_count(param_types_191),(struct list$1charph*)come_increment_ref_count(param_names_193),(struct list$1charph*)come_increment_ref_count(param_default_parametors_194),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value272=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string(name_188)))),(struct sFun*)come_increment_ref_count(main_fun_195));
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_188 = come_decrement_ref_count2(name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_196=(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string("come_memdup"))));
        right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value277=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 760, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values11___198[0]=come_increment_ref_count(((struct sType*)(right_value280=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value279=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"void*",(_Bool)0,info))));
__list_values11___198[1]=come_increment_ref_count(((struct sType*)(right_value282=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value281=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"char*",(_Bool)0,info))));
__list_values11___198[2]=come_increment_ref_count(((struct sType*)(right_value284=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value283=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"int",(_Bool)0,info))));
__list_values11___198[3]=come_increment_ref_count(((struct sType*)(right_value286=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value285=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"char*",(_Bool)0,info))));
}        param_types_199=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value288=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value287=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 761, "struct list$1sTypeph")))),4,__list_values11___198))));
        come_call_finalizer2(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values12___200[0]=come_increment_ref_count(((char*)(right_value289=__builtin_string("block"))));
__list_values12___200[1]=come_increment_ref_count(((char*)(right_value290=__builtin_string("sname"))));
__list_values12___200[2]=come_increment_ref_count(((char*)(right_value291=__builtin_string("sline"))));
__list_values12___200[3]=come_increment_ref_count(((char*)(right_value292=__builtin_string("class_name"))));
}        param_names_201=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value294=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value293=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 762, "struct list$1charph")))),4,__list_values12___200))));
        right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_202=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value296=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value295=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 763, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_202,((void*)0));
        list$1charph_push_back(param_default_parametors_202,(char*)come_increment_ref_count(((char*)(right_value297=__builtin_string("null")))));
        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_202,(char*)come_increment_ref_count(((char*)(right_value298=__builtin_string("0")))));
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_202,(char*)come_increment_ref_count(((char*)(right_value299=__builtin_string("null")))));
        right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_203=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value303=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value300=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 768, "sFun")))),(char*)come_increment_ref_count(name_196),(struct sType*)come_increment_ref_count(result_type_197),(struct list$1sTypeph*)come_increment_ref_count(param_types_199),(struct list$1charph*)come_increment_ref_count(param_names_201),(struct list$1charph*)come_increment_ref_count(param_default_parametors_202),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value301=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value302=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value304=__builtin_string(name_196)))),(struct sFun*)come_increment_ref_count(main_fun_203));
        right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_196 = come_decrement_ref_count2(name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_204=(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string("memset"))));
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_205=(struct sType*)come_increment_ref_count(((struct sType*)(right_value307=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value306=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 779, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values13___206[0]=come_increment_ref_count(((struct sType*)(right_value309=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value308=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "sType")))),"void*",(_Bool)0,info))));
__list_values13___206[1]=come_increment_ref_count(((struct sType*)(right_value311=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value310=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "sType")))),"int",(_Bool)0,info))));
__list_values13___206[2]=come_increment_ref_count(((struct sType*)(right_value313=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value312=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "sType")))),"long",(_Bool)0,info))));
}        param_types_207=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value315=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value314=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 780, "struct list$1sTypeph")))),3,__list_values13___206))));
        come_call_finalizer2(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values14___208[0]=come_increment_ref_count(((char*)(right_value316=__builtin_string("b"))));
__list_values14___208[1]=come_increment_ref_count(((char*)(right_value317=__builtin_string("c"))));
__list_values14___208[2]=come_increment_ref_count(((char*)(right_value318=__builtin_string("len"))));
}        param_names_209=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value320=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value319=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 781, "struct list$1charph")))),3,__list_values14___208))));
        right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_210=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value322=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value321=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 782, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_211=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value326=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value323=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 783, "sFun")))),(char*)come_increment_ref_count(name_204),(struct sType*)come_increment_ref_count(result_type_205),(struct list$1sTypeph*)come_increment_ref_count(param_types_207),(struct list$1charph*)come_increment_ref_count(param_names_209),(struct list$1charph*)come_increment_ref_count(param_default_parametors_210),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value324=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(right_value325=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string(name_204)))),(struct sFun*)come_increment_ref_count(main_fun_211));
        right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_204 = come_decrement_ref_count2(name_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_212=(char*)come_increment_ref_count(((char*)(right_value328=__builtin_string("__builtin_string"))));
        right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_213=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value329=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 794, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values15___214[0]=come_increment_ref_count(((struct sType*)(right_value332=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value331=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 795, "sType")))),"char*",(_Bool)0,info))));
}        param_types_215=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value334=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value333=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 795, "struct list$1sTypeph")))),1,__list_values15___214))));
        come_call_finalizer2(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values16___216[0]=come_increment_ref_count(((char*)(right_value335=__builtin_string("str"))));
}        param_names_217=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value337=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value336=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 796, "struct list$1charph")))),1,__list_values16___216))));
        right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_218=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value339=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value338=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 797, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_219=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value343=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value340=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 798, "sFun")))),(char*)come_increment_ref_count(name_212),(struct sType*)come_increment_ref_count(result_type_213),(struct list$1sTypeph*)come_increment_ref_count(param_types_215),(struct list$1charph*)come_increment_ref_count(param_names_217),(struct list$1charph*)come_increment_ref_count(param_default_parametors_218),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value341=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value342=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(name_212)))),(struct sFun*)come_increment_ref_count(main_fun_219));
        right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_212 = come_decrement_ref_count2(name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_220=(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string("come_heap_init"))));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_221=(struct sType*)come_increment_ref_count(((struct sType*)(right_value347=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value346=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 809, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values17___222[0]=come_increment_ref_count(((struct sType*)(right_value349=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value348=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "sType")))),"int",(_Bool)0,info))));
__list_values17___222[1]=come_increment_ref_count(((struct sType*)(right_value351=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value350=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "sType")))),"int",(_Bool)0,info))));
__list_values17___222[2]=come_increment_ref_count(((struct sType*)(right_value353=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value352=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "sType")))),"int",(_Bool)0,info))));
}        param_types_223=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value355=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value354=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 810, "struct list$1sTypeph")))),3,__list_values17___222))));
        come_call_finalizer2(sType_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values18___224[0]=come_increment_ref_count(((char*)(right_value356=xsprintf("come_malloc"))));
__list_values18___224[1]=come_increment_ref_count(((char*)(right_value357=xsprintf("come_debug"))));
__list_values18___224[2]=come_increment_ref_count(((char*)(right_value358=xsprintf("come_gc"))));
}        param_names_225=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value360=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value359=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 811, "struct list$1charph")))),3,__list_values18___224))));
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_226=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value362=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value361=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 812, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_226,((void*)0));
        main_fun_227=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value366=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value363=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 814, "sFun")))),(char*)come_increment_ref_count(name_220),(struct sType*)come_increment_ref_count(result_type_221),(struct list$1sTypeph*)come_increment_ref_count(param_types_223),(struct list$1charph*)come_increment_ref_count(param_names_225),(struct list$1charph*)come_increment_ref_count(param_default_parametors_226),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value364=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value365=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value367=__builtin_string(name_220)))),(struct sFun*)come_increment_ref_count(main_fun_227));
        right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_220 = come_decrement_ref_count2(name_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_228=(char*)come_increment_ref_count(((char*)(right_value368=__builtin_string("come_heap_final"))));
        right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_229=(struct sType*)come_increment_ref_count(((struct sType*)(right_value370=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value369=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 825, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_types_230=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value372=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value371=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 826, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_names_231=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value374=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value373=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 827, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_232=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value376=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value375=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 828, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_233=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value380=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value377=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 829, "sFun")))),(char*)come_increment_ref_count(name_228),(struct sType*)come_increment_ref_count(result_type_229),(struct list$1sTypeph*)come_increment_ref_count(param_types_230),(struct list$1charph*)come_increment_ref_count(param_names_231),(struct list$1charph*)come_increment_ref_count(param_default_parametors_232),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value378=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value379=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value379 = come_decrement_ref_count2(right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value381=__builtin_string(name_228)))),(struct sFun*)come_increment_ref_count(main_fun_233));
        right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_234=(char*)come_increment_ref_count(((char*)(right_value382=__builtin_string("come_null_check"))));
        right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value384=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value383=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 840, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values19___236[0]=come_increment_ref_count(((struct sType*)(right_value386=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value385=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"void*",(_Bool)0,info))));
__list_values19___236[1]=come_increment_ref_count(((struct sType*)(right_value388=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value387=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"char*",(_Bool)0,info))));
__list_values19___236[2]=come_increment_ref_count(((struct sType*)(right_value390=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value389=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"int",(_Bool)0,info))));
__list_values19___236[3]=come_increment_ref_count(((struct sType*)(right_value392=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value391=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"int",(_Bool)0,info))));
}        param_types_237=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value394=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value393=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 841, "struct list$1sTypeph")))),4,__list_values19___236))));
        come_call_finalizer2(sType_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values20___238[0]=come_increment_ref_count(((char*)(right_value395=__builtin_string("mem"))));
__list_values20___238[1]=come_increment_ref_count(((char*)(right_value396=__builtin_string("sname"))));
__list_values20___238[2]=come_increment_ref_count(((char*)(right_value397=__builtin_string("sline"))));
__list_values20___238[3]=come_increment_ref_count(((char*)(right_value398=__builtin_string("id"))));
}        param_names_239=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value400=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value399=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 842, "struct list$1charph")))),4,__list_values20___238))));
        right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_240=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value402=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value401=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 843, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_241=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value406=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value403=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 844, "sFun")))),(char*)come_increment_ref_count(name_234),(struct sType*)come_increment_ref_count(result_type_235),(struct list$1sTypeph*)come_increment_ref_count(param_types_237),(struct list$1charph*)come_increment_ref_count(param_names_239),(struct list$1charph*)come_increment_ref_count(param_default_parametors_240),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value404=__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")))),(char*)come_increment_ref_count(((char*)(right_value405=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value407=__builtin_string(name_234)))),(struct sFun*)come_increment_ref_count(main_fun_241));
        right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_234 = come_decrement_ref_count2(name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    __result123__ = 0;
    return __result123__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_107;
struct list$1sTypeph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_107, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_107=0;            i_107<num_value;            i_107++            ){
                list$1sTypeph_push_back(self,values[i_107]);
            }
            __result96__ = __result_obj__ = self;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result96__;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional211;
void* right_value147;
struct list_item$1sTypeph* litem_108;
struct sType* __dec_obj68;
_Bool _if_conditional212;
void* right_value148;
struct list_item$1sTypeph* litem_109;
struct sType* __dec_obj69;
void* right_value149;
struct list_item$1sTypeph* litem_110;
struct sType* __dec_obj70;
struct list$1sTypeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1sTypeph*));
right_value148 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1sTypeph*));
right_value149 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional211=self->len==0,                    _if_conditional211) {
                        litem_108=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value147=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_108->prev=((void*)0);
                        litem_108->next=((void*)0);
                        __dec_obj68=litem_108->item;
                        litem_108->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_108;
                        self->head=litem_108;
                    }
                    else {
                        if(_if_conditional212=self->len==1,                        _if_conditional212) {
                            litem_109=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value148=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_109->prev=self->head;
                            litem_109->next=((void*)0);
                            __dec_obj69=litem_109->item;
                            litem_109->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_109;
                            self->head->next=litem_109;
                        }
                        else {
                            litem_110=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value149=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_110->prev=self->tail;
                            litem_110->next=((void*)0);
                            __dec_obj70=litem_110->item;
                            litem_110->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_110;
                            self->tail=litem_110;
                        }
                    }
                    self->len++;
                    __result95__ = __result_obj__ = self;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result95__;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_113;
struct list$1charph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_113, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_113=0;            i_113<num_value;            i_113++            ){
                list$1charph_push_back(self,values[i_113]);
            }
            __result98__ = __result_obj__ = self;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result98__;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional213;
void* right_value157;
struct list_item$1charph* litem_114;
char* __dec_obj71;
_Bool _if_conditional214;
void* right_value158;
struct list_item$1charph* litem_115;
char* __dec_obj72;
void* right_value159;
struct list_item$1charph* litem_116;
char* __dec_obj73;
struct list$1charph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1charph*));
right_value158 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1charph*));
right_value159 = (void*)0;
memset(&litem_116, 0, sizeof(struct list_item$1charph*));
                    if(_if_conditional213=self->len==0,                    _if_conditional213) {
                        litem_114=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value157=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_114->prev=((void*)0);
                        litem_114->next=((void*)0);
                        __dec_obj71=litem_114->item;
                        litem_114->item=(char*)come_increment_ref_count(item);
                        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_114;
                        self->head=litem_114;
                    }
                    else {
                        if(_if_conditional214=self->len==1,                        _if_conditional214) {
                            litem_115=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value158=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_115->prev=self->head;
                            litem_115->next=((void*)0);
                            __dec_obj72=litem_115->item;
                            litem_115->item=(char*)come_increment_ref_count(item);
                            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_115;
                            self->head->next=litem_115;
                        }
                        else {
                            litem_116=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value159=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_116->prev=self->tail;
                            litem_116->next=((void*)0);
                            __dec_obj73=litem_116->item;
                            litem_116->item=(char*)come_increment_ref_count(item);
                            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail->next=litem_116;
                            self->tail=litem_116;
                        }
                    }
                    self->len++;
                    __result97__ = __result_obj__ = self;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result97__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional215;
unsigned int hash_137;
unsigned int it_138;
_Bool _while_condtional21;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool same_key_exist_155;
char* it2_158;
_Bool _if_conditional258;
_Bool _if_conditional259;
struct map$2charphsFunph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_137, 0, sizeof(unsigned int));
memset(&it_138, 0, sizeof(unsigned int));
memset(&same_key_exist_155, 0, sizeof(_Bool));
memset(&it2_158, 0, sizeof(char*));
            if(_if_conditional215=self->len*10>=self->size,            _if_conditional215) {
                map$2charphsFunph_rehash(self);
            }
            hash_137=string_get_hash_key(key)%self->size;
            it_138=hash_137;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional227=self->item_existance[it_138],                _if_conditional227) {
                    if(_if_conditional228=string_equals(self->keys[it_138],key),                    _if_conditional228) {
                        if(_if_conditional229=1,                        _if_conditional229) {
                            list$1charp_remove(self->key_list,self->keys[it_138]);
                            self->keys[it_138] = come_decrement_ref_count2(self->keys[it_138], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_138]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_138]);
                            self->keys[it_138]=key;
                        }
                        if(_if_conditional249=1,                        _if_conditional249) {
                            come_call_finalizer2(sFun_finalize,self->items[it_138], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_138]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_138]=item;
                        }
                        break;
                    }
                    it_138++;
                    if(_if_conditional250=it_138>=self->size,                    _if_conditional250) {
                        it_138=0;
                    }
                    else {
                        if(_if_conditional251=it_138==hash_137,                        _if_conditional251) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_138]=(_Bool)1;
                    if(_if_conditional252=1,                    _if_conditional252) {
                        self->keys[it_138]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_138]=key;
                    }
                    if(_if_conditional253=1,                    _if_conditional253) {
                        self->items[it_138]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_138]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_155=(_Bool)0;
            for(            it2_158=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_158=list$1charp_next(self->key_list)            ){
                if(_if_conditional258=string_equals(it2_158,key),                _if_conditional258) {
                    puts("SAME KEY");
                    same_key_exist_155=(_Bool)1;
                }
            }
            if(_if_conditional259=!same_key_exist_155,            _if_conditional259) {
                list$1charp_push_back(self->key_list,key);
            }
            __result122__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result122__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_120;
void* right_value171;
char** keys_121;
void* right_value172;
struct sFun** items_122;
void* right_value173;
_Bool* item_existance_123;
int len_124;
char* it_127;
struct sFun* default_value_130;
struct sFun* it2_133;
unsigned int hash_134;
int n_135;
_Bool _while_condtional20;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct sFun* default_value_136;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_120, 0, sizeof(int));
right_value171 = (void*)0;
memset(&keys_121, 0, sizeof(char**));
right_value172 = (void*)0;
memset(&items_122, 0, sizeof(struct sFun**));
right_value173 = (void*)0;
memset(&item_existance_123, 0, sizeof(_Bool*));
memset(&len_124, 0, sizeof(int));
memset(&it_127, 0, sizeof(char*));
memset(&default_value_130, 0, sizeof(struct sFun*));
memset(&it2_133, 0, sizeof(struct sFun*));
memset(&hash_134, 0, sizeof(unsigned int));
memset(&n_135, 0, sizeof(int));
memset(&default_value_136, 0, sizeof(struct sFun*));
                    size_120=self->size*10;
                    keys_121=(char**)come_increment_ref_count(((char**)(right_value171=(char**)come_calloc(1, sizeof(char*)*(1*(size_120)), "./comelang2.h", 1335, "char*%"))));
                    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_122=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value172=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_120)), "./comelang2.h", 1336, "sFun*%"))));
                    come_call_finalizer2(sFun_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_123=(_Bool*)come_increment_ref_count(((_Bool*)(right_value173=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_120)), "./comelang2.h", 1337, "bool"))));
                    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_124=0;
                    for(                    it_127=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_127=map$2charphsFunph_next(self)                    ){
                        memset(&default_value_130,0,sizeof(struct sFun*));
                        it2_133=map$2charphsFunph_at(self,it_127,default_value_130);
                        hash_134=string_get_hash_key(it_127)%size_120;
                        n_135=hash_134;
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            if(_if_conditional224=item_existance_123[n_135],                            _if_conditional224) {
                                n_135++;
                                if(_if_conditional225=n_135>=size_120,                                _if_conditional225) {
                                    n_135=0;
                                }
                                else {
                                    if(_if_conditional226=n_135==hash_134,                                    _if_conditional226) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_123[n_135]=(_Bool)1;
                                keys_121[n_135]=it_127;
                                items_122[n_135]=map$2charphsFunph_at(self,it_127,default_value_136);
                                len_124++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_121;
                    self->items=items_122;
                    self->item_existance=item_existance_123;
                    self->size=size_120;
                    self->len=len_124;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional216;
char* result_125;
char* __result99__;
_Bool _if_conditional217;
char* __result100__;
char* result_126;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_125, 0, sizeof(char*));
memset(&result_126, 0, sizeof(char*));
                        if(_if_conditional216=self==((void*)0),                        _if_conditional216) {
                            memset(&result_125,0,sizeof(char*));
                            __result99__ = __result_obj__ = result_125;
                            return __result99__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result100__ = __result_obj__ = self->key_list->it->item;
                            return __result100__;
                        }
                        memset(&result_126,0,sizeof(char*));
                        __result101__ = __result_obj__ = result_126;
                        return __result101__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result102__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result102__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional218;
char* result_128;
char* __result103__;
_Bool _if_conditional219;
char* __result104__;
char* result_129;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_128, 0, sizeof(char*));
memset(&result_129, 0, sizeof(char*));
                        if(_if_conditional218=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional218) {
                            memset(&result_128,0,sizeof(char*));
                            __result103__ = __result_obj__ = result_128;
                            return __result103__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result104__ = __result_obj__ = self->key_list->it->item;
                            return __result104__;
                        }
                        memset(&result_129,0,sizeof(char*));
                        __result105__ = __result_obj__ = result_129;
                        return __result105__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_131;
unsigned int it_132;
_Bool _while_condtional19;
_Bool _if_conditional220;
_Bool _if_conditional221;
struct sFun* __result106__;
_Bool _if_conditional222;
_Bool _if_conditional223;
struct sFun* __result107__;
struct sFun* __result108__;
struct sFun* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_131, 0, sizeof(unsigned int));
memset(&it_132, 0, sizeof(unsigned int));
                            hash_131=string_get_hash_key(((char*)key))%self->size;
                            it_132=hash_131;
                            while(_while_condtional19=(_Bool)1,                            _while_condtional19) {
                                if(_if_conditional220=self->item_existance[it_132],                                _if_conditional220) {
                                    if(_if_conditional221=string_equals(self->keys[it_132],key),                                    _if_conditional221) {
                                        __result106__ = __result_obj__ = self->items[it_132];
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result106__;
                                    }
                                    it_132++;
                                    if(_if_conditional222=it_132>=self->size,                                    _if_conditional222) {
                                        it_132=0;
                                    }
                                    else {
                                        if(_if_conditional223=it_132==hash_131,                                        _if_conditional223) {
                                            __result107__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result107__;
                                        }
                                    }
                                }
                                else {
                                    __result108__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result108__;
                                }
                            }
                            __result109__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result109__;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_139;
struct list_item$1charp* it_140;
_Bool _while_condtional22;
_Bool _if_conditional230;
struct list$1charp* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_139, 0, sizeof(int));
memset(&it_140, 0, sizeof(struct list_item$1charp*));
                                it2_139=0;
                                it_140=self->head;
                                while(_while_condtional22=it_140!=((void*)0),                                _while_condtional22) {
                                    if(_if_conditional230=string_equals(it_140->item,item),                                    _if_conditional230) {
                                        list$1charp_delete(self,it2_139,it2_139+1);
                                        break;
                                    }
                                    it2_139++;
                                    it_140=it_140->next;
                                }
                                __result113__ = __result_obj__ = self;
                                return __result113__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
int tmp_141;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list$1charp* __result110__;
_Bool _if_conditional237;
_Bool _if_conditional238;
struct list_item$1charp* it_144;
int i_145;
_Bool _while_condtional24;
_Bool _if_conditional239;
struct list_item$1charp* prev_it_146;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct list_item$1charp* it_147;
int i_148;
_Bool _while_condtional25;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct list_item$1charp* prev_it_149;
struct list_item$1charp* it_150;
struct list_item$1charp* head_prev_it_151;
struct list_item$1charp* tail_it_152;
int i_153;
_Bool _while_condtional26;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct list_item$1charp* prev_it_154;
_Bool _if_conditional247;
_Bool _if_conditional248;
struct list$1charp* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_141, 0, sizeof(int));
memset(&it_144, 0, sizeof(struct list_item$1charp*));
memset(&i_145, 0, sizeof(int));
memset(&prev_it_146, 0, sizeof(struct list_item$1charp*));
memset(&it_147, 0, sizeof(struct list_item$1charp*));
memset(&i_148, 0, sizeof(int));
memset(&prev_it_149, 0, sizeof(struct list_item$1charp*));
memset(&it_150, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_151, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_152, 0, sizeof(struct list_item$1charp*));
memset(&i_153, 0, sizeof(int));
memset(&prev_it_154, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional231=head<0,                                            _if_conditional231) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional232=tail<0,                                            _if_conditional232) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional233=head>tail,                                            _if_conditional233) {
                                                tmp_141=tail;
                                                tail=head;
                                                head=tmp_141;
                                            }
                                            if(_if_conditional234=head<0,                                            _if_conditional234) {
                                                head=0;
                                            }
                                            if(_if_conditional235=tail>self->len,                                            _if_conditional235) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional236=head==tail,                                            _if_conditional236) {
                                                __result110__ = __result_obj__ = self;
                                                return __result110__;
                                            }
                                            if(_if_conditional237=head==0&&tail==self->len,                                            _if_conditional237) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional238=head==0,                                                _if_conditional238) {
                                                    it_144=self->head;
                                                    i_145=0;
                                                    while(_while_condtional24=it_144!=((void*)0),                                                    _while_condtional24) {
                                                        if(_if_conditional239=i_145<tail,                                                        _if_conditional239) {
                                                            prev_it_146=it_144;
                                                            it_144=it_144->next;
                                                            i_145++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional240=i_145==tail,                                                            _if_conditional240) {
                                                                self->head=it_144;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_144=it_144->next;
                                                                i_145++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional241=tail==self->len,                                                    _if_conditional241) {
                                                        it_147=self->head;
                                                        i_148=0;
                                                        while(_while_condtional25=it_147!=((void*)0),                                                        _while_condtional25) {
                                                            if(_if_conditional242=i_148==head,                                                            _if_conditional242) {
                                                                self->tail=it_147->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional243=i_148>=head,                                                            _if_conditional243) {
                                                                prev_it_149=it_147;
                                                                it_147=it_147->next;
                                                                i_148++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_147=it_147->next;
                                                                i_148++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_150=self->head;
                                                        head_prev_it_151=((void*)0);
                                                        tail_it_152=((void*)0);
                                                        i_153=0;
                                                        while(_while_condtional26=it_150!=((void*)0),                                                        _while_condtional26) {
                                                            if(_if_conditional244=i_153==head,                                                            _if_conditional244) {
                                                                head_prev_it_151=it_150->prev;
                                                            }
                                                            if(_if_conditional245=i_153==tail,                                                            _if_conditional245) {
                                                                tail_it_152=it_150;
                                                            }
                                                            if(_if_conditional246=i_153>=head&&i_153<tail,                                                            _if_conditional246) {
                                                                prev_it_154=it_150;
                                                                it_150=it_150->next;
                                                                i_153++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_150=it_150->next;
                                                                i_153++;
                                                            }
                                                        }
                                                        if(_if_conditional247=head_prev_it_151!=((void*)0),                                                        _if_conditional247) {
                                                            head_prev_it_151->next=tail_it_152;
                                                        }
                                                        if(_if_conditional248=tail_it_152!=((void*)0),                                                        _if_conditional248) {
                                                            tail_it_152->prev=head_prev_it_151;
                                                        }
                                                    }
                                                }
                                            }
                                            __result112__ = __result_obj__ = self;
                                            return __result112__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_142;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_143;
struct list$1charp* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_142, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_143, 0, sizeof(struct list_item$1charp*));
                                                    it_142=self->head;
                                                    while(_while_condtional23=it_142!=((void*)0),                                                    _while_condtional23) {
                                                        prev_it_143=it_142;
                                                        it_142=it_142->next;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result111__ = __result_obj__ = self;
                                                    return __result111__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional254;
char* result_156;
char* __result114__;
_Bool _if_conditional255;
char* __result115__;
char* result_157;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_156, 0, sizeof(char*));
memset(&result_157, 0, sizeof(char*));
                if(_if_conditional254=self==((void*)0),                _if_conditional254) {
                    memset(&result_156,0,sizeof(char*));
                    __result114__ = __result_obj__ = result_156;
                    return __result114__;
                }
                self->it=self->head;
                if(self->it) {
                    __result115__ = __result_obj__ = self->it->item;
                    return __result115__;
                }
                memset(&result_157,0,sizeof(char*));
                __result116__ = __result_obj__ = result_157;
                return __result116__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
                __result117__ = self==((void*)0)||self->it==((void*)0);
                return __result117__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional256;
char* result_159;
char* __result118__;
_Bool _if_conditional257;
char* __result119__;
char* result_160;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_159, 0, sizeof(char*));
memset(&result_160, 0, sizeof(char*));
                if(_if_conditional256=self==((void*)0)||self->it==((void*)0),                _if_conditional256) {
                    memset(&result_159,0,sizeof(char*));
                    __result118__ = __result_obj__ = result_159;
                    return __result118__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result119__ = __result_obj__ = self->it->item;
                    return __result119__;
                }
                memset(&result_160,0,sizeof(char*));
                __result120__ = __result_obj__ = result_160;
                return __result120__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional260;
void* right_value174;
struct list_item$1charp* litem_161;
_Bool _if_conditional261;
void* right_value175;
struct list_item$1charp* litem_162;
void* right_value176;
struct list_item$1charp* litem_163;
struct list$1charp* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1charp*));
right_value175 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1charp*));
right_value176 = (void*)0;
memset(&litem_163, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional260=self->len==0,                    _if_conditional260) {
                        litem_161=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value174=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_161->prev=((void*)0);
                        litem_161->next=((void*)0);
                        litem_161->item=item;
                        self->tail=litem_161;
                        self->head=litem_161;
                    }
                    else {
                        if(_if_conditional261=self->len==1,                        _if_conditional261) {
                            litem_162=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value175=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_162->prev=self->head;
                            litem_162->next=((void*)0);
                            litem_162->item=item;
                            self->tail=litem_162;
                            self->head->next=litem_162;
                        }
                        else {
                            litem_163=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value176=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_163->prev=self->tail;
                            litem_163->next=((void*)0);
                            litem_163->item=item;
                            self->tail->next=litem_163;
                            self->tail=litem_163;
                        }
                    }
                    self->len++;
                    __result121__ = __result_obj__ = self;
                    return __result121__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
char* source_head_242;
_Bool is_type_name_flag_243;
int sline_244;
_Bool define_struct_nobody_245;
char* p_246;
int sline_247;
_Bool _if_conditional262;
_Bool _if_conditional263;
void* right_value408;
char* word_248;
_Bool _if_conditional264;
_Bool define_function_pointer_result_function_249;
_Bool define_variable_between_brace_250;
_Bool _if_conditional265;
char* p_251;
_Bool _if_conditional266;
void* right_value409;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_252;
char* fun_name_253;
_Bool err_254;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value410;
char* word_255;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool define_function_flag_256;
_Bool _if_conditional274;
char* p_257;
_Bool invalid_type_258;
_Bool _if_conditional275;
void* right_value411;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_259;
char* fun_name_260;
_Bool err_261;
_Bool _if_conditional276;
char* word_262;
_Bool _if_conditional277;
void* right_value412;
char* __dec_obj74;
_Bool _if_conditional278;
void* right_value413;
char* __dec_obj75;
char* __dec_obj76;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _while_condtional27;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value414;
char* __dec_obj77;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool define_variable_263;
_Bool _if_conditional287;
char* p_264;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value415;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_265;
char* fun_name_266;
_Bool err_267;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
void* right_value416;
char* word_268;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value417;
char* word_269;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _while_condtional28;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value418;
char* word_270;
_Bool _if_conditional303;
_Bool _while_condtional30;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
void* right_value419;
char* word_273;
void* right_value420;
void* right_value421;
struct sNode* node_274;
struct sNode* __result125__;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value422;
struct sNode* __result126__;
_Bool _if_conditional309;
char* header_head_275;
void* right_value423;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_276;
char* fun_name_277;
_Bool err_278;
_Bool _if_conditional310;
void* right_value424;
void* right_value425;
struct list$1sTypeph* param_types_279;
void* right_value426;
void* right_value427;
struct list$1charph* param_names_280;
_Bool _if_conditional311;
_Bool _while_condtional31;
void* right_value428;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_281;
char* param_name_282;
_Bool err_283;
_Bool _if_conditional312;
static int num_function_pointer_result_var_name_a_284=0;
void* right_value429;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value430;
void* right_value431;
struct list$1sTypeph* param_types2_285;
void* right_value432;
void* right_value433;
struct list$1charph* param_names2_286;
_Bool _if_conditional316;
_Bool _while_condtional32;
void* right_value434;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_287;
char* param_name_288;
_Bool err_289;
_Bool _if_conditional317;
static int num_function_pointer_result_var_name_b_290=0;
void* right_value435;
_Bool _if_conditional318;
_Bool _if_conditional319;
char* header_tail_291;
void* right_value436;
void* right_value437;
struct sType* result_type2_292;
void* right_value438;
void* right_value439;
struct tuple1$1sTypeph* __dec_obj79;
void* right_value440;
struct list$1sTypeph* __dec_obj80;
void* right_value441;
struct list$1charph* __dec_obj81;
_Bool var_args_293;
void* right_value442;
void* right_value443;
struct buffer* header_buf_294;
void* right_value444;
void* right_value445;
struct list$1charph* param_default_parametors_295;
void* right_value446;
void* right_value447;
void* right_value448;
void* right_value449;
void* right_value450;
struct sFun* fun_296;
void* right_value451;
struct sFun* fun2_300;
_Bool _if_conditional324;
void* right_value452;
void* right_value453;
void* right_value454;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value489;
struct sNode* __result156__;
_Bool _if_conditional389;
void* right_value490;
struct sNode* __result157__;
_Bool _if_conditional390;
void* right_value491;
struct sNode* node_335;
char* source_tail_336;
void* right_value492;
void* right_value493;
struct buffer* header_337;
void* right_value494;
struct sNode* __result158__;
void* right_value495;
char* buf2_338;
void* right_value496;
struct sNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_242, 0, sizeof(char*));
memset(&is_type_name_flag_243, 0, sizeof(_Bool));
memset(&sline_244, 0, sizeof(int));
memset(&define_struct_nobody_245, 0, sizeof(_Bool));
memset(&p_246, 0, sizeof(char*));
memset(&sline_247, 0, sizeof(int));
right_value408 = (void*)0;
memset(&word_248, 0, sizeof(char*));
memset(&define_function_pointer_result_function_249, 0, sizeof(_Bool));
memset(&define_variable_between_brace_250, 0, sizeof(_Bool));
memset(&p_251, 0, sizeof(char*));
right_value409 = (void*)0;
memset(&result_type_252, 0, sizeof(struct sType*));
memset(&fun_name_253, 0, sizeof(char*));
memset(&err_254, 0, sizeof(_Bool));
memset(&result_type_252, 0, sizeof(struct sType*));
memset(&fun_name_253, 0, sizeof(char*));
memset(&err_254, 0, sizeof(_Bool));
right_value410 = (void*)0;
memset(&word_255, 0, sizeof(char*));
memset(&define_function_flag_256, 0, sizeof(_Bool));
memset(&p_257, 0, sizeof(char*));
memset(&invalid_type_258, 0, sizeof(_Bool));
right_value411 = (void*)0;
memset(&result_type_259, 0, sizeof(struct sType*));
memset(&fun_name_260, 0, sizeof(char*));
memset(&err_261, 0, sizeof(_Bool));
memset(&result_type_259, 0, sizeof(struct sType*));
memset(&fun_name_260, 0, sizeof(char*));
memset(&err_261, 0, sizeof(_Bool));
memset(&word_262, 0, sizeof(char*));
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&define_variable_263, 0, sizeof(_Bool));
memset(&p_264, 0, sizeof(char*));
right_value415 = (void*)0;
memset(&result_type_265, 0, sizeof(struct sType*));
memset(&fun_name_266, 0, sizeof(char*));
memset(&err_267, 0, sizeof(_Bool));
memset(&result_type_265, 0, sizeof(struct sType*));
memset(&fun_name_266, 0, sizeof(char*));
memset(&err_267, 0, sizeof(_Bool));
right_value416 = (void*)0;
memset(&word_268, 0, sizeof(char*));
right_value417 = (void*)0;
memset(&word_269, 0, sizeof(char*));
right_value418 = (void*)0;
memset(&word_270, 0, sizeof(char*));
right_value419 = (void*)0;
memset(&word_273, 0, sizeof(char*));
right_value420 = (void*)0;
right_value421 = (void*)0;
memset(&node_274, 0, sizeof(struct sNode*));
right_value422 = (void*)0;
memset(&header_head_275, 0, sizeof(char*));
right_value423 = (void*)0;
memset(&result_type_276, 0, sizeof(struct sType*));
memset(&fun_name_277, 0, sizeof(char*));
memset(&err_278, 0, sizeof(_Bool));
memset(&result_type_276, 0, sizeof(struct sType*));
memset(&fun_name_277, 0, sizeof(char*));
memset(&err_278, 0, sizeof(_Bool));
right_value424 = (void*)0;
right_value425 = (void*)0;
memset(&param_types_279, 0, sizeof(struct list$1sTypeph*));
right_value426 = (void*)0;
right_value427 = (void*)0;
memset(&param_names_280, 0, sizeof(struct list$1charph*));
right_value428 = (void*)0;
memset(&param_type_281, 0, sizeof(struct sType*));
memset(&param_name_282, 0, sizeof(char*));
memset(&err_283, 0, sizeof(_Bool));
memset(&param_type_281, 0, sizeof(struct sType*));
memset(&param_name_282, 0, sizeof(char*));
memset(&err_283, 0, sizeof(_Bool));
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
memset(&param_types2_285, 0, sizeof(struct list$1sTypeph*));
right_value432 = (void*)0;
right_value433 = (void*)0;
memset(&param_names2_286, 0, sizeof(struct list$1charph*));
right_value434 = (void*)0;
memset(&param_type_287, 0, sizeof(struct sType*));
memset(&param_name_288, 0, sizeof(char*));
memset(&err_289, 0, sizeof(_Bool));
memset(&param_type_287, 0, sizeof(struct sType*));
memset(&param_name_288, 0, sizeof(char*));
memset(&err_289, 0, sizeof(_Bool));
right_value435 = (void*)0;
memset(&header_tail_291, 0, sizeof(char*));
right_value436 = (void*)0;
right_value437 = (void*)0;
memset(&result_type2_292, 0, sizeof(struct sType*));
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
memset(&var_args_293, 0, sizeof(_Bool));
right_value442 = (void*)0;
right_value443 = (void*)0;
memset(&header_buf_294, 0, sizeof(struct buffer*));
right_value444 = (void*)0;
right_value445 = (void*)0;
memset(&param_default_parametors_295, 0, sizeof(struct list$1charph*));
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value450 = (void*)0;
memset(&fun_296, 0, sizeof(struct sFun*));
right_value451 = (void*)0;
memset(&fun2_300, 0, sizeof(struct sFun*));
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value454 = (void*)0;
right_value489 = (void*)0;
right_value490 = (void*)0;
right_value491 = (void*)0;
memset(&node_335, 0, sizeof(struct sNode*));
memset(&source_tail_336, 0, sizeof(char*));
right_value492 = (void*)0;
right_value493 = (void*)0;
memset(&header_337, 0, sizeof(struct buffer*));
right_value494 = (void*)0;
right_value495 = (void*)0;
memset(&buf2_338, 0, sizeof(char*));
right_value496 = (void*)0;
    source_head_242=info->p;
    is_type_name_flag_243=is_type_name(buf,info);
    sline_244=info->sline;
    define_struct_nobody_245=(_Bool)0;
    {
        p_246=info->p;
        sline_247=info->sline;
        if(_if_conditional262=charp_operator_equals(buf,"struct"),        _if_conditional262) {
            if(_if_conditional263=xisalpha(*info->p)||*info->p==95,            _if_conditional263) {
                word_248=(char*)come_increment_ref_count(((char*)(right_value408=parse_word(info))));
                right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional264=*info->p==59,                _if_conditional264) {
                    define_struct_nobody_245=(_Bool)1;
                }
                word_248 = come_decrement_ref_count2(word_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_247;
    }
    define_function_pointer_result_function_249=(_Bool)0;
    define_variable_between_brace_250=(_Bool)0;
    if(is_type_name_flag_243) {
        p_251=info->p;
        info->p=head;
        if(_if_conditional266=xisalpha(*info->p)||*info->p==95,        _if_conditional266) {
            info->no_output_err=(_Bool)1;
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value409=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_252=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_253=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_254=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=(_Bool)0;
            if(_if_conditional269=*info->p==40,            _if_conditional269) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional270=*info->p!=42,                _if_conditional270) {
                    define_function_pointer_result_function_249=(_Bool)1;
                    if(_if_conditional271=xisalpha(*info->p)||*info->p==95,                    _if_conditional271) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_255=(char*)come_increment_ref_count(((char*)(right_value410=parse_word(info))));
                        right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional272=!is_type_name(word_255,info)&&*info->p==41,                        _if_conditional272) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional273=*info->p==40,                            _if_conditional273) {
                            }
                            else {
                                define_variable_between_brace_250=(_Bool)1;
                            }
                        }
                        word_255 = come_decrement_ref_count2(word_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_253 = come_decrement_ref_count2(fun_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_244;
    }
    define_function_flag_256=(_Bool)0;
    if(_if_conditional274=is_type_name_flag_243&&!define_function_pointer_result_function_249&&charp_operator_not_equals(buf,"__typeof__"),    _if_conditional274) {
        p_257=info->p;
        info->p=head;
        invalid_type_258=(_Bool)0;
        info->no_output_err=(_Bool)1;
        if(_if_conditional275=xisalpha(*info->p)||*info->p==95,        _if_conditional275) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value411=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_259=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_260=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_261=multiple_assign_var2->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,result_type_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_260 = come_decrement_ref_count2(fun_name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->no_output_err=(_Bool)0;
        if(_if_conditional276=!info->define_struct,        _if_conditional276) {
            info->define_struct=(_Bool)0;
            word_262=((void*)0);
            if(_if_conditional277=xisalnum(*info->p)||*info->p==95,            _if_conditional277) {
                __dec_obj74=word_262;
                word_262=(char*)come_increment_ref_count(((char*)(right_value412=parse_word(info))));
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional278=string_operator_equals(word_262,"extern"),                _if_conditional278) {
                    __dec_obj75=word_262;
                    word_262=(char*)come_increment_ref_count(((char*)(right_value413=parse_word(info))));
                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                __dec_obj76=word_262;
                word_262=((void*)0);
                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_262) {
                if(_if_conditional280=is_type_name(word_262,info),                _if_conditional280) {
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
                        __dec_obj77=word_262;
                        word_262=(char*)come_increment_ref_count(((char*)(right_value414=parse_word(info))));
                        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                if(_if_conditional285=strlen(word_262)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                _if_conditional285) {
                    if(is_type_name_flag_243) {
                        define_function_flag_256=(_Bool)1;
                    }
                }
            }
            word_262 = come_decrement_ref_count2(word_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_257;
        info->sline=sline_244;
    }
    define_variable_263=(_Bool)1;
    if(_if_conditional287=is_type_name_flag_243&&!define_function_pointer_result_function_249,    _if_conditional287) {
        p_264=info->p;
        info->p=head;
        if(_if_conditional288=!is_type_name_flag_243,        _if_conditional288) {
            define_variable_263=(_Bool)0;
        }
        if(_if_conditional289=xisalpha(*info->p)||*info->p==95,        _if_conditional289) {
            info->no_output_err=(_Bool)1;
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value415=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_265=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_266=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_267=multiple_assign_var3->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=(_Bool)0;
            if(_if_conditional290=*info->p==40,            _if_conditional290) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional291=*info->p==42,                _if_conditional291) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional292=xisalpha(*info->p)||*info->p==95,                    _if_conditional292) {
                        word_268=(char*)come_increment_ref_count(((char*)(right_value416=parse_word(info))));
                        right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional293=*info->p==41,                        _if_conditional293) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional294=*info->p==40,                            _if_conditional294) {
                                define_variable_263=(_Bool)1;
                            }
                        }
                        word_268 = come_decrement_ref_count2(word_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(_if_conditional295=xisalpha(*info->p)||*info->p==95,                    _if_conditional295) {
                        word_269=(char*)come_increment_ref_count(((char*)(right_value417=parse_word(info))));
                        right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional296=*info->p==41,                        _if_conditional296) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional297=!is_type_name(word_269,info)&&*info->p!=40,                            _if_conditional297) {
                                define_variable_263=(_Bool)1;
                            }
                        }
                        word_269 = come_decrement_ref_count2(word_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_266 = come_decrement_ref_count2(fun_name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_263=(_Bool)0;
        }
        else {
            if(define_variable_263) {
            }
            else {
                if(_if_conditional300=!(xisalpha(*info->p)||*info->p==95),                _if_conditional300) {
                    define_variable_263=(_Bool)0;
                }
                while(_while_condtional28=xisalpha(*info->p)||*info->p==95,                _while_condtional28) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional301=*info->p==40||*info->p==58,                _if_conditional301) {
                    define_variable_263=(_Bool)0;
                }
            }
        }
        info->p=p_264;
        info->sline=sline_244;
    }
    else {
        define_variable_263=(_Bool)0;
    }
    if(_if_conditional302=charp_operator_equals(buf,"template"),    _if_conditional302) {
        word_270=(char*)come_increment_ref_count(((char*)(right_value418=parse_word(info))));
        right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                            word_273=(char*)come_increment_ref_count(((char*)(right_value419=parse_word(info))));
                            right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value420=string_clone(word_273)))));
                            right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            word_273 = come_decrement_ref_count2(word_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            node_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=parse_function(info))));
            if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1charph_reset(info->method_generics_type_names);
            __result125__ = __result_obj__ = node_274;
            if(node_274) { node_274 = come_decrement_ref_count2(node_274, ((struct sNode*)node_274)->finalize, ((struct sNode*)node_274)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_270 = come_decrement_ref_count2(word_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result125__;
            if(node_274) { node_274 = come_decrement_ref_count2(node_274, ((struct sNode*)node_274)->finalize, ((struct sNode*)node_274)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_270 = come_decrement_ref_count2(word_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_245) {
        }
        else {
            if(define_variable_between_brace_250) {
                info->p=head;
                info->sline=sline_244;
                __result126__ = __result_obj__ = ((struct sNode*)(right_value422=parse_global_variable(info)));
                if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result126__;
            }
            else {
                if(define_function_pointer_result_function_249) {
                    header_head_275=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value423=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_276=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_277=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_278=multiple_assign_var4->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional310=*info->p==40,                    _if_conditional310) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_279=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value425=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value424=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1148, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        param_names_280=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value427=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value426=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1149, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional311=*info->p==41,                        _if_conditional311) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while(_while_condtional31=(_Bool)1,                            _while_condtional31) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value428=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_281=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_282=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_283=multiple_assign_var5->v3;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional312=!err_283,                                _if_conditional312) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_279,(struct sType*)come_increment_ref_count(param_type_281));
                                list$1charph_push_back(param_names_280,(char*)come_increment_ref_count(((char*)(right_value429=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_284)))));
                                right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional313=*info->p==44,                                _if_conditional313) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(_if_conditional314=*info->p==41,                                    _if_conditional314) {
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
                        expected_next_character(41,info);
                        if(_if_conditional315=*info->p==40,                        _if_conditional315) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_285=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value431=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value430=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1191, "list$1sTypeph"))))))));
                            come_call_finalizer2(list$1sTypephp_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            param_names2_286=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value433=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value432=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1192, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional316=*info->p==41,                            _if_conditional316) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while(_while_condtional32=(_Bool)1,                                _while_condtional32) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value434=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_287=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_288=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_289=multiple_assign_var6->v3;
                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional317=!err_289,                                    _if_conditional317) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_285,(struct sType*)come_increment_ref_count(param_type_287));
                                    list$1charph_push_back(param_names2_286,(char*)come_increment_ref_count(((char*)(right_value435=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_290)))));
                                    right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional318=*info->p==44,                                    _if_conditional318) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(_if_conditional319=*info->p==41,                                        _if_conditional319) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            come_call_finalizer2(sType_finalize,param_type_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            param_name_288 = come_decrement_ref_count2(param_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or )");
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer2(sType_finalize,param_type_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    param_name_288 = come_decrement_ref_count2(param_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_291=info->p;
                            result_type2_292=(struct sType*)come_increment_ref_count(((struct sType*)(right_value437=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value436=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1230, "sType")))),"lambda",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj79=result_type2_292->mResultType;
                            result_type2_292->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value439=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value438=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function2.c", 1232, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_276)))));
                            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj80=result_type2_292->mParamTypes;
                            result_type2_292->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value440=list$1sTypephp_clone(param_types2_285))));
                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj81=result_type2_292->mParamNames;
                            result_type2_292->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value441=list$1charphp_clone(param_names2_286))));
                            come_call_finalizer2(list$1charph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            result_type2_292->mVarArgs=(_Bool)0;
                            result_type2_292->mStatic=(_Bool)0;
                            var_args_293=(_Bool)0;
                            header_buf_294=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value443=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value442=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1240, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_buf_294,header_head_275,header_tail_291-header_head_275);
                            buffer_append_char(header_buf_294,0);
                            param_default_parametors_295=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value445=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value444=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1244, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            fun_296=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value450=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value446=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1246, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value447=__builtin_string(fun_name_277)))),(struct sType*)come_increment_ref_count(result_type2_292),(struct list$1sTypeph*)come_increment_ref_count(param_types_279),(struct list$1charph*)come_increment_ref_count(param_names_280),(struct list$1charph*)come_increment_ref_count(param_default_parametors_295),(_Bool)1,var_args_293,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value448=buffer_to_string(header_buf_294)))),(char*)come_increment_ref_count(((char*)(right_value449=__builtin_string(info->sname)))),info))));
                            come_call_finalizer2(sFun_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value447 = come_decrement_ref_count2(right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            fun2_300=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value451=__builtin_string(fun_name_277))));
                            right_value451 = come_decrement_ref_count2(right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional324=fun2_300==((void*)0)||fun2_300->mExternal,                            _if_conditional324) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value452=string_clone(fun_name_277)))),(struct sFun*)come_increment_ref_count(fun_296));
                                right_value452 = come_decrement_ref_count2(right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1267, "struct sNode");
                            _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value454=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value453=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1267, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_296),info))));
                            _inf_value1->_protocol_obj=_inf_obj_value1;
                            _inf_value1->finalize=(void*)sFunNode_finalize;
                            _inf_value1->clone=(void*)sFunNode_clone;
                            _inf_value1->compile=(void*)sFunNode_compile;
                            _inf_value1->sline=(void*)sFunNode_sline;
                            _inf_value1->sname=(void*)sFunNode_sname;
                            _inf_value1->terminated=(void*)sFunNode_terminated;
                            _inf_value1->kind=(void*)sFunNode_kind;
                            __result156__ = __result_obj__ = ((struct sNode*)(right_value489=_inf_value1));
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,param_types_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            fun_name_277 = come_decrement_ref_count2(fun_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFunNode_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFunNode_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value489) { right_value489 = come_decrement_ref_count2(right_value489, ((struct sNode*)right_value489)->finalize, ((struct sNode*)right_value489)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result156__;
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(sType_finalize,result_type_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    fun_name_277 = come_decrement_ref_count2(fun_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_256) {
                        info->p=head;
                        info->sline=sline_244;
                        __result157__ = __result_obj__ = ((struct sNode*)(right_value490=parse_function(info)));
                        if(right_value490) { right_value490 = come_decrement_ref_count2(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result157__;
                    }
                    else {
                        if(define_variable_263) {
                            info->p=head;
                            info->sline=sline_244;
                            node_335=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value491=parse_global_variable(info))));
                            if(right_value491) { right_value491 = come_decrement_ref_count2(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            source_tail_336=info->p;
                            header_337=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value493=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value492=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1289, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_337,source_head_242,source_tail_336-source_head_242);
                            add_come_code_at_come_header(info,"%s %s;\n",buf,((char*)(right_value494=buffer_to_string(header_337))));
                            right_value494 = come_decrement_ref_count2(right_value494, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __result158__ = __result_obj__ = node_335;
                            if(node_335) { node_335 = come_decrement_ref_count2(node_335, ((struct sNode*)node_335)->finalize, ((struct sNode*)node_335)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer2(buffer_finalize,header_337, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result158__;
                            if(node_335) { node_335 = come_decrement_ref_count2(node_335, ((struct sNode*)node_335)->finalize, ((struct sNode*)node_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(buffer_finalize,header_337, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_244;
    buf2_338=(char*)come_increment_ref_count(((char*)(right_value495=parse_word(info))));
    right_value495 = come_decrement_ref_count2(right_value495, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result159__ = __result_obj__ = ((struct sNode*)(right_value496=top_level_v98(buf2_338,head,head_sline,info)));
    buf2_338 = come_decrement_ref_count2(buf2_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value496) { right_value496 = come_decrement_ref_count2(right_value496, ((struct sNode*)right_value496)->finalize, ((struct sNode*)right_value496)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result159__;
    buf2_338 = come_decrement_ref_count2(buf2_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_271;
_Bool _while_condtional29;
struct list_item$1charph* prev_it_272;
struct list$1charph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_271, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_272, 0, sizeof(struct list_item$1charph*));
                it_271=self->head;
                while(_while_condtional29=it_271!=((void*)0),                _while_condtional29) {
                    prev_it_272=it_271;
                    it_271=it_271->next;
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result124__ = __result_obj__ = self;
                return __result124__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj78;
struct tuple1$1sTypeph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj78=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                __result127__ = __result_obj__ = self;
                                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result127__;
                                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_297;
unsigned int hash_298;
unsigned int it_299;
_Bool _while_condtional33;
_Bool _if_conditional320;
_Bool _if_conditional321;
struct sFun* __result128__;
_Bool _if_conditional322;
_Bool _if_conditional323;
struct sFun* __result129__;
struct sFun* __result130__;
struct sFun* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_297, 0, sizeof(struct sFun*));
memset(&hash_298, 0, sizeof(unsigned int));
memset(&it_299, 0, sizeof(unsigned int));
                                memset(&default_value_297,0,sizeof(struct sFun*));
                                hash_298=string_get_hash_key(((char*)key))%self->size;
                                it_299=hash_298;
                                while(_while_condtional33=(_Bool)1,                                _while_condtional33) {
                                    if(_if_conditional320=self->item_existance[it_299],                                    _if_conditional320) {
                                        if(_if_conditional321=string_equals(self->keys[it_299],key),                                        _if_conditional321) {
                                            __result128__ = __result_obj__ = self->items[it_299];
                                            come_call_finalizer2(sFun_finalize,default_value_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result128__;
                                        }
                                        it_299++;
                                        if(_if_conditional322=it_299>=self->size,                                        _if_conditional322) {
                                            it_299=0;
                                        }
                                        else {
                                            if(_if_conditional323=it_299==hash_298,                                            _if_conditional323) {
                                                __result129__ = __result_obj__ = default_value_297;
                                                come_call_finalizer2(sFun_finalize,default_value_297, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result129__;
                                            }
                                        }
                                    }
                                    else {
                                        __result130__ = __result_obj__ = default_value_297;
                                        come_call_finalizer2(sFun_finalize,default_value_297, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result130__;
                                    }
                                }
                                __result131__ = __result_obj__ = default_value_297;
                                come_call_finalizer2(sFun_finalize,default_value_297, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result131__;
                                come_call_finalizer2(sFun_finalize,default_value_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional329;
struct sFun* __result133__;
void* right_value456;
struct sFun* result_302;
_Bool _if_conditional330;
void* right_value457;
char* __dec_obj82;
_Bool _if_conditional331;
void* right_value458;
struct sType* __dec_obj83;
_Bool _if_conditional332;
void* right_value459;
struct list$1sTypeph* __dec_obj84;
_Bool _if_conditional333;
void* right_value460;
struct list$1charph* __dec_obj85;
_Bool _if_conditional334;
void* right_value461;
struct list$1charph* __dec_obj86;
_Bool _if_conditional335;
void* right_value462;
struct sType* __dec_obj87;
_Bool _if_conditional336;
void* right_value480;
struct sBlock* __dec_obj93;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool _if_conditional379;
void* right_value481;
struct buffer* __dec_obj94;
_Bool _if_conditional380;
void* right_value482;
struct buffer* __dec_obj95;
_Bool _if_conditional381;
void* right_value483;
struct buffer* __dec_obj96;
_Bool _if_conditional382;
void* right_value484;
struct buffer* __dec_obj97;
_Bool _if_conditional383;
_Bool _if_conditional384;
void* right_value485;
char* __dec_obj98;
_Bool _if_conditional385;
_Bool _if_conditional386;
void* right_value486;
char* __dec_obj99;
struct sFun* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value456 = (void*)0;
memset(&result_302, 0, sizeof(struct sFun*));
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value461 = (void*)0;
right_value462 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value482 = (void*)0;
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
                                        if(_if_conditional329=self==(void*)0,                                        _if_conditional329) {
                                            __result133__ = __result_obj__ = (void*)0;
                                            return __result133__;
                                        }
                                        result_302=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value456=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"))));
                                        come_call_finalizer2(sFun_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional330=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional330) {
                                            __dec_obj82=result_302->mName;
                                            result_302->mName=(char*)come_increment_ref_count(((char*)(right_value457=string_clone(self->mName))));
                                            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value457 = come_decrement_ref_count2(right_value457, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional331=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional331) {
                                            __dec_obj83=result_302->mResultType;
                                            result_302->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value458=sType_clone(self->mResultType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional332=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional332) {
                                            __dec_obj84=result_302->mParamTypes;
                                            result_302->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value459=list$1sTypephp_clone(self->mParamTypes))));
                                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional333=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional333) {
                                            __dec_obj85=result_302->mParamNames;
                                            result_302->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value460=list$1charphp_clone(self->mParamNames))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional334=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                        _if_conditional334) {
                                            __dec_obj86=result_302->mParamDefaultParametors;
                                            result_302->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value461=list$1charphp_clone(self->mParamDefaultParametors))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional335=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                        _if_conditional335) {
                                            __dec_obj87=result_302->mLambdaType;
                                            result_302->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value462=sType_clone(self->mLambdaType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional336=self!=((void*)0)&&self->mBlock!=((void*)0),                                        _if_conditional336) {
                                            __dec_obj93=result_302->mBlock;
                                            result_302->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value480=sBlock_clone(self->mBlock))));
                                            come_call_finalizer2(sBlock_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sBlock_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional377=self!=((void*)0),                                        _if_conditional377) {
                                            result_302->mExternal=self->mExternal;
                                        }
                                        if(_if_conditional378=self!=((void*)0),                                        _if_conditional378) {
                                            result_302->mVarArgs=self->mVarArgs;
                                        }
                                        if(_if_conditional379=self!=((void*)0)&&self->mSource!=((void*)0),                                        _if_conditional379) {
                                            __dec_obj94=result_302->mSource;
                                            result_302->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value481=buffer_clone(self->mSource))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional380=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                        _if_conditional380) {
                                            __dec_obj95=result_302->mSourceHead;
                                            result_302->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value482=buffer_clone(self->mSourceHead))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional381=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                        _if_conditional381) {
                                            __dec_obj96=result_302->mSourceHead2;
                                            result_302->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value483=buffer_clone(self->mSourceHead2))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional382=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                        _if_conditional382) {
                                            __dec_obj97=result_302->mSourceDefer;
                                            result_302->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value484=buffer_clone(self->mSourceDefer))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional383=self!=((void*)0),                                        _if_conditional383) {
                                            result_302->mStatic=self->mStatic;
                                        }
                                        if(_if_conditional384=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                        _if_conditional384) {
                                            __dec_obj98=result_302->mComeHeader;
                                            result_302->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value485=string_clone(self->mComeHeader))));
                                            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value485 = come_decrement_ref_count2(right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional385=self!=((void*)0),                                        _if_conditional385) {
                                            result_302->mCloner=self->mCloner;
                                        }
                                        if(_if_conditional386=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                        _if_conditional386) {
                                            __dec_obj99=result_302->mDeclareSName;
                                            result_302->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value486=string_clone(self->mDeclareSName))));
                                            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value486 = come_decrement_ref_count2(right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result154__ = __result_obj__ = result_302;
                                        come_call_finalizer2(sFun_finalize,result_302, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result154__;
                                        come_call_finalizer2(sFun_finalize,result_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional337;
struct sBlock* __result134__;
void* right_value463;
struct sBlock* result_303;
_Bool _if_conditional338;
void* right_value464;
struct list$1sNodeph* __dec_obj88;
_Bool _if_conditional339;
void* right_value479;
struct sVarTable* __dec_obj92;
struct sBlock* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value463 = (void*)0;
memset(&result_303, 0, sizeof(struct sBlock*));
right_value464 = (void*)0;
right_value479 = (void*)0;
                                                if(_if_conditional337=self==(void*)0,                                                _if_conditional337) {
                                                    __result134__ = __result_obj__ = (void*)0;
                                                    return __result134__;
                                                }
                                                result_303=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value463=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
                                                come_call_finalizer2(sBlock_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional338=self!=((void*)0)&&self->mNodes!=((void*)0),                                                _if_conditional338) {
                                                    __dec_obj88=result_303->mNodes;
                                                    result_303->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value464=list$1sNodephp_clone(self->mNodes))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional339=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                _if_conditional339) {
                                                    __dec_obj92=result_303->mVarTable;
                                                    result_303->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value479=sVarTable_clone(self->mVarTable))));
                                                    come_call_finalizer2(sVarTable_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sVarTable_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result153__ = __result_obj__ = result_303;
                                                come_call_finalizer2(sBlock_finalize,result_303, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result153__;
                                                come_call_finalizer2(sBlock_finalize,result_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional340;
struct sVarTable* __result135__;
void* right_value465;
struct sVarTable* result_304;
_Bool _if_conditional341;
void* right_value478;
struct map$2charphsVarph* __dec_obj91;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
struct sVarTable* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value465 = (void*)0;
memset(&result_304, 0, sizeof(struct sVarTable*));
right_value478 = (void*)0;
                                                        if(_if_conditional340=self==(void*)0,                                                        _if_conditional340) {
                                                            __result135__ = __result_obj__ = (void*)0;
                                                            return __result135__;
                                                        }
                                                        result_304=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value465=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                                                        come_call_finalizer2(sVarTable_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional341=self!=((void*)0)&&self->mVars!=((void*)0),                                                        _if_conditional341) {
                                                            __dec_obj91=result_304->mVars;
                                                            result_304->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value478=map$2charphsVarphp_clone(self->mVars))));
                                                            come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(map$2charphsVarphp_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional374=self!=((void*)0),                                                        _if_conditional374) {
                                                            result_304->mGlobal=self->mGlobal;
                                                        }
                                                        if(_if_conditional375=self!=((void*)0),                                                        _if_conditional375) {
                                                            result_304->mParent=self->mParent;
                                                        }
                                                        if(_if_conditional376=self!=((void*)0),                                                        _if_conditional376) {
                                                            result_304->mID=self->mID;
                                                        }
                                                        __result152__ = __result_obj__ = result_304;
                                                        come_call_finalizer2(sVarTable_finalize,result_304, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result152__;
                                                        come_call_finalizer2(sVarTable_finalize,result_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional342;
struct map$2charphsVarph* __result136__;
void* right_value466;
void* right_value472;
struct map$2charphsVarph* result_310;
void* right_value473;
void* right_value474;
struct list$1charp* __dec_obj90;
char* it_313;
struct sVar* default_value_316;
struct sVar* it2_319;
struct map$2charphsVarph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value466 = (void*)0;
right_value472 = (void*)0;
memset(&result_310, 0, sizeof(struct map$2charphsVarph*));
right_value473 = (void*)0;
right_value474 = (void*)0;
memset(&it_313, 0, sizeof(char*));
memset(&default_value_316, 0, sizeof(struct sVar*));
memset(&it2_319, 0, sizeof(struct sVar*));
                                                                if(_if_conditional342=self==((void*)0),                                                                _if_conditional342) {
                                                                    __result136__ = __result_obj__ = ((void*)0);
                                                                    return __result136__;
                                                                }
                                                                result_310=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value472=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value466=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1178, "map$2charphsVarph"))))))));
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                __dec_obj90=result_310->key_list;
                                                                result_310->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value474=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value473=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1180, "list$1charp"))))))));
                                                                come_call_finalizer2(list$1charp_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(list$1charpp_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(list$1charpp_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                for(                                                                it_313=map$2charphsVarph_begin(self);                                                                !map$2charphsVarph_end(self);                                                                it_313=map$2charphsVarph_next(self)                                                                ){
                                                                    memset(&default_value_316,0,sizeof(struct sVar*));
                                                                    it2_319=map$2charphsVarph_at(self,it_313,default_value_316);
                                                                    map$2charphsVarph_insert2(result_310,it_313,it2_319);
                                                                }
                                                                __result151__ = __result_obj__ = result_310;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_310, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result151__;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value467;
void* right_value468;
void* right_value469;
int i_305;
void* right_value470;
void* right_value471;
struct list$1charp* __dec_obj89;
struct map$2charphsVarph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value467 = (void*)0;
right_value468 = (void*)0;
right_value469 = (void*)0;
memset(&i_305, 0, sizeof(int));
right_value470 = (void*)0;
right_value471 = (void*)0;
                                                                    self->keys=(char**)come_increment_ref_count(((char**)(right_value467=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1084, "char*%"))));
                                                                    right_value467 = come_decrement_ref_count2(right_value467, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value468=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1085, "sVar*%"))));
                                                                    come_call_finalizer2(sVar_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value469=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1086, "bool"))));
                                                                    right_value469 = come_decrement_ref_count2(right_value469, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    for(                                                                    i_305=0;                                                                    i_305<1024;                                                                    i_305++                                                                    ){
                                                                        self->item_existance[i_305]=(_Bool)0;
                                                                    }
                                                                    self->size=1024;
                                                                    self->len=0;
                                                                    __dec_obj89=self->key_list;
                                                                    self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value471=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value470=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1096, "list$1charp"))))))));
                                                                    come_call_finalizer2(list$1charp_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    self->it=0;
                                                                    __result138__ = __result_obj__ = self;
                                                                    come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result138__;
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
struct list$1charp* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result137__ = __result_obj__ = self;
                                                                        come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result137__;
                                                                        come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_306;
_Bool _while_condtional34;
struct list_item$1charp* prev_it_307;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_306, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_307, 0, sizeof(struct list_item$1charp*));
                                                                            it_306=self->head;
                                                                            while(_while_condtional34=it_306!=((void*)0),                                                                            _while_condtional34) {
                                                                                prev_it_307=it_306;
                                                                                it_306=it_306->next;
                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_307, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_308;
_Bool _if_conditional347;
_Bool _if_conditional348;
int i_309;
_Bool _if_conditional349;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_308, 0, sizeof(int));
memset(&i_309, 0, sizeof(int));
                                                                        for(                                                                        i_308=0;                                                                        i_308<self->size;                                                                        i_308++                                                                        ){
                                                                            if(_if_conditional347=self->item_existance[i_308],                                                                            _if_conditional347) {
                                                                                if(_if_conditional348=1,                                                                                _if_conditional348) {
                                                                                    come_call_finalizer2(sVar_finalize,self->items[i_308], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->items);
                                                                        for(                                                                        i_309=0;                                                                        i_309<self->size;                                                                        i_309++                                                                        ){
                                                                            if(_if_conditional349=self->item_existance[i_309],                                                                            _if_conditional349) {
                                                                                if(_if_conditional350=1,                                                                                _if_conditional350) {
                                                                                    self->keys[i_309] = come_decrement_ref_count2(self->keys[i_309], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
char* result_311;
char* __result139__;
_Bool _if_conditional352;
char* __result140__;
char* result_312;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_311, 0, sizeof(char*));
memset(&result_312, 0, sizeof(char*));
                                                                    if(_if_conditional351=self==((void*)0),                                                                    _if_conditional351) {
                                                                        memset(&result_311,0,sizeof(char*));
                                                                        __result139__ = __result_obj__ = result_311;
                                                                        return __result139__;
                                                                    }
                                                                    self->key_list->it=self->key_list->head;
                                                                    if(self->key_list->it) {
                                                                        __result140__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result140__;
                                                                    }
                                                                    memset(&result_312,0,sizeof(char*));
                                                                    __result141__ = __result_obj__ = result_312;
                                                                    return __result141__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    __result142__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                                    return __result142__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional353;
char* result_314;
char* __result143__;
_Bool _if_conditional354;
char* __result144__;
char* result_315;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_314, 0, sizeof(char*));
memset(&result_315, 0, sizeof(char*));
                                                                    if(_if_conditional353=self==((void*)0)||self->key_list->it==((void*)0),                                                                    _if_conditional353) {
                                                                        memset(&result_314,0,sizeof(char*));
                                                                        __result143__ = __result_obj__ = result_314;
                                                                        return __result143__;
                                                                    }
                                                                    self->key_list->it=self->key_list->it->next;
                                                                    if(self->key_list->it) {
                                                                        __result144__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result144__;
                                                                    }
                                                                    memset(&result_315,0,sizeof(char*));
                                                                    __result145__ = __result_obj__ = result_315;
                                                                    return __result145__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_317;
unsigned int it_318;
_Bool _while_condtional35;
_Bool _if_conditional355;
_Bool _if_conditional356;
struct sVar* __result146__;
_Bool _if_conditional357;
_Bool _if_conditional358;
struct sVar* __result147__;
struct sVar* __result148__;
struct sVar* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_317, 0, sizeof(unsigned int));
memset(&it_318, 0, sizeof(unsigned int));
                                                                        hash_317=string_get_hash_key(((char*)key))%self->size;
                                                                        it_318=hash_317;
                                                                        while(_while_condtional35=(_Bool)1,                                                                        _while_condtional35) {
                                                                            if(_if_conditional355=self->item_existance[it_318],                                                                            _if_conditional355) {
                                                                                if(_if_conditional356=string_equals(self->keys[it_318],key),                                                                                _if_conditional356) {
                                                                                    __result146__ = __result_obj__ = self->items[it_318];
                                                                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result146__;
                                                                                }
                                                                                it_318++;
                                                                                if(_if_conditional357=it_318>=self->size,                                                                                _if_conditional357) {
                                                                                    it_318=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional358=it_318==hash_317,                                                                                    _if_conditional358) {
                                                                                        __result147__ = __result_obj__ = default_value;
                                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result147__;
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                __result148__ = __result_obj__ = default_value;
                                                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result148__;
                                                                            }
                                                                        }
                                                                        __result149__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result149__;
                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional359;
unsigned int hash_331;
int it_332;
_Bool _while_condtional37;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool same_key_exist_333;
char* it2_334;
_Bool _if_conditional371;
_Bool _if_conditional372;
struct map$2charphsVarph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_331, 0, sizeof(unsigned int));
memset(&it_332, 0, sizeof(int));
memset(&same_key_exist_333, 0, sizeof(_Bool));
memset(&it2_334, 0, sizeof(char*));
                                                                        if(_if_conditional359=self->len*2>=self->size,                                                                        _if_conditional359) {
                                                                            map$2charphsVarph_rehash(self);
                                                                        }
                                                                        hash_331=string_get_hash_key(key)%self->size;
                                                                        it_332=hash_331;
                                                                        while(_while_condtional37=(_Bool)1,                                                                        _while_condtional37) {
                                                                            if(_if_conditional363=self->item_existance[it_332],                                                                            _if_conditional363) {
                                                                                if(_if_conditional364=string_equals(self->keys[it_332],key),                                                                                _if_conditional364) {
                                                                                    if(_if_conditional365=1,                                                                                    _if_conditional365) {
                                                                                        self->keys[it_332] = come_decrement_ref_count2(self->keys[it_332], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        list$1charp_remove(self->key_list,self->keys[it_332]);
                                                                                        self->keys[it_332]=(char*)come_increment_ref_count(key);
                                                                                    }
                                                                                    else {
                                                                                        list$1charp_remove(self->key_list,self->keys[it_332]);
                                                                                        self->keys[it_332]=key;
                                                                                    }
                                                                                    if(_if_conditional366=1,                                                                                    _if_conditional366) {
                                                                                        come_call_finalizer2(sVar_finalize,self->items[it_332], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        self->items[it_332]=(struct sVar*)come_increment_ref_count(item);
                                                                                    }
                                                                                    else {
                                                                                        self->items[it_332]=item;
                                                                                    }
                                                                                    break;
                                                                                }
                                                                                it_332++;
                                                                                if(_if_conditional367=it_332>=self->size,                                                                                _if_conditional367) {
                                                                                    it_332=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional368=it_332==hash_331,                                                                                    _if_conditional368) {
                                                                                        printf("unexpected error in map.insert\n");
                                                                                        stackframe();
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                self->item_existance[it_332]=(_Bool)1;
                                                                                if(_if_conditional369=1,                                                                                _if_conditional369) {
                                                                                    self->keys[it_332]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    self->keys[it_332]=key;
                                                                                }
                                                                                if(_if_conditional370=1,                                                                                _if_conditional370) {
                                                                                    self->items[it_332]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    self->items[it_332]=item;
                                                                                }
                                                                                self->len++;
                                                                                break;
                                                                            }
                                                                        }
                                                                        same_key_exist_333=(_Bool)0;
                                                                        for(                                                                        it2_334=list$1charp_begin(self->key_list);                                                                        !list$1charp_end(self->key_list);                                                                        it2_334=list$1charp_next(self->key_list)                                                                        ){
                                                                            if(_if_conditional371=string_equals(it2_334,key),                                                                            _if_conditional371) {
                                                                                same_key_exist_333=(_Bool)1;
                                                                            }
                                                                        }
                                                                        if(_if_conditional372=!same_key_exist_333,                                                                        _if_conditional372) {
                                                                            list$1charp_push_back(self->key_list,key);
                                                                        }
                                                                        __result150__ = __result_obj__ = self;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result150__;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_320;
void* right_value475;
char** keys_321;
void* right_value476;
struct sVar** items_322;
void* right_value477;
_Bool* item_existance_323;
int len_324;
char* it_325;
struct sVar* default_value_326;
struct sVar* it2_327;
unsigned int hash_328;
int n_329;
_Bool _while_condtional36;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
struct sVar* default_value_330;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_320, 0, sizeof(int));
right_value475 = (void*)0;
memset(&keys_321, 0, sizeof(char**));
right_value476 = (void*)0;
memset(&items_322, 0, sizeof(struct sVar**));
right_value477 = (void*)0;
memset(&item_existance_323, 0, sizeof(_Bool*));
memset(&len_324, 0, sizeof(int));
memset(&it_325, 0, sizeof(char*));
memset(&default_value_326, 0, sizeof(struct sVar*));
memset(&it2_327, 0, sizeof(struct sVar*));
memset(&hash_328, 0, sizeof(unsigned int));
memset(&n_329, 0, sizeof(int));
memset(&default_value_330, 0, sizeof(struct sVar*));
                                                                                size_320=self->size*10;
                                                                                keys_321=(char**)come_increment_ref_count(((char**)(right_value475=(char**)come_calloc(1, sizeof(char*)*(1*(size_320)), "./comelang2.h", 1335, "char*%"))));
                                                                                right_value475 = come_decrement_ref_count2(right_value475, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                items_322=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value476=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_320)), "./comelang2.h", 1336, "sVar*%"))));
                                                                                come_call_finalizer2(sVar_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                item_existance_323=(_Bool*)come_increment_ref_count(((_Bool*)(right_value477=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_320)), "./comelang2.h", 1337, "bool"))));
                                                                                right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                len_324=0;
                                                                                for(                                                                                it_325=map$2charphsVarph_begin(self);                                                                                !map$2charphsVarph_end(self);                                                                                it_325=map$2charphsVarph_next(self)                                                                                ){
                                                                                    memset(&default_value_326,0,sizeof(struct sVar*));
                                                                                    it2_327=map$2charphsVarph_at(self,it_325,default_value_326);
                                                                                    hash_328=string_get_hash_key(it_325)%size_320;
                                                                                    n_329=hash_328;
                                                                                    while(_while_condtional36=(_Bool)1,                                                                                    _while_condtional36) {
                                                                                        if(_if_conditional360=item_existance_323[n_329],                                                                                        _if_conditional360) {
                                                                                            n_329++;
                                                                                            if(_if_conditional361=n_329>=size_320,                                                                                            _if_conditional361) {
                                                                                                n_329=0;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional362=n_329==hash_328,                                                                                                _if_conditional362) {
                                                                                                    printf("unexpected error in map.rehash(1)\n");
                                                                                                    stackframe();
                                                                                                    exit(2);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            item_existance_323[n_329]=(_Bool)1;
                                                                                            keys_321[n_329]=it_325;
                                                                                            items_322[n_329]=map$2charphsVarph_at(self,it_325,default_value_330);
                                                                                            len_324++;
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                come_free((char*)self->items);
                                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_free((char*)self->keys);
                                                                                self->keys=keys_321;
                                                                                self->items=items_322;
                                                                                self->item_existance=item_existance_323;
                                                                                self->size=size_320;
                                                                                self->len=len_324;
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
struct sClass* klass_344;
struct sType* type_348;
struct sClass* generics_class_349;
void* right_value497;
_Bool generics_type_name_351;
void* right_value498;
_Bool mgenerics_type_name_352;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_344, 0, sizeof(struct sClass*));
memset(&type_348, 0, sizeof(struct sType*));
memset(&generics_class_349, 0, sizeof(struct sClass*));
right_value497 = (void*)0;
memset(&generics_type_name_351, 0, sizeof(_Bool));
right_value498 = (void*)0;
memset(&mgenerics_type_name_352, 0, sizeof(_Bool));
    klass_344=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_348=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_349=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_351=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value497=__builtin_string(buf)))));
    right_value497 = come_decrement_ref_count2(right_value497, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    mgenerics_type_name_352=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value498=__builtin_string(buf)))));
    right_value498 = come_decrement_ref_count2(right_value498, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result170__ = generics_class_349||generics_type_name_351||mgenerics_type_name_352||klass_344||type_348||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
    return __result170__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_339;
unsigned int hash_340;
unsigned int it_341;
_Bool _while_condtional38;
_Bool _if_conditional391;
_Bool _if_conditional392;
struct sClass* __result160__;
_Bool _if_conditional399;
_Bool _if_conditional400;
struct sClass* __result161__;
struct sClass* __result162__;
struct sClass* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_339, 0, sizeof(struct sClass*));
memset(&hash_340, 0, sizeof(unsigned int));
memset(&it_341, 0, sizeof(unsigned int));
        memset(&default_value_339,0,sizeof(struct sClass*));
        hash_340=string_get_hash_key(((char*)key))%self->size;
        it_341=hash_340;
        while(_while_condtional38=(_Bool)1,        _while_condtional38) {
            if(_if_conditional391=self->item_existance[it_341],            _if_conditional391) {
                if(_if_conditional392=string_equals(self->keys[it_341],key),                _if_conditional392) {
                    __result160__ = __result_obj__ = self->items[it_341];
                    come_call_finalizer2(sClass_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result160__;
                }
                it_341++;
                if(_if_conditional399=it_341>=self->size,                _if_conditional399) {
                    it_341=0;
                }
                else {
                    if(_if_conditional400=it_341==hash_340,                    _if_conditional400) {
                        __result161__ = __result_obj__ = default_value_339;
                        come_call_finalizer2(sClass_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result161__;
                    }
                }
            }
            else {
                __result162__ = __result_obj__ = default_value_339;
                come_call_finalizer2(sClass_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result162__;
            }
        }
        __result163__ = __result_obj__ = default_value_339;
        come_call_finalizer2(sClass_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result163__;
        come_call_finalizer2(sClass_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_342;
_Bool _while_condtional39;
struct list_item$1tuple2$2charphsTypephph* prev_it_343;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_342, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_343, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_342=self->head;
                                while(_while_condtional39=it_342!=((void*)0),                                _while_condtional39) {
                                    prev_it_343=it_342;
                                    it_342=it_342->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_343, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct sType* default_value_345;
unsigned int hash_346;
unsigned int it_347;
_Bool _while_condtional40;
_Bool _if_conditional401;
_Bool _if_conditional402;
struct sType* __result164__;
_Bool _if_conditional403;
_Bool _if_conditional404;
struct sType* __result165__;
struct sType* __result166__;
struct sType* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_345, 0, sizeof(struct sType*));
memset(&hash_346, 0, sizeof(unsigned int));
memset(&it_347, 0, sizeof(unsigned int));
        memset(&default_value_345,0,sizeof(struct sType*));
        hash_346=string_get_hash_key(((char*)key))%self->size;
        it_347=hash_346;
        while(_while_condtional40=(_Bool)1,        _while_condtional40) {
            if(_if_conditional401=self->item_existance[it_347],            _if_conditional401) {
                if(_if_conditional402=string_equals(self->keys[it_347],key),                _if_conditional402) {
                    __result164__ = __result_obj__ = self->items[it_347];
                    come_call_finalizer2(sType_finalize,default_value_345, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result164__;
                }
                it_347++;
                if(_if_conditional403=it_347>=self->size,                _if_conditional403) {
                    it_347=0;
                }
                else {
                    if(_if_conditional404=it_347==hash_346,                    _if_conditional404) {
                        __result165__ = __result_obj__ = default_value_345;
                        come_call_finalizer2(sType_finalize,default_value_345, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result165__;
                    }
                }
            }
            else {
                __result166__ = __result_obj__ = default_value_345;
                come_call_finalizer2(sType_finalize,default_value_345, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result166__;
            }
        }
        __result167__ = __result_obj__ = default_value_345;
        come_call_finalizer2(sType_finalize,default_value_345, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result167__;
        come_call_finalizer2(sType_finalize,default_value_345, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_350;
_Bool _if_conditional405;
_Bool __result168__;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_350, 0, sizeof(char*));
        for(        it_350=list$1charph_begin(self);        !list$1charph_end(self);        it_350=list$1charph_next(self)        ){
            if(_if_conditional405=string_operator_equals(it_350,item),            _if_conditional405) {
                __result168__ = (_Bool)1;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result168__;
            }
        }
        __result169__ = (_Bool)0;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result169__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_353;
int caller_line_354;
char* caller_sname_355;
char* last_code_356;
char* __dec_obj102;
char* last_code2_357;
char* __dec_obj103;
char* last_code3_358;
char* __dec_obj104;
void* right_value499;
char* sname_top_359;
int sline_top_360;
_Bool _if_conditional406;
struct sFun* funX_361;
_Bool _if_conditional407;
_Bool __result171__;
void* right_value500;
struct sType* result_type_362;
void* right_value501;
void* right_value502;
struct list$1sTypeph* param_types_363;
struct list$1sTypeph* o2_saved_364;
struct sType* it_367;
void* right_value503;
void* right_value504;
struct sType* param_type_370;
void* right_value505;
void* right_value506;
struct list$1charph* param_names_371;
void* right_value507;
struct list$1charph* param_default_parametors_372;
char* p_373;
int sline_374;
char* sname_375;
char* head_376;
struct buffer* source_377;
void* right_value508;
struct buffer* __dec_obj105;
struct sType* generics_type_saved_378;
void* right_value509;
struct sType* __dec_obj106;
struct list$1charph* method_generics_type_names_379;
void* right_value510;
void* right_value511;
struct list$1charph* __dec_obj107;
struct list$1charph* o2_saved_380;
char* it_381;
void* right_value512;
void* right_value513;
struct list$1charph* __dec_obj108;
char* __dec_obj109;
void* right_value514;
struct sBlock* block_382;
struct buffer* __dec_obj110;
char* __dec_obj111;
_Bool var_args_383;
void* right_value515;
void* right_value516;
void* right_value517;
void* right_value518;
void* right_value519;
struct sFun* fun_384;
void* right_value520;
void* right_value521;
void* right_value522;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value526;
struct sNode* node_386;
_Bool _if_conditional418;
_Bool __result181__;
struct sType* __dec_obj114;
struct list$1charph* __dec_obj115;
struct list$1charph* __dec_obj116;
void* right_value527;
char* __dec_obj117;
char* __dec_obj118;
char* __dec_obj119;
char* __dec_obj120;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_353, 0, sizeof(struct sFun*));
memset(&caller_line_354, 0, sizeof(int));
memset(&caller_sname_355, 0, sizeof(char*));
memset(&last_code_356, 0, sizeof(char*));
memset(&last_code2_357, 0, sizeof(char*));
memset(&last_code3_358, 0, sizeof(char*));
right_value499 = (void*)0;
memset(&sname_top_359, 0, sizeof(char*));
memset(&sline_top_360, 0, sizeof(int));
memset(&funX_361, 0, sizeof(struct sFun*));
right_value500 = (void*)0;
memset(&result_type_362, 0, sizeof(struct sType*));
right_value501 = (void*)0;
right_value502 = (void*)0;
memset(&param_types_363, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_364, 0, sizeof(struct list$1sTypeph*));
memset(&it_367, 0, sizeof(struct sType*));
right_value503 = (void*)0;
right_value504 = (void*)0;
memset(&param_type_370, 0, sizeof(struct sType*));
right_value505 = (void*)0;
right_value506 = (void*)0;
memset(&param_names_371, 0, sizeof(struct list$1charph*));
right_value507 = (void*)0;
memset(&param_default_parametors_372, 0, sizeof(struct list$1charph*));
memset(&p_373, 0, sizeof(char*));
memset(&sline_374, 0, sizeof(int));
memset(&sname_375, 0, sizeof(char*));
memset(&head_376, 0, sizeof(char*));
memset(&source_377, 0, sizeof(struct buffer*));
right_value508 = (void*)0;
memset(&generics_type_saved_378, 0, sizeof(struct sType*));
right_value509 = (void*)0;
memset(&method_generics_type_names_379, 0, sizeof(struct list$1charph*));
right_value510 = (void*)0;
right_value511 = (void*)0;
memset(&o2_saved_380, 0, sizeof(struct list$1charph*));
memset(&it_381, 0, sizeof(char*));
right_value512 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
memset(&block_382, 0, sizeof(struct sBlock*));
memset(&var_args_383, 0, sizeof(_Bool));
right_value515 = (void*)0;
right_value516 = (void*)0;
right_value517 = (void*)0;
right_value518 = (void*)0;
right_value519 = (void*)0;
memset(&fun_384, 0, sizeof(struct sFun*));
right_value520 = (void*)0;
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value526 = (void*)0;
memset(&node_386, 0, sizeof(struct sNode*));
right_value527 = (void*)0;
    caller_fun_353=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_354=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_355=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_356=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj102=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_357=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj103=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_358=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj104=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_359=(char*)come_increment_ref_count(((char*)(right_value499=__builtin_string(info->sname))));
    right_value499 = come_decrement_ref_count2(right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_top_360=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_361=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_361) {
        __result171__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_356 = come_decrement_ref_count2(last_code_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_357 = come_decrement_ref_count2(last_code2_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_358 = come_decrement_ref_count2(last_code3_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_359 = come_decrement_ref_count2(sname_top_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result171__;
    }
    result_type_362=(struct sType*)come_increment_ref_count(((struct sType*)(right_value500=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_types_363=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value502=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value501=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1345, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_364=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_367=list$1sTypeph_begin((o2_saved_364));    !list$1sTypeph_end((o2_saved_364));    it_367=list$1sTypeph_next((o2_saved_364))    ){
        param_type_370=(struct sType*)come_increment_ref_count(((struct sType*)(right_value504=solve_generics(((struct sType*)(right_value503=sType_clone(it_367))),generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_type_370->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_363,(struct sType*)come_increment_ref_count(((struct sType*)(right_value505=sType_clone(param_type_370)))));
        come_call_finalizer2(sType_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,param_type_370, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    param_names_371=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value506=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer2(list$1charphp_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_372=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value507=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer2(list$1charphp_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    p_373=info->p;
    sline_374=info->sline;
    sname_375=(char*)come_increment_ref_count(info->sname);
    head_376=info->head;
    source_377=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj105=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value508=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer2(buffer_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_378=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj106=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value509=sType_clone(generics_type))));
    come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value509, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    method_generics_type_names_379=info->method_generics_type_names;
    __dec_obj107=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value511=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value510=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1372, "list$1charph"))))))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_380=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_381=list$1charph_begin((o2_saved_380));    !list$1charph_end((o2_saved_380));    it_381=list$1charph_next((o2_saved_380))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value512=string_clone(it_381)))));
        right_value512 = come_decrement_ref_count2(right_value512, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_380, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj108=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value513=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj109=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_382=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value514=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->head=head_376;
    __dec_obj110=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_377);
    come_call_finalizer2(buffer_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    info->p=p_373;
    info->sline=sline_374;
    __dec_obj111=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_375);
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_362->mInline=(_Bool)0;
    var_args_383=generics_fun->mVarArgs;
    fun_384=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value519=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value515=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1394, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_362),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value516=list$1sTypephp_clone(param_types_363)))),(struct list$1charph*)come_increment_ref_count(param_names_371),(struct list$1charph*)come_increment_ref_count(param_default_parametors_372),(_Bool)0,var_args_383,(struct sBlock*)come_increment_ref_count(block_382),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value517=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value518=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value517 = come_decrement_ref_count2(right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value518 = come_decrement_ref_count2(right_value518, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value520=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_384));
    right_value520 = come_decrement_ref_count2(right_value520, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1401, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value522=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value521=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1401, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_384),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sFunNode_sline;
    _inf_value2->sname=(void*)sFunNode_sname;
    _inf_value2->terminated=(void*)sFunNode_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    node_386=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value526=_inf_value2)));
    come_call_finalizer2(sFunNode_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunNode_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value526) { right_value526 = come_decrement_ref_count2(right_value526, ((struct sNode*)right_value526)->finalize, ((struct sNode*)right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if(_if_conditional418=!node_compile(node_386,info),    _if_conditional418) {
        __result181__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_356 = come_decrement_ref_count2(last_code_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_357 = come_decrement_ref_count2(last_code2_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_358 = come_decrement_ref_count2(last_code3_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_359 = come_decrement_ref_count2(sname_top_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_362, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_363, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_372, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_375 = come_decrement_ref_count2(sname_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,generics_type_saved_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_382, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_384, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result181__;
    }
    __dec_obj114=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_378);
    come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,info->method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj115=method_generics_type_names_379;
    __dec_obj116=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_379);
    come_call_finalizer2(list$1charph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj117=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value527=__builtin_string(sname_top_359))));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value527 = come_decrement_ref_count2(right_value527, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=sline_top_360;
    __dec_obj118=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_356);
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj119=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_357);
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj120=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_358);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_353;
    info->caller_line=caller_line_354;
    info->caller_sname=caller_sname_355;
    __result182__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_356 = come_decrement_ref_count2(last_code_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_357 = come_decrement_ref_count2(last_code2_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_358 = come_decrement_ref_count2(last_code3_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_359 = come_decrement_ref_count2(sname_top_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_362, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_363, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_372, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_375 = come_decrement_ref_count2(sname_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_382, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_384, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result182__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_356 = come_decrement_ref_count2(last_code_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_357 = come_decrement_ref_count2(last_code2_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_358 = come_decrement_ref_count2(last_code3_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_359 = come_decrement_ref_count2(sname_top_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_362, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_363, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_372, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_375 = come_decrement_ref_count2(sname_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_382, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_384, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional408;
struct sType* result_365;
struct sType* __result172__;
_Bool _if_conditional409;
struct sType* __result173__;
struct sType* result_366;
struct sType* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_365, 0, sizeof(struct sType*));
memset(&result_366, 0, sizeof(struct sType*));
        if(_if_conditional408=self==((void*)0),        _if_conditional408) {
            memset(&result_365,0,sizeof(struct sType*));
            __result172__ = __result_obj__ = result_365;
            return __result172__;
        }
        self->it=self->head;
        if(self->it) {
            __result173__ = __result_obj__ = self->it->item;
            return __result173__;
        }
        memset(&result_366,0,sizeof(struct sType*));
        __result174__ = __result_obj__ = result_366;
        return __result174__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
        __result175__ = self==((void*)0)||self->it==((void*)0);
        return __result175__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional410;
struct sType* result_368;
struct sType* __result176__;
_Bool _if_conditional411;
struct sType* __result177__;
struct sType* result_369;
struct sType* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_368, 0, sizeof(struct sType*));
memset(&result_369, 0, sizeof(struct sType*));
        if(_if_conditional410=self==((void*)0)||self->it==((void*)0),        _if_conditional410) {
            memset(&result_368,0,sizeof(struct sType*));
            __result176__ = __result_obj__ = result_368;
            return __result176__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result177__ = __result_obj__ = self->it->item;
            return __result177__;
        }
        memset(&result_369,0,sizeof(struct sType*));
        __result178__ = __result_obj__ = result_369;
        return __result178__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_387;
char* source_head_388;
void* right_value528;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type_389;
char* var_name_390;
_Bool err_391;
_Bool _if_conditional419;
_Bool method_definition_392;
char* p_393;
int sline_394;
void* right_value529;
void* right_value530;
struct buffer* buf2_395;
_Bool _while_condtional41;
_Bool _while_condtional42;
_Bool _while_condtional43;
_Bool _while_condtional44;
_Bool _if_conditional420;
char* fun_name_396;
char* base_fun_name_397;
_Bool _if_conditional421;
void* right_value531;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_398;
char* name_399;
_Bool err_400;
_Bool _if_conditional422;
void* right_value532;
void* right_value533;
char* __dec_obj121;
_Bool _if_conditional423;
void* right_value534;
void* right_value535;
char* __dec_obj122;
void* right_value536;
char* __dec_obj123;
void* right_value537;
void* right_value538;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_401;
struct list$1charph* param_names_402;
struct list$1charph* param_default_parametors_403;
_Bool var_args_404;
char* header_tail_405;
void* right_value539;
void* right_value540;
struct buffer* header_buf_406;
int version_407;
_Bool _if_conditional427;
int n_408;
_Bool _while_condtional45;
_Bool _if_conditional428;
void* right_value541;
struct sBlock* block_409;
static int lambda_num_410=0;
void* right_value542;
char* fun_name_411;
void* right_value543;
void* right_value544;
void* right_value545;
void* right_value546;
void* right_value547;
struct sFun* fun_412;
void* right_value548;
struct sFun* fun2_413;
_Bool _if_conditional429;
void* right_value549;
void* right_value550;
void* right_value551;
struct sNode* _inf_value3;
struct sLambdaNode* _inf_obj_value3;
void* right_value554;
struct sNode* __result185__;
_Bool _if_conditional435;
void* right_value555;
char* none_generics_name_415;
void* right_value556;
char* generics_sname_416;
int generics_sline_417;
void* right_value557;
char* block_418;
void* right_value558;
void* right_value559;
void* right_value560;
void* right_value561;
void* right_value562;
void* right_value563;
struct sGenericsFun* fun_419;
void* right_value564;
char* fun_name3_420;
void* right_value568;
struct sNode* __result199__;
_Bool _if_conditional458;
char* source_tail_442;
void* right_value569;
void* right_value570;
struct buffer* header_443;
void* right_value571;
void* right_value572;
struct sBlock* block_444;
_Bool static__445;
_Bool _if_conditional459;
_Bool _if_conditional460;
void* right_value573;
void* right_value574;
char* new_fun_name_446;
void* right_value575;
char* __dec_obj125;
void* right_value576;
void* right_value577;
void* right_value578;
void* right_value579;
void* right_value580;
void* right_value581;
struct sFun* fun_447;
void* right_value582;
struct sFun* fun2_448;
_Bool _if_conditional461;
void* right_value583;
void* right_value584;
void* right_value585;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* right_value589;
struct sNode* __result202__;
_Bool _if_conditional468;
_Bool _if_conditional469;
void* right_value590;
char* new_fun_name_450;
void* right_value591;
char* __dec_obj128;
_Bool _if_conditional470;
void* right_value592;
void* right_value593;
void* right_value594;
void* right_value595;
void* right_value596;
struct sFun* fun_451;
void* right_value597;
struct sFun* fun2_452;
_Bool _if_conditional471;
void* right_value598;
char* source_tail_453;
void* right_value599;
void* right_value600;
struct buffer* header_454;
void* right_value601;
void* right_value602;
void* right_value603;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value607;
struct sNode* __result205__;
void* right_value608;
char* asm_fun_456;
_Bool _if_conditional478;
void* right_value609;
char* __dec_obj131;
void* right_value610;
void* right_value611;
void* right_value612;
void* right_value613;
void* right_value614;
struct sFun* fun_457;
void* right_value615;
struct sFun* fun2_458;
_Bool _if_conditional479;
void* right_value616;
char* source_tail_459;
void* right_value617;
void* right_value618;
struct buffer* header_460;
void* right_value619;
void* right_value620;
void* right_value621;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value625;
struct sNode* __result208__;
struct sNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_387, 0, sizeof(char*));
memset(&source_head_388, 0, sizeof(char*));
right_value528 = (void*)0;
memset(&result_type_389, 0, sizeof(struct sType*));
memset(&var_name_390, 0, sizeof(char*));
memset(&err_391, 0, sizeof(_Bool));
memset(&result_type_389, 0, sizeof(struct sType*));
memset(&var_name_390, 0, sizeof(char*));
memset(&err_391, 0, sizeof(_Bool));
memset(&method_definition_392, 0, sizeof(_Bool));
memset(&p_393, 0, sizeof(char*));
memset(&sline_394, 0, sizeof(int));
right_value529 = (void*)0;
right_value530 = (void*)0;
memset(&buf2_395, 0, sizeof(struct buffer*));
memset(&fun_name_396, 0, sizeof(char*));
memset(&base_fun_name_397, 0, sizeof(char*));
right_value531 = (void*)0;
memset(&obj_type_398, 0, sizeof(struct sType*));
memset(&name_399, 0, sizeof(char*));
memset(&err_400, 0, sizeof(_Bool));
memset(&obj_type_398, 0, sizeof(struct sType*));
memset(&name_399, 0, sizeof(char*));
memset(&err_400, 0, sizeof(_Bool));
right_value532 = (void*)0;
right_value533 = (void*)0;
right_value534 = (void*)0;
right_value535 = (void*)0;
right_value536 = (void*)0;
right_value537 = (void*)0;
right_value538 = (void*)0;
memset(&param_types_401, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_402, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_403, 0, sizeof(struct list$1charph*));
memset(&var_args_404, 0, sizeof(_Bool));
memset(&param_types_401, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_402, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_403, 0, sizeof(struct list$1charph*));
memset(&var_args_404, 0, sizeof(_Bool));
memset(&header_tail_405, 0, sizeof(char*));
right_value539 = (void*)0;
right_value540 = (void*)0;
memset(&header_buf_406, 0, sizeof(struct buffer*));
memset(&version_407, 0, sizeof(int));
memset(&n_408, 0, sizeof(int));
right_value541 = (void*)0;
memset(&block_409, 0, sizeof(struct sBlock*));
right_value542 = (void*)0;
memset(&fun_name_411, 0, sizeof(char*));
right_value543 = (void*)0;
right_value544 = (void*)0;
right_value545 = (void*)0;
right_value546 = (void*)0;
right_value547 = (void*)0;
memset(&fun_412, 0, sizeof(struct sFun*));
right_value548 = (void*)0;
memset(&fun2_413, 0, sizeof(struct sFun*));
right_value549 = (void*)0;
right_value550 = (void*)0;
right_value551 = (void*)0;
right_value554 = (void*)0;
right_value555 = (void*)0;
memset(&none_generics_name_415, 0, sizeof(char*));
right_value556 = (void*)0;
memset(&generics_sname_416, 0, sizeof(char*));
memset(&generics_sline_417, 0, sizeof(int));
right_value557 = (void*)0;
memset(&block_418, 0, sizeof(char*));
right_value558 = (void*)0;
right_value559 = (void*)0;
right_value560 = (void*)0;
right_value561 = (void*)0;
right_value562 = (void*)0;
right_value563 = (void*)0;
memset(&fun_419, 0, sizeof(struct sGenericsFun*));
right_value564 = (void*)0;
memset(&fun_name3_420, 0, sizeof(char*));
right_value568 = (void*)0;
memset(&source_tail_442, 0, sizeof(char*));
right_value569 = (void*)0;
right_value570 = (void*)0;
memset(&header_443, 0, sizeof(struct buffer*));
right_value571 = (void*)0;
right_value572 = (void*)0;
memset(&block_444, 0, sizeof(struct sBlock*));
memset(&static__445, 0, sizeof(_Bool));
right_value573 = (void*)0;
right_value574 = (void*)0;
memset(&new_fun_name_446, 0, sizeof(char*));
right_value575 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
right_value581 = (void*)0;
memset(&fun_447, 0, sizeof(struct sFun*));
right_value582 = (void*)0;
memset(&fun2_448, 0, sizeof(struct sFun*));
right_value583 = (void*)0;
right_value584 = (void*)0;
right_value585 = (void*)0;
right_value589 = (void*)0;
right_value590 = (void*)0;
memset(&new_fun_name_450, 0, sizeof(char*));
right_value591 = (void*)0;
right_value592 = (void*)0;
right_value593 = (void*)0;
right_value594 = (void*)0;
right_value595 = (void*)0;
right_value596 = (void*)0;
memset(&fun_451, 0, sizeof(struct sFun*));
right_value597 = (void*)0;
memset(&fun2_452, 0, sizeof(struct sFun*));
right_value598 = (void*)0;
memset(&source_tail_453, 0, sizeof(char*));
right_value599 = (void*)0;
right_value600 = (void*)0;
memset(&header_454, 0, sizeof(struct buffer*));
right_value601 = (void*)0;
right_value602 = (void*)0;
right_value603 = (void*)0;
right_value607 = (void*)0;
right_value608 = (void*)0;
memset(&asm_fun_456, 0, sizeof(char*));
right_value609 = (void*)0;
right_value610 = (void*)0;
right_value611 = (void*)0;
right_value612 = (void*)0;
right_value613 = (void*)0;
right_value614 = (void*)0;
memset(&fun_457, 0, sizeof(struct sFun*));
right_value615 = (void*)0;
memset(&fun2_458, 0, sizeof(struct sFun*));
right_value616 = (void*)0;
memset(&source_tail_459, 0, sizeof(char*));
right_value617 = (void*)0;
right_value618 = (void*)0;
memset(&header_460, 0, sizeof(struct buffer*));
right_value619 = (void*)0;
right_value620 = (void*)0;
right_value621 = (void*)0;
right_value625 = (void*)0;
    header_head_387=info->p;
    source_head_388=info->p;
    multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value528=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    result_type_389=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
    var_name_390=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    err_391=multiple_assign_var7->v3;
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional419=!err_391,    _if_conditional419) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    method_definition_392=(_Bool)0;
    {
        p_393=info->p;
        sline_394=info->sline;
        buf2_395=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value530=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value529=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1444, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional41=xisalnum(*info->p)||*info->p==95,        _while_condtional41) {
            buffer_append_char(buf2_395,*info->p);
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
        if(_if_conditional420=buffer_length(buf2_395)>0&&*info->p==58&&*(info->p+1)==58,        _if_conditional420) {
            method_definition_392=(_Bool)1;
        }
        info->p=p_393;
        info->sline=sline_394;
        come_call_finalizer2(buffer_finalize,buf2_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_397=((void*)0);
    if(method_definition_392) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value531=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_398=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_399=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_400=multiple_assign_var8->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional422=!err_400,        _if_conditional422) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        base_fun_name_397=(char*)come_increment_ref_count(((char*)(right_value532=parse_word(info))));
        right_value532 = come_decrement_ref_count2(right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj121=fun_name_396;
        fun_name_396=(char*)come_increment_ref_count(((char*)(right_value533=create_method_name(obj_type_398,(_Bool)0,base_fun_name_397,info,(_Bool)1))));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value533 = come_decrement_ref_count2(right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,obj_type_398, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_399 = come_decrement_ref_count2(name_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type) {
            base_fun_name_397=(char*)come_increment_ref_count(((char*)(right_value534=parse_word(info))));
            right_value534 = come_decrement_ref_count2(right_value534, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj122=fun_name_396;
            fun_name_396=(char*)come_increment_ref_count(((char*)(right_value535=create_method_name(info->impl_type,(_Bool)0,base_fun_name_397,info,(_Bool)1))));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value535 = come_decrement_ref_count2(right_value535, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj123=fun_name_396;
            fun_name_396=(char*)come_increment_ref_count(((char*)(right_value536=parse_word(info))));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value536 = come_decrement_ref_count2(right_value536, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_397=(char*)come_increment_ref_count(((char*)(right_value537=__builtin_string(fun_name_396))));
            right_value537 = come_decrement_ref_count2(right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value538=parse_params(info)));
    param_types_401=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_402=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_403=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_404=multiple_assign_var9->v4;
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    header_tail_405=info->p;
    header_buf_406=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value540=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value539=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1501, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(header_buf_406,header_head_387,header_tail_405-header_head_387);
    buffer_append_char(header_buf_406,0);
    version_407=0;
    if(_if_conditional427=strmemcmp(info->p,"version"),    _if_conditional427) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_408=0;
        while(_while_condtional45=xisdigit(*info->p),        _while_condtional45) {
            n_408=n_408*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_407=n_408;
    }
    if(_if_conditional428=charp_operator_equals(base_fun_name_397,"lambda"),    _if_conditional428) {
        block_409=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value541=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        lambda_num_410++;
        fun_name_411=(char*)come_increment_ref_count(((char*)(right_value542=xsprintf("lambda%d",lambda_num_410))));
        right_value542 = come_decrement_ref_count2(right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_389->mStatic=(_Bool)0;
        fun_412=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value547=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value543=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1531, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value544=__builtin_string(fun_name_411)))),(struct sType*)come_increment_ref_count(result_type_389),(struct list$1sTypeph*)come_increment_ref_count(param_types_401),(struct list$1charph*)come_increment_ref_count(param_names_402),(struct list$1charph*)come_increment_ref_count(param_default_parametors_403),(_Bool)0,var_args_404,(struct sBlock*)come_increment_ref_count(block_409),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value545=buffer_to_string(header_buf_406)))),(char*)come_increment_ref_count(((char*)(right_value546=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value544 = come_decrement_ref_count2(right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value545 = come_decrement_ref_count2(right_value545, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value546 = come_decrement_ref_count2(right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_413=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value548=__builtin_string(fun_name_411))));
        right_value548 = come_decrement_ref_count2(right_value548, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional429=fun2_413==((void*)0)||fun2_413->mExternal,        _if_conditional429) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value549=string_clone(fun_name_411)))),(struct sFun*)come_increment_ref_count(fun_412));
            right_value549 = come_decrement_ref_count2(right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        base_fun_name_397 = come_decrement_ref_count2(base_fun_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1543, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sLambdaNode*)(right_value551=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value550=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function2.c", 1543, "sLambdaNode")))),fun_412,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sLambdaNode_finalize;
        _inf_value3->clone=(void*)sLambdaNode_clone;
        _inf_value3->compile=(void*)sLambdaNode_compile;
        _inf_value3->sline=(void*)sLambdaNode_sline;
        _inf_value3->sname=(void*)sLambdaNode_sname;
        _inf_value3->terminated=(void*)sLambdaNode_terminated;
        _inf_value3->kind=(void*)sLambdaNode_kind;
        __result185__ = __result_obj__ = ((struct sNode*)(right_value554=_inf_value3));
        come_call_finalizer2(sBlock_finalize,block_409, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_411 = come_decrement_ref_count2(fun_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_412, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_390 = come_decrement_ref_count2(var_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_396 = come_decrement_ref_count2(fun_name_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_401, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sLambdaNode_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sLambdaNode_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value554) { right_value554 = come_decrement_ref_count2(right_value554, ((struct sNode*)right_value554)->finalize, ((struct sNode*)right_value554)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result185__;
        come_call_finalizer2(sBlock_finalize,block_409, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_411 = come_decrement_ref_count2(fun_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_412, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional435=info->impl_type&&list$1charph_length(info->generics_type_names)>0,        _if_conditional435) {
            none_generics_name_415=(char*)come_increment_ref_count(((char*)(right_value555=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value555 = come_decrement_ref_count2(right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sname_416=(char*)come_increment_ref_count(((char*)(right_value556=__builtin_string(info->sname))));
            right_value556 = come_decrement_ref_count2(right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sline_417=info->sline;
            block_418=(char*)come_increment_ref_count(((char*)(right_value557=skip_block(info))));
            right_value557 = come_decrement_ref_count2(right_value557, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_419=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value563=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value558=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function2.c", 1553, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value559=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value560=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value561=__builtin_string(fun_name_396)))),(struct sType*)come_increment_ref_count(result_type_389),(struct list$1sTypeph*)come_increment_ref_count(param_types_401),(struct list$1charph*)come_increment_ref_count(param_names_402),(struct list$1charph*)come_increment_ref_count(param_default_parametors_403),var_args_404,(char*)come_increment_ref_count(block_418),info,(char*)come_increment_ref_count(((char*)(right_value562=__builtin_string(generics_sname_416)))),generics_sline_417))));
            come_call_finalizer2(sGenericsFun_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value562 = come_decrement_ref_count2(right_value562, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGenericsFun_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            fun_name3_420=(char*)come_increment_ref_count(((char*)(right_value564=xsprintf("%s_%s",none_generics_name_415,base_fun_name_397))));
            right_value564 = come_decrement_ref_count2(right_value564, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value568=__builtin_string(fun_name3_420)))),(struct sGenericsFun*)come_increment_ref_count(fun_419));
            right_value568 = come_decrement_ref_count2(right_value568, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_397 = come_decrement_ref_count2(base_fun_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result199__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_415 = come_decrement_ref_count2(none_generics_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_416 = come_decrement_ref_count2(generics_sname_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_418 = come_decrement_ref_count2(block_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_419, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_420 = come_decrement_ref_count2(fun_name3_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_390 = come_decrement_ref_count2(var_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_396 = come_decrement_ref_count2(fun_name_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_401, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_buf_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result199__;
            none_generics_name_415 = come_decrement_ref_count2(none_generics_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_416 = come_decrement_ref_count2(generics_sname_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_418 = come_decrement_ref_count2(block_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_419, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_420 = come_decrement_ref_count2(fun_name3_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional458=*info->p==123,            _if_conditional458) {
                source_tail_442=info->p-1;
                header_443=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value570=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value569=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1575, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                buffer_append(header_443,source_head_388,source_tail_442-source_head_388);
                buffer_append_str(header_443,";\n");
                add_come_code_at_come_header(info,"%s",((char*)(right_value571=buffer_to_string(header_443))));
                right_value571 = come_decrement_ref_count2(right_value571, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_444=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value572=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                static__445=(_Bool)0;
                if(result_type_389->mStatic) {
                    result_type_389->mStatic=(_Bool)0;
                    static__445=(_Bool)1;
                }
                if(_if_conditional460=version_407>0,                _if_conditional460) {
                    new_fun_name_446=(char*)come_increment_ref_count(((char*)(right_value574=xsprintf("%s_v%d",((char*)(right_value573=__builtin_string(fun_name_396))),version_407))));
                    right_value573 = come_decrement_ref_count2(right_value573, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value574 = come_decrement_ref_count2(right_value574, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj125=fun_name_396;
                    fun_name_396=(char*)come_increment_ref_count(((char*)(right_value575=__builtin_string(new_fun_name_446))));
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value575 = come_decrement_ref_count2(right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_446 = come_decrement_ref_count2(new_fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                fun_447=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value581=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value576=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1595, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value577=__builtin_string(fun_name_396)))),(struct sType*)come_increment_ref_count(result_type_389),(struct list$1sTypeph*)come_increment_ref_count(param_types_401),(struct list$1charph*)come_increment_ref_count(param_names_402),(struct list$1charph*)come_increment_ref_count(param_default_parametors_403),(_Bool)0,var_args_404,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value578=sBlock_clone(block_444)))),static__445,(char*)come_increment_ref_count(((char*)(right_value579=buffer_to_string(header_buf_406)))),(char*)come_increment_ref_count(((char*)(right_value580=__builtin_string(info->sname)))),info))));
                come_call_finalizer2(sFun_finalize,right_value576, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value577 = come_decrement_ref_count2(right_value577, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sBlock_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value579 = come_decrement_ref_count2(right_value579, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value580 = come_decrement_ref_count2(right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFun_finalize,right_value581, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                fun2_448=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value582=__builtin_string(fun_name_396))));
                right_value582 = come_decrement_ref_count2(right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional461=fun2_448==((void*)0)||fun2_448->mExternal,                _if_conditional461) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value583=string_clone(fun_name_396)))),(struct sFun*)come_increment_ref_count(fun_447));
                    right_value583 = come_decrement_ref_count2(right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                base_fun_name_397 = come_decrement_ref_count2(base_fun_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1612, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(right_value585=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value584=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1612, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_447),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sFunNode_finalize;
                _inf_value4->clone=(void*)sFunNode_clone;
                _inf_value4->compile=(void*)sFunNode_compile;
                _inf_value4->sline=(void*)sFunNode_sline;
                _inf_value4->sname=(void*)sFunNode_sname;
                _inf_value4->terminated=(void*)sFunNode_terminated;
                _inf_value4->kind=(void*)sFunNode_kind;
                __result202__ = __result_obj__ = ((struct sNode*)(right_value589=_inf_value4));
                come_call_finalizer2(buffer_finalize,header_443, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,block_444, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun_447, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_390 = come_decrement_ref_count2(var_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_396 = come_decrement_ref_count2(fun_name_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_401, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_buf_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFunNode_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFunNode_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result202__;
                come_call_finalizer2(buffer_finalize,header_443, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,block_444, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun_447, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional468=xisalpha(*info->p)||*info->p==95||*info->p==59,                _if_conditional468) {
                    if(_if_conditional469=version_407>0,                    _if_conditional469) {
                        new_fun_name_450=(char*)come_increment_ref_count(((char*)(right_value590=xsprintf("%s_v%d",fun_name_396,version_407))));
                        right_value590 = come_decrement_ref_count2(right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj128=fun_name_396;
                        fun_name_396=(char*)come_increment_ref_count(((char*)(right_value591=__builtin_string(new_fun_name_450))));
                        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value591 = come_decrement_ref_count2(right_value591, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_450 = come_decrement_ref_count2(new_fun_name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional470=*info->p==59,                    _if_conditional470) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        result_type_389->mStatic=(_Bool)0;
                        fun_451=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value596=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value592=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1626, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value593=__builtin_string(fun_name_396)))),(struct sType*)come_increment_ref_count(result_type_389),(struct list$1sTypeph*)come_increment_ref_count(param_types_401),(struct list$1charph*)come_increment_ref_count(param_names_402),(struct list$1charph*)come_increment_ref_count(param_default_parametors_403),(_Bool)1,var_args_404,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value594=buffer_to_string(header_buf_406)))),(char*)come_increment_ref_count(((char*)(right_value595=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value593 = come_decrement_ref_count2(right_value593, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value594 = come_decrement_ref_count2(right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value595 = come_decrement_ref_count2(right_value595, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value596, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_452=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value597=__builtin_string(fun_name_396))));
                        right_value597 = come_decrement_ref_count2(right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional471=fun2_452==((void*)0)||fun2_452->mExternal,                        _if_conditional471) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value598=string_clone(fun_name_396)))),(struct sFun*)come_increment_ref_count(fun_451));
                            right_value598 = come_decrement_ref_count2(right_value598, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        base_fun_name_397 = come_decrement_ref_count2(base_fun_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        source_tail_453=info->p;
                        header_454=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value600=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value599=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1642, "buffer"))))))));
                        come_call_finalizer2(buffer_finalize,right_value599, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(buffer_finalize,right_value600, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        buffer_append(header_454,source_head_388,source_tail_453-source_head_388);
                        add_come_code_at_come_header(info,"%s",((char*)(right_value601=buffer_to_string(header_454))));
                        right_value601 = come_decrement_ref_count2(right_value601, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1647, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value603=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value602=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1647, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_451),info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sFunNode_finalize;
                        _inf_value5->clone=(void*)sFunNode_clone;
                        _inf_value5->compile=(void*)sFunNode_compile;
                        _inf_value5->sline=(void*)sFunNode_sline;
                        _inf_value5->sname=(void*)sFunNode_sname;
                        _inf_value5->terminated=(void*)sFunNode_terminated;
                        _inf_value5->kind=(void*)sFunNode_kind;
                        __result205__ = __result_obj__ = ((struct sNode*)(right_value607=_inf_value5));
                        come_call_finalizer2(sFun_finalize,fun_451, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_390 = come_decrement_ref_count2(var_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_396 = come_decrement_ref_count2(fun_name_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_401, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value603, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value607) { right_value607 = come_decrement_ref_count2(right_value607, ((struct sNode*)right_value607)->finalize, ((struct sNode*)right_value607)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result205__;
                        come_call_finalizer2(sFun_finalize,fun_451, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        asm_fun_456=(char*)come_increment_ref_count(((char*)(right_value608=parse_attribute(info))));
                        right_value608 = come_decrement_ref_count2(right_value608, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional478=string_operator_not_equals(asm_fun_456,""),                        _if_conditional478) {
                            __dec_obj131=fun_name_396;
                            fun_name_396=(char*)come_increment_ref_count(((char*)(right_value609=__builtin_string(asm_fun_456))));
                            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value609 = come_decrement_ref_count2(right_value609, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        expected_next_character(59,info);
                        result_type_389->mStatic=(_Bool)0;
                        fun_457=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value614=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value610=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1660, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value611=__builtin_string(fun_name_396)))),(struct sType*)come_increment_ref_count(result_type_389),(struct list$1sTypeph*)come_increment_ref_count(param_types_401),(struct list$1charph*)come_increment_ref_count(param_names_402),(struct list$1charph*)come_increment_ref_count(param_default_parametors_403),(_Bool)1,var_args_404,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value612=buffer_to_string(header_buf_406)))),(char*)come_increment_ref_count(((char*)(right_value613=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value611 = come_decrement_ref_count2(right_value611, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value612 = come_decrement_ref_count2(right_value612, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value613 = come_decrement_ref_count2(right_value613, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value614, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_458=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value615=__builtin_string(fun_name_396))));
                        right_value615 = come_decrement_ref_count2(right_value615, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional479=fun2_458==((void*)0)||fun2_458->mExternal,                        _if_conditional479) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value616=string_clone(fun_name_396)))),(struct sFun*)come_increment_ref_count(fun_457));
                            right_value616 = come_decrement_ref_count2(right_value616, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        base_fun_name_397 = come_decrement_ref_count2(base_fun_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        source_tail_459=info->p;
                        header_460=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value618=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value617=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1676, "buffer"))))))));
                        come_call_finalizer2(buffer_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(buffer_finalize,right_value618, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        buffer_append(header_460,source_head_388,source_tail_459-source_head_388);
                        add_come_code_at_come_header(info,"%s",((char*)(right_value619=buffer_to_string(header_460))));
                        right_value619 = come_decrement_ref_count2(right_value619, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1681, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value621=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value620=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1681, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_457),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sFunNode_finalize;
                        _inf_value6->clone=(void*)sFunNode_clone;
                        _inf_value6->compile=(void*)sFunNode_compile;
                        _inf_value6->sline=(void*)sFunNode_sline;
                        _inf_value6->sname=(void*)sFunNode_sname;
                        _inf_value6->terminated=(void*)sFunNode_terminated;
                        _inf_value6->kind=(void*)sFunNode_kind;
                        __result208__ = __result_obj__ = ((struct sNode*)(right_value625=_inf_value6));
                        asm_fun_456 = come_decrement_ref_count2(asm_fun_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_457, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_460, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_390 = come_decrement_ref_count2(var_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_396 = come_decrement_ref_count2(fun_name_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_401, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value620, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value625) { right_value625 = come_decrement_ref_count2(right_value625, ((struct sNode*)right_value625)->finalize, ((struct sNode*)right_value625)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result208__;
                        asm_fun_456 = come_decrement_ref_count2(asm_fun_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_457, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_460, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"invalid character(%c)(2)\n",*info->p);
                    exit(2);
                }
            }
        }
    }
    base_fun_name_397 = come_decrement_ref_count2(base_fun_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result209__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer2(sType_finalize,result_type_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_390 = come_decrement_ref_count2(var_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_396 = come_decrement_ref_count2(fun_name_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_401, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result209__;
    come_call_finalizer2(sType_finalize,result_type_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_390 = come_decrement_ref_count2(var_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_396 = come_decrement_ref_count2(fun_name_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_401, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct sLambdaNode* __result183__;
void* right_value552;
struct sLambdaNode* result_414;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value553;
char* __dec_obj124;
struct sLambdaNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value552 = (void*)0;
memset(&result_414, 0, sizeof(struct sLambdaNode*));
right_value553 = (void*)0;
            if(_if_conditional431=self==(void*)0,            _if_conditional431) {
                __result183__ = __result_obj__ = (void*)0;
                return __result183__;
            }
            result_414=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value552=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"))));
            come_call_finalizer2(sLambdaNode_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional432=self!=((void*)0),            _if_conditional432) {
                result_414->mFun=self->mFun;
            }
            if(_if_conditional433=self!=((void*)0),            _if_conditional433) {
                result_414->sline=self->sline;
            }
            if(_if_conditional434=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional434) {
                __dec_obj124=result_414->sname;
                result_414->sname=(char*)come_increment_ref_count(((char*)(right_value553=string_clone(self->sname))));
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value553 = come_decrement_ref_count2(right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result184__ = __result_obj__ = result_414;
            come_call_finalizer2(sLambdaNode_finalize,result_414, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result184__;
            come_call_finalizer2(sLambdaNode_finalize,result_414, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result186__;
memset(&__result_obj__, 0, sizeof(void*));
            __result186__ = self->len;
            return __result186__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
_Bool _if_conditional436;
unsigned int hash_438;
unsigned int it_439;
_Bool _while_condtional48;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
_Bool same_key_exist_440;
char* it2_441;
_Bool _if_conditional456;
_Bool _if_conditional457;
struct map$2charphsGenericsFunph* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_438, 0, sizeof(unsigned int));
memset(&it_439, 0, sizeof(unsigned int));
memset(&same_key_exist_440, 0, sizeof(_Bool));
memset(&it2_441, 0, sizeof(char*));
                if(_if_conditional436=self->len*10>=self->size,                _if_conditional436) {
                    map$2charphsGenericsFunph_rehash(self);
                }
                hash_438=string_get_hash_key(key)%self->size;
                it_439=hash_438;
                while(_while_condtional48=(_Bool)1,                _while_condtional48) {
                    if(_if_conditional448=self->item_existance[it_439],                    _if_conditional448) {
                        if(_if_conditional449=string_equals(self->keys[it_439],key),                        _if_conditional449) {
                            if(_if_conditional450=1,                            _if_conditional450) {
                                list$1charp_remove(self->key_list,self->keys[it_439]);
                                self->keys[it_439] = come_decrement_ref_count2(self->keys[it_439], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                self->keys[it_439]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                list$1charp_remove(self->key_list,self->keys[it_439]);
                                self->keys[it_439]=key;
                            }
                            if(_if_conditional451=1,                            _if_conditional451) {
                                come_call_finalizer2(sGenericsFun_finalize,self->items[it_439], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->items[it_439]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_439]=item;
                            }
                            break;
                        }
                        it_439++;
                        if(_if_conditional452=it_439>=self->size,                        _if_conditional452) {
                            it_439=0;
                        }
                        else {
                            if(_if_conditional453=it_439==hash_438,                            _if_conditional453) {
                                printf("unexpected error in map.insert\n");
                                stackframe();
                                exit(2);
                            }
                        }
                    }
                    else {
                        self->item_existance[it_439]=(_Bool)1;
                        if(_if_conditional454=1,                        _if_conditional454) {
                            self->keys[it_439]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            self->keys[it_439]=key;
                        }
                        if(_if_conditional455=1,                        _if_conditional455) {
                            self->items[it_439]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_439]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_440=(_Bool)0;
                for(                it2_441=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_441=list$1charp_next(self->key_list)                ){
                    if(_if_conditional456=string_equals(it2_441,key),                    _if_conditional456) {
                        puts("SAME KEY");
                        same_key_exist_440=(_Bool)1;
                    }
                }
                if(_if_conditional457=!same_key_exist_440,                _if_conditional457) {
                    list$1charp_push_back(self->key_list,key);
                }
                __result198__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result198__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int size_421;
void* right_value565;
char** keys_422;
void* right_value566;
struct sGenericsFun** items_423;
void* right_value567;
_Bool* item_existance_424;
int len_425;
char* it_428;
struct sGenericsFun* default_value_431;
struct sGenericsFun* it2_434;
unsigned int hash_435;
int n_436;
_Bool _while_condtional47;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
struct sGenericsFun* default_value_437;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_421, 0, sizeof(int));
right_value565 = (void*)0;
memset(&keys_422, 0, sizeof(char**));
right_value566 = (void*)0;
memset(&items_423, 0, sizeof(struct sGenericsFun**));
right_value567 = (void*)0;
memset(&item_existance_424, 0, sizeof(_Bool*));
memset(&len_425, 0, sizeof(int));
memset(&it_428, 0, sizeof(char*));
memset(&default_value_431, 0, sizeof(struct sGenericsFun*));
memset(&it2_434, 0, sizeof(struct sGenericsFun*));
memset(&hash_435, 0, sizeof(unsigned int));
memset(&n_436, 0, sizeof(int));
memset(&default_value_437, 0, sizeof(struct sGenericsFun*));
                        size_421=self->size*10;
                        keys_422=(char**)come_increment_ref_count(((char**)(right_value565=(char**)come_calloc(1, sizeof(char*)*(1*(size_421)), "./comelang2.h", 1335, "char*%"))));
                        right_value565 = come_decrement_ref_count2(right_value565, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        items_423=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value566=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_421)), "./comelang2.h", 1336, "sGenericsFun*%"))));
                        come_call_finalizer2(sGenericsFun_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        item_existance_424=(_Bool*)come_increment_ref_count(((_Bool*)(right_value567=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_421)), "./comelang2.h", 1337, "bool"))));
                        right_value567 = come_decrement_ref_count2(right_value567, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        len_425=0;
                        for(                        it_428=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_428=map$2charphsGenericsFunph_next(self)                        ){
                            memset(&default_value_431,0,sizeof(struct sGenericsFun*));
                            it2_434=map$2charphsGenericsFunph_at(self,it_428,default_value_431);
                            hash_435=string_get_hash_key(it_428)%size_421;
                            n_436=hash_435;
                            while(_while_condtional47=(_Bool)1,                            _while_condtional47) {
                                if(_if_conditional445=item_existance_424[n_436],                                _if_conditional445) {
                                    n_436++;
                                    if(_if_conditional446=n_436>=size_421,                                    _if_conditional446) {
                                        n_436=0;
                                    }
                                    else {
                                        if(_if_conditional447=n_436==hash_435,                                        _if_conditional447) {
                                            printf("unexpected error in map.rehash(1)\n");
                                            stackframe();
                                            exit(2);
                                        }
                                    }
                                }
                                else {
                                    item_existance_424[n_436]=(_Bool)1;
                                    keys_422[n_436]=it_428;
                                    items_423[n_436]=map$2charphsGenericsFunph_at(self,it_428,default_value_437);
                                    len_425++;
                                    break;
                                }
                            }
                        }
                        come_free((char*)self->items);
                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_free((char*)self->keys);
                        self->keys=keys_422;
                        self->items=items_423;
                        self->item_existance=item_existance_424;
                        self->size=size_421;
                        self->len=len_425;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional437;
char* result_426;
char* __result187__;
_Bool _if_conditional438;
char* __result188__;
char* result_427;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_426, 0, sizeof(char*));
memset(&result_427, 0, sizeof(char*));
                            if(_if_conditional437=self==((void*)0),                            _if_conditional437) {
                                memset(&result_426,0,sizeof(char*));
                                __result187__ = __result_obj__ = result_426;
                                return __result187__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result188__ = __result_obj__ = self->key_list->it->item;
                                return __result188__;
                            }
                            memset(&result_427,0,sizeof(char*));
                            __result189__ = __result_obj__ = result_427;
                            return __result189__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result190__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result190__;
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional439;
char* result_429;
char* __result191__;
_Bool _if_conditional440;
char* __result192__;
char* result_430;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_429, 0, sizeof(char*));
memset(&result_430, 0, sizeof(char*));
                            if(_if_conditional439=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional439) {
                                memset(&result_429,0,sizeof(char*));
                                __result191__ = __result_obj__ = result_429;
                                return __result191__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result192__ = __result_obj__ = self->key_list->it->item;
                                return __result192__;
                            }
                            memset(&result_430,0,sizeof(char*));
                            __result193__ = __result_obj__ = result_430;
                            return __result193__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_432;
unsigned int it_433;
_Bool _while_condtional46;
_Bool _if_conditional441;
_Bool _if_conditional442;
struct sGenericsFun* __result194__;
_Bool _if_conditional443;
_Bool _if_conditional444;
struct sGenericsFun* __result195__;
struct sGenericsFun* __result196__;
struct sGenericsFun* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_432, 0, sizeof(unsigned int));
memset(&it_433, 0, sizeof(unsigned int));
                                hash_432=string_get_hash_key(((char*)key))%self->size;
                                it_433=hash_432;
                                while(_while_condtional46=(_Bool)1,                                _while_condtional46) {
                                    if(_if_conditional441=self->item_existance[it_433],                                    _if_conditional441) {
                                        if(_if_conditional442=string_equals(self->keys[it_433],key),                                        _if_conditional442) {
                                            __result194__ = __result_obj__ = self->items[it_433];
                                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result194__;
                                        }
                                        it_433++;
                                        if(_if_conditional443=it_433>=self->size,                                        _if_conditional443) {
                                            it_433=0;
                                        }
                                        else {
                                            if(_if_conditional444=it_433==hash_432,                                            _if_conditional444) {
                                                __result195__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result195__;
                                            }
                                        }
                                    }
                                    else {
                                        __result196__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result196__;
                                    }
                                }
                                __result197__ = __result_obj__ = default_value;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result197__;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_462;
char* __dec_obj134;
char* last_code2_463;
char* __dec_obj135;
char* last_code3_464;
char* __dec_obj136;
struct sClass* current_stack_frame_struct_465;
struct sFun* finalizer_466;
void* right_value626;
char* real_fun_name_467;
void* right_value627;
struct sType* type2_468;
struct sClass* klass_469;
_Bool _if_conditional486;
void* right_value628;
void* right_value629;
struct buffer* source_470;
struct list$1tuple2$2charphsTypephph* o2_saved_471;
struct tuple2$2charphsTypeph* it_474;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_477;
struct sType* field_type_478;
_Bool _if_conditional491;
_Bool _if_conditional492;
char* p_480;
int sline_481;
char* sname_482;
char* head_483;
struct buffer* source3_484;
struct buffer* __dec_obj137;
void* right_value630;
char* __dec_obj138;
void* right_value631;
struct sBlock* block_485;
void* right_value632;
void* right_value633;
struct sType* result_type_486;
void* right_value634;
char* name_487;
void* right_value635;
struct sType* self_type_488;
_Bool _if_conditional493;
struct sType* __list_values21___489[1];
void* right_value636;
void* right_value637;
struct list$1sTypeph* param_types_490;
void* right_value638;
char* __list_values22___491[1];
void* right_value639;
void* right_value640;
struct list$1charph* param_names_492;
void* right_value641;
void* right_value642;
struct list$1charph* param_default_parametors_493;
void* right_value643;
void* right_value644;
struct buffer* header_buf_494;
void* right_value645;
int i_495;
struct sType* param_type_496;
char* param_name_500;
void* right_value646;
_Bool _if_conditional496;
void* right_value647;
void* right_value648;
void* right_value649;
void* right_value650;
struct sFun* fun_501;
void* right_value651;
struct sFun* fun2_502;
_Bool _if_conditional497;
void* right_value652;
void* right_value653;
void* right_value654;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value658;
struct sNode* node_504;
_Bool _if_conditional504;
struct buffer* __dec_obj141;
char* __dec_obj142;
char* __dec_obj143;
char* __dec_obj144;
char* __dec_obj145;
void* right_value659;
void* right_value660;
struct tuple2$2sFunpcharph* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_462, 0, sizeof(char*));
memset(&last_code2_463, 0, sizeof(char*));
memset(&last_code3_464, 0, sizeof(char*));
memset(&current_stack_frame_struct_465, 0, sizeof(struct sClass*));
memset(&finalizer_466, 0, sizeof(struct sFun*));
right_value626 = (void*)0;
memset(&real_fun_name_467, 0, sizeof(char*));
right_value627 = (void*)0;
memset(&type2_468, 0, sizeof(struct sType*));
memset(&klass_469, 0, sizeof(struct sClass*));
right_value628 = (void*)0;
right_value629 = (void*)0;
memset(&source_470, 0, sizeof(struct buffer*));
memset(&o2_saved_471, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_474, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_477, 0, sizeof(char*));
memset(&field_type_478, 0, sizeof(struct sType*));
memset(&name_477, 0, sizeof(char*));
memset(&field_type_478, 0, sizeof(struct sType*));
memset(&p_480, 0, sizeof(char*));
memset(&sline_481, 0, sizeof(int));
memset(&sname_482, 0, sizeof(char*));
memset(&head_483, 0, sizeof(char*));
memset(&source3_484, 0, sizeof(struct buffer*));
right_value630 = (void*)0;
right_value631 = (void*)0;
memset(&block_485, 0, sizeof(struct sBlock*));
right_value632 = (void*)0;
right_value633 = (void*)0;
memset(&result_type_486, 0, sizeof(struct sType*));
right_value634 = (void*)0;
memset(&name_487, 0, sizeof(char*));
right_value635 = (void*)0;
memset(&self_type_488, 0, sizeof(struct sType*));
right_value636 = (void*)0;
right_value637 = (void*)0;
memset(&param_types_490, 0, sizeof(struct list$1sTypeph*));
right_value638 = (void*)0;
right_value639 = (void*)0;
right_value640 = (void*)0;
memset(&param_names_492, 0, sizeof(struct list$1charph*));
right_value641 = (void*)0;
right_value642 = (void*)0;
memset(&param_default_parametors_493, 0, sizeof(struct list$1charph*));
right_value643 = (void*)0;
right_value644 = (void*)0;
memset(&header_buf_494, 0, sizeof(struct buffer*));
right_value645 = (void*)0;
memset(&i_495, 0, sizeof(int));
memset(&param_type_496, 0, sizeof(struct sType*));
memset(&param_name_500, 0, sizeof(char*));
right_value646 = (void*)0;
right_value647 = (void*)0;
right_value648 = (void*)0;
right_value649 = (void*)0;
right_value650 = (void*)0;
memset(&fun_501, 0, sizeof(struct sFun*));
right_value651 = (void*)0;
memset(&fun2_502, 0, sizeof(struct sFun*));
right_value652 = (void*)0;
right_value653 = (void*)0;
right_value654 = (void*)0;
right_value658 = (void*)0;
memset(&node_504, 0, sizeof(struct sNode*));
right_value659 = (void*)0;
right_value660 = (void*)0;
    last_code_462=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj134=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_463=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj135=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_464=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj136=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_465=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_466=((void*)0);
    real_fun_name_467=(char*)come_increment_ref_count(((char*)(right_value626=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value626 = come_decrement_ref_count2(right_value626, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_468=(struct sType*)come_increment_ref_count(((struct sType*)(right_value627=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value627, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_468;
    klass_469=type->mClass;
    if(_if_conditional486=type->mPointerNum>0&&klass_469->mStruct,    _if_conditional486) {
        source_470=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value629=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value628=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1717, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_470,123);
        klass_469=map$2charphsClassphp_operator_load_element(info->classes,klass_469->mName);
        for(        o2_saved_471=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_469->mFields)),it_474=list$1tuple2$2charphsTypephph_begin((o2_saved_471));        !list$1tuple2$2charphsTypephph_end((o2_saved_471));        it_474=list$1tuple2$2charphsTypephph_next((o2_saved_471))        ){
            multiple_assign_var10=it_474;
            name_477=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_478=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(_if_conditional491=string_operator_equals(type->mClass->mName,field_type_478->mClass->mName)&&type->mPointerNum==field_type_478->mPointerNum&&field_type_478->mHeap,            _if_conditional491) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_478->mHeap) {
                char source2_479[1024];
                memset(&source2_479, 0, sizeof(char)                *(1024)                );
                snprintf(source2_479,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_477,name_477);
                buffer_append_str(source_470,source2_479);
            }
            name_477 = come_decrement_ref_count2(name_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_470,125);
        p_480=info->p;
        sline_481=info->sline;
        sname_482=(char*)come_increment_ref_count(info->sname);
        head_483=info->head;
        source3_484=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj137=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_470);
        come_call_finalizer2(buffer_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_470->buf;
        info->head=source_470->buf;
        __dec_obj138=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value630=__builtin_string(real_fun_name_467))));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value630 = come_decrement_ref_count2(right_value630, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_485=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value631=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value631, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_486=(struct sType*)come_increment_ref_count(((struct sType*)(right_value633=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value632=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1756, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value632, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value633, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_487=(char*)come_increment_ref_count(((char*)(right_value634=string_clone(real_fun_name_467))));
        right_value634 = come_decrement_ref_count2(right_value634, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_488=(struct sType*)come_increment_ref_count(((struct sType*)(right_value635=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value635, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_488->mHeap=(_Bool)0;
        if(_if_conditional493=self_type_488->mPointerNum>1,        _if_conditional493) {
            self_type_488->mPointerNum=1;
        }
        {__list_values21___489[0]=come_increment_ref_count(self_type_488);
}        param_types_490=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value637=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value636=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1763, "struct list$1sTypeph")))),1,__list_values21___489))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value636, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values22___491[0]=come_increment_ref_count(((char*)(right_value638=__builtin_string("self"))));
}        param_names_492=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value640=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value639=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1764, "struct list$1charph")))),1,__list_values22___491))));
        right_value638 = come_decrement_ref_count2(right_value638, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value639, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_493=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value642=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value641=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1765, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value641, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value642, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_493,((void*)0));
        header_buf_494=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value644=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value643=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1768, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value644, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_494,((char*)(right_value645=make_come_type_name_string(result_type_486,info))));
        right_value645 = come_decrement_ref_count2(right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_494," ");
        buffer_append_str(header_buf_494,real_fun_name_467);
        buffer_append_str(header_buf_494,"(");
        for(        i_495=0;        i_495<list$1sTypeph_length(param_types_490);        i_495++        ){
            param_type_496=list$1sTypephp_operator_load_element(param_types_490,i_495);
            param_name_500=list$1charphp_operator_load_element(param_names_492,i_495);
            buffer_append_str(header_buf_494,((char*)(right_value646=make_come_type_name_string(param_type_496,info))));
            right_value646 = come_decrement_ref_count2(right_value646, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_494," ");
            buffer_append_str(header_buf_494,param_name_500);
            if(_if_conditional496=i_495!=list$1sTypeph_length(param_types_490)-1,            _if_conditional496) {
                buffer_append_str(header_buf_494,",");
            }
        }
        buffer_append_str(header_buf_494,")");
        result_type_486->mStatic=(_Bool)0;
        fun_501=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value650=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value647=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1791, "sFun")))),(char*)come_increment_ref_count(name_487),(struct sType*)come_increment_ref_count(result_type_486),(struct list$1sTypeph*)come_increment_ref_count(param_types_490),(struct list$1charph*)come_increment_ref_count(param_names_492),(struct list$1charph*)come_increment_ref_count(param_default_parametors_493),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_485),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value648=buffer_to_string(header_buf_494)))),(char*)come_increment_ref_count(((char*)(right_value649=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value647, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value648 = come_decrement_ref_count2(right_value648, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value649 = come_decrement_ref_count2(right_value649, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value650, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_502=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value651=__builtin_string(fun_name))));
        right_value651 = come_decrement_ref_count2(right_value651, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional497=fun2_502==((void*)0)||fun2_502->mExternal,        _if_conditional497) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value652=string_clone(name_487)))),(struct sFun*)come_increment_ref_count(fun_501));
            right_value652 = come_decrement_ref_count2(right_value652, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_466=fun_501;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1807, "struct sNode");
        _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value654=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value653=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1807, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_501),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFunNode_finalize;
        _inf_value7->clone=(void*)sFunNode_clone;
        _inf_value7->compile=(void*)sFunNode_compile;
        _inf_value7->sline=(void*)sFunNode_sline;
        _inf_value7->sname=(void*)sFunNode_sname;
        _inf_value7->terminated=(void*)sFunNode_terminated;
        _inf_value7->kind=(void*)sFunNode_kind;
        node_504=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value658=_inf_value7)));
        come_call_finalizer2(sFunNode_finalize,right_value653, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value654, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value658) { right_value658 = come_decrement_ref_count2(right_value658, ((struct sNode*)right_value658)->finalize, ((struct sNode*)right_value658)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional504=!node_compile(node_504,info),        _if_conditional504) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj141=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_484);
        come_call_finalizer2(buffer_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_480;
        info->head=head_483;
        info->sline=sline_481;
        __dec_obj142=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_482);
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_470, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_482 = come_decrement_ref_count2(sname_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_484, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_485, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_486, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_487 = come_decrement_ref_count2(name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_488, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_490, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_492, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_493, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_494, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_501, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_504) { node_504 = come_decrement_ref_count2(node_504, ((struct sNode*)node_504)->finalize, ((struct sNode*)node_504)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_465;
    __dec_obj143=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_462);
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj144=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_463);
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj145=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_464);
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result223__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value660=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value659=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1827, "struct tuple2$2sFunpcharph")))),finalizer_466,(char*)come_increment_ref_count(real_fun_name_467))));
    last_code_462 = come_decrement_ref_count2(last_code_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_463 = come_decrement_ref_count2(last_code2_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_464 = come_decrement_ref_count2(last_code3_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_467 = come_decrement_ref_count2(real_fun_name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value659 = come_decrement_ref_count2(right_value659, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value660, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result223__;
    last_code_462 = come_decrement_ref_count2(last_code_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_463 = come_decrement_ref_count2(last_code2_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_464 = come_decrement_ref_count2(last_code3_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_467 = come_decrement_ref_count2(real_fun_name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional487;
struct tuple2$2charphsTypeph* result_472;
struct tuple2$2charphsTypeph* __result210__;
_Bool _if_conditional488;
struct tuple2$2charphsTypeph* __result211__;
struct tuple2$2charphsTypeph* result_473;
struct tuple2$2charphsTypeph* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_472, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_473, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional487=self==((void*)0),            _if_conditional487) {
                memset(&result_472,0,sizeof(struct tuple2$2charphsTypeph*));
                __result210__ = __result_obj__ = result_472;
                return __result210__;
            }
            self->it=self->head;
            if(self->it) {
                __result211__ = __result_obj__ = self->it->item;
                return __result211__;
            }
            memset(&result_473,0,sizeof(struct tuple2$2charphsTypeph*));
            __result212__ = __result_obj__ = result_473;
            return __result212__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result213__;
memset(&__result_obj__, 0, sizeof(void*));
            __result213__ = self==((void*)0)||self->it==((void*)0);
            return __result213__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional489;
struct tuple2$2charphsTypeph* result_475;
struct tuple2$2charphsTypeph* __result214__;
_Bool _if_conditional490;
struct tuple2$2charphsTypeph* __result215__;
struct tuple2$2charphsTypeph* result_476;
struct tuple2$2charphsTypeph* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_475, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_476, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional489=self==((void*)0)||self->it==((void*)0),            _if_conditional489) {
                memset(&result_475,0,sizeof(struct tuple2$2charphsTypeph*));
                __result214__ = __result_obj__ = result_475;
                return __result214__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result215__ = __result_obj__ = self->it->item;
                return __result215__;
            }
            memset(&result_476,0,sizeof(struct tuple2$2charphsTypeph*));
            __result216__ = __result_obj__ = result_476;
            return __result216__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result217__;
memset(&__result_obj__, 0, sizeof(void*));
            __result217__ = self->len;
            return __result217__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional494;
struct list_item$1charph* it_497;
int i_498;
_Bool _while_condtional49;
_Bool _if_conditional495;
char* __result218__;
char* default_value_499;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_497, 0, sizeof(struct list_item$1charph*));
memset(&i_498, 0, sizeof(int));
memset(&default_value_499, 0, sizeof(char*));
                if(_if_conditional494=position<0,                _if_conditional494) {
                    position+=self->len;
                }
                it_497=self->head;
                i_498=0;
                while(_while_condtional49=it_497!=((void*)0),                _while_condtional49) {
                    if(_if_conditional495=position==i_498,                    _if_conditional495) {
                        __result218__ = __result_obj__ = it_497->item;
                        return __result218__;
                    }
                    it_497=it_497->next;
                    i_498++;
                }
                memset(&default_value_499,0,sizeof(char*));
                __result219__ = __result_obj__ = default_value_499;
                default_value_499 = come_decrement_ref_count2(default_value_499, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result219__;
                default_value_499 = come_decrement_ref_count2(default_value_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj146;
struct tuple2$2sFunpcharph* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
        self->v1=v1;
        __dec_obj146=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result222__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result222__;
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
char* last_code_505;
char* __dec_obj147;
char* last_code2_506;
char* __dec_obj148;
char* last_code3_507;
char* __dec_obj149;
struct sClass* current_stack_frame_struct_508;
struct sFun* finalizer_509;
void* right_value661;
char* real_fun_name_510;
void* right_value662;
struct sType* type2_511;
struct sClass* klass_512;
_Bool _if_conditional506;
void* right_value663;
void* right_value664;
struct buffer* source_513;
struct list$1tuple2$2charphsTypephph* o2_saved_514;
struct tuple2$2charphsTypeph* it_515;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_516;
struct sType* field_type_517;
_Bool _if_conditional507;
_Bool _if_conditional508;
char* p_519;
int sline_520;
char* sname_521;
char* head_522;
struct buffer* source3_523;
struct buffer* __dec_obj150;
void* right_value665;
char* __dec_obj151;
void* right_value666;
struct sBlock* block_524;
void* right_value667;
void* right_value668;
struct sType* result_type_525;
void* right_value669;
char* name_526;
void* right_value670;
struct sType* self_type_527;
_Bool _if_conditional509;
struct sType* __list_values23___528[1];
void* right_value671;
void* right_value672;
struct list$1sTypeph* param_types_529;
void* right_value673;
char* __list_values24___530[1];
void* right_value674;
void* right_value675;
struct list$1charph* param_names_531;
void* right_value676;
void* right_value677;
struct list$1charph* param_default_parametors_532;
void* right_value678;
void* right_value679;
struct buffer* header_buf_533;
void* right_value680;
int i_534;
struct sType* param_type_535;
char* param_name_536;
void* right_value681;
_Bool _if_conditional510;
void* right_value682;
void* right_value683;
void* right_value684;
void* right_value685;
struct sFun* fun_537;
void* right_value686;
struct sFun* fun2_538;
_Bool _if_conditional511;
void* right_value687;
void* right_value688;
void* right_value689;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value693;
struct sNode* node_540;
_Bool _if_conditional518;
struct buffer* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
void* right_value694;
void* right_value695;
struct tuple2$2sFunpcharph* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_505, 0, sizeof(char*));
memset(&last_code2_506, 0, sizeof(char*));
memset(&last_code3_507, 0, sizeof(char*));
memset(&current_stack_frame_struct_508, 0, sizeof(struct sClass*));
memset(&finalizer_509, 0, sizeof(struct sFun*));
right_value661 = (void*)0;
memset(&real_fun_name_510, 0, sizeof(char*));
right_value662 = (void*)0;
memset(&type2_511, 0, sizeof(struct sType*));
memset(&klass_512, 0, sizeof(struct sClass*));
right_value663 = (void*)0;
right_value664 = (void*)0;
memset(&source_513, 0, sizeof(struct buffer*));
memset(&o2_saved_514, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_515, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_516, 0, sizeof(char*));
memset(&field_type_517, 0, sizeof(struct sType*));
memset(&name_516, 0, sizeof(char*));
memset(&field_type_517, 0, sizeof(struct sType*));
memset(&p_519, 0, sizeof(char*));
memset(&sline_520, 0, sizeof(int));
memset(&sname_521, 0, sizeof(char*));
memset(&head_522, 0, sizeof(char*));
memset(&source3_523, 0, sizeof(struct buffer*));
right_value665 = (void*)0;
right_value666 = (void*)0;
memset(&block_524, 0, sizeof(struct sBlock*));
right_value667 = (void*)0;
right_value668 = (void*)0;
memset(&result_type_525, 0, sizeof(struct sType*));
right_value669 = (void*)0;
memset(&name_526, 0, sizeof(char*));
right_value670 = (void*)0;
memset(&self_type_527, 0, sizeof(struct sType*));
right_value671 = (void*)0;
right_value672 = (void*)0;
memset(&param_types_529, 0, sizeof(struct list$1sTypeph*));
right_value673 = (void*)0;
right_value674 = (void*)0;
right_value675 = (void*)0;
memset(&param_names_531, 0, sizeof(struct list$1charph*));
right_value676 = (void*)0;
right_value677 = (void*)0;
memset(&param_default_parametors_532, 0, sizeof(struct list$1charph*));
right_value678 = (void*)0;
right_value679 = (void*)0;
memset(&header_buf_533, 0, sizeof(struct buffer*));
right_value680 = (void*)0;
memset(&i_534, 0, sizeof(int));
memset(&param_type_535, 0, sizeof(struct sType*));
memset(&param_name_536, 0, sizeof(char*));
right_value681 = (void*)0;
right_value682 = (void*)0;
right_value683 = (void*)0;
right_value684 = (void*)0;
right_value685 = (void*)0;
memset(&fun_537, 0, sizeof(struct sFun*));
right_value686 = (void*)0;
memset(&fun2_538, 0, sizeof(struct sFun*));
right_value687 = (void*)0;
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value693 = (void*)0;
memset(&node_540, 0, sizeof(struct sNode*));
right_value694 = (void*)0;
right_value695 = (void*)0;
    last_code_505=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj147=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_506=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj148=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_507=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj149=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_508=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_509=((void*)0);
    real_fun_name_510=(char*)come_increment_ref_count(((char*)(right_value661=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value661 = come_decrement_ref_count2(right_value661, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_511=(struct sType*)come_increment_ref_count(((struct sType*)(right_value662=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value662, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_511;
    klass_512=type->mClass;
    if(_if_conditional506=type->mPointerNum>0&&klass_512->mStruct,    _if_conditional506) {
        source_513=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value664=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value663=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1854, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value663, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_513,123);
        klass_512=map$2charphsClassphp_operator_load_element(info->classes,klass_512->mName);
        for(        o2_saved_514=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_512->mFields)),it_515=list$1tuple2$2charphsTypephph_begin((o2_saved_514));        !list$1tuple2$2charphsTypephph_end((o2_saved_514));        it_515=list$1tuple2$2charphsTypephph_next((o2_saved_514))        ){
            multiple_assign_var11=it_515;
            name_516=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_517=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(_if_conditional507=string_operator_equals(type->mClass->mName,field_type_517->mClass->mName)&&type->mPointerNum==field_type_517->mPointerNum&&field_type_517->mHeap,            _if_conditional507) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_517->mHeap) {
                char source2_518[1024];
                memset(&source2_518, 0, sizeof(char)                *(1024)                );
                snprintf(source2_518,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_516,name_516);
                buffer_append_str(source_513,source2_518);
            }
            name_516 = come_decrement_ref_count2(name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_517, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_514, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_513,125);
        p_519=info->p;
        sline_520=info->sline;
        sname_521=(char*)come_increment_ref_count(info->sname);
        head_522=info->head;
        source3_523=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj150=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_513);
        come_call_finalizer2(buffer_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_513->buf;
        info->head=source_513->buf;
        __dec_obj151=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value665=__builtin_string(real_fun_name_510))));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value665 = come_decrement_ref_count2(right_value665, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_524=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value666=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value666, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_525=(struct sType*)come_increment_ref_count(((struct sType*)(right_value668=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value667=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1893, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value667, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value668, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_526=(char*)come_increment_ref_count(((char*)(right_value669=string_clone(real_fun_name_510))));
        right_value669 = come_decrement_ref_count2(right_value669, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_527=(struct sType*)come_increment_ref_count(((struct sType*)(right_value670=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_527->mHeap=(_Bool)0;
        if(_if_conditional509=self_type_527->mPointerNum>1,        _if_conditional509) {
            self_type_527->mPointerNum=1;
        }
        {__list_values23___528[0]=come_increment_ref_count(self_type_527);
}        param_types_529=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value672=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value671=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1900, "struct list$1sTypeph")))),1,__list_values23___528))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values24___530[0]=come_increment_ref_count(((char*)(right_value673=__builtin_string("self"))));
}        param_names_531=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value675=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value674=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1901, "struct list$1charph")))),1,__list_values24___530))));
        right_value673 = come_decrement_ref_count2(right_value673, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value674, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value675, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_532=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value677=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value676=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1902, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value677, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_532,((void*)0));
        header_buf_533=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value679=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value678=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1905, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value678, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value679, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_533,((char*)(right_value680=make_come_type_name_string(result_type_525,info))));
        right_value680 = come_decrement_ref_count2(right_value680, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_533," ");
        buffer_append_str(header_buf_533,real_fun_name_510);
        buffer_append_str(header_buf_533,"(");
        for(        i_534=0;        i_534<list$1sTypeph_length(param_types_529);        i_534++        ){
            param_type_535=list$1sTypephp_operator_load_element(param_types_529,i_534);
            param_name_536=list$1charphp_operator_load_element(param_names_531,i_534);
            buffer_append_str(header_buf_533,((char*)(right_value681=make_come_type_name_string(param_type_535,info))));
            right_value681 = come_decrement_ref_count2(right_value681, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_533," ");
            buffer_append_str(header_buf_533,param_name_536);
            if(_if_conditional510=i_534!=list$1sTypeph_length(param_types_529)-1,            _if_conditional510) {
                buffer_append_str(header_buf_533,",");
            }
        }
        buffer_append_str(header_buf_533,")");
        result_type_525->mStatic=(_Bool)0;
        fun_537=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value685=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value682=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1928, "sFun")))),(char*)come_increment_ref_count(name_526),(struct sType*)come_increment_ref_count(result_type_525),(struct list$1sTypeph*)come_increment_ref_count(param_types_529),(struct list$1charph*)come_increment_ref_count(param_names_531),(struct list$1charph*)come_increment_ref_count(param_default_parametors_532),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_524),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value683=buffer_to_string(header_buf_533)))),(char*)come_increment_ref_count(((char*)(right_value684=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value682, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value683 = come_decrement_ref_count2(right_value683, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value685, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_538=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value686=__builtin_string(fun_name))));
        right_value686 = come_decrement_ref_count2(right_value686, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional511=fun2_538==((void*)0)||fun2_538->mExternal,        _if_conditional511) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value687=string_clone(name_526)))),(struct sFun*)come_increment_ref_count(fun_537));
            right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_509=fun_537;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1944, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value689=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value688=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1944, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_537),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFunNode_finalize;
        _inf_value8->clone=(void*)sFunNode_clone;
        _inf_value8->compile=(void*)sFunNode_compile;
        _inf_value8->sline=(void*)sFunNode_sline;
        _inf_value8->sname=(void*)sFunNode_sname;
        _inf_value8->terminated=(void*)sFunNode_terminated;
        _inf_value8->kind=(void*)sFunNode_kind;
        node_540=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value693=_inf_value8)));
        come_call_finalizer2(sFunNode_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value693) { right_value693 = come_decrement_ref_count2(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional518=!node_compile(node_540,info),        _if_conditional518) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj154=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_523);
        come_call_finalizer2(buffer_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_519;
        info->head=head_522;
        info->sline=sline_520;
        __dec_obj155=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_521);
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_513, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_521 = come_decrement_ref_count2(sname_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_523, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_524, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_525, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_526 = come_decrement_ref_count2(name_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_527, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_529, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_531, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_532, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_533, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_537, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_540) { node_540 = come_decrement_ref_count2(node_540, ((struct sNode*)node_540)->finalize, ((struct sNode*)node_540)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_508;
    __dec_obj156=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_505);
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj157=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_506);
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj158=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_507);
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result226__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value695=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value694=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1964, "struct tuple2$2sFunpcharph")))),finalizer_509,(char*)come_increment_ref_count(real_fun_name_510))));
    last_code_505 = come_decrement_ref_count2(last_code_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_506 = come_decrement_ref_count2(last_code2_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_507 = come_decrement_ref_count2(last_code3_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_510 = come_decrement_ref_count2(real_fun_name_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_511, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value694 = come_decrement_ref_count2(right_value694, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value695, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result226__;
    last_code_505 = come_decrement_ref_count2(last_code_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_506 = come_decrement_ref_count2(last_code2_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_507 = come_decrement_ref_count2(last_code3_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_510 = come_decrement_ref_count2(real_fun_name_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_511, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_541;
char* __dec_obj159;
char* last_code2_542;
char* __dec_obj160;
char* last_code3_543;
char* __dec_obj161;
struct sClass* current_stack_frame_struct_544;
struct sFun* equaler_545;
void* right_value696;
char* real_fun_name_546;
void* right_value697;
struct sType* type2_547;
struct sClass* klass_548;
_Bool _if_conditional519;
void* right_value698;
void* right_value699;
struct buffer* source_549;
_Bool _if_conditional520;
char* name_550;
struct list$1tuple2$2charphsTypephph* o2_saved_552;
struct tuple2$2charphsTypeph* it_553;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_554;
struct sType* field_type_555;
_Bool _if_conditional521;
char* p_557;
int sline_558;
char* sname_559;
char* head_560;
struct buffer* source3_561;
struct buffer* __dec_obj162;
void* right_value700;
char* __dec_obj163;
void* right_value701;
struct sBlock* block_562;
void* right_value702;
void* right_value703;
struct sType* result_type_563;
void* right_value704;
char* name_564;
void* right_value705;
struct sType* left_type_565;
void* right_value706;
struct sType* right_type_566;
struct sType* __list_values25___567[2];
void* right_value707;
void* right_value708;
struct list$1sTypeph* param_types_568;
void* right_value709;
void* right_value710;
char* __list_values26___569[2];
void* right_value711;
void* right_value712;
struct list$1charph* param_names_570;
void* right_value713;
void* right_value714;
struct list$1charph* param_default_parametors_571;
void* right_value715;
void* right_value716;
struct buffer* header_buf_572;
void* right_value717;
int i_573;
struct sType* param_type_574;
char* param_name_575;
void* right_value718;
_Bool _if_conditional522;
void* right_value719;
void* right_value720;
void* right_value721;
void* right_value722;
struct sFun* fun_576;
void* right_value723;
struct sFun* fun2_577;
_Bool _if_conditional523;
void* right_value724;
void* right_value725;
void* right_value726;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value730;
struct sNode* node_579;
_Bool _if_conditional530;
struct buffer* __dec_obj166;
char* __dec_obj167;
char* __dec_obj168;
char* __dec_obj169;
char* __dec_obj170;
void* right_value731;
void* right_value732;
struct tuple2$2sFunpcharph* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_541, 0, sizeof(char*));
memset(&last_code2_542, 0, sizeof(char*));
memset(&last_code3_543, 0, sizeof(char*));
memset(&current_stack_frame_struct_544, 0, sizeof(struct sClass*));
memset(&equaler_545, 0, sizeof(struct sFun*));
right_value696 = (void*)0;
memset(&real_fun_name_546, 0, sizeof(char*));
right_value697 = (void*)0;
memset(&type2_547, 0, sizeof(struct sType*));
memset(&klass_548, 0, sizeof(struct sClass*));
right_value698 = (void*)0;
right_value699 = (void*)0;
memset(&source_549, 0, sizeof(struct buffer*));
memset(&name_550, 0, sizeof(char*));
memset(&o2_saved_552, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_553, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_554, 0, sizeof(char*));
memset(&field_type_555, 0, sizeof(struct sType*));
memset(&name_554, 0, sizeof(char*));
memset(&field_type_555, 0, sizeof(struct sType*));
memset(&p_557, 0, sizeof(char*));
memset(&sline_558, 0, sizeof(int));
memset(&sname_559, 0, sizeof(char*));
memset(&head_560, 0, sizeof(char*));
memset(&source3_561, 0, sizeof(struct buffer*));
right_value700 = (void*)0;
right_value701 = (void*)0;
memset(&block_562, 0, sizeof(struct sBlock*));
right_value702 = (void*)0;
right_value703 = (void*)0;
memset(&result_type_563, 0, sizeof(struct sType*));
right_value704 = (void*)0;
memset(&name_564, 0, sizeof(char*));
right_value705 = (void*)0;
memset(&left_type_565, 0, sizeof(struct sType*));
right_value706 = (void*)0;
memset(&right_type_566, 0, sizeof(struct sType*));
right_value707 = (void*)0;
right_value708 = (void*)0;
memset(&param_types_568, 0, sizeof(struct list$1sTypeph*));
right_value709 = (void*)0;
right_value710 = (void*)0;
right_value711 = (void*)0;
right_value712 = (void*)0;
memset(&param_names_570, 0, sizeof(struct list$1charph*));
right_value713 = (void*)0;
right_value714 = (void*)0;
memset(&param_default_parametors_571, 0, sizeof(struct list$1charph*));
right_value715 = (void*)0;
right_value716 = (void*)0;
memset(&header_buf_572, 0, sizeof(struct buffer*));
right_value717 = (void*)0;
memset(&i_573, 0, sizeof(int));
memset(&param_type_574, 0, sizeof(struct sType*));
memset(&param_name_575, 0, sizeof(char*));
right_value718 = (void*)0;
right_value719 = (void*)0;
right_value720 = (void*)0;
right_value721 = (void*)0;
right_value722 = (void*)0;
memset(&fun_576, 0, sizeof(struct sFun*));
right_value723 = (void*)0;
memset(&fun2_577, 0, sizeof(struct sFun*));
right_value724 = (void*)0;
right_value725 = (void*)0;
right_value726 = (void*)0;
right_value730 = (void*)0;
memset(&node_579, 0, sizeof(struct sNode*));
right_value731 = (void*)0;
right_value732 = (void*)0;
    last_code_541=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj159=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_542=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj160=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_543=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj161=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_544=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_545=((void*)0);
    real_fun_name_546=(char*)come_increment_ref_count(((char*)(right_value696=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value696 = come_decrement_ref_count2(right_value696, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_547=(struct sType*)come_increment_ref_count(((struct sType*)(right_value697=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value697, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_547;
    klass_548=type->mClass;
    if(_if_conditional519=type->mPointerNum>0&&!klass_548->mNumber,    _if_conditional519) {
        source_549=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value699=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value698=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1989, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value698, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_549,123);
        if(klass_548->mProtocol) {
            name_550="_protocol_obj";
            char source2_551[1024];
            memset(&source2_551, 0, sizeof(char)            *(1024)            );
            snprintf(source2_551,1024,"return left.%s.equals(right.%s);\n",name_550,name_550);
            buffer_append_str(source_549,source2_551);
        }
        else {
            klass_548=map$2charphsClassphp_operator_load_element(info->classes,klass_548->mName);
            for(            o2_saved_552=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_548->mFields)),it_553=list$1tuple2$2charphsTypephph_begin((o2_saved_552));            !list$1tuple2$2charphsTypephph_end((o2_saved_552));            it_553=list$1tuple2$2charphsTypephph_next((o2_saved_552))            ){
                multiple_assign_var12=it_553;
                name_554=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_555=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(_if_conditional521=string_operator_equals(type->mClass->mName,field_type_555->mClass->mName)&&type->mPointerNum==field_type_555->mPointerNum&&field_type_555->mHeap,                _if_conditional521) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_556[1024];
                memset(&source2_556, 0, sizeof(char)                *(1024)                );
                snprintf(source2_556,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_554,name_554);
                buffer_append_str(source_549,source2_556);
                name_554 = come_decrement_ref_count2(name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_555, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_552, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_549,"return true;");
        buffer_append_char(source_549,125);
        p_557=info->p;
        sline_558=info->sline;
        sname_559=(char*)come_increment_ref_count(info->sname);
        head_560=info->head;
        source3_561=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj162=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_549);
        come_call_finalizer2(buffer_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_549->buf;
        info->head=source_549->buf;
        __dec_obj163=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value700=__builtin_string(real_fun_name_546))));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value700 = come_decrement_ref_count2(right_value700, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_562=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value701=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value701, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_563=(struct sType*)come_increment_ref_count(((struct sType*)(right_value703=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value702=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2035, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value702, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value703, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_564=(char*)come_increment_ref_count(((char*)(right_value704=string_clone(real_fun_name_546))));
        right_value704 = come_decrement_ref_count2(right_value704, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_565=(struct sType*)come_increment_ref_count(((struct sType*)(right_value705=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_565->mHeap=(_Bool)0;
        right_type_566=(struct sType*)come_increment_ref_count(((struct sType*)(right_value706=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value706, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_566->mHeap=(_Bool)0;
        {__list_values25___567[0]=come_increment_ref_count(left_type_565);
__list_values25___567[1]=come_increment_ref_count(right_type_566);
}        param_types_568=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value708=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value707=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2041, "struct list$1sTypeph")))),2,__list_values25___567))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value708, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values26___569[0]=come_increment_ref_count(((char*)(right_value709=__builtin_string("left"))));
__list_values26___569[1]=come_increment_ref_count(((char*)(right_value710=__builtin_string("right"))));
}        param_names_570=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value712=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value711=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2042, "struct list$1charph")))),2,__list_values26___569))));
        right_value709 = come_decrement_ref_count2(right_value709, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value710 = come_decrement_ref_count2(right_value710, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value711, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value712, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_571=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value714=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value713=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2043, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value714, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_571,((void*)0));
        list$1charph_push_back(param_default_parametors_571,((void*)0));
        header_buf_572=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value716=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value715=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2047, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value716, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_572,((char*)(right_value717=make_come_type_name_string(result_type_563,info))));
        right_value717 = come_decrement_ref_count2(right_value717, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_572," ");
        buffer_append_str(header_buf_572,real_fun_name_546);
        buffer_append_str(header_buf_572,"(");
        for(        i_573=0;        i_573<list$1sTypeph_length(param_types_568);        i_573++        ){
            param_type_574=list$1sTypephp_operator_load_element(param_types_568,i_573);
            param_name_575=list$1charphp_operator_load_element(param_names_570,i_573);
            buffer_append_str(header_buf_572,((char*)(right_value718=make_come_type_name_string(param_type_574,info))));
            right_value718 = come_decrement_ref_count2(right_value718, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_572," ");
            buffer_append_str(header_buf_572,param_name_575);
            if(_if_conditional522=i_573!=list$1sTypeph_length(param_types_568)-1,            _if_conditional522) {
                buffer_append_str(header_buf_572,",");
            }
        }
        buffer_append_str(header_buf_572,")");
        result_type_563->mStatic=(_Bool)0;
        fun_576=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value722=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value719=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2070, "sFun")))),(char*)come_increment_ref_count(name_564),(struct sType*)come_increment_ref_count(result_type_563),(struct list$1sTypeph*)come_increment_ref_count(param_types_568),(struct list$1charph*)come_increment_ref_count(param_names_570),(struct list$1charph*)come_increment_ref_count(param_default_parametors_571),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_562),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value720=buffer_to_string(header_buf_572)))),(char*)come_increment_ref_count(((char*)(right_value721=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value719, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value720 = come_decrement_ref_count2(right_value720, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value721 = come_decrement_ref_count2(right_value721, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value722, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_577=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value723=__builtin_string(fun_name))));
        right_value723 = come_decrement_ref_count2(right_value723, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional523=fun2_577==((void*)0)||fun2_577->mExternal,        _if_conditional523) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value724=string_clone(name_564)))),(struct sFun*)come_increment_ref_count(fun_576));
            right_value724 = come_decrement_ref_count2(right_value724, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_545=fun_576;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2086, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value726=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value725=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2086, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_576),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sFunNode_sline;
        _inf_value9->sname=(void*)sFunNode_sname;
        _inf_value9->terminated=(void*)sFunNode_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_579=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value730=_inf_value9)));
        come_call_finalizer2(sFunNode_finalize,right_value725, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value726, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value730) { right_value730 = come_decrement_ref_count2(right_value730, ((struct sNode*)right_value730)->finalize, ((struct sNode*)right_value730)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional530=!node_compile(node_579,info),        _if_conditional530) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj166=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_561);
        come_call_finalizer2(buffer_finalize,__dec_obj166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_557;
        info->head=head_560;
        info->sline=sline_558;
        __dec_obj167=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_559);
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_549, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_559 = come_decrement_ref_count2(sname_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_561, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_562, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_563, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_564 = come_decrement_ref_count2(name_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_565, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_566, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_568, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_570, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_571, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_572, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_576, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_579) { node_579 = come_decrement_ref_count2(node_579, ((struct sNode*)node_579)->finalize, ((struct sNode*)node_579)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_544;
    __dec_obj168=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_541);
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj169=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_542);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj170=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_543);
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result229__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value732=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value731=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2106, "struct tuple2$2sFunpcharph")))),equaler_545,(char*)come_increment_ref_count(real_fun_name_546))));
    last_code_541 = come_decrement_ref_count2(last_code_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_542 = come_decrement_ref_count2(last_code2_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_543 = come_decrement_ref_count2(last_code3_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_546 = come_decrement_ref_count2(real_fun_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_547, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value731 = come_decrement_ref_count2(right_value731, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value732, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result229__;
    last_code_541 = come_decrement_ref_count2(last_code_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_542 = come_decrement_ref_count2(last_code2_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_543 = come_decrement_ref_count2(last_code3_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_546 = come_decrement_ref_count2(real_fun_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_547, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_580;
char* __dec_obj171;
char* last_code2_581;
char* __dec_obj172;
char* last_code3_582;
char* __dec_obj173;
struct sClass* current_stack_frame_struct_583;
struct sFun* equaler_584;
void* right_value733;
char* real_fun_name_585;
void* right_value734;
struct sType* type2_586;
struct sClass* klass_587;
_Bool _if_conditional531;
void* right_value735;
void* right_value736;
struct buffer* source_588;
_Bool _if_conditional532;
char* name_589;
int i_592;
struct list$1tuple2$2charphsTypephph* o2_saved_593;
struct tuple2$2charphsTypeph* it_594;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_595;
struct sType* field_type_596;
_Bool _if_conditional533;
_Bool _if_conditional534;
char* p_600;
int sline_601;
char* sname_602;
char* head_603;
struct buffer* source3_604;
struct buffer* __dec_obj174;
void* right_value737;
char* __dec_obj175;
void* right_value738;
struct sBlock* block_605;
void* right_value739;
void* right_value740;
struct sType* result_type_606;
void* right_value741;
char* name_607;
void* right_value742;
struct sType* left_type_608;
void* right_value743;
struct sType* right_type_609;
struct sType* __list_values27___610[2];
void* right_value744;
void* right_value745;
struct list$1sTypeph* param_types_611;
void* right_value746;
void* right_value747;
char* __list_values28___612[2];
void* right_value748;
void* right_value749;
struct list$1charph* param_names_613;
void* right_value750;
void* right_value751;
struct list$1charph* param_default_parametors_614;
void* right_value752;
void* right_value753;
struct buffer* header_buf_615;
void* right_value754;
int i_616;
struct sType* param_type_617;
char* param_name_618;
void* right_value755;
_Bool _if_conditional535;
void* right_value756;
void* right_value757;
void* right_value758;
void* right_value759;
struct sFun* fun_619;
void* right_value760;
struct sFun* fun2_620;
_Bool _if_conditional536;
void* right_value761;
void* right_value762;
void* right_value763;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value767;
struct sNode* node_622;
_Bool _if_conditional543;
struct buffer* __dec_obj178;
char* __dec_obj179;
char* __dec_obj180;
char* __dec_obj181;
char* __dec_obj182;
void* right_value768;
void* right_value769;
struct tuple2$2sFunpcharph* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_580, 0, sizeof(char*));
memset(&last_code2_581, 0, sizeof(char*));
memset(&last_code3_582, 0, sizeof(char*));
memset(&current_stack_frame_struct_583, 0, sizeof(struct sClass*));
memset(&equaler_584, 0, sizeof(struct sFun*));
right_value733 = (void*)0;
memset(&real_fun_name_585, 0, sizeof(char*));
right_value734 = (void*)0;
memset(&type2_586, 0, sizeof(struct sType*));
memset(&klass_587, 0, sizeof(struct sClass*));
right_value735 = (void*)0;
right_value736 = (void*)0;
memset(&source_588, 0, sizeof(struct buffer*));
memset(&name_589, 0, sizeof(char*));
memset(&i_592, 0, sizeof(int));
memset(&o2_saved_593, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_594, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_595, 0, sizeof(char*));
memset(&field_type_596, 0, sizeof(struct sType*));
memset(&name_595, 0, sizeof(char*));
memset(&field_type_596, 0, sizeof(struct sType*));
memset(&p_600, 0, sizeof(char*));
memset(&sline_601, 0, sizeof(int));
memset(&sname_602, 0, sizeof(char*));
memset(&head_603, 0, sizeof(char*));
memset(&source3_604, 0, sizeof(struct buffer*));
right_value737 = (void*)0;
right_value738 = (void*)0;
memset(&block_605, 0, sizeof(struct sBlock*));
right_value739 = (void*)0;
right_value740 = (void*)0;
memset(&result_type_606, 0, sizeof(struct sType*));
right_value741 = (void*)0;
memset(&name_607, 0, sizeof(char*));
right_value742 = (void*)0;
memset(&left_type_608, 0, sizeof(struct sType*));
right_value743 = (void*)0;
memset(&right_type_609, 0, sizeof(struct sType*));
right_value744 = (void*)0;
right_value745 = (void*)0;
memset(&param_types_611, 0, sizeof(struct list$1sTypeph*));
right_value746 = (void*)0;
right_value747 = (void*)0;
right_value748 = (void*)0;
right_value749 = (void*)0;
memset(&param_names_613, 0, sizeof(struct list$1charph*));
right_value750 = (void*)0;
right_value751 = (void*)0;
memset(&param_default_parametors_614, 0, sizeof(struct list$1charph*));
right_value752 = (void*)0;
right_value753 = (void*)0;
memset(&header_buf_615, 0, sizeof(struct buffer*));
right_value754 = (void*)0;
memset(&i_616, 0, sizeof(int));
memset(&param_type_617, 0, sizeof(struct sType*));
memset(&param_name_618, 0, sizeof(char*));
right_value755 = (void*)0;
right_value756 = (void*)0;
right_value757 = (void*)0;
right_value758 = (void*)0;
right_value759 = (void*)0;
memset(&fun_619, 0, sizeof(struct sFun*));
right_value760 = (void*)0;
memset(&fun2_620, 0, sizeof(struct sFun*));
right_value761 = (void*)0;
right_value762 = (void*)0;
right_value763 = (void*)0;
right_value767 = (void*)0;
memset(&node_622, 0, sizeof(struct sNode*));
right_value768 = (void*)0;
right_value769 = (void*)0;
    last_code_580=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj171=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_581=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj172=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_582=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj173=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_583=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_584=((void*)0);
    real_fun_name_585=(char*)come_increment_ref_count(((char*)(right_value733=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value733 = come_decrement_ref_count2(right_value733, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_586=(struct sType*)come_increment_ref_count(((struct sType*)(right_value734=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value734, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_586;
    klass_587=type->mClass;
    if(_if_conditional531=type->mPointerNum>0&&!klass_587->mNumber,    _if_conditional531) {
        source_588=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value736=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value735=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2131, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value735, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value736, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_588,123);
        if(klass_587->mProtocol) {
            name_589="_protocol_obj";
            char source2_590[1024];
            memset(&source2_590, 0, sizeof(char)            *(1024)            );
            snprintf(source2_590,1024,"return !left.%s.equals(right.%s);\n",name_589,name_589);
            buffer_append_str(source_588,source2_590);
        }
        else {
            char source2_591[1024];
            memset(&source2_591, 0, sizeof(char)            *(1024)            );
            snprintf(source2_591,1024,"return !(");
            buffer_append_str(source_588,source2_591);
            i_592=0;
            klass_587=map$2charphsClassphp_operator_load_element(info->classes,klass_587->mName);
            for(            o2_saved_593=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_587->mFields)),it_594=list$1tuple2$2charphsTypephph_begin((o2_saved_593));            !list$1tuple2$2charphsTypephph_end((o2_saved_593));            it_594=list$1tuple2$2charphsTypephph_next((o2_saved_593))            ){
                multiple_assign_var13=it_594;
                name_595=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_596=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(_if_conditional533=string_operator_equals(type->mClass->mName,field_type_596->mClass->mName)&&type->mPointerNum==field_type_596->mPointerNum&&field_type_596->mHeap,                _if_conditional533) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_597[1024];
                memset(&source2_597, 0, sizeof(char)                *(1024)                );
                snprintf(source2_597,1024,"left.%s.equals(right.%s)",name_595,name_595);
                buffer_append_str(source_588,source2_597);
                if(_if_conditional534=i_592==list$1tuple2$2charphsTypephph_length(klass_587->mFields)-1,                _if_conditional534) {
                    char source2_598[1024];
                    memset(&source2_598, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_598,1024,");");
                    buffer_append_str(source_588,source2_598);
                }
                else {
                    char source2_599[1024];
                    memset(&source2_599, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_599,1024," && ");
                    buffer_append_str(source_588,source2_599);
                }
                i_592++;
                name_595 = come_decrement_ref_count2(name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_596, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_593, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_588,125);
        p_600=info->p;
        sline_601=info->sline;
        sname_602=(char*)come_increment_ref_count(info->sname);
        head_603=info->head;
        source3_604=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj174=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_588);
        come_call_finalizer2(buffer_finalize,__dec_obj174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_588->buf;
        info->head=source_588->buf;
        __dec_obj175=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value737=__builtin_string(real_fun_name_585))));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value737 = come_decrement_ref_count2(right_value737, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_605=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value738=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value738, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_606=(struct sType*)come_increment_ref_count(((struct sType*)(right_value740=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value739=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2194, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value739, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value740, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_607=(char*)come_increment_ref_count(((char*)(right_value741=string_clone(real_fun_name_585))));
        right_value741 = come_decrement_ref_count2(right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_608=(struct sType*)come_increment_ref_count(((struct sType*)(right_value742=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value742, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_608->mHeap=(_Bool)0;
        right_type_609=(struct sType*)come_increment_ref_count(((struct sType*)(right_value743=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value743, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_609->mHeap=(_Bool)0;
        {__list_values27___610[0]=come_increment_ref_count(left_type_608);
__list_values27___610[1]=come_increment_ref_count(right_type_609);
}        param_types_611=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value745=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value744=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2200, "struct list$1sTypeph")))),2,__list_values27___610))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value744, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value745, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values28___612[0]=come_increment_ref_count(((char*)(right_value746=__builtin_string("left"))));
__list_values28___612[1]=come_increment_ref_count(((char*)(right_value747=__builtin_string("right"))));
}        param_names_613=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value749=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value748=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2201, "struct list$1charph")))),2,__list_values28___612))));
        right_value746 = come_decrement_ref_count2(right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value747 = come_decrement_ref_count2(right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value748, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value749, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_614=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value751=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value750=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2202, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value750, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value751, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_614,((void*)0));
        list$1charph_push_back(param_default_parametors_614,((void*)0));
        header_buf_615=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value753=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value752=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2206, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value752, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value753, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_615,((char*)(right_value754=make_come_type_name_string(result_type_606,info))));
        right_value754 = come_decrement_ref_count2(right_value754, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_615," ");
        buffer_append_str(header_buf_615,real_fun_name_585);
        buffer_append_str(header_buf_615,"(");
        for(        i_616=0;        i_616<list$1sTypeph_length(param_types_611);        i_616++        ){
            param_type_617=list$1sTypephp_operator_load_element(param_types_611,i_616);
            param_name_618=list$1charphp_operator_load_element(param_names_613,i_616);
            buffer_append_str(header_buf_615,((char*)(right_value755=make_come_type_name_string(param_type_617,info))));
            right_value755 = come_decrement_ref_count2(right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_615," ");
            buffer_append_str(header_buf_615,param_name_618);
            if(_if_conditional535=i_616!=list$1sTypeph_length(param_types_611)-1,            _if_conditional535) {
                buffer_append_str(header_buf_615,",");
            }
        }
        buffer_append_str(header_buf_615,")");
        result_type_606->mStatic=(_Bool)0;
        fun_619=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value759=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value756=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2229, "sFun")))),(char*)come_increment_ref_count(name_607),(struct sType*)come_increment_ref_count(result_type_606),(struct list$1sTypeph*)come_increment_ref_count(param_types_611),(struct list$1charph*)come_increment_ref_count(param_names_613),(struct list$1charph*)come_increment_ref_count(param_default_parametors_614),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_605),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value757=buffer_to_string(header_buf_615)))),(char*)come_increment_ref_count(((char*)(right_value758=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value756, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value757 = come_decrement_ref_count2(right_value757, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value758 = come_decrement_ref_count2(right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value759, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_620=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value760=__builtin_string(fun_name))));
        right_value760 = come_decrement_ref_count2(right_value760, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional536=fun2_620==((void*)0)||fun2_620->mExternal,        _if_conditional536) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value761=string_clone(name_607)))),(struct sFun*)come_increment_ref_count(fun_619));
            right_value761 = come_decrement_ref_count2(right_value761, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_584=fun_619;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2245, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value763=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value762=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2245, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_619),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sFunNode_sline;
        _inf_value10->sname=(void*)sFunNode_sname;
        _inf_value10->terminated=(void*)sFunNode_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_622=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value767=_inf_value10)));
        come_call_finalizer2(sFunNode_finalize,right_value762, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value763, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value767) { right_value767 = come_decrement_ref_count2(right_value767, ((struct sNode*)right_value767)->finalize, ((struct sNode*)right_value767)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional543=!node_compile(node_622,info),        _if_conditional543) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj178=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_604);
        come_call_finalizer2(buffer_finalize,__dec_obj178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_600;
        info->head=head_603;
        info->sline=sline_601;
        __dec_obj179=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_602);
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_588, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_602 = come_decrement_ref_count2(sname_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_604, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_605, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_606, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_607 = come_decrement_ref_count2(name_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_608, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_609, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_611, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_613, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_614, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_615, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_619, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_622) { node_622 = come_decrement_ref_count2(node_622, ((struct sNode*)node_622)->finalize, ((struct sNode*)node_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_583;
    __dec_obj180=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_580);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj181=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_581);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj182=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_582);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result233__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value769=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value768=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2265, "struct tuple2$2sFunpcharph")))),equaler_584,(char*)come_increment_ref_count(real_fun_name_585))));
    last_code_580 = come_decrement_ref_count2(last_code_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_581 = come_decrement_ref_count2(last_code2_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_582 = come_decrement_ref_count2(last_code3_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_585 = come_decrement_ref_count2(real_fun_name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_586, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value768 = come_decrement_ref_count2(right_value768, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value769, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result233__;
    last_code_580 = come_decrement_ref_count2(last_code_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_581 = come_decrement_ref_count2(last_code2_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_582 = come_decrement_ref_count2(last_code3_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_585 = come_decrement_ref_count2(real_fun_name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_586, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result230__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result230__ = self->len;
                    return __result230__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_623;
char* __dec_obj183;
char* last_code2_624;
char* __dec_obj184;
char* last_code3_625;
char* __dec_obj185;
struct sClass* current_stack_frame_struct_626;
struct sFun* equaler_627;
void* right_value770;
char* real_fun_name_628;
void* right_value771;
struct sType* type2_629;
struct sClass* klass_630;
_Bool _if_conditional544;
void* right_value772;
void* right_value773;
struct buffer* source_631;
_Bool _if_conditional545;
char* name_632;
struct list$1tuple2$2charphsTypephph* o2_saved_634;
struct tuple2$2charphsTypeph* it_635;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_636;
struct sType* field_type_637;
_Bool _if_conditional546;
char* p_639;
int sline_640;
char* sname_641;
char* head_642;
struct buffer* source3_643;
struct buffer* __dec_obj186;
void* right_value774;
char* __dec_obj187;
void* right_value775;
struct sBlock* block_644;
void* right_value776;
void* right_value777;
struct sType* result_type_645;
void* right_value778;
char* name_646;
void* right_value779;
struct sType* left_type_647;
void* right_value780;
struct sType* right_type_648;
struct sType* __list_values29___649[2];
void* right_value781;
void* right_value782;
struct list$1sTypeph* param_types_650;
void* right_value783;
void* right_value784;
char* __list_values30___651[2];
void* right_value785;
void* right_value786;
struct list$1charph* param_names_652;
void* right_value787;
void* right_value788;
struct list$1charph* param_default_parametors_653;
void* right_value789;
void* right_value790;
struct buffer* header_buf_654;
void* right_value791;
int i_655;
struct sType* param_type_656;
char* param_name_657;
void* right_value792;
_Bool _if_conditional547;
void* right_value793;
void* right_value794;
void* right_value795;
void* right_value796;
struct sFun* fun_658;
void* right_value797;
struct sFun* fun2_659;
_Bool _if_conditional548;
void* right_value798;
void* right_value799;
void* right_value800;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value804;
struct sNode* node_661;
_Bool _if_conditional555;
struct buffer* __dec_obj190;
char* __dec_obj191;
char* __dec_obj192;
char* __dec_obj193;
char* __dec_obj194;
void* right_value805;
void* right_value806;
struct tuple2$2sFunpcharph* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_623, 0, sizeof(char*));
memset(&last_code2_624, 0, sizeof(char*));
memset(&last_code3_625, 0, sizeof(char*));
memset(&current_stack_frame_struct_626, 0, sizeof(struct sClass*));
memset(&equaler_627, 0, sizeof(struct sFun*));
right_value770 = (void*)0;
memset(&real_fun_name_628, 0, sizeof(char*));
right_value771 = (void*)0;
memset(&type2_629, 0, sizeof(struct sType*));
memset(&klass_630, 0, sizeof(struct sClass*));
right_value772 = (void*)0;
right_value773 = (void*)0;
memset(&source_631, 0, sizeof(struct buffer*));
memset(&name_632, 0, sizeof(char*));
memset(&o2_saved_634, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_635, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_636, 0, sizeof(char*));
memset(&field_type_637, 0, sizeof(struct sType*));
memset(&name_636, 0, sizeof(char*));
memset(&field_type_637, 0, sizeof(struct sType*));
memset(&p_639, 0, sizeof(char*));
memset(&sline_640, 0, sizeof(int));
memset(&sname_641, 0, sizeof(char*));
memset(&head_642, 0, sizeof(char*));
memset(&source3_643, 0, sizeof(struct buffer*));
right_value774 = (void*)0;
right_value775 = (void*)0;
memset(&block_644, 0, sizeof(struct sBlock*));
right_value776 = (void*)0;
right_value777 = (void*)0;
memset(&result_type_645, 0, sizeof(struct sType*));
right_value778 = (void*)0;
memset(&name_646, 0, sizeof(char*));
right_value779 = (void*)0;
memset(&left_type_647, 0, sizeof(struct sType*));
right_value780 = (void*)0;
memset(&right_type_648, 0, sizeof(struct sType*));
right_value781 = (void*)0;
right_value782 = (void*)0;
memset(&param_types_650, 0, sizeof(struct list$1sTypeph*));
right_value783 = (void*)0;
right_value784 = (void*)0;
right_value785 = (void*)0;
right_value786 = (void*)0;
memset(&param_names_652, 0, sizeof(struct list$1charph*));
right_value787 = (void*)0;
right_value788 = (void*)0;
memset(&param_default_parametors_653, 0, sizeof(struct list$1charph*));
right_value789 = (void*)0;
right_value790 = (void*)0;
memset(&header_buf_654, 0, sizeof(struct buffer*));
right_value791 = (void*)0;
memset(&i_655, 0, sizeof(int));
memset(&param_type_656, 0, sizeof(struct sType*));
memset(&param_name_657, 0, sizeof(char*));
right_value792 = (void*)0;
right_value793 = (void*)0;
right_value794 = (void*)0;
right_value795 = (void*)0;
right_value796 = (void*)0;
memset(&fun_658, 0, sizeof(struct sFun*));
right_value797 = (void*)0;
memset(&fun2_659, 0, sizeof(struct sFun*));
right_value798 = (void*)0;
right_value799 = (void*)0;
right_value800 = (void*)0;
right_value804 = (void*)0;
memset(&node_661, 0, sizeof(struct sNode*));
right_value805 = (void*)0;
right_value806 = (void*)0;
    last_code_623=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj183=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_624=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj184=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_625=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj185=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_626=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_627=((void*)0);
    real_fun_name_628=(char*)come_increment_ref_count(((char*)(right_value770=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value770 = come_decrement_ref_count2(right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_629=(struct sType*)come_increment_ref_count(((struct sType*)(right_value771=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value771, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_629;
    klass_630=type->mClass;
    if(_if_conditional544=type->mPointerNum>0&&!klass_630->mNumber,    _if_conditional544) {
        source_631=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value773=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value772=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2290, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value772, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value773, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_631,123);
        if(klass_630->mProtocol) {
            name_632="_protocol_obj";
            char source2_633[1024];
            memset(&source2_633, 0, sizeof(char)            *(1024)            );
            snprintf(source2_633,1024,"return left.%s.equals(right.%s);\n",name_632,name_632);
            buffer_append_str(source_631,source2_633);
        }
        else {
            klass_630=map$2charphsClassphp_operator_load_element(info->classes,klass_630->mName);
            for(            o2_saved_634=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_630->mFields)),it_635=list$1tuple2$2charphsTypephph_begin((o2_saved_634));            !list$1tuple2$2charphsTypephph_end((o2_saved_634));            it_635=list$1tuple2$2charphsTypephph_next((o2_saved_634))            ){
                multiple_assign_var14=it_635;
                name_636=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_637=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(_if_conditional546=string_operator_equals(type->mClass->mName,field_type_637->mClass->mName)&&type->mPointerNum==field_type_637->mPointerNum&&field_type_637->mHeap,                _if_conditional546) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_638[1024];
                memset(&source2_638, 0, sizeof(char)                *(1024)                );
                snprintf(source2_638,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_636,name_636);
                buffer_append_str(source_631,source2_638);
                name_636 = come_decrement_ref_count2(name_636, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_637, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_634, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_631,"return true;\n");
        buffer_append_char(source_631,125);
        p_639=info->p;
        sline_640=info->sline;
        sname_641=(char*)come_increment_ref_count(info->sname);
        head_642=info->head;
        source3_643=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj186=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_631);
        come_call_finalizer2(buffer_finalize,__dec_obj186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_631->buf;
        info->head=source_631->buf;
        __dec_obj187=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value774=__builtin_string(real_fun_name_628))));
        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value774 = come_decrement_ref_count2(right_value774, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_644=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value775=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value775, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_645=(struct sType*)come_increment_ref_count(((struct sType*)(right_value777=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value776=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2336, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value776, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value777, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_646=(char*)come_increment_ref_count(((char*)(right_value778=string_clone(real_fun_name_628))));
        right_value778 = come_decrement_ref_count2(right_value778, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_647=(struct sType*)come_increment_ref_count(((struct sType*)(right_value779=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value779, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_647->mHeap=(_Bool)0;
        right_type_648=(struct sType*)come_increment_ref_count(((struct sType*)(right_value780=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value780, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_648->mHeap=(_Bool)0;
        {__list_values29___649[0]=come_increment_ref_count(left_type_647);
__list_values29___649[1]=come_increment_ref_count(right_type_648);
}        param_types_650=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value782=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value781=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2342, "struct list$1sTypeph")))),2,__list_values29___649))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value781, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value782, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values30___651[0]=come_increment_ref_count(((char*)(right_value783=__builtin_string("left"))));
__list_values30___651[1]=come_increment_ref_count(((char*)(right_value784=__builtin_string("right"))));
}        param_names_652=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value786=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value785=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2343, "struct list$1charph")))),2,__list_values30___651))));
        right_value783 = come_decrement_ref_count2(right_value783, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value784 = come_decrement_ref_count2(right_value784, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value785, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value786, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_653=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value788=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value787=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2344, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value787, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value788, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_653,((void*)0));
        list$1charph_push_back(param_default_parametors_653,((void*)0));
        header_buf_654=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value790=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value789=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2348, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value789, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value790, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_654,((char*)(right_value791=make_come_type_name_string(result_type_645,info))));
        right_value791 = come_decrement_ref_count2(right_value791, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_654," ");
        buffer_append_str(header_buf_654,real_fun_name_628);
        buffer_append_str(header_buf_654,"(");
        for(        i_655=0;        i_655<list$1sTypeph_length(param_types_650);        i_655++        ){
            param_type_656=list$1sTypephp_operator_load_element(param_types_650,i_655);
            param_name_657=list$1charphp_operator_load_element(param_names_652,i_655);
            buffer_append_str(header_buf_654,((char*)(right_value792=make_come_type_name_string(param_type_656,info))));
            right_value792 = come_decrement_ref_count2(right_value792, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_654," ");
            buffer_append_str(header_buf_654,param_name_657);
            if(_if_conditional547=i_655!=list$1sTypeph_length(param_types_650)-1,            _if_conditional547) {
                buffer_append_str(header_buf_654,",");
            }
        }
        buffer_append_str(header_buf_654,")");
        result_type_645->mStatic=(_Bool)0;
        fun_658=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value796=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value793=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2371, "sFun")))),(char*)come_increment_ref_count(name_646),(struct sType*)come_increment_ref_count(result_type_645),(struct list$1sTypeph*)come_increment_ref_count(param_types_650),(struct list$1charph*)come_increment_ref_count(param_names_652),(struct list$1charph*)come_increment_ref_count(param_default_parametors_653),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_644),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value794=buffer_to_string(header_buf_654)))),(char*)come_increment_ref_count(((char*)(right_value795=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value793, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value794 = come_decrement_ref_count2(right_value794, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value795 = come_decrement_ref_count2(right_value795, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value796, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_659=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value797=__builtin_string(fun_name))));
        right_value797 = come_decrement_ref_count2(right_value797, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional548=fun2_659==((void*)0)||fun2_659->mExternal,        _if_conditional548) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value798=string_clone(name_646)))),(struct sFun*)come_increment_ref_count(fun_658));
            right_value798 = come_decrement_ref_count2(right_value798, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_627=fun_658;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2387, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value800=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value799=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2387, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_658),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sFunNode_sline;
        _inf_value11->sname=(void*)sFunNode_sname;
        _inf_value11->terminated=(void*)sFunNode_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_661=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value804=_inf_value11)));
        come_call_finalizer2(sFunNode_finalize,right_value799, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value800, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value804) { right_value804 = come_decrement_ref_count2(right_value804, ((struct sNode*)right_value804)->finalize, ((struct sNode*)right_value804)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional555=!node_compile(node_661,info),        _if_conditional555) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj190=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_643);
        come_call_finalizer2(buffer_finalize,__dec_obj190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_639;
        info->head=head_642;
        info->sline=sline_640;
        __dec_obj191=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_641);
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_631, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_641 = come_decrement_ref_count2(sname_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_643, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_644, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_645, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_646 = come_decrement_ref_count2(name_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_647, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_648, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_650, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_652, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_653, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_654, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_658, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_626;
    __dec_obj192=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_623);
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj193=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_624);
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj194=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_625);
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result236__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value806=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value805=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2407, "struct tuple2$2sFunpcharph")))),equaler_627,(char*)come_increment_ref_count(real_fun_name_628))));
    last_code_623 = come_decrement_ref_count2(last_code_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_624 = come_decrement_ref_count2(last_code2_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_625 = come_decrement_ref_count2(last_code3_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_628 = come_decrement_ref_count2(real_fun_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_629, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value805 = come_decrement_ref_count2(right_value805, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value806, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result236__;
    last_code_623 = come_decrement_ref_count2(last_code_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_624 = come_decrement_ref_count2(last_code2_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_625 = come_decrement_ref_count2(last_code3_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_628 = come_decrement_ref_count2(real_fun_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_629, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_662;
char* __dec_obj195;
char* last_code2_663;
char* __dec_obj196;
char* last_code3_664;
char* __dec_obj197;
struct sClass* current_stack_frame_struct_665;
struct sFun* cloner_666;
void* right_value807;
char* real_fun_name_667;
void* right_value808;
struct sType* type2_668;
struct sClass* klass_669;
_Bool _if_conditional556;
void* right_value809;
void* right_value810;
struct buffer* source_670;
void* right_value811;
void* right_value812;
_Bool _if_conditional557;
char* name_671;
struct list$1tuple2$2charphsTypephph* o2_saved_673;
struct tuple2$2charphsTypeph* it_674;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_675;
struct sType* field_type_676;
_Bool _if_conditional558;
_Bool _if_conditional559;
_Bool _if_conditional560;
struct list$1tuple2$2charphsTypephph* o2_saved_679;
struct tuple2$2charphsTypeph* it_680;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_681;
struct sType* field_type_682;
_Bool _if_conditional561;
_Bool _if_conditional562;
_Bool _if_conditional563;
void* right_value813;
char* p_686;
int sline_687;
char* sname_688;
struct buffer* source3_689;
char* head_690;
struct buffer* __dec_obj198;
void* right_value814;
char* __dec_obj199;
void* right_value815;
struct sBlock* block_691;
void* right_value816;
struct sType* result_type_692;
void* right_value817;
char* name_693;
void* right_value818;
struct sType* self_type_694;
struct sType* __list_values31___695[1];
void* right_value819;
void* right_value820;
struct list$1sTypeph* param_types_696;
void* right_value821;
char* __list_values32___697[1];
void* right_value822;
void* right_value823;
struct list$1charph* param_names_698;
void* right_value824;
void* right_value825;
struct list$1charph* param_default_parametors_699;
void* right_value826;
void* right_value827;
struct buffer* header_buf_700;
void* right_value828;
int i_701;
struct sType* param_type_702;
char* param_name_703;
void* right_value829;
_Bool _if_conditional564;
void* right_value830;
void* right_value831;
void* right_value832;
void* right_value833;
struct sFun* fun_704;
void* right_value834;
struct sFun* fun2_705;
_Bool _if_conditional565;
void* right_value835;
void* right_value836;
void* right_value837;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value841;
struct sNode* node_707;
_Bool _if_conditional572;
char* __dec_obj202;
struct buffer* __dec_obj203;
char* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
void* right_value842;
void* right_value843;
struct tuple2$2sFunpcharph* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_662, 0, sizeof(char*));
memset(&last_code2_663, 0, sizeof(char*));
memset(&last_code3_664, 0, sizeof(char*));
memset(&current_stack_frame_struct_665, 0, sizeof(struct sClass*));
memset(&cloner_666, 0, sizeof(struct sFun*));
right_value807 = (void*)0;
memset(&real_fun_name_667, 0, sizeof(char*));
right_value808 = (void*)0;
memset(&type2_668, 0, sizeof(struct sType*));
memset(&klass_669, 0, sizeof(struct sClass*));
right_value809 = (void*)0;
right_value810 = (void*)0;
memset(&source_670, 0, sizeof(struct buffer*));
right_value811 = (void*)0;
right_value812 = (void*)0;
memset(&name_671, 0, sizeof(char*));
memset(&o2_saved_673, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_674, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_675, 0, sizeof(char*));
memset(&field_type_676, 0, sizeof(struct sType*));
memset(&name_675, 0, sizeof(char*));
memset(&field_type_676, 0, sizeof(struct sType*));
memset(&o2_saved_679, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_680, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_681, 0, sizeof(char*));
memset(&field_type_682, 0, sizeof(struct sType*));
memset(&name_681, 0, sizeof(char*));
memset(&field_type_682, 0, sizeof(struct sType*));
right_value813 = (void*)0;
memset(&p_686, 0, sizeof(char*));
memset(&sline_687, 0, sizeof(int));
memset(&sname_688, 0, sizeof(char*));
memset(&source3_689, 0, sizeof(struct buffer*));
memset(&head_690, 0, sizeof(char*));
right_value814 = (void*)0;
right_value815 = (void*)0;
memset(&block_691, 0, sizeof(struct sBlock*));
right_value816 = (void*)0;
memset(&result_type_692, 0, sizeof(struct sType*));
right_value817 = (void*)0;
memset(&name_693, 0, sizeof(char*));
right_value818 = (void*)0;
memset(&self_type_694, 0, sizeof(struct sType*));
right_value819 = (void*)0;
right_value820 = (void*)0;
memset(&param_types_696, 0, sizeof(struct list$1sTypeph*));
right_value821 = (void*)0;
right_value822 = (void*)0;
right_value823 = (void*)0;
memset(&param_names_698, 0, sizeof(struct list$1charph*));
right_value824 = (void*)0;
right_value825 = (void*)0;
memset(&param_default_parametors_699, 0, sizeof(struct list$1charph*));
right_value826 = (void*)0;
right_value827 = (void*)0;
memset(&header_buf_700, 0, sizeof(struct buffer*));
right_value828 = (void*)0;
memset(&i_701, 0, sizeof(int));
memset(&param_type_702, 0, sizeof(struct sType*));
memset(&param_name_703, 0, sizeof(char*));
right_value829 = (void*)0;
right_value830 = (void*)0;
right_value831 = (void*)0;
right_value832 = (void*)0;
right_value833 = (void*)0;
memset(&fun_704, 0, sizeof(struct sFun*));
right_value834 = (void*)0;
memset(&fun2_705, 0, sizeof(struct sFun*));
right_value835 = (void*)0;
right_value836 = (void*)0;
right_value837 = (void*)0;
right_value841 = (void*)0;
memset(&node_707, 0, sizeof(struct sNode*));
right_value842 = (void*)0;
right_value843 = (void*)0;
    last_code_662=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj195=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_663=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj196=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_664=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj197=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_665=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_666=((void*)0);
    real_fun_name_667=(char*)come_increment_ref_count(((char*)(right_value807=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value807 = come_decrement_ref_count2(right_value807, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_668=(struct sType*)come_increment_ref_count(((struct sType*)(right_value808=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value808, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_668;
    klass_669=type->mClass;
    if(_if_conditional556=type->mPointerNum>0&&!klass_669->mNumber,    _if_conditional556) {
        source_670=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value810=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value809=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2432, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value809, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value810, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(source_670,"{\n");
        buffer_append_str(source_670,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_670,((char*)(right_value812=xsprintf("var result = new %s;\n",((char*)(right_value811=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value811 = come_decrement_ref_count2(right_value811, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value812 = come_decrement_ref_count2(right_value812, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_669->mProtocol) {
            name_671="_protocol_obj";
            char source2_672[1024];
            memset(&source2_672, 0, sizeof(char)            *(1024)            );
            snprintf(source2_672,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_670,source2_672);
            klass_669=map$2charphsClassphp_operator_load_element(info->classes,klass_669->mName);
            for(            o2_saved_673=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_669->mFields)),it_674=list$1tuple2$2charphsTypephph_begin((o2_saved_673));            !list$1tuple2$2charphsTypephph_end((o2_saved_673));            it_674=list$1tuple2$2charphsTypephph_next((o2_saved_673))            ){
                multiple_assign_var15=it_674;
                name_675=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_676=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(_if_conditional558=string_operator_equals(type->mClass->mName,field_type_676->mClass->mName)&&type->mPointerNum==field_type_676->mPointerNum&&field_type_676->mHeap,                _if_conditional558) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(_if_conditional559=string_operator_equals(name_675,"_protocol_obj"),                _if_conditional559) {
                }
                else {
                    if(_if_conditional560=list$1sNodeph_length(field_type_676->mArrayNum)>0,                    _if_conditional560) {
                        char source2_677[1024];
                        memset(&source2_677, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_677,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_675,name_675,name_675);
                        buffer_append_str(source_670,source2_677);
                    }
                    else {
                        char source2_678[1024];
                        memset(&source2_678, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_678,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_675,name_675);
                        buffer_append_str(source_670,source2_678);
                    }
                }
                name_675 = come_decrement_ref_count2(name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_676, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_673, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_669=map$2charphsClassphp_operator_load_element(info->classes,klass_669->mName);
            for(            o2_saved_679=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_669->mFields)),it_680=list$1tuple2$2charphsTypephph_begin((o2_saved_679));            !list$1tuple2$2charphsTypephph_end((o2_saved_679));            it_680=list$1tuple2$2charphsTypephph_next((o2_saved_679))            ){
                multiple_assign_var16=it_680;
                name_681=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_682=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(_if_conditional561=string_operator_equals(type->mClass->mName,field_type_682->mClass->mName)&&type->mPointerNum==field_type_682->mPointerNum&&field_type_682->mHeap,                _if_conditional561) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_682->mHeap) {
                    char source2_683[1024];
                    memset(&source2_683, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_683,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_681,name_681,name_681);
                    buffer_append_str(source_670,source2_683);
                }
                else {
                    if(_if_conditional563=list$1sNodeph_length(field_type_682->mArrayNum)>0,                    _if_conditional563) {
                        char source2_684[1024];
                        memset(&source2_684, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_684,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_681,name_681,name_681);
                        buffer_append_str(source_670,source2_684);
                    }
                    else {
                        char source2_685[1024];
                        memset(&source2_685, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_685,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_681,name_681);
                        buffer_append_str(source_670,source2_685);
                    }
                }
                name_681 = come_decrement_ref_count2(name_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_682, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_679, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_670,((char*)(right_value813=xsprintf("return result;"))));
        right_value813 = come_decrement_ref_count2(right_value813, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_670,125);
        p_686=info->p;
        sline_687=info->sline;
        sname_688=(char*)come_increment_ref_count(info->sname);
        source3_689=(struct buffer*)come_increment_ref_count(info->source);
        head_690=info->head;
        __dec_obj198=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_670);
        come_call_finalizer2(buffer_finalize,__dec_obj198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj199=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value814=__builtin_string(real_fun_name_667))));
        __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value814 = come_decrement_ref_count2(right_value814, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=1;
        block_691=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value815=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value815, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_692=(struct sType*)come_increment_ref_count(((struct sType*)(right_value816=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value816, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_693=(char*)come_increment_ref_count(((char*)(right_value817=string_clone(real_fun_name_667))));
        right_value817 = come_decrement_ref_count2(right_value817, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_694=(struct sType*)come_increment_ref_count(((struct sType*)(right_value818=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value818, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_694->mHeap=(_Bool)0;
        {__list_values31___695[0]=come_increment_ref_count(self_type_694);
}        param_types_696=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value820=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value819=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2526, "struct list$1sTypeph")))),1,__list_values31___695))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value819, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value820, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values32___697[0]=come_increment_ref_count(((char*)(right_value821=__builtin_string("self"))));
}        param_names_698=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value823=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value822=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2527, "struct list$1charph")))),1,__list_values32___697))));
        right_value821 = come_decrement_ref_count2(right_value821, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value822, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value823, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_699=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value825=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value824=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2528, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value824, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value825, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_699,((void*)0));
        header_buf_700=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value827=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value826=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2531, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value826, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value827, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_700,((char*)(right_value828=make_come_type_name_string(result_type_692,info))));
        right_value828 = come_decrement_ref_count2(right_value828, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_700," ");
        buffer_append_str(header_buf_700,real_fun_name_667);
        buffer_append_str(header_buf_700,"(");
        for(        i_701=0;        i_701<list$1sTypeph_length(param_types_696);        i_701++        ){
            param_type_702=list$1sTypephp_operator_load_element(param_types_696,i_701);
            param_name_703=list$1charphp_operator_load_element(param_names_698,i_701);
            buffer_append_str(header_buf_700,((char*)(right_value829=make_come_type_name_string(param_type_702,info))));
            right_value829 = come_decrement_ref_count2(right_value829, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_700," ");
            buffer_append_str(header_buf_700,param_name_703);
            if(_if_conditional564=i_701!=list$1sTypeph_length(param_types_696)-1,            _if_conditional564) {
                buffer_append_str(header_buf_700,",");
            }
        }
        buffer_append_str(header_buf_700,")");
        result_type_692->mStatic=(_Bool)0;
        fun_704=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value833=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value830=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2554, "sFun")))),(char*)come_increment_ref_count(name_693),(struct sType*)come_increment_ref_count(result_type_692),(struct list$1sTypeph*)come_increment_ref_count(param_types_696),(struct list$1charph*)come_increment_ref_count(param_names_698),(struct list$1charph*)come_increment_ref_count(param_default_parametors_699),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_691),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value831=buffer_to_string(header_buf_700)))),(char*)come_increment_ref_count(((char*)(right_value832=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value830, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value831 = come_decrement_ref_count2(right_value831, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value832 = come_decrement_ref_count2(right_value832, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value833, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun_704->mCloner=(_Bool)1;
        fun2_705=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value834=__builtin_string(fun_name))));
        right_value834 = come_decrement_ref_count2(right_value834, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional565=fun2_705==((void*)0)||fun2_705->mExternal,        _if_conditional565) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value835=string_clone(name_693)))),(struct sFun*)come_increment_ref_count(fun_704));
            right_value835 = come_decrement_ref_count2(right_value835, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        cloner_666=fun_704;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2571, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value837=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value836=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2571, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_704),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sFunNode_sline;
        _inf_value12->sname=(void*)sFunNode_sname;
        _inf_value12->terminated=(void*)sFunNode_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_707=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value841=_inf_value12)));
        come_call_finalizer2(sFunNode_finalize,right_value836, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value837, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value841) { right_value841 = come_decrement_ref_count2(right_value841, ((struct sNode*)right_value841)->finalize, ((struct sNode*)right_value841)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional572=!node_compile(node_707,info),        _if_conditional572) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj202=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_688);
        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_687;
        __dec_obj203=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_689);
        come_call_finalizer2(buffer_finalize,__dec_obj203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_686;
        info->head=head_690;
        info->sline=sline_687;
        come_call_finalizer2(buffer_finalize,source_670, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_688 = come_decrement_ref_count2(sname_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_689, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_691, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_692, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_693 = come_decrement_ref_count2(name_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_694, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_696, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_698, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_699, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_700, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_704, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_665;
    __dec_obj204=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_662);
    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj205=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_663);
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj206=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_664);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result239__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value843=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value842=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2593, "struct tuple2$2sFunpcharph")))),cloner_666,(char*)come_increment_ref_count(real_fun_name_667))));
    last_code_662 = come_decrement_ref_count2(last_code_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_663 = come_decrement_ref_count2(last_code2_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_664 = come_decrement_ref_count2(last_code3_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_667 = come_decrement_ref_count2(real_fun_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_668, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value842 = come_decrement_ref_count2(right_value842, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value843, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result239__;
    last_code_662 = come_decrement_ref_count2(last_code_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_663 = come_decrement_ref_count2(last_code2_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_664 = come_decrement_ref_count2(last_code3_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_667 = come_decrement_ref_count2(real_fun_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_668, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct sFunNode* __result237__;
void* right_value838;
struct sFunNode* result_706;
_Bool _if_conditional569;
void* right_value839;
struct sFun* __dec_obj200;
_Bool _if_conditional570;
_Bool _if_conditional571;
void* right_value840;
char* __dec_obj201;
struct sFunNode* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
right_value838 = (void*)0;
memset(&result_706, 0, sizeof(struct sFunNode*));
right_value839 = (void*)0;
right_value840 = (void*)0;
            if(_if_conditional568=self==(void*)0,            _if_conditional568) {
                __result237__ = __result_obj__ = (void*)0;
                return __result237__;
            }
            result_706=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value838=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"))));
            come_call_finalizer2(sFunNode_finalize,right_value838, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional569=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional569) {
                __dec_obj200=result_706->mFun;
                result_706->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value839=sFun_clone(self->mFun))));
                come_call_finalizer2(sFun_finalize,__dec_obj200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,right_value839, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional570=self!=((void*)0),            _if_conditional570) {
                result_706->sline=self->sline;
            }
            if(_if_conditional571=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional571) {
                __dec_obj201=result_706->sname;
                result_706->sname=(char*)come_increment_ref_count(((char*)(right_value840=string_clone(self->sname))));
                __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value840 = come_decrement_ref_count2(right_value840, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result238__ = __result_obj__ = result_706;
            come_call_finalizer2(sFunNode_finalize,result_706, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result238__;
            come_call_finalizer2(sFunNode_finalize,result_706, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

