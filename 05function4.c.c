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
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple3$3sTypepcharphbool
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

struct sNode* parse_normal_block(struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

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

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
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
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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










void skip_paren(struct sInfo* info){
void* __result_obj__;
int nest_11;
_Bool _while_condtional1;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&nest_11, 0, sizeof(int));
    # 5 "05function4.c"
    nest_11=0;
    # 26 "05function4.c"
    while(_while_condtional1=(_Bool)1,    _while_condtional1) {
        # 25 "05function4.c"
        # 7 "05function4.c"
        if(_if_conditional7=*info->p==40,        _if_conditional7) {
            # 8 "05function4.c"
            info->p++;
            # 9 "05function4.c"
            skip_spaces_and_lf(info);
            # 11 "05function4.c"
            nest_11++;
        }
        else {
            # 25 "05function4.c"
            # 13 "05function4.c"
            if(_if_conditional8=*info->p==41,            _if_conditional8) {
                # 14 "05function4.c"
                info->p++;
                # 15 "05function4.c"
                skip_spaces_and_lf(info);
                # 17 "05function4.c"
                nest_11--;
                # 21 "05function4.c"
                # 18 "05function4.c"
                if(_if_conditional9=nest_11==0,                _if_conditional9) {
                    # 19 "05function4.c"
                    break;
                }
            }
            else {
                # 23 "05function4.c"
                info->p++;
            }
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional2;
_Bool _while_condtional3;
_Bool _while_condtional4;
_Bool _if_conditional10;
_Bool _while_condtional5;
_Bool _if_conditional11;
_Bool _if_conditional12;
int line_12;
void* right_value49;
void* right_value50;
struct buffer* fname_13;
_Bool _while_condtional6;
_Bool _if_conditional13;
_Bool _while_condtional7;
_Bool _while_condtional8;
void* right_value51;
char* __dec_obj12;
_Bool _if_conditional14;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool _while_condtional11;
_Bool _while_condtional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&line_12, 0, sizeof(int));
right_value49 = (void*)0;
right_value50 = (void*)0;
memset(&fname_13, 0, sizeof(struct buffer*));
right_value51 = (void*)0;
    # 35 "05function4.c"
    while(_while_condtional2=strmemcmp(info->p,"__attribute__"),    _while_condtional2) {
        # 31 "05function4.c"
        info->p+=strlen("__attribute__");
        # 32 "05function4.c"
        skip_spaces_and_lf(info);
        # 33 "05function4.c"
        skip_paren(info);
    }
    # 39 "05function4.c"
    while(_while_condtional3=strmemcmp(info->p,"__extension__"),    _while_condtional3) {
        # 36 "05function4.c"
        info->p+=strlen("__extension__");
        # 37 "05function4.c"
        skip_spaces_and_lf(info);
    }
    # 114 "05function4.c"
    while(_while_condtional4=*info->p==35,    _while_condtional4) {
        # 53 "05function4.c"
        skip_spaces_and_lf(info);
        # 55 "05function4.c"
        info->p++;
        # 56 "05function4.c"
        skip_spaces_and_lf(info);
        # 111 "05function4.c"
        # 58 "05function4.c"
        if(_if_conditional10=strmemcmp(info->p,"pragma"),        _if_conditional10) {
            # 68 "05function4.c"
            while(_while_condtional5=*info->p,            _while_condtional5) {
                # 67 "05function4.c"
                # 60 "05function4.c"
                if(_if_conditional11=*info->p==10,                _if_conditional11) {
                    # 61 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 62 "05function4.c"
                    break;
                }
                else {
                    # 65 "05function4.c"
                    info->p++;
                }
            }
        }
        else {
            # 111 "05function4.c"
            # 69 "05function4.c"
            if(_if_conditional12=xisdigit(*info->p),            _if_conditional12) {
                # 70 "05function4.c"
                line_12=0;
                # 71 "05function4.c"
                fname_13=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value50=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value49=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 71, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 77 "05function4.c"
                while(_while_condtional6=xisdigit(*info->p),                _while_condtional6) {
                    # 74 "05function4.c"
                    line_12=line_12*10+(*info->p-48);
                    # 75 "05function4.c"
                    info->p++;
                }
                # 77 "05function4.c"
                skip_spaces_and_lf(info);
                # 93 "05function4.c"
                # 79 "05function4.c"
                if(_if_conditional13=*info->p==34,                _if_conditional13) {
                    # 80 "05function4.c"
                    info->p++;
                    # 87 "05function4.c"
                    while(_while_condtional7=*info->p!=34,                    _while_condtional7) {
                        # 83 "05function4.c"
                        buffer_append_char(fname_13,*info->p);
                        # 84 "05function4.c"
                        info->p++;
                    }
                    # 90 "05function4.c"
                    while(_while_condtional8=*info->p!=10,                    _while_condtional8) {
                        # 88 "05function4.c"
                        info->p++;
                    }
                    # 90 "05function4.c"
                    info->p++;
                }
                # 93 "05function4.c"
                info->sline=line_12;
                # 94 "05function4.c"
                __dec_obj12=info->sname;
                info->sname=(char*)come_increment_ref_count(((char*)(right_value51=buffer_to_string(fname_13))));
                __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 96 "05function4.c"
                skip_spaces_and_lf(info);
                come_call_finalizer2(buffer_finalize,fname_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 111 "05function4.c"
                # 98 "05function4.c"
                if(_if_conditional14=*info->p==34,                _if_conditional14) {
                    # 99 "05function4.c"
                    info->p++;
                    # 105 "05function4.c"
                    while(_while_condtional9=*info->p!=34,                    _while_condtional9) {
                        # 102 "05function4.c"
                        info->p++;
                    }
                    # 108 "05function4.c"
                    while(_while_condtional10=*info->p!=10,                    _while_condtional10) {
                        # 106 "05function4.c"
                        info->p++;
                    }
                    # 108 "05function4.c"
                    info->p++;
                }
            }
        }
        # 111 "05function4.c"
        skip_spaces_and_lf(info);
    }
    # 119 "05function4.c"
    while(_while_condtional11=strmemcmp(info->p,"__attribute__"),    _while_condtional11) {
        # 115 "05function4.c"
        info->p+=strlen("__attribute__");
        # 116 "05function4.c"
        skip_spaces_and_lf(info);
        # 117 "05function4.c"
        skip_paren(info);
    }
    # 123 "05function4.c"
    while(_while_condtional12=strmemcmp(info->p,"__extension__"),    _while_condtional12) {
        # 120 "05function4.c"
        info->p+=strlen("__extension__");
        # 121 "05function4.c"
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
char c_14;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_14, 0, sizeof(char));
    # 139 "05function4.c"
    c_14=*(info->p+strlen(str));
    # 140 "05function4.c"
    __result34__ = strmemcmp(info->p,str)&&(c_14==59||c_14==32||c_14==9||c_14==10||c_14==10);
    return __result34__;
}

char* parse_word(struct sInfo* info){
void* __result_obj__;
void* right_value52;
void* right_value53;
struct buffer* buf_15;
_Bool _while_condtional13;
void* right_value54;
_Bool _if_conditional15;
void* right_value55;
char* __result35__;
void* right_value56;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
right_value53 = (void*)0;
memset(&buf_15, 0, sizeof(struct buffer*));
right_value54 = (void*)0;
right_value55 = (void*)0;
right_value56 = (void*)0;
    # 145 "05function4.c"
    buf_15=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value53=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value52=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 146 "05function4.c"
    parse_sharp_v5(info);
    # 153 "05function4.c"
    while(_while_condtional13=(*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36),    _while_condtional13) {
        # 150 "05function4.c"
        buffer_append_char(buf_15,*info->p);
        # 151 "05function4.c"
        info->p++;
    }
    # 153 "05function4.c"
    skip_spaces_and_lf(info);
    # 160 "05function4.c"
    # 155 "05function4.c"
    if(_if_conditional15=string_length(((char*)(right_value54=buffer_to_string(buf_15))))==0,    right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _if_conditional15) {
        # 156 "05function4.c"
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        # 157 "05function4.c"
        __result35__ = __result_obj__ = ((char*)(right_value55=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result35__;
    }
    # 160 "05function4.c"
    __result36__ = __result_obj__ = ((char*)(right_value56=buffer_to_string(buf_15)));
    come_call_finalizer2(buffer_finalize,buf_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
    come_call_finalizer2(buffer_finalize,buf_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional14;
_Bool _if_conditional16;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
    # 177 "05function4.c"
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        # 176 "05function4.c"
        # 166 "05function4.c"
        if(_if_conditional16=*info->p==32||*info->p==9,        _if_conditional16) {
            # 167 "05function4.c"
            info->p++;
        }
        else {
            # 176 "05function4.c"
            # 169 "05function4.c"
            if(_if_conditional17=*info->p==10,            _if_conditional17) {
                # 170 "05function4.c"
                info->p++;
                # 171 "05function4.c"
                info->sline++;
            }
            else {
                # 174 "05function4.c"
                break;
            }
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct list$1sTypeph* o2_saved_16;
struct sType* it_19;
_Bool _if_conditional22;
_Bool __result44__;
struct list$1sTypeph* o2_saved_28;
struct sType* it_29;
_Bool _if_conditional40;
_Bool __result45__;
_Bool _if_conditional41;
_Bool __result46__;
_Bool _if_conditional42;
_Bool __result47__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_16, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct sType*));
memset(&o2_saved_28, 0, sizeof(struct list$1sTypeph*));
memset(&it_29, 0, sizeof(struct sType*));
    # 186 "05function4.c"
    for(    o2_saved_16=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_19=list$1sTypeph_begin((o2_saved_16));    !list$1sTypeph_end((o2_saved_16));    it_19=list$1sTypeph_next((o2_saved_16))    ){
        # 185 "05function4.c"
        # 182 "05function4.c"
        if(_if_conditional22=is_contained_generics_class(it_19,info),        _if_conditional22) {
            # 183 "05function4.c"
            __result44__ = (_Bool)1;
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result44__;
        }
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 192 "05function4.c"
    for(    o2_saved_28=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_29=list$1sTypeph_begin((o2_saved_28));    !list$1sTypeph_end((o2_saved_28));    it_29=list$1sTypeph_next((o2_saved_28))    ){
        # 190 "05function4.c"
        # 187 "05function4.c"
        if(_if_conditional40=is_contained_generics_class(it_29,info),        _if_conditional40) {
            # 188 "05function4.c"
            __result45__ = (_Bool)1;
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result45__;
        }
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 195 "05function4.c"
    # 192 "05function4.c"
    if(type->mClass->mGenerics) {
        # 193 "05function4.c"
        __result46__ = (_Bool)1;
        return __result46__;
    }
    # 199 "05function4.c"
    # 195 "05function4.c"
    if(type->mClass->mMethodGenerics) {
        # 196 "05function4.c"
        __result47__ = (_Bool)1;
        return __result47__;
    }
    # 199 "05function4.c"
    __result48__ = (_Bool)0;
    return __result48__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional18;
struct sType* result_17;
struct sType* __result37__;
_Bool _if_conditional19;
struct sType* __result38__;
struct sType* result_18;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct sType*));
memset(&result_18, 0, sizeof(struct sType*));
        # 290 "./comelang2.h"
        # 285 "./comelang2.h"
        if(_if_conditional18=self==((void*)0),        _if_conditional18) {
            # 286 "./comelang2.h"
            # 287 "./comelang2.h"
            memset(&result_17,0,sizeof(struct sType*));
            # 288 "./comelang2.h"
            __result37__ = __result_obj__ = result_17;
            return __result37__;
        }
        # 290 "./comelang2.h"
        self->it=self->head;
        # 296 "./comelang2.h"
        # 292 "./comelang2.h"
        if(self->it) {
            # 293 "./comelang2.h"
            __result38__ = __result_obj__ = self->it->item;
            return __result38__;
        }
        # 296 "./comelang2.h"
        # 297 "./comelang2.h"
        memset(&result_18,0,sizeof(struct sType*));
        # 298 "./comelang2.h"
        __result39__ = __result_obj__ = result_18;
        return __result39__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./comelang2.h"
        __result40__ = self==((void*)0)||self->it==((void*)0);
        return __result40__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional20;
struct sType* result_20;
struct sType* __result41__;
_Bool _if_conditional21;
struct sType* __result42__;
struct sType* result_21;
struct sType* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct sType*));
memset(&result_21, 0, sizeof(struct sType*));
        # 308 "./comelang2.h"
        # 302 "./comelang2.h"
        if(_if_conditional20=self==((void*)0)||self->it==((void*)0),        _if_conditional20) {
            # 303 "./comelang2.h"
            # 304 "./comelang2.h"
            memset(&result_20,0,sizeof(struct sType*));
            # 305 "./comelang2.h"
            __result41__ = __result_obj__ = result_20;
            return __result41__;
        }
        # 308 "./comelang2.h"
        self->it=self->it->next;
        # 314 "./comelang2.h"
        # 310 "./comelang2.h"
        if(self->it) {
            # 311 "./comelang2.h"
            __result42__ = __result_obj__ = self->it->item;
            return __result42__;
        }
        # 314 "./comelang2.h"
        # 315 "./comelang2.h"
        memset(&result_21,0,sizeof(struct sType*));
        # 316 "./comelang2.h"
        __result43__ = __result_obj__ = result_21;
        return __result43__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_22;
_Bool _while_condtional15;
struct list_item$1sTypeph* prev_it_23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_22, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_23, 0, sizeof(struct list_item$1sTypeph*));
                # 123 "./comelang2.h"
                it_22=self->head;
                # 129 "./comelang2.h"
                while(_while_condtional15=it_22!=((void*)0),                _while_condtional15) {
                    # 125 "./comelang2.h"
                    prev_it_23=it_22;
                    # 126 "./comelang2.h"
                    it_22=it_22->next;
                    # 127 "./comelang2.h"
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sTypephp_finalize"
                        # 0 "list_item$1sTypephp_finalize"
                        if(_if_conditional23=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional23) {
                            # 0 "list_item$1sTypephp_finalize"
                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sType_finalize"
                                # 0 "sType_finalize"
                                if(_if_conditional24=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                _if_conditional24) {
                                    # 0 "sType_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sType_finalize"
                                # 1 "sType_finalize"
                                if(_if_conditional25=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional25) {
                                    # 1 "sType_finalize"
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sType_finalize"
                                # 2 "sType_finalize"
                                if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional27) {
                                    # 2 "sType_finalize"
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sType_finalize"
                                # 3 "sType_finalize"
                                if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional28) {
                                    # 3 "sType_finalize"
                                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sType_finalize"
                                # 4 "sType_finalize"
                                if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional29) {
                                    # 4 "sType_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sType_finalize"
                                # 5 "sType_finalize"
                                if(_if_conditional30=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional30) {
                                    # 5 "sType_finalize"
                                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sType_finalize"
                                # 6 "sType_finalize"
                                if(_if_conditional32=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional32) {
                                    # 6 "sType_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sType_finalize"
                                # 7 "sType_finalize"
                                if(_if_conditional33=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional33) {
                                    # 7 "sType_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sType_finalize"
                                # 8 "sType_finalize"
                                if(_if_conditional35=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional35) {
                                    # 8 "sType_finalize"
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sType_finalize"
                                # 9 "sType_finalize"
                                if(_if_conditional36=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional36) {
                                    # 9 "sType_finalize"
                                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 11 "sType_finalize"
                                # 10 "sType_finalize"
                                if(_if_conditional37=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional37) {
                                    # 10 "sType_finalize"
                                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 12 "sType_finalize"
                                # 11 "sType_finalize"
                                if(_if_conditional38=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional38) {
                                    # 11 "sType_finalize"
                                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sType_finalize"
                                # 12 "sType_finalize"
                                if(_if_conditional39=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional39) {
                                    # 12 "sType_finalize"
                                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple1$1sTypephp_finalize"
                                        # 0 "tuple1$1sTypephp_finalize"
                                        if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional26) {
                                            # 0 "tuple1$1sTypephp_finalize"
                                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_24;
_Bool _while_condtional16;
struct list_item$1sNodeph* prev_it_25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_24, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_25, 0, sizeof(struct list_item$1sNodeph*));
                                        # 123 "./comelang2.h"
                                        it_24=self->head;
                                        # 129 "./comelang2.h"
                                        while(_while_condtional16=it_24!=((void*)0),                                        _while_condtional16) {
                                            # 125 "./comelang2.h"
                                            prev_it_25=it_24;
                                            # 126 "./comelang2.h"
                                            it_24=it_24->next;
                                            # 127 "./comelang2.h"
                                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1sNodephp_finalize"
                                                # 0 "list_item$1sNodephp_finalize"
                                                if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional31) {
                                                    # 0 "list_item$1sNodephp_finalize"
                                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_26;
_Bool _while_condtional17;
struct list_item$1charph* prev_it_27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_26, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_27, 0, sizeof(struct list_item$1charph*));
                                        # 123 "./comelang2.h"
                                        it_26=self->head;
                                        # 129 "./comelang2.h"
                                        while(_while_condtional17=it_26!=((void*)0),                                        _while_condtional17) {
                                            # 125 "./comelang2.h"
                                            prev_it_27=it_26;
                                            # 126 "./comelang2.h"
                                            it_26=it_26->next;
                                            # 127 "./comelang2.h"
                                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1charphp_finalize"
                                                # 0 "list_item$1charphp_finalize"
                                                if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional34) {
                                                    # 0 "list_item$1charphp_finalize"
                                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info){
void* __result_obj__;
void* right_value57;
void* right_value58;
struct list$1sTypeph* param_types_30;
void* right_value59;
void* right_value60;
struct list$1charph* param_names_31;
void* right_value61;
void* right_value62;
struct list$1charph* param_default_parametors_32;
_Bool var_args_33;
_Bool void_param_34;
char* p_35;
int sline_36;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _while_condtional18;
_Bool _if_conditional48;
void* right_value63;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_37;
char* param_name_38;
_Bool err_39;
_Bool _if_conditional51;
void* right_value64;
void* right_value65;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result52__;
void* right_value66;
struct sType* param_type2_40;
void* right_value105;
void* right_value109;
_Bool _if_conditional129;
char* p_65;
_Bool no_comma_66;
void* right_value110;
struct sNode* node_67;
char* p2_68;
void* right_value111;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
void* right_value112;
void* right_value113;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
right_value58 = (void*)0;
memset(&param_types_30, 0, sizeof(struct list$1sTypeph*));
right_value59 = (void*)0;
right_value60 = (void*)0;
memset(&param_names_31, 0, sizeof(struct list$1charph*));
right_value61 = (void*)0;
right_value62 = (void*)0;
memset(&param_default_parametors_32, 0, sizeof(struct list$1charph*));
memset(&var_args_33, 0, sizeof(_Bool));
memset(&void_param_34, 0, sizeof(_Bool));
memset(&p_35, 0, sizeof(char*));
memset(&sline_36, 0, sizeof(int));
right_value63 = (void*)0;
memset(&param_type_37, 0, sizeof(struct sType*));
memset(&param_name_38, 0, sizeof(char*));
memset(&err_39, 0, sizeof(_Bool));
memset(&param_type_37, 0, sizeof(struct sType*));
memset(&param_name_38, 0, sizeof(char*));
memset(&err_39, 0, sizeof(_Bool));
right_value64 = (void*)0;
right_value65 = (void*)0;
right_value66 = (void*)0;
memset(&param_type2_40, 0, sizeof(struct sType*));
right_value105 = (void*)0;
right_value109 = (void*)0;
memset(&p_65, 0, sizeof(char*));
memset(&no_comma_66, 0, sizeof(_Bool));
right_value110 = (void*)0;
memset(&node_67, 0, sizeof(struct sNode*));
memset(&p2_68, 0, sizeof(char*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
    # 204 "05function4.c"
    param_types_30=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value58=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value57=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 204, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 205 "05function4.c"
    param_names_31=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value60=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value59=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 205, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 206 "05function4.c"
    param_default_parametors_32=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value62=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value61=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 206, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 207 "05function4.c"
    var_args_33=(_Bool)0;
    # 209 "05function4.c"
    expected_next_character(40,info);
    # 212 "05function4.c"
    void_param_34=(_Bool)0;
    # 230 "05function4.c"
    {
        # 214 "05function4.c"
        p_35=info->p;
        # 215 "05function4.c"
        sline_36=info->sline;
        # 226 "05function4.c"
        # 217 "05function4.c"
        if(_if_conditional43=strmemcmp(info->p,"void"),        _if_conditional43) {
            # 218 "05function4.c"
            info->p+=strlen("void");
            # 219 "05function4.c"
            skip_spaces_and_lf(info);
            # 224 "05function4.c"
            # 221 "05function4.c"
            if(_if_conditional44=*info->p==41,            _if_conditional44) {
                # 222 "05function4.c"
                void_param_34=(_Bool)1;
            }
        }
        # 226 "05function4.c"
        info->p=p_35;
        # 227 "05function4.c"
        info->sline=sline_36;
    }
    # 315 "05function4.c"
    # 230 "05function4.c"
    if(void_param_34) {
        # 240 "05function4.c"
        # 231 "05function4.c"
        if(_if_conditional46=strmemcmp(info->p,"void"),        _if_conditional46) {
            # 232 "05function4.c"
            info->p+=strlen("void");
            # 233 "05function4.c"
            skip_spaces_and_lf(info);
            # 239 "05function4.c"
            # 235 "05function4.c"
            if(_if_conditional47=*info->p==41,            _if_conditional47) {
                # 236 "05function4.c"
                info->p++;
                # 237 "05function4.c"
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        # 313 "05function4.c"
        while(_while_condtional18=(_Bool)1,        _while_condtional18) {
            # 249 "05function4.c"
            # 243 "05function4.c"
            if(_if_conditional48=*info->p==41,            _if_conditional48) {
                # 244 "05function4.c"
                info->p++;
                # 245 "05function4.c"
                skip_spaces_and_lf(info);
                # 246 "05function4.c"
                break;
            }
            # 249 "05function4.c"
            parse_sharp_v5(info);
            # 251 "05function4.c"
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value63=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_37=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_38=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_39=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 258 "05function4.c"
            # 253 "05function4.c"
            if(_if_conditional51=!err_39,            _if_conditional51) {
                # 254 "05function4.c"
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                # 255 "05function4.c"
                __result52__ = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value65=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value64=(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05function4.c", 255, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")))),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer2(sType_finalize,param_type_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                param_name_38 = come_decrement_ref_count2(param_name_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result52__;
            }
            # 258 "05function4.c"
            param_type2_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=solve_generics(param_type_37,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 260 "05function4.c"
            param_type2_40->mFunctionParam=(_Bool)1;
            # 262 "05function4.c"
            list$1sTypeph_push_back(param_types_30,(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_clone(param_type2_40)))));
            come_call_finalizer2(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 263 "05function4.c"
            list$1charph_push_back(param_names_31,(char*)come_increment_ref_count(((char*)(right_value109=string_clone(param_name_38)))));
            right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 292 "05function4.c"
            # 265 "05function4.c"
            if(_if_conditional129=*info->p==61,            _if_conditional129) {
                # 266 "05function4.c"
                info->p++;
                # 267 "05function4.c"
                skip_spaces_and_lf(info);
                # 269 "05function4.c"
                parse_sharp_v5(info);
                # 271 "05function4.c"
                p_65=info->p;
                # 273 "05function4.c"
                no_comma_66=info->no_comma;
                # 274 "05function4.c"
                info->no_comma=(_Bool)1;
                # 276 "05function4.c"
                node_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=expression_v13(info))));
                if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 278 "05function4.c"
                info->no_comma=no_comma_66;
                # 280 "05function4.c"
                p2_68=info->p;
                # 282 "05function4.c"
                char buf_69[p2_68-p_65+1];
                memset(&buf_69, 0, sizeof(char)                *(p2_68-p_65+1)                );
                # 283 "05function4.c"
                memcpy(buf_69,p_65,p2_68-p_65);
                # 284 "05function4.c"
                buf_69[p2_68-p_65]=0;
                # 286 "05function4.c"
                list$1charph_push_back(param_default_parametors_32,(char*)come_increment_ref_count(((char*)(right_value111=__builtin_string(buf_69)))));
                right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(node_67) { node_67 = come_decrement_ref_count2(node_67, ((struct sNode*)node_67)->finalize, ((struct sNode*)node_67)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 289 "05function4.c"
                list$1charph_push_back(param_default_parametors_32,((void*)0));
            }
            # 292 "05function4.c"
            parse_sharp_v5(info);
            # 312 "05function4.c"
            # 294 "05function4.c"
            if(_if_conditional130=*info->p==44,            _if_conditional130) {
                # 295 "05function4.c"
                info->p++;
                # 296 "05function4.c"
                skip_spaces_and_lf(info);
                # 306 "05function4.c"
                # 298 "05function4.c"
                if(_if_conditional131=strmemcmp(info->p,"..."),                _if_conditional131) {
                    # 299 "05function4.c"
                    info->p+=strlen("...");
                    # 300 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 301 "05function4.c"
                    var_args_33=(_Bool)1;
                    # 303 "05function4.c"
                    expected_next_character(41,info);
                    # 304 "05function4.c"
                    come_call_finalizer2(sType_finalize,param_type_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    param_name_38 = come_decrement_ref_count2(param_name_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,param_type2_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                # 312 "05function4.c"
                # 307 "05function4.c"
                if(_if_conditional132=*info->p==41,                _if_conditional132) {
                    # 308 "05function4.c"
                    info->p++;
                    # 309 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 310 "05function4.c"
                    come_call_finalizer2(sType_finalize,param_type_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    param_name_38 = come_decrement_ref_count2(param_name_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,param_type2_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            come_call_finalizer2(sType_finalize,param_type_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            param_name_38 = come_decrement_ref_count2(param_name_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,param_type2_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 315 "05function4.c"
    __result72__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value113=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value112=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 315, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_30),(struct list$1charph*)come_increment_ref_count(param_names_31),(struct list$1charph*)come_increment_ref_count(param_default_parametors_32),var_args_33)));
    come_call_finalizer2(list$1sTypephp_finalize,param_types_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result72__;
    come_call_finalizer2(list$1sTypephp_finalize,param_types_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "./comelang2.h"
        self->head=((void*)0);
        # 105 "./comelang2.h"
        self->tail=((void*)0);
        # 106 "./comelang2.h"
        self->len=0;
        # 108 "./comelang2.h"
        __result49__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result49__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "./comelang2.h"
        self->head=((void*)0);
        # 105 "./comelang2.h"
        self->tail=((void*)0);
        # 106 "./comelang2.h"
        self->len=0;
        # 108 "./comelang2.h"
        __result50__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result50__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional49;
_Bool _if_conditional50;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional49=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional49) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional50=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional50) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1843 "./comelang2.h"
                    self->v1=v1;
                    # 1844 "./comelang2.h"
                    self->v2=v2;
                    # 1845 "./comelang2.h"
                    self->v3=v3;
                    # 1846 "./comelang2.h"
                    self->v4=v4;
                    # 1848 "./comelang2.h"
                    __result51__ = __result_obj__ = self;
                    come_call_finalizer2(tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result51__;
                    come_call_finalizer2(tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional52;
void* right_value67;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj13;
_Bool _if_conditional53;
void* right_value68;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj14;
void* right_value69;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj15;
struct list$1sTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
right_value68 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
right_value69 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional52=self->len==0,                _if_conditional52) {
                    # 226 "./comelang2.h"
                    litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value67=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_41->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_41->next=((void*)0);
                    # 230 "./comelang2.h"
                    __dec_obj13=litem_41->item;
                    litem_41->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./comelang2.h"
                    self->tail=litem_41;
                    # 233 "./comelang2.h"
                    self->head=litem_41;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional53=self->len==1,                    _if_conditional53) {
                        # 236 "./comelang2.h"
                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value68=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_42->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_42->next=((void*)0);
                        # 240 "./comelang2.h"
                        __dec_obj14=litem_42->item;
                        litem_42->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./comelang2.h"
                        self->tail=litem_42;
                        # 243 "./comelang2.h"
                        self->head->next=litem_42;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value69=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_43->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_43->next=((void*)0);
                        # 250 "./comelang2.h"
                        __dec_obj15=litem_43->item;
                        litem_43->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./comelang2.h"
                        self->tail->next=litem_43;
                        # 253 "./comelang2.h"
                        self->tail=litem_43;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result53__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result53__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional54;
struct sType* __result54__;
void* right_value70;
struct sType* result_44;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value77;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional60;
void* right_value80;
struct tuple1$1sTypeph* __dec_obj21;
_Bool _if_conditional64;
void* right_value81;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional65;
void* right_value82;
char* __dec_obj23;
_Bool _if_conditional66;
void* right_value83;
struct list$1sTypeph* __dec_obj24;
_Bool _if_conditional67;
void* right_value91;
struct list$1sNodeph* __dec_obj28;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value92;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional82;
void* right_value99;
struct list$1charph* __dec_obj33;
_Bool _if_conditional86;
void* right_value100;
struct tuple1$1sTypeph* __dec_obj34;
_Bool _if_conditional87;
_Bool _if_conditional88;
void* right_value101;
struct sNode* __dec_obj35;
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
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value102;
struct sNode* __dec_obj36;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
void* right_value103;
char* __dec_obj37;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value104;
char* __dec_obj38;
_Bool _if_conditional126;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
memset(&result_44, 0, sizeof(struct sType*));
right_value77 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
                # 3 "sType_clone"
                # 2 "sType_clone"
                if(_if_conditional54=self==(void*)0,                _if_conditional54) {
                    # 2 "sType_clone"
                    __result54__ = __result_obj__ = (void*)0;
                    return __result54__;
                }
                # 3 "sType_clone"
                result_44=(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer2(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional55=self!=((void*)0),                _if_conditional55) {
                    # 4 "sType_clone"
                    result_44->mClass=self->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional56=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional56) {
                    # 5 "sType_clone"
                    __dec_obj19=result_44->mMultipleTypes;
                    result_44->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value77=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional60=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional60) {
                    # 6 "sType_clone"
                    __dec_obj21=result_44->mNoSolvedGenericsType;
                    result_44->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value80=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 8 "sType_clone"
                # 7 "sType_clone"
                if(_if_conditional64=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional64) {
                    # 7 "sType_clone"
                    __dec_obj22=result_44->mOriginalLoadVarType;
                    result_44->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value81=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 9 "sType_clone"
                # 8 "sType_clone"
                if(_if_conditional65=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional65) {
                    # 8 "sType_clone"
                    __dec_obj23=result_44->mGenericsName;
                    result_44->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value82=string_clone(self->mGenericsName))));
                    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sType_clone"
                # 9 "sType_clone"
                if(_if_conditional66=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional66) {
                    # 9 "sType_clone"
                    __dec_obj24=result_44->mGenericsTypes;
                    result_44->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 11 "sType_clone"
                # 10 "sType_clone"
                if(_if_conditional67=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional67) {
                    # 10 "sType_clone"
                    __dec_obj28=result_44->mArrayNum;
                    result_44->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value91=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 12 "sType_clone"
                # 11 "sType_clone"
                if(_if_conditional80=self!=((void*)0),                _if_conditional80) {
                    # 11 "sType_clone"
                    result_44->mOmitArrayNum=self->mOmitArrayNum;
                }
                # 13 "sType_clone"
                # 12 "sType_clone"
                if(_if_conditional81=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional81) {
                    # 12 "sType_clone"
                    __dec_obj29=result_44->mParamTypes;
                    result_44->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 14 "sType_clone"
                # 13 "sType_clone"
                if(_if_conditional82=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional82) {
                    # 13 "sType_clone"
                    __dec_obj33=result_44->mParamNames;
                    result_44->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value99=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 15 "sType_clone"
                # 14 "sType_clone"
                if(_if_conditional86=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional86) {
                    # 14 "sType_clone"
                    __dec_obj34=result_44->mResultType;
                    result_44->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value100=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 16 "sType_clone"
                # 15 "sType_clone"
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    # 15 "sType_clone"
                    result_44->mVarArgs=self->mVarArgs;
                }
                # 17 "sType_clone"
                # 16 "sType_clone"
                if(_if_conditional88=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional88) {
                    # 16 "sType_clone"
                    __dec_obj35=result_44->mAlignas;
                    result_44->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=sNode_clone(self->mAlignas))));
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 18 "sType_clone"
                # 17 "sType_clone"
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    # 17 "sType_clone"
                    result_44->mUnsigned=self->mUnsigned;
                }
                # 19 "sType_clone"
                # 18 "sType_clone"
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    # 18 "sType_clone"
                    result_44->mShort=self->mShort;
                }
                # 20 "sType_clone"
                # 19 "sType_clone"
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    # 19 "sType_clone"
                    result_44->mLong=self->mLong;
                }
                # 21 "sType_clone"
                # 20 "sType_clone"
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    # 20 "sType_clone"
                    result_44->mLongLong=self->mLongLong;
                }
                # 22 "sType_clone"
                # 21 "sType_clone"
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    # 21 "sType_clone"
                    result_44->mConstant=self->mConstant;
                }
                # 23 "sType_clone"
                # 22 "sType_clone"
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    # 22 "sType_clone"
                    result_44->mRegister=self->mRegister;
                }
                # 24 "sType_clone"
                # 23 "sType_clone"
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    # 23 "sType_clone"
                    result_44->mVolatile=self->mVolatile;
                }
                # 25 "sType_clone"
                # 24 "sType_clone"
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    # 24 "sType_clone"
                    result_44->mStatic=self->mStatic;
                }
                # 26 "sType_clone"
                # 25 "sType_clone"
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    # 25 "sType_clone"
                    result_44->mExtern=self->mExtern;
                }
                # 27 "sType_clone"
                # 26 "sType_clone"
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    # 26 "sType_clone"
                    result_44->mRestrict=self->mRestrict;
                }
                # 28 "sType_clone"
                # 27 "sType_clone"
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    # 27 "sType_clone"
                    result_44->mImmutable=self->mImmutable;
                }
                # 29 "sType_clone"
                # 28 "sType_clone"
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    # 28 "sType_clone"
                    result_44->mHeap=self->mHeap;
                }
                # 30 "sType_clone"
                # 29 "sType_clone"
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    # 29 "sType_clone"
                    result_44->mDummyHeap=self->mDummyHeap;
                }
                # 31 "sType_clone"
                # 30 "sType_clone"
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    # 30 "sType_clone"
                    result_44->mDelegate=self->mDelegate;
                }
                # 32 "sType_clone"
                # 31 "sType_clone"
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    # 31 "sType_clone"
                    result_44->mShare=self->mShare;
                }
                # 33 "sType_clone"
                # 32 "sType_clone"
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    # 32 "sType_clone"
                    result_44->mClone=self->mClone;
                }
                # 34 "sType_clone"
                # 33 "sType_clone"
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    # 33 "sType_clone"
                    result_44->mNoHeap=self->mNoHeap;
                }
                # 35 "sType_clone"
                # 34 "sType_clone"
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    # 34 "sType_clone"
                    result_44->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                # 36 "sType_clone"
                # 35 "sType_clone"
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    # 35 "sType_clone"
                    result_44->mRefference=self->mRefference;
                }
                # 37 "sType_clone"
                # 36 "sType_clone"
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    # 36 "sType_clone"
                    result_44->mException=self->mException;
                }
                # 38 "sType_clone"
                # 37 "sType_clone"
                if(_if_conditional109=self!=((void*)0),                _if_conditional109) {
                    # 37 "sType_clone"
                    result_44->mPointerNum=self->mPointerNum;
                }
                # 39 "sType_clone"
                # 38 "sType_clone"
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    # 38 "sType_clone"
                    result_44->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                # 40 "sType_clone"
                # 39 "sType_clone"
                if(_if_conditional111=self!=((void*)0),                _if_conditional111) {
                    # 39 "sType_clone"
                    result_44->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                # 41 "sType_clone"
                # 40 "sType_clone"
                if(_if_conditional112=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional112) {
                    # 40 "sType_clone"
                    __dec_obj36=result_44->mSizeNum;
                    result_44->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=sNode_clone(self->mSizeNum))));
                    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 42 "sType_clone"
                # 41 "sType_clone"
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    # 41 "sType_clone"
                    result_44->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                # 43 "sType_clone"
                # 42 "sType_clone"
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    # 42 "sType_clone"
                    result_44->mTypeOfExpression=self->mTypeOfExpression;
                }
                # 44 "sType_clone"
                # 43 "sType_clone"
                if(_if_conditional115=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional115) {
                    # 43 "sType_clone"
                    __dec_obj37=result_44->mOriginalTypeName;
                    result_44->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value103=string_clone(self->mOriginalTypeName))));
                    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 45 "sType_clone"
                # 44 "sType_clone"
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    # 44 "sType_clone"
                    result_44->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                # 46 "sType_clone"
                # 45 "sType_clone"
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    # 45 "sType_clone"
                    result_44->mFunctionParam=self->mFunctionParam;
                }
                # 47 "sType_clone"
                # 46 "sType_clone"
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    # 46 "sType_clone"
                    result_44->mAllocaValue=self->mAllocaValue;
                }
                # 48 "sType_clone"
                # 47 "sType_clone"
                if(_if_conditional119=self!=((void*)0),                _if_conditional119) {
                    # 47 "sType_clone"
                    result_44->mGenericsStruct=self->mGenericsStruct;
                }
                # 49 "sType_clone"
                # 48 "sType_clone"
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    # 48 "sType_clone"
                    result_44->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                # 50 "sType_clone"
                # 49 "sType_clone"
                if(_if_conditional121=self!=((void*)0),                _if_conditional121) {
                    # 49 "sType_clone"
                    result_44->mComeMemCore=self->mComeMemCore;
                }
                # 51 "sType_clone"
                # 50 "sType_clone"
                if(_if_conditional122=self!=((void*)0),                _if_conditional122) {
                    # 50 "sType_clone"
                    result_44->mInline=self->mInline;
                }
                # 52 "sType_clone"
                # 51 "sType_clone"
                if(_if_conditional123=self!=((void*)0),                _if_conditional123) {
                    # 51 "sType_clone"
                    result_44->mNullValue=self->mNullValue;
                }
                # 53 "sType_clone"
                # 52 "sType_clone"
                if(_if_conditional124=self!=((void*)0),                _if_conditional124) {
                    # 52 "sType_clone"
                    result_44->mGuardValue=self->mGuardValue;
                }
                # 54 "sType_clone"
                # 53 "sType_clone"
                if(_if_conditional125=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional125) {
                    # 53 "sType_clone"
                    __dec_obj38=result_44->mAsmName;
                    result_44->mAsmName=(char*)come_increment_ref_count(((char*)(right_value104=string_clone(self->mAsmName))));
                    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 55 "sType_clone"
                # 54 "sType_clone"
                if(_if_conditional126=self!=((void*)0),                _if_conditional126) {
                    # 54 "sType_clone"
                    result_44->mArrayPointerType=self->mArrayPointerType;
                }
                # 55 "sType_clone"
                __result69__ = __result_obj__ = result_44;
                come_call_finalizer2(sType_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result69__;
                come_call_finalizer2(sType_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional57;
struct list$1sTypeph* __result55__;
void* right_value71;
void* right_value72;
struct list$1sTypeph* result_45;
struct list_item$1sTypeph* it_46;
_Bool _while_condtional19;
void* right_value76;
struct list$1sTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value72 = (void*)0;
memset(&result_45, 0, sizeof(struct list$1sTypeph*));
memset(&it_46, 0, sizeof(struct list_item$1sTypeph*));
right_value76 = (void*)0;
                        # 142 "./comelang2.h"
                        # 139 "./comelang2.h"
                        if(_if_conditional57=self==((void*)0),                        _if_conditional57) {
                            # 140 "./comelang2.h"
                            __result55__ = __result_obj__ = ((void*)0);
                            return __result55__;
                        }
                        # 142 "./comelang2.h"
                        result_45=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value72=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value71=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./comelang2.h"
                        it_46=self->head;
                        # 151 "./comelang2.h"
                        while(_while_condtional19=it_46!=((void*)0),                        _while_condtional19) {
                            # 146 "./comelang2.h"
                            list$1sTypeph_add(result_45,(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=sType_clone(it_46->item)))));
                            come_call_finalizer2(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 148 "./comelang2.h"
                            it_46=it_46->next;
                        }
                        # 151 "./comelang2.h"
                        __result57__ = __result_obj__ = result_45;
                        come_call_finalizer2(list$1sTypephp_finalize,result_45, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result57__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional58;
void* right_value73;
struct list_item$1sTypeph* litem_47;
struct sType* __dec_obj16;
_Bool _if_conditional59;
void* right_value74;
struct list_item$1sTypeph* litem_48;
struct sType* __dec_obj17;
void* right_value75;
struct list_item$1sTypeph* litem_49;
struct sType* __dec_obj18;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
memset(&litem_47, 0, sizeof(struct list_item$1sTypeph*));
right_value74 = (void*)0;
memset(&litem_48, 0, sizeof(struct list_item$1sTypeph*));
right_value75 = (void*)0;
memset(&litem_49, 0, sizeof(struct list_item$1sTypeph*));
                                # 186 "./comelang2.h"
                                # 155 "./comelang2.h"
                                if(_if_conditional58=self->len==0,                                _if_conditional58) {
                                    # 156 "./comelang2.h"
                                    litem_47=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value73=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./comelang2.h"
                                    litem_47->prev=((void*)0);
                                    # 159 "./comelang2.h"
                                    litem_47->next=((void*)0);
                                    # 160 "./comelang2.h"
                                    __dec_obj16=litem_47->item;
                                    litem_47->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 162 "./comelang2.h"
                                    self->tail=litem_47;
                                    # 163 "./comelang2.h"
                                    self->head=litem_47;
                                }
                                else {
                                    # 186 "./comelang2.h"
                                    # 165 "./comelang2.h"
                                    if(_if_conditional59=self->len==1,                                    _if_conditional59) {
                                        # 166 "./comelang2.h"
                                        litem_48=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value74=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./comelang2.h"
                                        litem_48->prev=self->head;
                                        # 169 "./comelang2.h"
                                        litem_48->next=((void*)0);
                                        # 170 "./comelang2.h"
                                        __dec_obj17=litem_48->item;
                                        litem_48->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 172 "./comelang2.h"
                                        self->tail=litem_48;
                                        # 173 "./comelang2.h"
                                        self->head->next=litem_48;
                                    }
                                    else {
                                        # 176 "./comelang2.h"
                                        litem_49=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value75=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./comelang2.h"
                                        litem_49->prev=self->tail;
                                        # 179 "./comelang2.h"
                                        litem_49->next=((void*)0);
                                        # 180 "./comelang2.h"
                                        __dec_obj18=litem_49->item;
                                        litem_49->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 182 "./comelang2.h"
                                        self->tail->next=litem_49;
                                        # 183 "./comelang2.h"
                                        self->tail=litem_49;
                                    }
                                }
                                # 186 "./comelang2.h"
                                self->len++;
                                # 188 "./comelang2.h"
                                __result56__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result56__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional61;
struct tuple1$1sTypeph* __result58__;
void* right_value78;
struct tuple1$1sTypeph* result_50;
_Bool _if_conditional63;
void* right_value79;
struct sType* __dec_obj20;
struct tuple1$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
memset(&result_50, 0, sizeof(struct tuple1$1sTypeph*));
right_value79 = (void*)0;
                        # 3 "tuple1$1sTypephp_clone"
                        # 2 "tuple1$1sTypephp_clone"
                        if(_if_conditional61=self==(void*)0,                        _if_conditional61) {
                            # 2 "tuple1$1sTypephp_clone"
                            __result58__ = __result_obj__ = (void*)0;
                            return __result58__;
                        }
                        # 3 "tuple1$1sTypephp_clone"
                        result_50=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value78=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple1$1sTypephp_clone"
                        # 4 "tuple1$1sTypephp_clone"
                        if(_if_conditional63=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional63) {
                            # 4 "tuple1$1sTypephp_clone"
                            __dec_obj20=result_50->v1;
                            result_50->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 5 "tuple1$1sTypephp_clone"
                        __result59__ = __result_obj__ = result_50;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_50, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result59__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypeph_finalize"
                            # 0 "tuple1$1sTypeph_finalize"
                            if(_if_conditional62=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional62) {
                                # 0 "tuple1$1sTypeph_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional68;
struct list$1sNodeph* __result60__;
void* right_value84;
void* right_value85;
struct list$1sNodeph* result_51;
struct list_item$1sNodeph* it_52;
_Bool _while_condtional20;
void* right_value90;
struct list$1sNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&result_51, 0, sizeof(struct list$1sNodeph*));
memset(&it_52, 0, sizeof(struct list_item$1sNodeph*));
right_value90 = (void*)0;
                        # 142 "./comelang2.h"
                        # 139 "./comelang2.h"
                        if(_if_conditional68=self==((void*)0),                        _if_conditional68) {
                            # 140 "./comelang2.h"
                            __result60__ = __result_obj__ = ((void*)0);
                            return __result60__;
                        }
                        # 142 "./comelang2.h"
                        result_51=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value85=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value84=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./comelang2.h"
                        it_52=self->head;
                        # 151 "./comelang2.h"
                        while(_while_condtional20=it_52!=((void*)0),                        _while_condtional20) {
                            # 146 "./comelang2.h"
                            list$1sNodeph_add(result_51,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value90=sNode_clone(it_52->item)))));
                            if(right_value90) { right_value90 = come_decrement_ref_count2(right_value90, ((struct sNode*)right_value90)->finalize, ((struct sNode*)right_value90)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 148 "./comelang2.h"
                            it_52=it_52->next;
                        }
                        # 151 "./comelang2.h"
                        __result65__ = __result_obj__ = result_51;
                        come_call_finalizer2(list$1sNodephp_finalize,result_51, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result65__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./comelang2.h"
                            self->head=((void*)0);
                            # 105 "./comelang2.h"
                            self->tail=((void*)0);
                            # 106 "./comelang2.h"
                            self->len=0;
                            # 108 "./comelang2.h"
                            __result61__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result61__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional69;
void* right_value86;
struct list_item$1sNodeph* litem_53;
struct sNode* __dec_obj25;
_Bool _if_conditional70;
void* right_value87;
struct list_item$1sNodeph* litem_54;
struct sNode* __dec_obj26;
void* right_value88;
struct list_item$1sNodeph* litem_55;
struct sNode* __dec_obj27;
struct list$1sNodeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1sNodeph*));
right_value87 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1sNodeph*));
right_value88 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1sNodeph*));
                                # 186 "./comelang2.h"
                                # 155 "./comelang2.h"
                                if(_if_conditional69=self->len==0,                                _if_conditional69) {
                                    # 156 "./comelang2.h"
                                    litem_53=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value86=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./comelang2.h"
                                    litem_53->prev=((void*)0);
                                    # 159 "./comelang2.h"
                                    litem_53->next=((void*)0);
                                    # 160 "./comelang2.h"
                                    __dec_obj25=litem_53->item;
                                    litem_53->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 162 "./comelang2.h"
                                    self->tail=litem_53;
                                    # 163 "./comelang2.h"
                                    self->head=litem_53;
                                }
                                else {
                                    # 186 "./comelang2.h"
                                    # 165 "./comelang2.h"
                                    if(_if_conditional70=self->len==1,                                    _if_conditional70) {
                                        # 166 "./comelang2.h"
                                        litem_54=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value87=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./comelang2.h"
                                        litem_54->prev=self->head;
                                        # 169 "./comelang2.h"
                                        litem_54->next=((void*)0);
                                        # 170 "./comelang2.h"
                                        __dec_obj26=litem_54->item;
                                        litem_54->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 172 "./comelang2.h"
                                        self->tail=litem_54;
                                        # 173 "./comelang2.h"
                                        self->head->next=litem_54;
                                    }
                                    else {
                                        # 176 "./comelang2.h"
                                        litem_55=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value88=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./comelang2.h"
                                        litem_55->prev=self->tail;
                                        # 179 "./comelang2.h"
                                        litem_55->next=((void*)0);
                                        # 180 "./comelang2.h"
                                        __dec_obj27=litem_55->item;
                                        litem_55->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 182 "./comelang2.h"
                                        self->tail->next=litem_55;
                                        # 183 "./comelang2.h"
                                        self->tail=litem_55;
                                    }
                                }
                                # 186 "./comelang2.h"
                                self->len++;
                                # 188 "./comelang2.h"
                                __result62__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result62__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional71;
struct sNode* __result63__;
void* right_value89;
struct sNode* result_56;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
struct sNode* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&result_56, 0, sizeof(struct sNode*));
                                # 3 "sNode_clone"
                                # 2 "sNode_clone"
                                if(_if_conditional71=self==(void*)0,                                _if_conditional71) {
                                    # 2 "sNode_clone"
                                    __result63__ = __result_obj__ = (void*)0;
                                    return __result63__;
                                }
                                # 3 "sNode_clone"
                                result_56=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value89=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value89) { right_value89 = come_decrement_ref_count2(right_value89, ((struct sNode*)right_value89)->finalize, ((struct sNode*)right_value89)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 5 "sNode_clone"
                                # 4 "sNode_clone"
                                if(_if_conditional72=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional72) {
                                    # 4 "sNode_clone"
                                    result_56->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                # 6 "sNode_clone"
                                # 5 "sNode_clone"
                                if(_if_conditional73=self!=((void*)0),                                _if_conditional73) {
                                    # 5 "sNode_clone"
                                    result_56->finalize=self->finalize;
                                }
                                # 7 "sNode_clone"
                                # 6 "sNode_clone"
                                if(_if_conditional74=self!=((void*)0),                                _if_conditional74) {
                                    # 6 "sNode_clone"
                                    result_56->clone=self->clone;
                                }
                                # 8 "sNode_clone"
                                # 7 "sNode_clone"
                                if(_if_conditional75=self!=((void*)0),                                _if_conditional75) {
                                    # 7 "sNode_clone"
                                    result_56->compile=self->compile;
                                }
                                # 9 "sNode_clone"
                                # 8 "sNode_clone"
                                if(_if_conditional76=self!=((void*)0),                                _if_conditional76) {
                                    # 8 "sNode_clone"
                                    result_56->sline=self->sline;
                                }
                                # 10 "sNode_clone"
                                # 9 "sNode_clone"
                                if(_if_conditional77=self!=((void*)0),                                _if_conditional77) {
                                    # 9 "sNode_clone"
                                    result_56->sname=self->sname;
                                }
                                # 11 "sNode_clone"
                                # 10 "sNode_clone"
                                if(_if_conditional78=self!=((void*)0),                                _if_conditional78) {
                                    # 10 "sNode_clone"
                                    result_56->terminated=self->terminated;
                                }
                                # 12 "sNode_clone"
                                # 11 "sNode_clone"
                                if(_if_conditional79=self!=((void*)0),                                _if_conditional79) {
                                    # 11 "sNode_clone"
                                    result_56->kind=self->kind;
                                }
                                # 12 "sNode_clone"
                                __result64__ = __result_obj__ = result_56;
                                if(result_56) { result_56 = come_decrement_ref_count2(result_56, ((struct sNode*)result_56)->finalize, ((struct sNode*)result_56)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result64__;
                                if(result_56) { result_56 = come_decrement_ref_count2(result_56, ((struct sNode*)result_56)->finalize, ((struct sNode*)result_56)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional83;
struct list$1charph* __result66__;
void* right_value93;
void* right_value94;
struct list$1charph* result_57;
struct list_item$1charph* it_58;
_Bool _while_condtional21;
void* right_value98;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1charph*));
memset(&it_58, 0, sizeof(struct list_item$1charph*));
right_value98 = (void*)0;
                        # 142 "./comelang2.h"
                        # 139 "./comelang2.h"
                        if(_if_conditional83=self==((void*)0),                        _if_conditional83) {
                            # 140 "./comelang2.h"
                            __result66__ = __result_obj__ = ((void*)0);
                            return __result66__;
                        }
                        # 142 "./comelang2.h"
                        result_57=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value93=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./comelang2.h"
                        it_58=self->head;
                        # 151 "./comelang2.h"
                        while(_while_condtional21=it_58!=((void*)0),                        _while_condtional21) {
                            # 146 "./comelang2.h"
                            list$1charph_add(result_57,(char*)come_increment_ref_count(((char*)(right_value98=string_clone(it_58->item)))));
                            right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 148 "./comelang2.h"
                            it_58=it_58->next;
                        }
                        # 151 "./comelang2.h"
                        __result68__ = __result_obj__ = result_57;
                        come_call_finalizer2(list$1charphp_finalize,result_57, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result68__;
                        come_call_finalizer2(list$1charphp_finalize,result_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional84;
void* right_value95;
struct list_item$1charph* litem_59;
char* __dec_obj30;
_Bool _if_conditional85;
void* right_value96;
struct list_item$1charph* litem_60;
char* __dec_obj31;
void* right_value97;
struct list_item$1charph* litem_61;
char* __dec_obj32;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1charph*));
right_value96 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1charph*));
right_value97 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1charph*));
                                # 186 "./comelang2.h"
                                # 155 "./comelang2.h"
                                if(_if_conditional84=self->len==0,                                _if_conditional84) {
                                    # 156 "./comelang2.h"
                                    litem_59=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value95=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./comelang2.h"
                                    litem_59->prev=((void*)0);
                                    # 159 "./comelang2.h"
                                    litem_59->next=((void*)0);
                                    # 160 "./comelang2.h"
                                    __dec_obj30=litem_59->item;
                                    litem_59->item=(char*)come_increment_ref_count(item);
                                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 162 "./comelang2.h"
                                    self->tail=litem_59;
                                    # 163 "./comelang2.h"
                                    self->head=litem_59;
                                }
                                else {
                                    # 186 "./comelang2.h"
                                    # 165 "./comelang2.h"
                                    if(_if_conditional85=self->len==1,                                    _if_conditional85) {
                                        # 166 "./comelang2.h"
                                        litem_60=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value96=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./comelang2.h"
                                        litem_60->prev=self->head;
                                        # 169 "./comelang2.h"
                                        litem_60->next=((void*)0);
                                        # 170 "./comelang2.h"
                                        __dec_obj31=litem_60->item;
                                        litem_60->item=(char*)come_increment_ref_count(item);
                                        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 172 "./comelang2.h"
                                        self->tail=litem_60;
                                        # 173 "./comelang2.h"
                                        self->head->next=litem_60;
                                    }
                                    else {
                                        # 176 "./comelang2.h"
                                        litem_61=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value97=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./comelang2.h"
                                        litem_61->prev=self->tail;
                                        # 179 "./comelang2.h"
                                        litem_61->next=((void*)0);
                                        # 180 "./comelang2.h"
                                        __dec_obj32=litem_61->item;
                                        litem_61->item=(char*)come_increment_ref_count(item);
                                        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 182 "./comelang2.h"
                                        self->tail->next=litem_61;
                                        # 183 "./comelang2.h"
                                        self->tail=litem_61;
                                    }
                                }
                                # 186 "./comelang2.h"
                                self->len++;
                                # 188 "./comelang2.h"
                                __result67__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result67__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional127;
void* right_value106;
struct list_item$1charph* litem_62;
char* __dec_obj39;
_Bool _if_conditional128;
void* right_value107;
struct list_item$1charph* litem_63;
char* __dec_obj40;
void* right_value108;
struct list_item$1charph* litem_64;
char* __dec_obj41;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1charph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional127=self->len==0,                _if_conditional127) {
                    # 226 "./comelang2.h"
                    litem_62=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_62->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_62->next=((void*)0);
                    # 230 "./comelang2.h"
                    __dec_obj39=litem_62->item;
                    litem_62->item=(char*)come_increment_ref_count(item);
                    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 232 "./comelang2.h"
                    self->tail=litem_62;
                    # 233 "./comelang2.h"
                    self->head=litem_62;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional128=self->len==1,                    _if_conditional128) {
                        # 236 "./comelang2.h"
                        litem_63=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_63->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_63->next=((void*)0);
                        # 240 "./comelang2.h"
                        __dec_obj40=litem_63->item;
                        litem_63->item=(char*)come_increment_ref_count(item);
                        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 242 "./comelang2.h"
                        self->tail=litem_63;
                        # 243 "./comelang2.h"
                        self->head->next=litem_63;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_64=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_64->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_64->next=((void*)0);
                        # 250 "./comelang2.h"
                        __dec_obj41=litem_64->item;
                        litem_64->item=(char*)come_increment_ref_count(item);
                        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 252 "./comelang2.h"
                        self->tail->next=litem_64;
                        # 253 "./comelang2.h"
                        self->tail=litem_64;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result70__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result70__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct list$1sTypeph* __dec_obj42;
struct list$1charph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1843 "./comelang2.h"
        __dec_obj42=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1844 "./comelang2.h"
        __dec_obj43=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(v2);
        come_call_finalizer2(list$1charph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1845 "./comelang2.h"
        __dec_obj44=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(v3);
        come_call_finalizer2(list$1charph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1846 "./comelang2.h"
        self->v4=v4;
        # 1848 "./comelang2.h"
        __result71__ = __result_obj__ = self;
        come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result71__;
        come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional133=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional133) {
                # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional134=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional134) {
                # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional135=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional135) {
                # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info){
void* __result_obj__;
void* right_value114;
struct sType* right_type2_70;
_Bool _if_conditional137;
void* right_value115;
struct sType* left_type2_71;
_Bool found_match_type_72;
struct list$1sTypeph* o2_saved_73;
struct sType* it_74;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value116;
char* tmp_75;
void* right_value117;
char* __dec_obj45;
void* right_value118;
void* right_value119;
struct sType* __dec_obj46;
_Bool __result77__;
struct sType* left_no_solved_generics_type_79;
struct sType* right_no_solved_generics_type_80;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool __result78__;
int i_81;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool __result79__;
_Bool _if_conditional156;
_Bool __result80__;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool __result81__;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool __result82__;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool __result83__;
void* right_value120;
void* right_value121;
struct buffer* buf2_82;
void* right_value122;
void* right_value123;
void* right_value124;
void* right_value125;
void* right_value126;
void* right_value127;
char* __dec_obj47;
void* right_value128;
struct sType* __dec_obj48;
void* right_value129;
struct sType* __dec_obj49;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool __result84__;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool __result85__;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool __result86__;
void* right_value130;
char* method_name_83;
_Bool _if_conditional198;
struct sType* obj_type_86;
_Bool _if_conditional199;
struct sType* obj_type2_87;
void* right_value131;
void* right_value132;
char* __dec_obj50;
_Bool _if_conditional200;
_Bool __result91__;
void* right_value133;
void* right_value134;
struct buffer* buf2_88;
void* right_value135;
void* right_value136;
struct sType* type_89;
void* right_value137;
void* right_value138;
char* __dec_obj51;
void* right_value139;
struct sType* __dec_obj52;
void* right_value140;
struct sType* __dec_obj53;
_Bool _if_conditional201;
void* right_value141;
char* method_name_90;
_Bool _if_conditional202;
struct sType* obj_type_91;
_Bool _if_conditional203;
struct sType* obj_type2_92;
void* right_value142;
void* right_value143;
char* __dec_obj54;
_Bool _if_conditional204;
_Bool __result92__;
void* right_value144;
void* right_value145;
struct buffer* buf2_93;
void* right_value146;
void* right_value147;
struct sType* type_94;
void* right_value148;
char* __dec_obj55;
void* right_value149;
struct sType* __dec_obj56;
void* right_value150;
struct sType* __dec_obj57;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool __result93__;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool __result94__;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool __result95__;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool __result96__;
_Bool _if_conditional224;
void* right_value151;
char* tmp_95;
void* right_value152;
char* __dec_obj58;
void* right_value153;
struct sType* __dec_obj59;
void* right_value154;
struct sType* __dec_obj60;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool __result97__;
_Bool _if_conditional231;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool __result100__;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool __result101__;
_Bool _if_conditional242;
_Bool _if_conditional243;
int i_96;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&right_type2_70, 0, sizeof(struct sType*));
right_value115 = (void*)0;
memset(&left_type2_71, 0, sizeof(struct sType*));
memset(&found_match_type_72, 0, sizeof(_Bool));
memset(&o2_saved_73, 0, sizeof(struct list$1sTypeph*));
memset(&it_74, 0, sizeof(struct sType*));
right_value116 = (void*)0;
memset(&tmp_75, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&left_no_solved_generics_type_79, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_80, 0, sizeof(struct sType*));
memset(&i_81, 0, sizeof(int));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&buf2_82, 0, sizeof(struct buffer*));
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&method_name_83, 0, sizeof(char*));
memset(&obj_type_86, 0, sizeof(struct sType*));
memset(&obj_type2_87, 0, sizeof(struct sType*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&buf2_88, 0, sizeof(struct buffer*));
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&type_89, 0, sizeof(struct sType*));
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&method_name_90, 0, sizeof(char*));
memset(&obj_type_91, 0, sizeof(struct sType*));
memset(&obj_type2_92, 0, sizeof(struct sType*));
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&buf2_93, 0, sizeof(struct buffer*));
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&type_94, 0, sizeof(struct sType*));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&tmp_95, 0, sizeof(char*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&i_96, 0, sizeof(int));
    # 320 "05function4.c"
    right_type2_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(right_type))));
    come_call_finalizer2(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 347 "05function4.c"
    # 322 "05function4.c"
    if(_if_conditional137=list$1sTypeph_length(left_type->mMultipleTypes)>0,    _if_conditional137) {
        # 323 "05function4.c"
        left_type2_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(left_type))));
        come_call_finalizer2(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 324 "05function4.c"
        found_match_type_72=(_Bool)0;
        # 331 "05function4.c"
        for(        o2_saved_73=(struct list$1sTypeph*)come_increment_ref_count((left_type->mMultipleTypes)),it_74=list$1sTypeph_begin((o2_saved_73));        !list$1sTypeph_end((o2_saved_73));        it_74=list$1sTypeph_next((o2_saved_73))        ){
            # 329 "05function4.c"
            # 326 "05function4.c"
            if(_if_conditional138=check_assign_type(msg,it_74,right_type,come_value,check_no_pointer,(_Bool)0,info),            _if_conditional138) {
                # 327 "05function4.c"
                found_match_type_72=(_Bool)1;
            }
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 338 "05function4.c"
        # 331 "05function4.c"
        if(_if_conditional139=!found_match_type_72,        _if_conditional139) {
            # 332 "05function4.c"
            err_msg(info,"type errorX");
            # 333 "05function4.c"
            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
            # 334 "05function4.c"
            printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
            # 335 "05function4.c"
            exit(2);
        }
        # 338 "05function4.c"
        tmp_75=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("(void*)%s",come_value->c_value))));
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 339 "05function4.c"
        __dec_obj45=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(tmp_75))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 340 "05function4.c"
        __dec_obj46=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value118=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 340, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 341 "05function4.c"
        come_value->type->mHeap=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mMultipleTypes,0), "05function4.c", 341, 0))->mHeap;
        # 342 "05function4.c"
        come_value->var=((void*)0);
        # 344 "05function4.c"
        __result77__ = (_Bool)1;
        come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        tmp_75 = come_decrement_ref_count2(tmp_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result77__;
        come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        tmp_75 = come_decrement_ref_count2(tmp_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 347 "05function4.c"
    left_no_solved_generics_type_79=left_type->mNoSolvedGenericsType->v1;
    # 348 "05function4.c"
    right_no_solved_generics_type_80=right_type2_70->mNoSolvedGenericsType->v1;
    # 700 "05function4.c"
    # 350 "05function4.c"
    if(_if_conditional142=left_no_solved_generics_type_79&&right_no_solved_generics_type_80,    _if_conditional142) {
        # 383 "05function4.c"
        # 351 "05function4.c"
        if(_if_conditional143=string_operator_equals(left_type->mClass->mName,right_type2_70->mClass->mName)&&left_type->mPointerNum==right_type2_70->mPointerNum,        _if_conditional143) {
        }
        else {
            # 383 "05function4.c"
            # 353 "05function4.c"
            if(_if_conditional144=string_operator_equals(left_type->mClass->mName,right_type2_70->mClass->mName)&&(left_type->mPointerNum!=right_type2_70->mPointerNum||left_type->mHeap!=right_type2_70->mHeap),            _if_conditional144) {
                # 354 "05function4.c"
                err_msg(info,"poinetr num err");
                # 355 "05function4.c"
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_79->mGenericsTypes),left_no_solved_generics_type_79->mClass->mName,left_type->mClass->mName);
                # 356 "05function4.c"
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_80->mGenericsTypes),right_no_solved_generics_type_80->mClass->mName,right_type2_70->mClass->mName);
                # 357 "05function4.c"
                exit(2);
            }
            else {
                # 383 "05function4.c"
                # 359 "05function4.c"
                if(_if_conditional145=list$1sTypeph_length(left_no_solved_generics_type_79->mGenericsTypes)>0,                _if_conditional145) {
                    # 382 "05function4.c"
                    # 360 "05function4.c"
                    if(_if_conditional146=(string_operator_equals(left_no_solved_generics_type_79->mClass->mName,"void")&&left_no_solved_generics_type_79->mPointerNum>0&&right_no_solved_generics_type_80->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_80->mClass->mName,"void")&&right_no_solved_generics_type_80->mPointerNum>0&&left_no_solved_generics_type_79->mPointerNum>0),                    _if_conditional146) {
                    }
                    else {
                        # 376 "05function4.c"
                        # 364 "05function4.c"
                        if(_if_conditional147=list$1sTypeph_length(left_no_solved_generics_type_79->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_80->mGenericsTypes),                        _if_conditional147) {
                            # 373 "05function4.c"
                            # 366 "05function4.c"
                            if(print_err_msg) {
                                # 367 "05function4.c"
                                err_msg(info,"generics type parametor number error");
                                # 368 "05function4.c"
                                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_79->mGenericsTypes),left_no_solved_generics_type_79->mClass->mName,left_type->mClass->mName);
                                # 369 "05function4.c"
                                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_80->mGenericsTypes),right_no_solved_generics_type_80->mClass->mName,right_type2_70->mClass->mName);
                                # 370 "05function4.c"
                                exit(2);
                            }
                            # 373 "05function4.c"
                            __result78__ = (_Bool)0;
                            come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result78__;
                        }
                        # 380 "05function4.c"
                        for(                        i_81=0;                        i_81<list$1sTypeph_length(left_no_solved_generics_type_79->mGenericsTypes);                        i_81++                        ){
                            # 377 "05function4.c"
                            check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_no_solved_generics_type_79->mGenericsTypes,i_81), "05function4.c", 377, 1)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_no_solved_generics_type_80->mGenericsTypes,i_81), "05function4.c", 377, 2)),come_value,(_Bool)0,(_Bool)1,info);
                        }
                        # 380 "05function4.c"
                        check_assign_type(msg,left_no_solved_generics_type_79,right_no_solved_generics_type_80,come_value,(_Bool)0,(_Bool)1,info);
                    }
                }
            }
        }
    }
    else {
        # 700 "05function4.c"
        # 384 "05function4.c"
        if(check_no_pointer) {
            # 432 "05function4.c"
            # 385 "05function4.c"
            if(_if_conditional150=left_type->mPointerNum>0,            _if_conditional150) {
                # 411 "05function4.c"
                # 386 "05function4.c"
                if(_if_conditional151=right_type2_70->mPointerNum>0,                _if_conditional151) {
                    # 400 "05function4.c"
                    # 387 "05function4.c"
                    if(_if_conditional152=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_70->mClass->mName,"void"),                    _if_conditional152) {
                    }
                    else {
                        # 400 "05function4.c"
                        # 389 "05function4.c"
                        if(_if_conditional153=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_70->mClass->mName,"va_list"),                        _if_conditional153) {
                        }
                        else {
                            # 400 "05function4.c"
                            # 391 "05function4.c"
                            if(_if_conditional154=string_operator_not_equals(left_type->mClass->mName,right_type2_70->mClass->mName),                            _if_conditional154) {
                                # 398 "05function4.c"
                                # 392 "05function4.c"
                                if(print_err_msg) {
                                    # 393 "05function4.c"
                                    err_msg(info,"type error1");
                                    # 394 "05function4.c"
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    # 395 "05function4.c"
                                    printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                    # 396 "05function4.c"
                                    exit(2);
                                }
                                # 398 "05function4.c"
                                __result79__ = (_Bool)0;
                                come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result79__;
                            }
                        }
                    }
                }
                else {
                    # 409 "05function4.c"
                    # 402 "05function4.c"
                    if(print_err_msg) {
                        # 403 "05function4.c"
                        err_msg(info,"type error2");
                        # 404 "05function4.c"
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        # 405 "05function4.c"
                        printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                        # 406 "05function4.c"
                        exit(2);
                    }
                    # 409 "05function4.c"
                    __result80__ = (_Bool)0;
                    come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result80__;
                }
            }
            else {
                # 432 "05function4.c"
                # 412 "05function4.c"
                if(_if_conditional157=left_type->mPointerNum==0&&right_type2_70->mPointerNum>0,                _if_conditional157) {
                    # 419 "05function4.c"
                    # 413 "05function4.c"
                    if(print_err_msg) {
                        # 414 "05function4.c"
                        err_msg(info,"type error3");
                        # 415 "05function4.c"
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        # 416 "05function4.c"
                        printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                        # 417 "05function4.c"
                        exit(2);
                    }
                    # 419 "05function4.c"
                    __result81__ = (_Bool)0;
                    come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result81__;
                }
                else {
                    # 432 "05function4.c"
                    # 421 "05function4.c"
                    if(_if_conditional159=left_type->mPointerNum>0&&right_type2_70->mPointerNum==0&&string_operator_equals(right_type2_70->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                    _if_conditional159) {
                    }
                    else {
                        # 432 "05function4.c"
                        # 423 "05function4.c"
                        if(_if_conditional160=string_operator_not_equals(left_type->mClass->mName,right_type2_70->mClass->mName),                        _if_conditional160) {
                            # 430 "05function4.c"
                            # 424 "05function4.c"
                            if(print_err_msg) {
                                # 425 "05function4.c"
                                err_msg(info,"type error4");
                                # 426 "05function4.c"
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                # 427 "05function4.c"
                                printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                # 428 "05function4.c"
                                exit(2);
                            }
                            # 430 "05function4.c"
                            __result82__ = (_Bool)0;
                            come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result82__;
                        }
                    }
                }
            }
        }
        else {
            # 700 "05function4.c"
            # 433 "05function4.c"
            if(_if_conditional162=!left_type->mNullValue&&right_type2_70->mNullValue,            _if_conditional162) {
                # 458 "05function4.c"
                # 434 "05function4.c"
                if(_if_conditional163=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_70->mClass->mName,"__builtin_va_list"),                _if_conditional163) {
                }
                else {
                    # 458 "05function4.c"
                    # 436 "05function4.c"
                    if(_if_conditional164=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_70->mClass->mName,"va_list"),                    _if_conditional164) {
                    }
                    else {
                        # 458 "05function4.c"
                        # 438 "05function4.c"
                        if(_if_conditional165=string_operator_equals(right_type2_70->mClass->mName,"void")&&right_type2_70->mPointerNum==0,                        _if_conditional165) {
                            # 445 "05function4.c"
                            # 439 "05function4.c"
                            if(print_err_msg) {
                                # 440 "05function4.c"
                                err_msg(info,"type error6");
                                # 441 "05function4.c"
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                # 442 "05function4.c"
                                printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                # 443 "05function4.c"
                                exit(2);
                            }
                            # 445 "05function4.c"
                            __result83__ = (_Bool)0;
                            come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result83__;
                        }
                        else {
                            # 448 "05function4.c"
                            buf2_82=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value121=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value120=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 448, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 450 "05function4.c"
                            buffer_append_str(buf2_82,((char*)(right_value126=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(right_value122=string_to_string(come_value->c_value))),((char*)(right_value123=string_to_string(info->sname))),((char*)(right_value124=int_to_string(info->sline))),((char*)(right_value125=int_to_string(gComeDebugStackFrameID++)))))));
                            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 452 "05function4.c"
                            __dec_obj47=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value127=buffer_to_string(buf2_82))));
                            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 453 "05function4.c"
                            __dec_obj48=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(left_type))));
                            come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 454 "05function4.c"
                            come_value->var=((void*)0);
                            # 456 "05function4.c"
                            __dec_obj49=right_type2_70;
                            right_type2_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=sType_clone(left_type))));
                            come_call_finalizer2(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,buf2_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            else {
                # 700 "05function4.c"
                # 459 "05function4.c"
                if(_if_conditional167=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,                _if_conditional167) {
                    # 532 "05function4.c"
                    # 460 "05function4.c"
                    if(_if_conditional168=string_operator_equals(right_type2_70->mClass->mName,"integer")&&right_type2_70->mPointerNum==1,                    _if_conditional168) {
                    }
                    else {
                        # 532 "05function4.c"
                        # 462 "05function4.c"
                        if(_if_conditional169=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_70->mClass->mName,"__builtin_va_list"),                        _if_conditional169) {
                        }
                        else {
                            # 532 "05function4.c"
                            # 464 "05function4.c"
                            if(_if_conditional170=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_70->mClass->mName,"va_list"),                            _if_conditional170) {
                            }
                            else {
                                # 532 "05function4.c"
                                # 466 "05function4.c"
                                if(_if_conditional171=string_operator_equals(right_type2_70->mClass->mName,"lambda"),                                _if_conditional171) {
                                    # 473 "05function4.c"
                                    # 467 "05function4.c"
                                    if(print_err_msg) {
                                        # 468 "05function4.c"
                                        err_msg(info,"type error6");
                                        # 469 "05function4.c"
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        # 470 "05function4.c"
                                        printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                        # 471 "05function4.c"
                                        exit(2);
                                    }
                                    # 473 "05function4.c"
                                    __result84__ = (_Bool)0;
                                    come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    return __result84__;
                                }
                                else {
                                    # 532 "05function4.c"
                                    # 475 "05function4.c"
                                    if(_if_conditional173=string_operator_equals(right_type2_70->mClass->mName,"void")&&right_type2_70->mPointerNum>0,                                    _if_conditional173) {
                                    }
                                    else {
                                        # 532 "05function4.c"
                                        # 477 "05function4.c"
                                        if(_if_conditional174=string_operator_equals(right_type2_70->mClass->mName,"void"),                                        _if_conditional174) {
                                            # 484 "05function4.c"
                                            # 478 "05function4.c"
                                            if(print_err_msg) {
                                                # 479 "05function4.c"
                                                err_msg(info,"type error6");
                                                # 480 "05function4.c"
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                # 481 "05function4.c"
                                                printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                                # 482 "05function4.c"
                                                exit(2);
                                            }
                                            # 484 "05function4.c"
                                            __result85__ = (_Bool)0;
                                            come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result85__;
                                        }
                                        else {
                                            # 532 "05function4.c"
                                            # 486 "05function4.c"
                                            if(_if_conditional176=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_70->mClass->mName,"lambda"),                                            _if_conditional176) {
                                            }
                                            else {
                                                # 532 "05function4.c"
                                                # 488 "05function4.c"
                                                if(_if_conditional177=right_type2_70->mPointerNum>0,                                                _if_conditional177) {
                                                    # 495 "05function4.c"
                                                    # 489 "05function4.c"
                                                    if(print_err_msg) {
                                                        # 490 "05function4.c"
                                                        err_msg(info,"type error10");
                                                        # 491 "05function4.c"
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        # 492 "05function4.c"
                                                        printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                                        # 493 "05function4.c"
                                                        exit(2);
                                                    }
                                                    # 495 "05function4.c"
                                                    __result86__ = (_Bool)0;
                                                    come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result86__;
                                                }
                                                else {
                                                    # 498 "05function4.c"
                                                    method_name_83=(char*)come_increment_ref_count(((char*)(right_value130=create_method_name(right_type2_70,(_Bool)0,"to_integer",info,(_Bool)1))));
                                                    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 515 "05function4.c"
                                                    # 500 "05function4.c"
                                                    if(_if_conditional198=map$2charphsFunph_at(info->funcs,method_name_83,((void*)0))==((void*)0),                                                    _if_conditional198) {
                                                        # 501 "05function4.c"
                                                        obj_type_86=right_type2_70->mNoSolvedGenericsType->v1;
                                                        # 513 "05function4.c"
                                                        # 502 "05function4.c"
                                                        if(_if_conditional199=obj_type_86&&list$1sTypeph_length(obj_type_86->mGenericsTypes)>0,                                                        _if_conditional199) {
                                                            # 503 "05function4.c"
                                                            obj_type2_87=right_type2_70;
                                                            # 504 "05function4.c"
                                                            __dec_obj50=method_name_83;
                                                            method_name_83=(char*)come_increment_ref_count(((char*)(right_value132=make_generics_function(obj_type2_87,(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            # 511 "05function4.c"
                                                            # 507 "05function4.c"
                                                            if(print_err_msg) {
                                                                # 508 "05function4.c"
                                                                err_msg(info,"require to_string implementation(%s)",right_type2_70->mClass->mName);
                                                                # 509 "05function4.c"
                                                                exit(2);
                                                            }
                                                            # 511 "05function4.c"
                                                            __result91__ = (_Bool)0;
                                                            method_name_83 = come_decrement_ref_count2(method_name_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            return __result91__;
                                                        }
                                                    }
                                                    # 515 "05function4.c"
                                                    buf2_88=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value134=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value133=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 515, "buffer"))))))));
                                                    come_call_finalizer2(buffer_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(buffer_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 517 "05function4.c"
                                                    buffer_append_str(buf2_88,method_name_83);
                                                    # 518 "05function4.c"
                                                    buffer_append_str(buf2_88,"(");
                                                    # 519 "05function4.c"
                                                    buffer_append_str(buf2_88,come_value->c_value);
                                                    # 520 "05function4.c"
                                                    buffer_append_str(buf2_88,")");
                                                    # 522 "05function4.c"
                                                    type_89=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value135=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 522, "sType")))),"integer",(_Bool)0,info))));
                                                    come_call_finalizer2(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 523 "05function4.c"
                                                    type_89->mHeap=(_Bool)1;
                                                    # 524 "05function4.c"
                                                    type_89->mPointerNum=1;
                                                    # 526 "05function4.c"
                                                    __dec_obj51=come_value->c_value;
                                                    come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value138=append_object_to_right_values(((char*)(right_value137=buffer_to_string(buf2_88))),(struct sType*)come_increment_ref_count(type_89),info))));
                                                    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 527 "05function4.c"
                                                    __dec_obj52=come_value->type;
                                                    come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(type_89))));
                                                    come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 528 "05function4.c"
                                                    come_value->var=((void*)0);
                                                    # 530 "05function4.c"
                                                    __dec_obj53=right_type2_70;
                                                    right_type2_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(type_89))));
                                                    come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    method_name_83 = come_decrement_ref_count2(method_name_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(buffer_finalize,buf2_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sType_finalize,type_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                    # 700 "05function4.c"
                    # 533 "05function4.c"
                    if(_if_conditional201=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),                    _if_conditional201) {
                        # 534 "05function4.c"
                        method_name_90=(char*)come_increment_ref_count(((char*)(right_value141=create_method_name(right_type2_70,(_Bool)0,"to_int",info,(_Bool)1))));
                        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 551 "05function4.c"
                        # 536 "05function4.c"
                        if(_if_conditional202=map$2charphsFunph_at(info->funcs,method_name_90,((void*)0))==((void*)0),                        _if_conditional202) {
                            # 537 "05function4.c"
                            obj_type_91=right_type2_70->mNoSolvedGenericsType->v1;
                            # 549 "05function4.c"
                            # 538 "05function4.c"
                            if(_if_conditional203=obj_type_91&&list$1sTypeph_length(obj_type_91->mGenericsTypes)>0,                            _if_conditional203) {
                                # 539 "05function4.c"
                                obj_type2_92=right_type2_70;
                                # 540 "05function4.c"
                                __dec_obj54=method_name_90;
                                method_name_90=(char*)come_increment_ref_count(((char*)(right_value143=make_generics_function(obj_type2_92,(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string("to_int")))),info,(_Bool)1))));
                                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 547 "05function4.c"
                                # 543 "05function4.c"
                                if(print_err_msg) {
                                    # 544 "05function4.c"
                                    err_msg(info,"require to_string implementation(%s)",right_type2_70->mClass->mName);
                                    # 545 "05function4.c"
                                    exit(1);
                                }
                                # 547 "05function4.c"
                                __result92__ = (_Bool)0;
                                method_name_90 = come_decrement_ref_count2(method_name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result92__;
                            }
                        }
                        # 551 "05function4.c"
                        buf2_93=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value145=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value144=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 551, "buffer"))))))));
                        come_call_finalizer2(buffer_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(buffer_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 553 "05function4.c"
                        buffer_append_str(buf2_93,method_name_90);
                        # 554 "05function4.c"
                        buffer_append_str(buf2_93,"(");
                        # 555 "05function4.c"
                        buffer_append_str(buf2_93,come_value->c_value);
                        # 556 "05function4.c"
                        buffer_append_str(buf2_93,")");
                        # 558 "05function4.c"
                        type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value146=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 558, "sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 560 "05function4.c"
                        __dec_obj55=come_value->c_value;
                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value148=buffer_to_string(buf2_93))));
                        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 561 "05function4.c"
                        __dec_obj56=come_value->type;
                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(type_94))));
                        come_call_finalizer2(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 562 "05function4.c"
                        come_value->var=((void*)0);
                        # 564 "05function4.c"
                        __dec_obj57=right_type2_70;
                        right_type2_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(type_94))));
                        come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        method_name_90 = come_decrement_ref_count2(method_name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,buf2_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 700 "05function4.c"
                        # 566 "05function4.c"
                        if(_if_conditional205=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                        _if_conditional205) {
                            # 603 "05function4.c"
                            # 567 "05function4.c"
                            if(_if_conditional206=string_operator_equals(right_type2_70->mClass->mName,"char")&&right_type2_70->mPointerNum==1,                            _if_conditional206) {
                            }
                            else {
                                # 603 "05function4.c"
                                # 569 "05function4.c"
                                if(_if_conditional207=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_70->mClass->mName,"__builtin_va_list"),                                _if_conditional207) {
                                }
                                else {
                                    # 603 "05function4.c"
                                    # 571 "05function4.c"
                                    if(_if_conditional208=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_70->mClass->mName,"va_list"),                                    _if_conditional208) {
                                    }
                                    else {
                                        # 603 "05function4.c"
                                        # 573 "05function4.c"
                                        if(_if_conditional209=string_operator_equals(right_type2_70->mClass->mName,"lambda"),                                        _if_conditional209) {
                                            # 581 "05function4.c"
                                            # 574 "05function4.c"
                                            if(print_err_msg) {
                                                # 575 "05function4.c"
                                                err_msg(info,"type error6");
                                                # 576 "05function4.c"
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                # 577 "05function4.c"
                                                printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                                # 578 "05function4.c"
                                                exit(2);
                                            }
                                            # 581 "05function4.c"
                                            __result93__ = (_Bool)0;
                                            come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result93__;
                                        }
                                        else {
                                            # 603 "05function4.c"
                                            # 583 "05function4.c"
                                            if(_if_conditional211=string_operator_equals(right_type2_70->mClass->mName,"void")&&right_type2_70->mPointerNum>0,                                            _if_conditional211) {
                                            }
                                            else {
                                                # 603 "05function4.c"
                                                # 585 "05function4.c"
                                                if(_if_conditional212=string_operator_equals(right_type2_70->mClass->mName,"void"),                                                _if_conditional212) {
                                                    # 592 "05function4.c"
                                                    # 586 "05function4.c"
                                                    if(print_err_msg) {
                                                        # 587 "05function4.c"
                                                        err_msg(info,"type error6");
                                                        # 588 "05function4.c"
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        # 589 "05function4.c"
                                                        printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                                        # 590 "05function4.c"
                                                        exit(2);
                                                    }
                                                    # 592 "05function4.c"
                                                    __result94__ = (_Bool)0;
                                                    come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result94__;
                                                }
                                                else {
                                                    # 603 "05function4.c"
                                                    # 594 "05function4.c"
                                                    if(_if_conditional214=string_operator_not_equals(left_type->mClass->mName,right_type2_70->mClass->mName),                                                    _if_conditional214) {
                                                        # 601 "05function4.c"
                                                        # 595 "05function4.c"
                                                        if(print_err_msg) {
                                                            # 596 "05function4.c"
                                                            err_msg(info,"type error5");
                                                            # 597 "05function4.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 598 "05function4.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                                            # 599 "05function4.c"
                                                            exit(2);
                                                        }
                                                        # 601 "05function4.c"
                                                        __result95__ = (_Bool)0;
                                                        come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        return __result95__;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            # 700 "05function4.c"
                            # 604 "05function4.c"
                            if(_if_conditional216=string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1,                            _if_conditional216) {
                                # 632 "05function4.c"
                                # 605 "05function4.c"
                                if(_if_conditional217=string_operator_equals(right_type2_70->mClass->mName,"void")&&right_type2_70->mPointerNum==1,                                _if_conditional217) {
                                }
                                else {
                                    # 632 "05function4.c"
                                    # 607 "05function4.c"
                                    if(_if_conditional218=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_70->mClass->mName,"__builtin_va_list"),                                    _if_conditional218) {
                                    }
                                    else {
                                        # 632 "05function4.c"
                                        # 609 "05function4.c"
                                        if(_if_conditional219=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_70->mClass->mName,"va_list"),                                        _if_conditional219) {
                                        }
                                        else {
                                            # 632 "05function4.c"
                                            # 611 "05function4.c"
                                            if(_if_conditional220=string_operator_equals(right_type2_70->mClass->mName,"lambda"),                                            _if_conditional220) {
                                            }
                                            else {
                                                # 632 "05function4.c"
                                                # 613 "05function4.c"
                                                if(_if_conditional221=string_operator_equals(right_type2_70->mClass->mName,"void")&&right_type2_70->mPointerNum>0,                                                _if_conditional221) {
                                                }
                                                else {
                                                    # 632 "05function4.c"
                                                    # 615 "05function4.c"
                                                    if(_if_conditional222=string_operator_equals(right_type2_70->mClass->mName,"void"),                                                    _if_conditional222) {
                                                        # 622 "05function4.c"
                                                        # 616 "05function4.c"
                                                        if(print_err_msg) {
                                                            # 617 "05function4.c"
                                                            err_msg(info,"type error6");
                                                            # 618 "05function4.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 619 "05function4.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                                            # 620 "05function4.c"
                                                            exit(2);
                                                        }
                                                        # 622 "05function4.c"
                                                        __result96__ = (_Bool)0;
                                                        come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        return __result96__;
                                                    }
                                                    else {
                                                        # 632 "05function4.c"
                                                        # 624 "05function4.c"
                                                        if(_if_conditional224=right_type2_70->mPointerNum==0,                                                        _if_conditional224) {
                                                            # 625 "05function4.c"
                                                            tmp_95=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("(void*)%s",come_value->c_value))));
                                                            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            # 626 "05function4.c"
                                                            __dec_obj58=come_value->c_value;
                                                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value152=string_clone(tmp_95))));
                                                            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            # 627 "05function4.c"
                                                            __dec_obj59=come_value->type;
                                                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(left_type))));
                                                            come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 628 "05function4.c"
                                                            come_value->var=((void*)0);
                                                            # 630 "05function4.c"
                                                            __dec_obj60=right_type2_70;
                                                            right_type2_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(left_type))));
                                                            come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            tmp_95 = come_decrement_ref_count2(tmp_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                                # 700 "05function4.c"
                                # 633 "05function4.c"
                                if(_if_conditional225=left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct),                                _if_conditional225) {
                                    # 687 "05function4.c"
                                    # 634 "05function4.c"
                                    if(_if_conditional226=right_type2_70->mPointerNum>0||(right_type2_70->mPointerNum==0&&right_type2_70->mClass->mStruct),                                    _if_conditional226) {
                                        # 658 "05function4.c"
                                        # 635 "05function4.c"
                                        if(_if_conditional227=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_70->mClass->mName,"void"),                                        _if_conditional227) {
                                        }
                                        else {
                                            # 658 "05function4.c"
                                            # 637 "05function4.c"
                                            if(_if_conditional228=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_70->mClass->mName,"va_list"),                                            _if_conditional228) {
                                            }
                                            else {
                                                # 658 "05function4.c"
                                                # 639 "05function4.c"
                                                if(_if_conditional229=string_operator_not_equals(left_type->mClass->mName,right_type2_70->mClass->mName),                                                _if_conditional229) {
                                                    # 646 "05function4.c"
                                                    # 640 "05function4.c"
                                                    if(print_err_msg) {
                                                        # 641 "05function4.c"
                                                        err_msg(info,"type error5");
                                                        # 642 "05function4.c"
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        # 643 "05function4.c"
                                                        printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                                        # 644 "05function4.c"
                                                        exit(2);
                                                    }
                                                    # 646 "05function4.c"
                                                    __result97__ = (_Bool)0;
                                                    come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result97__;
                                                }
                                                else {
                                                    # 658 "05function4.c"
                                                    # 648 "05function4.c"
                                                    if(_if_conditional231=left_type->mPointerNum!=right_type2_70->mPointerNum,                                                    _if_conditional231) {
                                                        # 649 "05function4.c"
                                                        printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                        # 650 "05function4.c"
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        # 651 "05function4.c"
                                                        printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                                    }
                                                    else {
                                                        # 658 "05function4.c"
                                                        # 653 "05function4.c"
                                                        if(_if_conditional233=list$1sNodeph_length(right_type2_70->mArrayNum)>0,                                                        _if_conditional233) {
                                                            # 654 "05function4.c"
                                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                            # 655 "05function4.c"
                                                            printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                            # 656 "05function4.c"
                                                            printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum,list$1sNodeph_length(right_type2_70->mArrayNum));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        # 687 "05function4.c"
                                        # 659 "05function4.c"
                                        if(_if_conditional234=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_70->mClass->mName,"void"),                                        _if_conditional234) {
                                        }
                                        else {
                                            # 687 "05function4.c"
                                            # 661 "05function4.c"
                                            if(_if_conditional235=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_70->mClass->mName,"va_list"),                                            _if_conditional235) {
                                            }
                                            else {
                                                # 687 "05function4.c"
                                                # 663 "05function4.c"
                                                if(_if_conditional236=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_70->mClass->mName,"__builtin_va_list"),                                                _if_conditional236) {
                                                }
                                                else {
                                                    # 687 "05function4.c"
                                                    # 665 "05function4.c"
                                                    if(_if_conditional237=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_70->mClass->mName,"lambda"),                                                    _if_conditional237) {
                                                    }
                                                    else {
                                                        # 687 "05function4.c"
                                                        # 667 "05function4.c"
                                                        if(_if_conditional238=left_type->mPointerNum>0&&right_type2_70->mPointerNum==0&&string_operator_equals(right_type2_70->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                                        _if_conditional238) {
                                                            # 675 "05function4.c"
                                                            # 668 "05function4.c"
                                                            if(print_err_msg) {
                                                                # 669 "05function4.c"
                                                                err_msg(info,"type error10");
                                                                # 670 "05function4.c"
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                # 671 "05function4.c"
                                                                printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                                                # 672 "05function4.c"
                                                                exit(2);
                                                            }
                                                            # 675 "05function4.c"
                                                            __result100__ = (_Bool)0;
                                                            come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            return __result100__;
                                                        }
                                                        else {
                                                            # 687 "05function4.c"
                                                            # 677 "05function4.c"
                                                            if(_if_conditional240=!(string_operator_equals(right_type2_70->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_70->mPointerNum==0,                                                            _if_conditional240) {
                                                                # 684 "05function4.c"
                                                                # 678 "05function4.c"
                                                                if(print_err_msg) {
                                                                    # 679 "05function4.c"
                                                                    err_msg(info,"type error6");
                                                                    # 680 "05function4.c"
                                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                    # 681 "05function4.c"
                                                                    printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                                                    # 682 "05function4.c"
                                                                    exit(2);
                                                                }
                                                                # 684 "05function4.c"
                                                                __result101__ = (_Bool)0;
                                                                come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                return __result101__;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    # 698 "05function4.c"
                                    # 687 "05function4.c"
                                    if(_if_conditional242=list$1sTypeph_length(left_type->mGenericsTypes)>0,                                    _if_conditional242) {
                                        # 694 "05function4.c"
                                        # 688 "05function4.c"
                                        if(_if_conditional243=list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_70->mGenericsTypes),                                        _if_conditional243) {
                                            # 689 "05function4.c"
                                            err_msg(info,"generics type number error");
                                            # 690 "05function4.c"
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            # 691 "05function4.c"
                                            printf("right type is %s pointer num %d\n",right_type2_70->mClass->mName,right_type2_70->mPointerNum);
                                            # 692 "05function4.c"
                                            exit(2);
                                        }
                                        # 697 "05function4.c"
                                        for(                                        i_96=0;                                        i_96<list$1sTypeph_length(left_type->mGenericsTypes);                                        i_96++                                        ){
                                            # 695 "05function4.c"
                                            check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_96), "05function4.c", 695, 3)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type2_70->mGenericsTypes,i_96), "05function4.c", 695, 4)),come_value,(_Bool)0,(_Bool)1,info);
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
    # 700 "05function4.c"
    __result102__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result102__;
    come_call_finalizer2(sType_finalize,right_type2_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional136;
int __result73__;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./comelang2.h"
        # 364 "./comelang2.h"
        if(_if_conditional136=self==((void*)0),        _if_conditional136) {
            # 365 "./comelang2.h"
            __result73__ = 0;
            return __result73__;
        }
        # 367 "./comelang2.h"
        __result74__ = self->len;
        return __result74__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional140;
struct list_item$1sTypeph* it_76;
int i_77;
_Bool _while_condtional22;
_Bool _if_conditional141;
struct sType* __result75__;
struct sType* default_value_78;
struct sType* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_76, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_77, 0, sizeof(int));
memset(&default_value_78, 0, sizeof(struct sType*));
            # 686 "./comelang2.h"
            # 682 "./comelang2.h"
            if(_if_conditional140=position<0,            _if_conditional140) {
                # 683 "./comelang2.h"
                position+=self->len;
            }
            # 686 "./comelang2.h"
            it_76=self->head;
            # 687 "./comelang2.h"
            i_77=0;
            # 694 "./comelang2.h"
            while(_while_condtional22=it_76!=((void*)0),            _while_condtional22) {
                # 692 "./comelang2.h"
                # 689 "./comelang2.h"
                if(_if_conditional141=position==i_77,                _if_conditional141) {
                    # 690 "./comelang2.h"
                    __result75__ = __result_obj__ = it_76->item;
                    return __result75__;
                }
                # 692 "./comelang2.h"
                it_76=it_76->next;
                # 693 "./comelang2.h"
                i_77++;
            }
            # 696 "./comelang2.h"
            # 697 "./comelang2.h"
            memset(&default_value_78,0,sizeof(struct sType*));
            # 698 "./comelang2.h"
            __result76__ = __result_obj__ = default_value_78;
            come_call_finalizer2(sType_finalize,default_value_78, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result76__;
            come_call_finalizer2(sType_finalize,default_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_84;
unsigned int it_85;
_Bool _while_condtional23;
_Bool _if_conditional179;
_Bool _if_conditional180;
struct sFun* __result87__;
_Bool _if_conditional196;
_Bool _if_conditional197;
struct sFun* __result88__;
struct sFun* __result89__;
struct sFun* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_84, 0, sizeof(unsigned int));
memset(&it_85, 0, sizeof(unsigned int));
                                                        # 1226 "./comelang2.h"
                                                        hash_84=string_get_hash_key(((char*)key))%self->size;
                                                        # 1227 "./comelang2.h"
                                                        it_85=hash_84;
                                                        # 1251 "./comelang2.h"
                                                        while(_while_condtional23=(_Bool)1,                                                        _while_condtional23) {
                                                            # 1249 "./comelang2.h"
                                                            # 1230 "./comelang2.h"
                                                            if(_if_conditional179=self->item_existance[it_85],                                                            _if_conditional179) {
                                                                # 1237 "./comelang2.h"
                                                                # 1232 "./comelang2.h"
                                                                if(_if_conditional180=string_equals(self->keys[it_85],key),                                                                _if_conditional180) {
                                                                    # 1234 "./comelang2.h"
                                                                    __result87__ = __result_obj__ = self->items[it_85];
                                                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result87__;
                                                                }
                                                                # 1237 "./comelang2.h"
                                                                it_85++;
                                                                # 1245 "./comelang2.h"
                                                                # 1239 "./comelang2.h"
                                                                if(_if_conditional196=it_85>=self->size,                                                                _if_conditional196) {
                                                                    # 1240 "./comelang2.h"
                                                                    it_85=0;
                                                                }
                                                                else {
                                                                    # 1245 "./comelang2.h"
                                                                    # 1242 "./comelang2.h"
                                                                    if(_if_conditional197=it_85==hash_84,                                                                    _if_conditional197) {
                                                                        # 1243 "./comelang2.h"
                                                                        __result88__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result88__;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                # 1247 "./comelang2.h"
                                                                __result89__ = __result_obj__ = default_value;
                                                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result89__;
                                                            }
                                                        }
                                                        # 1251 "./comelang2.h"
                                                        __result90__ = __result_obj__ = default_value;
                                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result90__;
                                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        # 1 "sFun_finalize"
                                                                        # 0 "sFun_finalize"
                                                                        if(_if_conditional181=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional181) {
                                                                            # 0 "sFun_finalize"
                                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 2 "sFun_finalize"
                                                                        # 1 "sFun_finalize"
                                                                        if(_if_conditional182=self!=((void*)0)&&self->mResultType!=((void*)0),                                                                        _if_conditional182) {
                                                                            # 1 "sFun_finalize"
                                                                            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 3 "sFun_finalize"
                                                                        # 2 "sFun_finalize"
                                                                        if(_if_conditional183=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                                        _if_conditional183) {
                                                                            # 2 "sFun_finalize"
                                                                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 4 "sFun_finalize"
                                                                        # 3 "sFun_finalize"
                                                                        if(_if_conditional184=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                                        _if_conditional184) {
                                                                            # 3 "sFun_finalize"
                                                                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 5 "sFun_finalize"
                                                                        # 4 "sFun_finalize"
                                                                        if(_if_conditional185=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                                                        _if_conditional185) {
                                                                            # 4 "sFun_finalize"
                                                                            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 6 "sFun_finalize"
                                                                        # 5 "sFun_finalize"
                                                                        if(_if_conditional186=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                                                        _if_conditional186) {
                                                                            # 5 "sFun_finalize"
                                                                            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 7 "sFun_finalize"
                                                                        # 6 "sFun_finalize"
                                                                        if(_if_conditional187=self!=((void*)0)&&self->mBlock!=((void*)0),                                                                        _if_conditional187) {
                                                                            # 6 "sFun_finalize"
                                                                            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 8 "sFun_finalize"
                                                                        # 7 "sFun_finalize"
                                                                        if(_if_conditional190=self!=((void*)0)&&self->mSource!=((void*)0),                                                                        _if_conditional190) {
                                                                            # 7 "sFun_finalize"
                                                                            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 9 "sFun_finalize"
                                                                        # 8 "sFun_finalize"
                                                                        if(_if_conditional191=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                                                        _if_conditional191) {
                                                                            # 8 "sFun_finalize"
                                                                            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 10 "sFun_finalize"
                                                                        # 9 "sFun_finalize"
                                                                        if(_if_conditional192=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                                                        _if_conditional192) {
                                                                            # 9 "sFun_finalize"
                                                                            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 11 "sFun_finalize"
                                                                        # 10 "sFun_finalize"
                                                                        if(_if_conditional193=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                                                        _if_conditional193) {
                                                                            # 10 "sFun_finalize"
                                                                            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 12 "sFun_finalize"
                                                                        # 11 "sFun_finalize"
                                                                        if(_if_conditional194=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                                                        _if_conditional194) {
                                                                            # 11 "sFun_finalize"
                                                                            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 13 "sFun_finalize"
                                                                        # 12 "sFun_finalize"
                                                                        if(_if_conditional195=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                        _if_conditional195) {
                                                                            # 12 "sFun_finalize"
                                                                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional188;
_Bool _if_conditional189;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                # 1 "sBlock_finalize"
                                                                                # 0 "sBlock_finalize"
                                                                                if(_if_conditional188=self!=((void*)0)&&self->mNodes!=((void*)0),                                                                                _if_conditional188) {
                                                                                    # 0 "sBlock_finalize"
                                                                                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 2 "sBlock_finalize"
                                                                                # 1 "sBlock_finalize"
                                                                                if(_if_conditional189=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                                                _if_conditional189) {
                                                                                    # 1 "sBlock_finalize"
                                                                                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional232;
int __result98__;
int __result99__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 367 "./comelang2.h"
                                                            # 364 "./comelang2.h"
                                                            if(_if_conditional232=self==((void*)0),                                                            _if_conditional232) {
                                                                # 365 "./comelang2.h"
                                                                __result98__ = 0;
                                                                return __result98__;
                                                            }
                                                            # 367 "./comelang2.h"
                                                            __result99__ = self->len;
                                                            return __result99__;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__;
void* right_value155;
struct sType* right_type2_97;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value156;
char* method_name_98;
_Bool _if_conditional253;
struct sType* obj_type_99;
_Bool _if_conditional254;
struct sType* obj_type2_100;
void* right_value157;
void* right_value158;
char* __dec_obj61;
void* right_value159;
void* right_value160;
struct buffer* buf2_101;
void* right_value161;
void* right_value162;
struct sType* type_102;
void* right_value163;
void* right_value164;
char* __dec_obj62;
void* right_value165;
struct sType* __dec_obj63;
void* right_value166;
struct sType* __dec_obj64;
_Bool _if_conditional255;
void* right_value167;
char* method_name_103;
_Bool _if_conditional256;
struct sType* obj_type_104;
_Bool _if_conditional257;
struct sType* obj_type2_105;
void* right_value168;
void* right_value169;
char* __dec_obj65;
void* right_value170;
void* right_value171;
struct buffer* buf2_106;
void* right_value172;
void* right_value173;
struct sType* type_107;
void* right_value174;
char* __dec_obj66;
void* right_value175;
struct sType* __dec_obj67;
void* right_value176;
struct sType* __dec_obj68;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
memset(&right_type2_97, 0, sizeof(struct sType*));
right_value156 = (void*)0;
memset(&method_name_98, 0, sizeof(char*));
memset(&obj_type_99, 0, sizeof(struct sType*));
memset(&obj_type2_100, 0, sizeof(struct sType*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&buf2_101, 0, sizeof(struct buffer*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&type_102, 0, sizeof(struct sType*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&method_name_103, 0, sizeof(char*));
memset(&obj_type_104, 0, sizeof(struct sType*));
memset(&obj_type2_105, 0, sizeof(struct sType*));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&buf2_106, 0, sizeof(struct buffer*));
right_value172 = (void*)0;
right_value173 = (void*)0;
memset(&type_107, 0, sizeof(struct sType*));
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
    # 705 "05function4.c"
    right_type2_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(right_type))));
    come_call_finalizer2(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 786 "05function4.c"
    # 706 "05function4.c"
    if(_if_conditional244=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,    _if_conditional244) {
        # 755 "05function4.c"
        # 707 "05function4.c"
        if(_if_conditional245=string_operator_equals(right_type2_97->mClass->mName,"integer")&&right_type2_97->mPointerNum==1,        _if_conditional245) {
        }
        else {
            # 755 "05function4.c"
            # 709 "05function4.c"
            if(_if_conditional246=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_97->mClass->mName,"__builtin_va_list"),            _if_conditional246) {
            }
            else {
                # 755 "05function4.c"
                # 711 "05function4.c"
                if(_if_conditional247=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_97->mClass->mName,"va_list"),                _if_conditional247) {
                }
                else {
                    # 755 "05function4.c"
                    # 713 "05function4.c"
                    if(_if_conditional248=string_operator_equals(right_type2_97->mClass->mName,"lambda"),                    _if_conditional248) {
                    }
                    else {
                        # 755 "05function4.c"
                        # 715 "05function4.c"
                        if(_if_conditional249=string_operator_equals(right_type2_97->mClass->mName,"void")&&right_type2_97->mPointerNum>0,                        _if_conditional249) {
                        }
                        else {
                            # 755 "05function4.c"
                            # 717 "05function4.c"
                            if(_if_conditional250=string_operator_equals(right_type2_97->mClass->mName,"void"),                            _if_conditional250) {
                            }
                            else {
                                # 755 "05function4.c"
                                # 719 "05function4.c"
                                if(_if_conditional251=left_type->mPointerNum>0&&right_type2_97->mPointerNum==0&&string_operator_equals(right_type2_97->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                _if_conditional251) {
                                }
                                else {
                                    # 755 "05function4.c"
                                    # 721 "05function4.c"
                                    if(_if_conditional252=right_type->mPointerNum>0,                                    _if_conditional252) {
                                    }
                                    else {
                                        # 724 "05function4.c"
                                        method_name_98=(char*)come_increment_ref_count(((char*)(right_value156=create_method_name(right_type2_97,(_Bool)0,"to_integer",info,(_Bool)1))));
                                        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 738 "05function4.c"
                                        # 726 "05function4.c"
                                        if(_if_conditional253=map$2charphsFunph_at(info->funcs,method_name_98,((void*)0))==((void*)0),                                        _if_conditional253) {
                                            # 727 "05function4.c"
                                            obj_type_99=right_type2_97->mNoSolvedGenericsType->v1;
                                            # 736 "05function4.c"
                                            # 728 "05function4.c"
                                            if(_if_conditional254=obj_type_99&&list$1sTypeph_length(obj_type_99->mGenericsTypes)>0,                                            _if_conditional254) {
                                                # 729 "05function4.c"
                                                obj_type2_100=right_type2_97;
                                                # 730 "05function4.c"
                                                __dec_obj61=method_name_98;
                                                method_name_98=(char*)come_increment_ref_count(((char*)(right_value158=make_generics_function(obj_type2_100,(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                # 733 "05function4.c"
                                                err_msg(info,"require to_string implementation(%s)",right_type2_97->mClass->mName);
                                                # 734 "05function4.c"
                                                exit(1);
                                            }
                                        }
                                        # 738 "05function4.c"
                                        buf2_101=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 738, "buffer"))))))));
                                        come_call_finalizer2(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(buffer_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 740 "05function4.c"
                                        buffer_append_str(buf2_101,method_name_98);
                                        # 741 "05function4.c"
                                        buffer_append_str(buf2_101,"(");
                                        # 742 "05function4.c"
                                        buffer_append_str(buf2_101,come_value->c_value);
                                        # 743 "05function4.c"
                                        buffer_append_str(buf2_101,")");
                                        # 745 "05function4.c"
                                        type_102=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value161=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 745, "sType")))),"integer",(_Bool)0,info))));
                                        come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 746 "05function4.c"
                                        type_102->mHeap=(_Bool)1;
                                        # 747 "05function4.c"
                                        type_102->mPointerNum=1;
                                        # 749 "05function4.c"
                                        __dec_obj62=come_value->c_value;
                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value164=append_object_to_right_values(((char*)(right_value163=buffer_to_string(buf2_101))),(struct sType*)come_increment_ref_count(type_102),info))));
                                        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 750 "05function4.c"
                                        __dec_obj63=come_value->type;
                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(type_102))));
                                        come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 751 "05function4.c"
                                        come_value->var=((void*)0);
                                        # 753 "05function4.c"
                                        __dec_obj64=right_type2_97;
                                        right_type2_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(type_102))));
                                        come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        method_name_98 = come_decrement_ref_count2(method_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(buffer_finalize,buf2_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
        # 786 "05function4.c"
        # 756 "05function4.c"
        if(_if_conditional255=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),        _if_conditional255) {
            # 757 "05function4.c"
            method_name_103=(char*)come_increment_ref_count(((char*)(right_value167=create_method_name(right_type2_97,(_Bool)0,"to_int",info,(_Bool)1))));
            right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 771 "05function4.c"
            # 759 "05function4.c"
            if(_if_conditional256=map$2charphsFunph_at(info->funcs,method_name_103,((void*)0))==((void*)0),            _if_conditional256) {
                # 760 "05function4.c"
                obj_type_104=right_type2_97->mNoSolvedGenericsType->v1;
                # 769 "05function4.c"
                # 761 "05function4.c"
                if(_if_conditional257=obj_type_104&&list$1sTypeph_length(obj_type_104->mGenericsTypes)>0,                _if_conditional257) {
                    # 762 "05function4.c"
                    obj_type2_105=right_type2_97;
                    # 763 "05function4.c"
                    __dec_obj65=method_name_103;
                    method_name_103=(char*)come_increment_ref_count(((char*)(right_value169=make_generics_function(obj_type2_105,(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string("to_int")))),info,(_Bool)1))));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 766 "05function4.c"
                    err_msg(info,"require to_string implementation(%s)",right_type2_97->mClass->mName);
                    # 767 "05function4.c"
                    exit(1);
                }
            }
            # 771 "05function4.c"
            buf2_106=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value171=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 771, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 773 "05function4.c"
            buffer_append_str(buf2_106,method_name_103);
            # 774 "05function4.c"
            buffer_append_str(buf2_106,"(");
            # 775 "05function4.c"
            buffer_append_str(buf2_106,come_value->c_value);
            # 776 "05function4.c"
            buffer_append_str(buf2_106,")");
            # 778 "05function4.c"
            type_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value172=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 778, "sType")))),"int",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 780 "05function4.c"
            __dec_obj66=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value174=buffer_to_string(buf2_106))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 781 "05function4.c"
            __dec_obj67=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(type_107))));
            come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 782 "05function4.c"
            come_value->var=((void*)0);
            # 784 "05function4.c"
            __dec_obj68=right_type2_97;
            right_type2_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(type_107))));
            come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            method_name_103 = come_decrement_ref_count2(method_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf2_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer2(sType_finalize,right_type2_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
void* right_value177;
struct sType* result_type_108;
_Bool _if_conditional258;
char* var_name_109;
char* p_110;
int sline_111;
_Bool _if_conditional259;
void* right_value178;
char* word_112;
_Bool _if_conditional260;
_Bool between_brace_113;
char* p_114;
int sline_115;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value179;
char* word_116;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _while_condtional24;
char* p_117;
int sline_118;
_Bool _if_conditional266;
void* right_value180;
char* word_119;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
void* right_value181;
char* __dec_obj69;
static int num_anonymous_var_name_120=0;
void* right_value182;
char* __dec_obj70;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool no_comma_121;
void* right_value183;
struct sNode* node_122;
struct sNode* __dec_obj71;
_Bool _while_condtional25;
char* p_123;
int sline_124;
_Bool _if_conditional272;
void* right_value184;
char* word_125;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value185;
struct sNode* node_126;
void* right_value189;
void* right_value190;
struct tuple2$2sTypephcharph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
memset(&result_type_108, 0, sizeof(struct sType*));
memset(&var_name_109, 0, sizeof(char*));
memset(&p_110, 0, sizeof(char*));
memset(&sline_111, 0, sizeof(int));
right_value178 = (void*)0;
memset(&word_112, 0, sizeof(char*));
memset(&between_brace_113, 0, sizeof(_Bool));
memset(&p_114, 0, sizeof(char*));
memset(&sline_115, 0, sizeof(int));
right_value179 = (void*)0;
memset(&word_116, 0, sizeof(char*));
memset(&p_117, 0, sizeof(char*));
memset(&sline_118, 0, sizeof(int));
right_value180 = (void*)0;
memset(&word_119, 0, sizeof(char*));
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&no_comma_121, 0, sizeof(_Bool));
right_value183 = (void*)0;
memset(&node_122, 0, sizeof(struct sNode*));
memset(&p_123, 0, sizeof(char*));
memset(&sline_124, 0, sizeof(int));
right_value184 = (void*)0;
memset(&word_125, 0, sizeof(char*));
right_value185 = (void*)0;
memset(&node_126, 0, sizeof(struct sNode*));
right_value189 = (void*)0;
right_value190 = (void*)0;
    # 790 "05function4.c"
    result_type_108=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(base_type_name))));
    come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 794 "05function4.c"
    # 791 "05function4.c"
    if(_if_conditional258=!first,    _if_conditional258) {
        # 792 "05function4.c"
        result_type_108->mPointerNum=0;
    }
    # 794 "05function4.c"
    var_name_109=((void*)0);
    # 816 "05function4.c"
    {
        # 797 "05function4.c"
        p_110=info->p;
        # 798 "05function4.c"
        sline_111=info->sline;
        # 814 "05function4.c"
        # 800 "05function4.c"
        if(_if_conditional259=xisalpha(*info->p)||*info->p==95,        _if_conditional259) {
            # 801 "05function4.c"
            word_112=(char*)come_increment_ref_count(((char*)(right_value178=parse_word(info))));
            right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 809 "05function4.c"
            # 803 "05function4.c"
            if(_if_conditional260=string_operator_equals(word_112,"const")||string_operator_equals(word_112,"__restrict")||string_operator_equals(word_112,"restrict")||string_operator_equals(word_112,"__user")||string_operator_equals(word_112,"volatile")||string_operator_equals(word_112,"_Nonnull")||string_operator_equals(word_112,"_Nullable")||string_operator_equals(word_112,"_Null_unspecified")||string_operator_equals(word_112,"__user")||string_operator_equals(word_112,"_Addr"),            _if_conditional260) {
            }
            else {
                # 806 "05function4.c"
                info->p=p_110;
                # 807 "05function4.c"
                info->sline=sline_111;
            }
            word_112 = come_decrement_ref_count2(word_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 811 "05function4.c"
            info->p=p_110;
            # 812 "05function4.c"
            info->sline=sline_111;
        }
    }
    # 816 "05function4.c"
    between_brace_113=(_Bool)0;
    # 845 "05function4.c"
    {
        # 818 "05function4.c"
        p_114=info->p;
        # 819 "05function4.c"
        sline_115=info->sline;
        # 841 "05function4.c"
        # 821 "05function4.c"
        if(_if_conditional261=*info->p==40,        _if_conditional261) {
            # 822 "05function4.c"
            info->p++;
            # 823 "05function4.c"
            skip_spaces_and_lf(info);
            # 839 "05function4.c"
            # 825 "05function4.c"
            if(_if_conditional262=xisalpha(*info->p)||*info->p==95,            _if_conditional262) {
                # 826 "05function4.c"
                word_116=(char*)come_increment_ref_count(((char*)(right_value179=parse_word(info))));
                right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 838 "05function4.c"
                # 828 "05function4.c"
                if(_if_conditional263=is_type_name(word_116,info),                _if_conditional263) {
                }
                else {
                    # 838 "05function4.c"
                    # 830 "05function4.c"
                    if(_if_conditional264=*info->p==41,                    _if_conditional264) {
                        # 831 "05function4.c"
                        info->p++;
                        # 832 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 837 "05function4.c"
                        # 834 "05function4.c"
                        if(_if_conditional265=*info->p!=40,                        _if_conditional265) {
                            # 835 "05function4.c"
                            between_brace_113=(_Bool)1;
                        }
                    }
                }
                word_116 = come_decrement_ref_count2(word_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 841 "05function4.c"
        info->p=p_114;
        # 842 "05function4.c"
        info->sline=sline_115;
    }
    # 845 "05function4.c"
    parse_sharp_v5(info);
    # 872 "05function4.c"
    while(_while_condtional24=*info->p==42,    _while_condtional24) {
        # 847 "05function4.c"
        info->p++;
        # 848 "05function4.c"
        skip_spaces_and_lf(info);
        # 870 "05function4.c"
        {
            # 851 "05function4.c"
            p_117=info->p;
            # 852 "05function4.c"
            sline_118=info->sline;
            # 868 "05function4.c"
            # 854 "05function4.c"
            if(_if_conditional266=xisalpha(*info->p)||*info->p==95,            _if_conditional266) {
                # 855 "05function4.c"
                word_119=(char*)come_increment_ref_count(((char*)(right_value180=parse_word(info))));
                right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 863 "05function4.c"
                # 857 "05function4.c"
                if(_if_conditional267=string_operator_equals(word_119,"const")||string_operator_equals(word_119,"__restrict")||string_operator_equals(word_119,"restrict")||string_operator_equals(word_119,"__user")||string_operator_equals(word_119,"volatile")||string_operator_equals(word_119,"_Nonnull")||string_operator_equals(word_119,"_Nullable")||string_operator_equals(word_119,"_Null_unspecified")||string_operator_equals(word_119,"__user")||string_operator_equals(word_119,"_Addr"),                _if_conditional267) {
                }
                else {
                    # 860 "05function4.c"
                    info->p=p_117;
                    # 861 "05function4.c"
                    info->sline=sline_118;
                }
                word_119 = come_decrement_ref_count2(word_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 865 "05function4.c"
                info->p=p_117;
                # 866 "05function4.c"
                info->sline=sline_118;
            }
        }
        # 870 "05function4.c"
        result_type_108->mPointerNum++;
    }
    # 872 "05function4.c"
    parse_sharp_v5(info);
    # 879 "05function4.c"
    # 874 "05function4.c"
    if(_if_conditional268=between_brace_113&&*info->p==40,    _if_conditional268) {
        # 875 "05function4.c"
        info->p++;
        # 876 "05function4.c"
        skip_spaces_and_lf(info);
    }
    # 888 "05function4.c"
    # 879 "05function4.c"
    if(_if_conditional269=xisalnum(*info->p)||*info->p==95,    _if_conditional269) {
        # 880 "05function4.c"
        __dec_obj69=var_name_109;
        var_name_109=(char*)come_increment_ref_count(((char*)(right_value181=parse_word(info))));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 883 "05function4.c"
        # 884 "05function4.c"
        num_anonymous_var_name_120++;
        # 885 "05function4.c"
        __dec_obj70=var_name_109;
        var_name_109=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_120))));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 893 "05function4.c"
    # 888 "05function4.c"
    if(_if_conditional270=between_brace_113&&*info->p==41,    _if_conditional270) {
        # 889 "05function4.c"
        info->p++;
        # 890 "05function4.c"
        skip_spaces_and_lf(info);
    }
    # 905 "05function4.c"
    # 893 "05function4.c"
    if(_if_conditional271=*info->p==58,    _if_conditional271) {
        # 894 "05function4.c"
        info->p++;
        # 895 "05function4.c"
        skip_spaces_and_lf(info);
        # 897 "05function4.c"
        no_comma_121=info->no_comma;
        # 898 "05function4.c"
        info->no_comma=(_Bool)1;
        # 899 "05function4.c"
        node_122=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value183=expression_v13(info))));
        if(right_value183) { right_value183 = come_decrement_ref_count2(right_value183, ((struct sNode*)right_value183)->finalize, ((struct sNode*)right_value183)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 900 "05function4.c"
        info->no_comma=no_comma_121;
        # 902 "05function4.c"
        __dec_obj71=result_type_108->mSizeNum;
        result_type_108->mSizeNum=(struct sNode*)come_increment_ref_count(node_122);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_122) { node_122 = come_decrement_ref_count2(node_122, ((struct sNode*)node_122)->finalize, ((struct sNode*)node_122)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 946 "05function4.c"
    while(_while_condtional25=*info->p==91,    _while_condtional25) {
        # 906 "05function4.c"
        info->p++;
        # 907 "05function4.c"
        skip_spaces_and_lf(info);
        # 908 "05function4.c"
        parse_sharp_v5(info);
        # 930 "05function4.c"
        {
            # 911 "05function4.c"
            p_123=info->p;
            # 912 "05function4.c"
            sline_124=info->sline;
            # 928 "05function4.c"
            # 914 "05function4.c"
            if(_if_conditional272=xisalpha(*info->p)||*info->p==95,            _if_conditional272) {
                # 915 "05function4.c"
                word_125=(char*)come_increment_ref_count(((char*)(right_value184=parse_word(info))));
                right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 923 "05function4.c"
                # 917 "05function4.c"
                if(_if_conditional273=string_operator_equals(word_125,"const")||string_operator_equals(word_125,"__restrict")||string_operator_equals(word_125,"restrict")||string_operator_equals(word_125,"__user")||string_operator_equals(word_125,"volatile")||string_operator_equals(word_125,"_Nonnull")||string_operator_equals(word_125,"_Nullable")||string_operator_equals(word_125,"_Null_unspecified")||string_operator_equals(word_125,"__user")||string_operator_equals(word_125,"_Addr"),                _if_conditional273) {
                }
                else {
                    # 920 "05function4.c"
                    info->p=p_123;
                    # 921 "05function4.c"
                    info->sline=sline_124;
                }
                word_125 = come_decrement_ref_count2(word_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 925 "05function4.c"
                info->p=p_123;
                # 926 "05function4.c"
                info->sline=sline_124;
            }
        }
        # 937 "05function4.c"
        # 930 "05function4.c"
        if(_if_conditional274=*info->p==93,        _if_conditional274) {
            # 931 "05function4.c"
            info->p++;
            # 932 "05function4.c"
            skip_spaces_and_lf(info);
            # 934 "05function4.c"
            result_type_108->mPointerNum++;
            # 935 "05function4.c"
            break;
        }
        # 937 "05function4.c"
        parse_sharp_v5(info);
        # 939 "05function4.c"
        node_126=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=expression_v13(info))));
        if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 940 "05function4.c"
        list$1sNodeph_push_back(result_type_108->mArrayNum,(struct sNode*)come_increment_ref_count(node_126));
        # 941 "05function4.c"
        parse_sharp_v5(info);
        # 943 "05function4.c"
        expected_next_character(93,info);
        if(node_126) { node_126 = come_decrement_ref_count2(node_126, ((struct sNode*)node_126)->finalize, ((struct sNode*)node_126)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 946 "05function4.c"
    __result105__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value190=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value189=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 946, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_108),(char*)come_increment_ref_count(var_name_109))));
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_109 = come_decrement_ref_count2(var_name_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result105__;
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_109 = come_decrement_ref_count2(var_name_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional275;
void* right_value186;
struct list_item$1sNodeph* litem_127;
struct sNode* __dec_obj72;
_Bool _if_conditional276;
void* right_value187;
struct list_item$1sNodeph* litem_128;
struct sNode* __dec_obj73;
void* right_value188;
struct list_item$1sNodeph* litem_129;
struct sNode* __dec_obj74;
struct list$1sNodeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1sNodeph*));
right_value187 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1sNodeph*));
right_value188 = (void*)0;
memset(&litem_129, 0, sizeof(struct list_item$1sNodeph*));
            # 256 "./comelang2.h"
            # 225 "./comelang2.h"
            if(_if_conditional275=self->len==0,            _if_conditional275) {
                # 226 "./comelang2.h"
                litem_127=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value186=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226, "list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "./comelang2.h"
                litem_127->prev=((void*)0);
                # 229 "./comelang2.h"
                litem_127->next=((void*)0);
                # 230 "./comelang2.h"
                __dec_obj72=litem_127->item;
                litem_127->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
                # 232 "./comelang2.h"
                self->tail=litem_127;
                # 233 "./comelang2.h"
                self->head=litem_127;
            }
            else {
                # 256 "./comelang2.h"
                # 235 "./comelang2.h"
                if(_if_conditional276=self->len==1,                _if_conditional276) {
                    # 236 "./comelang2.h"
                    litem_128=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value187=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 236, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 238 "./comelang2.h"
                    litem_128->prev=self->head;
                    # 239 "./comelang2.h"
                    litem_128->next=((void*)0);
                    # 240 "./comelang2.h"
                    __dec_obj73=litem_128->item;
                    litem_128->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
                    # 242 "./comelang2.h"
                    self->tail=litem_128;
                    # 243 "./comelang2.h"
                    self->head->next=litem_128;
                }
                else {
                    # 246 "./comelang2.h"
                    litem_129=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value188=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 246, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 248 "./comelang2.h"
                    litem_129->prev=self->tail;
                    # 249 "./comelang2.h"
                    litem_129->next=((void*)0);
                    # 250 "./comelang2.h"
                    __dec_obj74=litem_129->item;
                    litem_129->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); }
                    # 252 "./comelang2.h"
                    self->tail->next=litem_129;
                    # 253 "./comelang2.h"
                    self->tail=litem_129;
                }
            }
            # 256 "./comelang2.h"
            self->len++;
            # 258 "./comelang2.h"
            __result103__ = __result_obj__ = self;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result103__;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj75;
