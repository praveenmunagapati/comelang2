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
struct tuple4$4voidpvoidpvoidpbool
{
    void* v1;
    void* v2;
    void* v3;
    _Bool v4;
};
struct tuple3$3voidpvoidpbool
{
    void* v1;
    void* v2;
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
static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4);
static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
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
void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3);
static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1948, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1958, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1968, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1978, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1988, "struct smart_pointer$1long"))));
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




void skip_paren(struct sInfo* info){
void* __result_obj__;
int nest_5;
_Bool _while_condtional1;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&nest_5, 0, sizeof(int));
    nest_5=0;
    while(_while_condtional1=(_Bool)1,    _while_condtional1) {
        if(_if_conditional5=*info->p==40,        _if_conditional5) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_5++;
        }
        else {
            if(_if_conditional6=*info->p==41,            _if_conditional6) {
                info->p++;
                skip_spaces_and_lf(info);
                nest_5--;
                if(_if_conditional7=nest_5==0,                _if_conditional7) {
                    break;
                }
            }
            else {
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
_Bool _if_conditional8;
_Bool _while_condtional5;
_Bool _if_conditional9;
_Bool _if_conditional10;
int line_6;
void* right_value13;
void* right_value14;
struct buffer* fname_7;
_Bool _while_condtional6;
_Bool _if_conditional11;
_Bool _while_condtional7;
_Bool _while_condtional8;
void* right_value15;
char* __dec_obj6;
_Bool _if_conditional12;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool _while_condtional11;
_Bool _while_condtional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&line_6, 0, sizeof(int));
right_value13 = (void*)0;
right_value14 = (void*)0;
memset(&fname_7, 0, sizeof(struct buffer*));
right_value15 = (void*)0;
    while(_while_condtional2=strmemcmp(info->p,"__attribute__"),    _while_condtional2) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(_while_condtional3=strmemcmp(info->p,"__extension__"),    _while_condtional3) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
    while(_while_condtional4=*info->p==35,    _while_condtional4) {
        skip_spaces_and_lf(info);
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional8=strmemcmp(info->p,"pragma"),        _if_conditional8) {
            while(_while_condtional5=*info->p,            _while_condtional5) {
                if(_if_conditional9=*info->p==10,                _if_conditional9) {
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else {
            if(_if_conditional10=xisdigit(*info->p),            _if_conditional10) {
                line_6=0;
                fname_7=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 71, "struct buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional6=xisdigit(*info->p),                _while_condtional6) {
                    line_6=line_6*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional11=*info->p==34,                _if_conditional11) {
                    info->p++;
                    while(_while_condtional7=*info->p!=34,                    _while_condtional7) {
                        buffer_append_char(fname_7,*info->p);
                        info->p++;
                    }
                    while(_while_condtional8=*info->p!=10,                    _while_condtional8) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_6;
                __dec_obj6=info->sname;
                info->sname=(char*)come_increment_ref_count(((char*)(right_value15=buffer_to_string(fname_7))));
                __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                skip_spaces_and_lf(info);
                come_call_finalizer2(buffer_finalize,fname_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional12=*info->p==34,                _if_conditional12) {
                    info->p++;
                    while(_while_condtional9=*info->p!=34,                    _while_condtional9) {
                        info->p++;
                    }
                    while(_while_condtional10=*info->p!=10,                    _while_condtional10) {
                        info->p++;
                    }
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
    }
    while(_while_condtional11=strmemcmp(info->p,"__attribute__"),    _while_condtional11) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(_while_condtional12=strmemcmp(info->p,"__extension__"),    _while_condtional12) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
char c_8;
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_8, 0, sizeof(char));
    c_8=*(info->p+strlen(str));
    __result10__ = strmemcmp(info->p,str)&&(c_8==59||c_8==32||c_8==9||c_8==10||c_8==10);
    return __result10__;
}

char* parse_word(struct sInfo* info){
void* __result_obj__;
void* right_value16;
void* right_value17;
struct buffer* buf_9;
_Bool _while_condtional13;
void* right_value18;
_Bool _if_conditional13;
void* right_value19;
char* __result11__;
void* right_value20;
char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
right_value17 = (void*)0;
memset(&buf_9, 0, sizeof(struct buffer*));
right_value18 = (void*)0;
right_value19 = (void*)0;
right_value20 = (void*)0;
    buf_9=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    parse_sharp_v5(info);
    while(_while_condtional13=(*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36),    _while_condtional13) {
        buffer_append_char(buf_9,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(_if_conditional13=string_length(((char*)(right_value18=buffer_to_string(buf_9))))==0,    right_value18 = come_decrement_ref_count2(right_value18, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _if_conditional13) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result11__ = __result_obj__ = ((char*)(right_value19=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result11__;
    }
    __result12__ = __result_obj__ = ((char*)(right_value20=buffer_to_string(buf_9)));
    come_call_finalizer2(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value20 = come_decrement_ref_count2(right_value20, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result12__;
    come_call_finalizer2(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional14;
_Bool _if_conditional14;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        if(_if_conditional14=*info->p==32||*info->p==9,        _if_conditional14) {
            info->p++;
        }
        else {
            if(_if_conditional15=*info->p==10,            _if_conditional15) {
                info->p++;
                info->sline++;
            }
            else {
                break;
            }
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct list$1sTypeph* o2_saved_10;
struct sType* it_13;
_Bool _if_conditional20;
_Bool __result20__;
_Bool _if_conditional37;
_Bool __result21__;
_Bool _if_conditional38;
_Bool __result22__;
_Bool __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_10, 0, sizeof(struct list$1sTypeph*));
memset(&it_13, 0, sizeof(struct sType*));
    for(    o2_saved_10=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_13=list$1sTypeph_begin((o2_saved_10));    !list$1sTypeph_end((o2_saved_10));    it_13=list$1sTypeph_next((o2_saved_10))    ){
        if(_if_conditional20=is_contained_generics_class(it_13,info),        _if_conditional20) {
            __result20__ = (_Bool)1;
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result20__;
        }
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(type->mClass->mGenerics) {
        __result21__ = (_Bool)1;
        return __result21__;
    }
    if(type->mClass->mMethodGenerics) {
        __result22__ = (_Bool)1;
        return __result22__;
    }
    __result23__ = (_Bool)0;
    return __result23__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional16;
struct sType* result_11;
struct sType* __result13__;
_Bool _if_conditional17;
struct sType* __result14__;
struct sType* result_12;
struct sType* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_11, 0, sizeof(struct sType*));
memset(&result_12, 0, sizeof(struct sType*));
        if(_if_conditional16=self==((void*)0),        _if_conditional16) {
            memset(&result_11,0,sizeof(struct sType*));
            __result13__ = __result_obj__ = result_11;
            return __result13__;
        }
        self->it=self->head;
        if(self->it) {
            __result14__ = __result_obj__ = self->it->item;
            return __result14__;
        }
        memset(&result_12,0,sizeof(struct sType*));
        __result15__ = __result_obj__ = result_12;
        return __result15__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
        __result16__ = self==((void*)0)||self->it==((void*)0);
        return __result16__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional18;
struct sType* result_14;
struct sType* __result17__;
_Bool _if_conditional19;
struct sType* __result18__;
struct sType* result_15;
struct sType* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_14, 0, sizeof(struct sType*));
memset(&result_15, 0, sizeof(struct sType*));
        if(_if_conditional18=self==((void*)0)||self->it==((void*)0),        _if_conditional18) {
            memset(&result_14,0,sizeof(struct sType*));
            __result17__ = __result_obj__ = result_14;
            return __result17__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result18__ = __result_obj__ = self->it->item;
            return __result18__;
        }
        memset(&result_15,0,sizeof(struct sType*));
        __result19__ = __result_obj__ = result_15;
        return __result19__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_16;
_Bool _while_condtional15;
struct list_item$1sTypeph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1sTypeph*));
                it_16=self->head;
                while(_while_condtional15=it_16!=((void*)0),                _while_condtional15) {
                    prev_it_17=it_16;
                    it_16=it_16->next;
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional21) {
                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional22=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional22) {
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional24=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional24) {
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional25=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional25) {
                                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional26=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional26) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional27=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional27) {
                                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional29=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional29) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional30=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional30) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional32=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional32) {
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional33=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional33) {
                                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional34=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional34) {
                                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional35=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional35) {
                                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional36=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional36) {
                                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional23) {
                                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_18;
_Bool _while_condtional16;
struct list_item$1sNodeph* prev_it_19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_19, 0, sizeof(struct list_item$1sNodeph*));
                                        it_18=self->head;
                                        while(_while_condtional16=it_18!=((void*)0),                                        _while_condtional16) {
                                            prev_it_19=it_18;
                                            it_18=it_18->next;
                                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional28=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional28) {
                                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_20;
_Bool _while_condtional17;
struct list_item$1charph* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charph*));
                                        it_20=self->head;
                                        while(_while_condtional17=it_20!=((void*)0),                                        _while_condtional17) {
                                            prev_it_21=it_20;
                                            it_20=it_20->next;
                                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional31) {
                                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info){
void* __result_obj__;
void* right_value21;
void* right_value22;
struct list$1sTypeph* param_types_22;
void* right_value23;
void* right_value24;
struct list$1charph* param_names_23;
void* right_value25;
void* right_value26;
struct list$1charph* param_default_parametors_24;
_Bool var_args_25;
_Bool void_param_26;
char* p_27;
int sline_28;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _while_condtional18;
_Bool _if_conditional44;
void* right_value27;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_29;
char* param_name_30;
_Bool err_31;
_Bool _if_conditional47;
void* right_value28;
void* right_value29;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result27__;
void* right_value30;
struct sType* param_type2_32;
void* right_value68;
void* right_value72;
_Bool _if_conditional122;
char* p_57;
_Bool no_comma_58;
void* right_value73;
struct sNode* node_59;
char* p2_60;
void* right_value74;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value75;
void* right_value76;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
right_value22 = (void*)0;
memset(&param_types_22, 0, sizeof(struct list$1sTypeph*));
right_value23 = (void*)0;
right_value24 = (void*)0;
memset(&param_names_23, 0, sizeof(struct list$1charph*));
right_value25 = (void*)0;
right_value26 = (void*)0;
memset(&param_default_parametors_24, 0, sizeof(struct list$1charph*));
memset(&var_args_25, 0, sizeof(_Bool));
memset(&void_param_26, 0, sizeof(_Bool));
memset(&p_27, 0, sizeof(char*));
memset(&sline_28, 0, sizeof(int));
right_value27 = (void*)0;
memset(&param_type_29, 0, sizeof(struct sType*));
memset(&param_name_30, 0, sizeof(char*));
memset(&err_31, 0, sizeof(_Bool));
memset(&param_type_29, 0, sizeof(struct sType*));
memset(&param_name_30, 0, sizeof(char*));
memset(&err_31, 0, sizeof(_Bool));
right_value28 = (void*)0;
right_value29 = (void*)0;
right_value30 = (void*)0;
memset(&param_type2_32, 0, sizeof(struct sType*));
right_value68 = (void*)0;
right_value72 = (void*)0;
memset(&p_57, 0, sizeof(char*));
memset(&no_comma_58, 0, sizeof(_Bool));
right_value73 = (void*)0;
memset(&node_59, 0, sizeof(struct sNode*));
memset(&p2_60, 0, sizeof(char*));
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
    param_types_22=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 199, "struct list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_names_23=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value24=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value23=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 200, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value26=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value25=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 201, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    var_args_25=(_Bool)0;
    expected_next_character(40,info);
    void_param_26=(_Bool)0;
    {
        p_27=info->p;
        sline_28=info->sline;
        if(_if_conditional39=strmemcmp(info->p,"void"),        _if_conditional39) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional40=*info->p==41,            _if_conditional40) {
                void_param_26=(_Bool)1;
            }
        }
        info->p=p_27;
        info->sline=sline_28;
    }
    if(void_param_26) {
        if(_if_conditional42=strmemcmp(info->p,"void"),        _if_conditional42) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional43=*info->p==41,            _if_conditional43) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(_while_condtional18=(_Bool)1,        _while_condtional18) {
            if(_if_conditional44=*info->p==41,            _if_conditional44) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value27=parse_type(info,(_Bool)1,(_Bool)0)));
            param_type_29=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_30=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_31=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional47=!err_31,            _if_conditional47) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result27__ = __result_obj__ = ((struct tuple4$4voidpvoidpvoidpbool*)(right_value29=tuple4$4voidpvoidpvoidpbool_initialize((struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value28=(struct tuple4$4voidpvoidpvoidpbool*)come_calloc(1, sizeof(struct tuple4$4voidpvoidpvoidpbool)*(1), "05function4.c", 250, "struct tuple4$4voidpvoidpvoidpbool")))),((void*)0),((void*)0),((void*)0),(_Bool)0)));
                come_call_finalizer2(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                param_name_30 = come_decrement_ref_count2(param_name_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value28 = come_decrement_ref_count2(right_value28, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple4$4voidpvoidpvoidpboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result27__;
            }
            param_type2_32=(struct sType*)come_increment_ref_count(((struct sType*)(right_value30=solve_generics(param_type_29,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_type2_32->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_22,(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=sType_clone(param_type2_32)))));
            come_call_finalizer2(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(param_names_23,(char*)come_increment_ref_count(((char*)(right_value72=string_clone(param_name_30)))));
            right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional122=*info->p==61,            _if_conditional122) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_57=info->p;
                no_comma_58=info->no_comma;
                info->no_comma=(_Bool)1;
                node_59=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value73=expression_v13(info))));
                if(right_value73) { right_value73 = come_decrement_ref_count2(right_value73, ((struct sNode*)right_value73)->finalize, ((struct sNode*)right_value73)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_58;
                p2_60=info->p;
                char buf_61[p2_60-p_57+1];
                memset(&buf_61, 0, sizeof(char)                *(p2_60-p_57+1)                );
                memcpy(buf_61,p_57,p2_60-p_57);
                buf_61[p2_60-p_57]=0;
                list$1charph_push_back(param_default_parametors_24,(char*)come_increment_ref_count(((char*)(right_value74=__builtin_string(buf_61)))));
                right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(node_59) { node_59 = come_decrement_ref_count2(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_24,((void*)0));
            }
            parse_sharp_v5(info);
            if(_if_conditional123=*info->p==44,            _if_conditional123) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional124=strmemcmp(info->p,"..."),                _if_conditional124) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_25=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer2(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    param_name_30 = come_decrement_ref_count2(param_name_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,param_type2_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                if(_if_conditional125=*info->p==41,                _if_conditional125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer2(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    param_name_30 = come_decrement_ref_count2(param_name_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,param_type2_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            come_call_finalizer2(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            param_name_30 = come_decrement_ref_count2(param_name_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,param_type2_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    __result47__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value76=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value75=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 310, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_22),(struct list$1charph*)come_increment_ref_count(param_names_23),(struct list$1charph*)come_increment_ref_count(param_default_parametors_24),var_args_25)));
    come_call_finalizer2(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result47__;
    come_call_finalizer2(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result24__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result24__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result25__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result25__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional45;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional45) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional46=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional46) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4){
void* __result_obj__;
struct tuple4$4voidpvoidpvoidpbool* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->v1=v1;
                    self->v2=v2;
                    self->v3=v3;
                    self->v4=v4;
                    __result26__ = __result_obj__ = self;
                    come_call_finalizer2(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result26__;
                    come_call_finalizer2(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional48;
void* right_value31;
struct list_item$1sTypeph* litem_33;
struct sType* __dec_obj7;
_Bool _if_conditional49;
void* right_value32;
struct list_item$1sTypeph* litem_34;
struct sType* __dec_obj8;
void* right_value33;
struct list_item$1sTypeph* litem_35;
struct sType* __dec_obj9;
struct list$1sTypeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1sTypeph*));
right_value32 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1sTypeph*));
right_value33 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional48=self->len==0,                _if_conditional48) {
                    litem_33=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value31=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_33->prev=((void*)0);
                    litem_33->next=((void*)0);
                    __dec_obj7=litem_33->item;
                    litem_33->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_33;
                    self->head=litem_33;
                }
                else {
                    if(_if_conditional49=self->len==1,                    _if_conditional49) {
                        litem_34=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value32=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_34->prev=self->head;
                        litem_34->next=((void*)0);
                        __dec_obj8=litem_34->item;
                        litem_34->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_34;
                        self->head->next=litem_34;
                    }
                    else {
                        litem_35=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value33=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_35->prev=self->tail;
                        litem_35->next=((void*)0);
                        __dec_obj9=litem_35->item;
                        litem_35->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_35;
                        self->tail=litem_35;
                    }
                }
                self->len++;
                __result28__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result28__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional50;
struct sType* __result29__;
void* right_value34;
struct sType* result_36;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value37;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional56;
void* right_value38;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional57;
void* right_value39;
char* __dec_obj13;
_Bool _if_conditional58;
void* right_value46;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional62;
void* right_value54;
struct list$1sNodeph* __dec_obj21;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value55;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional77;
void* right_value62;
struct list$1charph* __dec_obj26;
_Bool _if_conditional81;
void* right_value63;
struct tuple1$1sTypeph* __dec_obj27;
_Bool _if_conditional82;
_Bool _if_conditional83;
void* right_value64;
struct sNode* __dec_obj28;
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
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
void* right_value65;
struct sNode* __dec_obj29;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
void* right_value66;
char* __dec_obj30;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value67;
char* __dec_obj31;
struct sType* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
memset(&result_36, 0, sizeof(struct sType*));
right_value37 = (void*)0;
right_value38 = (void*)0;
right_value39 = (void*)0;
right_value46 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
                if(_if_conditional50=self==(void*)0,                _if_conditional50) {
                    __result29__ = __result_obj__ = (void*)0;
                    return __result29__;
                }
                result_36=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                come_call_finalizer2(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional51=self!=((void*)0),                _if_conditional51) {
                    result_36->mClass=self->mClass;
                }
                if(_if_conditional52=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional52) {
                    __dec_obj11=result_36->mNoSolvedGenericsType;
                    result_36->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value37=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional56=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional56) {
                    __dec_obj12=result_36->mOriginalLoadVarType;
                    result_36->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value38=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional57=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional57) {
                    __dec_obj13=result_36->mGenericsName;
                    result_36->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value39=string_clone(self->mGenericsName))));
                    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value39 = come_decrement_ref_count2(right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional58=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional58) {
                    __dec_obj17=result_36->mGenericsTypes;
                    result_36->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value46=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional62=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional62) {
                    __dec_obj21=result_36->mArrayNum;
                    result_36->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value54=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional75=self!=((void*)0),                _if_conditional75) {
                    result_36->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional76=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional76) {
                    __dec_obj22=result_36->mParamTypes;
                    result_36->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional77=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional77) {
                    __dec_obj26=result_36->mParamNames;
                    result_36->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value62=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional81=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional81) {
                    __dec_obj27=result_36->mResultType;
                    result_36->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value63=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional82=self!=((void*)0),                _if_conditional82) {
                    result_36->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional83=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional83) {
                    __dec_obj28=result_36->mAlignas;
                    result_36->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value64=sNode_clone(self->mAlignas))));
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value64) { right_value64 = come_decrement_ref_count2(right_value64, ((struct sNode*)right_value64)->finalize, ((struct sNode*)right_value64)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional84=self!=((void*)0),                _if_conditional84) {
                    result_36->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional85=self!=((void*)0),                _if_conditional85) {
                    result_36->mShort=self->mShort;
                }
                if(_if_conditional86=self!=((void*)0),                _if_conditional86) {
                    result_36->mLong=self->mLong;
                }
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    result_36->mLongLong=self->mLongLong;
                }
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    result_36->mConstant=self->mConstant;
                }
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    result_36->mRegister=self->mRegister;
                }
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    result_36->mVolatile=self->mVolatile;
                }
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    result_36->mStatic=self->mStatic;
                }
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    result_36->mExtern=self->mExtern;
                }
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    result_36->mRestrict=self->mRestrict;
                }
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_36->mImmutable=self->mImmutable;
                }
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    result_36->mHeap=self->mHeap;
                }
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    result_36->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    result_36->mDelegate=self->mDelegate;
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_36->mShare=self->mShare;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    result_36->mClone=self->mClone;
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_36->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    result_36->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    result_36->mRefference=self->mRefference;
                }
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    result_36->mException=self->mException;
                }
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    result_36->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    result_36->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    result_36->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional107=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional107) {
                    __dec_obj29=result_36->mSizeNum;
                    result_36->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value65=sNode_clone(self->mSizeNum))));
                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value65) { right_value65 = come_decrement_ref_count2(right_value65, ((struct sNode*)right_value65)->finalize, ((struct sNode*)right_value65)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    result_36->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional109=self!=((void*)0),                _if_conditional109) {
                    result_36->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional110=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional110) {
                    __dec_obj30=result_36->mOriginalTypeName;
                    result_36->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value66=string_clone(self->mOriginalTypeName))));
                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional111=self!=((void*)0),                _if_conditional111) {
                    result_36->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional112=self!=((void*)0),                _if_conditional112) {
                    result_36->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    result_36->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    result_36->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional115=self!=((void*)0),                _if_conditional115) {
                    result_36->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    result_36->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    result_36->mInline=self->mInline;
                }
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    result_36->mNullValue=self->mNullValue;
                }
                if(_if_conditional119=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional119) {
                    __dec_obj31=result_36->mAsmName;
                    result_36->mAsmName=(char*)come_increment_ref_count(((char*)(right_value67=string_clone(self->mAsmName))));
                    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result44__ = __result_obj__ = result_36;
                come_call_finalizer2(sType_finalize,result_36, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result44__;
                come_call_finalizer2(sType_finalize,result_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional53;
struct tuple1$1sTypeph* __result30__;
void* right_value35;
struct tuple1$1sTypeph* result_37;
_Bool _if_conditional55;
void* right_value36;
struct sType* __dec_obj10;
struct tuple1$1sTypeph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
memset(&result_37, 0, sizeof(struct tuple1$1sTypeph*));
right_value36 = (void*)0;
                        if(_if_conditional53=self==(void*)0,                        _if_conditional53) {
                            __result30__ = __result_obj__ = (void*)0;
                            return __result30__;
                        }
                        result_37=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value35=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional55=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional55) {
                            __dec_obj10=result_37->v1;
                            result_37->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value36=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result31__ = __result_obj__ = result_37;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_37, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result31__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional54;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional54=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional54) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional59;
struct list$1sTypeph* __result32__;
void* right_value40;
void* right_value41;
struct list$1sTypeph* result_38;
struct list_item$1sTypeph* it_39;
_Bool _while_condtional19;
void* right_value45;
struct list$1sTypeph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value40 = (void*)0;
right_value41 = (void*)0;
memset(&result_38, 0, sizeof(struct list$1sTypeph*));
memset(&it_39, 0, sizeof(struct list_item$1sTypeph*));
right_value45 = (void*)0;
                        if(_if_conditional59=self==((void*)0),                        _if_conditional59) {
                            __result32__ = __result_obj__ = ((void*)0);
                            return __result32__;
                        }
                        result_38=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value41=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value40=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_39=self->head;
                        while(_while_condtional19=it_39!=((void*)0),                        _while_condtional19) {
                            list$1sTypeph_add(result_38,(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=sType_clone(it_39->item)))));
                            come_call_finalizer2(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            it_39=it_39->next;
                        }
                        __result34__ = __result_obj__ = result_38;
                        come_call_finalizer2(list$1sTypephp_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result34__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional60;
void* right_value42;
struct list_item$1sTypeph* litem_40;
struct sType* __dec_obj14;
_Bool _if_conditional61;
void* right_value43;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj15;
void* right_value44;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj16;
struct list$1sTypeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
memset(&litem_40, 0, sizeof(struct list_item$1sTypeph*));
right_value43 = (void*)0;
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
right_value44 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional60=self->len==0,                                _if_conditional60) {
                                    litem_40=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value42=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_40->prev=((void*)0);
                                    litem_40->next=((void*)0);
                                    __dec_obj14=litem_40->item;
                                    litem_40->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_40;
                                    self->head=litem_40;
                                }
                                else {
                                    if(_if_conditional61=self->len==1,                                    _if_conditional61) {
                                        litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value43=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "struct list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_41->prev=self->head;
                                        litem_41->next=((void*)0);
                                        __dec_obj15=litem_41->item;
                                        litem_41->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail=litem_41;
                                        self->head->next=litem_41;
                                    }
                                    else {
                                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value44=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "struct list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_42->prev=self->tail;
                                        litem_42->next=((void*)0);
                                        __dec_obj16=litem_42->item;
                                        litem_42->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail->next=litem_42;
                                        self->tail=litem_42;
                                    }
                                }
                                self->len++;
                                __result33__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result33__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional63;
struct list$1sNodeph* __result35__;
void* right_value47;
void* right_value48;
struct list$1sNodeph* result_43;
struct list_item$1sNodeph* it_44;
_Bool _while_condtional20;
void* right_value53;
struct list$1sNodeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
right_value48 = (void*)0;
memset(&result_43, 0, sizeof(struct list$1sNodeph*));
memset(&it_44, 0, sizeof(struct list_item$1sNodeph*));
right_value53 = (void*)0;
                        if(_if_conditional63=self==((void*)0),                        _if_conditional63) {
                            __result35__ = __result_obj__ = ((void*)0);
                            return __result35__;
                        }
                        result_43=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value48=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value47=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "struct list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_44=self->head;
                        while(_while_condtional20=it_44!=((void*)0),                        _while_condtional20) {
                            list$1sNodeph_add(result_43,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value53=sNode_clone(it_44->item)))));
                            if(right_value53) { right_value53 = come_decrement_ref_count2(right_value53, ((struct sNode*)right_value53)->finalize, ((struct sNode*)right_value53)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_44=it_44->next;
                        }
                        __result40__ = __result_obj__ = result_43;
                        come_call_finalizer2(list$1sNodephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result40__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result36__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result36__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional64;
void* right_value49;
struct list_item$1sNodeph* litem_45;
struct sNode* __dec_obj18;
_Bool _if_conditional65;
void* right_value50;
struct list_item$1sNodeph* litem_46;
struct sNode* __dec_obj19;
void* right_value51;
struct list_item$1sNodeph* litem_47;
struct sNode* __dec_obj20;
struct list$1sNodeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sNodeph*));
right_value50 = (void*)0;
memset(&litem_46, 0, sizeof(struct list_item$1sNodeph*));
right_value51 = (void*)0;
memset(&litem_47, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional64=self->len==0,                                _if_conditional64) {
                                    litem_45=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value49=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_45->prev=((void*)0);
                                    litem_45->next=((void*)0);
                                    __dec_obj18=litem_45->item;
                                    litem_45->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_45;
                                    self->head=litem_45;
                                }
                                else {
                                    if(_if_conditional65=self->len==1,                                    _if_conditional65) {
                                        litem_46=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value50=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "struct list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_46->prev=self->head;
                                        litem_46->next=((void*)0);
                                        __dec_obj19=litem_46->item;
                                        litem_46->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail=litem_46;
                                        self->head->next=litem_46;
                                    }
                                    else {
                                        litem_47=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value51=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "struct list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_47->prev=self->tail;
                                        litem_47->next=((void*)0);
                                        __dec_obj20=litem_47->item;
                                        litem_47->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail->next=litem_47;
                                        self->tail=litem_47;
                                    }
                                }
                                self->len++;
                                __result37__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result37__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional66;
