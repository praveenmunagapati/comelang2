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
struct sStructNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
    _Bool mOutput;
};
struct sStructNobodyNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
};
struct sGenericsStructNode
{
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

char* get_none_generics_name(char* class_name);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
void output_struct(struct sClass* klass, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info);

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
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
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
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
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
_Bool sStructNode_terminated();

char* sStructNode_kind();

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
int sStructNode_sline(struct sStructNode* self, struct sInfo* info);

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info);

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);

_Bool sStructNobodyNode_terminated();

char* sStructNobodyNode_kind();

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info);

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info);

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info);

_Bool sGenericsStructNode_terminated();

char* sGenericsStructNode_kind();

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info);

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info);

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sGenericsStructNode_finalize(struct sGenericsStructNode* self);
static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1947, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1957, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1967, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1977, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1987, "struct smart_pointer$1long"))));
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

char* get_none_generics_name(char* class_name){
void* __result_obj__;
char* p_5;
_Bool _while_condtional1;
_Bool _if_conditional5;
void* right_value10;
void* right_value11;
char* __result7__;
void* right_value12;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_5, 0, sizeof(char*));
right_value10 = (void*)0;
right_value11 = (void*)0;
right_value12 = (void*)0;
    p_5=class_name;
    while(_while_condtional1=*p_5,    _while_condtional1) {
        if(_if_conditional5=*p_5==36,        _if_conditional5) {
            __result7__ = __result_obj__ = ((char*)(right_value11=string_substring(((char*)(right_value10=__builtin_string(class_name))),0,p_5-class_name)));
            right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result7__;
        }
        else {
            p_5++;
        }
    }
    __result8__ = __result_obj__ = ((char*)(right_value12=__builtin_string(class_name)));
    right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result8__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value13;
void* right_value14;
struct buffer* buf_6;
struct sClass* klass_7;
char* class_name_8;
_Bool _if_conditional6;
int i_9;
struct sType* type_19;
void* right_value15;
char* type_name_20;
int i_21;
_Bool _if_conditional25;
void* right_value16;
char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
right_value14 = (void*)0;
memset(&buf_6, 0, sizeof(struct buffer*));
memset(&klass_7, 0, sizeof(struct sClass*));
memset(&class_name_8, 0, sizeof(char*));
memset(&i_9, 0, sizeof(int));
memset(&type_19, 0, sizeof(struct sType*));
right_value15 = (void*)0;
memset(&type_name_20, 0, sizeof(char*));
memset(&i_21, 0, sizeof(int));
right_value16 = (void*)0;
    buf_6=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    klass_7=generics_type->mClass;
    class_name_8=klass_7->mName;
    buffer_append_str(buf_6,class_name_8);
    if(_if_conditional6=list$1sTypeph_length(generics_type->mGenericsTypes)>0,    _if_conditional6) {
        buffer_append_char(buf_6,36);
        buffer_append_char(buf_6,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(        i_9=0;        i_9<list$1sTypeph_length(generics_type->mGenericsTypes);        i_9++        ){
            type_19=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_9);
            type_name_20=(char*)come_increment_ref_count(((char*)(right_value15=create_generics_name(type_19,info))));
            right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_6,type_name_20);
            for(            i_21=0;            i_21<type_19->mPointerNum;            i_21++            ){
                buffer_append_char(buf_6,112);
            }
            if(type_19->mHeap) {
                buffer_append_str(buf_6,"h");
            }
            type_name_20 = come_decrement_ref_count2(type_name_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result12__ = __result_obj__ = ((char*)(right_value16=buffer_to_string(buf_6)));
    come_call_finalizer2(buffer_finalize,buf_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result12__;
    come_call_finalizer2(buffer_finalize,buf_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result9__;
memset(&__result_obj__, 0, sizeof(void*));
        __result9__ = self->len;
        return __result9__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional7;
struct list_item$1sTypeph* it_10;
int i_11;
_Bool _while_condtional2;
_Bool _if_conditional8;
struct sType* __result10__;
struct sType* default_value_12;
struct sType* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_11, 0, sizeof(int));
memset(&default_value_12, 0, sizeof(struct sType*));
                if(_if_conditional7=position<0,                _if_conditional7) {
                    position+=self->len;
                }
                it_10=self->head;
                i_11=0;
                while(_while_condtional2=it_10!=((void*)0),                _while_condtional2) {
                    if(_if_conditional8=position==i_11,                    _if_conditional8) {
                        __result10__ = __result_obj__ = it_10->item;
                        return __result10__;
                    }
                    it_10=it_10->next;
                    i_11++;
                }
                memset(&default_value_12,0,sizeof(struct sType*));
                __result11__ = __result_obj__ = default_value_12;
                come_call_finalizer2(sType_finalize,default_value_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result11__;
                come_call_finalizer2(sType_finalize,default_value_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional9=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional9) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional11=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional11) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional12=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional12) {
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional13=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional13) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional15) {
                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional17) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional18) {
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional20) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional21) {
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional22) {
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional23) {
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional24) {
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional10=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional10) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_13;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sTypeph*));
                            it_13=self->head;
                            while(_while_condtional3=it_13!=((void*)0),                            _while_condtional3) {
                                prev_it_14=it_13;
                                it_13=it_13->next;
                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional14) {
                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_15;
_Bool _while_condtional4;
struct list_item$1sNodeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sNodeph*));
                            it_15=self->head;
                            while(_while_condtional4=it_15!=((void*)0),                            _while_condtional4) {
                                prev_it_16=it_15;
                                it_15=it_15->next;
                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional16) {
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_17;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                            it_17=self->head;
                            while(_while_condtional5=it_17!=((void*)0),                            _while_condtional5) {
                                prev_it_18=it_17;
                                it_17=it_17->next;
                                come_call_finalizer2(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional19) {
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional26;
void* right_value17;
void* right_value18;
struct buffer* buf_22;
void* right_value19;
struct list$1tuple2$2charphsTypephph* o2_saved_23;
struct tuple2$2charphsTypeph* it_26;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_29;
struct sType* type_30;
void* right_value20;
_Bool _if_conditional34;
void* right_value21;
memset(&__result_obj__, 0, sizeof(void*));
right_value17 = (void*)0;
right_value18 = (void*)0;
memset(&buf_22, 0, sizeof(struct buffer*));
right_value19 = (void*)0;
memset(&o2_saved_23, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_26, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_29, 0, sizeof(char*));
memset(&type_30, 0, sizeof(struct sType*));
memset(&name_29, 0, sizeof(char*));
memset(&type_30, 0, sizeof(struct sType*));
right_value20 = (void*)0;
right_value21 = (void*)0;
    if(_if_conditional26=!klass->mOutputed,    _if_conditional26) {
        klass->mOutputed=(_Bool)1;
        buf_22=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value18=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_22,((char*)(right_value19=xsprintf("struct %s\n{\n",klass->mName))));
        right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        o2_saved_23=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_26=list$1tuple2$2charphsTypephph_begin((o2_saved_23));        !list$1tuple2$2charphsTypephph_end((o2_saved_23));        it_26=list$1tuple2$2charphsTypephph_next((o2_saved_23))        ){
            multiple_assign_var1=it_26;
            name_29=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            type_30=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
            type_30->mStatic=(_Bool)0;
            buffer_append_str(buf_22,"    ");
            buffer_append_str(buf_22,((char*)(right_value20=make_define_var(type_30,name_29,(_Bool)0,info))));
            right_value20 = come_decrement_ref_count2(right_value20, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_22,";\n");
            name_29 = come_decrement_ref_count2(name_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_22,"};\n");
        if(_if_conditional34=info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname),        _if_conditional34) {
        }
        else {
            add_come_code_at_source_head(info,"%s",((char*)(right_value21=buffer_to_string(buf_22))));
            right_value21 = come_decrement_ref_count2(right_value21, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(buffer_finalize,buf_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional27;
struct tuple2$2charphsTypeph* result_24;
struct tuple2$2charphsTypeph* __result13__;
_Bool _if_conditional28;
struct tuple2$2charphsTypeph* __result14__;
struct tuple2$2charphsTypeph* result_25;
struct tuple2$2charphsTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_25, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional27=self==((void*)0),            _if_conditional27) {
                memset(&result_24,0,sizeof(struct tuple2$2charphsTypeph*));
                __result13__ = __result_obj__ = result_24;
                return __result13__;
            }
            self->it=self->head;
            if(self->it) {
                __result14__ = __result_obj__ = self->it->item;
                return __result14__;
            }
            memset(&result_25,0,sizeof(struct tuple2$2charphsTypeph*));
            __result15__ = __result_obj__ = result_25;
            return __result15__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
            __result16__ = self==((void*)0)||self->it==((void*)0);
            return __result16__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional29;
struct tuple2$2charphsTypeph* result_27;
struct tuple2$2charphsTypeph* __result17__;
_Bool _if_conditional30;
struct tuple2$2charphsTypeph* __result18__;
struct tuple2$2charphsTypeph* result_28;
struct tuple2$2charphsTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_27, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_28, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional29=self==((void*)0)||self->it==((void*)0),            _if_conditional29) {
                memset(&result_27,0,sizeof(struct tuple2$2charphsTypeph*));
                __result17__ = __result_obj__ = result_27;
                return __result17__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result18__ = __result_obj__ = self->it->item;
                return __result18__;
            }
            memset(&result_28,0,sizeof(struct tuple2$2charphsTypeph*));
            __result19__ = __result_obj__ = result_28;
            return __result19__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_31;
_Bool _while_condtional6;
struct list_item$1tuple2$2charphsTypephph* prev_it_32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_31, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_32, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            it_31=self->head;
            while(_while_condtional6=it_31!=((void*)0),            _while_condtional6) {
                prev_it_32=it_31;
                it_31=it_31->next;
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional31) {
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional32) {
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional33=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional33) {
                                come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sType* type2_33;
_Bool _if_conditional35;
_Bool __result20__;
struct sClass* klass_34;
_Bool _if_conditional36;
_Bool __result21__;
_Bool _if_conditional37;
_Bool __result22__;
int i_35;
_Bool result_36;
_Bool _if_conditional38;
_Bool __result23__;
_Bool __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type2_33, 0, sizeof(struct sType*));
memset(&klass_34, 0, sizeof(struct sClass*));
memset(&i_35, 0, sizeof(int));
memset(&result_36, 0, sizeof(_Bool));
    type2_33=type->mNoSolvedGenericsType->v1;
    if(_if_conditional35=type2_33&&is_no_contained_generics_types(type2_33,info),    _if_conditional35) {
        __result20__ = (_Bool)0;
        return __result20__;
    }
    klass_34=type->mClass;
    if(klass_34->mGenerics) {
        __result21__ = (_Bool)0;
        return __result21__;
    }
    if(klass_34->mMethodGenerics) {
        __result22__ = (_Bool)0;
        return __result22__;
    }
    for(    i_35=0;    i_35<list$1sTypeph_length(type->mGenericsTypes);    i_35++    ){
        result_36=is_no_contained_generics_types(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_35),info);
        if(_if_conditional38=!result_36,        _if_conditional38) {
            __result23__ = (_Bool)0;
            return __result23__;
        }
    }
    __result24__ = (_Bool)1;
    return __result24__;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sType* type2_37;
_Bool _if_conditional39;
_Bool __result25__;
struct sClass* klass_38;
_Bool _if_conditional40;
_Bool __result26__;
int i_39;
_Bool result_40;
_Bool _if_conditional41;
_Bool __result27__;
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type2_37, 0, sizeof(struct sType*));
memset(&klass_38, 0, sizeof(struct sClass*));
memset(&i_39, 0, sizeof(int));
memset(&result_40, 0, sizeof(_Bool));
    type2_37=type->mNoSolvedGenericsType->v1;
    if(_if_conditional39=type2_37&&is_contained_method_generics_types(type2_37,info),    _if_conditional39) {
        __result25__ = (_Bool)1;
        return __result25__;
    }
    klass_38=type->mClass;
    if(klass_38->mMethodGenerics) {
        __result26__ = (_Bool)1;
        return __result26__;
    }
    for(    i_39=0;    i_39<list$1sTypeph_length(type->mGenericsTypes);    i_39++    ){
        result_40=is_contained_method_generics_types(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_39),info);
        if(result_40) {
            __result27__ = (_Bool)1;
            return __result27__;
        }
    }
    __result28__ = (_Bool)0;
    return __result28__;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value22;