char* __dec_obj76;
struct tuple2$2sTypephcharph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1768 "./comelang2.h"
        __dec_obj75=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1769 "./comelang2.h"
        __dec_obj76=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1771 "./comelang2.h"
        __result104__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result104__;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional277;
_Bool _if_conditional278;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2sTypephcharphp_finalize"
            # 0 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional277=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional277) {
                # 0 "tuple2$2sTypephcharphp_finalize"
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple2$2sTypephcharphp_finalize"
            # 1 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional278=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional278) {
                # 1 "tuple2$2sTypephcharphp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
char* p_130;
int sline_131;
_Bool _if_conditional279;
void* right_value191;
char* word_132;
_Bool _if_conditional280;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_130, 0, sizeof(char*));
memset(&sline_131, 0, sizeof(int));
right_value191 = (void*)0;
memset(&word_132, 0, sizeof(char*));
    # 951 "05function4.c"
    p_130=info->p;
    # 952 "05function4.c"
    sline_131=info->sline;
    # 968 "05function4.c"
    # 954 "05function4.c"
    if(_if_conditional279=xisalpha(*info->p)||*info->p==95,    _if_conditional279) {
        # 955 "05function4.c"
        word_132=(char*)come_increment_ref_count(((char*)(right_value191=parse_word(info))));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 963 "05function4.c"
        # 957 "05function4.c"
        if(_if_conditional280=string_operator_equals(word_132,"const")||string_operator_equals(word_132,"__restrict")||string_operator_equals(word_132,"restrict")||string_operator_equals(word_132,"__user")||string_operator_equals(word_132,"volatile")||string_operator_equals(word_132,"_Nonnull")||string_operator_equals(word_132,"_Nullable")||string_operator_equals(word_132,"_Null_unspecified")||string_operator_equals(word_132,"__user")||string_operator_equals(word_132,"_Addr"),        _if_conditional280) {
        }
        else {
            # 960 "05function4.c"
            info->p=p_130;
            # 961 "05function4.c"
            info->sline=sline_131;
        }
        word_132 = come_decrement_ref_count2(word_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 965 "05function4.c"
        info->p=p_130;
        # 966 "05function4.c"
        info->sline=sline_131;
    }
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__;
char* head_133;
int head_sline_134;
void* right_value192;
char* type_name_135;
_Bool _while_condtional26;
void* right_value193;
char* __dec_obj77;
_Bool constant_136;
_Bool static__137;
_Bool volatile__138;
_Bool register__139;
_Bool unsigned__140;
_Bool long__141;
_Bool long_long_142;
_Bool short__143;
_Bool restrict__144;
_Bool struct__145;
_Bool union__146;
_Bool enum__147;
_Bool no_heap_148;
_Bool extern__149;
_Bool inline__150;
_Bool come_mem_core__151;
struct sNode* alignas__152;
_Bool anonymous_type_153;
_Bool anonymous_name_154;
_Bool _while_condtional27;
_Bool _if_conditional281;
_Bool _if_conditional282;
char* p_155;
int sline_156;
void* right_value194;
_Bool _if_conditional283;
void* right_value195;
char* __dec_obj78;
void* right_value196;
char* __dec_obj79;
void* right_value197;
char* __dec_obj80;
_Bool _if_conditional284;
char* p_157;
int sline_158;
_Bool _while_condtional28;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value198;
void* right_value199;
struct tuple3$3sTypephcharphbool* __result107__;
_Bool _if_conditional288;
char* p_159;
int sline_160;
void* right_value200;
_Bool _if_conditional289;
void* right_value201;
void* right_value202;
struct tuple3$3sTypephcharphbool* __result108__;
_Bool _if_conditional290;
_Bool _if_conditional291;
char* p_161;
int sline_162;
void* right_value203;
_Bool _if_conditional292;
void* right_value204;
char* __dec_obj83;
void* right_value205;
char* __dec_obj84;
void* right_value206;
char* __dec_obj85;
_Bool _if_conditional293;
char* p_163;
int sline_164;
void* right_value207;
_Bool _if_conditional294;
void* right_value208;
void* right_value209;
struct tuple3$3sTypephcharphbool* __result109__;
_Bool _if_conditional295;
_Bool _if_conditional296;
char* p_165;
int sline_166;
void* right_value210;
_Bool _if_conditional297;
void* right_value211;
void* right_value212;
struct tuple3$3sTypephcharphbool* __result110__;
void* right_value213;
char* __dec_obj86;
void* right_value214;
char* __dec_obj87;
_Bool _if_conditional298;
char* p_167;
int sline_168;
void* right_value215;
_Bool _if_conditional299;
void* right_value216;
void* right_value217;
struct tuple3$3sTypephcharphbool* __result111__;
_Bool _if_conditional300;
void* right_value218;
struct sNode* exp_169;
struct sNode* __dec_obj88;
void* right_value219;
char* __dec_obj89;
_Bool _if_conditional301;
void* right_value220;
char* __dec_obj90;
_Bool _if_conditional302;
void* right_value221;
char* __dec_obj91;
_Bool _if_conditional303;
void* right_value222;
char* __dec_obj92;
_Bool _if_conditional304;
void* right_value223;
char* __dec_obj93;
_Bool _if_conditional305;
void* right_value224;
char* __dec_obj94;
_Bool _if_conditional306;
void* right_value225;
char* __dec_obj95;
_Bool _if_conditional307;
void* right_value226;
char* __dec_obj96;
_Bool _if_conditional308;
char* p_170;
int sline_171;
_Bool _if_conditional309;
void* right_value227;
char* __dec_obj97;
void* right_value228;
char* __dec_obj98;
_Bool _if_conditional310;
void* right_value229;
char* __dec_obj99;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value230;
char* __dec_obj100;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value231;
char* __dec_obj101;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value232;
char* __dec_obj102;
_Bool _if_conditional318;
_Bool _if_conditional319;
char* p_172;
int sline_173;
void* right_value233;
char* __dec_obj103;
_Bool _if_conditional320;
_Bool _if_conditional321;
char* p_174;
int sline_175;
void* right_value234;
char* __dec_obj104;
_Bool _if_conditional322;
void* right_value235;
char* __dec_obj105;
void* right_value236;
char* __dec_obj106;
_Bool _if_conditional323;
_Bool _if_conditional324;
char* p_176;
int sline_177;
void* right_value237;
char* __dec_obj107;
_Bool _if_conditional325;
void* right_value238;
char* __dec_obj108;
void* right_value239;
char* __dec_obj109;
_Bool _if_conditional326;
void* right_value240;
char* __dec_obj110;
void* right_value241;
char* __dec_obj111;
_Bool _if_conditional327;
void* right_value242;
char* __dec_obj112;
_Bool _if_conditional328;
void* right_value243;
char* __dec_obj113;
_Bool _if_conditional329;
void* right_value244;
char* __dec_obj114;
_Bool _if_conditional330;
void* right_value245;
char* __dec_obj115;
_Bool _if_conditional331;
void* right_value246;
char* __dec_obj116;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
char* p_178;
int sline_179;
void* right_value247;
char* __dec_obj117;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value248;
char* __dec_obj118;
int pointer_num_180;
_Bool _while_condtional29;
_Bool heap_181;
_Bool _if_conditional338;
_Bool lambda_flag_182;
char* pX_183;
int slineX_184;
_Bool _if_conditional339;
void* right_value249;
_Bool _if_conditional340;
struct sType* type_185;
char* var_name_186;
_Bool function_pointer_flag_187;
char* p_188;
int sline_189;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional343;
void* right_value250;
char* word_190;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool var_name_between_brace_191;
char* p_192;
int sline_193;
_Bool _if_conditional346;
_Bool _if_conditional347;
void* right_value251;
char* word_194;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
static int anonymous_num_195=0;
_Bool _if_conditional352;
_Bool _if_conditional353;
void* right_value252;
char* __dec_obj119;
void* right_value253;
struct sNode* node_196;
_Bool _if_conditional354;
void* right_value254;
void* right_value255;
struct tuple3$3sTypephcharphbool* __result112__;
int pointer_num_197;
_Bool _while_condtional30;
void* right_value256;
void* right_value257;
struct sType* __dec_obj120;
_Bool _if_conditional355;
_Bool _if_conditional356;
void* right_value258;
char* __dec_obj121;
void* right_value259;
struct sNode* node_198;
_Bool _if_conditional357;
_Bool _if_conditional358;
void* right_value260;
void* right_value261;
struct tuple3$3sTypephcharphbool* __result113__;
void* right_value262;
void* right_value263;
struct sType* __dec_obj122;
_Bool _if_conditional359;
_Bool _if_conditional360;
void* right_value264;
char* __dec_obj123;
void* right_value265;
struct sNode* node_199;
_Bool _if_conditional361;
void* right_value266;
void* right_value267;
struct tuple3$3sTypephcharphbool* __result114__;
int pointer_num_200;
_Bool _while_condtional31;
void* right_value268;
void* right_value269;
struct sType* __dec_obj124;
void* right_value270;
void* right_value271;
struct tuple3$3sTypephcharphbool* __result115__;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
void* right_value272;
char* __dec_obj125;
_Bool _if_conditional365;
static int num_anonymous_var_name_201=0;
void* right_value273;
char* __dec_obj126;
_Bool _if_conditional366;
void* right_value274;
char* __dec_obj127;
static int num_anonymous_var_name_202=0;
void* right_value275;
char* __dec_obj128;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool no_comma_203;
void* right_value276;
struct sNode* node_204;
struct sNode* __dec_obj129;
_Bool _if_conditional369;
struct sType* result_type_205;
_Bool _if_conditional374;
void* right_value277;
struct sType* __dec_obj130;
_Bool _if_conditional380;
int i_214;
_Bool _if_conditional384;
void* right_value278;
void* right_value279;
void* right_value280;
struct sType* __dec_obj131;
_Bool _if_conditional385;
int i_218;
_Bool _if_conditional386;
void* right_value281;
void* right_value282;
void* right_value283;
struct sType* __dec_obj132;
void* right_value284;
void* right_value285;
struct sType* __dec_obj133;
struct sNode* __dec_obj134;
void* right_value286;
char* __dec_obj135;
void* right_value287;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var2;
struct list$1sTypeph* param_types_219;
struct list$1charph* param_names_220;
struct list$1charph* param_default_parametors_221;
_Bool var_args_222;
void* right_value288;
void* right_value289;
struct sType* __dec_obj136;
void* right_value290;
void* right_value291;
struct tuple1$1sTypeph* __dec_obj138;
struct list$1sTypeph* __dec_obj139;
struct list$1charph* __dec_obj140;
_Bool _if_conditional387;
_Bool _if_conditional388;
struct sType* result_type_223;
_Bool _if_conditional389;
void* right_value292;
struct sType* __dec_obj141;
_Bool _if_conditional390;
int i_224;
_Bool _if_conditional391;
void* right_value293;
void* right_value294;
void* right_value295;
struct sType* __dec_obj142;
_Bool _if_conditional392;
int i_225;
_Bool _if_conditional393;
void* right_value296;
void* right_value297;
void* right_value298;
struct sType* __dec_obj143;
void* right_value299;
void* right_value300;
struct sType* __dec_obj144;
struct sNode* __dec_obj145;
_Bool _if_conditional394;
void* right_value301;
char* __dec_obj146;
_Bool _if_conditional395;
void* right_value302;
void* right_value303;
struct tuple3$3sTypephcharphbool* __result134__;
static int num_anonymous_var_name_226=0;
void* right_value304;
char* __dec_obj147;
void* right_value305;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_227;
struct list$1charph* param_names_228;
struct list$1charph* param_default_parametors_229;
_Bool var_args_230;
void* right_value306;
void* right_value307;
struct sType* __dec_obj148;
void* right_value308;
void* right_value309;
struct tuple1$1sTypeph* __dec_obj149;
struct list$1sTypeph* __dec_obj150;
struct list$1charph* __dec_obj151;
_Bool _if_conditional396;
void* right_value310;
struct sNode* exp_231;
_Bool _if_conditional397;
void* right_value311;
void* right_value312;
struct tuple3$3sTypephcharphbool* __result136__;
void* right_value313;
struct CVALUE* come_value_232;
void* right_value314;
struct sType* __dec_obj153;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
void* right_value315;
char* __dec_obj154;
_Bool _if_conditional404;
static int num_anonymous_var_name_233=0;
void* right_value316;
char* __dec_obj155;
_Bool _if_conditional405;
void* right_value317;
char* __dec_obj156;
static int num_anonymous_var_name_234=0;
void* right_value318;
char* __dec_obj157;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool no_comma_235;
void* right_value319;
struct sNode* node_236;
struct sNode* __dec_obj158;
_Bool _if_conditional408;
void* right_value320;
struct sType* __dec_obj159;
void* right_value321;
char* __dec_obj160;
struct sNode* __dec_obj161;
_Bool _if_conditional409;
int i_237;
_Bool _if_conditional410;
void* right_value322;
void* right_value323;
void* right_value324;
struct sType* __dec_obj162;
struct sNode* __dec_obj163;
_Bool _if_conditional411;
int i_238;
_Bool _if_conditional412;
void* right_value325;
void* right_value326;
void* right_value327;
struct sType* __dec_obj164;
struct sNode* __dec_obj165;
_Bool _if_conditional413;
_Bool _if_conditional424;
void* right_value328;
void* right_value329;
struct tuple3$3sTypephcharphbool* __result141__;
void* right_value330;
void* right_value331;
struct sType* __dec_obj166;
_Bool _while_condtional36;
void* right_value332;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* generics_type_244;
char* var_name_245;
_Bool err_246;
_Bool _if_conditional425;
void* right_value333;
void* right_value334;
struct tuple3$3sTypephcharphbool* __result142__;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value335;
void* right_value336;
struct tuple3$3sTypephcharphbool* __result143__;
_Bool _if_conditional428;
void* right_value337;
struct sType* __dec_obj167;
_Bool _if_conditional429;
void* right_value338;
char* new_name_247;
struct sNode* __dec_obj168;
_Bool _if_conditional430;
struct sClass* klass_248;
_Bool _if_conditional431;
void* right_value345;
void* right_value346;
void* right_value347;
void* right_value348;
struct sType* __dec_obj169;
struct sNode* __dec_obj170;
_Bool _while_condtional45;
_Bool _if_conditional479;
_Bool _if_conditional480;
_Bool _if_conditional481;
_Bool _if_conditional482;
_Bool _if_conditional483;
_Bool _if_conditional484;
_Bool _if_conditional485;
_Bool _if_conditional486;
_Bool _while_condtional46;
_Bool _if_conditional487;
_Bool _if_conditional488;
_Bool _if_conditional489;
_Bool _if_conditional490;
void* right_value349;
void* right_value350;
struct list$1sTypeph* types_293;
void* right_value351;
_Bool _while_condtional47;
void* right_value352;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type2_294;
char* name_295;
_Bool err_296;
_Bool _if_conditional491;
void* right_value353;
void* right_value354;
struct tuple3$3sTypephcharphbool* __result168__;
void* right_value355;
int num_tuples_297;
void* right_value356;
void* right_value357;
void* right_value358;
struct sType* __dec_obj171;
struct list$1sTypeph* o2_saved_298;
struct sType* it_299;
void* right_value359;
_Bool _if_conditional492;
void* right_value360;
struct sType* __dec_obj172;
_Bool _if_conditional493;
void* right_value361;
char* new_name_300;
_Bool _if_conditional494;
_Bool _if_conditional495;
_Bool _if_conditional496;
void* right_value362;
char* __dec_obj173;
_Bool _if_conditional497;
static int num_anonymous_var_name_301=0;
void* right_value363;
char* __dec_obj174;
_Bool _if_conditional498;
void* right_value364;
char* __dec_obj175;
static int num_anonymous_var_name_302=0;
void* right_value365;
char* __dec_obj176;
_Bool _if_conditional499;
_Bool _if_conditional500;
_Bool no_comma_303;
void* right_value366;
struct sNode* node_304;
struct sNode* __dec_obj177;
_Bool _while_condtional48;
_Bool _if_conditional501;
void* right_value367;
struct sNode* node_305;
void* right_value368;
char* asm_name_306;
char* __dec_obj178;
void* right_value369;
void* right_value370;
struct tuple3$3sTypephcharphbool* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_133, 0, sizeof(char*));
memset(&head_sline_134, 0, sizeof(int));
right_value192 = (void*)0;
memset(&type_name_135, 0, sizeof(char*));
right_value193 = (void*)0;
memset(&constant_136, 0, sizeof(_Bool));
memset(&static__137, 0, sizeof(_Bool));
memset(&volatile__138, 0, sizeof(_Bool));
memset(&register__139, 0, sizeof(_Bool));
memset(&unsigned__140, 0, sizeof(_Bool));
memset(&long__141, 0, sizeof(_Bool));
memset(&long_long_142, 0, sizeof(_Bool));
memset(&short__143, 0, sizeof(_Bool));
memset(&restrict__144, 0, sizeof(_Bool));
memset(&struct__145, 0, sizeof(_Bool));
memset(&union__146, 0, sizeof(_Bool));
memset(&enum__147, 0, sizeof(_Bool));
memset(&no_heap_148, 0, sizeof(_Bool));
memset(&extern__149, 0, sizeof(_Bool));
memset(&inline__150, 0, sizeof(_Bool));
memset(&come_mem_core__151, 0, sizeof(_Bool));
memset(&alignas__152, 0, sizeof(struct sNode*));
memset(&anonymous_type_153, 0, sizeof(_Bool));
memset(&anonymous_name_154, 0, sizeof(_Bool));
memset(&p_155, 0, sizeof(char*));
memset(&sline_156, 0, sizeof(int));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&p_157, 0, sizeof(char*));
memset(&sline_158, 0, sizeof(int));
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&p_159, 0, sizeof(char*));
memset(&sline_160, 0, sizeof(int));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&p_161, 0, sizeof(char*));
memset(&sline_162, 0, sizeof(int));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&p_163, 0, sizeof(char*));
memset(&sline_164, 0, sizeof(int));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&p_165, 0, sizeof(char*));
memset(&sline_166, 0, sizeof(int));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&p_167, 0, sizeof(char*));
memset(&sline_168, 0, sizeof(int));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&exp_169, 0, sizeof(struct sNode*));
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&p_170, 0, sizeof(char*));
memset(&sline_171, 0, sizeof(int));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&p_172, 0, sizeof(char*));
memset(&sline_173, 0, sizeof(int));
right_value233 = (void*)0;
memset(&p_174, 0, sizeof(char*));
memset(&sline_175, 0, sizeof(int));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&p_176, 0, sizeof(char*));
memset(&sline_177, 0, sizeof(int));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&p_178, 0, sizeof(char*));
memset(&sline_179, 0, sizeof(int));
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&pointer_num_180, 0, sizeof(int));
memset(&heap_181, 0, sizeof(_Bool));
memset(&lambda_flag_182, 0, sizeof(_Bool));
memset(&pX_183, 0, sizeof(char*));
memset(&slineX_184, 0, sizeof(int));
right_value249 = (void*)0;
memset(&type_185, 0, sizeof(struct sType*));
memset(&var_name_186, 0, sizeof(char*));
memset(&function_pointer_flag_187, 0, sizeof(_Bool));
memset(&p_188, 0, sizeof(char*));
memset(&sline_189, 0, sizeof(int));
right_value250 = (void*)0;
memset(&word_190, 0, sizeof(char*));
memset(&var_name_between_brace_191, 0, sizeof(_Bool));
memset(&p_192, 0, sizeof(char*));
memset(&sline_193, 0, sizeof(int));
right_value251 = (void*)0;
memset(&word_194, 0, sizeof(char*));
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&node_196, 0, sizeof(struct sNode*));
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&pointer_num_197, 0, sizeof(int));
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&node_198, 0, sizeof(struct sNode*));
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&node_199, 0, sizeof(struct sNode*));
right_value266 = (void*)0;
right_value267 = (void*)0;
memset(&pointer_num_200, 0, sizeof(int));
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
memset(&no_comma_203, 0, sizeof(_Bool));
right_value276 = (void*)0;
memset(&node_204, 0, sizeof(struct sNode*));
memset(&result_type_205, 0, sizeof(struct sType*));
right_value277 = (void*)0;
memset(&i_214, 0, sizeof(int));
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&i_218, 0, sizeof(int));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&param_types_219, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_220, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_221, 0, sizeof(struct list$1charph*));
memset(&var_args_222, 0, sizeof(_Bool));
memset(&param_types_219, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_220, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_221, 0, sizeof(struct list$1charph*));
memset(&var_args_222, 0, sizeof(_Bool));
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&result_type_223, 0, sizeof(struct sType*));
right_value292 = (void*)0;
memset(&i_224, 0, sizeof(int));
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&i_225, 0, sizeof(int));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&param_types_227, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_228, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_229, 0, sizeof(struct list$1charph*));
memset(&var_args_230, 0, sizeof(_Bool));
memset(&param_types_227, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_228, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_229, 0, sizeof(struct list$1charph*));
memset(&var_args_230, 0, sizeof(_Bool));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&exp_231, 0, sizeof(struct sNode*));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
memset(&come_value_232, 0, sizeof(struct CVALUE*));
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&no_comma_235, 0, sizeof(_Bool));
right_value319 = (void*)0;
memset(&node_236, 0, sizeof(struct sNode*));
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&i_237, 0, sizeof(int));
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&i_238, 0, sizeof(int));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&generics_type_244, 0, sizeof(struct sType*));
memset(&var_name_245, 0, sizeof(char*));
memset(&err_246, 0, sizeof(_Bool));
memset(&generics_type_244, 0, sizeof(struct sType*));
memset(&var_name_245, 0, sizeof(char*));
memset(&err_246, 0, sizeof(_Bool));
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
memset(&new_name_247, 0, sizeof(char*));
memset(&klass_248, 0, sizeof(struct sClass*));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
memset(&types_293, 0, sizeof(struct list$1sTypeph*));
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&type2_294, 0, sizeof(struct sType*));
memset(&name_295, 0, sizeof(char*));
memset(&err_296, 0, sizeof(_Bool));
memset(&type2_294, 0, sizeof(struct sType*));
memset(&name_295, 0, sizeof(char*));
memset(&err_296, 0, sizeof(_Bool));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
memset(&num_tuples_297, 0, sizeof(int));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&o2_saved_298, 0, sizeof(struct list$1sTypeph*));
memset(&it_299, 0, sizeof(struct sType*));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&new_name_300, 0, sizeof(char*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
memset(&no_comma_303, 0, sizeof(_Bool));
right_value366 = (void*)0;
memset(&node_304, 0, sizeof(struct sNode*));
right_value367 = (void*)0;
memset(&node_305, 0, sizeof(struct sNode*));
right_value368 = (void*)0;
memset(&asm_name_306, 0, sizeof(char*));
right_value369 = (void*)0;
right_value370 = (void*)0;
    # 972 "05function4.c"
    head_133=info->p;
    # 973 "05function4.c"
    head_sline_134=info->sline;
    # 974 "05function4.c"
    info->define_struct=(_Bool)0;
    # 976 "05function4.c"
    type_name_135=(char*)come_increment_ref_count(((char*)(right_value192=parse_word(info))));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 981 "05function4.c"
    while(_while_condtional26=string_operator_equals(type_name_135,"__extension__"),    _while_condtional26) {
        # 978 "05function4.c"
        __dec_obj77=type_name_135;
        type_name_135=(char*)come_increment_ref_count(((char*)(right_value193=parse_word(info))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 981 "05function4.c"
    constant_136=(_Bool)0;
    # 982 "05function4.c"
    static__137=(_Bool)0;
    # 983 "05function4.c"
    volatile__138=(_Bool)0;
    # 984 "05function4.c"
    register__139=(_Bool)0;
    # 985 "05function4.c"
    unsigned__140=(_Bool)0;
    # 986 "05function4.c"
    long__141=(_Bool)0;
    # 987 "05function4.c"
    long_long_142=(_Bool)0;
    # 988 "05function4.c"
    short__143=(_Bool)0;
    # 989 "05function4.c"
    restrict__144=(_Bool)0;
    # 990 "05function4.c"
    struct__145=(_Bool)0;
    # 991 "05function4.c"
    union__146=(_Bool)0;
    # 992 "05function4.c"
    enum__147=(_Bool)0;
    # 993 "05function4.c"
    no_heap_148=(_Bool)0;
    # 994 "05function4.c"
    extern__149=(_Bool)0;
    # 995 "05function4.c"
    inline__150=(_Bool)0;
    # 996 "05function4.c"
    come_mem_core__151=(_Bool)0;
    # 998 "05function4.c"
    alignas__152=((void*)0);
    # 1000 "05function4.c"
    anonymous_type_153=(_Bool)0;
    # 1001 "05function4.c"
    anonymous_name_154=(_Bool)0;
    # 1435 "05function4.c"
    while(_while_condtional27=(_Bool)1,    _while_condtional27) {
        # 1433 "05function4.c"
        # 1004 "05function4.c"
        if(_if_conditional281=string_operator_equals(type_name_135,"struct"),        _if_conditional281) {
            # 1005 "05function4.c"
            struct__145=(_Bool)1;
            # 1030 "05function4.c"
            # 1007 "05function4.c"
            if(_if_conditional282=*info->p==123,            _if_conditional282) {
                # 1008 "05function4.c"
                p_155=info->p;
                # 1009 "05function4.c"
                sline_156=info->sline;
                # 1011 "05function4.c"
                ((char*)(right_value194=skip_block(info)));
                right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1028 "05function4.c"
                # 1013 "05function4.c"
                if(_if_conditional283=*info->p==59,                _if_conditional283) {
                    # 1014 "05function4.c"
                    anonymous_name_154=(_Bool)1;
                    # 1015 "05function4.c"
                    anonymous_type_153=(_Bool)1;
                    # 1016 "05function4.c"
                    __dec_obj78=type_name_135;
                    type_name_135=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(""))));
                    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1017 "05function4.c"
                    info->p=p_155;
                    # 1018 "05function4.c"
                    info->sline=sline_156;
                    # 1019 "05function4.c"
                    break;
                }
                else {
                    # 1022 "05function4.c"
                    anonymous_type_153=(_Bool)1;
                    # 1023 "05function4.c"
                    __dec_obj79=type_name_135;
                    type_name_135=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(""))));
                    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1024 "05function4.c"
                    info->p=p_155;
                    # 1025 "05function4.c"
                    info->sline=sline_156;
                    # 1026 "05function4.c"
                    break;
                }
            }
            # 1030 "05function4.c"
            parse_sharp_v5(info);
            # 1032 "05function4.c"
            __dec_obj80=type_name_135;
            type_name_135=(char*)come_increment_ref_count(((char*)(right_value197=parse_word(info))));
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1034 "05function4.c"
            parse_sharp_v5(info);
            # 1066 "05function4.c"
            # 1036 "05function4.c"
            if(_if_conditional284=*info->p==60,            _if_conditional284) {
                # 1037 "05function4.c"
                p_157=info->p;
                # 1038 "05function4.c"
                sline_158=info->sline;
                # 1040 "05function4.c"
                info->p++;
                # 1041 "05function4.c"
                skip_spaces_and_lf(info);
                # 1064 "05function4.c"
                while(_while_condtional28=(_Bool)1,                _while_condtional28) {
                    # 1063 "05function4.c"
                    # 1044 "05function4.c"
                    if(_if_conditional285=*info->p==62,                    _if_conditional285) {
                        # 1045 "05function4.c"
                        info->p++;
                        # 1046 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1054 "05function4.c"
                        # 1048 "05function4.c"
                        if(_if_conditional286=*info->p==123,                        _if_conditional286) {
                        }
                        else {
                            # 1051 "05function4.c"
                            info->p=p_157;
                            # 1052 "05function4.c"
                            info->sline=sline_158;
                        }
                        # 1054 "05function4.c"
                        break;
                    }
                    else {
                        # 1063 "05function4.c"
                        # 1056 "05function4.c"
                        if(_if_conditional287=*info->p==0,                        _if_conditional287) {
                            # 1057 "05function4.c"
                            err_msg(info,"invalid struct definition");
                            # 1058 "05function4.c"
                            __result107__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value199=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value198=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1058, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result107__;
                        }
                        else {
                            # 1061 "05function4.c"
                            info->p++;
                        }
                    }
                }
            }
            # 1085 "05function4.c"
            # 1066 "05function4.c"
            if(_if_conditional288=*info->p==123,            _if_conditional288) {
                # 1067 "05function4.c"
                p_159=info->p;
                # 1068 "05function4.c"
                sline_160=info->sline;
                # 1070 "05function4.c"
                ((char*)(right_value200=skip_block(info)));
                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1084 "05function4.c"
                # 1072 "05function4.c"
                if(_if_conditional289=*info->p==59,                _if_conditional289) {
                    # 1073 "05function4.c"
                    info->p=head_133;
                    # 1074 "05function4.c"
                    info->sline=head_sline_134;
                    # 1075 "05function4.c"
                    info->define_struct=(_Bool)1;
                    # 1076 "05function4.c"
                    __result108__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value202=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value201=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1076, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result108__;
                }
                else {
                    # 1079 "05function4.c"
                    anonymous_type_153=(_Bool)1;
                    # 1080 "05function4.c"
                    info->p=p_159;
                    # 1081 "05function4.c"
                    info->sline=sline_160;
                    # 1082 "05function4.c"
                    break;
                }
            }
        }
        else {
            # 1433 "05function4.c"
            # 1086 "05function4.c"
            if(_if_conditional290=string_operator_equals(type_name_135,"union"),            _if_conditional290) {
                # 1087 "05function4.c"
                union__146=(_Bool)1;
                # 1115 "05function4.c"
                # 1089 "05function4.c"
                if(_if_conditional291=*info->p==123,                _if_conditional291) {
                    # 1090 "05function4.c"
                    p_161=info->p;
                    # 1091 "05function4.c"
                    sline_162=info->sline;
                    # 1093 "05function4.c"
                    ((char*)(right_value203=skip_block(info)));
                    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1113 "05function4.c"
                    # 1095 "05function4.c"
                    if(_if_conditional292=*info->p==59,                    _if_conditional292) {
                        # 1096 "05function4.c"
                        info->p=head_133;
                        # 1097 "05function4.c"
                        info->sline=head_sline_134;
                        # 1099 "05function4.c"
                        info->define_struct=(_Bool)0;
                        # 1100 "05function4.c"
                        anonymous_type_153=(_Bool)1;
                        # 1101 "05function4.c"
                        __dec_obj83=type_name_135;
                        type_name_135=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(""))));
                        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1102 "05function4.c"
                        info->p=p_161;
                        # 1103 "05function4.c"
                        info->sline=sline_162;
                        # 1104 "05function4.c"
                        break;
                    }
                    else {
                        # 1107 "05function4.c"
                        anonymous_type_153=(_Bool)1;
                        # 1108 "05function4.c"
                        __dec_obj84=type_name_135;
                        type_name_135=(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string(""))));
                        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1109 "05function4.c"
                        info->p=p_161;
                        # 1110 "05function4.c"
                        info->sline=sline_162;
                        # 1111 "05function4.c"
                        break;
                    }
                }
                # 1115 "05function4.c"
                parse_sharp_v5(info);
                # 1117 "05function4.c"
                __dec_obj85=type_name_135;
                type_name_135=(char*)come_increment_ref_count(((char*)(right_value206=parse_word(info))));
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1119 "05function4.c"
                parse_sharp_v5(info);
                # 1140 "05function4.c"
                # 1121 "05function4.c"
                if(_if_conditional293=*info->p==123,                _if_conditional293) {
                    # 1122 "05function4.c"
                    p_163=info->p;
                    # 1123 "05function4.c"
                    sline_164=info->sline;
                    # 1125 "05function4.c"
                    ((char*)(right_value207=skip_block(info)));
                    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1139 "05function4.c"
                    # 1127 "05function4.c"
                    if(_if_conditional294=*info->p==59,                    _if_conditional294) {
                        # 1128 "05function4.c"
                        info->p=head_133;
                        # 1129 "05function4.c"
                        info->sline=head_sline_134;
                        # 1130 "05function4.c"
                        info->define_struct=(_Bool)1;
                        # 1131 "05function4.c"
                        __result109__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value209=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value208=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1131, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result109__;
                    }
                    else {
                        # 1134 "05function4.c"
                        anonymous_type_153=(_Bool)1;
                        # 1135 "05function4.c"
                        info->p=p_163;
                        # 1136 "05function4.c"
                        info->sline=sline_164;
                        # 1137 "05function4.c"
                        break;
                    }
                }
            }
            else {
                # 1433 "05function4.c"
                # 1141 "05function4.c"
                if(_if_conditional295=string_operator_equals(type_name_135,"enum"),                _if_conditional295) {
                    # 1142 "05function4.c"
                    enum__147=(_Bool)1;
                    # 1144 "05function4.c"
                    parse_sharp_v5(info);
                    # 1167 "05function4.c"
                    # 1146 "05function4.c"
                    if(_if_conditional296=*info->p==123,                    _if_conditional296) {
                        # 1147 "05function4.c"
                        p_165=info->p;
                        # 1148 "05function4.c"
                        sline_166=info->sline;
                        # 1150 "05function4.c"
                        ((char*)(right_value210=skip_block(info)));
                        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1165 "05function4.c"
                        # 1152 "05function4.c"
                        if(_if_conditional297=*info->p==59,                        _if_conditional297) {
                            # 1153 "05function4.c"
                            info->p=head_133;
                            # 1154 "05function4.c"
                            info->sline=head_sline_134;
                            # 1155 "05function4.c"
                            info->define_struct=(_Bool)1;
                            # 1156 "05function4.c"
                            __result110__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value212=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value211=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1156, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result110__;
                        }
                        else {
                            # 1159 "05function4.c"
                            anonymous_type_153=(_Bool)1;
                            # 1160 "05function4.c"
                            __dec_obj86=type_name_135;
                            type_name_135=(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string(""))));
                            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1161 "05function4.c"
                            info->p=p_165;
                            # 1162 "05function4.c"
                            info->sline=sline_166;
                            # 1163 "05function4.c"
                            break;
                        }
                    }
                    # 1167 "05function4.c"
                    parse_sharp_v5(info);
                    # 1169 "05function4.c"
                    __dec_obj87=type_name_135;
                    type_name_135=(char*)come_increment_ref_count(((char*)(right_value214=parse_word(info))));
                    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1171 "05function4.c"
                    parse_sharp_v5(info);
                    # 1192 "05function4.c"
                    # 1173 "05function4.c"
                    if(_if_conditional298=*info->p==123,                    _if_conditional298) {
                        # 1174 "05function4.c"
                        p_167=info->p;
                        # 1175 "05function4.c"
                        sline_168=info->sline;
                        # 1177 "05function4.c"
                        ((char*)(right_value215=skip_block(info)));
                        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1191 "05function4.c"
                        # 1179 "05function4.c"
                        if(_if_conditional299=*info->p==59,                        _if_conditional299) {
                            # 1180 "05function4.c"
                            info->p=head_133;
                            # 1181 "05function4.c"
                            info->sline=head_sline_134;
                            # 1182 "05function4.c"
                            info->define_struct=(_Bool)1;
                            # 1183 "05function4.c"
                            __result111__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value217=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value216=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1183, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result111__;
                        }
                        else {
                            # 1186 "05function4.c"
                            anonymous_type_153=(_Bool)1;
                            # 1187 "05function4.c"
                            info->p=p_167;
                            # 1188 "05function4.c"
                            info->sline=sline_168;
                            # 1189 "05function4.c"
                            break;
                        }
                    }
                }
                else {
                    # 1433 "05function4.c"
                    # 1193 "05function4.c"
                    if(_if_conditional300=string_operator_equals(type_name_135,"_Alignas"),                    _if_conditional300) {
                        # 1194 "05function4.c"
                        expected_next_character(40,info);
                        # 1196 "05function4.c"
                        exp_169=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=expression_v13(info))));
                        if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1198 "05function4.c"
                        __dec_obj88=alignas__152;
                        alignas__152=(struct sNode*)come_increment_ref_count(exp_169);
                        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1200 "05function4.c"
                        expected_next_character(41,info);
                        # 1202 "05function4.c"
                        __dec_obj89=type_name_135;
                        type_name_135=(char*)come_increment_ref_count(((char*)(right_value219=parse_word(info))));
                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(exp_169) { exp_169 = come_decrement_ref_count2(exp_169, ((struct sNode*)exp_169)->finalize, ((struct sNode*)exp_169)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1433 "05function4.c"
                        # 1204 "05function4.c"
                        if(_if_conditional301=string_operator_equals(type_name_135,"const"),                        _if_conditional301) {
                            # 1205 "05function4.c"
                            constant_136=(_Bool)1;
                            # 1207 "05function4.c"
                            __dec_obj90=type_name_135;
                            type_name_135=(char*)come_increment_ref_count(((char*)(right_value220=parse_word(info))));
                            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1433 "05function4.c"
                            # 1209 "05function4.c"
                            if(_if_conditional302=string_operator_equals(type_name_135,"static"),                            _if_conditional302) {
                                # 1210 "05function4.c"
                                static__137=(_Bool)1;
                                # 1212 "05function4.c"
                                __dec_obj91=type_name_135;
                                type_name_135=(char*)come_increment_ref_count(((char*)(right_value221=parse_word(info))));
                                __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 1433 "05function4.c"
                                # 1214 "05function4.c"
                                if(_if_conditional303=string_operator_equals(type_name_135,"come_mem_core"),                                _if_conditional303) {
                                    # 1215 "05function4.c"
                                    come_mem_core__151=(_Bool)1;
                                    # 1217 "05function4.c"
                                    __dec_obj92=type_name_135;
                                    type_name_135=(char*)come_increment_ref_count(((char*)(right_value222=parse_word(info))));
                                    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1433 "05function4.c"
                                    # 1219 "05function4.c"
                                    if(_if_conditional304=string_operator_equals(type_name_135,"extern"),                                    _if_conditional304) {
                                        # 1220 "05function4.c"
                                        extern__149=(_Bool)1;
                                        # 1222 "05function4.c"
                                        __dec_obj93=type_name_135;
                                        type_name_135=(char*)come_increment_ref_count(((char*)(right_value223=parse_word(info))));
                                        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 1433 "05function4.c"
                                        # 1224 "05function4.c"
                                        if(_if_conditional305=string_operator_equals(type_name_135,"_Noreturn"),                                        _if_conditional305) {
                                            # 1225 "05function4.c"
                                            __dec_obj94=type_name_135;
                                            type_name_135=(char*)come_increment_ref_count(((char*)(right_value224=parse_word(info))));
                                            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 1433 "05function4.c"
                                            # 1227 "05function4.c"
                                            if(_if_conditional306=string_operator_equals(type_name_135,"inline")||string_operator_equals(type_name_135,"__inline")||string_operator_equals(type_name_135,"__inline__")||string_operator_equals(type_name_135,"__always_inline"),                                            _if_conditional306) {
                                                # 1228 "05function4.c"
                                                inline__150=(_Bool)1;
                                                # 1230 "05function4.c"
                                                __dec_obj95=type_name_135;
                                                type_name_135=(char*)come_increment_ref_count(((char*)(right_value225=parse_word(info))));
                                                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                # 1433 "05function4.c"
                                                # 1232 "05function4.c"
                                                if(_if_conditional307=string_operator_equals(type_name_135,"volatile"),                                                _if_conditional307) {
                                                    # 1233 "05function4.c"
                                                    volatile__138=(_Bool)1;
                                                    # 1235 "05function4.c"
                                                    __dec_obj96=type_name_135;
                                                    type_name_135=(char*)come_increment_ref_count(((char*)(right_value226=parse_word(info))));
                                                    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    # 1433 "05function4.c"
                                                    # 1237 "05function4.c"
                                                    if(_if_conditional308=string_operator_equals(type_name_135,"long"),                                                    _if_conditional308) {
                                                        # 1304 "05function4.c"
                                                        {
                                                            # 1240 "05function4.c"
                                                            p_170=info->p;
                                                            # 1241 "05function4.c"
                                                            sline_171=info->sline;
                                                            # 1303 "05function4.c"
                                                            # 1243 "05function4.c"
                                                            if(_if_conditional309=!xisalpha(*info->p),                                                            _if_conditional309) {
                                                                # 1244 "05function4.c"
                                                                info->p=p_170;
                                                                # 1245 "05function4.c"
                                                                info->sline=sline_171;
                                                                # 1247 "05function4.c"
                                                                __dec_obj97=type_name_135;
                                                                type_name_135=(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string("long"))));
                                                                __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 1248 "05function4.c"
                                                                break;
                                                            }
                                                            else {
                                                                # 1251 "05function4.c"
                                                                __dec_obj98=type_name_135;
                                                                type_name_135=(char*)come_increment_ref_count(((char*)(right_value228=parse_word(info))));
                                                                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 1302 "05function4.c"
                                                                # 1253 "05function4.c"
                                                                if(_if_conditional310=string_operator_equals(type_name_135,"unsigned"),                                                                _if_conditional310) {
                                                                    # 1254 "05function4.c"
                                                                    __dec_obj99=type_name_135;
                                                                    type_name_135=(char*)come_increment_ref_count(((char*)(right_value229=parse_word(info))));
                                                                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1260 "05function4.c"
                                                                    # 1256 "05function4.c"
                                                                    if(_if_conditional311=string_operator_equals(type_name_135,"int"),                                                                    _if_conditional311) {
                                                                        # 1257 "05function4.c"
                                                                        long__141=(_Bool)1;
                                                                        # 1258 "05function4.c"
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    # 1302 "05function4.c"
                                                                    # 1261 "05function4.c"
                                                                    if(_if_conditional312=string_operator_equals(type_name_135,"long"),                                                                    _if_conditional312) {
                                                                        # 1262 "05function4.c"
                                                                        p_170=info->p;
                                                                        # 1263 "05function4.c"
                                                                        sline_171=info->sline;
                                                                        # 1273 "05function4.c"
                                                                        # 1264 "05function4.c"
                                                                        if(_if_conditional313=xisalpha(*info->p),                                                                        _if_conditional313) {
                                                                            # 1265 "05function4.c"
                                                                            long_long_142=(_Bool)1;
                                                                            # 1266 "05function4.c"
                                                                            __dec_obj100=type_name_135;
                                                                            type_name_135=(char*)come_increment_ref_count(((char*)(right_value230=parse_word(info))));
                                                                            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            # 1269 "05function4.c"
                                                                            long__141=(_Bool)1;
                                                                            # 1270 "05function4.c"
                                                                            break;
                                                                        }
                                                                        # 1284 "05function4.c"
                                                                        # 1273 "05function4.c"
                                                                        if(_if_conditional314=string_operator_equals(type_name_135,"int"),                                                                        _if_conditional314) {
                                                                            # 1274 "05function4.c"
                                                                            long_long_142=(_Bool)1;
                                                                            # 1275 "05function4.c"
                                                                            break;
                                                                        }
                                                                        else {
                                                                            # 1284 "05function4.c"
                                                                            # 1277 "05function4.c"
                                                                            if(_if_conditional315=!is_type_name(type_name_135,info),                                                                            _if_conditional315) {
                                                                                # 1278 "05function4.c"
                                                                                __dec_obj101=type_name_135;
                                                                                type_name_135=(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string("long"))));
                                                                                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1279 "05function4.c"
                                                                                long_long_142=(_Bool)1;
                                                                                # 1280 "05function4.c"
                                                                                info->p=p_170;
                                                                                # 1281 "05function4.c"
                                                                                info->sline=sline_171;
                                                                                # 1282 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1302 "05function4.c"
                                                                        # 1285 "05function4.c"
                                                                        if(_if_conditional316=is_type_name(type_name_135,info),                                                                        _if_conditional316) {
                                                                            # 1293 "05function4.c"
                                                                            # 1286 "05function4.c"
                                                                            if(long__141) {
                                                                                # 1287 "05function4.c"
                                                                                long_long_142=(_Bool)1;
                                                                                # 1288 "05function4.c"
                                                                                long__141=(_Bool)0;
                                                                            }
                                                                            else {
                                                                                # 1291 "05function4.c"
                                                                                long__141=(_Bool)1;
                                                                            }
                                                                            # 1293 "05function4.c"
                                                                            break;
                                                                        }
                                                                        else {
                                                                            # 1296 "05function4.c"
                                                                            info->p=p_170;
                                                                            # 1297 "05function4.c"
                                                                            info->sline=sline_171;
                                                                            # 1299 "05function4.c"
                                                                            __dec_obj102=type_name_135;
                                                                            type_name_135=(char*)come_increment_ref_count(((char*)(right_value232=__builtin_string("long"))));
                                                                            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1300 "05function4.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 1433 "05function4.c"
                                                        # 1305 "05function4.c"
                                                        if(_if_conditional318=string_operator_equals(type_name_135,"unsigned"),                                                        _if_conditional318) {
                                                            # 1306 "05function4.c"
                                                            unsigned__140=(_Bool)1;
                                                            # 1373 "05function4.c"
                                                            # 1308 "05function4.c"
                                                            if(_if_conditional319=xisalpha(*info->p)||*info->p==95,                                                            _if_conditional319) {
                                                                # 1309 "05function4.c"
                                                                p_172=info->p;
                                                                # 1310 "05function4.c"
                                                                sline_173=info->sline;
                                                                # 1312 "05function4.c"
                                                                __dec_obj103=type_name_135;
                                                                type_name_135=(char*)come_increment_ref_count(((char*)(right_value233=parse_word(info))));
                                                                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 1368 "05function4.c"
                                                                # 1314 "05function4.c"
                                                                if(_if_conditional320=string_operator_equals(type_name_135,"short"),                                                                _if_conditional320) {
                                                                    # 1337 "05function4.c"
                                                                    # 1315 "05function4.c"
                                                                    if(_if_conditional321=xisalpha(*info->p)||*info->p==95,                                                                    _if_conditional321) {
                                                                        # 1316 "05function4.c"
                                                                        p_174=info->p;
                                                                        # 1317 "05function4.c"
                                                                        sline_175=info->sline;
                                                                        # 1319 "05function4.c"
                                                                        __dec_obj104=type_name_135;
                                                                        type_name_135=(char*)come_increment_ref_count(((char*)(right_value234=parse_word(info))));
                                                                        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        # 1331 "05function4.c"
                                                                        # 1321 "05function4.c"
                                                                        if(_if_conditional322=is_type_name(type_name_135,info),                                                                        _if_conditional322) {
                                                                            # 1322 "05function4.c"
                                                                            short__143=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            # 1325 "05function4.c"
                                                                            short__143=(_Bool)1;
                                                                            # 1326 "05function4.c"
                                                                            __dec_obj105=type_name_135;
                                                                            type_name_135=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string("int"))));
                                                                            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1328 "05function4.c"
                                                                            info->p=p_174;
                                                                            # 1329 "05function4.c"
                                                                            info->sline=sline_175;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1333 "05function4.c"
                                                                        short__143=(_Bool)1;
                                                                        # 1334 "05function4.c"
                                                                        __dec_obj106=type_name_135;
                                                                        type_name_135=(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string("int"))));
                                                                        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        # 1335 "05function4.c"
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    # 1368 "05function4.c"
                                                                    # 1338 "05function4.c"
                                                                    if(_if_conditional323=string_operator_equals(type_name_135,"long"),                                                                    _if_conditional323) {
                                                                        # 1361 "05function4.c"
                                                                        # 1339 "05function4.c"
                                                                        if(_if_conditional324=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional324) {
                                                                            # 1340 "05function4.c"
                                                                            p_176=info->p;
                                                                            # 1341 "05function4.c"
                                                                            sline_177=info->sline;
                                                                            # 1343 "05function4.c"
                                                                            __dec_obj107=type_name_135;
                                                                            type_name_135=(char*)come_increment_ref_count(((char*)(right_value237=parse_word(info))));
                                                                            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1355 "05function4.c"
                                                                            # 1345 "05function4.c"
                                                                            if(_if_conditional325=is_type_name(type_name_135,info),                                                                            _if_conditional325) {
                                                                                # 1346 "05function4.c"
                                                                                long__141=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                # 1349 "05function4.c"
                                                                                long__141=(_Bool)1;
                                                                                # 1350 "05function4.c"
                                                                                __dec_obj108=type_name_135;
                                                                                type_name_135=(char*)come_increment_ref_count(((char*)(right_value238=__builtin_string("int"))));
                                                                                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1352 "05function4.c"
                                                                                info->p=p_176;
                                                                                # 1353 "05function4.c"
                                                                                info->sline=sline_177;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1357 "05function4.c"
                                                                            long__141=(_Bool)1;
                                                                            # 1358 "05function4.c"
                                                                            __dec_obj109=type_name_135;
                                                                            type_name_135=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string("int"))));
                                                                            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1359 "05function4.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1368 "05function4.c"
                                                                        # 1362 "05function4.c"
                                                                        if(_if_conditional326=!is_type_name(type_name_135,info),                                                                        _if_conditional326) {
                                                                            # 1363 "05function4.c"
                                                                            __dec_obj110=type_name_135;
                                                                            type_name_135=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string("int"))));
                                                                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1364 "05function4.c"
                                                                            info->p=p_172;
                                                                            # 1365 "05function4.c"
                                                                            info->sline=sline_173;
                                                                            # 1366 "05function4.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                # 1370 "05function4.c"
                                                                __dec_obj111=type_name_135;
                                                                type_name_135=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string("int"))));
                                                                __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 1371 "05function4.c"
                                                                break;
                                                            }
                                                        }
                                                        else {
                                                            # 1433 "05function4.c"
                                                            # 1374 "05function4.c"
                                                            if(_if_conditional327=string_operator_equals(type_name_135,"signed")||string_operator_equals(type_name_135,"__signed__"),                                                            _if_conditional327) {
                                                                # 1375 "05function4.c"
                                                                unsigned__140=(_Bool)0;
                                                                # 1377 "05function4.c"
                                                                __dec_obj112=type_name_135;
                                                                type_name_135=(char*)come_increment_ref_count(((char*)(right_value242=parse_word(info))));
                                                                __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                # 1433 "05function4.c"
                                                                # 1379 "05function4.c"
                                                                if(_if_conditional328=string_operator_equals(type_name_135,"register"),                                                                _if_conditional328) {
                                                                    # 1380 "05function4.c"
                                                                    register__139=(_Bool)1;
                                                                    # 1382 "05function4.c"
                                                                    __dec_obj113=type_name_135;
                                                                    type_name_135=(char*)come_increment_ref_count(((char*)(right_value243=parse_word(info))));
                                                                    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    # 1433 "05function4.c"
                                                                    # 1384 "05function4.c"
                                                                    if(_if_conditional329=string_operator_equals(type_name_135,"restrict"),                                                                    _if_conditional329) {
                                                                        # 1385 "05function4.c"
                                                                        restrict__144=(_Bool)1;
                                                                        # 1387 "05function4.c"
                                                                        __dec_obj114=type_name_135;
                                                                        type_name_135=(char*)come_increment_ref_count(((char*)(right_value244=parse_word(info))));
                                                                        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    else {
                                                                        # 1433 "05function4.c"
                                                                        # 1389 "05function4.c"
                                                                        if(_if_conditional330=string_operator_equals(type_name_135,"_Addr"),                                                                        _if_conditional330) {
                                                                            # 1390 "05function4.c"
                                                                            __dec_obj115=type_name_135;
                                                                            type_name_135=(char*)come_increment_ref_count(((char*)(right_value245=parse_word(info))));
                                                                            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            # 1433 "05function4.c"
                                                                            # 1392 "05function4.c"
                                                                            if(_if_conditional331=string_operator_equals(type_name_135,"__restrict"),                                                                            _if_conditional331) {
                                                                                # 1393 "05function4.c"
                                                                                restrict__144=(_Bool)1;
                                                                                # 1395 "05function4.c"
                                                                                __dec_obj116=type_name_135;
                                                                                type_name_135=(char*)come_increment_ref_count(((char*)(right_value246=parse_word(info))));
                                                                                __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 1433 "05function4.c"
                                                                                # 1397 "05function4.c"
                                                                                if(_if_conditional332=string_operator_equals(type_name_135,"short"),                                                                                _if_conditional332) {
                                                                                    # 1398 "05function4.c"
                                                                                    short__143=(_Bool)1;
                                                                                    # 1429 "05function4.c"
                                                                                    # 1400 "05function4.c"
                                                                                    if(_if_conditional333=*info->p==58,                                                                                    _if_conditional333) {
                                                                                        # 1401 "05function4.c"
                                                                                        break;
                                                                                    }
                                                                                    else {
                                                                                        # 1429 "05function4.c"
                                                                                        # 1403 "05function4.c"
                                                                                        if(_if_conditional334=xisalnum(*info->p),                                                                                        _if_conditional334) {
                                                                                            # 1404 "05function4.c"
                                                                                            p_178=info->p;
                                                                                            # 1405 "05function4.c"
                                                                                            sline_179=info->sline;
                                                                                            # 1406 "05function4.c"
                                                                                            __dec_obj117=type_name_135;
                                                                                            type_name_135=(char*)come_increment_ref_count(((char*)(right_value247=parse_word(info))));
                                                                                            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            # 1425 "05function4.c"
                                                                                            # 1408 "05function4.c"
                                                                                            if(_if_conditional335=string_operator_equals(type_name_135,"int"),                                                                                            _if_conditional335) {
                                                                                                # 1409 "05function4.c"
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                # 1425 "05function4.c"
                                                                                                # 1411 "05function4.c"
                                                                                                if(_if_conditional336=string_operator_equals(type_name_135,"short"),                                                                                                _if_conditional336) {
                                                                                                    # 1412 "05function4.c"
                                                                                                    short__143=(_Bool)0;
                                                                                                    # 1413 "05function4.c"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 1425 "05function4.c"
                                                                                                    # 1415 "05function4.c"
                                                                                                    if(_if_conditional337=is_type_name(type_name_135,info),                                                                                                    _if_conditional337) {
                                                                                                        # 1416 "05function4.c"
                                                                                                        info->p=p_178;
                                                                                                        # 1417 "05function4.c"
                                                                                                        info->sline=sline_179;
                                                                                                    }
                                                                                                    else {
                                                                                                        # 1420 "05function4.c"
                                                                                                        __dec_obj118=type_name_135;
                                                                                                        type_name_135=(char*)come_increment_ref_count(((char*)(right_value248=__builtin_string("short"))));
                                                                                                        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        # 1421 "05function4.c"
                                                                                                        info->p=p_178;
                                                                                                        # 1422 "05function4.c"
                                                                                                        info->sline=sline_179;
                                                                                                        # 1423 "05function4.c"
                                                                                                        break;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            # 1427 "05function4.c"
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    # 1431 "05function4.c"
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
    # 1435 "05function4.c"
    skip_pointer_attribute(info);
    # 1437 "05function4.c"
    pointer_num_180=0;
    # 1447 "05function4.c"
    while(_while_condtional29=*info->p==42,    _while_condtional29) {
        # 1439 "05function4.c"
        info->p++;
        # 1440 "05function4.c"
        skip_spaces_and_lf(info);
        # 1442 "05function4.c"
        skip_pointer_attribute(info);
        # 1444 "05function4.c"
        pointer_num_180++;
    }
    # 1447 "05function4.c"
    heap_181=(_Bool)0;
    # 1455 "05function4.c"
    # 1448 "05function4.c"
    if(_if_conditional338=*info->p==37,    _if_conditional338) {
        # 1449 "05function4.c"
        info->p++;
        # 1450 "05function4.c"
        skip_spaces_and_lf(info);
        # 1452 "05function4.c"
        heap_181=(_Bool)1;
    }
    # 1455 "05function4.c"
    lambda_flag_182=(_Bool)0;
    # 1472 "05function4.c"
    {
        # 1457 "05function4.c"
        pX_183=info->p;
        # 1458 "05function4.c"
        slineX_184=info->sline;
        # 1468 "05function4.c"
        # 1460 "05function4.c"
        if(_if_conditional339=xisalpha(*info->p)||*info->p==95,        _if_conditional339) {
            # 1461 "05function4.c"
            (void)((char*)(right_value249=parse_word(info)));
            right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1466 "05function4.c"
            # 1463 "05function4.c"
            if(_if_conditional340=*info->p==40&&info->in_typedef,            _if_conditional340) {
                # 1464 "05function4.c"
                lambda_flag_182=(_Bool)1;
            }
        }
        # 1468 "05function4.c"
        info->p=pX_183;
        # 1469 "05function4.c"
        info->sline=slineX_184;
    }
    # 1472 "05function4.c"
    # 1473 "05function4.c"
    # 1475 "05function4.c"
    function_pointer_flag_187=(_Bool)0;
    # 1507 "05function4.c"
    {
        # 1477 "05function4.c"
        p_188=info->p;
        # 1478 "05function4.c"
        sline_189=info->sline;
        # 1503 "05function4.c"
        # 1480 "05function4.c"
        if(_if_conditional341=*info->p==40,        _if_conditional341) {
            # 1481 "05function4.c"
            info->p++;
            # 1482 "05function4.c"
            skip_spaces_and_lf(info);
            # 1484 "05function4.c"
            skip_pointer_attribute(info);
            # 1501 "05function4.c"
            # 1486 "05function4.c"
            if(_if_conditional342=*info->p==42||*info->p==94,            _if_conditional342) {
                # 1487 "05function4.c"
                function_pointer_flag_187=(_Bool)1;
            }
            else {
                # 1501 "05function4.c"
                # 1489 "05function4.c"
                if(_if_conditional343=xisalpha(*info->p)||*info->p==95,                _if_conditional343) {
                    # 1490 "05function4.c"
                    word_190=(char*)come_increment_ref_count(((char*)(right_value250=parse_word(info))));
                    right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1500 "05function4.c"
                    # 1492 "05function4.c"
                    if(_if_conditional344=*info->p==41,                    _if_conditional344) {
                        # 1493 "05function4.c"
                        info->p++;
                        # 1494 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1499 "05function4.c"
                        # 1496 "05function4.c"
                        if(_if_conditional345=*info->p==40,                        _if_conditional345) {
                            # 1497 "05function4.c"
                            function_pointer_flag_187=(_Bool)1;
                        }
                    }
                    word_190 = come_decrement_ref_count2(word_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1503 "05function4.c"
        info->p=p_188;
        # 1504 "05function4.c"
        info->sline=sline_189;
    }
    # 1507 "05function4.c"
    var_name_between_brace_191=(_Bool)0;
    # 1538 "05function4.c"
    {
        # 1509 "05function4.c"
        p_192=info->p;
        # 1510 "05function4.c"
        sline_193=info->sline;
        # 1534 "05function4.c"
        # 1512 "05function4.c"
        if(_if_conditional346=*info->p==40,        _if_conditional346) {
            # 1513 "05function4.c"
            info->p++;
            # 1514 "05function4.c"
            skip_spaces_and_lf(info);
            # 1516 "05function4.c"
            skip_pointer_attribute(info);
            # 1532 "05function4.c"
            # 1518 "05function4.c"
            if(_if_conditional347=xisalpha(*info->p)||*info->p==95,            _if_conditional347) {
                # 1519 "05function4.c"
                word_194=(char*)come_increment_ref_count(((char*)(right_value251=parse_word(info))));
                right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1531 "05function4.c"
                # 1521 "05function4.c"
                if(_if_conditional348=is_type_name(word_194,info),                _if_conditional348) {
                }
                else {
                    # 1531 "05function4.c"
                    # 1523 "05function4.c"
                    if(_if_conditional349=*info->p==41,                    _if_conditional349) {
                        # 1524 "05function4.c"
                        info->p++;
                        # 1525 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1530 "05function4.c"
                        # 1527 "05function4.c"
                        if(_if_conditional350=*info->p!=40,                        _if_conditional350) {
                            # 1528 "05function4.c"
                            var_name_between_brace_191=(_Bool)1;
                        }
                    }
                }
                word_194 = come_decrement_ref_count2(word_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 1534 "05function4.c"
        info->p=p_192;
        # 1535 "05function4.c"
        info->sline=sline_193;
    }
    # 2210 "05function4.c"
    # 1538 "05function4.c"
    if(_if_conditional351=anonymous_type_153&&*info->p==123,    _if_conditional351) {
        # 1539 "05function4.c"
        # 1609 "05function4.c"
        # 1540 "05function4.c"
        if(struct__145) {
            # 1545 "05function4.c"
            # 1541 "05function4.c"
            if(_if_conditional353=string_operator_equals(type_name_135,""),            _if_conditional353) {
                # 1542 "05function4.c"
                __dec_obj119=type_name_135;
                type_name_135=(char*)come_increment_ref_count(((char*)(right_value252=xsprintf("anonymous_typeX%d",++anonymous_num_195))));
                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 1545 "05function4.c"
            node_196=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=parse_struct((char*)come_increment_ref_count(type_name_135),info))));
            if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1552 "05function4.c"
            # 1547 "05function4.c"
            if(_if_conditional354=!node_compile(node_196,info),            _if_conditional354) {
                # 1548 "05function4.c"
                err_msg(info,"parse_struct is failed");
                # 1549 "05function4.c"
                __result112__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value255=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value254=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1549, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_196) { node_196 = come_decrement_ref_count2(node_196, ((struct sNode*)node_196)->finalize, ((struct sNode*)node_196)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_186 = come_decrement_ref_count2(var_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result112__;
            }
            # 1552 "05function4.c"
            pointer_num_197=0;
            # 1559 "05function4.c"
            while(_while_condtional30=*info->p==42,            _while_condtional30) {
                # 1555 "05function4.c"
                info->p++;
                # 1555 "05function4.c"
                skip_spaces_and_lf(info);
                # 1556 "05function4.c"
                pointer_num_197++;
            }
            # 1559 "05function4.c"
            __dec_obj120=type_185;
            type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value256=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1559, "sType")))),type_name_135,(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1561 "05function4.c"
            type_185->mPointerNum=pointer_num_197;
            if(node_196) { node_196 = come_decrement_ref_count2(node_196, ((struct sNode*)node_196)->finalize, ((struct sNode*)node_196)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1609 "05function4.c"
            # 1563 "05function4.c"
            if(enum__147) {
                # 1568 "05function4.c"
                # 1564 "05function4.c"
                if(_if_conditional356=string_operator_equals(type_name_135,""),                _if_conditional356) {
                    # 1565 "05function4.c"
                    __dec_obj121=type_name_135;
                    type_name_135=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("anonymous_typeY%d",++anonymous_num_195))));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1568 "05function4.c"
                node_198=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value259=parse_enum((char*)come_increment_ref_count(type_name_135),info))));
                if(right_value259) { right_value259 = come_decrement_ref_count2(right_value259, ((struct sNode*)right_value259)->finalize, ((struct sNode*)right_value259)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1577 "05function4.c"
                # 1570 "05function4.c"
                if(_if_conditional357=!info->no_output_err,                _if_conditional357) {
                    # 1575 "05function4.c"
                    # 1571 "05function4.c"
                    if(_if_conditional358=!node_compile(node_198,info),                    _if_conditional358) {
                        # 1572 "05function4.c"
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        # 1573 "05function4.c"
                        __result113__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value261=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value260=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1573, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_198) { node_198 = come_decrement_ref_count2(node_198, ((struct sNode*)node_198)->finalize, ((struct sNode*)node_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_186 = come_decrement_ref_count2(var_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result113__;
                    }
                }
                # 1577 "05function4.c"
                __dec_obj122=type_185;
                type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value262=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1577, "sType")))),type_name_135,(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(node_198) { node_198 = come_decrement_ref_count2(node_198, ((struct sNode*)node_198)->finalize, ((struct sNode*)node_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1609 "05function4.c"
                # 1579 "05function4.c"
                if(union__146) {
                    # 1584 "05function4.c"
                    # 1580 "05function4.c"
                    if(_if_conditional360=string_operator_equals(type_name_135,""),                    _if_conditional360) {
                        # 1581 "05function4.c"
                        __dec_obj123=type_name_135;
                        type_name_135=(char*)come_increment_ref_count(((char*)(right_value264=xsprintf("anonymous_typeZ%d",++anonymous_num_195))));
                        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 1584 "05function4.c"
                    node_199=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=parse_union((char*)come_increment_ref_count(type_name_135),info))));
                    if(right_value265) { right_value265 = come_decrement_ref_count2(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1593 "05function4.c"
                    # 1587 "05function4.c"
                    if(_if_conditional361=!node_compile(node_199,info),                    _if_conditional361) {
                        # 1588 "05function4.c"
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        # 1589 "05function4.c"
                        __result114__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value267=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value266=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1589, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_199) { node_199 = come_decrement_ref_count2(node_199, ((struct sNode*)node_199)->finalize, ((struct sNode*)node_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_186 = come_decrement_ref_count2(var_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result114__;
                    }
                    # 1593 "05function4.c"
                    pointer_num_200=0;
                    # 1600 "05function4.c"
                    while(_while_condtional31=*info->p==42,                    _while_condtional31) {
                        # 1596 "05function4.c"
                        info->p++;
                        # 1596 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1597 "05function4.c"
                        pointer_num_200++;
                    }
                    # 1600 "05function4.c"
                    __dec_obj124=type_185;
                    type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value268=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1600, "sType")))),type_name_135,(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1602 "05function4.c"
                    type_185->mPointerNum=pointer_num_200;
                    if(node_199) { node_199 = come_decrement_ref_count2(node_199, ((struct sNode*)node_199)->finalize, ((struct sNode*)node_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1605 "05function4.c"
                    err_msg(info,"unexpected { character");
                    # 1606 "05function4.c"
                    __result115__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value271=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value270=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1606, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    var_name_186 = come_decrement_ref_count2(var_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result115__;
                }
            }
        }
        # 1650 "05function4.c"
        # 1609 "05function4.c"
        if(parse_variable_name) {
            # 1610 "05function4.c"
            parse_sharp_v5(info);
            # 1616 "05function4.c"
            # 1611 "05function4.c"
            if(_if_conditional363=var_name_between_brace_191&&*info->p==40,            _if_conditional363) {
                # 1612 "05function4.c"
                info->p++;
                # 1613 "05function4.c"
                skip_spaces_and_lf(info);
            }
            # 1633 "05function4.c"
            # 1616 "05function4.c"
            if(_if_conditional364=*info->p==58,            _if_conditional364) {
                # 1617 "05function4.c"
                __dec_obj125=var_name_186;
                var_name_186=(char*)come_increment_ref_count(((char*)(right_value272=__builtin_string(""))));
                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1633 "05function4.c"
                # 1619 "05function4.c"
                if(anonymous_name_154) {
                    # 1620 "05function4.c"
                    # 1621 "05function4.c"
                    num_anonymous_var_name_201++;
                    # 1622 "05function4.c"
                    __dec_obj126=var_name_186;
                    var_name_186=(char*)come_increment_ref_count(((char*)(right_value273=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_201))));
                    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1633 "05function4.c"
                    # 1624 "05function4.c"
                    if(_if_conditional366=xisalnum(*info->p)||*info->p==95,                    _if_conditional366) {
                        # 1625 "05function4.c"
                        __dec_obj127=var_name_186;
                        var_name_186=(char*)come_increment_ref_count(((char*)(right_value274=parse_word(info))));
                        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 1628 "05function4.c"
                        # 1629 "05function4.c"
                        num_anonymous_var_name_202++;
                        # 1630 "05function4.c"
                        __dec_obj128=var_name_186;
                        var_name_186=(char*)come_increment_ref_count(((char*)(right_value275=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_202))));
                        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            # 1638 "05function4.c"
            # 1633 "05function4.c"
            if(_if_conditional367=var_name_between_brace_191&&*info->p==41,            _if_conditional367) {
                # 1634 "05function4.c"
                info->p++;
                # 1635 "05function4.c"
                skip_spaces_and_lf(info);
            }
            # 1649 "05function4.c"
            # 1638 "05function4.c"
            if(_if_conditional368=*info->p==58,            _if_conditional368) {
                # 1639 "05function4.c"
                info->p++;
                # 1640 "05function4.c"
                skip_spaces_and_lf(info);
                # 1642 "05function4.c"
                no_comma_203=info->no_comma;
                # 1643 "05function4.c"
                info->no_comma=(_Bool)1;
                # 1644 "05function4.c"
                node_204=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value276=expression_v13(info))));
                if(right_value276) { right_value276 = come_decrement_ref_count2(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1645 "05function4.c"
                info->no_comma=no_comma_203;
                # 1647 "05function4.c"
                __dec_obj129=type_185->mSizeNum;
                type_185->mSizeNum=(struct sNode*)come_increment_ref_count(node_204);
                if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_204) { node_204 = come_decrement_ref_count2(node_204, ((struct sNode*)node_204)->finalize, ((struct sNode*)node_204)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        # 2210 "05function4.c"
        # 1651 "05function4.c"
        if(lambda_flag_182) {
            # 1652 "05function4.c"
            # 1674 "05function4.c"
            # 1653 "05function4.c"
            if(_if_conditional374=map$2charphsTypephp_operator_load_element(info->types,type_name_135),            _if_conditional374) {
                # 1654 "05function4.c"
                __dec_obj130=result_type_205;
                result_type_205=(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_135)))));
                come_call_finalizer2(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1674 "05function4.c"
                # 1656 "05function4.c"
                if(_if_conditional380=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_135)),                _if_conditional380) {
                    # 1662 "05function4.c"
                    for(                    i_214=0;                    i_214<list$1charph_length(info->generics_type_names);                    i_214++                    ){
                        # 1661 "05function4.c"
                        # 1658 "05function4.c"
                        if(_if_conditional384=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_214), "05function4.c", 1658, 5)),type_name_135),                        _if_conditional384) {
                            # 1659 "05function4.c"
                            __dec_obj131=result_type_205;
                            result_type_205=(struct sType*)come_increment_ref_count(((struct sType*)(right_value280=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value278=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1659, "sType")))),((char*)(right_value279=xsprintf("generics_type%d",i_214))),(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    # 1674 "05function4.c"
                    # 1663 "05function4.c"
                    if(_if_conditional385=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_135)),                    _if_conditional385) {
                        # 1669 "05function4.c"
                        for(                        i_218=0;                        i_218<list$1charph_length(info->method_generics_type_names);                        i_218++                        ){
                            # 1668 "05function4.c"
                            # 1665 "05function4.c"
                            if(_if_conditional386=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_218), "05function4.c", 1665, 6)),type_name_135),                            _if_conditional386) {
                                # 1666 "05function4.c"
                                __dec_obj132=result_type_205;
                                result_type_205=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value281=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1666, "sType")))),((char*)(right_value282=xsprintf("mgenerics_type%d",i_218))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        # 1671 "05function4.c"
                        __dec_obj133=result_type_205;
                        result_type_205=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value284=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1671, "sType")))),type_name_135,(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            # 1674 "05function4.c"
            result_type_205->mConstant=result_type_205->mConstant||constant_136;
            # 1675 "05function4.c"
            __dec_obj134=result_type_205->mAlignas;
            result_type_205->mAlignas=(struct sNode*)come_increment_ref_count(alignas__152);
            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
            # 1676 "05function4.c"
            result_type_205->mComeMemCore=result_type_205->mComeMemCore||come_mem_core__151;
            # 1677 "05function4.c"
            result_type_205->mRegister=register__139;
            # 1678 "05function4.c"
            result_type_205->mUnsigned=result_type_205->mUnsigned||unsigned__140;
            # 1679 "05function4.c"
            result_type_205->mVolatile=volatile__138;
            # 1680 "05function4.c"
            result_type_205->mStatic=result_type_205->mStatic||static__137;
            # 1681 "05function4.c"
            result_type_205->mExtern=result_type_205->mExtern||extern__149;
            # 1682 "05function4.c"
            result_type_205->mInline=result_type_205->mInline||inline__150;
            # 1683 "05function4.c"
            result_type_205->mRestrict=result_type_205->mRestrict||restrict__144;
            # 1684 "05function4.c"
            result_type_205->mLongLong=result_type_205->mLongLong||long_long_142;
            # 1685 "05function4.c"
            result_type_205->mLong=result_type_205->mLong||long__141;
            # 1686 "05function4.c"
            result_type_205->mShort=result_type_205->mShort||short__143;
            # 1687 "05function4.c"
            result_type_205->mPointerNum=pointer_num_180;
            # 1688 "05function4.c"
            result_type_205->mHeap=result_type_205->mHeap||heap_181;
            # 1690 "05function4.c"
            __dec_obj135=var_name_186;
            var_name_186=(char*)come_increment_ref_count(((char*)(right_value286=parse_word(info))));
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1692 "05function4.c"
            multiple_assign_var2=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value287=parse_params(info)));
            param_types_219=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var2->v1);
            param_names_220=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v2);
            param_default_parametors_221=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v3);
            var_args_222=multiple_assign_var2->v4;
            come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1694 "05function4.c"
            __dec_obj136=type_185;
            type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value288=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1694, "sType")))),"lambda",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1696 "05function4.c"
            __dec_obj138=type_185->mResultType;
            type_185->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value291=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value290=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1696, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_205)))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1697 "05function4.c"
            __dec_obj139=type_185->mParamTypes;
            type_185->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_219);
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1698 "05function4.c"
            __dec_obj140=type_185->mParamNames;
            type_185->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_220);
            come_call_finalizer2(list$1charph_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1699 "05function4.c"
            type_185->mVarArgs=var_args_222;
            # 1700 "05function4.c"
            type_185->mExtern=extern__149;
            come_call_finalizer2(sType_finalize,result_type_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 2210 "05function4.c"
            # 1702 "05function4.c"
            if(function_pointer_flag_187) {
                # 1703 "05function4.c"
                info->p++;
                # 1704 "05function4.c"
                skip_spaces_and_lf(info);
                # 1706 "05function4.c"
                skip_pointer_attribute(info);
                # 1713 "05function4.c"
                # 1708 "05function4.c"
                if(_if_conditional388=*info->p==42||*info->p==94,                _if_conditional388) {
                    # 1709 "05function4.c"
                    info->p++;
                    # 1710 "05function4.c"
                    skip_spaces_and_lf(info);
                }
                # 1713 "05function4.c"
                skip_pointer_attribute(info);
                # 1715 "05function4.c"
                # 1738 "05function4.c"
                # 1716 "05function4.c"
                if(_if_conditional389=map$2charphsTypephp_operator_load_element(info->types,type_name_135),                _if_conditional389) {
                    # 1717 "05function4.c"
                    __dec_obj141=result_type_223;
                    result_type_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value292=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_135)))));
                    come_call_finalizer2(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1738 "05function4.c"
                    # 1720 "05function4.c"
                    if(_if_conditional390=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_135)),                    _if_conditional390) {
                        # 1726 "05function4.c"
                        for(                        i_224=0;                        i_224<list$1charph_length(info->generics_type_names);                        i_224++                        ){
                            # 1725 "05function4.c"
                            # 1722 "05function4.c"
                            if(_if_conditional391=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_224), "05function4.c", 1722, 7)),type_name_135),                            _if_conditional391) {
                                # 1723 "05function4.c"
                                __dec_obj142=result_type_223;
                                result_type_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value293=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1723, "sType")))),((char*)(right_value294=xsprintf("generics_type%d",i_224))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        # 1738 "05function4.c"
                        # 1727 "05function4.c"
                        if(_if_conditional392=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_135)),                        _if_conditional392) {
                            # 1733 "05function4.c"
                            for(                            i_225=0;                            i_225<list$1charph_length(info->method_generics_type_names);                            i_225++                            ){
                                # 1732 "05function4.c"
                                # 1729 "05function4.c"
                                if(_if_conditional393=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_225), "05function4.c", 1729, 8)),type_name_135),                                _if_conditional393) {
                                    # 1730 "05function4.c"
                                    __dec_obj143=result_type_223;
                                    result_type_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value298=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value296=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1730, "sType")))),((char*)(right_value297=xsprintf("mgenerics_type%d",i_225))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        else {
                            # 1735 "05function4.c"
                            __dec_obj144=result_type_223;
                            result_type_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value300=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value299=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1735, "sType")))),type_name_135,(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                # 1738 "05function4.c"
                result_type_223->mConstant=result_type_223->mConstant||constant_136;
                # 1739 "05function4.c"
                __dec_obj145=result_type_223->mAlignas;
                result_type_223->mAlignas=(struct sNode*)come_increment_ref_count(alignas__152);
                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
                # 1740 "05function4.c"
                result_type_223->mComeMemCore=result_type_223->mComeMemCore||come_mem_core__151;
                # 1741 "05function4.c"
                result_type_223->mRegister=register__139;
                # 1742 "05function4.c"
                result_type_223->mUnsigned=result_type_223->mUnsigned||unsigned__140;
                # 1743 "05function4.c"
                result_type_223->mVolatile=volatile__138;
                # 1744 "05function4.c"
                result_type_223->mStatic=result_type_223->mStatic||static__137;
                # 1745 "05function4.c"
                result_type_223->mExtern=result_type_223->mExtern||extern__149;
                # 1746 "05function4.c"
                result_type_223->mInline=result_type_223->mInline||inline__150;
                # 1747 "05function4.c"
                result_type_223->mRestrict=result_type_223->mRestrict||restrict__144;
                # 1748 "05function4.c"
                result_type_223->mLongLong=result_type_223->mLongLong||long_long_142;
                # 1749 "05function4.c"
                result_type_223->mLong=result_type_223->mLong||long__141;
                # 1750 "05function4.c"
                result_type_223->mShort=result_type_223->mShort||short__143;
                # 1751 "05function4.c"
                result_type_223->mPointerNum+=pointer_num_180;
                # 1752 "05function4.c"
                result_type_223->mHeap=result_type_223->mHeap||heap_181;
                # 1765 "05function4.c"
                # 1754 "05function4.c"
                if(_if_conditional394=xisalnum(*info->p)||*info->p==95,                _if_conditional394) {
                    # 1755 "05function4.c"
                    __dec_obj146=var_name_186;
                    var_name_186=(char*)come_increment_ref_count(((char*)(right_value301=parse_word(info))));
                    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1759 "05function4.c"
                    # 1756 "05function4.c"
                    if(_if_conditional395=*info->p==40,                    _if_conditional395) {
                        # 1757 "05function4.c"
                        __result134__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value303=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value302=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1757, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_223),(char*)come_increment_ref_count(var_name_186),(_Bool)0)));
                        come_call_finalizer2(sType_finalize,result_type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_186 = come_decrement_ref_count2(var_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result134__;
                    }
                }
                else {
                    # 1761 "05function4.c"
                    # 1762 "05function4.c"
                    num_anonymous_var_name_226++;
                    # 1763 "05function4.c"
                    __dec_obj147=var_name_186;
                    var_name_186=(char*)come_increment_ref_count(((char*)(right_value304=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_226))));
                    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1765 "05function4.c"
                expected_next_character(41,info);
                # 1767 "05function4.c"
                multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value305=parse_params(info)));
                param_types_227=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
                param_names_228=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
                param_default_parametors_229=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
                var_args_230=multiple_assign_var3->v4;
                come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1769 "05function4.c"
                __dec_obj148=type_185;
                type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value307=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value306=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1769, "sType")))),"lambda",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1771 "05function4.c"
                __dec_obj149=type_185->mResultType;
                type_185->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value309=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value308=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1771, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_223)))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1772 "05function4.c"
                __dec_obj150=type_185->mParamTypes;
                type_185->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_227);
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1773 "05function4.c"
                __dec_obj151=type_185->mParamNames;
                type_185->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_228);
                come_call_finalizer2(list$1charph_finalize,__dec_obj151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1774 "05function4.c"
                type_185->mVarArgs=var_args_230;
                # 1775 "05function4.c"
                type_185->mExtern=extern__149;
                come_call_finalizer2(sType_finalize,result_type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 2210 "05function4.c"
                # 1777 "05function4.c"
                if(_if_conditional396=string_operator_equals(type_name_135,"__typeof__")&&*info->p==40,                _if_conditional396) {
                    # 1778 "05function4.c"
                    info->p++;
                    # 1779 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 1781 "05function4.c"
                    exp_231=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value310=expression_v13(info))));
                    if(right_value310) { right_value310 = come_decrement_ref_count2(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1783 "05function4.c"
                    expected_next_character(41,info);
                    # 1790 "05function4.c"
                    # 1785 "05function4.c"
                    if(_if_conditional397=!node_compile(exp_231,info),                    _if_conditional397) {
                        # 1786 "05function4.c"
                        err_msg(info,"invalid __typeof__ expression");
                        # 1787 "05function4.c"
                        __result136__ = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(right_value312=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count(((struct tuple3$3sTypepcharphbool*)(right_value311=(struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05function4.c", 1787, "struct tuple3$3sTypepcharphbool")))),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(exp_231) { exp_231 = come_decrement_ref_count2(exp_231, ((struct sNode*)exp_231)->finalize, ((struct sNode*)exp_231)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_186 = come_decrement_ref_count2(var_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypepcharphboolp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result136__;
                    }
                    # 1790 "05function4.c"
                    come_value_232=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value313=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1791 "05function4.c"
                    dec_stack_ptr(1,info);
                    # 1793 "05function4.c"
                    __dec_obj153=type_185;
                    type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(come_value_232->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1837 "05function4.c"
                    # 1795 "05function4.c"
                    if(parse_variable_name) {
                        # 1796 "05function4.c"
                        parse_sharp_v5(info);
                        # 1803 "05function4.c"
                        # 1798 "05function4.c"
                        if(_if_conditional402=var_name_between_brace_191&&*info->p==40,                        _if_conditional402) {
                            # 1799 "05function4.c"
                            info->p++;
                            # 1800 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 1820 "05function4.c"
                        # 1803 "05function4.c"
                        if(_if_conditional403=*info->p==58,                        _if_conditional403) {
                            # 1804 "05function4.c"
                            __dec_obj154=var_name_186;
                            var_name_186=(char*)come_increment_ref_count(((char*)(right_value315=__builtin_string(""))));
                            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1820 "05function4.c"
                            # 1806 "05function4.c"
                            if(anonymous_name_154) {
                                # 1807 "05function4.c"
                                # 1808 "05function4.c"
                                num_anonymous_var_name_233++;
                                # 1809 "05function4.c"
                                __dec_obj155=var_name_186;
                                var_name_186=(char*)come_increment_ref_count(((char*)(right_value316=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_233))));
                                __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 1820 "05function4.c"
                                # 1811 "05function4.c"
                                if(_if_conditional405=xisalnum(*info->p)||*info->p==95,                                _if_conditional405) {
                                    # 1812 "05function4.c"
                                    __dec_obj156=var_name_186;
                                    var_name_186=(char*)come_increment_ref_count(((char*)(right_value317=parse_word(info))));
                                    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1815 "05function4.c"
                                    # 1816 "05function4.c"
                                    num_anonymous_var_name_234++;
                                    # 1817 "05function4.c"
                                    __dec_obj157=var_name_186;
                                    var_name_186=(char*)come_increment_ref_count(((char*)(right_value318=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_234))));
                                    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        # 1825 "05function4.c"
                        # 1820 "05function4.c"
                        if(_if_conditional406=var_name_between_brace_191&&*info->p==41,                        _if_conditional406) {
                            # 1821 "05function4.c"
                            info->p++;
                            # 1822 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 1836 "05function4.c"
                        # 1825 "05function4.c"
                        if(_if_conditional407=*info->p==58,                        _if_conditional407) {
                            # 1826 "05function4.c"
                            info->p++;
                            # 1827 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 1829 "05function4.c"
                            no_comma_235=info->no_comma;
                            # 1830 "05function4.c"
                            info->no_comma=(_Bool)1;
                            # 1831 "05function4.c"
                            node_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=expression_v13(info))));
                            if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1832 "05function4.c"
                            info->no_comma=no_comma_235;
                            # 1834 "05function4.c"
                            __dec_obj158=type_185->mSizeNum;
                            type_185->mSizeNum=(struct sNode*)come_increment_ref_count(node_236);
                            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_231) { exp_231 = come_decrement_ref_count2(exp_231, ((struct sNode*)exp_231)->finalize, ((struct sNode*)exp_231)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 1998 "05function4.c"
                    # 1839 "05function4.c"
                    if(_if_conditional408=map$2charphsTypephp_operator_load_element(info->types,type_name_135),                    _if_conditional408) {
                        # 1840 "05function4.c"
                        __dec_obj159=type_185;
                        type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_135)))));
                        come_call_finalizer2(sType_finalize,__dec_obj159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1841 "05function4.c"
                        __dec_obj160=type_185->mOriginalTypeName;
                        type_185->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value321=__builtin_string(type_name_135))));
                        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1842 "05function4.c"
                        type_185->mOriginalTypeNamePointerNum=pointer_num_180;
                        # 1844 "05function4.c"
                        type_185->mConstant=type_185->mConstant||constant_136;
                        # 1845 "05function4.c"
                        __dec_obj161=type_185->mAlignas;
                        type_185->mAlignas=(struct sNode*)come_increment_ref_count(alignas__152);
                        if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1846 "05function4.c"
                        type_185->mComeMemCore=type_185->mComeMemCore||come_mem_core__151;
                        # 1847 "05function4.c"
                        type_185->mRegister=register__139;
                        # 1848 "05function4.c"
                        type_185->mUnsigned=type_185->mUnsigned||unsigned__140;
                        # 1849 "05function4.c"
                        type_185->mVolatile=volatile__138;
                        # 1850 "05function4.c"
                        type_185->mStatic=type_185->mStatic||static__137;
                        # 1851 "05function4.c"
                        type_185->mExtern=type_185->mExtern||extern__149;
                        # 1852 "05function4.c"
                        type_185->mInline=type_185->mInline||inline__150;
                        # 1853 "05function4.c"
                        type_185->mRestrict=type_185->mRestrict||restrict__144;
                        # 1854 "05function4.c"
                        type_185->mLongLong=type_185->mLongLong||long_long_142;
                        # 1855 "05function4.c"
                        type_185->mLong=type_185->mLong||long__141;
                        # 1856 "05function4.c"
                        type_185->mShort=type_185->mShort||short__143;
                        # 1857 "05function4.c"
                        type_185->mPointerNum+=pointer_num_180;
                        # 1858 "05function4.c"
                        type_185->mHeap=type_185->mHeap||heap_181;
                    }
                    else {
                        # 1998 "05function4.c"
                        # 1860 "05function4.c"
                        if(_if_conditional409=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_135)),                        _if_conditional409) {
                            # 1867 "05function4.c"
                            for(                            i_237=0;                            i_237<list$1charph_length(info->generics_type_names);                            i_237++                            ){
                                # 1865 "05function4.c"
                                # 1862 "05function4.c"
                                if(_if_conditional410=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_237), "05function4.c", 1862, 9)),type_name_135),                                _if_conditional410) {
                                    # 1863 "05function4.c"
                                    __dec_obj162=type_185;
                                    type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value322=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1863, "sType")))),((char*)(right_value323=xsprintf("generics_type%d",i_237))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                            # 1867 "05function4.c"
                            type_185->mConstant=type_185->mConstant||constant_136;
                            # 1868 "05function4.c"
                            __dec_obj163=type_185->mAlignas;
                            type_185->mAlignas=(struct sNode*)come_increment_ref_count(alignas__152);
                            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                            # 1869 "05function4.c"
                            type_185->mComeMemCore=type_185->mComeMemCore||come_mem_core__151;
                            # 1870 "05function4.c"
                            type_185->mRegister=register__139;
                            # 1871 "05function4.c"
                            type_185->mUnsigned=type_185->mUnsigned||unsigned__140;
                            # 1872 "05function4.c"
                            type_185->mVolatile=volatile__138;
                            # 1873 "05function4.c"
                            type_185->mStatic=type_185->mStatic||static__137;
                            # 1874 "05function4.c"
                            type_185->mExtern=type_185->mExtern||extern__149;
                            # 1875 "05function4.c"
                            type_185->mInline=type_185->mInline||inline__150;
                            # 1876 "05function4.c"
                            type_185->mRestrict=type_185->mRestrict||restrict__144;
                            # 1877 "05function4.c"
                            type_185->mLongLong=type_185->mLongLong||long_long_142;
                            # 1878 "05function4.c"
                            type_185->mLong=type_185->mLong||long__141;
                            # 1879 "05function4.c"
                            type_185->mShort=type_185->mShort||short__143;
                            # 1880 "05function4.c"
                            type_185->mPointerNum+=pointer_num_180;
                            # 1881 "05function4.c"
                            type_185->mHeap=type_185->mHeap||heap_181;
                        }
                        else {
                            # 1998 "05function4.c"
                            # 1883 "05function4.c"
                            if(_if_conditional411=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_135)),                            _if_conditional411) {
                                # 1890 "05function4.c"
                                for(                                i_238=0;                                i_238<list$1charph_length(info->method_generics_type_names);                                i_238++                                ){
                                    # 1888 "05function4.c"
                                    # 1885 "05function4.c"
                                    if(_if_conditional412=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_238), "05function4.c", 1885, 10)),type_name_135),                                    _if_conditional412) {
                                        # 1886 "05function4.c"
                                        __dec_obj164=type_185;
                                        type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value325=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1886, "sType")))),((char*)(right_value326=xsprintf("mgenerics_type%d",i_238))),(_Bool)0,info))));
                                        come_call_finalizer2(sType_finalize,__dec_obj164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                # 1890 "05function4.c"
                                type_185->mConstant=type_185->mConstant||constant_136;
                                # 1891 "05function4.c"
                                __dec_obj165=type_185->mAlignas;
                                type_185->mAlignas=(struct sNode*)come_increment_ref_count(alignas__152);
                                if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                                # 1892 "05function4.c"
                                type_185->mComeMemCore=type_185->mComeMemCore||come_mem_core__151;
                                # 1893 "05function4.c"
                                type_185->mRegister=register__139;
                                # 1894 "05function4.c"
                                type_185->mUnsigned=type_185->mUnsigned||unsigned__140;
                                # 1895 "05function4.c"
                                type_185->mVolatile=volatile__138;
                                # 1896 "05function4.c"
                                type_185->mStatic=type_185->mStatic||static__137;
                                # 1897 "05function4.c"
                                type_185->mExtern=type_185->mExtern||extern__149;
                                # 1898 "05function4.c"
                                type_185->mInline=type_185->mInline||inline__150;
                                # 1899 "05function4.c"
                                type_185->mRestrict=type_185->mRestrict||restrict__144;
                                # 1900 "05function4.c"
                                type_185->mLongLong=type_185->mLongLong||long_long_142;
                                # 1901 "05function4.c"
                                type_185->mLong=type_185->mLong||long__141;
                                # 1902 "05function4.c"
                                type_185->mShort=type_185->mShort||short__143;
                                # 1903 "05function4.c"
                                type_185->mPointerNum+=pointer_num_180;
                                # 1904 "05function4.c"
                                type_185->mHeap=type_185->mHeap||heap_181;
                            }
                            else {
                                # 1998 "05function4.c"
                                # 1906 "05function4.c"
                                if(_if_conditional413=*info->p==60,                                _if_conditional413) {
                                    # 1907 "05function4.c"
                                    info->p++;
                                    # 1908 "05function4.c"
                                    skip_spaces_and_lf(info);
                                    # 1915 "05function4.c"
                                    # 1910 "05function4.c"
                                    if(_if_conditional424=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_135)==((void*)0),                                    _if_conditional424) {
                                        # 1912 "05function4.c"
                                        __result141__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value329=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value328=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1912, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_186 = come_decrement_ref_count2(var_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        return __result141__;
                                    }
                                    # 1915 "05function4.c"
                                    __dec_obj166=type_185;
                                    type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value330=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1915, "sType")))),type_name_135,(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1942 "05function4.c"
                                    while(_while_condtional36=(_Bool)1,                                    _while_condtional36) {
                                        # 1920 "05function4.c"
                                        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value332=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                        generics_type_244=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                                        var_name_245=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                                        err_246=multiple_assign_var4->v3;
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 1924 "05function4.c"
                                        # 1920 "05function4.c"
                                        if(_if_conditional425=!err_246,                                        _if_conditional425) {
                                            # 1921 "05function4.c"
                                            __result142__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value334=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value333=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1921, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            come_call_finalizer2(sType_finalize,generics_type_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_245 = come_decrement_ref_count2(var_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_186 = come_decrement_ref_count2(var_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            return __result142__;
                                        }
                                        # 1924 "05function4.c"
                                        list$1sTypeph_push_back(type_185->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_244));
                                        # 1940 "05function4.c"
                                        # 1926 "05function4.c"
                                        if(_if_conditional426=*info->p==44,                                        _if_conditional426) {
                                            # 1927 "05function4.c"
                                            info->p++;
                                            # 1928 "05function4.c"
                                            skip_spaces_and_lf(info);
                                        }
                                        else {
                                            # 1940 "05function4.c"
                                            # 1930 "05function4.c"
                                            if(_if_conditional427=*info->p==62,                                            _if_conditional427) {
                                                # 1931 "05function4.c"
                                                info->p++;
                                                # 1932 "05function4.c"
                                                skip_spaces_and_lf(info);
                                                # 1934 "05function4.c"
                                                come_call_finalizer2(sType_finalize,generics_type_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_245 = come_decrement_ref_count2(var_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                # 1937 "05function4.c"
                                                err_msg(info,"invalid generics type\n");
                                                # 1938 "05function4.c"
                                                __result143__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value336=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value335=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1938, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                                come_call_finalizer2(sType_finalize,generics_type_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_245 = come_decrement_ref_count2(var_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_186 = come_decrement_ref_count2(var_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                return __result143__;
                                            }
                                        }
                                        come_call_finalizer2(sType_finalize,generics_type_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_245 = come_decrement_ref_count2(var_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 1954 "05function4.c"
                                    # 1942 "05function4.c"
                                    if(_if_conditional428=is_contained_generics_class(type_185,info),                                    _if_conditional428) {
                                        # 1943 "05function4.c"
                                        __dec_obj167=type_185;
                                        type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=solve_generics(type_185,info->generics_type,info))));
                                        come_call_finalizer2(sType_finalize,__dec_obj167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 1952 "05function4.c"
                                        # 1946 "05function4.c"
                                        if(_if_conditional429=!output_generics_struct(type_185,type_185,info),                                        _if_conditional429) {
                                            # 1948 "05function4.c"
                                            new_name_247=(char*)come_increment_ref_count(((char*)(right_value338=create_generics_name(type_185,info))));
                                            right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 1949 "05function4.c"
                                            printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_247);
                                            # 1950 "05function4.c"
                                            exit(7);
                                            new_name_247 = come_decrement_ref_count2(new_name_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    # 1954 "05function4.c"
                                    type_185->mConstant=type_185->mConstant||constant_136;
                                    # 1955 "05function4.c"
                                    __dec_obj168=type_185->mAlignas;
                                    type_185->mAlignas=(struct sNode*)come_increment_ref_count(alignas__152);
                                    if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 1956 "05function4.c"
                                    type_185->mComeMemCore=type_185->mComeMemCore||come_mem_core__151;
                                    # 1957 "05function4.c"
                                    type_185->mRegister=register__139;
                                    # 1958 "05function4.c"
                                    type_185->mUnsigned=type_185->mUnsigned||unsigned__140;
                                    # 1959 "05function4.c"
                                    type_185->mVolatile=volatile__138;
                                    # 1960 "05function4.c"
                                    type_185->mStatic=type_185->mStatic||static__137;
                                    # 1961 "05function4.c"
                                    type_185->mExtern=type_185->mExtern||extern__149;
                                    # 1962 "05function4.c"
                                    type_185->mInline=type_185->mInline||inline__150;
                                    # 1963 "05function4.c"
                                    type_185->mRestrict=type_185->mRestrict||restrict__144;
                                    # 1964 "05function4.c"
                                    type_185->mLongLong=type_185->mLongLong||long_long_142;
                                    # 1965 "05function4.c"
                                    type_185->mLong=type_185->mLong||long__141;
                                    # 1966 "05function4.c"
                                    type_185->mShort=type_185->mShort||short__143;
                                    # 1967 "05function4.c"
                                    type_185->mPointerNum+=pointer_num_180;
                                    # 1968 "05function4.c"
                                    type_185->mHeap=type_185->mHeap||heap_181;
                                }
                                else {
                                    # 1979 "05function4.c"
                                    # 1971 "05function4.c"
                                    if(struct__145) {
                                        # 1972 "05function4.c"
                                        klass_248=map$2charphsClassphp_operator_load_element(info->classes,type_name_135);
                                        # 1977 "05function4.c"
                                        # 1974 "05function4.c"
                                        if(_if_conditional431=klass_248==((void*)0)&&*info->p!=60,                                        _if_conditional431) {
                                            # 1975 "05function4.c"
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_135),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value346=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value345=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1975, "sClass")))),type_name_135,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                            come_call_finalizer2(sClass_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sClass_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                    }
                                    # 1979 "05function4.c"
                                    __dec_obj169=type_185;
                                    type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value348=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value347=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1979, "sType")))),type_name_135,(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1981 "05function4.c"
                                    type_185->mConstant=type_185->mConstant||constant_136;
                                    # 1982 "05function4.c"
                                    __dec_obj170=type_185->mAlignas;
                                    type_185->mAlignas=(struct sNode*)come_increment_ref_count(alignas__152);
                                    if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 1983 "05function4.c"
                                    type_185->mComeMemCore=type_185->mComeMemCore||come_mem_core__151;
                                    # 1984 "05function4.c"
                                    type_185->mRegister=register__139;
                                    # 1985 "05function4.c"
                                    type_185->mUnsigned=type_185->mUnsigned||unsigned__140;
                                    # 1986 "05function4.c"
                                    type_185->mVolatile=volatile__138;
                                    # 1987 "05function4.c"
                                    type_185->mStatic=type_185->mStatic||static__137;
                                    # 1988 "05function4.c"
                                    type_185->mExtern=type_185->mExtern||extern__149;
                                    # 1989 "05function4.c"
                                    type_185->mInline=type_185->mInline||inline__150;
                                    # 1990 "05function4.c"
                                    type_185->mRestrict=type_185->mRestrict||restrict__144;
                                    # 1991 "05function4.c"
                                    type_185->mLongLong=type_185->mLongLong||long_long_142;
                                    # 1992 "05function4.c"
                                    type_185->mLong=type_185->mLong||long__141;
                                    # 1993 "05function4.c"
                                    type_185->mShort=type_185->mShort||short__143;
                                    # 1994 "05function4.c"
                                    type_185->mPointerNum+=pointer_num_180;
                                    # 1995 "05function4.c"
                                    type_185->mHeap=type_185->mHeap||heap_181;
                                }
                            }
                        }
                    }
                    # 1998 "05function4.c"
                    skip_pointer_attribute(info);
                    # 2012 "05function4.c"
                    while(_while_condtional45=*info->p==42,                    _while_condtional45) {
                        # 2001 "05function4.c"
                        info->p++;
                        # 2002 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2004 "05function4.c"
                        skip_pointer_attribute(info);
                        # 2006 "05function4.c"
                        type_185->mPointerNum++;
                        # 2010 "05function4.c"
                        # 2007 "05function4.c"
                        if(type_185->mNoSolvedGenericsType->v1) {
                            # 2008 "05function4.c"
                            type_185->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    # 2022 "05function4.c"
                    # 2012 "05function4.c"
                    if(_if_conditional480=*info->p==37,                    _if_conditional480) {
                        # 2013 "05function4.c"
                        info->p++;
                        # 2014 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2016 "05function4.c"
                        type_185->mHeap=(_Bool)1;
                        # 2020 "05function4.c"
                        # 2017 "05function4.c"
                        if(type_185->mNoSolvedGenericsType->v1) {
                            # 2018 "05function4.c"
                            type_185->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    # 2033 "05function4.c"
                    # 2022 "05function4.c"
                    if(_if_conditional482=*info->p==38,                    _if_conditional482) {
                        # 2023 "05function4.c"
                        info->p++;
                        # 2024 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2026 "05function4.c"
                        type_185->mNoHeap=(_Bool)1;
                        # 2031 "05function4.c"
                        # 2028 "05function4.c"
                        if(type_185->mNoSolvedGenericsType->v1) {
                            # 2029 "05function4.c"
                            type_185->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    # 2046 "05function4.c"
                    # 2033 "05function4.c"
                    if(_if_conditional484=*info->p==63,                    _if_conditional484) {
                        # 2034 "05function4.c"
                        info->p++;
                        # 2044 "05function4.c"
                        # 2036 "05function4.c"
                        if(_if_conditional485=*info->p==63,                        _if_conditional485) {
                            # 2037 "05function4.c"
                            info->p++;
                            # 2038 "05function4.c"
                            type_185->mGuardValue=(_Bool)1;
                        }
                        else {
                            # 2041 "05function4.c"
                            type_185->mNullValue=(_Bool)1;
                        }
                        # 2044 "05function4.c"
                        skip_spaces_and_lf(info);
                    }
                    # 2053 "05function4.c"
                    # 2046 "05function4.c"
                    if(_if_conditional486=*info->p==96,                    _if_conditional486) {
                        # 2047 "05function4.c"
                        info->p++;
                        # 2048 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2050 "05function4.c"
                        type_185->mNoCallingDestructor=(_Bool)1;
                    }
                    # 2053 "05function4.c"
                    skip_pointer_attribute(info);
                    # 2068 "05function4.c"
                    while(_while_condtional46=*info->p==42,                    _while_condtional46) {
                        # 2056 "05function4.c"
                        info->p++;
                        # 2057 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2059 "05function4.c"
                        skip_pointer_attribute(info);
                        # 2061 "05function4.c"
                        type_185->mPointerNum++;
                        # 2066 "05function4.c"
                        # 2063 "05function4.c"
                        if(type_185->mNoSolvedGenericsType->v1) {
                            # 2064 "05function4.c"
                            type_185->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    # 2078 "05function4.c"
                    # 2068 "05function4.c"
                    if(_if_conditional488=*info->p==37,                    _if_conditional488) {
                        # 2069 "05function4.c"
                        info->p++;
                        # 2070 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2072 "05function4.c"
                        type_185->mHeap=(_Bool)1;
                        # 2076 "05function4.c"
                        # 2073 "05function4.c"
                        if(type_185->mNoSolvedGenericsType->v1) {
                            # 2074 "05function4.c"
                            type_185->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    # 2118 "05function4.c"
                    # 2078 "05function4.c"
                    if(_if_conditional490=parse_multiple_type&&*info->p==44,                    _if_conditional490) {
                        # 2079 "05function4.c"
                        types_293=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value350=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value349=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 2079, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 2081 "05function4.c"
                        list$1sTypeph_push_back(types_293,(struct sType*)come_increment_ref_count(((struct sType*)(right_value351=sType_clone(type_185)))));
                        come_call_finalizer2(sType_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 2096 "05function4.c"
                        while(_while_condtional47=*info->p==44,                        _while_condtional47) {
                            # 2084 "05function4.c"
                            info->p++;
                            # 2085 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 2087 "05function4.c"
                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value352=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                            type2_294=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                            name_295=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            err_296=multiple_assign_var5->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 2093 "05function4.c"
                            # 2089 "05function4.c"
                            if(_if_conditional491=!err_296,                            _if_conditional491) {
                                # 2090 "05function4.c"
                                __result168__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value354=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value353=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 2090, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer2(sType_finalize,type2_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                name_295 = come_decrement_ref_count2(name_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sTypephp_finalize,types_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                var_name_186 = come_decrement_ref_count2(var_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                return __result168__;
                            }
                            # 2093 "05function4.c"
                            list$1sTypeph_push_back(types_293,(struct sType*)come_increment_ref_count(((struct sType*)(right_value355=sType_clone(type2_294)))));
                            come_call_finalizer2(sType_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name_295 = come_decrement_ref_count2(name_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2096 "05function4.c"
                        num_tuples_297=list$1sTypeph_length(types_293);
                        # 2098 "05function4.c"
                        __dec_obj171=type_185;
                        type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value358=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value356=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 2098, "sType")))),((char*)(right_value357=xsprintf("tuple%d",num_tuples_297))),(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 2099 "05function4.c"
                        type_185->mPointerNum++;
                        # 2100 "05function4.c"
                        type_185->mHeap=(_Bool)1;
                        # 2106 "05function4.c"
                        for(                        o2_saved_298=(struct list$1sTypeph*)come_increment_ref_count((types_293)),it_299=list$1sTypeph_begin((o2_saved_298));                        !list$1sTypeph_end((o2_saved_298));                        it_299=list$1sTypeph_next((o2_saved_298))                        ){
                            # 2103 "05function4.c"
                            list$1sTypeph_push_back(type_185->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value359=sType_clone(it_299)))));
                            come_call_finalizer2(sType_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 2117 "05function4.c"
                        # 2106 "05function4.c"
                        if(_if_conditional492=is_contained_generics_class(type_185,info),                        _if_conditional492) {
                            # 2107 "05function4.c"
                            __dec_obj172=type_185;
                            type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value360=solve_generics(type_185,info->generics_type,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 2116 "05function4.c"
                            # 2110 "05function4.c"
                            if(_if_conditional493=!output_generics_struct(type_185,type_185,info),                            _if_conditional493) {
                                # 2112 "05function4.c"
                                new_name_300=(char*)come_increment_ref_count(((char*)(right_value361=create_generics_name(type_185,info))));
                                right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 2113 "05function4.c"
                                printf("output generics is failed(%s)\n",new_name_300);
                                # 2114 "05function4.c"
                                exit(9);
                                new_name_300 = come_decrement_ref_count2(new_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,types_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 2209 "05function4.c"
                    # 2167 "05function4.c"
                    if(parse_variable_name) {
                        # 2168 "05function4.c"
                        parse_sharp_v5(info);
                        # 2175 "05function4.c"
                        # 2170 "05function4.c"
                        if(_if_conditional495=var_name_between_brace_191&&*info->p==40,                        _if_conditional495) {
                            # 2171 "05function4.c"
                            info->p++;
                            # 2172 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 2192 "05function4.c"
                        # 2175 "05function4.c"
                        if(_if_conditional496=*info->p==58,                        _if_conditional496) {
                            # 2176 "05function4.c"
                            __dec_obj173=var_name_186;
                            var_name_186=(char*)come_increment_ref_count(((char*)(right_value362=__builtin_string(""))));
                            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 2192 "05function4.c"
                            # 2178 "05function4.c"
                            if(anonymous_name_154) {
                                # 2179 "05function4.c"
                                # 2180 "05function4.c"
                                num_anonymous_var_name_301++;
                                # 2181 "05function4.c"
                                __dec_obj174=var_name_186;
                                var_name_186=(char*)come_increment_ref_count(((char*)(right_value363=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_301))));
                                __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 2192 "05function4.c"
                                # 2183 "05function4.c"
                                if(_if_conditional498=xisalnum(*info->p)||*info->p==95,                                _if_conditional498) {
                                    # 2184 "05function4.c"
                                    __dec_obj175=var_name_186;
                                    var_name_186=(char*)come_increment_ref_count(((char*)(right_value364=parse_word(info))));
                                    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 2187 "05function4.c"
                                    # 2188 "05function4.c"
                                    num_anonymous_var_name_302++;
                                    # 2189 "05function4.c"
                                    __dec_obj176=var_name_186;
                                    var_name_186=(char*)come_increment_ref_count(((char*)(right_value365=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_302))));
                                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        # 2197 "05function4.c"
                        # 2192 "05function4.c"
                        if(_if_conditional499=var_name_between_brace_191&&*info->p==41,                        _if_conditional499) {
                            # 2193 "05function4.c"
                            info->p++;
                            # 2194 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 2208 "05function4.c"
                        # 2197 "05function4.c"
                        if(_if_conditional500=*info->p==58,                        _if_conditional500) {
                            # 2198 "05function4.c"
                            info->p++;
                            # 2199 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 2201 "05function4.c"
                            no_comma_303=info->no_comma;
                            # 2202 "05function4.c"
                            info->no_comma=(_Bool)1;
                            # 2203 "05function4.c"
                            node_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=expression_v13(info))));
                            if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 2204 "05function4.c"
                            info->no_comma=no_comma_303;
                            # 2206 "05function4.c"
                            __dec_obj177=type_185->mSizeNum;
                            type_185->mSizeNum=(struct sNode*)come_increment_ref_count(node_304);
                            if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_304) { node_304 = come_decrement_ref_count2(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    # 2210 "05function4.c"
    parse_sharp_v5(info);
    # 2235 "05function4.c"
    while(_while_condtional48=*info->p==91,    _while_condtional48) {
        # 2213 "05function4.c"
        info->p++;
        # 2214 "05function4.c"
        skip_spaces_and_lf(info);
        # 2215 "05function4.c"
        parse_sharp_v5(info);
        # 2217 "05function4.c"
        skip_pointer_attribute(info);
        # 2227 "05function4.c"
        # 2219 "05function4.c"
        if(_if_conditional501=*info->p==93,        _if_conditional501) {
            # 2220 "05function4.c"
            info->p++;
            # 2221 "05function4.c"
            skip_spaces_and_lf(info);
            # 2223 "05function4.c"
            type_185->mArrayPointerType=(_Bool)1;
            # 2224 "05function4.c"
            type_185->mPointerNum++;
            # 2225 "05function4.c"
            break;
        }
        # 2227 "05function4.c"
        parse_sharp_v5(info);
        # 2229 "05function4.c"
        node_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=expression_v13(info))));
        if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2230 "05function4.c"
        list$1sNodeph_push_back(type_185->mArrayNum,(struct sNode*)come_increment_ref_count(node_305));
        # 2231 "05function4.c"
        parse_sharp_v5(info);
        # 2233 "05function4.c"
        expected_next_character(93,info);
        if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2235 "05function4.c"
    asm_name_306=(char*)come_increment_ref_count(((char*)(right_value368=parse_attribute(info))));
    right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2237 "05function4.c"
    __dec_obj178=type_185->mAsmName;
    type_185->mAsmName=(char*)come_increment_ref_count(asm_name_306);
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2239 "05function4.c"
    parse_sharp_v5(info);
    # 2241 "05function4.c"
    __result169__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value370=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value369=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 2241, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_185),(char*)come_increment_ref_count(var_name_186),(_Bool)1)));
    type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_186 = come_decrement_ref_count2(var_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_306 = come_decrement_ref_count2(asm_name_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result169__;
    type_name_135 = come_decrement_ref_count2(type_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__152) { alignas__152 = come_decrement_ref_count2(alignas__152, ((struct sNode*)alignas__152)->finalize, ((struct sNode*)alignas__152)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_186 = come_decrement_ref_count2(var_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_306 = come_decrement_ref_count2(asm_name_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
struct sType* __dec_obj81;
char* __dec_obj82;
struct tuple3$3sTypephcharphbool* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1805 "./comelang2.h"
                                __dec_obj81=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 1806 "./comelang2.h"
                                __dec_obj82=self->v2;
                                self->v2=(char*)come_increment_ref_count(v2);
                                __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 1807 "./comelang2.h"
                                self->v3=v3;
                                # 1809 "./comelang2.h"
                                __result106__ = __result_obj__ = self;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result106__;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_206;
unsigned int hash_207;
unsigned int it_208;
_Bool _while_condtional32;
_Bool _if_conditional370;
_Bool _if_conditional371;
struct sType* __result116__;
_Bool _if_conditional372;
_Bool _if_conditional373;
struct sType* __result117__;
struct sType* __result118__;
struct sType* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_206, 0, sizeof(struct sType*));
memset(&hash_207, 0, sizeof(unsigned int));
memset(&it_208, 0, sizeof(unsigned int));
                # 1545 "./comelang2.h"
                # 1546 "./comelang2.h"
                memset(&default_value_206,0,sizeof(struct sType*));
                # 1548 "./comelang2.h"
                hash_207=string_get_hash_key(((char*)key))%self->size;
                # 1549 "./comelang2.h"
                it_208=hash_207;
                # 1573 "./comelang2.h"
                while(_while_condtional32=(_Bool)1,                _while_condtional32) {
                    # 1571 "./comelang2.h"
                    # 1552 "./comelang2.h"
                    if(_if_conditional370=self->item_existance[it_208],                    _if_conditional370) {
                        # 1559 "./comelang2.h"
                        # 1554 "./comelang2.h"
                        if(_if_conditional371=string_equals(self->keys[it_208],key),                        _if_conditional371) {
                            # 1556 "./comelang2.h"
                            __result116__ = __result_obj__ = self->items[it_208];
                            come_call_finalizer2(sType_finalize,default_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result116__;
                        }
                        # 1559 "./comelang2.h"
                        it_208++;
                        # 1567 "./comelang2.h"
                        # 1561 "./comelang2.h"
                        if(_if_conditional372=it_208>=self->size,                        _if_conditional372) {
                            # 1562 "./comelang2.h"
                            it_208=0;
                        }
                        else {
                            # 1567 "./comelang2.h"
                            # 1564 "./comelang2.h"
                            if(_if_conditional373=it_208==hash_207,                            _if_conditional373) {
                                # 1565 "./comelang2.h"
                                __result117__ = __result_obj__ = default_value_206;
                                come_call_finalizer2(sType_finalize,default_value_206, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result117__;
                            }
                        }
                    }
                    else {
                        # 1569 "./comelang2.h"
                        __result118__ = __result_obj__ = default_value_206;
                        come_call_finalizer2(sType_finalize,default_value_206, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result118__;
                    }
                }
                # 1573 "./comelang2.h"
                __result119__ = __result_obj__ = default_value_206;
                come_call_finalizer2(sType_finalize,default_value_206, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result119__;
                come_call_finalizer2(sType_finalize,default_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_211;
_Bool _if_conditional379;
_Bool __result127__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_211, 0, sizeof(char*));
                    # 746 "./comelang2.h"
                    for(                    it_211=list$1charph_begin(self);                    !list$1charph_end(self);                    it_211=list$1charph_next(self)                    ){
                        # 744 "./comelang2.h"
                        # 741 "./comelang2.h"
                        if(_if_conditional379=string_operator_equals(it_211,item),                        _if_conditional379) {
                            # 742 "./comelang2.h"
                            __result127__ = (_Bool)1;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result127__;
                        }
                    }
                    # 746 "./comelang2.h"
                    __result128__ = (_Bool)0;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result128__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional375;
char* result_209;
char* __result120__;
_Bool _if_conditional376;
char* __result121__;
char* result_210;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_209, 0, sizeof(char*));
memset(&result_210, 0, sizeof(char*));
                        # 290 "./comelang2.h"
                        # 285 "./comelang2.h"
                        if(_if_conditional375=self==((void*)0),                        _if_conditional375) {
                            # 286 "./comelang2.h"
                            # 287 "./comelang2.h"
                            memset(&result_209,0,sizeof(char*));
                            # 288 "./comelang2.h"
                            __result120__ = __result_obj__ = result_209;
                            return __result120__;
                        }
                        # 290 "./comelang2.h"
                        self->it=self->head;
                        # 296 "./comelang2.h"
                        # 292 "./comelang2.h"
                        if(self->it) {
                            # 293 "./comelang2.h"
                            __result121__ = __result_obj__ = self->it->item;
                            return __result121__;
                        }
                        # 296 "./comelang2.h"
                        # 297 "./comelang2.h"
                        memset(&result_210,0,sizeof(char*));
                        # 298 "./comelang2.h"
                        __result122__ = __result_obj__ = result_210;
                        return __result122__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 320 "./comelang2.h"
                        __result123__ = self==((void*)0)||self->it==((void*)0);
                        return __result123__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional377;
char* result_212;
char* __result124__;
_Bool _if_conditional378;
char* __result125__;
char* result_213;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_212, 0, sizeof(char*));
memset(&result_213, 0, sizeof(char*));
                        # 308 "./comelang2.h"
                        # 302 "./comelang2.h"
                        if(_if_conditional377=self==((void*)0)||self->it==((void*)0),                        _if_conditional377) {
                            # 303 "./comelang2.h"
                            # 304 "./comelang2.h"
                            memset(&result_212,0,sizeof(char*));
                            # 305 "./comelang2.h"
                            __result124__ = __result_obj__ = result_212;
                            return __result124__;
                        }
                        # 308 "./comelang2.h"
                        self->it=self->it->next;
                        # 314 "./comelang2.h"
                        # 310 "./comelang2.h"
                        if(self->it) {
                            # 311 "./comelang2.h"
                            __result125__ = __result_obj__ = self->it->item;
                            return __result125__;
                        }
                        # 314 "./comelang2.h"
                        # 315 "./comelang2.h"
                        memset(&result_213,0,sizeof(char*));
                        # 316 "./comelang2.h"
                        __result126__ = __result_obj__ = result_213;
                        return __result126__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional381;
int __result129__;
int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 367 "./comelang2.h"
                        # 364 "./comelang2.h"
                        if(_if_conditional381=self==((void*)0),                        _if_conditional381) {
                            # 365 "./comelang2.h"
                            __result129__ = 0;
                            return __result129__;
                        }
                        # 367 "./comelang2.h"
                        __result130__ = self->len;
                        return __result130__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional382;
struct list_item$1charph* it_215;
int i_216;
_Bool _while_condtional33;
_Bool _if_conditional383;
char* __result131__;
char* default_value_217;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_215, 0, sizeof(struct list_item$1charph*));
memset(&i_216, 0, sizeof(int));
memset(&default_value_217, 0, sizeof(char*));
                            # 686 "./comelang2.h"
                            # 682 "./comelang2.h"
                            if(_if_conditional382=position<0,                            _if_conditional382) {
                                # 683 "./comelang2.h"
                                position+=self->len;
                            }
                            # 686 "./comelang2.h"
                            it_215=self->head;
                            # 687 "./comelang2.h"
                            i_216=0;
                            # 694 "./comelang2.h"
                            while(_while_condtional33=it_215!=((void*)0),                            _while_condtional33) {
                                # 692 "./comelang2.h"
                                # 689 "./comelang2.h"
                                if(_if_conditional383=position==i_216,                                _if_conditional383) {
                                    # 690 "./comelang2.h"
                                    __result131__ = __result_obj__ = it_215->item;
                                    return __result131__;
                                }
                                # 692 "./comelang2.h"
                                it_215=it_215->next;
                                # 693 "./comelang2.h"
                                i_216++;
                            }
                            # 696 "./comelang2.h"
                            # 697 "./comelang2.h"
                            memset(&default_value_217,0,sizeof(char*));
                            # 698 "./comelang2.h"
                            __result132__ = __result_obj__ = default_value_217;
                            default_value_217 = come_decrement_ref_count2(default_value_217, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result132__;
                            default_value_217 = come_decrement_ref_count2(default_value_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj137;
struct tuple1$1sTypeph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1736 "./comelang2.h"
                __dec_obj137=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1738 "./comelang2.h"
                __result133__ = __result_obj__ = self;
                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result133__;
                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
char* __dec_obj152;
struct tuple3$3sTypepcharphbool* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1805 "./comelang2.h"
                            self->v1=v1;
                            # 1806 "./comelang2.h"
                            __dec_obj152=self->v2;
                            self->v2=(char*)come_increment_ref_count(v2);
                            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 1807 "./comelang2.h"
                            self->v3=v3;
                            # 1809 "./comelang2.h"
                            __result135__ = __result_obj__ = self;
                            come_call_finalizer2(tuple3$3sTypepcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result135__;
                            come_call_finalizer2(tuple3$3sTypepcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
void* __result_obj__;
_Bool _if_conditional398;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple3$3sTypepcharphboolp_finalize"
                                # 0 "tuple3$3sTypepcharphboolp_finalize"
                                if(_if_conditional398=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional398) {
                                    # 0 "tuple3$3sTypepcharphboolp_finalize"
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional399;
_Bool _if_conditional400;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "CVALUE_finalize"
                        # 0 "CVALUE_finalize"
                        if(_if_conditional399=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional399) {
                            # 0 "CVALUE_finalize"
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "CVALUE_finalize"
                        # 1 "CVALUE_finalize"
                        if(_if_conditional400=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional400) {
                            # 1 "CVALUE_finalize"
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_239;
unsigned int hash_240;
unsigned int it_241;
_Bool _while_condtional34;
_Bool _if_conditional414;
_Bool _if_conditional415;
struct sClass* __result137__;
_Bool _if_conditional422;
_Bool _if_conditional423;
struct sClass* __result138__;
struct sClass* __result139__;
struct sClass* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_239, 0, sizeof(struct sClass*));
memset(&hash_240, 0, sizeof(unsigned int));
memset(&it_241, 0, sizeof(unsigned int));
                                        # 1545 "./comelang2.h"
                                        # 1546 "./comelang2.h"
                                        memset(&default_value_239,0,sizeof(struct sClass*));
                                        # 1548 "./comelang2.h"
                                        hash_240=string_get_hash_key(((char*)key))%self->size;
                                        # 1549 "./comelang2.h"
                                        it_241=hash_240;
                                        # 1573 "./comelang2.h"
                                        while(_while_condtional34=(_Bool)1,                                        _while_condtional34) {
                                            # 1571 "./comelang2.h"
                                            # 1552 "./comelang2.h"
                                            if(_if_conditional414=self->item_existance[it_241],                                            _if_conditional414) {
                                                # 1559 "./comelang2.h"
                                                # 1554 "./comelang2.h"
                                                if(_if_conditional415=string_equals(self->keys[it_241],key),                                                _if_conditional415) {
                                                    # 1556 "./comelang2.h"
                                                    __result137__ = __result_obj__ = self->items[it_241];
                                                    come_call_finalizer2(sClass_finalize,default_value_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result137__;
                                                }
                                                # 1559 "./comelang2.h"
                                                it_241++;
                                                # 1567 "./comelang2.h"
                                                # 1561 "./comelang2.h"
                                                if(_if_conditional422=it_241>=self->size,                                                _if_conditional422) {
                                                    # 1562 "./comelang2.h"
                                                    it_241=0;
                                                }
                                                else {
                                                    # 1567 "./comelang2.h"
                                                    # 1564 "./comelang2.h"
                                                    if(_if_conditional423=it_241==hash_240,                                                    _if_conditional423) {
                                                        # 1565 "./comelang2.h"
                                                        __result138__ = __result_obj__ = default_value_239;
                                                        come_call_finalizer2(sClass_finalize,default_value_239, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result138__;
                                                    }
                                                }
                                            }
                                            else {
                                                # 1569 "./comelang2.h"
                                                __result139__ = __result_obj__ = default_value_239;
                                                come_call_finalizer2(sClass_finalize,default_value_239, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result139__;
                                            }
                                        }
                                        # 1573 "./comelang2.h"
                                        __result140__ = __result_obj__ = default_value_239;
                                        come_call_finalizer2(sClass_finalize,default_value_239, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result140__;
                                        come_call_finalizer2(sClass_finalize,default_value_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional421;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "sClass_finalize"
                                                        # 0 "sClass_finalize"
                                                        if(_if_conditional416=self!=((void*)0)&&self->mName!=((void*)0),                                                        _if_conditional416) {
                                                            # 0 "sClass_finalize"
                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 2 "sClass_finalize"
                                                        # 1 "sClass_finalize"
                                                        if(_if_conditional417=self!=((void*)0)&&self->mFields!=((void*)0),                                                        _if_conditional417) {
                                                            # 1 "sClass_finalize"
                                                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 3 "sClass_finalize"
                                                        # 2 "sClass_finalize"
                                                        if(_if_conditional421=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                        _if_conditional421) {
                                                            # 2 "sClass_finalize"
                                                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_242;
_Bool _while_condtional35;
struct list_item$1tuple2$2charphsTypephph* prev_it_243;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_242, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_243, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                # 123 "./comelang2.h"
                                                                it_242=self->head;
                                                                # 129 "./comelang2.h"
                                                                while(_while_condtional35=it_242!=((void*)0),                                                                _while_condtional35) {
                                                                    # 125 "./comelang2.h"
                                                                    prev_it_243=it_242;
                                                                    # 126 "./comelang2.h"
                                                                    it_242=it_242->next;
                                                                    # 127 "./comelang2.h"
                                                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional418;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                        if(_if_conditional418=self!=((void*)0)&&self->item!=((void*)0),                                                                        _if_conditional418) {
                                                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional419;
_Bool _if_conditional420;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                                                if(_if_conditional419=self!=((void*)0)&&self->v1!=((void*)0),                                                                                _if_conditional419) {
                                                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                                                if(_if_conditional420=self!=((void*)0)&&self->v2!=((void*)0),                                                                                _if_conditional420) {
                                                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional432;
unsigned int hash_266;
unsigned int it_267;
_Bool _while_condtional39;
_Bool _if_conditional444;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional466;
_Bool _if_conditional467;
_Bool _if_conditional468;
_Bool _if_conditional469;
_Bool _if_conditional470;
_Bool same_key_exist_284;
char* it2_287;
_Bool _if_conditional475;
_Bool _if_conditional476;
struct map$2charphsClassph* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_266, 0, sizeof(unsigned int));
memset(&it_267, 0, sizeof(unsigned int));
memset(&same_key_exist_284, 0, sizeof(_Bool));
memset(&it2_287, 0, sizeof(char*));
                                                # 1393 "./comelang2.h"
                                                # 1390 "./comelang2.h"
                                                if(_if_conditional432=self->len*10>=self->size,                                                _if_conditional432) {
                                                    # 1391 "./comelang2.h"
                                                    map$2charphsClassph_rehash(self);
                                                }
                                                # 1393 "./comelang2.h"
                                                hash_266=string_get_hash_key(key)%self->size;
                                                # 1394 "./comelang2.h"
                                                it_267=hash_266;
                                                # 1452 "./comelang2.h"
                                                while(_while_condtional39=(_Bool)1,                                                _while_condtional39) {
                                                    # 1450 "./comelang2.h"
                                                    # 1397 "./comelang2.h"
                                                    if(_if_conditional444=self->item_existance[it_267],                                                    _if_conditional444) {
                                                        # 1420 "./comelang2.h"
                                                        # 1399 "./comelang2.h"
                                                        if(_if_conditional445=string_equals(self->keys[it_267],key),                                                        _if_conditional445) {
                                                            # 1410 "./comelang2.h"
                                                            # 1401 "./comelang2.h"
                                                            if(_if_conditional446=1,                                                            _if_conditional446) {
                                                                # 1402 "./comelang2.h"
                                                                list$1charp_remove(self->key_list,self->keys[it_267]);
                                                                # 1403 "./comelang2.h"
                                                                self->keys[it_267] = come_decrement_ref_count2(self->keys[it_267], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                # 1404 "./comelang2.h"
                                                                self->keys[it_267]=(char*)come_increment_ref_count(key);
                                                            }
                                                            else {
                                                                # 1407 "./comelang2.h"
                                                                list$1charp_remove(self->key_list,self->keys[it_267]);
                                                                # 1408 "./comelang2.h"
                                                                self->keys[it_267]=key;
                                                            }
                                                            # 1417 "./comelang2.h"
                                                            # 1410 "./comelang2.h"
                                                            if(_if_conditional466=1,                                                            _if_conditional466) {
                                                                # 1411 "./comelang2.h"
                                                                come_call_finalizer2(sClass_finalize,self->items[it_267], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 1412 "./comelang2.h"
                                                                self->items[it_267]=(struct sClass*)come_increment_ref_count(item);
                                                            }
                                                            else {
                                                                # 1415 "./comelang2.h"
                                                                self->items[it_267]=item;
                                                            }
                                                            # 1417 "./comelang2.h"
                                                            break;
                                                        }
                                                        # 1420 "./comelang2.h"
                                                        it_267++;
                                                        # 1430 "./comelang2.h"
                                                        # 1422 "./comelang2.h"
                                                        if(_if_conditional467=it_267>=self->size,                                                        _if_conditional467) {
                                                            # 1423 "./comelang2.h"
                                                            it_267=0;
                                                        }
                                                        else {
                                                            # 1430 "./comelang2.h"
                                                            # 1425 "./comelang2.h"
                                                            if(_if_conditional468=it_267==hash_266,                                                            _if_conditional468) {
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
                                                        self->item_existance[it_267]=(_Bool)1;
                                                        # 1439 "./comelang2.h"
                                                        # 1433 "./comelang2.h"
                                                        if(_if_conditional469=1,                                                        _if_conditional469) {
                                                            # 1434 "./comelang2.h"
                                                            self->keys[it_267]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            # 1437 "./comelang2.h"
                                                            self->keys[it_267]=key;
                                                        }
                                                        # 1446 "./comelang2.h"
                                                        # 1439 "./comelang2.h"
                                                        if(_if_conditional470=1,                                                        _if_conditional470) {
                                                            # 1440 "./comelang2.h"
                                                            self->items[it_267]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            # 1443 "./comelang2.h"
                                                            self->items[it_267]=item;
                                                        }
                                                        # 1446 "./comelang2.h"
                                                        self->len++;
                                                        # 1448 "./comelang2.h"
                                                        break;
                                                    }
                                                }
                                                # 1452 "./comelang2.h"
                                                same_key_exist_284=(_Bool)0;
                                                # 1461 "./comelang2.h"
                                                for(                                                it2_287=list$1charp_begin(self->key_list);                                                !list$1charp_end(self->key_list);                                                it2_287=list$1charp_next(self->key_list)                                                ){
                                                    # 1459 "./comelang2.h"
                                                    # 1455 "./comelang2.h"
                                                    if(_if_conditional475=string_equals(it2_287,key),                                                    _if_conditional475) {
                                                        # 1456 "./comelang2.h"
                                                        puts("SAME KEY");
                                                        # 1457 "./comelang2.h"
                                                        same_key_exist_284=(_Bool)1;
                                                    }
                                                }
                                                # 1465 "./comelang2.h"
                                                # 1461 "./comelang2.h"
                                                if(_if_conditional476=!same_key_exist_284,                                                _if_conditional476) {
                                                    # 1462 "./comelang2.h"
                                                    list$1charp_push_back(self->key_list,key);
                                                }
                                                # 1465 "./comelang2.h"
                                                __result167__ = __result_obj__ = self;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result167__;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_249;
void* right_value339;
char** keys_250;
void* right_value340;
struct sClass** items_251;
void* right_value341;
_Bool* item_existance_252;
int len_253;
char* it_256;
struct sClass* default_value_259;
struct sClass* it2_262;
unsigned int hash_263;
int n_264;
_Bool _while_condtional38;
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
struct sClass* default_value_265;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_249, 0, sizeof(int));
right_value339 = (void*)0;
memset(&keys_250, 0, sizeof(char**));
right_value340 = (void*)0;
memset(&items_251, 0, sizeof(struct sClass**));
right_value341 = (void*)0;
memset(&item_existance_252, 0, sizeof(_Bool*));
memset(&len_253, 0, sizeof(int));
memset(&it_256, 0, sizeof(char*));
memset(&default_value_259, 0, sizeof(struct sClass*));
memset(&it2_262, 0, sizeof(struct sClass*));
memset(&hash_263, 0, sizeof(unsigned int));
memset(&n_264, 0, sizeof(int));
memset(&default_value_265, 0, sizeof(struct sClass*));
                                                        # 1337 "./comelang2.h"
                                                        size_249=self->size*10;
                                                        # 1338 "./comelang2.h"
                                                        keys_250=(char**)come_increment_ref_count(((char**)(right_value339=(char**)come_calloc(1, sizeof(char*)*(1*(size_249)), "./comelang2.h", 1338, "char*%"))));
                                                        right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1339 "./comelang2.h"
                                                        items_251=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value340=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_249)), "./comelang2.h", 1339, "sClass*%"))));
                                                        come_call_finalizer2(sClass_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 1340 "./comelang2.h"
                                                        item_existance_252=(_Bool*)come_increment_ref_count(((_Bool*)(right_value341=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_249)), "./comelang2.h", 1340, "bool"))));
                                                        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1342 "./comelang2.h"
                                                        len_253=0;
                                                        # 1377 "./comelang2.h"
                                                        for(                                                        it_256=map$2charphsClassph_begin(self);                                                        !map$2charphsClassph_end(self);                                                        it_256=map$2charphsClassph_next(self)                                                        ){
                                                            # 1345 "./comelang2.h"
                                                            # 1346 "./comelang2.h"
                                                            memset(&default_value_259,0,sizeof(struct sClass*));
                                                            # 1347 "./comelang2.h"
                                                            it2_262=map$2charphsClassph_at(self,it_256,default_value_259);
                                                            # 1348 "./comelang2.h"
                                                            hash_263=string_get_hash_key(it_256)%size_249;
                                                            # 1349 "./comelang2.h"
                                                            n_264=hash_263;
                                                            # 1375 "./comelang2.h"
                                                            while(_while_condtional38=(_Bool)1,                                                            _while_condtional38) {
                                                                # 1374 "./comelang2.h"
                                                                # 1352 "./comelang2.h"
                                                                if(_if_conditional441=item_existance_252[n_264],                                                                _if_conditional441) {
                                                                    # 1354 "./comelang2.h"
                                                                    n_264++;
                                                                    # 1364 "./comelang2.h"
                                                                    # 1356 "./comelang2.h"
                                                                    if(_if_conditional442=n_264>=size_249,                                                                    _if_conditional442) {
                                                                        # 1357 "./comelang2.h"
                                                                        n_264=0;
                                                                    }
                                                                    else {
                                                                        # 1364 "./comelang2.h"
                                                                        # 1359 "./comelang2.h"
                                                                        if(_if_conditional443=n_264==hash_263,                                                                        _if_conditional443) {
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
                                                                    item_existance_252[n_264]=(_Bool)1;
                                                                    # 1367 "./comelang2.h"
                                                                    keys_250[n_264]=it_256;
                                                                    # 1368 "./comelang2.h"
                                                                    # 1369 "./comelang2.h"
                                                                    items_251[n_264]=map$2charphsClassph_at(self,it_256,default_value_265);
                                                                    # 1371 "./comelang2.h"
                                                                    len_253++;
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
                                                        self->keys=keys_250;
                                                        # 1382 "./comelang2.h"
                                                        self->items=items_251;
                                                        # 1383 "./comelang2.h"
                                                        self->item_existance=item_existance_252;
                                                        # 1385 "./comelang2.h"
                                                        self->size=size_249;
                                                        # 1386 "./comelang2.h"
                                                        self->len=len_253;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional433;
char* result_254;
char* __result144__;
_Bool _if_conditional434;
char* __result145__;
char* result_255;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_254, 0, sizeof(char*));
memset(&result_255, 0, sizeof(char*));
                                                            # 1304 "./comelang2.h"
                                                            # 1299 "./comelang2.h"
                                                            if(_if_conditional433=self==((void*)0),                                                            _if_conditional433) {
                                                                # 1300 "./comelang2.h"
                                                                # 1301 "./comelang2.h"
                                                                memset(&result_254,0,sizeof(char*));
                                                                # 1302 "./comelang2.h"
                                                                __result144__ = __result_obj__ = result_254;
                                                                return __result144__;
                                                            }
                                                            # 1304 "./comelang2.h"
                                                            self->key_list->it=self->key_list->head;
                                                            # 1310 "./comelang2.h"
                                                            # 1306 "./comelang2.h"
                                                            if(self->key_list->it) {
                                                                # 1307 "./comelang2.h"
                                                                __result145__ = __result_obj__ = self->key_list->it->item;
                                                                return __result145__;
                                                            }
                                                            # 1310 "./comelang2.h"
                                                            # 1311 "./comelang2.h"
                                                            memset(&result_255,0,sizeof(char*));
                                                            # 1312 "./comelang2.h"
                                                            __result146__ = __result_obj__ = result_255;
                                                            return __result146__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1333 "./comelang2.h"
                                                            __result147__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                            return __result147__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional435;
char* result_257;
char* __result148__;
_Bool _if_conditional436;
char* __result149__;
char* result_258;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_257, 0, sizeof(char*));
memset(&result_258, 0, sizeof(char*));
                                                            # 1321 "./comelang2.h"
                                                            # 1316 "./comelang2.h"
                                                            if(_if_conditional435=self==((void*)0)||self->key_list->it==((void*)0),                                                            _if_conditional435) {
                                                                # 1317 "./comelang2.h"
                                                                # 1318 "./comelang2.h"
                                                                memset(&result_257,0,sizeof(char*));
                                                                # 1319 "./comelang2.h"
                                                                __result148__ = __result_obj__ = result_257;
                                                                return __result148__;
                                                            }
                                                            # 1321 "./comelang2.h"
                                                            self->key_list->it=self->key_list->it->next;
                                                            # 1327 "./comelang2.h"
                                                            # 1323 "./comelang2.h"
                                                            if(self->key_list->it) {
                                                                # 1324 "./comelang2.h"
                                                                __result149__ = __result_obj__ = self->key_list->it->item;
                                                                return __result149__;
                                                            }
                                                            # 1327 "./comelang2.h"
                                                            # 1328 "./comelang2.h"
                                                            memset(&result_258,0,sizeof(char*));
                                                            # 1329 "./comelang2.h"
                                                            __result150__ = __result_obj__ = result_258;
                                                            return __result150__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_260;
unsigned int it_261;
_Bool _while_condtional37;
_Bool _if_conditional437;
_Bool _if_conditional438;
struct sClass* __result151__;
_Bool _if_conditional439;
_Bool _if_conditional440;
struct sClass* __result152__;
struct sClass* __result153__;
struct sClass* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_260, 0, sizeof(unsigned int));
memset(&it_261, 0, sizeof(unsigned int));
                                                                # 1226 "./comelang2.h"
                                                                hash_260=string_get_hash_key(((char*)key))%self->size;
                                                                # 1227 "./comelang2.h"
                                                                it_261=hash_260;
                                                                # 1251 "./comelang2.h"
                                                                while(_while_condtional37=(_Bool)1,                                                                _while_condtional37) {
                                                                    # 1249 "./comelang2.h"
                                                                    # 1230 "./comelang2.h"
                                                                    if(_if_conditional437=self->item_existance[it_261],                                                                    _if_conditional437) {
                                                                        # 1237 "./comelang2.h"
                                                                        # 1232 "./comelang2.h"
                                                                        if(_if_conditional438=string_equals(self->keys[it_261],key),                                                                        _if_conditional438) {
                                                                            # 1234 "./comelang2.h"
                                                                            __result151__ = __result_obj__ = self->items[it_261];
                                                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result151__;
                                                                        }
                                                                        # 1237 "./comelang2.h"
                                                                        it_261++;
                                                                        # 1245 "./comelang2.h"
                                                                        # 1239 "./comelang2.h"
                                                                        if(_if_conditional439=it_261>=self->size,                                                                        _if_conditional439) {
                                                                            # 1240 "./comelang2.h"
                                                                            it_261=0;
                                                                        }
                                                                        else {
                                                                            # 1245 "./comelang2.h"
                                                                            # 1242 "./comelang2.h"
                                                                            if(_if_conditional440=it_261==hash_260,                                                                            _if_conditional440) {
                                                                                # 1243 "./comelang2.h"
                                                                                __result152__ = __result_obj__ = default_value;
                                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result152__;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1247 "./comelang2.h"
                                                                        __result153__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result153__;
                                                                    }
                                                                }
                                                                # 1251 "./comelang2.h"
                                                                __result154__ = __result_obj__ = default_value;
                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result154__;
                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_268;
struct list_item$1charp* it_269;
_Bool _while_condtional40;
_Bool _if_conditional447;
struct list$1charp* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_268, 0, sizeof(int));
memset(&it_269, 0, sizeof(struct list_item$1charp*));
                                                                    # 448 "./comelang2.h"
                                                                    it2_268=0;
                                                                    # 449 "./comelang2.h"
                                                                    it_269=self->head;
                                                                    # 460 "./comelang2.h"
                                                                    while(_while_condtional40=it_269!=((void*)0),                                                                    _while_condtional40) {
                                                                        # 455 "./comelang2.h"
                                                                        # 451 "./comelang2.h"
                                                                        if(_if_conditional447=string_equals(it_269->item,item),                                                                        _if_conditional447) {
                                                                            # 452 "./comelang2.h"
                                                                            list$1charp_delete(self,it2_268,it2_268+1);
                                                                            # 453 "./comelang2.h"
                                                                            break;
                                                                        }
                                                                        # 455 "./comelang2.h"
                                                                        it2_268++;
                                                                        # 457 "./comelang2.h"
                                                                        it_269=it_269->next;
                                                                    }
                                                                    # 460 "./comelang2.h"
                                                                    __result158__ = __result_obj__ = self;
                                                                    return __result158__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
int tmp_270;
_Bool _if_conditional451;
_Bool _if_conditional452;
_Bool _if_conditional453;
struct list$1charp* __result155__;
_Bool _if_conditional454;
_Bool _if_conditional455;
struct list_item$1charp* it_273;
int i_274;
_Bool _while_condtional42;
_Bool _if_conditional456;
struct list_item$1charp* prev_it_275;
_Bool _if_conditional457;
_Bool _if_conditional458;
struct list_item$1charp* it_276;
int i_277;
_Bool _while_condtional43;
_Bool _if_conditional459;
_Bool _if_conditional460;
struct list_item$1charp* prev_it_278;
struct list_item$1charp* it_279;
struct list_item$1charp* head_prev_it_280;
struct list_item$1charp* tail_it_281;
int i_282;
_Bool _while_condtional44;
_Bool _if_conditional461;
_Bool _if_conditional462;
_Bool _if_conditional463;
struct list_item$1charp* prev_it_283;
_Bool _if_conditional464;
_Bool _if_conditional465;
struct list$1charp* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_270, 0, sizeof(int));
memset(&it_273, 0, sizeof(struct list_item$1charp*));
memset(&i_274, 0, sizeof(int));
memset(&prev_it_275, 0, sizeof(struct list_item$1charp*));
memset(&it_276, 0, sizeof(struct list_item$1charp*));
memset(&i_277, 0, sizeof(int));
memset(&prev_it_278, 0, sizeof(struct list_item$1charp*));
memset(&it_279, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_280, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_281, 0, sizeof(struct list_item$1charp*));
memset(&i_282, 0, sizeof(int));
memset(&prev_it_283, 0, sizeof(struct list_item$1charp*));
                                                                                # 467 "./comelang2.h"
                                                                                # 464 "./comelang2.h"
                                                                                if(_if_conditional448=head<0,                                                                                _if_conditional448) {
                                                                                    # 465 "./comelang2.h"
                                                                                    head+=self->len;
                                                                                }
                                                                                # 471 "./comelang2.h"
                                                                                # 467 "./comelang2.h"
                                                                                if(_if_conditional449=tail<0,                                                                                _if_conditional449) {
                                                                                    # 468 "./comelang2.h"
                                                                                    tail+=self->len+1;
                                                                                }
                                                                                # 477 "./comelang2.h"
                                                                                # 471 "./comelang2.h"
                                                                                if(_if_conditional450=head>tail,                                                                                _if_conditional450) {
                                                                                    # 472 "./comelang2.h"
                                                                                    tmp_270=tail;
                                                                                    # 473 "./comelang2.h"
                                                                                    tail=head;
                                                                                    # 474 "./comelang2.h"
                                                                                    head=tmp_270;
                                                                                }
                                                                                # 481 "./comelang2.h"
                                                                                # 477 "./comelang2.h"
                                                                                if(_if_conditional451=head<0,                                                                                _if_conditional451) {
                                                                                    # 478 "./comelang2.h"
                                                                                    head=0;
                                                                                }
                                                                                # 485 "./comelang2.h"
                                                                                # 481 "./comelang2.h"
                                                                                if(_if_conditional452=tail>self->len,                                                                                _if_conditional452) {
                                                                                    # 482 "./comelang2.h"
                                                                                    tail=self->len;
                                                                                }
                                                                                # 489 "./comelang2.h"
                                                                                # 485 "./comelang2.h"
                                                                                if(_if_conditional453=head==tail,                                                                                _if_conditional453) {
                                                                                    # 486 "./comelang2.h"
                                                                                    __result155__ = __result_obj__ = self;
                                                                                    return __result155__;
                                                                                }
                                                                                # 584 "./comelang2.h"
                                                                                # 489 "./comelang2.h"
                                                                                if(_if_conditional454=head==0&&tail==self->len,                                                                                _if_conditional454) {
                                                                                    # 491 "./comelang2.h"
                                                                                    list$1charp_reset(self);
                                                                                }
                                                                                else {
                                                                                    # 584 "./comelang2.h"
                                                                                    # 493 "./comelang2.h"
                                                                                    if(_if_conditional455=head==0,                                                                                    _if_conditional455) {
                                                                                        # 494 "./comelang2.h"
                                                                                        it_273=self->head;
                                                                                        # 495 "./comelang2.h"
                                                                                        i_274=0;
                                                                                        # 517 "./comelang2.h"
                                                                                        while(_while_condtional42=it_273!=((void*)0),                                                                                        _while_condtional42) {
                                                                                            # 516 "./comelang2.h"
                                                                                            # 497 "./comelang2.h"
                                                                                            if(_if_conditional456=i_274<tail,                                                                                            _if_conditional456) {
                                                                                                # 498 "./comelang2.h"
                                                                                                prev_it_275=it_273;
                                                                                                # 500 "./comelang2.h"
                                                                                                it_273=it_273->next;
                                                                                                # 501 "./comelang2.h"
                                                                                                i_274++;
                                                                                                # 503 "./comelang2.h"
                                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                # 505 "./comelang2.h"
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                # 516 "./comelang2.h"
                                                                                                # 507 "./comelang2.h"
                                                                                                if(_if_conditional457=i_274==tail,                                                                                                _if_conditional457) {
                                                                                                    # 508 "./comelang2.h"
                                                                                                    self->head=it_273;
                                                                                                    # 509 "./comelang2.h"
                                                                                                    self->head->prev=((void*)0);
                                                                                                    # 510 "./comelang2.h"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 513 "./comelang2.h"
                                                                                                    it_273=it_273->next;
                                                                                                    # 514 "./comelang2.h"
                                                                                                    i_274++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        # 584 "./comelang2.h"
                                                                                        # 518 "./comelang2.h"
                                                                                        if(_if_conditional458=tail==self->len,                                                                                        _if_conditional458) {
                                                                                            # 519 "./comelang2.h"
                                                                                            it_276=self->head;
                                                                                            # 520 "./comelang2.h"
                                                                                            i_277=0;
                                                                                            # 542 "./comelang2.h"
                                                                                            while(_while_condtional43=it_276!=((void*)0),                                                                                            _while_condtional43) {
                                                                                                # 527 "./comelang2.h"
                                                                                                # 522 "./comelang2.h"
                                                                                                if(_if_conditional459=i_277==head,                                                                                                _if_conditional459) {
                                                                                                    # 523 "./comelang2.h"
                                                                                                    self->tail=it_276->prev;
                                                                                                    # 524 "./comelang2.h"
                                                                                                    self->tail->next=((void*)0);
                                                                                                }
                                                                                                # 541 "./comelang2.h"
                                                                                                # 527 "./comelang2.h"
                                                                                                if(_if_conditional460=i_277>=head,                                                                                                _if_conditional460) {
                                                                                                    # 528 "./comelang2.h"
                                                                                                    prev_it_278=it_276;
                                                                                                    # 530 "./comelang2.h"
                                                                                                    it_276=it_276->next;
                                                                                                    # 531 "./comelang2.h"
                                                                                                    i_277++;
                                                                                                    # 533 "./comelang2.h"
                                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    # 535 "./comelang2.h"
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    # 538 "./comelang2.h"
                                                                                                    it_276=it_276->next;
                                                                                                    # 539 "./comelang2.h"
                                                                                                    i_277++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            # 544 "./comelang2.h"
                                                                                            it_279=self->head;
                                                                                            # 546 "./comelang2.h"
                                                                                            head_prev_it_280=((void*)0);
                                                                                            # 547 "./comelang2.h"
                                                                                            tail_it_281=((void*)0);
                                                                                            # 550 "./comelang2.h"
                                                                                            i_282=0;
                                                                                            # 576 "./comelang2.h"
                                                                                            while(_while_condtional44=it_279!=((void*)0),                                                                                            _while_condtional44) {
                                                                                                # 555 "./comelang2.h"
                                                                                                # 552 "./comelang2.h"
                                                                                                if(_if_conditional461=i_282==head,                                                                                                _if_conditional461) {
                                                                                                    # 553 "./comelang2.h"
                                                                                                    head_prev_it_280=it_279->prev;
                                                                                                }
                                                                                                # 559 "./comelang2.h"
                                                                                                # 555 "./comelang2.h"
                                                                                                if(_if_conditional462=i_282==tail,                                                                                                _if_conditional462) {
                                                                                                    # 556 "./comelang2.h"
                                                                                                    tail_it_281=it_279;
                                                                                                }
                                                                                                # 574 "./comelang2.h"
                                                                                                # 559 "./comelang2.h"
                                                                                                if(_if_conditional463=i_282>=head&&i_282<tail,                                                                                                _if_conditional463) {
                                                                                                    # 561 "./comelang2.h"
                                                                                                    prev_it_283=it_279;
                                                                                                    # 563 "./comelang2.h"
                                                                                                    it_279=it_279->next;
                                                                                                    # 564 "./comelang2.h"
                                                                                                    i_282++;
                                                                                                    # 566 "./comelang2.h"
                                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    # 568 "./comelang2.h"
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    # 571 "./comelang2.h"
                                                                                                    it_279=it_279->next;
                                                                                                    # 572 "./comelang2.h"
                                                                                                    i_282++;
                                                                                                }
                                                                                            }
                                                                                            # 579 "./comelang2.h"
                                                                                            # 576 "./comelang2.h"
                                                                                            if(_if_conditional464=head_prev_it_280!=((void*)0),                                                                                            _if_conditional464) {
                                                                                                # 577 "./comelang2.h"
                                                                                                head_prev_it_280->next=tail_it_281;
                                                                                            }
                                                                                            # 582 "./comelang2.h"
                                                                                            # 579 "./comelang2.h"
                                                                                            if(_if_conditional465=tail_it_281!=((void*)0),                                                                                            _if_conditional465) {
                                                                                                # 580 "./comelang2.h"
                                                                                                tail_it_281->prev=head_prev_it_280;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                # 584 "./comelang2.h"
                                                                                __result157__ = __result_obj__ = self;
                                                                                return __result157__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_271;
_Bool _while_condtional41;
struct list_item$1charp* prev_it_272;
struct list$1charp* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_271, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_272, 0, sizeof(struct list_item$1charp*));
                                                                                        # 433 "./comelang2.h"
                                                                                        it_271=self->head;
                                                                                        # 440 "./comelang2.h"
                                                                                        while(_while_condtional41=it_271!=((void*)0),                                                                                        _while_condtional41) {
                                                                                            # 435 "./comelang2.h"
                                                                                            prev_it_272=it_271;
                                                                                            # 436 "./comelang2.h"
                                                                                            it_271=it_271->next;
                                                                                            # 437 "./comelang2.h"
                                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 440 "./comelang2.h"
                                                                                        self->head=((void*)0);
                                                                                        # 441 "./comelang2.h"
                                                                                        self->tail=((void*)0);
                                                                                        # 443 "./comelang2.h"
                                                                                        self->len=0;
                                                                                        # 445 "./comelang2.h"
                                                                                        __result156__ = __result_obj__ = self;
                                                                                        return __result156__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional471;
char* result_285;
char* __result159__;
_Bool _if_conditional472;
char* __result160__;
char* result_286;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_285, 0, sizeof(char*));
memset(&result_286, 0, sizeof(char*));
                                                    # 290 "./comelang2.h"
                                                    # 285 "./comelang2.h"
                                                    if(_if_conditional471=self==((void*)0),                                                    _if_conditional471) {
                                                        # 286 "./comelang2.h"
                                                        # 287 "./comelang2.h"
                                                        memset(&result_285,0,sizeof(char*));
                                                        # 288 "./comelang2.h"
                                                        __result159__ = __result_obj__ = result_285;
                                                        return __result159__;
                                                    }
                                                    # 290 "./comelang2.h"
                                                    self->it=self->head;
                                                    # 296 "./comelang2.h"
                                                    # 292 "./comelang2.h"
                                                    if(self->it) {
                                                        # 293 "./comelang2.h"
                                                        __result160__ = __result_obj__ = self->it->item;
                                                        return __result160__;
                                                    }
                                                    # 296 "./comelang2.h"
                                                    # 297 "./comelang2.h"
                                                    memset(&result_286,0,sizeof(char*));
                                                    # 298 "./comelang2.h"
                                                    __result161__ = __result_obj__ = result_286;
                                                    return __result161__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 320 "./comelang2.h"
                                                    __result162__ = self==((void*)0)||self->it==((void*)0);
                                                    return __result162__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional473;
char* result_288;
char* __result163__;
_Bool _if_conditional474;
char* __result164__;
char* result_289;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_288, 0, sizeof(char*));
memset(&result_289, 0, sizeof(char*));
                                                    # 308 "./comelang2.h"
                                                    # 302 "./comelang2.h"
                                                    if(_if_conditional473=self==((void*)0)||self->it==((void*)0),                                                    _if_conditional473) {
                                                        # 303 "./comelang2.h"
                                                        # 304 "./comelang2.h"
                                                        memset(&result_288,0,sizeof(char*));
                                                        # 305 "./comelang2.h"
                                                        __result163__ = __result_obj__ = result_288;
                                                        return __result163__;
                                                    }
                                                    # 308 "./comelang2.h"
                                                    self->it=self->it->next;
                                                    # 314 "./comelang2.h"
                                                    # 310 "./comelang2.h"
                                                    if(self->it) {
                                                        # 311 "./comelang2.h"
                                                        __result164__ = __result_obj__ = self->it->item;
                                                        return __result164__;
                                                    }
                                                    # 314 "./comelang2.h"
                                                    # 315 "./comelang2.h"
                                                    memset(&result_289,0,sizeof(char*));
                                                    # 316 "./comelang2.h"
                                                    __result165__ = __result_obj__ = result_289;
                                                    return __result165__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional477;
void* right_value342;
struct list_item$1charp* litem_290;
_Bool _if_conditional478;
void* right_value343;
struct list_item$1charp* litem_291;
void* right_value344;
struct list_item$1charp* litem_292;
struct list$1charp* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value342 = (void*)0;
memset(&litem_290, 0, sizeof(struct list_item$1charp*));
right_value343 = (void*)0;
memset(&litem_291, 0, sizeof(struct list_item$1charp*));
right_value344 = (void*)0;
memset(&litem_292, 0, sizeof(struct list_item$1charp*));
                                                        # 256 "./comelang2.h"
                                                        # 225 "./comelang2.h"
                                                        if(_if_conditional477=self->len==0,                                                        _if_conditional477) {
                                                            # 226 "./comelang2.h"
                                                            litem_290=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value342=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                                                            come_call_finalizer2(list_item$1charpp_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 228 "./comelang2.h"
                                                            litem_290->prev=((void*)0);
                                                            # 229 "./comelang2.h"
                                                            litem_290->next=((void*)0);
                                                            # 230 "./comelang2.h"
                                                            litem_290->item=item;
                                                            # 232 "./comelang2.h"
                                                            self->tail=litem_290;
                                                            # 233 "./comelang2.h"
                                                            self->head=litem_290;
                                                        }
                                                        else {
                                                            # 256 "./comelang2.h"
                                                            # 235 "./comelang2.h"
                                                            if(_if_conditional478=self->len==1,                                                            _if_conditional478) {
                                                                # 236 "./comelang2.h"
                                                                litem_291=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value343=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                                                                come_call_finalizer2(list_item$1charpp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 238 "./comelang2.h"
                                                                litem_291->prev=self->head;
                                                                # 239 "./comelang2.h"
                                                                litem_291->next=((void*)0);
                                                                # 240 "./comelang2.h"
                                                                litem_291->item=item;
                                                                # 242 "./comelang2.h"
                                                                self->tail=litem_291;
                                                                # 243 "./comelang2.h"
                                                                self->head->next=litem_291;
                                                            }
                                                            else {
                                                                # 246 "./comelang2.h"
                                                                litem_292=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value344=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                                                                come_call_finalizer2(list_item$1charpp_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                # 248 "./comelang2.h"
                                                                litem_292->prev=self->tail;
                                                                # 249 "./comelang2.h"
                                                                litem_292->next=((void*)0);
                                                                # 250 "./comelang2.h"
                                                                litem_292->item=item;
                                                                # 252 "./comelang2.h"
                                                                self->tail->next=litem_292;
                                                                # 253 "./comelang2.h"
                                                                self->tail=litem_292;
                                                            }
                                                        }
                                                        # 256 "./comelang2.h"
                                                        self->len++;
                                                        # 258 "./comelang2.h"
                                                        __result166__ = __result_obj__ = self;
                                                        return __result166__;
}