struct sNode* __result38__;
void* right_value52;
struct sNode* result_48;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
struct sNode* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&result_48, 0, sizeof(struct sNode*));
                                if(_if_conditional66=self==(void*)0,                                _if_conditional66) {
                                    __result38__ = __result_obj__ = (void*)0;
                                    return __result38__;
                                }
                                result_48=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value52=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                                if(right_value52) { right_value52 = come_decrement_ref_count2(right_value52, ((struct sNode*)right_value52)->finalize, ((struct sNode*)right_value52)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional67=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional67) {
                                    result_48->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional68=self!=((void*)0),                                _if_conditional68) {
                                    result_48->finalize=self->finalize;
                                }
                                if(_if_conditional69=self!=((void*)0),                                _if_conditional69) {
                                    result_48->clone=self->clone;
                                }
                                if(_if_conditional70=self!=((void*)0),                                _if_conditional70) {
                                    result_48->compile=self->compile;
                                }
                                if(_if_conditional71=self!=((void*)0),                                _if_conditional71) {
                                    result_48->sline=self->sline;
                                }
                                if(_if_conditional72=self!=((void*)0),                                _if_conditional72) {
                                    result_48->sname=self->sname;
                                }
                                if(_if_conditional73=self!=((void*)0),                                _if_conditional73) {
                                    result_48->terminated=self->terminated;
                                }
                                if(_if_conditional74=self!=((void*)0),                                _if_conditional74) {
                                    result_48->kind=self->kind;
                                }
                                __result39__ = __result_obj__ = result_48;
                                if(result_48) { result_48 = come_decrement_ref_count2(result_48, ((struct sNode*)result_48)->finalize, ((struct sNode*)result_48)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result39__;
                                if(result_48) { result_48 = come_decrement_ref_count2(result_48, ((struct sNode*)result_48)->finalize, ((struct sNode*)result_48)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional78;
struct list$1charph* __result41__;
void* right_value56;
void* right_value57;
struct list$1charph* result_49;
struct list_item$1charph* it_50;
_Bool _while_condtional21;
void* right_value61;
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value57 = (void*)0;
memset(&result_49, 0, sizeof(struct list$1charph*));
memset(&it_50, 0, sizeof(struct list_item$1charph*));
right_value61 = (void*)0;
                        if(_if_conditional78=self==((void*)0),                        _if_conditional78) {
                            __result41__ = __result_obj__ = ((void*)0);
                            return __result41__;
                        }
                        result_49=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value57=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value56=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "struct list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_50=self->head;
                        while(_while_condtional21=it_50!=((void*)0),                        _while_condtional21) {
                            list$1charph_add(result_49,(char*)come_increment_ref_count(((char*)(right_value61=string_clone(it_50->item)))));
                            right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_50=it_50->next;
                        }
                        __result43__ = __result_obj__ = result_49;
                        come_call_finalizer2(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result43__;
                        come_call_finalizer2(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional79;
void* right_value58;
struct list_item$1charph* litem_51;
char* __dec_obj23;
_Bool _if_conditional80;
void* right_value59;
struct list_item$1charph* litem_52;
char* __dec_obj24;
void* right_value60;
struct list_item$1charph* litem_53;
char* __dec_obj25;
struct list$1charph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
right_value59 = (void*)0;
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
right_value60 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional79=self->len==0,                                _if_conditional79) {
                                    litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value58=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_51->prev=((void*)0);
                                    litem_51->next=((void*)0);
                                    __dec_obj23=litem_51->item;
                                    litem_51->item=(char*)come_increment_ref_count(item);
                                    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_51;
                                    self->head=litem_51;
                                }
                                else {
                                    if(_if_conditional80=self->len==1,                                    _if_conditional80) {
                                        litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value59=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "struct list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_52->prev=self->head;
                                        litem_52->next=((void*)0);
                                        __dec_obj24=litem_52->item;
                                        litem_52->item=(char*)come_increment_ref_count(item);
                                        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail=litem_52;
                                        self->head->next=litem_52;
                                    }
                                    else {
                                        litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value60=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "struct list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_53->prev=self->tail;
                                        litem_53->next=((void*)0);
                                        __dec_obj25=litem_53->item;
                                        litem_53->item=(char*)come_increment_ref_count(item);
                                        __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail->next=litem_53;
                                        self->tail=litem_53;
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

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional120;
void* right_value69;
struct list_item$1charph* litem_54;
char* __dec_obj32;
_Bool _if_conditional121;
void* right_value70;
struct list_item$1charph* litem_55;
char* __dec_obj33;
void* right_value71;
struct list_item$1charph* litem_56;
char* __dec_obj34;
struct list$1charph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
right_value70 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
right_value71 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional120=self->len==0,                _if_conditional120) {
                    litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value69=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "struct list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_54->prev=((void*)0);
                    litem_54->next=((void*)0);
                    __dec_obj32=litem_54->item;
                    litem_54->item=(char*)come_increment_ref_count(item);
                    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_54;
                    self->head=litem_54;
                }
                else {
                    if(_if_conditional121=self->len==1,                    _if_conditional121) {
                        litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value70=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_55->prev=self->head;
                        litem_55->next=((void*)0);
                        __dec_obj33=litem_55->item;
                        litem_55->item=(char*)come_increment_ref_count(item);
                        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_55;
                        self->head->next=litem_55;
                    }
                    else {
                        litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value71=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_56->prev=self->tail;
                        litem_56->next=((void*)0);
                        __dec_obj34=litem_56->item;
                        litem_56->item=(char*)come_increment_ref_count(item);
                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_56;
                        self->tail=litem_56;
                    }
                }
                self->len++;
                __result45__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result45__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct list$1sTypeph* __dec_obj35;
struct list$1charph* __dec_obj36;
struct list$1charph* __dec_obj37;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj35=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj36=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(v2);
        come_call_finalizer2(list$1charph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj37=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(v3);
        come_call_finalizer2(list$1charph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        self->v4=v4;
        __result46__ = __result_obj__ = self;
        come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result46__;
        come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional126=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional126) {
                come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional127=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional127) {
                come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional128=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional128) {
                come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info){
void* __result_obj__;
void* right_value77;
struct sType* right_type2_62;
struct sType* left_no_solved_generics_type_63;
struct sType* right_no_solved_generics_type_64;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
int i_65;
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
void* right_value78;
void* right_value79;
struct buffer* buf2_69;
void* right_value80;
void* right_value81;
void* right_value82;
void* right_value83;
void* right_value84;
void* right_value85;
char* __dec_obj38;
void* right_value86;
struct sType* __dec_obj39;
void* right_value87;
struct sType* __dec_obj40;
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
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
memset(&right_type2_62, 0, sizeof(struct sType*));
memset(&left_no_solved_generics_type_63, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_64, 0, sizeof(struct sType*));
memset(&i_65, 0, sizeof(int));
right_value78 = (void*)0;
right_value79 = (void*)0;
memset(&buf2_69, 0, sizeof(struct buffer*));
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
    right_type2_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(right_type))));
    come_call_finalizer2(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    left_no_solved_generics_type_63=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_64=right_type2_62->mNoSolvedGenericsType->v1;
    if(_if_conditional129=left_no_solved_generics_type_63&&right_no_solved_generics_type_64,    _if_conditional129) {
        if(_if_conditional130=list$1sTypeph_length(left_no_solved_generics_type_63->mGenericsTypes)>0,        _if_conditional130) {
            if(_if_conditional131=list$1sTypeph_length(left_no_solved_generics_type_63->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_64->mGenericsTypes),            _if_conditional131) {
                err_msg(info,"generics type parametor number error");
                printf("left type generics type parametor number is %d\n",list$1sTypeph_length(left_no_solved_generics_type_63->mGenericsTypes));
                printf("right type generics type parametor number is %d\n",list$1sTypeph_length(right_no_solved_generics_type_64->mGenericsTypes));
                exit(2);
            }
            for(            i_65=0;            i_65<list$1sTypeph_length(left_no_solved_generics_type_63->mGenericsTypes);            i_65++            ){
                check_assign_type(msg,list$1sTypephp_operator_load_element(left_no_solved_generics_type_63->mGenericsTypes,i_65),list$1sTypephp_operator_load_element(right_no_solved_generics_type_64->mGenericsTypes,i_65),come_value,(_Bool)1,info);
            }
            check_assign_type(msg,left_no_solved_generics_type_63,right_no_solved_generics_type_64,come_value,(_Bool)0,info);
        }
    }
    else {
        if(check_no_pointer) {
            if(_if_conditional135=left_type->mPointerNum>0,            _if_conditional135) {
                if(_if_conditional136=right_type2_62->mPointerNum>0,                _if_conditional136) {
                    if(_if_conditional137=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_62->mClass->mName,"void"),                    _if_conditional137) {
                    }
                    else {
                        if(_if_conditional138=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list"),                        _if_conditional138) {
                        }
                        else {
                            if(_if_conditional139=string_operator_not_equals(left_type->mClass->mName,right_type2_62->mClass->mName),                            _if_conditional139) {
                                err_msg(info,"type error1");
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                    exit(2);
                }
            }
            else {
                if(_if_conditional140=left_type->mPointerNum==0&&right_type2_62->mPointerNum>0,                _if_conditional140) {
                    err_msg(info,"type error3");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                    exit(2);
                }
                else {
                    if(_if_conditional141=left_type->mPointerNum>0&&right_type2_62->mPointerNum==0&&!(string_operator_equals(right_type2_62->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")),                    _if_conditional141) {
                        err_msg(info,"type error10");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                        exit(2);
                    }
                    else {
                        if(_if_conditional142=string_operator_not_equals(left_type->mClass->mName,right_type2_62->mClass->mName),                        _if_conditional142) {
                            err_msg(info,"type error4");
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                            exit(2);
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional143=!left_type->mNullValue&&right_type2_62->mNullValue,            _if_conditional143) {
                if(_if_conditional144=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_62->mClass->mName,"__builtin_va_list"),                _if_conditional144) {
                }
                else {
                    if(_if_conditional145=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list"),                    _if_conditional145) {
                    }
                    else {
                        if(_if_conditional146=string_operator_equals(right_type2_62->mClass->mName,"void")&&right_type2_62->mPointerNum==0,                        _if_conditional146) {
                            err_msg(info,"type error6");
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                            exit(2);
                        }
                        else {
                            buf2_69=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value78=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 396, "struct buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            buffer_append_str(buf2_69,((char*)(right_value84=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(right_value80=string_to_string(come_value->c_value))),((char*)(right_value81=string_to_string(info->sname))),((char*)(right_value82=int_to_string(info->sline))),((char*)(right_value83=int_to_string(gComeDebugStackFrameID++)))))));
                            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj38=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value85=buffer_to_string(buf2_69))));
                            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj39=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(left_type))));
                            come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_value->var=((void*)0);
                            __dec_obj40=right_type2_62;
                            right_type2_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(left_type))));
                            come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,buf2_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            else {
                if(_if_conditional147=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                _if_conditional147) {
                    if(_if_conditional148=string_operator_equals(right_type2_62->mClass->mName,"char")&&right_type2_62->mPointerNum==1,                    _if_conditional148) {
                    }
                    else {
                        if(_if_conditional149=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_62->mClass->mName,"__builtin_va_list"),                        _if_conditional149) {
                        }
                        else {
                            if(_if_conditional150=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list"),                            _if_conditional150) {
                            }
                            else {
                                if(_if_conditional151=string_operator_equals(right_type2_62->mClass->mName,"lambda"),                                _if_conditional151) {
                                    err_msg(info,"type error6");
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                    exit(2);
                                }
                                else {
                                    if(_if_conditional152=string_operator_equals(right_type2_62->mClass->mName,"void")&&right_type2_62->mPointerNum>0,                                    _if_conditional152) {
                                    }
                                    else {
                                        if(_if_conditional153=string_operator_equals(right_type2_62->mClass->mName,"void"),                                        _if_conditional153) {
                                            err_msg(info,"type error6");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional154=left_type->mPointerNum>0&&right_type2_62->mPointerNum==0&&!(string_operator_equals(right_type2_62->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")),                                            _if_conditional154) {
                                                err_msg(info,"type error10");
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                                exit(2);
                                            }
                                            else {
                                                if(_if_conditional155=string_operator_not_equals(left_type->mClass->mName,right_type2_62->mClass->mName),                                                _if_conditional155) {
                                                    err_msg(info,"type error5");
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                                    exit(2);
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
                    if(_if_conditional156=left_type->mPointerNum>0,                    _if_conditional156) {
                        if(_if_conditional157=right_type2_62->mPointerNum>0,                        _if_conditional157) {
                            if(_if_conditional158=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_62->mClass->mName,"void"),                            _if_conditional158) {
                            }
                            else {
                                if(_if_conditional159=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list"),                                _if_conditional159) {
                                }
                                else {
                                    if(_if_conditional160=string_operator_not_equals(left_type->mClass->mName,right_type2_62->mClass->mName),                                    _if_conditional160) {
                                        err_msg(info,"type error5");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                        exit(2);
                                    }
                                    else {
                                        if(_if_conditional161=left_type->mPointerNum!=right_type2_62->mPointerNum,                                        _if_conditional161) {
                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                        }
                                        else {
                                            if(_if_conditional162=list$1sNodeph_length(right_type2_62->mArrayNum)>0,                                            _if_conditional162) {
                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum,list$1sNodeph_length(right_type2_62->mArrayNum));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional163=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_62->mClass->mName,"void"),                            _if_conditional163) {
                            }
                            else {
                                if(_if_conditional164=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list"),                                _if_conditional164) {
                                }
                                else {
                                    if(_if_conditional165=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_62->mClass->mName,"__builtin_va_list"),                                    _if_conditional165) {
                                    }
                                    else {
                                        if(_if_conditional166=left_type->mPointerNum>0&&right_type2_62->mPointerNum==0&&!(string_operator_equals(right_type2_62->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")),                                        _if_conditional166) {
                                            err_msg(info,"type error10");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional167=!(string_operator_equals(right_type2_62->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_62->mPointerNum==0,                                            _if_conditional167) {
                                                err_msg(info,"type error6");
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                                exit(2);
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
    come_call_finalizer2(sType_finalize,right_type2_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
            __result48__ = self->len;
            return __result48__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional132;
struct list_item$1sTypeph* it_66;
int i_67;
_Bool _while_condtional22;
_Bool _if_conditional133;
struct sType* __result49__;
struct sType* default_value_68;
struct sType* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_66, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_67, 0, sizeof(int));
memset(&default_value_68, 0, sizeof(struct sType*));
                    if(_if_conditional132=position<0,                    _if_conditional132) {
                        position+=self->len;
                    }
                    it_66=self->head;
                    i_67=0;
                    while(_while_condtional22=it_66!=((void*)0),                    _while_condtional22) {
                        if(_if_conditional133=position==i_67,                        _if_conditional133) {
                            __result49__ = __result_obj__ = it_66->item;
                            return __result49__;
                        }
                        it_66=it_66->next;
                        i_67++;
                    }
                    memset(&default_value_68,0,sizeof(struct sType*));
                    __result50__ = __result_obj__ = default_value_68;
                    come_call_finalizer2(sType_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result50__;
                    come_call_finalizer2(sType_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result51__;
memset(&__result_obj__, 0, sizeof(void*));
                                                __result51__ = self->len;
                                                return __result51__;
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
void* right_value88;
struct sType* result_type_70;
_Bool _if_conditional168;
char* var_name_71;
char* p_72;
int sline_73;
_Bool _if_conditional169;
void* right_value89;
char* word_74;
_Bool _if_conditional170;
_Bool between_brace_75;
char* p_76;
int sline_77;
_Bool _if_conditional171;
_Bool _if_conditional172;
void* right_value90;
char* word_78;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _while_condtional23;
char* p_79;
int sline_80;
_Bool _if_conditional176;
void* right_value91;
char* word_81;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value92;
char* __dec_obj41;
static int num_anonymous_var_name_82=0;
void* right_value93;
char* __dec_obj42;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool no_comma_83;
void* right_value94;
struct sNode* node_84;
struct sNode* __dec_obj43;
_Bool _while_condtional24;
char* p_85;
int sline_86;
_Bool _if_conditional182;
void* right_value95;
char* word_87;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value96;
struct sNode* node_88;
void* right_value100;
void* right_value101;
struct tuple2$2sTypephcharph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_type_70, 0, sizeof(struct sType*));
memset(&var_name_71, 0, sizeof(char*));
memset(&p_72, 0, sizeof(char*));
memset(&sline_73, 0, sizeof(int));
right_value89 = (void*)0;
memset(&word_74, 0, sizeof(char*));
memset(&between_brace_75, 0, sizeof(_Bool));
memset(&p_76, 0, sizeof(char*));
memset(&sline_77, 0, sizeof(int));
right_value90 = (void*)0;
memset(&word_78, 0, sizeof(char*));
memset(&p_79, 0, sizeof(char*));
memset(&sline_80, 0, sizeof(int));
right_value91 = (void*)0;
memset(&word_81, 0, sizeof(char*));
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&no_comma_83, 0, sizeof(_Bool));
right_value94 = (void*)0;
memset(&node_84, 0, sizeof(struct sNode*));
memset(&p_85, 0, sizeof(char*));
memset(&sline_86, 0, sizeof(int));
right_value95 = (void*)0;
memset(&word_87, 0, sizeof(char*));
right_value96 = (void*)0;
memset(&node_88, 0, sizeof(struct sNode*));
right_value100 = (void*)0;
right_value101 = (void*)0;
    result_type_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(base_type_name))));
    come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional168=!first,    _if_conditional168) {
        result_type_70->mPointerNum=0;
    }
    var_name_71=((void*)0);
    {
        p_72=info->p;
        sline_73=info->sline;
        if(_if_conditional169=xisalpha(*info->p)||*info->p==95,        _if_conditional169) {
            word_74=(char*)come_increment_ref_count(((char*)(right_value89=parse_word(info))));
            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional170=string_operator_equals(word_74,"const")||string_operator_equals(word_74,"__restrict")||string_operator_equals(word_74,"restrict")||string_operator_equals(word_74,"__user")||string_operator_equals(word_74,"volatile")||string_operator_equals(word_74,"_Nonnull")||string_operator_equals(word_74,"_Nullable")||string_operator_equals(word_74,"_Null_unspecified")||string_operator_equals(word_74,"__user"),            _if_conditional170) {
            }
            else {
                info->p=p_72;
                info->sline=sline_73;
            }
            word_74 = come_decrement_ref_count2(word_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_72;
            info->sline=sline_73;
        }
    }
    between_brace_75=(_Bool)0;
    {
        p_76=info->p;
        sline_77=info->sline;
        if(_if_conditional171=*info->p==40,        _if_conditional171) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional172=xisalpha(*info->p)||*info->p==95,            _if_conditional172) {
                word_78=(char*)come_increment_ref_count(((char*)(right_value90=parse_word(info))));
                right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional173=is_type_name(word_78,info),                _if_conditional173) {
                }
                else {
                    if(_if_conditional174=*info->p==41,                    _if_conditional174) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional175=*info->p!=40,                        _if_conditional175) {
                            between_brace_75=(_Bool)1;
                        }
                    }
                }
                word_78 = come_decrement_ref_count2(word_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_76;
        info->sline=sline_77;
    }
    parse_sharp_v5(info);
    while(_while_condtional23=*info->p==42,    _while_condtional23) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_79=info->p;
            sline_80=info->sline;
            if(_if_conditional176=xisalpha(*info->p)||*info->p==95,            _if_conditional176) {
                word_81=(char*)come_increment_ref_count(((char*)(right_value91=parse_word(info))));
                right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional177=string_operator_equals(word_81,"const")||string_operator_equals(word_81,"__restrict")||string_operator_equals(word_81,"restrict")||string_operator_equals(word_81,"__user")||string_operator_equals(word_81,"volatile")||string_operator_equals(word_81,"_Nonnull")||string_operator_equals(word_81,"_Nullable")||string_operator_equals(word_81,"_Null_unspecified")||string_operator_equals(word_81,"__user"),                _if_conditional177) {
                }
                else {
                    info->p=p_79;
                    info->sline=sline_80;
                }
                word_81 = come_decrement_ref_count2(word_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_79;
                info->sline=sline_80;
            }
        }
        result_type_70->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(_if_conditional178=between_brace_75&&*info->p==40,    _if_conditional178) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional179=xisalnum(*info->p)||*info->p==95,    _if_conditional179) {
        __dec_obj41=var_name_71;
        var_name_71=(char*)come_increment_ref_count(((char*)(right_value92=parse_word(info))));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        num_anonymous_var_name_82++;
        __dec_obj42=var_name_71;
        var_name_71=(char*)come_increment_ref_count(((char*)(right_value93=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_82))));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional180=between_brace_75&&*info->p==41,    _if_conditional180) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional181=*info->p==58,    _if_conditional181) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_83=info->no_comma;
        info->no_comma=(_Bool)1;
        node_84=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=expression_v13(info))));
        if(right_value94) { right_value94 = come_decrement_ref_count2(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_83;
        __dec_obj43=result_type_70->mSizeNum;
        result_type_70->mSizeNum=(struct sNode*)come_increment_ref_count(node_84);
        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_84) { node_84 = come_decrement_ref_count2(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(_while_condtional24=*info->p==91,    _while_condtional24) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_85=info->p;
            sline_86=info->sline;
            if(_if_conditional182=xisalpha(*info->p)||*info->p==95,            _if_conditional182) {
                word_87=(char*)come_increment_ref_count(((char*)(right_value95=parse_word(info))));
                right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional183=string_operator_equals(word_87,"const")||string_operator_equals(word_87,"__restrict")||string_operator_equals(word_87,"restrict")||string_operator_equals(word_87,"__user")||string_operator_equals(word_87,"volatile")||string_operator_equals(word_87,"_Nonnull")||string_operator_equals(word_87,"_Nullable")||string_operator_equals(word_87,"_Null_unspecified")||string_operator_equals(word_87,"__user"),                _if_conditional183) {
                }
                else {
                    info->p=p_85;
                    info->sline=sline_86;
                }
                word_87 = come_decrement_ref_count2(word_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_85;
                info->sline=sline_86;
            }
        }
        if(_if_conditional184=*info->p==93,        _if_conditional184) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_70->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_88=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=expression_v13(info))));
        if(right_value96) { right_value96 = come_decrement_ref_count2(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1sNodeph_push_back(result_type_70->mArrayNum,(struct sNode*)come_increment_ref_count(node_88));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_88) { node_88 = come_decrement_ref_count2(node_88, ((struct sNode*)node_88)->finalize, ((struct sNode*)node_88)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result54__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value101=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value100=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 676, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_70),(char*)come_increment_ref_count(var_name_71))));
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_71 = come_decrement_ref_count2(var_name_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result54__;
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_71 = come_decrement_ref_count2(var_name_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional185;
void* right_value97;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj44;
_Bool _if_conditional186;
void* right_value98;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj45;
void* right_value99;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj46;
struct list$1sNodeph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1sNodeph*));
            if(_if_conditional185=self->len==0,            _if_conditional185) {
                litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226, "struct list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_89->prev=((void*)0);
                litem_89->next=((void*)0);
                __dec_obj44=litem_89->item;
                litem_89->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail=litem_89;
                self->head=litem_89;
            }
            else {
                if(_if_conditional186=self->len==1,                _if_conditional186) {
                    litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 236, "struct list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_90->prev=self->head;
                    litem_90->next=((void*)0);
                    __dec_obj45=litem_90->item;
                    litem_90->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_90;
                    self->head->next=litem_90;
                }
                else {
                    litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 246, "struct list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_91->prev=self->tail;
                    litem_91->next=((void*)0);
                    __dec_obj46=litem_91->item;
                    litem_91->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail->next=litem_91;
                    self->tail=litem_91;
                }
            }
            self->len++;
            __result52__ = __result_obj__ = self;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result52__;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj47;
char* __dec_obj48;
struct tuple2$2sTypephcharph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj47=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj48=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result53__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result53__;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional187;
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional187=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional187) {
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional188=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional188) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
char* p_92;
int sline_93;
_Bool _if_conditional189;
void* right_value102;
char* word_94;
_Bool _if_conditional190;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_92, 0, sizeof(char*));
memset(&sline_93, 0, sizeof(int));
right_value102 = (void*)0;
memset(&word_94, 0, sizeof(char*));
    p_92=info->p;
    sline_93=info->sline;
    if(_if_conditional189=xisalpha(*info->p)||*info->p==95,    _if_conditional189) {
        word_94=(char*)come_increment_ref_count(((char*)(right_value102=parse_word(info))));
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional190=string_operator_equals(word_94,"const")||string_operator_equals(word_94,"__restrict")||string_operator_equals(word_94,"restrict")||string_operator_equals(word_94,"__user")||string_operator_equals(word_94,"volatile")||string_operator_equals(word_94,"_Nonnull")||string_operator_equals(word_94,"_Nullable")||string_operator_equals(word_94,"_Null_unspecified")||string_operator_equals(word_94,"__user"),        _if_conditional190) {
        }
        else {
            info->p=p_92;
            info->sline=sline_93;
        }
        word_94 = come_decrement_ref_count2(word_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_92;
        info->sline=sline_93;
    }
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
void* __result_obj__;
char* head_95;
int head_sline_96;
void* right_value103;
char* type_name_97;
_Bool _while_condtional25;
void* right_value104;
char* __dec_obj49;
_Bool constant_98;
_Bool static__99;
_Bool volatile__100;
_Bool register__101;
_Bool unsigned__102;
_Bool long__103;
_Bool long_long_104;
_Bool short__105;
_Bool restrict__106;
_Bool struct__107;
_Bool union__108;
_Bool enum__109;
_Bool no_heap_110;
_Bool extern__111;
_Bool inline__112;
_Bool come_mem_core__113;
struct sNode* alignas__114;
_Bool anonymous_type_115;
_Bool anonymous_name_116;
_Bool _while_condtional26;
_Bool _if_conditional191;
_Bool _if_conditional192;
char* p_117;
int sline_118;
void* right_value105;
_Bool _if_conditional193;
void* right_value106;
char* __dec_obj50;
void* right_value107;
char* __dec_obj51;
void* right_value108;
char* __dec_obj52;
_Bool _if_conditional194;
char* p_119;
int sline_120;
_Bool _while_condtional27;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value109;
void* right_value110;
struct tuple3$3sTypephcharphbool* __result56__;
_Bool _if_conditional198;
char* p_121;
int sline_122;
void* right_value111;
_Bool _if_conditional199;
void* right_value112;
void* right_value113;
struct tuple3$3sTypephcharphbool* __result57__;
_Bool _if_conditional200;
_Bool _if_conditional201;
char* p_123;
int sline_124;
void* right_value114;
_Bool _if_conditional202;
void* right_value115;
char* __dec_obj55;
void* right_value116;
char* __dec_obj56;
void* right_value117;
char* __dec_obj57;
_Bool _if_conditional203;
char* p_125;
int sline_126;
void* right_value118;
_Bool _if_conditional204;
void* right_value119;
void* right_value120;
struct tuple3$3sTypephcharphbool* __result58__;
_Bool _if_conditional205;
_Bool _if_conditional206;
char* p_127;
int sline_128;
void* right_value121;
_Bool _if_conditional207;
void* right_value122;
void* right_value123;
struct tuple3$3sTypephcharphbool* __result59__;
void* right_value124;
char* __dec_obj58;
void* right_value125;
char* __dec_obj59;
_Bool _if_conditional208;
char* p_129;
int sline_130;
void* right_value126;
_Bool _if_conditional209;
void* right_value127;
void* right_value128;
struct tuple3$3sTypephcharphbool* __result60__;
_Bool _if_conditional210;
void* right_value129;
struct sNode* exp_131;
struct sNode* __dec_obj60;
void* right_value130;
char* __dec_obj61;
_Bool _if_conditional211;
void* right_value131;
char* __dec_obj62;
_Bool _if_conditional212;
void* right_value132;
char* __dec_obj63;
_Bool _if_conditional213;
void* right_value133;
char* __dec_obj64;
_Bool _if_conditional214;
void* right_value134;
char* __dec_obj65;
_Bool _if_conditional215;
void* right_value135;
char* __dec_obj66;
_Bool _if_conditional216;
void* right_value136;
char* __dec_obj67;
_Bool _if_conditional217;
void* right_value137;
char* __dec_obj68;
_Bool _if_conditional218;
char* p_132;
int sline_133;
_Bool _if_conditional219;
void* right_value138;
char* __dec_obj69;
void* right_value139;
char* __dec_obj70;
_Bool _if_conditional220;
void* right_value140;
char* __dec_obj71;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value141;
char* __dec_obj72;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value142;
char* __dec_obj73;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value143;
char* __dec_obj74;
_Bool _if_conditional228;
_Bool _if_conditional229;
char* p_134;
int sline_135;
void* right_value144;
char* __dec_obj75;
_Bool _if_conditional230;
_Bool _if_conditional231;
char* p_136;
int sline_137;
void* right_value145;
char* __dec_obj76;
_Bool _if_conditional232;
void* right_value146;
char* __dec_obj77;
void* right_value147;
char* __dec_obj78;
_Bool _if_conditional233;
_Bool _if_conditional234;
char* p_138;
int sline_139;
void* right_value148;
char* __dec_obj79;
_Bool _if_conditional235;
void* right_value149;
char* __dec_obj80;
void* right_value150;
char* __dec_obj81;
_Bool _if_conditional236;
void* right_value151;
char* __dec_obj82;
void* right_value152;
char* __dec_obj83;
_Bool _if_conditional237;
void* right_value153;
char* __dec_obj84;
_Bool _if_conditional238;
void* right_value154;
char* __dec_obj85;
_Bool _if_conditional239;
void* right_value155;
char* __dec_obj86;
_Bool _if_conditional240;
void* right_value156;
char* __dec_obj87;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
char* p_140;
int sline_141;
void* right_value157;
char* __dec_obj88;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value158;
char* __dec_obj89;
int pointer_num_142;
_Bool _while_condtional28;
_Bool heap_143;
_Bool _if_conditional247;
_Bool lambda_flag_144;
char* pX_145;
int slineX_146;
_Bool _if_conditional248;
void* right_value159;
_Bool _if_conditional249;
struct sType* type_147;
char* var_name_148;
_Bool function_pointer_flag_149;
char* p_150;
int sline_151;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value160;
char* word_152;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool var_name_between_brace_153;
char* p_154;
int sline_155;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value161;
char* word_156;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
static int anonymous_num_157=0;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value162;
char* __dec_obj90;
void* right_value163;
struct sNode* node_158;
_Bool _if_conditional263;
void* right_value164;
void* right_value165;
struct tuple3$3sTypephcharphbool* __result61__;
int pointer_num_159;
_Bool _while_condtional29;
void* right_value166;
void* right_value167;
struct sType* __dec_obj91;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value168;
char* __dec_obj92;
void* right_value169;
struct sNode* node_160;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value170;
void* right_value171;
struct tuple3$3sTypephcharphbool* __result62__;
void* right_value172;
void* right_value173;
struct sType* __dec_obj93;
_Bool _if_conditional268;
_Bool _if_conditional269;
void* right_value174;
char* __dec_obj94;
void* right_value175;
struct sNode* node_161;
_Bool _if_conditional270;
void* right_value176;
void* right_value177;
struct tuple3$3sTypephcharphbool* __result63__;
int pointer_num_162;
_Bool _while_condtional30;
void* right_value178;
void* right_value179;
struct sType* __dec_obj95;
void* right_value180;
void* right_value181;
struct tuple3$3sTypephcharphbool* __result64__;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
void* right_value182;
char* __dec_obj96;
_Bool _if_conditional274;
static int num_anonymous_var_name_163=0;
void* right_value183;
char* __dec_obj97;
_Bool _if_conditional275;
void* right_value184;
char* __dec_obj98;
static int num_anonymous_var_name_164=0;
void* right_value185;
char* __dec_obj99;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool no_comma_165;
void* right_value186;
struct sNode* node_166;
struct sNode* __dec_obj100;
_Bool _if_conditional278;
struct sType* result_type_167;
_Bool _if_conditional283;
void* right_value187;
struct sType* __dec_obj101;
_Bool _if_conditional289;
int i_176;
_Bool _if_conditional292;
void* right_value188;
void* right_value189;
void* right_value190;
struct sType* __dec_obj102;
_Bool _if_conditional293;
int i_180;
_Bool _if_conditional294;
void* right_value191;
void* right_value192;
void* right_value193;
struct sType* __dec_obj103;
void* right_value194;
void* right_value195;
struct sType* __dec_obj104;
struct sNode* __dec_obj105;
void* right_value196;
char* __dec_obj106;
void* right_value197;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var2;
struct list$1sTypeph* param_types_181;
struct list$1charph* param_names_182;
struct list$1charph* param_default_parametors_183;
_Bool var_args_184;
void* right_value198;
void* right_value199;
struct sType* __dec_obj107;
void* right_value200;
void* right_value201;
struct tuple1$1sTypeph* __dec_obj109;
struct list$1sTypeph* __dec_obj110;
struct list$1charph* __dec_obj111;
_Bool _if_conditional295;
_Bool _if_conditional296;
struct sType* result_type_185;
_Bool _if_conditional297;
void* right_value202;
struct sType* __dec_obj112;
_Bool _if_conditional298;
int i_186;
_Bool _if_conditional299;
void* right_value203;
void* right_value204;
void* right_value205;
struct sType* __dec_obj113;
_Bool _if_conditional300;
int i_187;
_Bool _if_conditional301;
void* right_value206;
void* right_value207;
void* right_value208;
struct sType* __dec_obj114;
void* right_value209;
void* right_value210;
struct sType* __dec_obj115;
struct sNode* __dec_obj116;
_Bool _if_conditional302;
void* right_value211;
char* __dec_obj117;
_Bool _if_conditional303;
void* right_value212;
void* right_value213;
struct tuple3$3sTypephcharphbool* __result82__;
static int num_anonymous_var_name_188=0;
void* right_value214;
char* __dec_obj118;
void* right_value215;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_189;
struct list$1charph* param_names_190;
struct list$1charph* param_default_parametors_191;
_Bool var_args_192;
void* right_value216;
void* right_value217;
struct sType* __dec_obj119;
void* right_value218;
void* right_value219;
struct tuple1$1sTypeph* __dec_obj120;
struct list$1sTypeph* __dec_obj121;
struct list$1charph* __dec_obj122;
_Bool _if_conditional304;
void* right_value220;
struct sNode* exp_193;
_Bool _if_conditional305;
void* right_value221;
void* right_value222;
struct tuple3$3sTypephcharphbool* __result84__;
void* right_value223;
struct CVALUE* come_value_194;
void* right_value224;
struct sType* __dec_obj123;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value225;
char* __dec_obj124;
_Bool _if_conditional311;
static int num_anonymous_var_name_195=0;
void* right_value226;
char* __dec_obj125;
_Bool _if_conditional312;
void* right_value227;
char* __dec_obj126;
static int num_anonymous_var_name_196=0;
void* right_value228;
char* __dec_obj127;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool no_comma_197;
void* right_value229;
struct sNode* node_198;
struct sNode* __dec_obj128;
_Bool _if_conditional315;
void* right_value230;
struct sType* __dec_obj129;
void* right_value231;
char* __dec_obj130;
struct sNode* __dec_obj131;
_Bool _if_conditional316;
int i_199;
_Bool _if_conditional317;
void* right_value232;
void* right_value233;
void* right_value234;
struct sType* __dec_obj132;
struct sNode* __dec_obj133;
_Bool _if_conditional318;
int i_200;
_Bool _if_conditional319;
void* right_value235;
void* right_value236;
void* right_value237;
struct sType* __dec_obj134;
struct sNode* __dec_obj135;
_Bool _if_conditional320;
_Bool _if_conditional331;
void* right_value238;
void* right_value239;
struct tuple3$3sTypephcharphbool* __result89__;
void* right_value240;
void* right_value241;
struct sType* __dec_obj136;
_Bool _while_condtional35;
void* right_value242;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* generics_type_206;
char* var_name_207;
_Bool err_208;
_Bool _if_conditional332;
void* right_value243;
void* right_value244;
struct tuple3$3sTypephcharphbool* __result90__;
_Bool _if_conditional333;
_Bool _if_conditional334;
void* right_value245;
void* right_value246;
struct tuple3$3sTypephcharphbool* __result91__;
_Bool _if_conditional335;
void* right_value247;
struct sType* __dec_obj137;
_Bool _if_conditional336;
void* right_value248;
char* new_name_209;
struct sNode* __dec_obj138;
_Bool _if_conditional337;
struct sClass* klass_210;
_Bool _if_conditional338;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
struct sType* __dec_obj139;
struct sNode* __dec_obj140;
_Bool _while_condtional44;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _while_condtional45;
_Bool _if_conditional393;
_Bool _if_conditional394;
void* right_value259;
void* right_value260;
struct list$1sTypeph* types_255;
void* right_value261;
_Bool _while_condtional46;
void* right_value262;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type2_256;
char* name_257;
_Bool err_258;
_Bool _if_conditional395;
void* right_value263;
void* right_value264;
struct tuple3$3sTypephcharphbool* __result116__;
void* right_value265;
int num_tuples_259;
void* right_value266;
void* right_value267;
void* right_value268;
struct sType* __dec_obj141;
struct list$1sTypeph* o2_saved_260;
struct sType* it_261;
void* right_value269;
_Bool _if_conditional396;
void* right_value270;
struct sType* __dec_obj142;
_Bool _if_conditional397;
void* right_value271;
char* new_name_262;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
void* right_value272;
char* __dec_obj143;
_Bool _if_conditional401;
static int num_anonymous_var_name_263=0;
void* right_value273;
char* __dec_obj144;
_Bool _if_conditional402;
void* right_value274;
char* __dec_obj145;
static int num_anonymous_var_name_264=0;
void* right_value275;
char* __dec_obj146;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool no_comma_265;
void* right_value276;
struct sNode* node_266;
struct sNode* __dec_obj147;
_Bool _while_condtional47;
_Bool _if_conditional405;
void* right_value277;
struct sNode* node_267;
void* right_value278;
char* asm_name_268;
char* __dec_obj148;
void* right_value279;
void* right_value280;
struct tuple3$3sTypephcharphbool* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_95, 0, sizeof(char*));
memset(&head_sline_96, 0, sizeof(int));
right_value103 = (void*)0;
memset(&type_name_97, 0, sizeof(char*));
right_value104 = (void*)0;
memset(&constant_98, 0, sizeof(_Bool));
memset(&static__99, 0, sizeof(_Bool));
memset(&volatile__100, 0, sizeof(_Bool));
memset(&register__101, 0, sizeof(_Bool));
memset(&unsigned__102, 0, sizeof(_Bool));
memset(&long__103, 0, sizeof(_Bool));
memset(&long_long_104, 0, sizeof(_Bool));
memset(&short__105, 0, sizeof(_Bool));
memset(&restrict__106, 0, sizeof(_Bool));
memset(&struct__107, 0, sizeof(_Bool));
memset(&union__108, 0, sizeof(_Bool));
memset(&enum__109, 0, sizeof(_Bool));
memset(&no_heap_110, 0, sizeof(_Bool));
memset(&extern__111, 0, sizeof(_Bool));
memset(&inline__112, 0, sizeof(_Bool));
memset(&come_mem_core__113, 0, sizeof(_Bool));
memset(&alignas__114, 0, sizeof(struct sNode*));
memset(&anonymous_type_115, 0, sizeof(_Bool));
memset(&anonymous_name_116, 0, sizeof(_Bool));
memset(&p_117, 0, sizeof(char*));
memset(&sline_118, 0, sizeof(int));
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
memset(&p_119, 0, sizeof(char*));
memset(&sline_120, 0, sizeof(int));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&p_121, 0, sizeof(char*));
memset(&sline_122, 0, sizeof(int));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&p_123, 0, sizeof(char*));
memset(&sline_124, 0, sizeof(int));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
memset(&p_125, 0, sizeof(char*));
memset(&sline_126, 0, sizeof(int));
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&p_127, 0, sizeof(char*));
memset(&sline_128, 0, sizeof(int));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
memset(&p_129, 0, sizeof(char*));
memset(&sline_130, 0, sizeof(int));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&exp_131, 0, sizeof(struct sNode*));
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&p_132, 0, sizeof(char*));
memset(&sline_133, 0, sizeof(int));
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&p_134, 0, sizeof(char*));
memset(&sline_135, 0, sizeof(int));
right_value144 = (void*)0;
memset(&p_136, 0, sizeof(char*));
memset(&sline_137, 0, sizeof(int));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&p_138, 0, sizeof(char*));
memset(&sline_139, 0, sizeof(int));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&p_140, 0, sizeof(char*));
memset(&sline_141, 0, sizeof(int));
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&pointer_num_142, 0, sizeof(int));
memset(&heap_143, 0, sizeof(_Bool));
memset(&lambda_flag_144, 0, sizeof(_Bool));
memset(&pX_145, 0, sizeof(char*));
memset(&slineX_146, 0, sizeof(int));
right_value159 = (void*)0;
memset(&type_147, 0, sizeof(struct sType*));
memset(&var_name_148, 0, sizeof(char*));
memset(&function_pointer_flag_149, 0, sizeof(_Bool));
memset(&p_150, 0, sizeof(char*));
memset(&sline_151, 0, sizeof(int));
right_value160 = (void*)0;
memset(&word_152, 0, sizeof(char*));
memset(&var_name_between_brace_153, 0, sizeof(_Bool));
memset(&p_154, 0, sizeof(char*));
memset(&sline_155, 0, sizeof(int));
right_value161 = (void*)0;
memset(&word_156, 0, sizeof(char*));
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&node_158, 0, sizeof(struct sNode*));
right_value164 = (void*)0;
right_value165 = (void*)0;
memset(&pointer_num_159, 0, sizeof(int));
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&node_160, 0, sizeof(struct sNode*));
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&node_161, 0, sizeof(struct sNode*));
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&pointer_num_162, 0, sizeof(int));
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&no_comma_165, 0, sizeof(_Bool));
right_value186 = (void*)0;
memset(&node_166, 0, sizeof(struct sNode*));
memset(&result_type_167, 0, sizeof(struct sType*));
right_value187 = (void*)0;
memset(&i_176, 0, sizeof(int));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&i_180, 0, sizeof(int));
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&param_types_181, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_182, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_183, 0, sizeof(struct list$1charph*));
memset(&var_args_184, 0, sizeof(_Bool));
memset(&param_types_181, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_182, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_183, 0, sizeof(struct list$1charph*));
memset(&var_args_184, 0, sizeof(_Bool));
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&result_type_185, 0, sizeof(struct sType*));
right_value202 = (void*)0;
memset(&i_186, 0, sizeof(int));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&i_187, 0, sizeof(int));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&param_types_189, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_190, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_191, 0, sizeof(struct list$1charph*));
memset(&var_args_192, 0, sizeof(_Bool));
memset(&param_types_189, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_190, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_191, 0, sizeof(struct list$1charph*));
memset(&var_args_192, 0, sizeof(_Bool));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&exp_193, 0, sizeof(struct sNode*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&come_value_194, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&no_comma_197, 0, sizeof(_Bool));
right_value229 = (void*)0;
memset(&node_198, 0, sizeof(struct sNode*));
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&i_199, 0, sizeof(int));
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&i_200, 0, sizeof(int));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&generics_type_206, 0, sizeof(struct sType*));
memset(&var_name_207, 0, sizeof(char*));
memset(&err_208, 0, sizeof(_Bool));
memset(&generics_type_206, 0, sizeof(struct sType*));
memset(&var_name_207, 0, sizeof(char*));
memset(&err_208, 0, sizeof(_Bool));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&new_name_209, 0, sizeof(char*));
memset(&klass_210, 0, sizeof(struct sClass*));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&types_255, 0, sizeof(struct list$1sTypeph*));
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&type2_256, 0, sizeof(struct sType*));
memset(&name_257, 0, sizeof(char*));
memset(&err_258, 0, sizeof(_Bool));
memset(&type2_256, 0, sizeof(struct sType*));
memset(&name_257, 0, sizeof(char*));
memset(&err_258, 0, sizeof(_Bool));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&num_tuples_259, 0, sizeof(int));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&o2_saved_260, 0, sizeof(struct list$1sTypeph*));
memset(&it_261, 0, sizeof(struct sType*));
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&new_name_262, 0, sizeof(char*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
memset(&no_comma_265, 0, sizeof(_Bool));
right_value276 = (void*)0;
memset(&node_266, 0, sizeof(struct sNode*));
right_value277 = (void*)0;
memset(&node_267, 0, sizeof(struct sNode*));
right_value278 = (void*)0;
memset(&asm_name_268, 0, sizeof(char*));
right_value279 = (void*)0;
right_value280 = (void*)0;
    head_95=info->p;
    head_sline_96=info->sline;
    info->define_struct=(_Bool)0;
    type_name_97=(char*)come_increment_ref_count(((char*)(right_value103=parse_word(info))));
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    while(_while_condtional25=string_operator_equals(type_name_97,"__extension__"),    _while_condtional25) {
        __dec_obj49=type_name_97;
        type_name_97=(char*)come_increment_ref_count(((char*)(right_value104=parse_word(info))));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    constant_98=(_Bool)0;
    static__99=(_Bool)0;
    volatile__100=(_Bool)0;
    register__101=(_Bool)0;
    unsigned__102=(_Bool)0;
    long__103=(_Bool)0;
    long_long_104=(_Bool)0;
    short__105=(_Bool)0;
    restrict__106=(_Bool)0;
    struct__107=(_Bool)0;
    union__108=(_Bool)0;
    enum__109=(_Bool)0;
    no_heap_110=(_Bool)0;
    extern__111=(_Bool)0;
    inline__112=(_Bool)0;
    come_mem_core__113=(_Bool)0;
    alignas__114=((void*)0);
    anonymous_type_115=(_Bool)0;
    anonymous_name_116=(_Bool)0;
    while(_while_condtional26=(_Bool)1,    _while_condtional26) {
        if(_if_conditional191=string_operator_equals(type_name_97,"struct"),        _if_conditional191) {
            struct__107=(_Bool)1;
            if(_if_conditional192=*info->p==123,            _if_conditional192) {
                p_117=info->p;
                sline_118=info->sline;
                ((char*)(right_value105=skip_block(info)));
                right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional193=*info->p==59,                _if_conditional193) {
                    anonymous_name_116=(_Bool)1;
                    anonymous_type_115=(_Bool)1;
                    __dec_obj50=type_name_97;
                    type_name_97=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(""))));
                    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    info->p=p_117;
                    info->sline=sline_118;
                    break;
                }
                else {
                    anonymous_type_115=(_Bool)1;
                    __dec_obj51=type_name_97;
                    type_name_97=(char*)come_increment_ref_count(((char*)(right_value107=__builtin_string(""))));
                    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    info->p=p_117;
                    info->sline=sline_118;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj52=type_name_97;
            type_name_97=(char*)come_increment_ref_count(((char*)(right_value108=parse_word(info))));
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(_if_conditional194=*info->p==60,            _if_conditional194) {
                p_119=info->p;
                sline_120=info->sline;
                info->p++;
                skip_spaces_and_lf(info);
                while(_while_condtional27=(_Bool)1,                _while_condtional27) {
                    if(_if_conditional195=*info->p==62,                    _if_conditional195) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional196=*info->p==123,                        _if_conditional196) {
                        }
                        else {
                            info->p=p_119;
                            info->sline=sline_120;
                        }
                        break;
                    }
                    else {
                        if(_if_conditional197=*info->p==0,                        _if_conditional197) {
                            err_msg(info,"invalid struct definition");
                            __result56__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value110=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value109=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 788, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result56__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
            }
            if(_if_conditional198=*info->p==123,            _if_conditional198) {
                p_121=info->p;
                sline_122=info->sline;
                ((char*)(right_value111=skip_block(info)));
                right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional199=*info->p==59,                _if_conditional199) {
                    info->p=head_95;
                    info->sline=head_sline_96;
                    info->define_struct=(_Bool)1;
                    __result57__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value113=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value112=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 806, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result57__;
                }
                else {
                    anonymous_type_115=(_Bool)1;
                    info->p=p_121;
                    info->sline=sline_122;
                    break;
                }
            }
        }
        else {
            if(_if_conditional200=string_operator_equals(type_name_97,"union"),            _if_conditional200) {
                union__108=(_Bool)1;
                if(_if_conditional201=*info->p==123,                _if_conditional201) {
                    p_123=info->p;
                    sline_124=info->sline;
                    ((char*)(right_value114=skip_block(info)));
                    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional202=*info->p==59,                    _if_conditional202) {
                        info->p=head_95;
                        info->sline=head_sline_96;
                        info->define_struct=(_Bool)0;
                        anonymous_type_115=(_Bool)1;
                        __dec_obj55=type_name_97;
                        type_name_97=(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string(""))));
                        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        info->p=p_123;
                        info->sline=sline_124;
                        break;
                    }
                    else {
                        anonymous_type_115=(_Bool)1;
                        __dec_obj56=type_name_97;
                        type_name_97=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(""))));
                        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        info->p=p_123;
                        info->sline=sline_124;
                        break;
                    }
                }
                parse_sharp_v5(info);
                __dec_obj57=type_name_97;
                type_name_97=(char*)come_increment_ref_count(((char*)(right_value117=parse_word(info))));
                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(_if_conditional203=*info->p==123,                _if_conditional203) {
                    p_125=info->p;
                    sline_126=info->sline;
                    ((char*)(right_value118=skip_block(info)));
                    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional204=*info->p==59,                    _if_conditional204) {
                        info->p=head_95;
                        info->sline=head_sline_96;
                        info->define_struct=(_Bool)1;
                        __result58__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value120=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value119=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 861, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result58__;
                    }
                    else {
                        anonymous_type_115=(_Bool)1;
                        info->p=p_125;
                        info->sline=sline_126;
                        break;
                    }
                }
            }
            else {
                if(_if_conditional205=string_operator_equals(type_name_97,"enum"),                _if_conditional205) {
                    enum__109=(_Bool)1;
                    parse_sharp_v5(info);
                    if(_if_conditional206=*info->p==123,                    _if_conditional206) {
                        p_127=info->p;
                        sline_128=info->sline;
                        ((char*)(right_value121=skip_block(info)));
                        right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional207=*info->p==59,                        _if_conditional207) {
                            info->p=head_95;
                            info->sline=head_sline_96;
                            info->define_struct=(_Bool)1;
                            __result59__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value123=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value122=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 886, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result59__;
                        }
                        else {
                            anonymous_type_115=(_Bool)1;
                            __dec_obj58=type_name_97;
                            type_name_97=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(""))));
                            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            info->p=p_127;
                            info->sline=sline_128;
                            break;
                        }
                    }
                    parse_sharp_v5(info);
                    __dec_obj59=type_name_97;
                    type_name_97=(char*)come_increment_ref_count(((char*)(right_value125=parse_word(info))));
                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parse_sharp_v5(info);
                    if(_if_conditional208=*info->p==123,                    _if_conditional208) {
                        p_129=info->p;
                        sline_130=info->sline;
                        ((char*)(right_value126=skip_block(info)));
                        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional209=*info->p==59,                        _if_conditional209) {
                            info->p=head_95;
                            info->sline=head_sline_96;
                            info->define_struct=(_Bool)1;
                            __result60__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value128=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value127=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 913, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result60__;
                        }
                        else {
                            anonymous_type_115=(_Bool)1;
                            info->p=p_129;
                            info->sline=sline_130;
                            break;
                        }
                    }
                }
                else {
                    if(_if_conditional210=string_operator_equals(type_name_97,"_Alignas"),                    _if_conditional210) {
                        expected_next_character(40,info);
                        exp_131=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=expression_v13(info))));
                        if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj60=alignas__114;
                        alignas__114=(struct sNode*)come_increment_ref_count(exp_131);
                        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
                        expected_next_character(41,info);
                        __dec_obj61=type_name_97;
                        type_name_97=(char*)come_increment_ref_count(((char*)(right_value130=parse_word(info))));
                        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(exp_131) { exp_131 = come_decrement_ref_count2(exp_131, ((struct sNode*)exp_131)->finalize, ((struct sNode*)exp_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional211=string_operator_equals(type_name_97,"const"),                        _if_conditional211) {
                            constant_98=(_Bool)1;
                            __dec_obj62=type_name_97;
                            type_name_97=(char*)come_increment_ref_count(((char*)(right_value131=parse_word(info))));
                            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(_if_conditional212=string_operator_equals(type_name_97,"static"),                            _if_conditional212) {
                                static__99=(_Bool)1;
                                __dec_obj63=type_name_97;
                                type_name_97=(char*)come_increment_ref_count(((char*)(right_value132=parse_word(info))));
                                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(_if_conditional213=string_operator_equals(type_name_97,"come_mem_core"),                                _if_conditional213) {
                                    come_mem_core__113=(_Bool)1;
                                    __dec_obj64=type_name_97;
                                    type_name_97=(char*)come_increment_ref_count(((char*)(right_value133=parse_word(info))));
                                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    if(_if_conditional214=string_operator_equals(type_name_97,"extern"),                                    _if_conditional214) {
                                        extern__111=(_Bool)1;
                                        __dec_obj65=type_name_97;
                                        type_name_97=(char*)come_increment_ref_count(((char*)(right_value134=parse_word(info))));
                                        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        if(_if_conditional215=string_operator_equals(type_name_97,"_Noreturn"),                                        _if_conditional215) {
                                            __dec_obj66=type_name_97;
                                            type_name_97=(char*)come_increment_ref_count(((char*)(right_value135=parse_word(info))));
                                            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            if(_if_conditional216=string_operator_equals(type_name_97,"inline")||string_operator_equals(type_name_97,"__inline")||string_operator_equals(type_name_97,"__inline__")||string_operator_equals(type_name_97,"__always_inline"),                                            _if_conditional216) {
                                                inline__112=(_Bool)1;
                                                __dec_obj67=type_name_97;
                                                type_name_97=(char*)come_increment_ref_count(((char*)(right_value136=parse_word(info))));
                                                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                if(_if_conditional217=string_operator_equals(type_name_97,"volatile"),                                                _if_conditional217) {
                                                    volatile__100=(_Bool)1;
                                                    __dec_obj68=type_name_97;
                                                    type_name_97=(char*)come_increment_ref_count(((char*)(right_value137=parse_word(info))));
                                                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    if(_if_conditional218=string_operator_equals(type_name_97,"long"),                                                    _if_conditional218) {
                                                        {
                                                            p_132=info->p;
                                                            sline_133=info->sline;
                                                            if(_if_conditional219=!xisalpha(*info->p),                                                            _if_conditional219) {
                                                                info->p=p_132;
                                                                info->sline=sline_133;
                                                                __dec_obj69=type_name_97;
                                                                type_name_97=(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string("long"))));
                                                                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                break;
                                                            }
                                                            else {
                                                                __dec_obj70=type_name_97;
                                                                type_name_97=(char*)come_increment_ref_count(((char*)(right_value139=parse_word(info))));
                                                                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional220=string_operator_equals(type_name_97,"unsigned"),                                                                _if_conditional220) {
                                                                    __dec_obj71=type_name_97;
                                                                    type_name_97=(char*)come_increment_ref_count(((char*)(right_value140=parse_word(info))));
                                                                    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    if(_if_conditional221=string_operator_equals(type_name_97,"int"),                                                                    _if_conditional221) {
                                                                        long__103=(_Bool)1;
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional222=string_operator_equals(type_name_97,"long"),                                                                    _if_conditional222) {
                                                                        p_132=info->p;
                                                                        sline_133=info->sline;
                                                                        if(_if_conditional223=xisalpha(*info->p),                                                                        _if_conditional223) {
                                                                            long_long_104=(_Bool)1;
                                                                            __dec_obj72=type_name_97;
                                                                            type_name_97=(char*)come_increment_ref_count(((char*)(right_value141=parse_word(info))));
                                                                            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            long__103=(_Bool)1;
                                                                            break;
                                                                        }
                                                                        if(_if_conditional224=string_operator_equals(type_name_97,"int"),                                                                        _if_conditional224) {
                                                                            long_long_104=(_Bool)1;
                                                                            break;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional225=!is_type_name(type_name_97,info),                                                                            _if_conditional225) {
                                                                                __dec_obj73=type_name_97;
                                                                                type_name_97=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string("long"))));
                                                                                __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                long_long_104=(_Bool)1;
                                                                                info->p=p_132;
                                                                                info->sline=sline_133;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional226=is_type_name(type_name_97,info),                                                                        _if_conditional226) {
                                                                            if(long__103) {
                                                                                long_long_104=(_Bool)1;
                                                                                long__103=(_Bool)0;
                                                                            }
                                                                            else {
                                                                                long__103=(_Bool)1;
                                                                            }
                                                                            break;
                                                                        }
                                                                        else {
                                                                            info->p=p_132;
                                                                            info->sline=sline_133;
                                                                            __dec_obj74=type_name_97;
                                                                            type_name_97=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string("long"))));
                                                                            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        if(_if_conditional228=string_operator_equals(type_name_97,"unsigned"),                                                        _if_conditional228) {
                                                            unsigned__102=(_Bool)1;
                                                            if(_if_conditional229=xisalpha(*info->p)||*info->p==95,                                                            _if_conditional229) {
                                                                p_134=info->p;
                                                                sline_135=info->sline;
                                                                __dec_obj75=type_name_97;
                                                                type_name_97=(char*)come_increment_ref_count(((char*)(right_value144=parse_word(info))));
                                                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional230=string_operator_equals(type_name_97,"short"),                                                                _if_conditional230) {
                                                                    if(_if_conditional231=xisalpha(*info->p)||*info->p==95,                                                                    _if_conditional231) {
                                                                        p_136=info->p;
                                                                        sline_137=info->sline;
                                                                        __dec_obj76=type_name_97;
                                                                        type_name_97=(char*)come_increment_ref_count(((char*)(right_value145=parse_word(info))));
                                                                        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional232=is_type_name(type_name_97,info),                                                                        _if_conditional232) {
                                                                            short__105=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            short__105=(_Bool)1;
                                                                            __dec_obj77=type_name_97;
                                                                            type_name_97=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string("int"))));
                                                                            __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            info->p=p_136;
                                                                            info->sline=sline_137;
                                                                        }
                                                                    }
                                                                    else {
                                                                        short__105=(_Bool)1;
                                                                        __dec_obj78=type_name_97;
                                                                        type_name_97=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string("int"))));
                                                                        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional233=string_operator_equals(type_name_97,"long"),                                                                    _if_conditional233) {
                                                                        if(_if_conditional234=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional234) {
                                                                            p_138=info->p;
                                                                            sline_139=info->sline;
                                                                            __dec_obj79=type_name_97;
                                                                            type_name_97=(char*)come_increment_ref_count(((char*)(right_value148=parse_word(info))));
                                                                            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional235=is_type_name(type_name_97,info),                                                                            _if_conditional235) {
                                                                                long__103=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                long__103=(_Bool)1;
                                                                                __dec_obj80=type_name_97;
                                                                                type_name_97=(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string("int"))));
                                                                                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                info->p=p_138;
                                                                                info->sline=sline_139;
                                                                            }
                                                                        }
                                                                        else {
                                                                            long__103=(_Bool)1;
                                                                            __dec_obj81=type_name_97;
                                                                            type_name_97=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string("int"))));
                                                                            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional236=!is_type_name(type_name_97,info),                                                                        _if_conditional236) {
                                                                            __dec_obj82=type_name_97;
                                                                            type_name_97=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string("int"))));
                                                                            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            info->p=p_134;
                                                                            info->sline=sline_135;
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                __dec_obj83=type_name_97;
                                                                type_name_97=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("int"))));
                                                                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                break;
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional237=string_operator_equals(type_name_97,"signed")||string_operator_equals(type_name_97,"__signed__"),                                                            _if_conditional237) {
                                                                unsigned__102=(_Bool)0;
                                                                __dec_obj84=type_name_97;
                                                                type_name_97=(char*)come_increment_ref_count(((char*)(right_value153=parse_word(info))));
                                                                __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                if(_if_conditional238=string_operator_equals(type_name_97,"register"),                                                                _if_conditional238) {
                                                                    register__101=(_Bool)1;
                                                                    __dec_obj85=type_name_97;
                                                                    type_name_97=(char*)come_increment_ref_count(((char*)(right_value154=parse_word(info))));
                                                                    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    if(_if_conditional239=string_operator_equals(type_name_97,"restrict"),                                                                    _if_conditional239) {
                                                                        restrict__106=(_Bool)1;
                                                                        __dec_obj86=type_name_97;
                                                                        type_name_97=(char*)come_increment_ref_count(((char*)(right_value155=parse_word(info))));
                                                                        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    else {
                                                                        if(_if_conditional240=string_operator_equals(type_name_97,"__restrict"),                                                                        _if_conditional240) {
                                                                            restrict__106=(_Bool)1;
                                                                            __dec_obj87=type_name_97;
                                                                            type_name_97=(char*)come_increment_ref_count(((char*)(right_value156=parse_word(info))));
                                                                            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            if(_if_conditional241=string_operator_equals(type_name_97,"short"),                                                                            _if_conditional241) {
                                                                                short__105=(_Bool)1;
                                                                                if(_if_conditional242=*info->p==58,                                                                                _if_conditional242) {
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional243=xisalnum(*info->p),                                                                                    _if_conditional243) {
                                                                                        p_140=info->p;
                                                                                        sline_141=info->sline;
                                                                                        __dec_obj88=type_name_97;
                                                                                        type_name_97=(char*)come_increment_ref_count(((char*)(right_value157=parse_word(info))));
                                                                                        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional244=string_operator_equals(type_name_97,"int"),                                                                                        _if_conditional244) {
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional245=string_operator_equals(type_name_97,"short"),                                                                                            _if_conditional245) {
                                                                                                short__105=(_Bool)0;
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional246=is_type_name(type_name_97,info),                                                                                                _if_conditional246) {
                                                                                                    info->p=p_140;
                                                                                                    info->sline=sline_141;
                                                                                                }
                                                                                                else {
                                                                                                    __dec_obj89=type_name_97;
                                                                                                    type_name_97=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string("short"))));
                                                                                                    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    info->p=p_140;
                                                                                                    info->sline=sline_141;
                                                                                                    break;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        break;
                                                                                    }
                                                                                }
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
    skip_pointer_attribute(info);
    pointer_num_142=0;
    while(_while_condtional28=*info->p==42,    _while_condtional28) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        pointer_num_142++;
    }
    heap_143=(_Bool)0;
    if(_if_conditional247=*info->p==37,    _if_conditional247) {
        info->p++;
        skip_spaces_and_lf(info);
        heap_143=(_Bool)1;
    }
    lambda_flag_144=(_Bool)0;
    {
        pX_145=info->p;
        slineX_146=info->sline;
        if(_if_conditional248=xisalpha(*info->p)||*info->p==95,        _if_conditional248) {
            (void)((char*)(right_value159=parse_word(info)));
            right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional249=*info->p==40&&info->in_typedef,            _if_conditional249) {
                lambda_flag_144=(_Bool)1;
            }
        }
        info->p=pX_145;
        info->sline=slineX_146;
    }
    function_pointer_flag_149=(_Bool)0;
    {
        p_150=info->p;
        sline_151=info->sline;
        if(_if_conditional250=*info->p==40,        _if_conditional250) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional251=*info->p==42||*info->p==94,            _if_conditional251) {
                function_pointer_flag_149=(_Bool)1;
            }
            else {
                if(_if_conditional252=xisalpha(*info->p)||*info->p==95,                _if_conditional252) {
                    word_152=(char*)come_increment_ref_count(((char*)(right_value160=parse_word(info))));
                    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional253=*info->p==41,                    _if_conditional253) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional254=*info->p==40,                        _if_conditional254) {
                            function_pointer_flag_149=(_Bool)1;
                        }
                    }
                    word_152 = come_decrement_ref_count2(word_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        info->p=p_150;
        info->sline=sline_151;
    }
    var_name_between_brace_153=(_Bool)0;
    {
        p_154=info->p;
        sline_155=info->sline;
        if(_if_conditional255=*info->p==40,        _if_conditional255) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional256=xisalpha(*info->p)||*info->p==95,            _if_conditional256) {
                word_156=(char*)come_increment_ref_count(((char*)(right_value161=parse_word(info))));
                right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional257=is_type_name(word_156,info),                _if_conditional257) {
                }
                else {
                    if(_if_conditional258=*info->p==41,                    _if_conditional258) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional259=*info->p!=40,                        _if_conditional259) {
                            var_name_between_brace_153=(_Bool)1;
                        }
                    }
                }
                word_156 = come_decrement_ref_count2(word_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_154;
        info->sline=sline_155;
    }
    if(_if_conditional260=anonymous_type_115&&*info->p==123,    _if_conditional260) {
        if(struct__107) {
            if(_if_conditional262=string_operator_equals(type_name_97,""),            _if_conditional262) {
                __dec_obj90=type_name_97;
                type_name_97=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("anonymous_typeX%d",++anonymous_num_157))));
                __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            node_158=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value163=parse_struct((char*)come_increment_ref_count(type_name_97),info))));
            if(right_value163) { right_value163 = come_decrement_ref_count2(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional263=!node_compile(node_158,info),            _if_conditional263) {
                err_msg(info,"parse_struct is failed");
                __result61__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value165=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value164=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1276, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_158) { node_158 = come_decrement_ref_count2(node_158, ((struct sNode*)node_158)->finalize, ((struct sNode*)node_158)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_148 = come_decrement_ref_count2(var_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result61__;
            }
            pointer_num_159=0;
            while(_while_condtional29=*info->p==42,            _while_condtional29) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_159++;
            }
            __dec_obj91=type_147;
            type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value166=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1286, "struct sType")))),type_name_97,(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_147->mPointerNum=pointer_num_159;
            if(node_158) { node_158 = come_decrement_ref_count2(node_158, ((struct sNode*)node_158)->finalize, ((struct sNode*)node_158)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(enum__109) {
                if(_if_conditional265=string_operator_equals(type_name_97,""),                _if_conditional265) {
                    __dec_obj92=type_name_97;
                    type_name_97=(char*)come_increment_ref_count(((char*)(right_value168=xsprintf("anonymous_typeY%d",++anonymous_num_157))));
                    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                node_160=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=parse_enum((char*)come_increment_ref_count(type_name_97),info))));
                if(right_value169) { right_value169 = come_decrement_ref_count2(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(_if_conditional266=!info->no_output_err,                _if_conditional266) {
                    if(_if_conditional267=!node_compile(node_160,info),                    _if_conditional267) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result62__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value171=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value170=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1300, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_160) { node_160 = come_decrement_ref_count2(node_160, ((struct sNode*)node_160)->finalize, ((struct sNode*)node_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_148 = come_decrement_ref_count2(var_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result62__;
                    }
                }
                __dec_obj93=type_147;
                type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value172=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1304, "struct sType")))),type_name_97,(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(node_160) { node_160 = come_decrement_ref_count2(node_160, ((struct sNode*)node_160)->finalize, ((struct sNode*)node_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(union__108) {
                    if(_if_conditional269=string_operator_equals(type_name_97,""),                    _if_conditional269) {
                        __dec_obj94=type_name_97;
                        type_name_97=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("anonymous_typeZ%d",++anonymous_num_157))));
                        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    node_161=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value175=parse_union((char*)come_increment_ref_count(type_name_97),info))));
                    if(right_value175) { right_value175 = come_decrement_ref_count2(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional270=!node_compile(node_161,info),                    _if_conditional270) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result63__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value177=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value176=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1316, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_161) { node_161 = come_decrement_ref_count2(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_148 = come_decrement_ref_count2(var_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result63__;
                    }
                    pointer_num_162=0;
                    while(_while_condtional30=*info->p==42,                    _while_condtional30) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_num_162++;
                    }
                    __dec_obj95=type_147;
                    type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value178=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1327, "struct sType")))),type_name_97,(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    type_147->mPointerNum=pointer_num_162;
                    if(node_161) { node_161 = come_decrement_ref_count2(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __result64__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value181=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value180=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1333, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    var_name_148 = come_decrement_ref_count2(var_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result64__;
                }
            }
        }
        if(parse_variable_name) {
            parse_sharp_v5(info);
            if(_if_conditional272=var_name_between_brace_153&&*info->p==40,            _if_conditional272) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional273=*info->p==58,            _if_conditional273) {
                __dec_obj96=var_name_148;
                var_name_148=(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(""))));
                __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(anonymous_name_116) {
                    num_anonymous_var_name_163++;
                    __dec_obj97=var_name_148;
                    var_name_148=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_163))));
                    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional275=xisalnum(*info->p)||*info->p==95,                    _if_conditional275) {
                        __dec_obj98=var_name_148;
                        var_name_148=(char*)come_increment_ref_count(((char*)(right_value184=parse_word(info))));
                        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        num_anonymous_var_name_164++;
                        __dec_obj99=var_name_148;
                        var_name_148=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_164))));
                        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            if(_if_conditional276=var_name_between_brace_153&&*info->p==41,            _if_conditional276) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional277=*info->p==58,            _if_conditional277) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_165=info->no_comma;
                info->no_comma=(_Bool)1;
                node_166=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value186=expression_v13(info))));
                if(right_value186) { right_value186 = come_decrement_ref_count2(right_value186, ((struct sNode*)right_value186)->finalize, ((struct sNode*)right_value186)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_165;
                __dec_obj100=type_147->mSizeNum;
                type_147->mSizeNum=(struct sNode*)come_increment_ref_count(node_166);
                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_166) { node_166 = come_decrement_ref_count2(node_166, ((struct sNode*)node_166)->finalize, ((struct sNode*)node_166)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        if(lambda_flag_144) {
            if(_if_conditional283=map$2charphsTypephp_operator_load_element(info->types,type_name_97),            _if_conditional283) {
                __dec_obj101=result_type_167;
                result_type_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_97)))));
                come_call_finalizer2(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional289=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_97)),                _if_conditional289) {
                    for(                    i_176=0;                    i_176<list$1charph_length(info->generics_type_names);                    i_176++                    ){
                        if(_if_conditional292=string_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_176),type_name_97),                        _if_conditional292) {
                            __dec_obj102=result_type_167;
                            result_type_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value188=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1386, "struct sType")))),((char*)(right_value189=xsprintf("generics_type%d",i_176))),(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    if(_if_conditional293=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_97)),                    _if_conditional293) {
                        for(                        i_180=0;                        i_180<list$1charph_length(info->method_generics_type_names);                        i_180++                        ){
                            if(_if_conditional294=string_operator_equals(list$1charphp_operator_load_element(info->method_generics_type_names,i_180),type_name_97),                            _if_conditional294) {
                                __dec_obj103=result_type_167;
                                result_type_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value191=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1393, "struct sType")))),((char*)(right_value192=xsprintf("mgenerics_type%d",i_180))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        __dec_obj104=result_type_167;
                        result_type_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value194=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1398, "struct sType")))),type_name_97,(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            result_type_167->mConstant=result_type_167->mConstant||constant_98;
            __dec_obj105=result_type_167->mAlignas;
            result_type_167->mAlignas=(struct sNode*)come_increment_ref_count(alignas__114);
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
            result_type_167->mComeMemCore=result_type_167->mComeMemCore||come_mem_core__113;
            result_type_167->mRegister=register__101;
            result_type_167->mUnsigned=result_type_167->mUnsigned||unsigned__102;
            result_type_167->mVolatile=volatile__100;
            result_type_167->mStatic=result_type_167->mStatic||static__99;
            result_type_167->mExtern=result_type_167->mExtern||extern__111;
            result_type_167->mInline=result_type_167->mInline||inline__112;
            result_type_167->mRestrict=result_type_167->mRestrict||restrict__106;
            result_type_167->mLongLong=result_type_167->mLongLong||long_long_104;
            result_type_167->mLong=result_type_167->mLong||long__103;
            result_type_167->mShort=result_type_167->mShort||short__105;
            result_type_167->mPointerNum=pointer_num_142;
            result_type_167->mHeap=result_type_167->mHeap||heap_143;
            __dec_obj106=var_name_148;
            var_name_148=(char*)come_increment_ref_count(((char*)(right_value196=parse_word(info))));
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            multiple_assign_var2=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value197=parse_params(info)));
            param_types_181=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var2->v1);
            param_names_182=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v2);
            param_default_parametors_183=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v3);
            var_args_184=multiple_assign_var2->v4;
            come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj107=type_147;
            type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value198=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1421, "struct sType")))),"lambda",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj109=type_147->mResultType;
            type_147->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value201=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value200=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1423, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_167)))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj110=type_147->mParamTypes;
            type_147->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_181);
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __dec_obj111=type_147->mParamNames;
            type_147->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_182);
            come_call_finalizer2(list$1charph_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_147->mVarArgs=var_args_184;
            type_147->mExtern=extern__111;
            come_call_finalizer2(sType_finalize,result_type_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(function_pointer_flag_149) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                if(_if_conditional296=*info->p==42||*info->p==94,                _if_conditional296) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                skip_pointer_attribute(info);
                if(_if_conditional297=map$2charphsTypephp_operator_load_element(info->types,type_name_97),                _if_conditional297) {
                    __dec_obj112=result_type_185;
                    result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_97)))));
                    come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional298=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_97)),                    _if_conditional298) {
                        for(                        i_186=0;                        i_186<list$1charph_length(info->generics_type_names);                        i_186++                        ){
                            if(_if_conditional299=string_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_186),type_name_97),                            _if_conditional299) {
                                __dec_obj113=result_type_185;
                                result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value203=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1450, "struct sType")))),((char*)(right_value204=xsprintf("generics_type%d",i_186))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        if(_if_conditional300=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_97)),                        _if_conditional300) {
                            for(                            i_187=0;                            i_187<list$1charph_length(info->method_generics_type_names);                            i_187++                            ){
                                if(_if_conditional301=string_operator_equals(list$1charphp_operator_load_element(info->method_generics_type_names,i_187),type_name_97),                                _if_conditional301) {
                                    __dec_obj114=result_type_185;
                                    result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value206=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1457, "struct sType")))),((char*)(right_value207=xsprintf("mgenerics_type%d",i_187))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        else {
                            __dec_obj115=result_type_185;
                            result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1462, "struct sType")))),type_name_97,(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                result_type_185->mConstant=result_type_185->mConstant||constant_98;
                __dec_obj116=result_type_185->mAlignas;
                result_type_185->mAlignas=(struct sNode*)come_increment_ref_count(alignas__114);
                if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
                result_type_185->mComeMemCore=result_type_185->mComeMemCore||come_mem_core__113;
                result_type_185->mRegister=register__101;
                result_type_185->mUnsigned=result_type_185->mUnsigned||unsigned__102;
                result_type_185->mVolatile=volatile__100;
                result_type_185->mStatic=result_type_185->mStatic||static__99;
                result_type_185->mExtern=result_type_185->mExtern||extern__111;
                result_type_185->mInline=result_type_185->mInline||inline__112;
                result_type_185->mRestrict=result_type_185->mRestrict||restrict__106;
                result_type_185->mLongLong=result_type_185->mLongLong||long_long_104;
                result_type_185->mLong=result_type_185->mLong||long__103;
                result_type_185->mShort=result_type_185->mShort||short__105;
                result_type_185->mPointerNum+=pointer_num_142;
                result_type_185->mHeap=result_type_185->mHeap||heap_143;
                if(_if_conditional302=xisalnum(*info->p)||*info->p==95,                _if_conditional302) {
                    __dec_obj117=var_name_148;
                    var_name_148=(char*)come_increment_ref_count(((char*)(right_value211=parse_word(info))));
                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional303=*info->p==40,                    _if_conditional303) {
                        __result82__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value213=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value212=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1484, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_185),(char*)come_increment_ref_count(var_name_148),(_Bool)0)));
                        come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_148 = come_decrement_ref_count2(var_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result82__;
                    }
                }
                else {
                    num_anonymous_var_name_188++;
                    __dec_obj118=var_name_148;
                    var_name_148=(char*)come_increment_ref_count(((char*)(right_value214=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_188))));
                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                expected_next_character(41,info);
                multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value215=parse_params(info)));
                param_types_189=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
                param_names_190=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
                param_default_parametors_191=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
                var_args_192=multiple_assign_var3->v4;
                come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj119=type_147;
                type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value216=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1496, "struct sType")))),"lambda",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj120=type_147->mResultType;
                type_147->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value219=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value218=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1498, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_185)))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj121=type_147->mParamTypes;
                type_147->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_189);
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __dec_obj122=type_147->mParamNames;
                type_147->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_190);
                come_call_finalizer2(list$1charph_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_147->mVarArgs=var_args_192;
                type_147->mExtern=extern__111;
                come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional304=string_operator_equals(type_name_97,"__typeof__")&&*info->p==40,                _if_conditional304) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    exp_193=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value220=expression_v13(info))));
                    if(right_value220) { right_value220 = come_decrement_ref_count2(right_value220, ((struct sNode*)right_value220)->finalize, ((struct sNode*)right_value220)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    expected_next_character(41,info);
                    if(_if_conditional305=!node_compile(exp_193,info),                    _if_conditional305) {
                        err_msg(info,"invalid __typeof__ expression");
                        __result84__ = __result_obj__ = ((struct tuple3$3voidpvoidpbool*)(right_value222=tuple3$3voidpvoidpbool_initialize((struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value221=(struct tuple3$3voidpvoidpbool*)come_calloc(1, sizeof(struct tuple3$3voidpvoidpbool)*(1), "05function4.c", 1514, "struct tuple3$3voidpvoidpbool")))),((void*)0),((void*)0),(_Bool)0)));
                        if(exp_193) { exp_193 = come_decrement_ref_count2(exp_193, ((struct sNode*)exp_193)->finalize, ((struct sNode*)exp_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_148 = come_decrement_ref_count2(var_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3voidpvoidpboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result84__;
                    }
                    come_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    dec_stack_ptr(1,info);
                    __dec_obj123=type_147;
                    type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(come_value_194->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(_if_conditional309=var_name_between_brace_153&&*info->p==40,                        _if_conditional309) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional310=*info->p==58,                        _if_conditional310) {
                            __dec_obj124=var_name_148;
                            var_name_148=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(""))));
                            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(anonymous_name_116) {
                                num_anonymous_var_name_195++;
                                __dec_obj125=var_name_148;
                                var_name_148=(char*)come_increment_ref_count(((char*)(right_value226=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_195))));
                                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(_if_conditional312=xisalnum(*info->p)||*info->p==95,                                _if_conditional312) {
                                    __dec_obj126=var_name_148;
                                    var_name_148=(char*)come_increment_ref_count(((char*)(right_value227=parse_word(info))));
                                    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    num_anonymous_var_name_196++;
                                    __dec_obj127=var_name_148;
                                    var_name_148=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_196))));
                                    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        if(_if_conditional313=var_name_between_brace_153&&*info->p==41,                        _if_conditional313) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional314=*info->p==58,                        _if_conditional314) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_197=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_198=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value229=expression_v13(info))));
                            if(right_value229) { right_value229 = come_decrement_ref_count2(right_value229, ((struct sNode*)right_value229)->finalize, ((struct sNode*)right_value229)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_197;
                            __dec_obj128=type_147->mSizeNum;
                            type_147->mSizeNum=(struct sNode*)come_increment_ref_count(node_198);
                            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_198) { node_198 = come_decrement_ref_count2(node_198, ((struct sNode*)node_198)->finalize, ((struct sNode*)node_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_193) { exp_193 = come_decrement_ref_count2(exp_193, ((struct sNode*)exp_193)->finalize, ((struct sNode*)exp_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional315=map$2charphsTypephp_operator_load_element(info->types,type_name_97),                    _if_conditional315) {
                        __dec_obj129=type_147;
                        type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_97)))));
                        come_call_finalizer2(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj130=type_147->mOriginalTypeName;
                        type_147->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string(type_name_97))));
                        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        type_147->mOriginalTypeNamePointerNum=pointer_num_142;
                        type_147->mConstant=type_147->mConstant||constant_98;
                        __dec_obj131=type_147->mAlignas;
                        type_147->mAlignas=(struct sNode*)come_increment_ref_count(alignas__114);
                        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
                        type_147->mComeMemCore=type_147->mComeMemCore||come_mem_core__113;
                        type_147->mRegister=register__101;
                        type_147->mUnsigned=type_147->mUnsigned||unsigned__102;
                        type_147->mVolatile=volatile__100;
                        type_147->mStatic=type_147->mStatic||static__99;
                        type_147->mExtern=type_147->mExtern||extern__111;
                        type_147->mInline=type_147->mInline||inline__112;
                        type_147->mRestrict=type_147->mRestrict||restrict__106;
                        type_147->mLongLong=type_147->mLongLong||long_long_104;
                        type_147->mLong=type_147->mLong||long__103;
                        type_147->mShort=type_147->mShort||short__105;
                        type_147->mPointerNum+=pointer_num_142;
                        type_147->mHeap=type_147->mHeap||heap_143;
                    }
                    else {
                        if(_if_conditional316=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_97)),                        _if_conditional316) {
                            for(                            i_199=0;                            i_199<list$1charph_length(info->generics_type_names);                            i_199++                            ){
                                if(_if_conditional317=string_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_199),type_name_97),                                _if_conditional317) {
                                    __dec_obj132=type_147;
                                    type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value232=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1590, "struct sType")))),((char*)(right_value233=xsprintf("generics_type%d",i_199))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                            type_147->mConstant=type_147->mConstant||constant_98;
                            __dec_obj133=type_147->mAlignas;
                            type_147->mAlignas=(struct sNode*)come_increment_ref_count(alignas__114);
                            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
                            type_147->mComeMemCore=type_147->mComeMemCore||come_mem_core__113;
                            type_147->mRegister=register__101;
                            type_147->mUnsigned=type_147->mUnsigned||unsigned__102;
                            type_147->mVolatile=volatile__100;
                            type_147->mStatic=type_147->mStatic||static__99;
                            type_147->mExtern=type_147->mExtern||extern__111;
                            type_147->mInline=type_147->mInline||inline__112;
                            type_147->mRestrict=type_147->mRestrict||restrict__106;
                            type_147->mLongLong=type_147->mLongLong||long_long_104;
                            type_147->mLong=type_147->mLong||long__103;
                            type_147->mShort=type_147->mShort||short__105;
                            type_147->mPointerNum+=pointer_num_142;
                            type_147->mHeap=type_147->mHeap||heap_143;
                        }
                        else {
                            if(_if_conditional318=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_97)),                            _if_conditional318) {
                                for(                                i_200=0;                                i_200<list$1charph_length(info->method_generics_type_names);                                i_200++                                ){
                                    if(_if_conditional319=string_operator_equals(list$1charphp_operator_load_element(info->method_generics_type_names,i_200),type_name_97),                                    _if_conditional319) {
                                        __dec_obj134=type_147;
                                        type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value235=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1613, "struct sType")))),((char*)(right_value236=xsprintf("mgenerics_type%d",i_200))),(_Bool)0,info))));
                                        come_call_finalizer2(sType_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                type_147->mConstant=type_147->mConstant||constant_98;
                                __dec_obj135=type_147->mAlignas;
                                type_147->mAlignas=(struct sNode*)come_increment_ref_count(alignas__114);
                                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
                                type_147->mComeMemCore=type_147->mComeMemCore||come_mem_core__113;
                                type_147->mRegister=register__101;
                                type_147->mUnsigned=type_147->mUnsigned||unsigned__102;
                                type_147->mVolatile=volatile__100;
                                type_147->mStatic=type_147->mStatic||static__99;
                                type_147->mExtern=type_147->mExtern||extern__111;
                                type_147->mInline=type_147->mInline||inline__112;
                                type_147->mRestrict=type_147->mRestrict||restrict__106;
                                type_147->mLongLong=type_147->mLongLong||long_long_104;
                                type_147->mLong=type_147->mLong||long__103;
                                type_147->mShort=type_147->mShort||short__105;
                                type_147->mPointerNum+=pointer_num_142;
                                type_147->mHeap=type_147->mHeap||heap_143;
                            }
                            else {
                                if(_if_conditional320=*info->p==60,                                _if_conditional320) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    if(_if_conditional331=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_97)==((void*)0),                                    _if_conditional331) {
                                        __result89__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value239=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value238=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1639, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_148 = come_decrement_ref_count2(var_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        return __result89__;
                                    }
                                    __dec_obj136=type_147;
                                    type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value240=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1642, "struct sType")))),type_name_97,(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    while(_while_condtional35=(_Bool)1,                                    _while_condtional35) {
                                        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value242=parse_type(info,(_Bool)0,(_Bool)0)));
                                        generics_type_206=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                                        var_name_207=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                                        err_208=multiple_assign_var4->v3;
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional332=!err_208,                                        _if_conditional332) {
                                            __result90__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value244=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value243=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1648, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            come_call_finalizer2(sType_finalize,generics_type_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_207 = come_decrement_ref_count2(var_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_148 = come_decrement_ref_count2(var_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            return __result90__;
                                        }
                                        list$1sTypeph_push_back(type_147->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_206));
                                        if(_if_conditional333=*info->p==44,                                        _if_conditional333) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        else {
                                            if(_if_conditional334=*info->p==62,                                            _if_conditional334) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                come_call_finalizer2(sType_finalize,generics_type_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_207 = come_decrement_ref_count2(var_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                err_msg(info,"invalid generics type\n");
                                                __result91__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value246=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value245=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1665, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                                come_call_finalizer2(sType_finalize,generics_type_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_207 = come_decrement_ref_count2(var_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_148 = come_decrement_ref_count2(var_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                return __result91__;
                                            }
                                        }
                                        come_call_finalizer2(sType_finalize,generics_type_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_207 = come_decrement_ref_count2(var_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional335=is_contained_generics_class(type_147,info),                                    _if_conditional335) {
                                        __dec_obj137=type_147;
                                        type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=solve_generics(type_147,info->generics_type,info))));
                                        come_call_finalizer2(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        if(_if_conditional336=!output_generics_struct(type_147,type_147,info),                                        _if_conditional336) {
                                            new_name_209=(char*)come_increment_ref_count(((char*)(right_value248=create_generics_name(type_147,info))));
                                            right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_209);
                                            exit(7);
                                            new_name_209 = come_decrement_ref_count2(new_name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    type_147->mConstant=type_147->mConstant||constant_98;
                                    __dec_obj138=type_147->mAlignas;
                                    type_147->mAlignas=(struct sNode*)come_increment_ref_count(alignas__114);
                                    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
                                    type_147->mComeMemCore=type_147->mComeMemCore||come_mem_core__113;
                                    type_147->mRegister=register__101;
                                    type_147->mUnsigned=type_147->mUnsigned||unsigned__102;
                                    type_147->mVolatile=volatile__100;
                                    type_147->mStatic=type_147->mStatic||static__99;
                                    type_147->mExtern=type_147->mExtern||extern__111;
                                    type_147->mInline=type_147->mInline||inline__112;
                                    type_147->mRestrict=type_147->mRestrict||restrict__106;
                                    type_147->mLongLong=type_147->mLongLong||long_long_104;
                                    type_147->mLong=type_147->mLong||long__103;
                                    type_147->mShort=type_147->mShort||short__105;
                                    type_147->mPointerNum+=pointer_num_142;
                                    type_147->mHeap=type_147->mHeap||heap_143;
                                }
                                else {
                                    if(struct__107) {
                                        klass_210=map$2charphsClassphp_operator_load_element(info->classes,type_name_97);
                                        if(_if_conditional338=klass_210==((void*)0)&&*info->p!=60,                                        _if_conditional338) {
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_97),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value256=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value255=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1702, "struct sClass")))),type_name_97,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                            come_call_finalizer2(sClass_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sClass_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                    }
                                    __dec_obj139=type_147;
                                    type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value257=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1706, "struct sType")))),type_name_97,(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    type_147->mConstant=type_147->mConstant||constant_98;
                                    __dec_obj140=type_147->mAlignas;
                                    type_147->mAlignas=(struct sNode*)come_increment_ref_count(alignas__114);
                                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
                                    type_147->mComeMemCore=type_147->mComeMemCore||come_mem_core__113;
                                    type_147->mRegister=register__101;
                                    type_147->mUnsigned=type_147->mUnsigned||unsigned__102;
                                    type_147->mVolatile=volatile__100;
                                    type_147->mStatic=type_147->mStatic||static__99;
                                    type_147->mExtern=type_147->mExtern||extern__111;
                                    type_147->mInline=type_147->mInline||inline__112;
                                    type_147->mRestrict=type_147->mRestrict||restrict__106;
                                    type_147->mLongLong=type_147->mLongLong||long_long_104;
                                    type_147->mLong=type_147->mLong||long__103;
                                    type_147->mShort=type_147->mShort||short__105;
                                    type_147->mPointerNum+=pointer_num_142;
                                    type_147->mHeap=type_147->mHeap||heap_143;
                                }
                            }
                        }
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional44=*info->p==42,                    _while_condtional44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_147->mPointerNum++;
                        if(type_147->mNoSolvedGenericsType->v1) {
                            type_147->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional387=*info->p==37,                    _if_conditional387) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_147->mHeap=(_Bool)1;
                        if(type_147->mNoSolvedGenericsType->v1) {
                            type_147->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(_if_conditional389=*info->p==38,                    _if_conditional389) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_147->mNoHeap=(_Bool)1;
                        if(type_147->mNoSolvedGenericsType->v1) {
                            type_147->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    if(_if_conditional391=*info->p==63,                    _if_conditional391) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_147->mNullValue=(_Bool)1;
                    }
                    if(_if_conditional392=*info->p==124,                    _if_conditional392) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_147->mNoCallingDestructor=(_Bool)1;
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional45=*info->p==42,                    _while_condtional45) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_147->mPointerNum++;
                        if(type_147->mNoSolvedGenericsType->v1) {
                            type_147->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional394=parse_multiple_type&&*info->p==44,                    _if_conditional394) {
                        types_255=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value260=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value259=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 1789, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        list$1sTypeph_push_back(types_255,(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(type_147)))));
                        come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional46=*info->p==44,                        _while_condtional46) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value262=parse_type(info,(_Bool)0,(_Bool)0)));
                            type2_256=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                            name_257=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            err_258=multiple_assign_var5->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional395=!err_258,                            _if_conditional395) {
                                __result116__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value264=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value263=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1800, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer2(sType_finalize,type2_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                name_257 = come_decrement_ref_count2(name_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sTypephp_finalize,types_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                var_name_148 = come_decrement_ref_count2(var_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                return __result116__;
                            }
                            list$1sTypeph_push_back(types_255,(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(type2_256)))));
                            come_call_finalizer2(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name_257 = come_decrement_ref_count2(name_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        num_tuples_259=list$1sTypeph_length(types_255);
                        __dec_obj141=type_147;
                        type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value266=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1808, "struct sType")))),((char*)(right_value267=xsprintf("tuple%d",num_tuples_259))),(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        type_147->mPointerNum++;
                        type_147->mHeap=(_Bool)1;
                        for(                        o2_saved_260=(struct list$1sTypeph*)come_increment_ref_count((types_255)),it_261=list$1sTypeph_begin((o2_saved_260));                        !list$1sTypeph_end((o2_saved_260));                        it_261=list$1sTypeph_next((o2_saved_260))                        ){
                            list$1sTypeph_push_back(type_147->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_clone(it_261)))));
                            come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(_if_conditional396=is_contained_generics_class(type_147,info),                        _if_conditional396) {
                            __dec_obj142=type_147;
                            type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=solve_generics(type_147,info->generics_type,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(_if_conditional397=!output_generics_struct(type_147,type_147,info),                            _if_conditional397) {
                                new_name_262=(char*)come_increment_ref_count(((char*)(right_value271=create_generics_name(type_147,info))));
                                right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                printf("output generics is failed(%s)\n",new_name_262);
                                exit(9);
                                new_name_262 = come_decrement_ref_count2(new_name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,types_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(_if_conditional399=var_name_between_brace_153&&*info->p==40,                        _if_conditional399) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional400=*info->p==58,                        _if_conditional400) {
                            __dec_obj143=var_name_148;
                            var_name_148=(char*)come_increment_ref_count(((char*)(right_value272=__builtin_string(""))));
                            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(anonymous_name_116) {
                                num_anonymous_var_name_263++;
                                __dec_obj144=var_name_148;
                                var_name_148=(char*)come_increment_ref_count(((char*)(right_value273=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_263))));
                                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(_if_conditional402=xisalnum(*info->p)||*info->p==95,                                _if_conditional402) {
                                    __dec_obj145=var_name_148;
                                    var_name_148=(char*)come_increment_ref_count(((char*)(right_value274=parse_word(info))));
                                    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    num_anonymous_var_name_264++;
                                    __dec_obj146=var_name_148;
                                    var_name_148=(char*)come_increment_ref_count(((char*)(right_value275=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_264))));
                                    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        if(_if_conditional403=var_name_between_brace_153&&*info->p==41,                        _if_conditional403) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional404=*info->p==58,                        _if_conditional404) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_265=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value276=expression_v13(info))));
                            if(right_value276) { right_value276 = come_decrement_ref_count2(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_265;
                            __dec_obj147=type_147->mSizeNum;
                            type_147->mSizeNum=(struct sNode*)come_increment_ref_count(node_266);
                            if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    while(_while_condtional47=*info->p==91,    _while_condtional47) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(_if_conditional405=*info->p==93,        _if_conditional405) {
            info->p++;
            skip_spaces_and_lf(info);
            type_147->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value277=expression_v13(info))));
        if(right_value277) { right_value277 = come_decrement_ref_count2(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1sNodeph_push_back(type_147->mArrayNum,(struct sNode*)come_increment_ref_count(node_267));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_267) { node_267 = come_decrement_ref_count2(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    asm_name_268=(char*)come_increment_ref_count(((char*)(right_value278=parse_attribute(info))));
    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj148=type_147->mAsmName;
    type_147->mAsmName=(char*)come_increment_ref_count(asm_name_268);
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    __result117__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value280=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value279=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1902, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_147),(char*)come_increment_ref_count(var_name_148),(_Bool)1)));
    type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_148 = come_decrement_ref_count2(var_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_268 = come_decrement_ref_count2(asm_name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result117__;
    type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__114) { alignas__114 = come_decrement_ref_count2(alignas__114, ((struct sNode*)alignas__114)->finalize, ((struct sNode*)alignas__114)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_148 = come_decrement_ref_count2(var_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_268 = come_decrement_ref_count2(asm_name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
struct sType* __dec_obj53;
char* __dec_obj54;
struct tuple3$3sTypephcharphbool* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj53=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                __dec_obj54=self->v2;
                                self->v2=(char*)come_increment_ref_count(v2);
                                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->v3=v3;
                                __result55__ = __result_obj__ = self;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result55__;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_168;
unsigned int hash_169;
unsigned int it_170;
_Bool _while_condtional31;
_Bool _if_conditional279;
_Bool _if_conditional280;
struct sType* __result65__;
_Bool _if_conditional281;
_Bool _if_conditional282;
struct sType* __result66__;
struct sType* __result67__;
struct sType* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_168, 0, sizeof(struct sType*));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&it_170, 0, sizeof(unsigned int));
                memset(&default_value_168,0,sizeof(struct sType*));
                hash_169=string_get_hash_key(((char*)key))%self->size;
                it_170=hash_169;
                while(_while_condtional31=(_Bool)1,                _while_condtional31) {
                    if(_if_conditional279=self->item_existance[it_170],                    _if_conditional279) {
                        if(_if_conditional280=string_equals(self->keys[it_170],key),                        _if_conditional280) {
                            __result65__ = __result_obj__ = self->items[it_170];
                            come_call_finalizer2(sType_finalize,default_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result65__;
                        }
                        it_170++;
                        if(_if_conditional281=it_170>=self->size,                        _if_conditional281) {
                            it_170=0;
                        }
                        else {
                            if(_if_conditional282=it_170==hash_169,                            _if_conditional282) {
                                __result66__ = __result_obj__ = default_value_168;
                                come_call_finalizer2(sType_finalize,default_value_168, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result66__;
                            }
                        }
                    }
                    else {
                        __result67__ = __result_obj__ = default_value_168;
                        come_call_finalizer2(sType_finalize,default_value_168, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result67__;
                    }
                }
                __result68__ = __result_obj__ = default_value_168;
                come_call_finalizer2(sType_finalize,default_value_168, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer2(sType_finalize,default_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_173;
_Bool _if_conditional288;
_Bool __result76__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_173, 0, sizeof(char*));
                    for(                    it_173=list$1charph_begin(self);                    !list$1charph_end(self);                    it_173=list$1charph_next(self)                    ){
                        if(_if_conditional288=string_operator_equals(it_173,item),                        _if_conditional288) {
                            __result76__ = (_Bool)1;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result76__;
                        }
                    }
                    __result77__ = (_Bool)0;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result77__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional284;
char* result_171;
char* __result69__;
_Bool _if_conditional285;
char* __result70__;
char* result_172;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_171, 0, sizeof(char*));
memset(&result_172, 0, sizeof(char*));
                        if(_if_conditional284=self==((void*)0),                        _if_conditional284) {
                            memset(&result_171,0,sizeof(char*));
                            __result69__ = __result_obj__ = result_171;
                            return __result69__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result70__ = __result_obj__ = self->it->item;
                            return __result70__;
                        }
                        memset(&result_172,0,sizeof(char*));
                        __result71__ = __result_obj__ = result_172;
                        return __result71__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result72__ = self==((void*)0)||self->it==((void*)0);
                        return __result72__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional286;
char* result_174;
char* __result73__;
_Bool _if_conditional287;
char* __result74__;
char* result_175;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_174, 0, sizeof(char*));
memset(&result_175, 0, sizeof(char*));
                        if(_if_conditional286=self==((void*)0)||self->it==((void*)0),                        _if_conditional286) {
                            memset(&result_174,0,sizeof(char*));
                            __result73__ = __result_obj__ = result_174;
                            return __result73__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result74__ = __result_obj__ = self->it->item;
                            return __result74__;
                        }
                        memset(&result_175,0,sizeof(char*));
                        __result75__ = __result_obj__ = result_175;
                        return __result75__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result78__ = self->len;
                        return __result78__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional290;
struct list_item$1charph* it_177;
int i_178;
_Bool _while_condtional32;
_Bool _if_conditional291;
char* __result79__;
char* default_value_179;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_177, 0, sizeof(struct list_item$1charph*));
memset(&i_178, 0, sizeof(int));
memset(&default_value_179, 0, sizeof(char*));
                            if(_if_conditional290=position<0,                            _if_conditional290) {
                                position+=self->len;
                            }
                            it_177=self->head;
                            i_178=0;
                            while(_while_condtional32=it_177!=((void*)0),                            _while_condtional32) {
                                if(_if_conditional291=position==i_178,                                _if_conditional291) {
                                    __result79__ = __result_obj__ = it_177->item;
                                    return __result79__;
                                }
                                it_177=it_177->next;
                                i_178++;
                            }
                            memset(&default_value_179,0,sizeof(char*));
                            __result80__ = __result_obj__ = default_value_179;
                            default_value_179 = come_decrement_ref_count2(default_value_179, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result80__;
                            default_value_179 = come_decrement_ref_count2(default_value_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj108;
struct tuple1$1sTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj108=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __result81__ = __result_obj__ = self;
                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result81__;
                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3){
void* __result_obj__;
struct tuple3$3voidpvoidpbool* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->v1=v1;
                            self->v2=v2;
                            self->v3=v3;
                            __result83__ = __result_obj__ = self;
                            come_call_finalizer2(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result83__;
                            come_call_finalizer2(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional306;
_Bool _if_conditional307;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional306=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional306) {
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional307=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional307) {
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_201;
unsigned int hash_202;
unsigned int it_203;
_Bool _while_condtional33;
_Bool _if_conditional321;
_Bool _if_conditional322;
struct sClass* __result85__;
_Bool _if_conditional329;
_Bool _if_conditional330;
struct sClass* __result86__;
struct sClass* __result87__;
struct sClass* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_201, 0, sizeof(struct sClass*));
memset(&hash_202, 0, sizeof(unsigned int));
memset(&it_203, 0, sizeof(unsigned int));
                                        memset(&default_value_201,0,sizeof(struct sClass*));
                                        hash_202=string_get_hash_key(((char*)key))%self->size;
                                        it_203=hash_202;
                                        while(_while_condtional33=(_Bool)1,                                        _while_condtional33) {
                                            if(_if_conditional321=self->item_existance[it_203],                                            _if_conditional321) {
                                                if(_if_conditional322=string_equals(self->keys[it_203],key),                                                _if_conditional322) {
                                                    __result85__ = __result_obj__ = self->items[it_203];
                                                    come_call_finalizer2(sClass_finalize,default_value_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result85__;
                                                }
                                                it_203++;
                                                if(_if_conditional329=it_203>=self->size,                                                _if_conditional329) {
                                                    it_203=0;
                                                }
                                                else {
                                                    if(_if_conditional330=it_203==hash_202,                                                    _if_conditional330) {
                                                        __result86__ = __result_obj__ = default_value_201;
                                                        come_call_finalizer2(sClass_finalize,default_value_201, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result86__;
                                                    }
                                                }
                                            }
                                            else {
                                                __result87__ = __result_obj__ = default_value_201;
                                                come_call_finalizer2(sClass_finalize,default_value_201, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result87__;
                                            }
                                        }
                                        __result88__ = __result_obj__ = default_value_201;
                                        come_call_finalizer2(sClass_finalize,default_value_201, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result88__;
                                        come_call_finalizer2(sClass_finalize,default_value_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional328;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional323=self!=((void*)0)&&self->mName!=((void*)0),                                                        _if_conditional323) {
                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional324=self!=((void*)0)&&self->mFields!=((void*)0),                                                        _if_conditional324) {
                                                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional328=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                        _if_conditional328) {
                                                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_204;
_Bool _while_condtional34;
struct list_item$1tuple2$2charphsTypephph* prev_it_205;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_204, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_205, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                it_204=self->head;
                                                                while(_while_condtional34=it_204!=((void*)0),                                                                _while_condtional34) {
                                                                    prev_it_205=it_204;
                                                                    it_204=it_204->next;
                                                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional325;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional325=self!=((void*)0)&&self->item!=((void*)0),                                                                        _if_conditional325) {
                                                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional326;
_Bool _if_conditional327;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional326=self!=((void*)0)&&self->v1!=((void*)0),                                                                                _if_conditional326) {
                                                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                if(_if_conditional327=self!=((void*)0)&&self->v2!=((void*)0),                                                                                _if_conditional327) {
                                                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional339;
unsigned int hash_228;
unsigned int it_229;
_Bool _while_condtional38;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool same_key_exist_246;
char* it2_249;
_Bool _if_conditional382;
_Bool _if_conditional383;
struct map$2charphsClassph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_228, 0, sizeof(unsigned int));
memset(&it_229, 0, sizeof(unsigned int));
memset(&same_key_exist_246, 0, sizeof(_Bool));
memset(&it2_249, 0, sizeof(char*));
                                                if(_if_conditional339=self->len*10>=self->size,                                                _if_conditional339) {
                                                    map$2charphsClassph_rehash(self);
                                                }
                                                hash_228=string_get_hash_key(key)%self->size;
                                                it_229=hash_228;
                                                while(_while_condtional38=(_Bool)1,                                                _while_condtional38) {
                                                    if(_if_conditional351=self->item_existance[it_229],                                                    _if_conditional351) {
                                                        if(_if_conditional352=string_equals(self->keys[it_229],key),                                                        _if_conditional352) {
                                                            if(_if_conditional353=1,                                                            _if_conditional353) {
                                                                list$1charp_remove(self->key_list,self->keys[it_229]);
                                                                self->keys[it_229] = come_decrement_ref_count2(self->keys[it_229], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                self->keys[it_229]=(char*)come_increment_ref_count(key);
                                                            }
                                                            else {
                                                                list$1charp_remove(self->key_list,self->keys[it_229]);
                                                                self->keys[it_229]=key;
                                                            }
                                                            if(_if_conditional373=1,                                                            _if_conditional373) {
                                                                come_call_finalizer2(sClass_finalize,self->items[it_229], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->items[it_229]=(struct sClass*)come_increment_ref_count(item);
                                                            }
                                                            else {
                                                                self->items[it_229]=item;
                                                            }
                                                            break;
                                                        }
                                                        it_229++;
                                                        if(_if_conditional374=it_229>=self->size,                                                        _if_conditional374) {
                                                            it_229=0;
                                                        }
                                                        else {
                                                            if(_if_conditional375=it_229==hash_228,                                                            _if_conditional375) {
                                                                printf("unexpected error in map.insert\n");
                                                                stackframe();
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        self->item_existance[it_229]=(_Bool)1;
                                                        if(_if_conditional376=1,                                                        _if_conditional376) {
                                                            self->keys[it_229]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            self->keys[it_229]=key;
                                                        }
                                                        if(_if_conditional377=1,                                                        _if_conditional377) {
                                                            self->items[it_229]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            self->items[it_229]=item;
                                                        }
                                                        self->len++;
                                                        break;
                                                    }
                                                }
                                                same_key_exist_246=(_Bool)0;
                                                for(                                                it2_249=list$1charp_begin(self->key_list);                                                !list$1charp_end(self->key_list);                                                it2_249=list$1charp_next(self->key_list)                                                ){
                                                    if(_if_conditional382=string_equals(it2_249,key),                                                    _if_conditional382) {
                                                        puts("SAME KEY");
                                                        same_key_exist_246=(_Bool)1;
                                                    }
                                                }
                                                if(_if_conditional383=!same_key_exist_246,                                                _if_conditional383) {
                                                    list$1charp_push_back(self->key_list,key);
                                                }
                                                __result115__ = __result_obj__ = self;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result115__;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_211;
void* right_value249;
char** keys_212;
void* right_value250;
struct sClass** items_213;
void* right_value251;
_Bool* item_existance_214;
int len_215;
char* it_218;
struct sClass* default_value_221;
struct sClass* it2_224;
unsigned int hash_225;
int n_226;
_Bool _while_condtional37;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
struct sClass* default_value_227;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_211, 0, sizeof(int));
right_value249 = (void*)0;
memset(&keys_212, 0, sizeof(char**));
right_value250 = (void*)0;
memset(&items_213, 0, sizeof(struct sClass**));
right_value251 = (void*)0;
memset(&item_existance_214, 0, sizeof(_Bool*));
memset(&len_215, 0, sizeof(int));
memset(&it_218, 0, sizeof(char*));
memset(&default_value_221, 0, sizeof(struct sClass*));
memset(&it2_224, 0, sizeof(struct sClass*));
memset(&hash_225, 0, sizeof(unsigned int));
memset(&n_226, 0, sizeof(int));
memset(&default_value_227, 0, sizeof(struct sClass*));
                                                        size_211=self->size*10;
                                                        keys_212=(char**)come_increment_ref_count(((char**)(right_value249=(char**)come_calloc(1, sizeof(char*)*(1*(size_211)), "./comelang2.h", 1335, "char*"))));
                                                        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        items_213=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value250=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_211)), "./comelang2.h", 1336, "struct sClass*"))));
                                                        come_call_finalizer2(sClass_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        item_existance_214=(_Bool*)come_increment_ref_count(((_Bool*)(right_value251=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_211)), "./comelang2.h", 1337, "_Bool"))));
                                                        right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        len_215=0;
                                                        for(                                                        it_218=map$2charphsClassph_begin(self);                                                        !map$2charphsClassph_end(self);                                                        it_218=map$2charphsClassph_next(self)                                                        ){
                                                            memset(&default_value_221,0,sizeof(struct sClass*));
                                                            it2_224=map$2charphsClassph_at(self,it_218,default_value_221);
                                                            hash_225=string_get_hash_key(it_218)%size_211;
                                                            n_226=hash_225;
                                                            while(_while_condtional37=(_Bool)1,                                                            _while_condtional37) {
                                                                if(_if_conditional348=item_existance_214[n_226],                                                                _if_conditional348) {
                                                                    n_226++;
                                                                    if(_if_conditional349=n_226>=size_211,                                                                    _if_conditional349) {
                                                                        n_226=0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional350=n_226==hash_225,                                                                        _if_conditional350) {
                                                                            printf("unexpected error in map.rehash(1)\n");
                                                                            stackframe();
                                                                            exit(2);
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    item_existance_214[n_226]=(_Bool)1;
                                                                    keys_212[n_226]=it_218;
                                                                    items_213[n_226]=map$2charphsClassph_at(self,it_218,default_value_227);
                                                                    len_215++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                        come_free((char*)self->items);
                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        come_free((char*)self->keys);
                                                        self->keys=keys_212;
                                                        self->items=items_213;
                                                        self->item_existance=item_existance_214;
                                                        self->size=size_211;
                                                        self->len=len_215;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional340;
char* result_216;
char* __result92__;
_Bool _if_conditional341;
char* __result93__;
char* result_217;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_216, 0, sizeof(char*));
memset(&result_217, 0, sizeof(char*));
                                                            if(_if_conditional340=self==((void*)0),                                                            _if_conditional340) {
                                                                memset(&result_216,0,sizeof(char*));
                                                                __result92__ = __result_obj__ = result_216;
                                                                return __result92__;
                                                            }
                                                            self->key_list->it=self->key_list->head;
                                                            if(self->key_list->it) {
                                                                __result93__ = __result_obj__ = self->key_list->it->item;
                                                                return __result93__;
                                                            }
                                                            memset(&result_217,0,sizeof(char*));
                                                            __result94__ = __result_obj__ = result_217;
                                                            return __result94__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            __result95__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                            return __result95__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional342;
char* result_219;
char* __result96__;
_Bool _if_conditional343;
char* __result97__;
char* result_220;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_219, 0, sizeof(char*));
memset(&result_220, 0, sizeof(char*));
                                                            if(_if_conditional342=self==((void*)0)||self->key_list->it==((void*)0),                                                            _if_conditional342) {
                                                                memset(&result_219,0,sizeof(char*));
                                                                __result96__ = __result_obj__ = result_219;
                                                                return __result96__;
                                                            }
                                                            self->key_list->it=self->key_list->it->next;
                                                            if(self->key_list->it) {
                                                                __result97__ = __result_obj__ = self->key_list->it->item;
                                                                return __result97__;
                                                            }
                                                            memset(&result_220,0,sizeof(char*));
                                                            __result98__ = __result_obj__ = result_220;
                                                            return __result98__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_222;
unsigned int it_223;
_Bool _while_condtional36;
_Bool _if_conditional344;
_Bool _if_conditional345;
struct sClass* __result99__;
_Bool _if_conditional346;
_Bool _if_conditional347;
struct sClass* __result100__;
struct sClass* __result101__;
struct sClass* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_222, 0, sizeof(unsigned int));
memset(&it_223, 0, sizeof(unsigned int));
                                                                hash_222=string_get_hash_key(((char*)key))%self->size;
                                                                it_223=hash_222;
                                                                while(_while_condtional36=(_Bool)1,                                                                _while_condtional36) {
                                                                    if(_if_conditional344=self->item_existance[it_223],                                                                    _if_conditional344) {
                                                                        if(_if_conditional345=string_equals(self->keys[it_223],key),                                                                        _if_conditional345) {
                                                                            __result99__ = __result_obj__ = self->items[it_223];
                                                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result99__;
                                                                        }
                                                                        it_223++;
                                                                        if(_if_conditional346=it_223>=self->size,                                                                        _if_conditional346) {
                                                                            it_223=0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional347=it_223==hash_222,                                                                            _if_conditional347) {
                                                                                __result100__ = __result_obj__ = default_value;
                                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result100__;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        __result101__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result101__;
                                                                    }
                                                                }
                                                                __result102__ = __result_obj__ = default_value;
                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result102__;
                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_230;
struct list_item$1charp* it_231;
_Bool _while_condtional39;
_Bool _if_conditional354;
struct list$1charp* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_230, 0, sizeof(int));
memset(&it_231, 0, sizeof(struct list_item$1charp*));
                                                                    it2_230=0;
                                                                    it_231=self->head;
                                                                    while(_while_condtional39=it_231!=((void*)0),                                                                    _while_condtional39) {
                                                                        if(_if_conditional354=string_equals(it_231->item,item),                                                                        _if_conditional354) {
                                                                            list$1charp_delete(self,it2_230,it2_230+1);
                                                                            break;
                                                                        }
                                                                        it2_230++;
                                                                        it_231=it_231->next;
                                                                    }
                                                                    __result106__ = __result_obj__ = self;
                                                                    return __result106__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
int tmp_232;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
struct list$1charp* __result103__;
_Bool _if_conditional361;
_Bool _if_conditional362;
struct list_item$1charp* it_235;
int i_236;
_Bool _while_condtional41;
_Bool _if_conditional363;
struct list_item$1charp* prev_it_237;
_Bool _if_conditional364;
_Bool _if_conditional365;
struct list_item$1charp* it_238;
int i_239;
_Bool _while_condtional42;
_Bool _if_conditional366;
_Bool _if_conditional367;
struct list_item$1charp* prev_it_240;
struct list_item$1charp* it_241;
struct list_item$1charp* head_prev_it_242;
struct list_item$1charp* tail_it_243;
int i_244;
_Bool _while_condtional43;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
struct list_item$1charp* prev_it_245;
_Bool _if_conditional371;
_Bool _if_conditional372;
struct list$1charp* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_232, 0, sizeof(int));
memset(&it_235, 0, sizeof(struct list_item$1charp*));
memset(&i_236, 0, sizeof(int));
memset(&prev_it_237, 0, sizeof(struct list_item$1charp*));
memset(&it_238, 0, sizeof(struct list_item$1charp*));
memset(&i_239, 0, sizeof(int));
memset(&prev_it_240, 0, sizeof(struct list_item$1charp*));
memset(&it_241, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_242, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_243, 0, sizeof(struct list_item$1charp*));
memset(&i_244, 0, sizeof(int));
memset(&prev_it_245, 0, sizeof(struct list_item$1charp*));
                                                                                if(_if_conditional355=head<0,                                                                                _if_conditional355) {
                                                                                    head+=self->len;
                                                                                }
                                                                                if(_if_conditional356=tail<0,                                                                                _if_conditional356) {
                                                                                    tail+=self->len+1;
                                                                                }
                                                                                if(_if_conditional357=head>tail,                                                                                _if_conditional357) {
                                                                                    tmp_232=tail;
                                                                                    tail=head;
                                                                                    head=tmp_232;
                                                                                }
                                                                                if(_if_conditional358=head<0,                                                                                _if_conditional358) {
                                                                                    head=0;
                                                                                }
                                                                                if(_if_conditional359=tail>self->len,                                                                                _if_conditional359) {
                                                                                    tail=self->len;
                                                                                }
                                                                                if(_if_conditional360=head==tail,                                                                                _if_conditional360) {
                                                                                    __result103__ = __result_obj__ = self;
                                                                                    return __result103__;
                                                                                }
                                                                                if(_if_conditional361=head==0&&tail==self->len,                                                                                _if_conditional361) {
                                                                                    list$1charp_reset(self);
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional362=head==0,                                                                                    _if_conditional362) {
                                                                                        it_235=self->head;
                                                                                        i_236=0;
                                                                                        while(_while_condtional41=it_235!=((void*)0),                                                                                        _while_condtional41) {
                                                                                            if(_if_conditional363=i_236<tail,                                                                                            _if_conditional363) {
                                                                                                prev_it_237=it_235;
                                                                                                it_235=it_235->next;
                                                                                                i_236++;
                                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional364=i_236==tail,                                                                                                _if_conditional364) {
                                                                                                    self->head=it_235;
                                                                                                    self->head->prev=((void*)0);
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    it_235=it_235->next;
                                                                                                    i_236++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional365=tail==self->len,                                                                                        _if_conditional365) {
                                                                                            it_238=self->head;
                                                                                            i_239=0;
                                                                                            while(_while_condtional42=it_238!=((void*)0),                                                                                            _while_condtional42) {
                                                                                                if(_if_conditional366=i_239==head,                                                                                                _if_conditional366) {
                                                                                                    self->tail=it_238->prev;
                                                                                                    self->tail->next=((void*)0);
                                                                                                }
                                                                                                if(_if_conditional367=i_239>=head,                                                                                                _if_conditional367) {
                                                                                                    prev_it_240=it_238;
                                                                                                    it_238=it_238->next;
                                                                                                    i_239++;
                                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    it_238=it_238->next;
                                                                                                    i_239++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            it_241=self->head;
                                                                                            head_prev_it_242=((void*)0);
                                                                                            tail_it_243=((void*)0);
                                                                                            i_244=0;
                                                                                            while(_while_condtional43=it_241!=((void*)0),                                                                                            _while_condtional43) {
                                                                                                if(_if_conditional368=i_244==head,                                                                                                _if_conditional368) {
                                                                                                    head_prev_it_242=it_241->prev;
                                                                                                }
                                                                                                if(_if_conditional369=i_244==tail,                                                                                                _if_conditional369) {
                                                                                                    tail_it_243=it_241;
                                                                                                }
                                                                                                if(_if_conditional370=i_244>=head&&i_244<tail,                                                                                                _if_conditional370) {
                                                                                                    prev_it_245=it_241;
                                                                                                    it_241=it_241->next;
                                                                                                    i_244++;
                                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    it_241=it_241->next;
                                                                                                    i_244++;
                                                                                                }
                                                                                            }
                                                                                            if(_if_conditional371=head_prev_it_242!=((void*)0),                                                                                            _if_conditional371) {
                                                                                                head_prev_it_242->next=tail_it_243;
                                                                                            }
                                                                                            if(_if_conditional372=tail_it_243!=((void*)0),                                                                                            _if_conditional372) {
                                                                                                tail_it_243->prev=head_prev_it_242;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                __result105__ = __result_obj__ = self;
                                                                                return __result105__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_233;
_Bool _while_condtional40;
struct list_item$1charp* prev_it_234;
struct list$1charp* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_233, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_234, 0, sizeof(struct list_item$1charp*));
                                                                                        it_233=self->head;
                                                                                        while(_while_condtional40=it_233!=((void*)0),                                                                                        _while_condtional40) {
                                                                                            prev_it_234=it_233;
                                                                                            it_233=it_233->next;
                                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        self->head=((void*)0);
                                                                                        self->tail=((void*)0);
                                                                                        self->len=0;
                                                                                        __result104__ = __result_obj__ = self;
                                                                                        return __result104__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional378;
char* result_247;
char* __result107__;
_Bool _if_conditional379;
char* __result108__;
char* result_248;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_247, 0, sizeof(char*));
memset(&result_248, 0, sizeof(char*));
                                                    if(_if_conditional378=self==((void*)0),                                                    _if_conditional378) {
                                                        memset(&result_247,0,sizeof(char*));
                                                        __result107__ = __result_obj__ = result_247;
                                                        return __result107__;
                                                    }
                                                    self->it=self->head;
                                                    if(self->it) {
                                                        __result108__ = __result_obj__ = self->it->item;
                                                        return __result108__;
                                                    }
                                                    memset(&result_248,0,sizeof(char*));
                                                    __result109__ = __result_obj__ = result_248;
                                                    return __result109__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    __result110__ = self==((void*)0)||self->it==((void*)0);
                                                    return __result110__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional380;
char* result_250;
char* __result111__;
_Bool _if_conditional381;
char* __result112__;
char* result_251;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_250, 0, sizeof(char*));
memset(&result_251, 0, sizeof(char*));
                                                    if(_if_conditional380=self==((void*)0)||self->it==((void*)0),                                                    _if_conditional380) {
                                                        memset(&result_250,0,sizeof(char*));
                                                        __result111__ = __result_obj__ = result_250;
                                                        return __result111__;
                                                    }
                                                    self->it=self->it->next;
                                                    if(self->it) {
                                                        __result112__ = __result_obj__ = self->it->item;
                                                        return __result112__;
                                                    }
                                                    memset(&result_251,0,sizeof(char*));
                                                    __result113__ = __result_obj__ = result_251;
                                                    return __result113__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional384;
void* right_value252;
struct list_item$1charp* litem_252;
_Bool _if_conditional385;
void* right_value253;
struct list_item$1charp* litem_253;
void* right_value254;
struct list_item$1charp* litem_254;
struct list$1charp* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
memset(&litem_252, 0, sizeof(struct list_item$1charp*));
right_value253 = (void*)0;
memset(&litem_253, 0, sizeof(struct list_item$1charp*));
right_value254 = (void*)0;
memset(&litem_254, 0, sizeof(struct list_item$1charp*));
                                                        if(_if_conditional384=self->len==0,                                                        _if_conditional384) {
                                                            litem_252=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value252=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "struct list_item$1charp"))));
                                                            come_call_finalizer2(list_item$1charpp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_252->prev=((void*)0);
                                                            litem_252->next=((void*)0);
                                                            litem_252->item=item;
                                                            self->tail=litem_252;
                                                            self->head=litem_252;
                                                        }
                                                        else {
                                                            if(_if_conditional385=self->len==1,                                                            _if_conditional385) {
                                                                litem_253=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value253=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "struct list_item$1charp"))));
                                                                come_call_finalizer2(list_item$1charpp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                litem_253->prev=self->head;
                                                                litem_253->next=((void*)0);
                                                                litem_253->item=item;
                                                                self->tail=litem_253;
                                                                self->head->next=litem_253;
                                                            }
                                                            else {
                                                                litem_254=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value254=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "struct list_item$1charp"))));
                                                                come_call_finalizer2(list_item$1charpp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                litem_254->prev=self->tail;
                                                                litem_254->next=((void*)0);
                                                                litem_254->item=item;
                                                                self->tail->next=litem_254;
                                                                self->tail=litem_254;
                                                            }
                                                        }
                                                        self->len++;
                                                        __result114__ = __result_obj__ = self;
                                                        return __result114__;
}