char* new_name_41;
_Bool _if_conditional46;
void* right_value57;
struct sType* type2_62;
struct sClass* generics_class_66;
_Bool _if_conditional124;
_Bool __result55__;
void* right_value58;
void* right_value59;
struct sClass* new_class_67;
void* right_value66;
int i_112;
struct list$1tuple2$2charphsTypephph* o2_saved_113;
struct tuple2$2charphsTypeph* it_114;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_115;
struct sType* type_116;
void* right_value67;
struct sType* new_type_117;
void* right_value71;
void* right_value72;
void* right_value73;
void* right_value74;
void* right_value75;
struct sType* __dec_obj33;
_Bool _if_conditional176;
struct sClass* generics_class_123;
_Bool _if_conditional177;
_Bool __result83__;
void* right_value76;
void* right_value77;
struct sClass* new_class_124;
void* right_value78;
_Bool existance_method_generics_125;
int i_126;
struct list$1tuple2$2charphsTypephph* o2_saved_127;
struct tuple2$2charphsTypeph* it_128;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_129;
struct sType* type_130;
void* right_value79;
struct sType* new_type_131;
_Bool _if_conditional178;
void* right_value80;
void* right_value81;
void* right_value82;
void* right_value83;
void* right_value84;
struct sType* __dec_obj34;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value85;
struct sType* __dec_obj35;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
memset(&new_name_41, 0, sizeof(char*));
right_value57 = (void*)0;
memset(&type2_62, 0, sizeof(struct sType*));
memset(&generics_class_66, 0, sizeof(struct sClass*));
right_value58 = (void*)0;
right_value59 = (void*)0;
memset(&new_class_67, 0, sizeof(struct sClass*));
right_value66 = (void*)0;
memset(&i_112, 0, sizeof(int));
memset(&o2_saved_113, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_114, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_115, 0, sizeof(char*));
memset(&type_116, 0, sizeof(struct sType*));
memset(&name_115, 0, sizeof(char*));
memset(&type_116, 0, sizeof(struct sType*));
right_value67 = (void*)0;
memset(&new_type_117, 0, sizeof(struct sType*));
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
memset(&generics_class_123, 0, sizeof(struct sClass*));
right_value76 = (void*)0;
right_value77 = (void*)0;
memset(&new_class_124, 0, sizeof(struct sClass*));
right_value78 = (void*)0;
memset(&existance_method_generics_125, 0, sizeof(_Bool));
memset(&i_126, 0, sizeof(int));
memset(&o2_saved_127, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_128, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_129, 0, sizeof(char*));
memset(&type_130, 0, sizeof(struct sType*));
memset(&name_129, 0, sizeof(char*));
memset(&type_130, 0, sizeof(struct sType*));
right_value79 = (void*)0;
memset(&new_type_131, 0, sizeof(struct sType*));
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
    new_name_41=(char*)come_increment_ref_count(((char*)(right_value22=create_generics_name(type,info))));
    right_value22 = come_decrement_ref_count2(right_value22, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional46=is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(info->classes,new_name_41),    _if_conditional46) {
        type2_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        generics_class_66=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
        if(_if_conditional124=generics_class_66==((void*)0),        _if_conditional124) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result55__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,type2_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            new_name_41 = come_decrement_ref_count2(new_name_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result55__;
        }
        new_class_67=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value59=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value58=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 153, "struct sClass")))),new_name_41,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value66=__builtin_string(new_name_41)))),(struct sClass*)come_increment_ref_count(new_class_67));
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_112=0;
        for(        o2_saved_113=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_66->mFields)),it_114=list$1tuple2$2charphsTypephph_begin((o2_saved_113));        !list$1tuple2$2charphsTypephph_end((o2_saved_113));        it_114=list$1tuple2$2charphsTypephph_next((o2_saved_113))        ){
            multiple_assign_var2=it_114;
            name_115=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_116=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            new_type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=solve_generics(type_116,type2_62,info))));
            come_call_finalizer2(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1tuple2$2charphsTypephph_push_back(new_class_67->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value74=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value73=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 163, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value71=string_clone(name_115)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_clone(new_type_117)))))))));
            right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            name_115 = come_decrement_ref_count2(name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,new_type_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj33=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_67;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_67,info);
        come_call_finalizer2(sType_finalize,type2_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,new_class_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional176=!map$2charphsClassph_find(info->classes,new_name_41),        _if_conditional176) {
            generics_class_123=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
            if(_if_conditional177=generics_class_123==((void*)0),            _if_conditional177) {
                err_msg(info,"generics_class(%s) is null",type->mClass->mName);
                __result83__ = (_Bool)0;
                new_name_41 = come_decrement_ref_count2(new_name_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result83__;
            }
            new_class_124=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value77=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value76=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 181, "struct sClass")))),new_name_41,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            come_call_finalizer2(sClass_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value78=__builtin_string(new_name_41)))),(struct sClass*)come_increment_ref_count(new_class_124));
            right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            existance_method_generics_125=(_Bool)0;
            i_126=0;
            for(            o2_saved_127=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_123->mFields)),it_128=list$1tuple2$2charphsTypephph_begin((o2_saved_127));            !list$1tuple2$2charphsTypephph_end((o2_saved_127));            it_128=list$1tuple2$2charphsTypephph_next((o2_saved_127))            ){
                multiple_assign_var3=it_128;
                name_129=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                type_130=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                new_type_131=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=solve_generics(type_130,generics_type,info))));
                come_call_finalizer2(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional178=is_contained_method_generics_types(new_type_131,info),                _if_conditional178) {
                }
                list$1tuple2$2charphsTypephph_push_back(new_class_124->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value83=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value82=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 196, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value80=string_clone(name_129)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(new_type_131)))))))));
                right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,new_type_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __dec_obj34=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(type))));
            come_call_finalizer2(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            type->mClass=new_class_124;
            list$1sTypeph_reset(type->mGenericsTypes);
            if(_if_conditional179=!existance_method_generics_125,            _if_conditional179) {
                output_struct(new_class_124,info);
            }
            come_call_finalizer2(sClass_finalize,new_class_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional180=type->mNoSolvedGenericsType->v1==((void*)0),            _if_conditional180) {
                __dec_obj35=type->mNoSolvedGenericsType->v1;
                type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(type))));
                come_call_finalizer2(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            }
            type->mClass=map$2charphsClassphp_operator_load_element(info->classes,new_name_41);
            list$1sTypeph_reset(type->mGenericsTypes);
        }
    }
    __result84__ = (_Bool)1;
    new_name_41 = come_decrement_ref_count2(new_name_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result84__;
    new_name_41 = come_decrement_ref_count2(new_name_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
unsigned int hash_42;
int it_43;
_Bool _while_condtional7;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool __result29__;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool __result30__;
_Bool __result31__;
_Bool __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_42, 0, sizeof(unsigned int));
memset(&it_43, 0, sizeof(int));
        hash_42=string_get_hash_key(((char*)key))%self->size;
        it_43=hash_42;
        while(_while_condtional7=(_Bool)1,        _while_condtional7) {
            if(_if_conditional42=self->item_existance[it_43],            _if_conditional42) {
                if(_if_conditional43=string_equals(self->keys[it_43],key),                _if_conditional43) {
                    __result29__ = (_Bool)1;
                    return __result29__;
                }
                it_43++;
                if(_if_conditional44=it_43>=self->size,                _if_conditional44) {
                    it_43=0;
                }
                else {
                    if(_if_conditional45=it_43==hash_42,                    _if_conditional45) {
                        __result30__ = (_Bool)0;
                        return __result30__;
                    }
                }
            }
            else {
                __result31__ = (_Bool)0;
                return __result31__;
            }
        }
        __result32__ = (_Bool)0;
        return __result32__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional47;
struct sType* __result33__;
void* right_value23;
struct sType* result_44;
_Bool _if_conditional48;
_Bool _if_conditional49;
void* right_value26;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional53;
void* right_value27;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional54;
void* right_value28;
char* __dec_obj9;
_Bool _if_conditional55;
void* right_value35;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional59;
void* right_value43;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional72;
_Bool _if_conditional73;
void* right_value44;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional74;
void* right_value51;
struct list$1charph* __dec_obj22;
_Bool _if_conditional78;
void* right_value52;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional79;
_Bool _if_conditional80;
void* right_value53;
struct sNode* __dec_obj24;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
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
void* right_value54;
struct sNode* __dec_obj25;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
void* right_value55;
char* __dec_obj26;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value56;
char* __dec_obj27;
struct sType* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
memset(&result_44, 0, sizeof(struct sType*));
right_value26 = (void*)0;
right_value27 = (void*)0;
right_value28 = (void*)0;
right_value35 = (void*)0;
right_value43 = (void*)0;
right_value44 = (void*)0;
right_value51 = (void*)0;
right_value52 = (void*)0;
right_value53 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
right_value56 = (void*)0;
            if(_if_conditional47=self==(void*)0,            _if_conditional47) {
                __result33__ = __result_obj__ = (void*)0;
                return __result33__;
            }
            result_44=(struct sType*)come_increment_ref_count(((struct sType*)(right_value23=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
            come_call_finalizer2(sType_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional48=self!=((void*)0),            _if_conditional48) {
                result_44->mClass=self->mClass;
            }
            if(_if_conditional49=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional49) {
                __dec_obj7=result_44->mNoSolvedGenericsType;
                result_44->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value26=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional53=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional53) {
                __dec_obj8=result_44->mOriginalLoadVarType;
                result_44->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value27=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional54=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional54) {
                __dec_obj9=result_44->mGenericsName;
                result_44->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value28=string_clone(self->mGenericsName))));
                __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value28 = come_decrement_ref_count2(right_value28, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional55=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional55) {
                __dec_obj13=result_44->mGenericsTypes;
                result_44->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional59=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional59) {
                __dec_obj17=result_44->mArrayNum;
                result_44->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value43=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                result_44->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional73=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional73) {
                __dec_obj18=result_44->mParamTypes;
                result_44->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value44=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional74=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional74) {
                __dec_obj22=result_44->mParamNames;
                result_44->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value51=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional78=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional78) {
                __dec_obj23=result_44->mResultType;
                result_44->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value52=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_44->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional80=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional80) {
                __dec_obj24=result_44->mAlignas;
                result_44->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value53=sNode_clone(self->mAlignas))));
                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value53) { right_value53 = come_decrement_ref_count2(right_value53, ((struct sNode*)right_value53)->finalize, ((struct sNode*)right_value53)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_44->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_44->mShort=self->mShort;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_44->mLong=self->mLong;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_44->mLongLong=self->mLongLong;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_44->mConstant=self->mConstant;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_44->mRegister=self->mRegister;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_44->mVolatile=self->mVolatile;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_44->mStatic=self->mStatic;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_44->mExtern=self->mExtern;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_44->mRestrict=self->mRestrict;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_44->mImmutable=self->mImmutable;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_44->mHeap=self->mHeap;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_44->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_44->mDelegate=self->mDelegate;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_44->mShare=self->mShare;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                result_44->mClone=self->mClone;
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                result_44->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                result_44->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                result_44->mRefference=self->mRefference;
            }
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                result_44->mException=self->mException;
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                result_44->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                result_44->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                result_44->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional104=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional104) {
                __dec_obj25=result_44->mSizeNum;
                result_44->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value54=sNode_clone(self->mSizeNum))));
                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value54) { right_value54 = come_decrement_ref_count2(right_value54, ((struct sNode*)right_value54)->finalize, ((struct sNode*)right_value54)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                result_44->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                result_44->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional107=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional107) {
                __dec_obj26=result_44->mOriginalTypeName;
                result_44->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value55=string_clone(self->mOriginalTypeName))));
                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                result_44->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                result_44->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                result_44->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                result_44->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                result_44->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                result_44->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                result_44->mInline=self->mInline;
            }
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                result_44->mNullValue=self->mNullValue;
            }
            if(_if_conditional116=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional116) {
                __dec_obj27=result_44->mAsmName;
                result_44->mAsmName=(char*)come_increment_ref_count(((char*)(right_value56=string_clone(self->mAsmName))));
                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result50__ = __result_obj__ = result_44;
            come_call_finalizer2(sType_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result50__;
            come_call_finalizer2(sType_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct tuple1$1sTypeph* __result34__;
void* right_value24;
struct tuple1$1sTypeph* result_45;
_Bool _if_conditional52;
void* right_value25;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
memset(&result_45, 0, sizeof(struct tuple1$1sTypeph*));
right_value25 = (void*)0;
                    if(_if_conditional50=self==(void*)0,                    _if_conditional50) {
                        __result34__ = __result_obj__ = (void*)0;
                        return __result34__;
                    }
                    result_45=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value24=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional52=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional52) {
                        __dec_obj6=result_45->v1;
                        result_45->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value25=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    __result35__ = __result_obj__ = result_45;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_45, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result35__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional51=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional51) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional56;
struct list$1sTypeph* __result36__;
void* right_value29;
void* right_value30;
struct list$1sTypeph* result_46;
struct list_item$1sTypeph* it_47;
_Bool _while_condtional8;
void* right_value34;
struct list$1sTypeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value29 = (void*)0;
right_value30 = (void*)0;
memset(&result_46, 0, sizeof(struct list$1sTypeph*));
memset(&it_47, 0, sizeof(struct list_item$1sTypeph*));
right_value34 = (void*)0;
                    if(_if_conditional56=self==((void*)0),                    _if_conditional56) {
                        __result36__ = __result_obj__ = ((void*)0);
                        return __result36__;
                    }
                    result_46=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value30=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value29=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_47=self->head;
                    while(_while_condtional8=it_47!=((void*)0),                    _while_condtional8) {
                        list$1sTypeph_add(result_46,(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(it_47->item)))));
                        come_call_finalizer2(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_47=it_47->next;
                    }
                    __result39__ = __result_obj__ = result_46;
                    come_call_finalizer2(list$1sTypephp_finalize,result_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result39__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result37__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result37__;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional57;
void* right_value31;
struct list_item$1sTypeph* litem_48;
struct sType* __dec_obj10;
_Bool _if_conditional58;
void* right_value32;
struct list_item$1sTypeph* litem_49;
struct sType* __dec_obj11;
void* right_value33;
struct list_item$1sTypeph* litem_50;
struct sType* __dec_obj12;
struct list$1sTypeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
memset(&litem_48, 0, sizeof(struct list_item$1sTypeph*));
right_value32 = (void*)0;
memset(&litem_49, 0, sizeof(struct list_item$1sTypeph*));
right_value33 = (void*)0;
memset(&litem_50, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional57=self->len==0,                            _if_conditional57) {
                                litem_48=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value31=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_48->prev=((void*)0);
                                litem_48->next=((void*)0);
                                __dec_obj10=litem_48->item;
                                litem_48->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_48;
                                self->head=litem_48;
                            }
                            else {
                                if(_if_conditional58=self->len==1,                                _if_conditional58) {
                                    litem_49=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value32=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_49->prev=self->head;
                                    litem_49->next=((void*)0);
                                    __dec_obj11=litem_49->item;
                                    litem_49->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_49;
                                    self->head->next=litem_49;
                                }
                                else {
                                    litem_50=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value33=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_50->prev=self->tail;
                                    litem_50->next=((void*)0);
                                    __dec_obj12=litem_50->item;
                                    litem_50->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_50;
                                    self->tail=litem_50;
                                }
                            }
                            self->len++;
                            __result38__ = __result_obj__ = self;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result38__;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional60;
struct list$1sNodeph* __result40__;
void* right_value36;
void* right_value37;
struct list$1sNodeph* result_51;
struct list_item$1sNodeph* it_52;
_Bool _while_condtional9;
void* right_value42;
struct list$1sNodeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
right_value37 = (void*)0;
memset(&result_51, 0, sizeof(struct list$1sNodeph*));
memset(&it_52, 0, sizeof(struct list_item$1sNodeph*));
right_value42 = (void*)0;
                    if(_if_conditional60=self==((void*)0),                    _if_conditional60) {
                        __result40__ = __result_obj__ = ((void*)0);
                        return __result40__;
                    }
                    result_51=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value37=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value36=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_52=self->head;
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        list$1sNodeph_add(result_51,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value42=sNode_clone(it_52->item)))));
                        if(right_value42) { right_value42 = come_decrement_ref_count2(right_value42, ((struct sNode*)right_value42)->finalize, ((struct sNode*)right_value42)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_52=it_52->next;
                    }
                    __result45__ = __result_obj__ = result_51;
                    come_call_finalizer2(list$1sNodephp_finalize,result_51, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result45__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result41__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result41__;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional61;
void* right_value38;
struct list_item$1sNodeph* litem_53;
struct sNode* __dec_obj14;
_Bool _if_conditional62;
void* right_value39;
struct list_item$1sNodeph* litem_54;
struct sNode* __dec_obj15;
void* right_value40;
struct list_item$1sNodeph* litem_55;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1sNodeph*));
right_value39 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1sNodeph*));
right_value40 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional61=self->len==0,                            _if_conditional61) {
                                litem_53=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value38=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_53->prev=((void*)0);
                                litem_53->next=((void*)0);
                                __dec_obj14=litem_53->item;
                                litem_53->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_53;
                                self->head=litem_53;
                            }
                            else {
                                if(_if_conditional62=self->len==1,                                _if_conditional62) {
                                    litem_54=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value39=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_54->prev=self->head;
                                    litem_54->next=((void*)0);
                                    __dec_obj15=litem_54->item;
                                    litem_54->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_54;
                                    self->head->next=litem_54;
                                }
                                else {
                                    litem_55=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value40=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_55->prev=self->tail;
                                    litem_55->next=((void*)0);
                                    __dec_obj16=litem_55->item;
                                    litem_55->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_55;
                                    self->tail=litem_55;
                                }
                            }
                            self->len++;
                            __result42__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result42__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional63;
struct sNode* __result43__;
void* right_value41;
struct sNode* result_56;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
struct sNode* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value41 = (void*)0;
memset(&result_56, 0, sizeof(struct sNode*));
                            if(_if_conditional63=self==(void*)0,                            _if_conditional63) {
                                __result43__ = __result_obj__ = (void*)0;
                                return __result43__;
                            }
                            result_56=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                            if(right_value41) { right_value41 = come_decrement_ref_count2(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional64=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional64) {
                                result_56->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional65=self!=((void*)0),                            _if_conditional65) {
                                result_56->finalize=self->finalize;
                            }
                            if(_if_conditional66=self!=((void*)0),                            _if_conditional66) {
                                result_56->clone=self->clone;
                            }
                            if(_if_conditional67=self!=((void*)0),                            _if_conditional67) {
                                result_56->compile=self->compile;
                            }
                            if(_if_conditional68=self!=((void*)0),                            _if_conditional68) {
                                result_56->sline=self->sline;
                            }
                            if(_if_conditional69=self!=((void*)0),                            _if_conditional69) {
                                result_56->sname=self->sname;
                            }
                            if(_if_conditional70=self!=((void*)0),                            _if_conditional70) {
                                result_56->terminated=self->terminated;
                            }
                            if(_if_conditional71=self!=((void*)0),                            _if_conditional71) {
                                result_56->kind=self->kind;
                            }
                            __result44__ = __result_obj__ = result_56;
                            if(result_56) { result_56 = come_decrement_ref_count2(result_56, ((struct sNode*)result_56)->finalize, ((struct sNode*)result_56)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result44__;
                            if(result_56) { result_56 = come_decrement_ref_count2(result_56, ((struct sNode*)result_56)->finalize, ((struct sNode*)result_56)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional75;
struct list$1charph* __result46__;
void* right_value45;
void* right_value46;
struct list$1charph* result_57;
struct list_item$1charph* it_58;
_Bool _while_condtional10;
void* right_value50;
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value45 = (void*)0;
right_value46 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1charph*));
memset(&it_58, 0, sizeof(struct list_item$1charph*));
right_value50 = (void*)0;
                    if(_if_conditional75=self==((void*)0),                    _if_conditional75) {
                        __result46__ = __result_obj__ = ((void*)0);
                        return __result46__;
                    }
                    result_57=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value45=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_58=self->head;
                    while(_while_condtional10=it_58!=((void*)0),                    _while_condtional10) {
                        list$1charph_add(result_57,(char*)come_increment_ref_count(((char*)(right_value50=string_clone(it_58->item)))));
                        right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_58=it_58->next;
                    }
                    __result49__ = __result_obj__ = result_57;
                    come_call_finalizer2(list$1charphp_finalize,result_57, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result49__;
                    come_call_finalizer2(list$1charphp_finalize,result_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result47__ = __result_obj__ = self;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result47__;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional76;
void* right_value47;
struct list_item$1charph* litem_59;
char* __dec_obj19;
_Bool _if_conditional77;
void* right_value48;
struct list_item$1charph* litem_60;
char* __dec_obj20;
void* right_value49;
struct list_item$1charph* litem_61;
char* __dec_obj21;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1charph*));
right_value48 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1charph*));
right_value49 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional76=self->len==0,                            _if_conditional76) {
                                litem_59=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value47=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_59->prev=((void*)0);
                                litem_59->next=((void*)0);
                                __dec_obj19=litem_59->item;
                                litem_59->item=(char*)come_increment_ref_count(item);
                                __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_59;
                                self->head=litem_59;
                            }
                            else {
                                if(_if_conditional77=self->len==1,                                _if_conditional77) {
                                    litem_60=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_60->prev=self->head;
                                    litem_60->next=((void*)0);
                                    __dec_obj20=litem_60->item;
                                    litem_60->item=(char*)come_increment_ref_count(item);
                                    __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_60;
                                    self->head->next=litem_60;
                                }
                                else {
                                    litem_61=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_61->prev=self->tail;
                                    litem_61->next=((void*)0);
                                    __dec_obj21=litem_61->item;
                                    litem_61->item=(char*)come_increment_ref_count(item);
                                    __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_61;
                                    self->tail=litem_61;
                                }
                            }
                            self->len++;
                            __result48__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result48__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_63;
unsigned int hash_64;
unsigned int it_65;
_Bool _while_condtional11;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct sClass* __result51__;
_Bool _if_conditional122;
_Bool _if_conditional123;
struct sClass* __result52__;
struct sClass* __result53__;
struct sClass* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_63, 0, sizeof(struct sClass*));
memset(&hash_64, 0, sizeof(unsigned int));
memset(&it_65, 0, sizeof(unsigned int));
            memset(&default_value_63,0,sizeof(struct sClass*));
            hash_64=string_get_hash_key(((char*)key))%self->size;
            it_65=hash_64;
            while(_while_condtional11=(_Bool)1,            _while_condtional11) {
                if(_if_conditional117=self->item_existance[it_65],                _if_conditional117) {
                    if(_if_conditional118=string_equals(self->keys[it_65],key),                    _if_conditional118) {
                        __result51__ = __result_obj__ = self->items[it_65];
                        come_call_finalizer2(sClass_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result51__;
                    }
                    it_65++;
                    if(_if_conditional122=it_65>=self->size,                    _if_conditional122) {
                        it_65=0;
                    }
                    else {
                        if(_if_conditional123=it_65==hash_64,                        _if_conditional123) {
                            __result52__ = __result_obj__ = default_value_63;
                            come_call_finalizer2(sClass_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result52__;
                        }
                    }
                }
                else {
                    __result53__ = __result_obj__ = default_value_63;
                    come_call_finalizer2(sClass_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result53__;
                }
            }
            __result54__ = __result_obj__ = default_value_63;
            come_call_finalizer2(sClass_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result54__;
            come_call_finalizer2(sClass_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional119=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional119) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional120=self!=((void*)0)&&self->mFields!=((void*)0),                            _if_conditional120) {
                                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional121=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional121) {
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional125;
unsigned int hash_85;
unsigned int it_86;
_Bool _while_condtional14;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool same_key_exist_103;
char* it2_106;
_Bool _if_conditional168;
_Bool _if_conditional169;
struct map$2charphsClassph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_85, 0, sizeof(unsigned int));
memset(&it_86, 0, sizeof(unsigned int));
memset(&same_key_exist_103, 0, sizeof(_Bool));
memset(&it2_106, 0, sizeof(char*));
            if(_if_conditional125=self->len*10>=self->size,            _if_conditional125) {
                map$2charphsClassph_rehash(self);
            }
            hash_85=string_get_hash_key(key)%self->size;
            it_86=hash_85;
            while(_while_condtional14=(_Bool)1,            _while_condtional14) {
                if(_if_conditional137=self->item_existance[it_86],                _if_conditional137) {
                    if(_if_conditional138=string_equals(self->keys[it_86],key),                    _if_conditional138) {
                        if(_if_conditional139=1,                        _if_conditional139) {
                            list$1charp_remove(self->key_list,self->keys[it_86]);
                            self->keys[it_86] = come_decrement_ref_count2(self->keys[it_86], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_86]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_86]);
                            self->keys[it_86]=key;
                        }
                        if(_if_conditional159=1,                        _if_conditional159) {
                            come_call_finalizer2(sClass_finalize,self->items[it_86], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_86]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_86]=item;
                        }
                        break;
                    }
                    it_86++;
                    if(_if_conditional160=it_86>=self->size,                    _if_conditional160) {
                        it_86=0;
                    }
                    else {
                        if(_if_conditional161=it_86==hash_85,                        _if_conditional161) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_86]=(_Bool)1;
                    if(_if_conditional162=1,                    _if_conditional162) {
                        self->keys[it_86]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_86]=key;
                    }
                    if(_if_conditional163=1,                    _if_conditional163) {
                        self->items[it_86]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_86]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_103=(_Bool)0;
            for(            it2_106=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_106=list$1charp_next(self->key_list)            ){
                if(_if_conditional168=string_equals(it2_106,key),                _if_conditional168) {
                    puts("SAME KEY");
                    same_key_exist_103=(_Bool)1;
                }
            }
            if(_if_conditional169=!same_key_exist_103,            _if_conditional169) {
                list$1charp_push_back(self->key_list,key);
            }
            __result79__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result79__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_68;
void* right_value60;
char** keys_69;
void* right_value61;
struct sClass** items_70;
void* right_value62;
_Bool* item_existance_71;
int len_72;
char* it_75;
struct sClass* default_value_78;
struct sClass* it2_81;
unsigned int hash_82;
int n_83;
_Bool _while_condtional13;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct sClass* default_value_84;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_68, 0, sizeof(int));
right_value60 = (void*)0;
memset(&keys_69, 0, sizeof(char**));
right_value61 = (void*)0;
memset(&items_70, 0, sizeof(struct sClass**));
right_value62 = (void*)0;
memset(&item_existance_71, 0, sizeof(_Bool*));
memset(&len_72, 0, sizeof(int));
memset(&it_75, 0, sizeof(char*));
memset(&default_value_78, 0, sizeof(struct sClass*));
memset(&it2_81, 0, sizeof(struct sClass*));
memset(&hash_82, 0, sizeof(unsigned int));
memset(&n_83, 0, sizeof(int));
memset(&default_value_84, 0, sizeof(struct sClass*));
                    size_68=self->size*10;
                    keys_69=(char**)come_increment_ref_count(((char**)(right_value60=(char**)come_calloc(1, sizeof(char*)*(1*(size_68)), "./comelang2.h", 1334, "char*"))));
                    right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_70=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value61=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_68)), "./comelang2.h", 1335, "struct sClass*"))));
                    come_call_finalizer2(sClass_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_71=(_Bool*)come_increment_ref_count(((_Bool*)(right_value62=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_68)), "./comelang2.h", 1336, "_Bool"))));
                    right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_72=0;
                    for(                    it_75=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_75=map$2charphsClassph_next(self)                    ){
                        memset(&default_value_78,0,sizeof(struct sClass*));
                        it2_81=map$2charphsClassph_at(self,it_75,default_value_78);
                        hash_82=string_get_hash_key(it_75)%size_68;
                        n_83=hash_82;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional134=item_existance_71[n_83],                            _if_conditional134) {
                                n_83++;
                                if(_if_conditional135=n_83>=size_68,                                _if_conditional135) {
                                    n_83=0;
                                }
                                else {
                                    if(_if_conditional136=n_83==hash_82,                                    _if_conditional136) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_71[n_83]=(_Bool)1;
                                keys_69[n_83]=it_75;
                                items_70[n_83]=map$2charphsClassph_at(self,it_75,default_value_84);
                                len_72++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_69;
                    self->items=items_70;
                    self->item_existance=item_existance_71;
                    self->size=size_68;
                    self->len=len_72;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional126;
char* result_73;
char* __result56__;
_Bool _if_conditional127;
char* __result57__;
char* result_74;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_73, 0, sizeof(char*));
memset(&result_74, 0, sizeof(char*));
                        if(_if_conditional126=self==((void*)0),                        _if_conditional126) {
                            memset(&result_73,0,sizeof(char*));
                            __result56__ = __result_obj__ = result_73;
                            return __result56__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result57__ = __result_obj__ = self->key_list->it->item;
                            return __result57__;
                        }
                        memset(&result_74,0,sizeof(char*));
                        __result58__ = __result_obj__ = result_74;
                        return __result58__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result59__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result59__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional128;
char* result_76;
char* __result60__;
_Bool _if_conditional129;
char* __result61__;
char* result_77;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_76, 0, sizeof(char*));
memset(&result_77, 0, sizeof(char*));
                        if(_if_conditional128=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional128) {
                            memset(&result_76,0,sizeof(char*));
                            __result60__ = __result_obj__ = result_76;
                            return __result60__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result61__ = __result_obj__ = self->key_list->it->item;
                            return __result61__;
                        }
                        memset(&result_77,0,sizeof(char*));
                        __result62__ = __result_obj__ = result_77;
                        return __result62__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_79;
unsigned int it_80;
_Bool _while_condtional12;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct sClass* __result63__;
_Bool _if_conditional132;
_Bool _if_conditional133;
struct sClass* __result64__;
struct sClass* __result65__;
struct sClass* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_79, 0, sizeof(unsigned int));
memset(&it_80, 0, sizeof(unsigned int));
                            hash_79=string_get_hash_key(((char*)key))%self->size;
                            it_80=hash_79;
                            while(_while_condtional12=(_Bool)1,                            _while_condtional12) {
                                if(_if_conditional130=self->item_existance[it_80],                                _if_conditional130) {
                                    if(_if_conditional131=string_equals(self->keys[it_80],key),                                    _if_conditional131) {
                                        __result63__ = __result_obj__ = self->items[it_80];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result63__;
                                    }
                                    it_80++;
                                    if(_if_conditional132=it_80>=self->size,                                    _if_conditional132) {
                                        it_80=0;
                                    }
                                    else {
                                        if(_if_conditional133=it_80==hash_79,                                        _if_conditional133) {
                                            __result64__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result64__;
                                        }
                                    }
                                }
                                else {
                                    __result65__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result65__;
                                }
                            }
                            __result66__ = __result_obj__ = default_value;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result66__;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_87;
struct list_item$1charp* it_88;
_Bool _while_condtional15;
_Bool _if_conditional140;
struct list$1charp* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_87, 0, sizeof(int));
memset(&it_88, 0, sizeof(struct list_item$1charp*));
                                it2_87=0;
                                it_88=self->head;
                                while(_while_condtional15=it_88!=((void*)0),                                _while_condtional15) {
                                    if(_if_conditional140=string_equals(it_88->item,item),                                    _if_conditional140) {
                                        list$1charp_delete(self,it2_87,it2_87+1);
                                        break;
                                    }
                                    it2_87++;
                                    it_88=it_88->next;
                                }
                                __result70__ = __result_obj__ = self;
                                return __result70__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
int tmp_89;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct list$1charp* __result67__;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct list_item$1charp* it_92;
int i_93;
_Bool _while_condtional17;
_Bool _if_conditional149;
struct list_item$1charp* prev_it_94;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct list_item$1charp* it_95;
int i_96;
_Bool _while_condtional18;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list_item$1charp* prev_it_97;
struct list_item$1charp* it_98;
struct list_item$1charp* head_prev_it_99;
struct list_item$1charp* tail_it_100;
int i_101;
_Bool _while_condtional19;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct list_item$1charp* prev_it_102;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct list$1charp* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_89, 0, sizeof(int));
memset(&it_92, 0, sizeof(struct list_item$1charp*));
memset(&i_93, 0, sizeof(int));
memset(&prev_it_94, 0, sizeof(struct list_item$1charp*));
memset(&it_95, 0, sizeof(struct list_item$1charp*));
memset(&i_96, 0, sizeof(int));
memset(&prev_it_97, 0, sizeof(struct list_item$1charp*));
memset(&it_98, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_99, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_100, 0, sizeof(struct list_item$1charp*));
memset(&i_101, 0, sizeof(int));
memset(&prev_it_102, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional141=head<0,                                            _if_conditional141) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional142=tail<0,                                            _if_conditional142) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional143=head>tail,                                            _if_conditional143) {
                                                tmp_89=tail;
                                                tail=head;
                                                head=tmp_89;
                                            }
                                            if(_if_conditional144=head<0,                                            _if_conditional144) {
                                                head=0;
                                            }
                                            if(_if_conditional145=tail>self->len,                                            _if_conditional145) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional146=head==tail,                                            _if_conditional146) {
                                                __result67__ = __result_obj__ = self;
                                                return __result67__;
                                            }
                                            if(_if_conditional147=head==0&&tail==self->len,                                            _if_conditional147) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional148=head==0,                                                _if_conditional148) {
                                                    it_92=self->head;
                                                    i_93=0;
                                                    while(_while_condtional17=it_92!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional149=i_93<tail,                                                        _if_conditional149) {
                                                            prev_it_94=it_92;
                                                            it_92=it_92->next;
                                                            i_93++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional150=i_93==tail,                                                            _if_conditional150) {
                                                                self->head=it_92;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_92=it_92->next;
                                                                i_93++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional151=tail==self->len,                                                    _if_conditional151) {
                                                        it_95=self->head;
                                                        i_96=0;
                                                        while(_while_condtional18=it_95!=((void*)0),                                                        _while_condtional18) {
                                                            if(_if_conditional152=i_96==head,                                                            _if_conditional152) {
                                                                self->tail=it_95->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional153=i_96>=head,                                                            _if_conditional153) {
                                                                prev_it_97=it_95;
                                                                it_95=it_95->next;
                                                                i_96++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_95=it_95->next;
                                                                i_96++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_98=self->head;
                                                        head_prev_it_99=((void*)0);
                                                        tail_it_100=((void*)0);
                                                        i_101=0;
                                                        while(_while_condtional19=it_98!=((void*)0),                                                        _while_condtional19) {
                                                            if(_if_conditional154=i_101==head,                                                            _if_conditional154) {
                                                                head_prev_it_99=it_98->prev;
                                                            }
                                                            if(_if_conditional155=i_101==tail,                                                            _if_conditional155) {
                                                                tail_it_100=it_98;
                                                            }
                                                            if(_if_conditional156=i_101>=head&&i_101<tail,                                                            _if_conditional156) {
                                                                prev_it_102=it_98;
                                                                it_98=it_98->next;
                                                                i_101++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_98=it_98->next;
                                                                i_101++;
                                                            }
                                                        }
                                                        if(_if_conditional157=head_prev_it_99!=((void*)0),                                                        _if_conditional157) {
                                                            head_prev_it_99->next=tail_it_100;
                                                        }
                                                        if(_if_conditional158=tail_it_100!=((void*)0),                                                        _if_conditional158) {
                                                            tail_it_100->prev=head_prev_it_99;
                                                        }
                                                    }
                                                }
                                            }
                                            __result69__ = __result_obj__ = self;
                                            return __result69__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_90;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_91;
struct list$1charp* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_90, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_91, 0, sizeof(struct list_item$1charp*));
                                                    it_90=self->head;
                                                    while(_while_condtional16=it_90!=((void*)0),                                                    _while_condtional16) {
                                                        prev_it_91=it_90;
                                                        it_90=it_90->next;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result68__ = __result_obj__ = self;
                                                    return __result68__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional164;
char* result_104;
char* __result71__;
_Bool _if_conditional165;
char* __result72__;
char* result_105;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_104, 0, sizeof(char*));
memset(&result_105, 0, sizeof(char*));
                if(_if_conditional164=self==((void*)0),                _if_conditional164) {
                    memset(&result_104,0,sizeof(char*));
                    __result71__ = __result_obj__ = result_104;
                    return __result71__;
                }
                self->it=self->head;
                if(self->it) {
                    __result72__ = __result_obj__ = self->it->item;
                    return __result72__;
                }
                memset(&result_105,0,sizeof(char*));
                __result73__ = __result_obj__ = result_105;
                return __result73__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
                __result74__ = self==((void*)0)||self->it==((void*)0);
                return __result74__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional166;
char* result_107;
char* __result75__;
_Bool _if_conditional167;
char* __result76__;
char* result_108;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_107, 0, sizeof(char*));
memset(&result_108, 0, sizeof(char*));
                if(_if_conditional166=self==((void*)0)||self->it==((void*)0),                _if_conditional166) {
                    memset(&result_107,0,sizeof(char*));
                    __result75__ = __result_obj__ = result_107;
                    return __result75__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result76__ = __result_obj__ = self->it->item;
                    return __result76__;
                }
                memset(&result_108,0,sizeof(char*));
                __result77__ = __result_obj__ = result_108;
                return __result77__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional170;
void* right_value63;
struct list_item$1charp* litem_109;
_Bool _if_conditional171;
void* right_value64;
struct list_item$1charp* litem_110;
void* right_value65;
struct list_item$1charp* litem_111;
struct list$1charp* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1charp*));
right_value64 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1charp*));
right_value65 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional170=self->len==0,                    _if_conditional170) {
                        litem_109=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 225, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_109->prev=((void*)0);
                        litem_109->next=((void*)0);
                        litem_109->item=item;
                        self->tail=litem_109;
                        self->head=litem_109;
                    }
                    else {
                        if(_if_conditional171=self->len==1,                        _if_conditional171) {
                            litem_110=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 235, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_110->prev=self->head;
                            litem_110->next=((void*)0);
                            litem_110->item=item;
                            self->tail=litem_110;
                            self->head->next=litem_110;
                        }
                        else {
                            litem_111=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 245, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_111->prev=self->tail;
                            litem_111->next=((void*)0);
                            litem_111->item=item;
                            self->tail->next=litem_111;
                            self->tail=litem_111;
                        }
                    }
                    self->len++;
                    __result78__ = __result_obj__ = self;
                    return __result78__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional172;
void* right_value68;
struct list_item$1tuple2$2charphsTypephph* litem_118;
struct tuple2$2charphsTypeph* __dec_obj28;
_Bool _if_conditional175;
void* right_value69;
struct list_item$1tuple2$2charphsTypephph* litem_119;
struct tuple2$2charphsTypeph* __dec_obj29;
void* right_value70;
struct list_item$1tuple2$2charphsTypephph* litem_120;
struct tuple2$2charphsTypeph* __dec_obj30;
struct list$1tuple2$2charphsTypephph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
memset(&litem_118, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value69 = (void*)0;
memset(&litem_119, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value70 = (void*)0;
memset(&litem_120, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                if(_if_conditional172=self->len==0,                _if_conditional172) {
                    litem_118=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value68=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 225, "struct list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_118->prev=((void*)0);
                    litem_118->next=((void*)0);
                    __dec_obj28=litem_118->item;
                    litem_118->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_118;
                    self->head=litem_118;
                }
                else {
                    if(_if_conditional175=self->len==1,                    _if_conditional175) {
                        litem_119=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value69=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 235, "struct list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_119->prev=self->head;
                        litem_119->next=((void*)0);
                        __dec_obj29=litem_119->item;
                        litem_119->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_119;
                        self->head->next=litem_119;
                    }
                    else {
                        litem_120=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value70=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 245, "struct list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_120->prev=self->tail;
                        litem_120->next=((void*)0);
                        __dec_obj30=litem_120->item;
                        litem_120->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_120;
                        self->tail=litem_120;
                    }
                }
                self->len++;
                __result80__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result80__;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional173;
_Bool _if_conditional174;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional173=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional173) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional174=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional174) {
                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj31;
struct sType* __dec_obj32;
struct tuple2$2charphsTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj31=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj32=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                come_call_finalizer2(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __result81__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result81__;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_121;
_Bool _while_condtional20;
struct list_item$1sTypeph* prev_it_122;
struct list$1sTypeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_121, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_122, 0, sizeof(struct list_item$1sTypeph*));
            it_121=self->head;
            while(_while_condtional20=it_121!=((void*)0),            _while_condtional20) {
                prev_it_122=it_121;
                it_121=it_121->next;
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result82__ = __result_obj__ = self;
            return __result82__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value86;
char* __dec_obj36;
void* right_value87;
char* __dec_obj37;
void* right_value101;
struct sClass* __dec_obj46;
struct sStructNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value101 = (void*)0;
    self->sline=info->sline;
    __dec_obj36=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value86=__builtin_string(info->sname))));
    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj37=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string(name))));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj46=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value101=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mOutput=output;
    __result93__ = __result_obj__ = self;
    come_call_finalizer2(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result93__;
    come_call_finalizer2(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional181;
struct sClass* __result85__;
void* right_value88;
struct sClass* result_132;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value89;
char* __dec_obj38;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value99;
struct list$1tuple2$2charphsTypephph* __dec_obj44;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value100;
char* __dec_obj45;
struct sClass* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_132, 0, sizeof(struct sClass*));
right_value89 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
        if(_if_conditional181=self==(void*)0,        _if_conditional181) {
            __result85__ = __result_obj__ = (void*)0;
            return __result85__;
        }
        result_132=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value88=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass"))));
        come_call_finalizer2(sClass_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional182=self!=((void*)0),        _if_conditional182) {
            result_132->mStruct=self->mStruct;
        }
        if(_if_conditional183=self!=((void*)0),        _if_conditional183) {
            result_132->mFloat=self->mFloat;
        }
        if(_if_conditional184=self!=((void*)0),        _if_conditional184) {
            result_132->mUnion=self->mUnion;
        }
        if(_if_conditional185=self!=((void*)0),        _if_conditional185) {
            result_132->mGenerics=self->mGenerics;
        }
        if(_if_conditional186=self!=((void*)0),        _if_conditional186) {
            result_132->mMethodGenerics=self->mMethodGenerics;
        }
        if(_if_conditional187=self!=((void*)0),        _if_conditional187) {
            result_132->mEnum=self->mEnum;
        }
        if(_if_conditional188=self!=((void*)0),        _if_conditional188) {
            result_132->mProtocol=self->mProtocol;
        }
        if(_if_conditional189=self!=((void*)0),        _if_conditional189) {
            result_132->mNumber=self->mNumber;
        }
        if(_if_conditional190=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional190) {
            __dec_obj38=result_132->mName;
            result_132->mName=(char*)come_increment_ref_count(((char*)(right_value89=string_clone(self->mName))));
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional191=self!=((void*)0),        _if_conditional191) {
            result_132->mGenericsNum=self->mGenericsNum;
        }
        if(_if_conditional192=self!=((void*)0),        _if_conditional192) {
            result_132->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        if(_if_conditional193=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional193) {
            __dec_obj44=result_132->mFields;
            result_132->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value99=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional200=self!=((void*)0),        _if_conditional200) {
            result_132->mOutputed=self->mOutputed;
        }
        if(_if_conditional201=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional201) {
            __dec_obj45=result_132->mDeclareSName;
            result_132->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value100=string_clone(self->mDeclareSName))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result92__ = __result_obj__ = result_132;
        come_call_finalizer2(sClass_finalize,result_132, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result92__;
        come_call_finalizer2(sClass_finalize,result_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional194;
struct list$1tuple2$2charphsTypephph* __result86__;
void* right_value90;
void* right_value91;
struct list$1tuple2$2charphsTypephph* result_133;
struct list_item$1tuple2$2charphsTypephph* it_134;
_Bool _while_condtional21;
void* right_value98;
struct list$1tuple2$2charphsTypephph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&result_133, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_134, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value98 = (void*)0;
                if(_if_conditional194=self==((void*)0),                _if_conditional194) {
                    __result86__ = __result_obj__ = ((void*)0);
                    return __result86__;
                }
                result_133=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value91=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value90=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 141, "struct list$1tuple2$2charphsTypephph"))))))));
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_134=self->head;
                while(_while_condtional21=it_134!=((void*)0),                _while_condtional21) {
                    list$1tuple2$2charphsTypephph_add(result_133,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value98=tuple2$2charphsTypephp_clone(it_134->item)))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_134=it_134->next;
                }
                __result91__ = __result_obj__ = result_133;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_133, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result91__;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result87__ = __result_obj__ = self;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result87__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional195;
void* right_value92;
struct list_item$1tuple2$2charphsTypephph* litem_135;
struct tuple2$2charphsTypeph* __dec_obj39;
_Bool _if_conditional196;
void* right_value93;
struct list_item$1tuple2$2charphsTypephph* litem_136;
struct tuple2$2charphsTypeph* __dec_obj40;
void* right_value94;
struct list_item$1tuple2$2charphsTypephph* litem_137;
struct tuple2$2charphsTypeph* __dec_obj41;
struct list$1tuple2$2charphsTypephph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&litem_135, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value93 = (void*)0;
memset(&litem_136, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value94 = (void*)0;
memset(&litem_137, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        if(_if_conditional195=self->len==0,                        _if_conditional195) {
                            litem_135=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value92=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 155, "struct list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_135->prev=((void*)0);
                            litem_135->next=((void*)0);
                            __dec_obj39=litem_135->item;
                            litem_135->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_135;
                            self->head=litem_135;
                        }
                        else {
                            if(_if_conditional196=self->len==1,                            _if_conditional196) {
                                litem_136=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value93=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 165, "struct list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_136->prev=self->head;
                                litem_136->next=((void*)0);
                                __dec_obj40=litem_136->item;
                                litem_136->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_136;
                                self->head->next=litem_136;
                            }
                            else {
                                litem_137=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value94=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 175, "struct list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_137->prev=self->tail;
                                litem_137->next=((void*)0);
                                __dec_obj41=litem_137->item;
                                litem_137->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_137;
                                self->tail=litem_137;
                            }
                        }
                        self->len++;
                        __result88__ = __result_obj__ = self;
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result88__;
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional197;
struct tuple2$2charphsTypeph* __result89__;
void* right_value95;
struct tuple2$2charphsTypeph* result_138;
_Bool _if_conditional198;
void* right_value96;
char* __dec_obj42;
_Bool _if_conditional199;
void* right_value97;
struct sType* __dec_obj43;
struct tuple2$2charphsTypeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&result_138, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value96 = (void*)0;
right_value97 = (void*)0;
                        if(_if_conditional197=self==(void*)0,                        _if_conditional197) {
                            __result89__ = __result_obj__ = (void*)0;
                            return __result89__;
                        }
                        result_138=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value95=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph"))));
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional198=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional198) {
                            __dec_obj42=result_138->v1;
                            result_138->v1=(char*)come_increment_ref_count(((char*)(right_value96=string_clone(self->v1))));
                            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional199=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional199) {
                            __dec_obj43=result_138->v2;
                            result_138->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(self->v2))));
                            come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result90__ = __result_obj__ = result_138;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_138, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result90__;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sStructNode_terminated(){
void* __result_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = (_Bool)1;
    return __result94__;
}

char* sStructNode_kind(){
void* __result_obj__;
void* right_value102;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
    __result95__ = __result_obj__ = ((char*)(right_value102=__builtin_string("sStructNode")));
    right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value103;
struct sClass* klass_139;
void* right_value104;
char* name_140;
_Bool _if_conditional205;
void* right_value105;
_Bool _if_conditional206;
struct sClass* klass2_141;
void* right_value106;
struct list$1tuple2$2charphsTypephph* __dec_obj47;
void* right_value107;
void* right_value108;
struct sType* type_142;
void* right_value112;
_Bool _if_conditional229;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&klass_139, 0, sizeof(struct sClass*));
right_value104 = (void*)0;
memset(&name_140, 0, sizeof(char*));
right_value105 = (void*)0;
memset(&klass2_141, 0, sizeof(struct sClass*));
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
memset(&type_142, 0, sizeof(struct sType*));
right_value112 = (void*)0;
    klass_139=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value103=sClass_clone(self->mClass))));
    come_call_finalizer2(sClass_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    name_140=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string(self->mName))));
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional205=map$2charphsClassph_at(info->classes,name_140,((void*)0))==((void*)0),    _if_conditional205) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_140),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value105=sClass_clone(klass_139)))));
        come_call_finalizer2(sClass_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        if(_if_conditional206=list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_140,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_139->mFields)>0,        _if_conditional206) {
            klass2_141=map$2charphsClassph_at(info->classes,name_140,((void*)0));
            __dec_obj47=klass2_141->mFields;
            klass2_141->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value106=list$1tuple2$2charphsTypephphp_clone(klass_139->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    type_142=(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value107=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 267, "struct sType")))),name_140,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_140),(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(type_142)))));
    come_call_finalizer2(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(self->mOutput) {
        output_struct(klass_139,info);
    }
    __result109__ = (_Bool)1;
    come_call_finalizer2(sClass_finalize,klass_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_140 = come_decrement_ref_count2(name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result109__;
    come_call_finalizer2(sClass_finalize,klass_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_140 = come_decrement_ref_count2(name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
            __result96__ = self->len;
            return __result96__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional207;
unsigned int hash_160;
unsigned int it_161;
_Bool _while_condtional24;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool same_key_exist_162;
char* it2_163;
_Bool _if_conditional227;
_Bool _if_conditional228;
struct map$2charphsTypeph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_160, 0, sizeof(unsigned int));
memset(&it_161, 0, sizeof(unsigned int));
memset(&same_key_exist_162, 0, sizeof(_Bool));
memset(&it2_163, 0, sizeof(char*));
        if(_if_conditional207=self->len*10>=self->size,        _if_conditional207) {
            map$2charphsTypeph_rehash(self);
        }
        hash_160=string_get_hash_key(key)%self->size;
        it_161=hash_160;
        while(_while_condtional24=(_Bool)1,        _while_condtional24) {
            if(_if_conditional219=self->item_existance[it_161],            _if_conditional219) {
                if(_if_conditional220=string_equals(self->keys[it_161],key),                _if_conditional220) {
                    if(_if_conditional221=1,                    _if_conditional221) {
                        list$1charp_remove(self->key_list,self->keys[it_161]);
                        self->keys[it_161] = come_decrement_ref_count2(self->keys[it_161], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_161]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_161]);
                        self->keys[it_161]=key;
                    }
                    if(_if_conditional222=1,                    _if_conditional222) {
                        come_call_finalizer2(sType_finalize,self->items[it_161], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->items[it_161]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_161]=item;
                    }
                    break;
                }
                it_161++;
                if(_if_conditional223=it_161>=self->size,                _if_conditional223) {
                    it_161=0;
                }
                else {
                    if(_if_conditional224=it_161==hash_160,                    _if_conditional224) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_161]=(_Bool)1;
                if(_if_conditional225=1,                _if_conditional225) {
                    self->keys[it_161]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_161]=key;
                }
                if(_if_conditional226=1,                _if_conditional226) {
                    self->items[it_161]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_161]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_162=(_Bool)0;
        for(        it2_163=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_163=list$1charp_next(self->key_list)        ){
            if(_if_conditional227=string_equals(it2_163,key),            _if_conditional227) {
                puts("SAME KEY");
                same_key_exist_162=(_Bool)1;
            }
        }
        if(_if_conditional228=!same_key_exist_162,        _if_conditional228) {
            list$1charp_push_back(self->key_list,key);
        }
        __result108__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result108__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_143;
void* right_value109;
char** keys_144;
void* right_value110;
struct sType** items_145;
void* right_value111;
_Bool* item_existance_146;
int len_147;
char* it_150;
struct sType* default_value_153;
struct sType* it2_156;
unsigned int hash_157;
int n_158;
_Bool _while_condtional23;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
struct sType* default_value_159;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_143, 0, sizeof(int));
right_value109 = (void*)0;
memset(&keys_144, 0, sizeof(char**));
right_value110 = (void*)0;
memset(&items_145, 0, sizeof(struct sType**));
right_value111 = (void*)0;
memset(&item_existance_146, 0, sizeof(_Bool*));
memset(&len_147, 0, sizeof(int));
memset(&it_150, 0, sizeof(char*));
memset(&default_value_153, 0, sizeof(struct sType*));
memset(&it2_156, 0, sizeof(struct sType*));
memset(&hash_157, 0, sizeof(unsigned int));
memset(&n_158, 0, sizeof(int));
memset(&default_value_159, 0, sizeof(struct sType*));
                size_143=self->size*10;
                keys_144=(char**)come_increment_ref_count(((char**)(right_value109=(char**)come_calloc(1, sizeof(char*)*(1*(size_143)), "./comelang2.h", 1334, "char*"))));
                right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_145=(struct sType**)come_increment_ref_count(((struct sType**)(right_value110=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_143)), "./comelang2.h", 1335, "struct sType*"))));
                come_call_finalizer2(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                item_existance_146=(_Bool*)come_increment_ref_count(((_Bool*)(right_value111=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_143)), "./comelang2.h", 1336, "_Bool"))));
                right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_147=0;
                for(                it_150=map$2charphsTypeph_begin(self);                !map$2charphsTypeph_end(self);                it_150=map$2charphsTypeph_next(self)                ){
                    memset(&default_value_153,0,sizeof(struct sType*));
                    it2_156=map$2charphsTypeph_at(self,it_150,default_value_153);
                    hash_157=string_get_hash_key(it_150)%size_143;
                    n_158=hash_157;
                    while(_while_condtional23=(_Bool)1,                    _while_condtional23) {
                        if(_if_conditional216=item_existance_146[n_158],                        _if_conditional216) {
                            n_158++;
                            if(_if_conditional217=n_158>=size_143,                            _if_conditional217) {
                                n_158=0;
                            }
                            else {
                                if(_if_conditional218=n_158==hash_157,                                _if_conditional218) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_146[n_158]=(_Bool)1;
                            keys_144[n_158]=it_150;
                            items_145[n_158]=map$2charphsTypeph_at(self,it_150,default_value_159);
                            len_147++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_144;
                self->items=items_145;
                self->item_existance=item_existance_146;
                self->size=size_143;
                self->len=len_147;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional208;
char* result_148;
char* __result97__;
_Bool _if_conditional209;
char* __result98__;
char* result_149;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_148, 0, sizeof(char*));
memset(&result_149, 0, sizeof(char*));
                    if(_if_conditional208=self==((void*)0),                    _if_conditional208) {
                        memset(&result_148,0,sizeof(char*));
                        __result97__ = __result_obj__ = result_148;
                        return __result97__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result98__ = __result_obj__ = self->key_list->it->item;
                        return __result98__;
                    }
                    memset(&result_149,0,sizeof(char*));
                    __result99__ = __result_obj__ = result_149;
                    return __result99__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result100__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result100__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional210;
char* result_151;
char* __result101__;
_Bool _if_conditional211;
char* __result102__;
char* result_152;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_151, 0, sizeof(char*));
memset(&result_152, 0, sizeof(char*));
                    if(_if_conditional210=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional210) {
                        memset(&result_151,0,sizeof(char*));
                        __result101__ = __result_obj__ = result_151;
                        return __result101__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result102__ = __result_obj__ = self->key_list->it->item;
                        return __result102__;
                    }
                    memset(&result_152,0,sizeof(char*));
                    __result103__ = __result_obj__ = result_152;
                    return __result103__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_154;
unsigned int it_155;
_Bool _while_condtional22;
_Bool _if_conditional212;
_Bool _if_conditional213;
struct sType* __result104__;
_Bool _if_conditional214;
_Bool _if_conditional215;
struct sType* __result105__;
struct sType* __result106__;
struct sType* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_154, 0, sizeof(unsigned int));
memset(&it_155, 0, sizeof(unsigned int));
                        hash_154=string_get_hash_key(((char*)key))%self->size;
                        it_155=hash_154;
                        while(_while_condtional22=(_Bool)1,                        _while_condtional22) {
                            if(_if_conditional212=self->item_existance[it_155],                            _if_conditional212) {
                                if(_if_conditional213=string_equals(self->keys[it_155],key),                                _if_conditional213) {
                                    __result104__ = __result_obj__ = self->items[it_155];
                                    come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result104__;
                                }
                                it_155++;
                                if(_if_conditional214=it_155>=self->size,                                _if_conditional214) {
                                    it_155=0;
                                }
                                else {
                                    if(_if_conditional215=it_155==hash_154,                                    _if_conditional215) {
                                        __result105__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result105__;
                                    }
                                }
                            }
                            else {
                                __result106__ = __result_obj__ = default_value;
                                come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result106__;
                            }
                        }
                        __result107__ = __result_obj__ = default_value;
                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result107__;
                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sStructNode_sline(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    __result110__ = self->sline;
    return __result110__;
}

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value113;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
    __result111__ = __result_obj__ = ((char*)(right_value113=__builtin_string(self->sname)));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
void* right_value114;
char* __dec_obj48;
void* right_value115;
char* __dec_obj49;
void* right_value116;
struct sClass* __dec_obj50;
struct sStructNobodyNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
    self->sline=info->sline;
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string(info->sname))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj49=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string(name))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj50=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value116=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result112__ = __result_obj__ = self;
    come_call_finalizer2(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result112__;
    come_call_finalizer2(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sStructNobodyNode_terminated(){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    __result113__ = (_Bool)1;
    return __result113__;
}

char* sStructNobodyNode_kind(){
void* __result_obj__;
void* right_value117;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
    __result114__ = __result_obj__ = ((char*)(right_value117=__builtin_string("sStructNobodyNode")));
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value118;
char* name_164;
struct sClass* klass_165;
_Bool _if_conditional233;
void* right_value119;
void* right_value120;
void* right_value121;
struct sType* type_166;
void* right_value122;
_Bool _if_conditional234;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
memset(&name_164, 0, sizeof(char*));
memset(&klass_165, 0, sizeof(struct sClass*));
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&type_166, 0, sizeof(struct sType*));
right_value122 = (void*)0;
    name_164=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(self->mName))));
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_165=self->mClass;
    if(_if_conditional233=map$2charphsClassph_at(info->classes,name_164,((void*)0))==((void*)0),    _if_conditional233) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_164),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value119=sClass_clone(klass_165)))));
        come_call_finalizer2(sClass_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    type_166=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value120=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 326, "struct sType")))),name_164,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_164),(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(type_166)))));
    come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional234=info->output_header_file&&string_operator_not_equals(klass_165->mDeclareSName,info->base_sname),    _if_conditional234) {
    }
    else {
        add_come_code_at_source_head(info,"struct %s;\n",name_164);
    }
    __result115__ = (_Bool)1;
    name_164 = come_decrement_ref_count2(name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result115__;
    name_164 = come_decrement_ref_count2(name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    __result116__ = self->sline;
    return __result116__;
}

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value123;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
    __result117__ = __result_obj__ = ((char*)(right_value123=__builtin_string(self->sname)));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value124;
char* __dec_obj51;
struct sGenericsStructNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
    self->sline=info->sline;
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(info->sname))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result118__ = __result_obj__ = self;
    come_call_finalizer2(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result118__;
    come_call_finalizer2(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sGenericsStructNode_terminated(){
void* __result_obj__;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    __result119__ = (_Bool)1;
    return __result119__;
}

char* sGenericsStructNode_kind(){
void* __result_obj__;
void* right_value125;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    __result120__ = __result_obj__ = ((char*)(right_value125=__builtin_string("sGenericsStructNode")));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = (_Bool)1;
    return __result121__;
}

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    __result122__ = self->sline;
    return __result122__;
}

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value126;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    __result123__ = __result_obj__ = ((char*)(right_value126=__builtin_string(self->sname)));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_167;
_Bool output_168;
_Bool _if_conditional236;
void* right_value127;
void* right_value128;
void* right_value129;
struct sClass* __dec_obj52;
void* right_value130;
void* right_value131;
struct sClass* __dec_obj53;
_Bool _while_condtional26;
_Bool multiple_declare_171;
char* p_172;
int sline_173;
_Bool no_output_err_174;
void* right_value132;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_175;
char* name_176;
_Bool err_177;
_Bool _if_conditional239;
_Bool _if_conditional240;
void* right_value133;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_178;
char* name_179;
_Bool err_180;
void* right_value134;
struct tuple2$2sTypephcharph* multiple_assign_var6;
struct sType* type2_181;
char* name2_182;
_Bool _if_conditional243;
void* right_value135;
void* right_value136;
_Bool _while_condtional27;
void* right_value137;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_183;
char* name2_184;
_Bool _if_conditional244;
void* right_value138;
void* right_value139;
void* right_value140;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type2_185;
char* name_186;
_Bool err_187;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value141;
void* right_value142;
_Bool _if_conditional247;
void* right_value143;
void* right_value144;
void* right_value145;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* right_value150;
struct sNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_167, 0, sizeof(struct sClass*));
memset(&output_168, 0, sizeof(_Bool));
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&multiple_declare_171, 0, sizeof(_Bool));
memset(&p_172, 0, sizeof(char*));
memset(&sline_173, 0, sizeof(int));
memset(&no_output_err_174, 0, sizeof(_Bool));
right_value132 = (void*)0;
memset(&type_175, 0, sizeof(struct sType*));
memset(&name_176, 0, sizeof(char*));
memset(&err_177, 0, sizeof(_Bool));
memset(&type_175, 0, sizeof(struct sType*));
memset(&name_176, 0, sizeof(char*));
memset(&err_177, 0, sizeof(_Bool));
right_value133 = (void*)0;
memset(&base_type_178, 0, sizeof(struct sType*));
memset(&name_179, 0, sizeof(char*));
memset(&err_180, 0, sizeof(_Bool));
memset(&base_type_178, 0, sizeof(struct sType*));
memset(&name_179, 0, sizeof(char*));
memset(&err_180, 0, sizeof(_Bool));
right_value134 = (void*)0;
memset(&type2_181, 0, sizeof(struct sType*));
memset(&name2_182, 0, sizeof(char*));
memset(&type2_181, 0, sizeof(struct sType*));
memset(&name2_182, 0, sizeof(char*));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&type2_183, 0, sizeof(struct sType*));
memset(&name2_184, 0, sizeof(char*));
memset(&type2_183, 0, sizeof(struct sType*));
memset(&name2_184, 0, sizeof(char*));
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&type2_185, 0, sizeof(struct sType*));
memset(&name_186, 0, sizeof(char*));
memset(&err_187, 0, sizeof(_Bool));
memset(&type2_185, 0, sizeof(struct sType*));
memset(&name_186, 0, sizeof(char*));
memset(&err_187, 0, sizeof(_Bool));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value150 = (void*)0;
    if(_if_conditional236=map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0),    _if_conditional236) {
        output_168=(_Bool)1;
        __dec_obj52=klass_167;
        klass_167=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value129=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value127=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 396, "struct sClass")))),((char*)(right_value128=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_167));
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        output_168=(_Bool)0;
        __dec_obj53=klass_167;
        klass_167=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value131=sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))))));
        come_call_finalizer2(sClass_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    list$1tuple2$2charphsTypephph_reset(klass_167->mFields);
    expected_next_character(123,info);
    while(_while_condtional26=(_Bool)1,    _while_condtional26) {
        multiple_declare_171=(_Bool)0;
        {
            p_172=info->p;
            sline_173=info->sline;
            no_output_err_174=info->no_output_err;
            info->no_output_err=(_Bool)1;
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value132=parse_type(info,(_Bool)1,(_Bool)1)));
            type_175=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_176=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_177=multiple_assign_var4->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=no_output_err_174;
            if(_if_conditional239=err_177&&*info->p==44,            _if_conditional239) {
                multiple_declare_171=(_Bool)1;
            }
            info->p=p_172;
            info->sline=sline_173;
            come_call_finalizer2(sType_finalize,type_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_176 = come_decrement_ref_count2(name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(multiple_declare_171) {
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value133=parse_type(info,(_Bool)0,(_Bool)1)));
            base_type_178=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_179=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_180=multiple_assign_var5->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(right_value134=parse_variable_name((struct sType*)come_increment_ref_count(base_type_178),(_Bool)1,info)));
            type2_181=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_182=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional243=!info->no_output_err,            _if_conditional243) {
                list$1tuple2$2charphsTypephph_push_back(klass_167->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value136=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value135=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 433, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_182),(struct sType*)come_increment_ref_count(type2_181))))));
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            while(_while_condtional27=*info->p==44,            _while_condtional27) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(right_value137=parse_variable_name((struct sType*)come_increment_ref_count(base_type_178),(_Bool)0,info)));
                type2_183=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_184=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional244=!info->no_output_err,                _if_conditional244) {
                    list$1tuple2$2charphsTypephph_push_back(klass_167->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value139=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value138=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 443, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_184),(struct sType*)come_increment_ref_count(type2_183))))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(sType_finalize,type2_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name2_184 = come_decrement_ref_count2(name2_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,base_type_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_179 = come_decrement_ref_count2(name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name2_182 = come_decrement_ref_count2(name2_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value140=parse_type(info,(_Bool)1,(_Bool)1)));
            type2_185=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_186=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_187=multiple_assign_var8->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional245=!err_187,            _if_conditional245) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            if(_if_conditional246=!info->no_output_err,            _if_conditional246) {
                list$1tuple2$2charphsTypephph_push_back(klass_167->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value142=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value141=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 456, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_186),(struct sType*)come_increment_ref_count(type2_185))))));
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type2_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_186 = come_decrement_ref_count2(name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        expected_next_character(59,info);
        parse_sharp_v5(info);
        if(_if_conditional247=*info->p==125,        _if_conditional247) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 471, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(right_value145=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value143=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 471, "struct sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_167),output_168,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sStructNode_sline;
    _inf_value1->sname=(void*)sStructNode_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result127__ = __result_obj__ = ((struct sNode*)(right_value150=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sStructNode_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStructNode_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value150) { right_value150 = come_decrement_ref_count2(right_value150, ((struct sNode*)right_value150)->finalize, ((struct sNode*)right_value150)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result127__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_169;
_Bool _while_condtional25;
struct list_item$1tuple2$2charphsTypephph* prev_it_170;
struct list$1tuple2$2charphsTypephph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_169, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_170, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_169=self->head;
        while(_while_condtional25=it_169!=((void*)0),        _while_condtional25) {
            prev_it_170=it_169;
            it_169=it_169->next;
            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result124__ = __result_obj__ = self;
        return __result124__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional237;
_Bool _if_conditional238;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional237=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional237) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional238=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional238) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional241;
_Bool _if_conditional242;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional241=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional241) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional242=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional242) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional257;
char* header_head_189;
void* right_value151;
char* type_name_190;
_Bool _if_conditional258;
struct sClass* struct_class_191;
_Bool _if_conditional259;
void* right_value152;
void* right_value153;
struct sClass* __dec_obj57;
void* right_value154;
struct sClass* __dec_obj58;
void* right_value155;
void* right_value156;
void* right_value157;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* right_value162;
struct sNode* __result130__;
_Bool _if_conditional268;
_Bool _while_condtional29;
void* right_value163;
char* T_195;
void* right_value167;
_Bool _if_conditional271;
_Bool _if_conditional272;
struct sClass* generics_class_199;
_Bool _if_conditional273;
void* right_value168;
void* right_value169;
struct sClass* __dec_obj65;
_Bool _if_conditional274;
_Bool _while_condtional30;
void* right_value170;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_200;
char* name_201;
_Bool err_202;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value171;
void* right_value172;
_Bool _while_condtional31;
void* right_value173;
char* name2_203;
void* right_value174;
struct sType* type3_204;
_Bool _if_conditional277;
_Bool no_comma_205;
void* right_value175;
struct sNode* node_206;
struct sNode* __dec_obj66;
void* right_value176;
void* right_value177;
void* right_value178;
void* right_value179;
_Bool _if_conditional278;
void* right_value180;
void* right_value181;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* right_value184;
struct sNode* __result135__;
struct sClass* struct_class_208;
_Bool _if_conditional283;
void* right_value185;
void* right_value186;
struct sClass* __dec_obj68;
void* right_value187;
struct sClass* __dec_obj69;
_Bool _while_condtional32;
_Bool multiple_declare_209;
char* p_210;
int sline_211;
_Bool no_output_err_212;
void* right_value188;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_213;
char* name_214;
_Bool err_215;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value189;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* base_type_216;
char* name_217;
_Bool err_218;
void* right_value190;
struct tuple2$2sTypephcharph* multiple_assign_var12;
struct sType* type2_219;
char* name2_220;
void* right_value191;
void* right_value192;
_Bool _while_condtional33;
void* right_value193;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_221;
char* name2_222;
void* right_value194;
void* right_value195;
void* right_value196;
struct tuple3$3sTypephcharphbool* multiple_assign_var14;
struct sType* type2_223;
char* name_224;
_Bool err_225;
_Bool _if_conditional286;
void* right_value197;
void* right_value198;
_Bool _if_conditional287;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* right_value207;
struct sNode* __result138__;
void* right_value208;
struct sNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_189, 0, sizeof(char*));
right_value151 = (void*)0;
memset(&type_name_190, 0, sizeof(char*));
memset(&struct_class_191, 0, sizeof(struct sClass*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&T_195, 0, sizeof(char*));
right_value167 = (void*)0;
memset(&generics_class_199, 0, sizeof(struct sClass*));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&type2_200, 0, sizeof(struct sType*));
memset(&name_201, 0, sizeof(char*));
memset(&err_202, 0, sizeof(_Bool));
memset(&type2_200, 0, sizeof(struct sType*));
memset(&name_201, 0, sizeof(char*));
memset(&err_202, 0, sizeof(_Bool));
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
memset(&name2_203, 0, sizeof(char*));
right_value174 = (void*)0;
memset(&type3_204, 0, sizeof(struct sType*));
memset(&no_comma_205, 0, sizeof(_Bool));
right_value175 = (void*)0;
memset(&node_206, 0, sizeof(struct sNode*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value184 = (void*)0;
memset(&struct_class_208, 0, sizeof(struct sClass*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&multiple_declare_209, 0, sizeof(_Bool));
memset(&p_210, 0, sizeof(char*));
memset(&sline_211, 0, sizeof(int));
memset(&no_output_err_212, 0, sizeof(_Bool));
right_value188 = (void*)0;
memset(&type_213, 0, sizeof(struct sType*));
memset(&name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
memset(&type_213, 0, sizeof(struct sType*));
memset(&name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
right_value189 = (void*)0;
memset(&base_type_216, 0, sizeof(struct sType*));
memset(&name_217, 0, sizeof(char*));
memset(&err_218, 0, sizeof(_Bool));
memset(&base_type_216, 0, sizeof(struct sType*));
memset(&name_217, 0, sizeof(char*));
memset(&err_218, 0, sizeof(_Bool));
right_value190 = (void*)0;
memset(&type2_219, 0, sizeof(struct sType*));
memset(&name2_220, 0, sizeof(char*));
memset(&type2_219, 0, sizeof(struct sType*));
memset(&name2_220, 0, sizeof(char*));
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&type2_221, 0, sizeof(struct sType*));
memset(&name2_222, 0, sizeof(char*));
memset(&type2_221, 0, sizeof(struct sType*));
memset(&name2_222, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
memset(&type2_223, 0, sizeof(struct sType*));
memset(&name_224, 0, sizeof(char*));
memset(&err_225, 0, sizeof(_Bool));
memset(&type2_223, 0, sizeof(struct sType*));
memset(&name_224, 0, sizeof(char*));
memset(&err_225, 0, sizeof(_Bool));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
    if(_if_conditional257=charp_operator_equals(buf,"struct"),    _if_conditional257) {
        header_head_189=head;
        type_name_190=(char*)come_increment_ref_count(((char*)(right_value151=parse_word(info))));
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional258=*info->p==59,        _if_conditional258) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional259=map$2charphsClassph_at(info->classes,type_name_190,((void*)0))==((void*)0),            _if_conditional259) {
                __dec_obj57=struct_class_191;
                struct_class_191=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value153=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value152=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 487, "struct sClass")))),type_name_190,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                come_call_finalizer2(sClass_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                __dec_obj58=struct_class_191;
                struct_class_191=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value154=sClass_clone(map$2charphsClassph_at(info->classes,type_name_190,((void*)0))))));
                come_call_finalizer2(sClass_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 493, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(right_value157=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value155=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 493, "struct sStructNobodyNode")))),(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(type_name_190)))),(struct sClass*)come_increment_ref_count(struct_class_191),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sStructNobodyNode_sline;
            _inf_value2->sname=(void*)sStructNobodyNode_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result130__ = __result_obj__ = ((struct sNode*)(right_value162=_inf_value2));
            come_call_finalizer2(sClass_finalize,struct_class_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sStructNobodyNode_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStructNobodyNode_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value162) { right_value162 = come_decrement_ref_count2(right_value162, ((struct sNode*)right_value162)->finalize, ((struct sNode*)right_value162)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result130__;
            come_call_finalizer2(sClass_finalize,struct_class_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional268=*info->p==60,            _if_conditional268) {
                list$1charph_reset(info->generics_type_names);
                info->p++;
                skip_spaces_and_lf(info);
                while(_while_condtional29=(_Bool)1,                _while_condtional29) {
                    T_195=(char*)come_increment_ref_count(((char*)(right_value163=parse_word(info))));
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value167=string_clone(T_195)))));
                    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional271=*info->p==62,                    _if_conditional271) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        T_195 = come_decrement_ref_count2(T_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        if(_if_conditional272=*info->p==44,                        _if_conditional272) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            err_msg(info,"invalid generics struct definition");
                            exit(2);
                        }
                    }
                    T_195 = come_decrement_ref_count2(T_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional273=map$2charphsClassph_at(info->generics_classes,type_name_190,((void*)0))!=((void*)0),                _if_conditional273) {
                    err_msg(info,"redifined generics struct(%s)",type_name_190);
                    exit(2);
                }
                else {
                    __dec_obj65=generics_class_199;
                    generics_class_199=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value169=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value168=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 527, "struct sClass")))),type_name_190,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    come_call_finalizer2(sClass_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sClass_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional274=map$2charphsClassph_at(info->generics_classes,type_name_190,((void*)0))==((void*)0),                _if_conditional274) {
                    map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_190),(struct sClass*)come_increment_ref_count(generics_class_199));
                }
                expected_next_character(123,info);
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    parse_sharp_v5(info);
                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value170=parse_type(info,(_Bool)1,(_Bool)1)));
                    type2_200=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                    name_201=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                    err_202=multiple_assign_var9->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional275=!err_202,                    _if_conditional275) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    if(_if_conditional276=*info->p==44,                    _if_conditional276) {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_199->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value172=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value171=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 547, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_201),(struct sType*)come_increment_ref_count(type2_200))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional31=*info->p==44,                        _while_condtional31) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            name2_203=(char*)come_increment_ref_count(((char*)(right_value173=parse_word(info))));
                            right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            type3_204=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_clone(type2_200))));
                            come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional277=*info->p==58,                            _if_conditional277) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                no_comma_205=info->no_comma;
                                info->no_comma=(_Bool)1;
                                node_206=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value175=expression_v13(info))));
                                if(right_value175) { right_value175 = come_decrement_ref_count2(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                info->no_comma=no_comma_205;
                                __dec_obj66=type3_204->mSizeNum;
                                type3_204->mSizeNum=(struct sNode*)come_increment_ref_count(node_206);
                                if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node_206) { node_206 = come_decrement_ref_count2(node_206, ((struct sNode*)node_206)->finalize, ((struct sNode*)node_206)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            list$1tuple2$2charphsTypephph_push_back(generics_class_199->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value177=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value176=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 569, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_203),(struct sType*)come_increment_ref_count(type3_204))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            name2_203 = come_decrement_ref_count2(name2_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,type3_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_199->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value179=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value178=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 573, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_201),(struct sType*)come_increment_ref_count(type2_200))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    expected_next_character(59,info);
                    parse_sharp_v5(info);
                    if(_if_conditional278=*info->p==125,                    _if_conditional278) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer2(sType_finalize,type2_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_201 = come_decrement_ref_count2(name_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    parse_sharp_v5(info);
                    come_call_finalizer2(sType_finalize,type2_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    name_201 = come_decrement_ref_count2(name_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                list$1charph_reset(info->generics_type_names);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 590, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(right_value181=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value180=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 590, "struct sGenericsStructNode")))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sGenericsStructNode_sline;
                _inf_value3->sname=(void*)sGenericsStructNode_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result135__ = __result_obj__ = ((struct sNode*)(right_value184=_inf_value3));
                come_call_finalizer2(sClass_finalize,generics_class_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sGenericsStructNode_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sGenericsStructNode_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value184) { right_value184 = come_decrement_ref_count2(right_value184, ((struct sNode*)right_value184)->finalize, ((struct sNode*)right_value184)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result135__;
                come_call_finalizer2(sClass_finalize,generics_class_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional283=map$2charphsClassph_at(info->classes,type_name_190,((void*)0))==((void*)0),                _if_conditional283) {
                    __dec_obj68=struct_class_208;
                    struct_class_208=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value186=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value185=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 595, "struct sClass")))),type_name_190,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    come_call_finalizer2(sClass_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sClass_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj69=struct_class_208;
                    struct_class_208=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value187=sClass_clone(map$2charphsClassph_at(info->classes,type_name_190,((void*)0))))));
                    come_call_finalizer2(sClass_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                expected_next_character(123,info);
                while(_while_condtional32=(_Bool)1,                _while_condtional32) {
                    parse_sharp_v5(info);
                    multiple_declare_209=(_Bool)0;
                    {
                        p_210=info->p;
                        sline_211=info->sline;
                        no_output_err_212=info->no_output_err;
                        info->no_output_err=(_Bool)1;
                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value188=parse_type(info,(_Bool)1,(_Bool)1)));
                        type_213=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                        name_214=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        err_215=multiple_assign_var10->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        info->no_output_err=no_output_err_212;
                        if(_if_conditional284=err_215&&*info->p==44,                        _if_conditional284) {
                            multiple_declare_209=(_Bool)1;
                        }
                        info->p=p_210;
                        info->sline=sline_211;
                        come_call_finalizer2(sType_finalize,type_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_214 = come_decrement_ref_count2(name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(multiple_declare_209) {
                        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value189=parse_type(info,(_Bool)0,(_Bool)1)));
                        base_type_216=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_217=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_218=multiple_assign_var11->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var12=((struct tuple2$2sTypephcharph*)(right_value190=parse_variable_name((struct sType*)come_increment_ref_count(base_type_216),(_Bool)1,info)));
                        type2_219=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name2_220=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_208->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value192=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value191=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 629, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_220),(struct sType*)come_increment_ref_count(type2_219))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional33=*info->p==44,                        _while_condtional33) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var13=((struct tuple2$2sTypephcharph*)(right_value193=parse_variable_name((struct sType*)come_increment_ref_count(base_type_216),(_Bool)0,info)));
                            type2_221=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                            name2_222=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            list$1tuple2$2charphsTypephph_push_back(struct_class_208->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value195=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value194=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 637, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_222),(struct sType*)come_increment_ref_count(type2_221))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name2_222 = come_decrement_ref_count2(name2_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(sType_finalize,base_type_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_217 = come_decrement_ref_count2(name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type2_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name2_220 = come_decrement_ref_count2(name2_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(right_value196=parse_type(info,(_Bool)1,(_Bool)1)));
                        type2_223=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                        name_224=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        err_225=multiple_assign_var14->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional286=!err_225,                        _if_conditional286) {
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            exit(2);
                        }
                        list$1tuple2$2charphsTypephph_push_back(struct_class_208->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value198=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value197=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 647, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_224),(struct sType*)come_increment_ref_count(type2_223))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type2_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_224 = come_decrement_ref_count2(name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    expected_next_character(59,info);
                    parse_sharp_v5(info);
                    if(_if_conditional287=*info->p==125,                    _if_conditional287) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp_v5(info);
                }
                list$1charph_reset(info->generics_type_names);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 664, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(right_value202=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value199=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 664, "struct sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string(type_name_190)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value201=sClass_clone(struct_class_208)))),(_Bool)1,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sStructNode_sline;
                _inf_value4->sname=(void*)sStructNode_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result138__ = __result_obj__ = ((struct sNode*)(right_value207=_inf_value4));
                come_call_finalizer2(sClass_finalize,struct_class_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sStructNode_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sStructNode_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value207) { right_value207 = come_decrement_ref_count2(right_value207, ((struct sNode*)right_value207)->finalize, ((struct sNode*)right_value207)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result138__;
                come_call_finalizer2(sClass_finalize,struct_class_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result139__ = __result_obj__ = ((struct sNode*)(right_value208=top_level_v97(buf,head,head_sline,info)));
    if(right_value208) { right_value208 = come_decrement_ref_count2(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result139__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional260=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional260) {
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional261=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional261) {
                    come_call_finalizer2(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional262=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional262) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional263;
struct sStructNobodyNode* __result128__;
void* right_value158;
struct sStructNobodyNode* result_192;
_Bool _if_conditional264;
void* right_value159;
char* __dec_obj59;
_Bool _if_conditional265;
void* right_value160;
struct sClass* __dec_obj60;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value161;
char* __dec_obj61;
struct sStructNobodyNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
memset(&result_192, 0, sizeof(struct sStructNobodyNode*));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
                if(_if_conditional263=self==(void*)0,                _if_conditional263) {
                    __result128__ = __result_obj__ = (void*)0;
                    return __result128__;
                }
                result_192=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value158=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode"))));
                come_call_finalizer2(sStructNobodyNode_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional264=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional264) {
                    __dec_obj59=result_192->mName;
                    result_192->mName=(char*)come_increment_ref_count(((char*)(right_value159=string_clone(self->mName))));
                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional265=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional265) {
                    __dec_obj60=result_192->mClass;
                    result_192->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value160=sClass_clone(self->mClass))));
                    come_call_finalizer2(sClass_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional266=self!=((void*)0),                _if_conditional266) {
                    result_192->sline=self->sline;
                }
                if(_if_conditional267=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional267) {
                    __dec_obj61=result_192->sname;
                    result_192->sname=(char*)come_increment_ref_count(((char*)(right_value161=string_clone(self->sname))));
                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result129__ = __result_obj__ = result_192;
                come_call_finalizer2(sStructNobodyNode_finalize,result_192, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result129__;
                come_call_finalizer2(sStructNobodyNode_finalize,result_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_193;
_Bool _while_condtional28;
struct list_item$1charph* prev_it_194;
struct list$1charph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_193, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_194, 0, sizeof(struct list_item$1charph*));
                    it_193=self->head;
                    while(_while_condtional28=it_193!=((void*)0),                    _while_condtional28) {
                        prev_it_194=it_193;
                        it_193=it_193->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result131__ = __result_obj__ = self;
                    return __result131__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional269;
void* right_value164;
struct list_item$1charph* litem_196;
char* __dec_obj62;
_Bool _if_conditional270;
void* right_value165;
struct list_item$1charph* litem_197;
char* __dec_obj63;
void* right_value166;
struct list_item$1charph* litem_198;
char* __dec_obj64;
struct list$1charph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
memset(&litem_196, 0, sizeof(struct list_item$1charph*));
right_value165 = (void*)0;
memset(&litem_197, 0, sizeof(struct list_item$1charph*));
right_value166 = (void*)0;
memset(&litem_198, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional269=self->len==0,                        _if_conditional269) {
                            litem_196=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value164=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 225, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_196->prev=((void*)0);
                            litem_196->next=((void*)0);
                            __dec_obj62=litem_196->item;
                            litem_196->item=(char*)come_increment_ref_count(item);
                            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_196;
                            self->head=litem_196;
                        }
                        else {
                            if(_if_conditional270=self->len==1,                            _if_conditional270) {
                                litem_197=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value165=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 235, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_197->prev=self->head;
                                litem_197->next=((void*)0);
                                __dec_obj63=litem_197->item;
                                litem_197->item=(char*)come_increment_ref_count(item);
                                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_197;
                                self->head->next=litem_197;
                            }
                            else {
                                litem_198=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value166=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 245, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_198->prev=self->tail;
                                litem_198->next=((void*)0);
                                __dec_obj64=litem_198->item;
                                litem_198->item=(char*)come_increment_ref_count(item);
                                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_198;
                                self->tail=litem_198;
                            }
                        }
                        self->len++;
                        __result132__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result132__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional279;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional279=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional279) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional280;
struct sGenericsStructNode* __result133__;
void* right_value182;
struct sGenericsStructNode* result_207;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value183;
char* __dec_obj67;
struct sGenericsStructNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
memset(&result_207, 0, sizeof(struct sGenericsStructNode*));
right_value183 = (void*)0;
                    if(_if_conditional280=self==(void*)0,                    _if_conditional280) {
                        __result133__ = __result_obj__ = (void*)0;
                        return __result133__;
                    }
                    result_207=(struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value182=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "struct sGenericsStructNode"))));
                    come_call_finalizer2(sGenericsStructNode_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional281=self!=((void*)0),                    _if_conditional281) {
                        result_207->sline=self->sline;
                    }
                    if(_if_conditional282=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional282) {
                        __dec_obj67=result_207->sname;
                        result_207->sname=(char*)come_increment_ref_count(((char*)(right_value183=string_clone(self->sname))));
                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result134__ = __result_obj__ = result_207;
                    come_call_finalizer2(sGenericsStructNode_finalize,result_207, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result134__;
                    come_call_finalizer2(sGenericsStructNode_finalize,result_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStructNode_finalize(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional288=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional288) {
                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional289=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional289) {
                        come_call_finalizer2(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional290=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional290) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional291;
struct sStructNode* __result136__;
void* right_value203;
struct sStructNode* result_226;
_Bool _if_conditional292;
void* right_value204;
char* __dec_obj70;
_Bool _if_conditional293;
void* right_value205;
struct sClass* __dec_obj71;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value206;
char* __dec_obj72;
_Bool _if_conditional296;
struct sStructNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
memset(&result_226, 0, sizeof(struct sStructNode*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
                    if(_if_conditional291=self==(void*)0,                    _if_conditional291) {
                        __result136__ = __result_obj__ = (void*)0;
                        return __result136__;
                    }
                    result_226=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value203=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode"))));
                    come_call_finalizer2(sStructNode_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional292=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional292) {
                        __dec_obj70=result_226->mName;
                        result_226->mName=(char*)come_increment_ref_count(((char*)(right_value204=string_clone(self->mName))));
                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional293=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional293) {
                        __dec_obj71=result_226->mClass;
                        result_226->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=sClass_clone(self->mClass))));
                        come_call_finalizer2(sClass_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sClass_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional294=self!=((void*)0),                    _if_conditional294) {
                        result_226->sline=self->sline;
                    }
                    if(_if_conditional295=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional295) {
                        __dec_obj72=result_226->sname;
                        result_226->sname=(char*)come_increment_ref_count(((char*)(right_value206=string_clone(self->sname))));
                        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional296=self!=((void*)0),                    _if_conditional296) {
                        result_226->mOutput=self->mOutput;
                    }
                    __result137__ = __result_obj__ = result_226;
                    come_call_finalizer2(sStructNode_finalize,result_226, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result137__;
                    come_call_finalizer2(sStructNode_finalize,result_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool define_struct_227;
char* p_228;
int sline_229;
_Bool _if_conditional297;
void* right_value209;
char* type_name_230;
_Bool _if_conditional298;
void* right_value210;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value211;
char* type_name_231;
void* right_value212;
struct sNode* __result140__;
void* right_value213;
struct sNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&define_struct_227, 0, sizeof(_Bool));
memset(&p_228, 0, sizeof(char*));
memset(&sline_229, 0, sizeof(int));
right_value209 = (void*)0;
memset(&type_name_230, 0, sizeof(char*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&type_name_231, 0, sizeof(char*));
right_value212 = (void*)0;
right_value213 = (void*)0;
    define_struct_227=(_Bool)0;
    {
        p_228=info->p;
        sline_229=info->sline;
        if(_if_conditional297=charp_operator_equals(buf,"struct"),        _if_conditional297) {
            type_name_230=(char*)come_increment_ref_count(((char*)(right_value209=parse_word(info))));
            right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional298=*info->p==123,            _if_conditional298) {
                ((char*)(right_value210=skip_block(info)));
                right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional299=*info->p==59,                _if_conditional299) {
                    define_struct_227=(_Bool)1;
                }
            }
            type_name_230 = come_decrement_ref_count2(type_name_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_228;
        info->sline=sline_229;
    }
    if(define_struct_227) {
        type_name_231=(char*)come_increment_ref_count(((char*)(right_value211=parse_word(info))));
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __result140__ = __result_obj__ = ((struct sNode*)(right_value212=parse_struct((char*)come_increment_ref_count(type_name_231),info)));
        type_name_231 = come_decrement_ref_count2(type_name_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_value212) { right_value212 = come_decrement_ref_count2(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result140__;
        type_name_231 = come_decrement_ref_count2(type_name_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result141__ = __result_obj__ = ((struct sNode*)(right_value213=string_node_v13(buf,head,head_sline,info)));
    if(right_value213) { right_value213 = come_decrement_ref_count2(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result141__;
}

