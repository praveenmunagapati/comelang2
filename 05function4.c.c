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
struct list_item$1voidph
{
    void* item;
    struct list_item$1voidph* prev;
    struct list_item$1voidph* next;
};
struct list$1voidph
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
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

void come_push_stackframe(char* sname, int sline);

void come_pop_stackframe();

void stackframe();

void come_save_stackframe(char* sname, int sline);

void* come_null_check(void* mem, char* sname, int sline);

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
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1951, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1961, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1971, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1981, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1991, "struct smart_pointer$1long"))));
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
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

void skip_paren(struct sInfo* info){
void* __result_obj__;
int nest_5;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&nest_5, 0, sizeof(int));
    nest_5=0;
    while((_Bool)1) {
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_5++;
        }
        else {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                nest_5--;
                if(nest_5==0) {
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
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
int line_6;
void* right_value10;
void* right_value11;
struct buffer* fname_7;
_Bool _if_conditional11;
void* right_value12;
char* __dec_obj6;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&line_6, 0, sizeof(int));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&fname_7, 0, sizeof(struct buffer*));
right_value12 = (void*)0;
    while(strmemcmp(info->p,"__attribute__")) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(strmemcmp(info->p,"__extension__")) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
    while(*info->p==35) {
        skip_spaces_and_lf(info);
        info->p++;
        skip_spaces_and_lf(info);
        if(strmemcmp(info->p,"pragma")) {
            while(*info->p) {
                if(*info->p==10) {
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else {
            if(xisdigit(*info->p)) {
                line_6=0;
                fname_7=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 71, "struct buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                while(xisdigit(*info->p)) {
                    line_6=line_6*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        buffer_append_char(fname_7,*info->p);
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_6;
                __dec_obj6=info->sname;
                info->sname=(char*)come_increment_ref_count(((char*)(right_value12=buffer_to_string(fname_7))));
                __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                skip_spaces_and_lf(info);
                come_call_finalizer2(buffer_finalize,fname_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
    }
    while(strmemcmp(info->p,"__attribute__")) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(strmemcmp(info->p,"__extension__")) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
char c_8;
_Bool __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_8, 0, sizeof(char));
    c_8=*(info->p+strlen(str));
    __result7__ = strmemcmp(info->p,str)&&(c_8==59||c_8==32||c_8==9||c_8==10||c_8==10);
    return __result7__;
}

char* parse_word(struct sInfo* info){
void* __result_obj__;
void* right_value13;
void* right_value14;
struct buffer* buf_9;
void* right_value15;
_Bool _if_conditional13;
void* right_value16;
char* __result8__;
void* right_value17;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
right_value14 = (void*)0;
memset(&buf_9, 0, sizeof(struct buffer*));
right_value15 = (void*)0;
right_value16 = (void*)0;
right_value17 = (void*)0;
    buf_9=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_9,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(_if_conditional13=string_length(((char*)(right_value15=buffer_to_string(buf_9))))==0,    right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _if_conditional13) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result8__ = __result_obj__ = ((char*)(right_value16=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result8__;
    }
    __result9__ = __result_obj__ = ((char*)(right_value17=buffer_to_string(buf_9)));
    come_call_finalizer2(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result9__;
    come_call_finalizer2(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional14;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
    while((_Bool)1) {
        if(*info->p==32||*info->p==9) {
            info->p++;
        }
        else {
            if(*info->p==10) {
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
_Bool __result17__;
_Bool _if_conditional37;
_Bool __result18__;
_Bool __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_10, 0, sizeof(struct list$1sTypeph*));
memset(&it_13, 0, sizeof(struct sType*));
    for(    o2_saved_10=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_13=list$1sTypeph_begin((o2_saved_10));    !list$1sTypeph_end((o2_saved_10));    it_13=list$1sTypeph_next((o2_saved_10))    ){
        if(is_contained_generics_class(it_13,info)) {
            __result17__ = (_Bool)1;
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result17__;
        }
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(type->mClass->mGenerics) {
        __result18__ = (_Bool)1;
        return __result18__;
    }
    __result19__ = (_Bool)0;
    return __result19__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional16;
struct sType* result_11;
struct sType* __result10__;
_Bool _if_conditional17;
struct sType* __result11__;
struct sType* result_12;
struct sType* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_11, 0, sizeof(struct sType*));
memset(&result_12, 0, sizeof(struct sType*));
        if(self==((void*)0)) {
            memset(&result_11,0,sizeof(struct sType*));
            __result10__ = __result_obj__ = result_11;
            return __result10__;
        }
        self->it=self->head;
        if(self->it) {
            __result11__ = __result_obj__ = self->it->item;
            return __result11__;
        }
        memset(&result_12,0,sizeof(struct sType*));
        __result12__ = __result_obj__ = result_12;
        return __result12__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
        __result13__ = self==((void*)0)||self->it==((void*)0);
        return __result13__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional18;
struct sType* result_14;
struct sType* __result14__;
_Bool _if_conditional19;
struct sType* __result15__;
struct sType* result_15;
struct sType* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_14, 0, sizeof(struct sType*));
memset(&result_15, 0, sizeof(struct sType*));
        if(self==((void*)0)||self->it==((void*)0)) {
            memset(&result_14,0,sizeof(struct sType*));
            __result14__ = __result_obj__ = result_14;
            return __result14__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result15__ = __result_obj__ = self->it->item;
            return __result15__;
        }
        memset(&result_15,0,sizeof(struct sType*));
        __result16__ = __result_obj__ = result_15;
        return __result16__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_16;
struct list_item$1sTypeph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1sTypeph*));
                it_16=self->head;
                while(it_16!=((void*)0)) {
                    prev_it_17=it_16;
                    it_16=it_16->next;
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
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
                                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
                                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
                                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
                                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_18;
struct list_item$1sNodeph* prev_it_19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_19, 0, sizeof(struct list_item$1sNodeph*));
                                        it_18=self->head;
                                        while(it_18!=((void*)0)) {
                                            prev_it_19=it_18;
                                            it_18=it_18->next;
                                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(self!=((void*)0)&&self->item!=((void*)0)) {
                                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_20;
struct list_item$1charph* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charph*));
                                        it_20=self->head;
                                        while(it_20!=((void*)0)) {
                                            prev_it_21=it_20;
                                            it_20=it_20->next;
                                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(self!=((void*)0)&&self->item!=((void*)0)) {
                                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info){
void* __result_obj__;
void* right_value18;
void* right_value19;
struct list$1sTypeph* param_types_22;
void* right_value20;
void* right_value21;
struct list$1charph* param_names_23;
void* right_value22;
void* right_value23;
struct list$1charph* param_default_parametors_24;
_Bool var_args_25;
_Bool void_param_26;
char* p_27;
int sline_28;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
void* right_value24;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_29;
char* param_name_30;
_Bool err_31;
_Bool _if_conditional46;
void* right_value25;
void* right_value26;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result23__;
void* right_value27;
struct sType* param_type2_32;
void* right_value65;
void* right_value69;
_Bool _if_conditional121;
char* p_57;
_Bool no_comma_58;
void* right_value70;
struct sNode* node_59;
char* p2_60;
void* right_value71;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
void* right_value72;
void* right_value73;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
right_value19 = (void*)0;
memset(&param_types_22, 0, sizeof(struct list$1sTypeph*));
right_value20 = (void*)0;
right_value21 = (void*)0;
memset(&param_names_23, 0, sizeof(struct list$1charph*));
right_value22 = (void*)0;
right_value23 = (void*)0;
memset(&param_default_parametors_24, 0, sizeof(struct list$1charph*));
memset(&var_args_25, 0, sizeof(_Bool));
memset(&void_param_26, 0, sizeof(_Bool));
memset(&p_27, 0, sizeof(char*));
memset(&sline_28, 0, sizeof(int));
right_value24 = (void*)0;
memset(&param_type_29, 0, sizeof(struct sType*));
memset(&param_name_30, 0, sizeof(char*));
memset(&err_31, 0, sizeof(_Bool));
memset(&param_type_29, 0, sizeof(struct sType*));
memset(&param_name_30, 0, sizeof(char*));
memset(&err_31, 0, sizeof(_Bool));
right_value25 = (void*)0;
right_value26 = (void*)0;
right_value27 = (void*)0;
memset(&param_type2_32, 0, sizeof(struct sType*));
right_value65 = (void*)0;
right_value69 = (void*)0;
memset(&p_57, 0, sizeof(char*));
memset(&no_comma_58, 0, sizeof(_Bool));
right_value70 = (void*)0;
memset(&node_59, 0, sizeof(struct sNode*));
memset(&p2_60, 0, sizeof(char*));
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
    param_types_22=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value19=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value18=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 196, "struct list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_names_23=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value21=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value20=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 197, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value23=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value22=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 198, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    var_args_25=(_Bool)0;
    expected_next_character(40,info);
    void_param_26=(_Bool)0;
    {
        p_27=info->p;
        sline_28=info->sline;
        if(strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                void_param_26=(_Bool)1;
            }
        }
        info->p=p_27;
        info->sline=sline_28;
    }
    if(void_param_26) {
        if(strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value24=parse_type(info,(_Bool)1,(_Bool)0)));
            param_type_29=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_30=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_31=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(!err_31) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result23__ = __result_obj__ = ((struct tuple4$4voidpvoidpvoidpbool*)(right_value26=tuple4$4voidpvoidpvoidpbool_initialize((struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value25=(struct tuple4$4voidpvoidpvoidpbool*)come_calloc(1, sizeof(struct tuple4$4voidpvoidpvoidpbool)*(1), "05function4.c", 247, "struct tuple4$4voidpvoidpvoidpbool")))),((void*)0),((void*)0),((void*)0),(_Bool)0)));
                come_call_finalizer2(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                param_name_30 = come_decrement_ref_count2(param_name_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value25 = come_decrement_ref_count2(right_value25, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple4$4voidpvoidpvoidpboolp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result23__;
            }
            param_type2_32=(struct sType*)come_increment_ref_count(((struct sType*)(right_value27=solve_generics(param_type_29,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_type2_32->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_22,(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(param_type2_32)))));
            come_call_finalizer2(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(param_names_23,(char*)come_increment_ref_count(((char*)(right_value69=string_clone(param_name_30)))));
            right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(*info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_57=info->p;
                no_comma_58=info->no_comma;
                info->no_comma=(_Bool)1;
                node_59=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value70=expression_v13(info))));
                if(right_value70) { right_value70 = come_decrement_ref_count2(right_value70, ((struct sNode*)right_value70)->finalize, ((struct sNode*)right_value70)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_58;
                p2_60=info->p;
                char buf_61[p2_60-p_57+1];
                memset(&buf_61, 0, sizeof(char)                *(p2_60-p_57+1)                );
                memcpy(buf_61,p_57,p2_60-p_57);
                buf_61[p2_60-p_57]=0;
                list$1charph_push_back(param_default_parametors_24,(char*)come_increment_ref_count(((char*)(right_value71=__builtin_string(buf_61)))));
                right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(node_59) { node_59 = come_decrement_ref_count2(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_24,((void*)0));
            }
            parse_sharp_v5(info);
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(strmemcmp(info->p,"...")) {
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
                if(*info->p==41) {
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
    __result43__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value73=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value72=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 307, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_22),(struct list$1charph*)come_increment_ref_count(param_names_23),(struct list$1charph*)come_increment_ref_count(param_default_parametors_24),var_args_25)));
    come_call_finalizer2(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result43__;
    come_call_finalizer2(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result20__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result20__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result21__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional44;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4){
void* __result_obj__;
struct tuple4$4voidpvoidpvoidpbool* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->v1=v1;
                    self->v2=v2;
                    self->v3=v3;
                    self->v4=v4;
                    __result22__ = __result_obj__ = self;
                    come_call_finalizer2(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result22__;
                    come_call_finalizer2(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional47;
void* right_value28;
struct list_item$1sTypeph* litem_33;
struct sType* __dec_obj7;
_Bool _if_conditional48;
void* right_value29;
struct list_item$1sTypeph* litem_34;
struct sType* __dec_obj8;
void* right_value30;
struct list_item$1sTypeph* litem_35;
struct sType* __dec_obj9;
struct list$1sTypeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value28 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1sTypeph*));
right_value29 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1sTypeph*));
right_value30 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1sTypeph*));
                if(self->len==0) {
                    litem_33=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value28=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 225, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_33->prev=((void*)0);
                    litem_33->next=((void*)0);
                    __dec_obj7=litem_33->item;
                    litem_33->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_33;
                    self->head=litem_33;
                }
                else {
                    if(self->len==1) {
                        litem_34=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value29=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 235, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_34->prev=self->head;
                        litem_34->next=((void*)0);
                        __dec_obj8=litem_34->item;
                        litem_34->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_34;
                        self->head->next=litem_34;
                    }
                    else {
                        litem_35=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value30=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 245, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                __result24__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result24__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional49;
struct sType* __result25__;
void* right_value31;
struct sType* result_36;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value34;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional55;
void* right_value35;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional56;
void* right_value36;
char* __dec_obj13;
_Bool _if_conditional57;
void* right_value43;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional61;
void* right_value51;
struct list$1sNodeph* __dec_obj21;
_Bool _if_conditional74;
_Bool _if_conditional75;
void* right_value52;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional76;
void* right_value59;
struct list$1charph* __dec_obj26;
_Bool _if_conditional80;
void* right_value60;
struct tuple1$1sTypeph* __dec_obj27;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value61;
struct sNode* __dec_obj28;
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
_Bool _if_conditional105;
_Bool _if_conditional106;
void* right_value62;
struct sNode* __dec_obj29;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value63;
char* __dec_obj30;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value64;
char* __dec_obj31;
struct sType* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
memset(&result_36, 0, sizeof(struct sType*));
right_value34 = (void*)0;
right_value35 = (void*)0;
right_value36 = (void*)0;
right_value43 = (void*)0;
right_value51 = (void*)0;
right_value52 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
                if(self==(void*)0) {
                    __result25__ = __result_obj__ = (void*)0;
                    return __result25__;
                }
                result_36=(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                come_call_finalizer2(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)) {
                    result_36->mClass=self->mClass;
                }
                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                    __dec_obj11=result_36->mNoSolvedGenericsType;
                    result_36->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value34=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
                    __dec_obj12=result_36->mOriginalLoadVarType;
                    result_36->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value35=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                    __dec_obj13=result_36->mGenericsName;
                    result_36->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value36=string_clone(self->mGenericsName))));
                    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                    __dec_obj17=result_36->mGenericsTypes;
                    result_36->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value43=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj21=result_36->mArrayNum;
                    result_36->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value51=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)) {
                    result_36->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj22=result_36->mParamTypes;
                    result_36->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value52=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj26=result_36->mParamNames;
                    result_36->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value59=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj27=result_36->mResultType;
                    result_36->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)) {
                    result_36->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
                    __dec_obj28=result_36->mAlignas;
                    result_36->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value61=sNode_clone(self->mAlignas))));
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value61) { right_value61 = come_decrement_ref_count2(right_value61, ((struct sNode*)right_value61)->finalize, ((struct sNode*)right_value61)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(self!=((void*)0)) {
                    result_36->mUnsigned=self->mUnsigned;
                }
                if(self!=((void*)0)) {
                    result_36->mShort=self->mShort;
                }
                if(self!=((void*)0)) {
                    result_36->mLong=self->mLong;
                }
                if(self!=((void*)0)) {
                    result_36->mLongLong=self->mLongLong;
                }
                if(self!=((void*)0)) {
                    result_36->mConstant=self->mConstant;
                }
                if(self!=((void*)0)) {
                    result_36->mRegister=self->mRegister;
                }
                if(self!=((void*)0)) {
                    result_36->mVolatile=self->mVolatile;
                }
                if(self!=((void*)0)) {
                    result_36->mStatic=self->mStatic;
                }
                if(self!=((void*)0)) {
                    result_36->mExtern=self->mExtern;
                }
                if(self!=((void*)0)) {
                    result_36->mRestrict=self->mRestrict;
                }
                if(self!=((void*)0)) {
                    result_36->mImmutable=self->mImmutable;
                }
                if(self!=((void*)0)) {
                    result_36->mHeap=self->mHeap;
                }
                if(self!=((void*)0)) {
                    result_36->mDummyHeap=self->mDummyHeap;
                }
                if(self!=((void*)0)) {
                    result_36->mDelegate=self->mDelegate;
                }
                if(self!=((void*)0)) {
                    result_36->mShare=self->mShare;
                }
                if(self!=((void*)0)) {
                    result_36->mClone=self->mClone;
                }
                if(self!=((void*)0)) {
                    result_36->mNoHeap=self->mNoHeap;
                }
                if(self!=((void*)0)) {
                    result_36->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(self!=((void*)0)) {
                    result_36->mRefference=self->mRefference;
                }
                if(self!=((void*)0)) {
                    result_36->mException=self->mException;
                }
                if(self!=((void*)0)) {
                    result_36->mPointerNum=self->mPointerNum;
                }
                if(self!=((void*)0)) {
                    result_36->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(self!=((void*)0)) {
                    result_36->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
                    __dec_obj29=result_36->mSizeNum;
                    result_36->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value62=sNode_clone(self->mSizeNum))));
                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value62) { right_value62 = come_decrement_ref_count2(right_value62, ((struct sNode*)right_value62)->finalize, ((struct sNode*)right_value62)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(self!=((void*)0)) {
                    result_36->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(self!=((void*)0)) {
                    result_36->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                    __dec_obj30=result_36->mOriginalTypeName;
                    result_36->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value63=string_clone(self->mOriginalTypeName))));
                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)) {
                    result_36->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(self!=((void*)0)) {
                    result_36->mFunctionParam=self->mFunctionParam;
                }
                if(self!=((void*)0)) {
                    result_36->mAllocaValue=self->mAllocaValue;
                }
                if(self!=((void*)0)) {
                    result_36->mGenericsStruct=self->mGenericsStruct;
                }
                if(self!=((void*)0)) {
                    result_36->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(self!=((void*)0)) {
                    result_36->mComeMemCore=self->mComeMemCore;
                }
                if(self!=((void*)0)) {
                    result_36->mInline=self->mInline;
                }
                if(self!=((void*)0)) {
                    result_36->mNullValue=self->mNullValue;
                }
                if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
                    __dec_obj31=result_36->mAsmName;
                    result_36->mAsmName=(char*)come_increment_ref_count(((char*)(right_value64=string_clone(self->mAsmName))));
                    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result40__ = __result_obj__ = result_36;
                come_call_finalizer2(sType_finalize,result_36, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(sType_finalize,result_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional52;
struct tuple1$1sTypeph* __result26__;
void* right_value32;
struct tuple1$1sTypeph* result_37;
_Bool _if_conditional54;
void* right_value33;
struct sType* __dec_obj10;
struct tuple1$1sTypeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
memset(&result_37, 0, sizeof(struct tuple1$1sTypeph*));
right_value33 = (void*)0;
                        if(self==(void*)0) {
                            __result26__ = __result_obj__ = (void*)0;
                            return __result26__;
                        }
                        result_37=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value32=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            __dec_obj10=result_37->v1;
                            result_37->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value33=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result27__ = __result_obj__ = result_37;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_37, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result27__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional53;
memset(&__result_obj__, 0, sizeof(void*));
                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional58;
struct list$1sTypeph* __result28__;
void* right_value37;
void* right_value38;
struct list$1sTypeph* result_38;
struct list_item$1sTypeph* it_39;
void* right_value42;
struct list$1sTypeph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
right_value38 = (void*)0;
memset(&result_38, 0, sizeof(struct list$1sTypeph*));
memset(&it_39, 0, sizeof(struct list_item$1sTypeph*));
right_value42 = (void*)0;
                        if(self==((void*)0)) {
                            __result28__ = __result_obj__ = ((void*)0);
                            return __result28__;
                        }
                        result_38=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value38=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value37=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_39=self->head;
                        while(it_39!=((void*)0)) {
                            list$1sTypeph_add(result_38,(struct sType*)come_increment_ref_count(((struct sType*)(right_value42=sType_clone(it_39->item)))));
                            come_call_finalizer2(sType_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            it_39=it_39->next;
                        }
                        __result30__ = __result_obj__ = result_38;
                        come_call_finalizer2(list$1sTypephp_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result30__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional59;
void* right_value39;
struct list_item$1sTypeph* litem_40;
struct sType* __dec_obj14;
_Bool _if_conditional60;
void* right_value40;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj15;
void* right_value41;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj16;
struct list$1sTypeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
memset(&litem_40, 0, sizeof(struct list_item$1sTypeph*));
right_value40 = (void*)0;
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
right_value41 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
                                if(self->len==0) {
                                    litem_40=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value39=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_40->prev=((void*)0);
                                    litem_40->next=((void*)0);
                                    __dec_obj14=litem_40->item;
                                    litem_40->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_40;
                                    self->head=litem_40;
                                }
                                else {
                                    if(self->len==1) {
                                        litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value40=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_41->prev=self->head;
                                        litem_41->next=((void*)0);
                                        __dec_obj15=litem_41->item;
                                        litem_41->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail=litem_41;
                                        self->head->next=litem_41;
                                    }
                                    else {
                                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value41=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                __result29__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result29__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional62;
struct list$1sNodeph* __result31__;
void* right_value44;
void* right_value45;
struct list$1sNodeph* result_43;
struct list_item$1sNodeph* it_44;
void* right_value50;
struct list$1sNodeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
right_value45 = (void*)0;
memset(&result_43, 0, sizeof(struct list$1sNodeph*));
memset(&it_44, 0, sizeof(struct list_item$1sNodeph*));
right_value50 = (void*)0;
                        if(self==((void*)0)) {
                            __result31__ = __result_obj__ = ((void*)0);
                            return __result31__;
                        }
                        result_43=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value45=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value44=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_44=self->head;
                        while(it_44!=((void*)0)) {
                            list$1sNodeph_add(result_43,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value50=sNode_clone(it_44->item)))));
                            if(right_value50) { right_value50 = come_decrement_ref_count2(right_value50, ((struct sNode*)right_value50)->finalize, ((struct sNode*)right_value50)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_44=it_44->next;
                        }
                        __result36__ = __result_obj__ = result_43;
                        come_call_finalizer2(list$1sNodephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result36__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result32__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result32__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional63;
void* right_value46;
struct list_item$1sNodeph* litem_45;
struct sNode* __dec_obj18;
_Bool _if_conditional64;
void* right_value47;
struct list_item$1sNodeph* litem_46;
struct sNode* __dec_obj19;
void* right_value48;
struct list_item$1sNodeph* litem_47;
struct sNode* __dec_obj20;
struct list$1sNodeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sNodeph*));
right_value47 = (void*)0;
memset(&litem_46, 0, sizeof(struct list_item$1sNodeph*));
right_value48 = (void*)0;
memset(&litem_47, 0, sizeof(struct list_item$1sNodeph*));
                                if(self->len==0) {
                                    litem_45=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value46=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_45->prev=((void*)0);
                                    litem_45->next=((void*)0);
                                    __dec_obj18=litem_45->item;
                                    litem_45->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_45;
                                    self->head=litem_45;
                                }
                                else {
                                    if(self->len==1) {
                                        litem_46=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value47=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_46->prev=self->head;
                                        litem_46->next=((void*)0);
                                        __dec_obj19=litem_46->item;
                                        litem_46->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail=litem_46;
                                        self->head->next=litem_46;
                                    }
                                    else {
                                        litem_47=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value48=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                __result33__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result33__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional65;
struct sNode* __result34__;
void* right_value49;
struct sNode* result_48;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct sNode* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
memset(&result_48, 0, sizeof(struct sNode*));
                                if(self==(void*)0) {
                                    __result34__ = __result_obj__ = (void*)0;
                                    return __result34__;
                                }
                                result_48=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                                if(right_value49) { right_value49 = come_decrement_ref_count2(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                    result_48->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(self!=((void*)0)) {
                                    result_48->finalize=self->finalize;
                                }
                                if(self!=((void*)0)) {
                                    result_48->clone=self->clone;
                                }
                                if(self!=((void*)0)) {
                                    result_48->compile=self->compile;
                                }
                                if(self!=((void*)0)) {
                                    result_48->sline=self->sline;
                                }
                                if(self!=((void*)0)) {
                                    result_48->sname=self->sname;
                                }
                                if(self!=((void*)0)) {
                                    result_48->terminated=self->terminated;
                                }
                                if(self!=((void*)0)) {
                                    result_48->kind=self->kind;
                                }
                                __result35__ = __result_obj__ = result_48;
                                if(result_48) { result_48 = come_decrement_ref_count2(result_48, ((struct sNode*)result_48)->finalize, ((struct sNode*)result_48)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result35__;
                                if(result_48) { result_48 = come_decrement_ref_count2(result_48, ((struct sNode*)result_48)->finalize, ((struct sNode*)result_48)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional77;
struct list$1charph* __result37__;
void* right_value53;
void* right_value54;
struct list$1charph* result_49;
struct list_item$1charph* it_50;
void* right_value58;
struct list$1charph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&result_49, 0, sizeof(struct list$1charph*));
memset(&it_50, 0, sizeof(struct list_item$1charph*));
right_value58 = (void*)0;
                        if(self==((void*)0)) {
                            __result37__ = __result_obj__ = ((void*)0);
                            return __result37__;
                        }
                        result_49=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_50=self->head;
                        while(it_50!=((void*)0)) {
                            list$1charph_add(result_49,(char*)come_increment_ref_count(((char*)(right_value58=string_clone(it_50->item)))));
                            right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_50=it_50->next;
                        }
                        __result39__ = __result_obj__ = result_49;
                        come_call_finalizer2(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result39__;
                        come_call_finalizer2(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional78;
void* right_value55;
struct list_item$1charph* litem_51;
char* __dec_obj23;
_Bool _if_conditional79;
void* right_value56;
struct list_item$1charph* litem_52;
char* __dec_obj24;
void* right_value57;
struct list_item$1charph* litem_53;
char* __dec_obj25;
struct list$1charph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
right_value56 = (void*)0;
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
right_value57 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
                                if(self->len==0) {
                                    litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value55=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_51->prev=((void*)0);
                                    litem_51->next=((void*)0);
                                    __dec_obj23=litem_51->item;
                                    litem_51->item=(char*)come_increment_ref_count(item);
                                    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_51;
                                    self->head=litem_51;
                                }
                                else {
                                    if(self->len==1) {
                                        litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value56=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_52->prev=self->head;
                                        litem_52->next=((void*)0);
                                        __dec_obj24=litem_52->item;
                                        litem_52->item=(char*)come_increment_ref_count(item);
                                        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail=litem_52;
                                        self->head->next=litem_52;
                                    }
                                    else {
                                        litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value57=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                __result38__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result38__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional119;
void* right_value66;
struct list_item$1charph* litem_54;
char* __dec_obj32;
_Bool _if_conditional120;
void* right_value67;
struct list_item$1charph* litem_55;
char* __dec_obj33;
void* right_value68;
struct list_item$1charph* litem_56;
char* __dec_obj34;
struct list$1charph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
right_value67 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
right_value68 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
                if(self->len==0) {
                    litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value66=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 225, "struct list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_54->prev=((void*)0);
                    litem_54->next=((void*)0);
                    __dec_obj32=litem_54->item;
                    litem_54->item=(char*)come_increment_ref_count(item);
                    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_54;
                    self->head=litem_54;
                }
                else {
                    if(self->len==1) {
                        litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value67=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 235, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_55->prev=self->head;
                        litem_55->next=((void*)0);
                        __dec_obj33=litem_55->item;
                        litem_55->item=(char*)come_increment_ref_count(item);
                        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_55;
                        self->head->next=litem_55;
                    }
                    else {
                        litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value68=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 245, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                __result41__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result41__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct list$1sTypeph* __dec_obj35;
struct list$1charph* __dec_obj36;
struct list$1charph* __dec_obj37;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result42__;
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
        __result42__ = __result_obj__ = self;
        come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result42__;
        come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->v3!=((void*)0)) {
                come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info){
void* __result_obj__;
void* right_value74;
struct sType* right_type2_62;
struct sType* left_no_solved_generics_type_63;
struct sType* right_no_solved_generics_type_64;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
int i_65;
void* right_value75;
void* right_value76;
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
void* right_value77;
void* right_value78;
struct buffer* buf2_69;
void* right_value79;
void* right_value80;
void* right_value81;
void* right_value82;
void* right_value83;
char* __dec_obj38;
void* right_value84;
struct sType* __dec_obj39;
void* right_value85;
struct sType* __dec_obj40;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
void* right_value86;
char* method_name_70;
void* right_value87;
_Bool _if_conditional171;
struct sType* obj_type_73;
_Bool _if_conditional172;
struct sType* obj_type2_74;
void* right_value88;
void* right_value89;
char* __dec_obj41;
void* right_value90;
void* right_value91;
struct buffer* buf2_75;
void* right_value92;
void* right_value93;
struct sType* type_76;
void* right_value94;
void* right_value95;
char* __dec_obj42;
void* right_value96;
struct sType* __dec_obj43;
void* right_value97;
struct sType* __dec_obj44;
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
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
memset(&right_type2_62, 0, sizeof(struct sType*));
memset(&left_no_solved_generics_type_63, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_64, 0, sizeof(struct sType*));
memset(&i_65, 0, sizeof(int));
right_value75 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
memset(&buf2_69, 0, sizeof(struct buffer*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&method_name_70, 0, sizeof(char*));
right_value87 = (void*)0;
memset(&obj_type_73, 0, sizeof(struct sType*));
memset(&obj_type2_74, 0, sizeof(struct sType*));
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&buf2_75, 0, sizeof(struct buffer*));
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&type_76, 0, sizeof(struct sType*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
    right_type2_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(right_type))));
    come_call_finalizer2(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    left_no_solved_generics_type_63=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_64=right_type2_62->mNoSolvedGenericsType->v1;
    if(left_no_solved_generics_type_63&&right_no_solved_generics_type_64) {
        if(list$1sTypeph_length(left_no_solved_generics_type_63->mGenericsTypes)>0) {
            if(list$1sTypeph_length(left_no_solved_generics_type_63->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_64->mGenericsTypes)) {
                err_msg(info,"generics type parametor number error");
                printf("left type generics type parametor number is %d\n",list$1sTypeph_length(left_no_solved_generics_type_63->mGenericsTypes));
                printf("right type generics type parametor number is %d\n",list$1sTypeph_length(right_no_solved_generics_type_64->mGenericsTypes));
                exit(2);
            }
            for(            i_65=0;            i_65<list$1sTypeph_length(left_no_solved_generics_type_63->mGenericsTypes);            i_65++            ){
                check_assign_type(msg,((struct sType*)(right_value75=list$1sTypephp_operator_load_element(left_no_solved_generics_type_63->mGenericsTypes,i_65))),((struct sType*)(right_value76=list$1sTypephp_operator_load_element(right_no_solved_generics_type_64->mGenericsTypes,i_65))),come_value,(_Bool)1,info);
                come_call_finalizer2(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            check_assign_type(msg,left_no_solved_generics_type_63,right_no_solved_generics_type_64,come_value,(_Bool)0,info);
        }
    }
    else {
        if(check_no_pointer) {
            if(left_type->mPointerNum>0) {
                if(right_type2_62->mPointerNum>0) {
                    if(string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_62->mClass->mName,"void")) {
                    }
                    else {
                        if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list")) {
                        }
                        else {
                            if(string_operator_not_equals(left_type->mClass->mName,right_type2_62->mClass->mName)) {
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
                if(left_type->mPointerNum==0&&right_type2_62->mPointerNum>0) {
                    err_msg(info,"type error3");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                    exit(2);
                }
                else {
                    if(string_operator_not_equals(left_type->mClass->mName,right_type2_62->mClass->mName)) {
                        err_msg(info,"type error4");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                        exit(2);
                    }
                }
            }
        }
        else {
            if(!left_type->mNullValue&&right_type2_62->mNullValue) {
                if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_62->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list")) {
                    }
                    else {
                        if(string_operator_equals(right_type2_62->mClass->mName,"void")&&right_type2_62->mPointerNum==0) {
                            err_msg(info,"type error6");
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                            exit(2);
                        }
                        else {
                            buf2_69=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value78=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value77=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 387, "struct buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            buffer_append_str(buf2_69,((char*)(right_value82=xsprintf("come_null_check(\%s, \"\%s\", \%s)",((char*)(right_value79=string_to_string(come_value->c_value))),((char*)(right_value80=string_to_string(info->sname))),((char*)(right_value81=int_to_string(info->sline)))))));
                            right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj38=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value83=buffer_to_string(buf2_69))));
                            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj39=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(left_type))));
                            come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_value->var=((void*)0);
                            __dec_obj40=right_type2_62;
                            right_type2_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(left_type))));
                            come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,buf2_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            else {
                if(string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1) {
                    if(string_operator_equals(right_type2_62->mClass->mName,"char")&&right_type2_62->mPointerNum==1) {
                    }
                    else {
                        if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_62->mClass->mName,"__builtin_va_list")) {
                        }
                        else {
                            if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list")) {
                            }
                            else {
                                if(string_operator_equals(right_type2_62->mClass->mName,"lambda")) {
                                    err_msg(info,"type error6");
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                    exit(2);
                                }
                                else {
                                    if(string_operator_equals(right_type2_62->mClass->mName,"void")&&right_type2_62->mPointerNum>0) {
                                    }
                                    else {
                                        if(string_operator_equals(right_type2_62->mClass->mName,"void")) {
                                            err_msg(info,"type error6");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                            exit(2);
                                        }
                                        else {
                                            method_name_70=(char*)come_increment_ref_count(((char*)(right_value86=create_method_name(right_type2_62,(_Bool)0,"to_string",info))));
                                            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional171=((struct sFun*)(right_value87=map$2charphsFunph_at(info->funcs,method_name_70,((void*)0))))==((void*)0),                                            come_call_finalizer2(sFun_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                                            _if_conditional171) {
                                                obj_type_73=right_type2_62->mNoSolvedGenericsType->v1;
                                                if(obj_type_73&&list$1sTypeph_length(obj_type_73->mGenericsTypes)>0) {
                                                    obj_type2_74=right_type2_62;
                                                    __dec_obj41=method_name_70;
                                                    method_name_70=(char*)come_increment_ref_count(((char*)(right_value89=make_generics_function(obj_type2_74,(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string("to_string")))),info))));
                                                    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    err_msg(info,"require to_string implementation(%s)",right_type2_62->mClass->mName);
                                                    exit(1);
                                                }
                                            }
                                            buf2_75=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value91=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value90=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 434, "struct buffer"))))))));
                                            come_call_finalizer2(buffer_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(buffer_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            buffer_append_str(buf2_75,method_name_70);
                                            buffer_append_str(buf2_75,"(");
                                            buffer_append_str(buf2_75,come_value->c_value);
                                            buffer_append_str(buf2_75,")");
                                            type_76=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value92=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 441, "struct sType")))),"char*",(_Bool)0,info))));
                                            come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            type_76->mHeap=(_Bool)1;
                                            __dec_obj42=come_value->c_value;
                                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value95=append_object_to_right_values(((char*)(right_value94=buffer_to_string(buf2_75))),(struct sType*)come_increment_ref_count(type_76),info))));
                                            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            __dec_obj43=come_value->type;
                                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_clone(type_76))));
                                            come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_value->var=((void*)0);
                                            __dec_obj44=right_type2_62;
                                            right_type2_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(type_76))));
                                            come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            method_name_70 = come_decrement_ref_count2(method_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,buf2_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,type_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else {
                    if(left_type->mPointerNum>0) {
                        if(right_type2_62->mPointerNum>0) {
                            if(string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_62->mClass->mName,"void")) {
                            }
                            else {
                                if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list")) {
                                }
                                else {
                                    if(string_operator_not_equals(left_type->mClass->mName,right_type2_62->mClass->mName)) {
                                        err_msg(info,"type error5");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                        exit(2);
                                    }
                                    else {
                                        if(left_type->mPointerNum!=right_type2_62->mPointerNum) {
                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_62->mClass->mName,right_type2_62->mPointerNum);
                                        }
                                        else {
                                            if(list$1sNodeph_length(right_type2_62->mArrayNum)>0) {
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
                            if(string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_62->mClass->mName,"void")) {
                            }
                            else {
                                if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_62->mClass->mName,"va_list")) {
                                }
                                else {
                                    if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_62->mClass->mName,"__builtin_va_list")) {
                                    }
                                    else {
                                        if(!(string_operator_equals(right_type2_62->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_62->mPointerNum==0) {
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
    come_call_finalizer2(sType_finalize,right_type2_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
            __result44__ = self->len;
            return __result44__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional131;
struct list_item$1sTypeph* it_66;
int i_67;
_Bool _if_conditional132;
struct sType* __result45__;
struct sType* default_value_68;
struct sType* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_66, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_67, 0, sizeof(int));
memset(&default_value_68, 0, sizeof(struct sType*));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_66=self->head;
                    i_67=0;
                    while(it_66!=((void*)0)) {
                        if(position==i_67) {
                            __result45__ = __result_obj__ = it_66->item;
                            return __result45__;
                        }
                        it_66=it_66->next;
                        i_67++;
                    }
                    memset(&default_value_68,0,sizeof(struct sType*));
                    __result46__ = __result_obj__ = default_value_68;
                    come_call_finalizer2(sType_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result46__;
                    come_call_finalizer2(sType_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_71;
unsigned int it_72;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct sFun* __result47__;
_Bool _if_conditional169;
_Bool _if_conditional170;
struct sFun* __result48__;
struct sFun* __result49__;
struct sFun* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_71, 0, sizeof(unsigned int));
memset(&it_72, 0, sizeof(unsigned int));
                                                hash_71=string_get_hash_key(((char*)key))%self->size;
                                                it_72=hash_71;
                                                while((_Bool)1) {
                                                    if(self->item_existance[it_72]) {
                                                        if(string_equals(self->keys[it_72],key)) {
                                                            __result47__ = __result_obj__ = self->items[it_72];
                                                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result47__;
                                                        }
                                                        it_72++;
                                                        if(it_72>=self->size) {
                                                            it_72=0;
                                                        }
                                                        else {
                                                            if(it_72==hash_71) {
                                                                __result48__ = __result_obj__ = default_value;
                                                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result48__;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        __result49__ = __result_obj__ = default_value;
                                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result49__;
                                                    }
                                                }
                                                __result50__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result50__;
                                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
                                                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
                                                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                                                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(self!=((void*)0)&&self->mSource!=((void*)0)) {
                                                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
                                                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
                                                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
                                                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
                                                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
                                                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional161;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                                                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                                                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
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
void* right_value98;
struct sType* result_type_77;
_Bool _if_conditional184;
char* var_name_78;
char* p_79;
int sline_80;
_Bool _if_conditional185;
void* right_value99;
char* word_81;
_Bool _if_conditional186;
_Bool between_brace_82;
char* p_83;
int sline_84;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value100;
char* word_85;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
char* p_86;
int sline_87;
_Bool _if_conditional192;
void* right_value101;
char* word_88;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
void* right_value102;
char* __dec_obj45;
static int num_anonymous_var_name_89=0;
void* right_value103;
char* __dec_obj46;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool no_comma_90;
void* right_value104;
struct sNode* node_91;
struct sNode* __dec_obj47;
char* p_92;
int sline_93;
_Bool _if_conditional198;
void* right_value105;
char* word_94;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value106;
struct sNode* node_95;
void* right_value110;
void* right_value111;
struct tuple2$2sTypephcharph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&result_type_77, 0, sizeof(struct sType*));
memset(&var_name_78, 0, sizeof(char*));
memset(&p_79, 0, sizeof(char*));
memset(&sline_80, 0, sizeof(int));
right_value99 = (void*)0;
memset(&word_81, 0, sizeof(char*));
memset(&between_brace_82, 0, sizeof(_Bool));
memset(&p_83, 0, sizeof(char*));
memset(&sline_84, 0, sizeof(int));
right_value100 = (void*)0;
memset(&word_85, 0, sizeof(char*));
memset(&p_86, 0, sizeof(char*));
memset(&sline_87, 0, sizeof(int));
right_value101 = (void*)0;
memset(&word_88, 0, sizeof(char*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&no_comma_90, 0, sizeof(_Bool));
right_value104 = (void*)0;
memset(&node_91, 0, sizeof(struct sNode*));
memset(&p_92, 0, sizeof(char*));
memset(&sline_93, 0, sizeof(int));
right_value105 = (void*)0;
memset(&word_94, 0, sizeof(char*));
right_value106 = (void*)0;
memset(&node_95, 0, sizeof(struct sNode*));
right_value110 = (void*)0;
right_value111 = (void*)0;
    result_type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(base_type_name))));
    come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(!first) {
        result_type_77->mPointerNum=0;
    }
    var_name_78=((void*)0);
    {
        p_79=info->p;
        sline_80=info->sline;
        if(xisalpha(*info->p)||*info->p==95) {
            word_81=(char*)come_increment_ref_count(((char*)(right_value99=parse_word(info))));
            right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(string_operator_equals(word_81,"const")||string_operator_equals(word_81,"__restrict")||string_operator_equals(word_81,"restrict")||string_operator_equals(word_81,"__user")||string_operator_equals(word_81,"volatile")||string_operator_equals(word_81,"_Nonnull")||string_operator_equals(word_81,"_Nullable")||string_operator_equals(word_81,"_Null_unspecified")||string_operator_equals(word_81,"__user")) {
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
    between_brace_82=(_Bool)0;
    {
        p_83=info->p;
        sline_84=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(xisalpha(*info->p)||*info->p==95) {
                word_85=(char*)come_increment_ref_count(((char*)(right_value100=parse_word(info))));
                right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(is_type_name(word_85,info)) {
                }
                else {
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p!=40) {
                            between_brace_82=(_Bool)1;
                        }
                    }
                }
                word_85 = come_decrement_ref_count2(word_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_83;
        info->sline=sline_84;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_86=info->p;
            sline_87=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_88=(char*)come_increment_ref_count(((char*)(right_value101=parse_word(info))));
                right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(string_operator_equals(word_88,"const")||string_operator_equals(word_88,"__restrict")||string_operator_equals(word_88,"restrict")||string_operator_equals(word_88,"__user")||string_operator_equals(word_88,"volatile")||string_operator_equals(word_88,"_Nonnull")||string_operator_equals(word_88,"_Nullable")||string_operator_equals(word_88,"_Null_unspecified")||string_operator_equals(word_88,"__user")) {
                }
                else {
                    info->p=p_86;
                    info->sline=sline_87;
                }
                word_88 = come_decrement_ref_count2(word_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_86;
                info->sline=sline_87;
            }
        }
        result_type_77->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(between_brace_82&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(xisalnum(*info->p)||*info->p==95) {
        __dec_obj45=var_name_78;
        var_name_78=(char*)come_increment_ref_count(((char*)(right_value102=parse_word(info))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        num_anonymous_var_name_89++;
        __dec_obj46=var_name_78;
        var_name_78=(char*)come_increment_ref_count(((char*)(right_value103=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_89))));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(between_brace_82&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(*info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_90=info->no_comma;
        info->no_comma=(_Bool)1;
        node_91=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=expression_v13(info))));
        if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_90;
        __dec_obj47=result_type_77->mSizeNum;
        result_type_77->mSizeNum=(struct sNode*)come_increment_ref_count(node_91);
        if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_91) { node_91 = come_decrement_ref_count2(node_91, ((struct sNode*)node_91)->finalize, ((struct sNode*)node_91)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_92=info->p;
            sline_93=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_94=(char*)come_increment_ref_count(((char*)(right_value105=parse_word(info))));
                right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(string_operator_equals(word_94,"const")||string_operator_equals(word_94,"__restrict")||string_operator_equals(word_94,"restrict")||string_operator_equals(word_94,"__user")||string_operator_equals(word_94,"volatile")||string_operator_equals(word_94,"_Nonnull")||string_operator_equals(word_94,"_Nullable")||string_operator_equals(word_94,"_Null_unspecified")||string_operator_equals(word_94,"__user")) {
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
        if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_77->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_95=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=expression_v13(info))));
        if(right_value106) { right_value106 = come_decrement_ref_count2(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1sNodeph_push_back(result_type_77->mArrayNum,(struct sNode*)come_increment_ref_count(node_95));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_95) { node_95 = come_decrement_ref_count2(node_95, ((struct sNode*)node_95)->finalize, ((struct sNode*)node_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result54__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value111=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value110=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 647, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_77),(char*)come_increment_ref_count(var_name_78))));
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_78 = come_decrement_ref_count2(var_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result54__;
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_78 = come_decrement_ref_count2(var_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional201;
void* right_value107;
struct list_item$1sNodeph* litem_96;
struct sNode* __dec_obj48;
_Bool _if_conditional202;
void* right_value108;
struct list_item$1sNodeph* litem_97;
struct sNode* __dec_obj49;
void* right_value109;
struct list_item$1sNodeph* litem_98;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1sNodeph*));
right_value108 = (void*)0;
memset(&litem_97, 0, sizeof(struct list_item$1sNodeph*));
right_value109 = (void*)0;
memset(&litem_98, 0, sizeof(struct list_item$1sNodeph*));
            if(self->len==0) {
                litem_96=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value107=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 225, "struct list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_96->prev=((void*)0);
                litem_96->next=((void*)0);
                __dec_obj48=litem_96->item;
                litem_96->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail=litem_96;
                self->head=litem_96;
            }
            else {
                if(self->len==1) {
                    litem_97=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value108=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 235, "struct list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_97->prev=self->head;
                    litem_97->next=((void*)0);
                    __dec_obj49=litem_97->item;
                    litem_97->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_97;
                    self->head->next=litem_97;
                }
                else {
                    litem_98=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value109=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 245, "struct list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_98->prev=self->tail;
                    litem_98->next=((void*)0);
                    __dec_obj50=litem_98->item;
                    litem_98->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail->next=litem_98;
                    self->tail=litem_98;
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
struct sType* __dec_obj51;
char* __dec_obj52;
struct tuple2$2sTypephcharph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj51=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj52=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
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
_Bool _if_conditional203;
_Bool _if_conditional204;
memset(&__result_obj__, 0, sizeof(void*));
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
char* p_99;
int sline_100;
_Bool _if_conditional205;
void* right_value112;
char* word_101;
_Bool _if_conditional206;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_99, 0, sizeof(char*));
memset(&sline_100, 0, sizeof(int));
right_value112 = (void*)0;
memset(&word_101, 0, sizeof(char*));
    p_99=info->p;
    sline_100=info->sline;
    if(xisalpha(*info->p)||*info->p==95) {
        word_101=(char*)come_increment_ref_count(((char*)(right_value112=parse_word(info))));
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(string_operator_equals(word_101,"const")||string_operator_equals(word_101,"__restrict")||string_operator_equals(word_101,"restrict")||string_operator_equals(word_101,"__user")||string_operator_equals(word_101,"volatile")||string_operator_equals(word_101,"_Nonnull")||string_operator_equals(word_101,"_Nullable")||string_operator_equals(word_101,"_Null_unspecified")||string_operator_equals(word_101,"__user")) {
        }
        else {
            info->p=p_99;
            info->sline=sline_100;
        }
        word_101 = come_decrement_ref_count2(word_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_99;
        info->sline=sline_100;
    }
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
void* __result_obj__;
char* head_102;
int head_sline_103;
void* right_value113;
char* type_name_104;
void* right_value114;
char* __dec_obj53;
_Bool constant_105;
_Bool static__106;
_Bool volatile__107;
_Bool register__108;
_Bool unsigned__109;
_Bool long__110;
_Bool long_long_111;
_Bool short__112;
_Bool restrict__113;
_Bool struct__114;
_Bool union__115;
_Bool enum__116;
_Bool no_heap_117;
_Bool extern__118;
_Bool inline__119;
_Bool come_mem_core__120;
struct sNode* alignas__121;
_Bool anonymous_type_122;
_Bool anonymous_name_123;
_Bool _if_conditional207;
_Bool _if_conditional208;
char* p_124;
int sline_125;
void* right_value115;
_Bool _if_conditional209;
void* right_value116;
char* __dec_obj54;
void* right_value117;
char* __dec_obj55;
void* right_value118;
char* __dec_obj56;
_Bool _if_conditional210;
char* p_126;
int sline_127;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
void* right_value119;
void* right_value120;
struct tuple3$3sTypephcharphbool* __result56__;
_Bool _if_conditional214;
char* p_128;
int sline_129;
void* right_value121;
_Bool _if_conditional215;
void* right_value122;
void* right_value123;
struct tuple3$3sTypephcharphbool* __result57__;
_Bool _if_conditional216;
_Bool _if_conditional217;
char* p_130;
int sline_131;
void* right_value124;
_Bool _if_conditional218;
void* right_value125;
char* __dec_obj59;
void* right_value126;
char* __dec_obj60;
void* right_value127;
char* __dec_obj61;
_Bool _if_conditional219;
char* p_132;
int sline_133;
void* right_value128;
_Bool _if_conditional220;
void* right_value129;
void* right_value130;
struct tuple3$3sTypephcharphbool* __result58__;
_Bool _if_conditional221;
_Bool _if_conditional222;
char* p_134;
int sline_135;
void* right_value131;
_Bool _if_conditional223;
void* right_value132;
void* right_value133;
struct tuple3$3sTypephcharphbool* __result59__;
void* right_value134;
char* __dec_obj62;
void* right_value135;
char* __dec_obj63;
_Bool _if_conditional224;
char* p_136;
int sline_137;
void* right_value136;
_Bool _if_conditional225;
void* right_value137;
void* right_value138;
struct tuple3$3sTypephcharphbool* __result60__;
_Bool _if_conditional226;
void* right_value139;
struct sNode* exp_138;
struct sNode* __dec_obj64;
void* right_value140;
char* __dec_obj65;
_Bool _if_conditional227;
void* right_value141;
char* __dec_obj66;
_Bool _if_conditional228;
void* right_value142;
char* __dec_obj67;
_Bool _if_conditional229;
void* right_value143;
char* __dec_obj68;
_Bool _if_conditional230;
void* right_value144;
char* __dec_obj69;
_Bool _if_conditional231;
void* right_value145;
char* __dec_obj70;
_Bool _if_conditional232;
void* right_value146;
char* __dec_obj71;
_Bool _if_conditional233;
void* right_value147;
char* __dec_obj72;
_Bool _if_conditional234;
char* p_139;
int sline_140;
_Bool _if_conditional235;
void* right_value148;
char* __dec_obj73;
void* right_value149;
char* __dec_obj74;
_Bool _if_conditional236;
void* right_value150;
char* __dec_obj75;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value151;
char* __dec_obj76;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value152;
char* __dec_obj77;
_Bool _if_conditional242;
_Bool _if_conditional243;
void* right_value153;
char* __dec_obj78;
_Bool _if_conditional244;
_Bool _if_conditional245;
char* p_141;
int sline_142;
void* right_value154;
char* __dec_obj79;
_Bool _if_conditional246;
_Bool _if_conditional247;
char* p_143;
int sline_144;
void* right_value155;
char* __dec_obj80;
_Bool _if_conditional248;
void* right_value156;
char* __dec_obj81;
void* right_value157;
char* __dec_obj82;
_Bool _if_conditional249;
_Bool _if_conditional250;
char* p_145;
int sline_146;
void* right_value158;
char* __dec_obj83;
_Bool _if_conditional251;
void* right_value159;
char* __dec_obj84;
void* right_value160;
char* __dec_obj85;
_Bool _if_conditional252;
void* right_value161;
char* __dec_obj86;
void* right_value162;
char* __dec_obj87;
_Bool _if_conditional253;
void* right_value163;
char* __dec_obj88;
_Bool _if_conditional254;
void* right_value164;
char* __dec_obj89;
_Bool _if_conditional255;
void* right_value165;
char* __dec_obj90;
_Bool _if_conditional256;
void* right_value166;
char* __dec_obj91;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
char* p_147;
int sline_148;
void* right_value167;
char* __dec_obj92;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value168;
char* __dec_obj93;
int pointer_num_149;
_Bool heap_150;
_Bool _if_conditional263;
_Bool lambda_flag_151;
char* pX_152;
int slineX_153;
_Bool _if_conditional264;
void* right_value169;
_Bool _if_conditional265;
struct sType* type_154;
char* var_name_155;
_Bool function_pointer_flag_156;
char* p_157;
int sline_158;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value170;
char* word_159;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool var_name_between_brace_160;
char* p_161;
int sline_162;
_Bool _if_conditional271;
_Bool _if_conditional272;
void* right_value171;
char* word_163;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
static int anonymous_num_164=0;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value172;
char* __dec_obj94;
void* right_value173;
struct sNode* node_165;
_Bool _if_conditional279;
void* right_value174;
void* right_value175;
struct tuple3$3sTypephcharphbool* __result61__;
int pointer_num_166;
void* right_value176;
void* right_value177;
struct sType* __dec_obj95;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value178;
char* __dec_obj96;
void* right_value179;
struct sNode* node_167;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value180;
void* right_value181;
struct tuple3$3sTypephcharphbool* __result62__;
void* right_value182;
void* right_value183;
struct sType* __dec_obj97;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value184;
char* __dec_obj98;
void* right_value185;
struct sNode* node_168;
_Bool _if_conditional286;
void* right_value186;
void* right_value187;
struct tuple3$3sTypephcharphbool* __result63__;
int pointer_num_169;
void* right_value188;
void* right_value189;
struct sType* __dec_obj99;
void* right_value190;
void* right_value191;
struct tuple3$3sTypephcharphbool* __result64__;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value192;
char* __dec_obj100;
_Bool _if_conditional290;
static int num_anonymous_var_name_170=0;
void* right_value193;
char* __dec_obj101;
_Bool _if_conditional291;
void* right_value194;
char* __dec_obj102;
static int num_anonymous_var_name_171=0;
void* right_value195;
char* __dec_obj103;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool no_comma_172;
void* right_value196;
struct sNode* node_173;
struct sNode* __dec_obj104;
_Bool _if_conditional294;
struct sType* result_type_174;
void* right_value197;
_Bool _if_conditional299;
void* right_value198;
void* right_value199;
struct sType* __dec_obj105;
_Bool _if_conditional305;
int i_183;
void* right_value200;
_Bool _if_conditional308;
void* right_value201;
void* right_value202;
void* right_value203;
struct sType* __dec_obj106;
void* right_value204;
void* right_value205;
struct sType* __dec_obj107;
struct sNode* __dec_obj108;
void* right_value206;
char* __dec_obj109;
void* right_value207;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var2;
struct list$1sTypeph* param_types_187;
struct list$1charph* param_names_188;
struct list$1charph* param_default_parametors_189;
_Bool var_args_190;
void* right_value208;
void* right_value209;
struct sType* __dec_obj110;
void* right_value210;
void* right_value211;
struct tuple1$1sTypeph* __dec_obj112;
struct list$1sTypeph* __dec_obj113;
struct list$1charph* __dec_obj114;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct sType* result_type_191;
void* right_value212;
_Bool _if_conditional311;
void* right_value213;
void* right_value214;
struct sType* __dec_obj115;
_Bool _if_conditional312;
int i_192;
void* right_value215;
_Bool _if_conditional313;
void* right_value216;
void* right_value217;
void* right_value218;
struct sType* __dec_obj116;
void* right_value219;
void* right_value220;
struct sType* __dec_obj117;
struct sNode* __dec_obj118;
_Bool _if_conditional314;
void* right_value221;
char* __dec_obj119;
_Bool _if_conditional315;
void* right_value222;
void* right_value223;
struct tuple3$3sTypephcharphbool* __result82__;
static int num_anonymous_var_name_193=0;
void* right_value224;
char* __dec_obj120;
void* right_value225;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_194;
struct list$1charph* param_names_195;
struct list$1charph* param_default_parametors_196;
_Bool var_args_197;
void* right_value226;
void* right_value227;
struct sType* __dec_obj121;
void* right_value228;
void* right_value229;
struct tuple1$1sTypeph* __dec_obj122;
struct list$1sTypeph* __dec_obj123;
struct list$1charph* __dec_obj124;
_Bool _if_conditional316;
void* right_value230;
struct sNode* exp_198;
_Bool _if_conditional317;
void* right_value231;
void* right_value232;
struct tuple3$3sTypephcharphbool* __result84__;
void* right_value233;
struct CVALUE* come_value_199;
void* right_value234;
struct sType* __dec_obj125;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
void* right_value235;
char* __dec_obj126;
_Bool _if_conditional323;
static int num_anonymous_var_name_200=0;
void* right_value236;
char* __dec_obj127;
_Bool _if_conditional324;
void* right_value237;
char* __dec_obj128;
static int num_anonymous_var_name_201=0;
void* right_value238;
char* __dec_obj129;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool no_comma_202;
void* right_value239;
struct sNode* node_203;
struct sNode* __dec_obj130;
void* right_value240;
_Bool _if_conditional327;
void* right_value241;
void* right_value242;
struct sType* __dec_obj131;
void* right_value243;
char* __dec_obj132;
struct sNode* __dec_obj133;
_Bool _if_conditional328;
int i_204;
void* right_value244;
_Bool _if_conditional329;
void* right_value245;
void* right_value246;
void* right_value247;
struct sType* __dec_obj134;
struct sNode* __dec_obj135;
_Bool _if_conditional330;
void* right_value248;
_Bool _if_conditional341;
void* right_value249;
void* right_value250;
struct tuple3$3sTypephcharphbool* __result89__;
void* right_value251;
void* right_value252;
struct sType* __dec_obj136;
void* right_value253;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* generics_type_210;
char* var_name_211;
_Bool err_212;
_Bool _if_conditional342;
void* right_value254;
void* right_value255;
struct tuple3$3sTypephcharphbool* __result90__;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value256;
void* right_value257;
struct tuple3$3sTypephcharphbool* __result91__;
_Bool _if_conditional345;
void* right_value258;
struct sType* __dec_obj137;
_Bool _if_conditional346;
void* right_value259;
char* new_name_213;
struct sNode* __dec_obj138;
_Bool _if_conditional347;
void* right_value260;
struct sClass* klass_214;
_Bool _if_conditional348;
void* right_value269;
void* right_value270;
void* right_value271;
void* right_value272;
struct sType* __dec_obj139;
struct sNode* __dec_obj140;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
void* right_value273;
void* right_value274;
struct list$1sTypeph* types_259;
void* right_value275;
void* right_value276;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type2_260;
char* name_261;
_Bool err_262;
_Bool _if_conditional405;
void* right_value277;
void* right_value278;
struct tuple3$3sTypephcharphbool* __result116__;
void* right_value279;
int num_tuples_263;
void* right_value280;
void* right_value281;
void* right_value282;
struct sType* __dec_obj141;
struct list$1sTypeph* o2_saved_264;
struct sType* it_265;
void* right_value283;
_Bool _if_conditional406;
void* right_value284;
struct sType* __dec_obj142;
_Bool _if_conditional407;
void* right_value285;
char* new_name_266;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
void* right_value286;
char* __dec_obj143;
_Bool _if_conditional411;
static int num_anonymous_var_name_267=0;
void* right_value287;
char* __dec_obj144;
_Bool _if_conditional412;
void* right_value288;
char* __dec_obj145;
static int num_anonymous_var_name_268=0;
void* right_value289;
char* __dec_obj146;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool no_comma_269;
void* right_value290;
struct sNode* node_270;
struct sNode* __dec_obj147;
_Bool _if_conditional415;
void* right_value291;
struct sNode* node_271;
void* right_value292;
char* asm_name_272;
char* __dec_obj148;
void* right_value293;
void* right_value294;
struct tuple3$3sTypephcharphbool* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_102, 0, sizeof(char*));
memset(&head_sline_103, 0, sizeof(int));
right_value113 = (void*)0;
memset(&type_name_104, 0, sizeof(char*));
right_value114 = (void*)0;
memset(&constant_105, 0, sizeof(_Bool));
memset(&static__106, 0, sizeof(_Bool));
memset(&volatile__107, 0, sizeof(_Bool));
memset(&register__108, 0, sizeof(_Bool));
memset(&unsigned__109, 0, sizeof(_Bool));
memset(&long__110, 0, sizeof(_Bool));
memset(&long_long_111, 0, sizeof(_Bool));
memset(&short__112, 0, sizeof(_Bool));
memset(&restrict__113, 0, sizeof(_Bool));
memset(&struct__114, 0, sizeof(_Bool));
memset(&union__115, 0, sizeof(_Bool));
memset(&enum__116, 0, sizeof(_Bool));
memset(&no_heap_117, 0, sizeof(_Bool));
memset(&extern__118, 0, sizeof(_Bool));
memset(&inline__119, 0, sizeof(_Bool));
memset(&come_mem_core__120, 0, sizeof(_Bool));
memset(&alignas__121, 0, sizeof(struct sNode*));
memset(&anonymous_type_122, 0, sizeof(_Bool));
memset(&anonymous_name_123, 0, sizeof(_Bool));
memset(&p_124, 0, sizeof(char*));
memset(&sline_125, 0, sizeof(int));
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&p_126, 0, sizeof(char*));
memset(&sline_127, 0, sizeof(int));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&p_128, 0, sizeof(char*));
memset(&sline_129, 0, sizeof(int));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&p_130, 0, sizeof(char*));
memset(&sline_131, 0, sizeof(int));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&p_132, 0, sizeof(char*));
memset(&sline_133, 0, sizeof(int));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&p_134, 0, sizeof(char*));
memset(&sline_135, 0, sizeof(int));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&p_136, 0, sizeof(char*));
memset(&sline_137, 0, sizeof(int));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&exp_138, 0, sizeof(struct sNode*));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&p_139, 0, sizeof(char*));
memset(&sline_140, 0, sizeof(int));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&p_141, 0, sizeof(char*));
memset(&sline_142, 0, sizeof(int));
right_value154 = (void*)0;
memset(&p_143, 0, sizeof(char*));
memset(&sline_144, 0, sizeof(int));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
memset(&p_145, 0, sizeof(char*));
memset(&sline_146, 0, sizeof(int));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&p_147, 0, sizeof(char*));
memset(&sline_148, 0, sizeof(int));
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&pointer_num_149, 0, sizeof(int));
memset(&heap_150, 0, sizeof(_Bool));
memset(&lambda_flag_151, 0, sizeof(_Bool));
memset(&pX_152, 0, sizeof(char*));
memset(&slineX_153, 0, sizeof(int));
right_value169 = (void*)0;
memset(&type_154, 0, sizeof(struct sType*));
memset(&var_name_155, 0, sizeof(char*));
memset(&function_pointer_flag_156, 0, sizeof(_Bool));
memset(&p_157, 0, sizeof(char*));
memset(&sline_158, 0, sizeof(int));
right_value170 = (void*)0;
memset(&word_159, 0, sizeof(char*));
memset(&var_name_between_brace_160, 0, sizeof(_Bool));
memset(&p_161, 0, sizeof(char*));
memset(&sline_162, 0, sizeof(int));
right_value171 = (void*)0;
memset(&word_163, 0, sizeof(char*));
right_value172 = (void*)0;
right_value173 = (void*)0;
memset(&node_165, 0, sizeof(struct sNode*));
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&pointer_num_166, 0, sizeof(int));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&node_167, 0, sizeof(struct sNode*));
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&node_168, 0, sizeof(struct sNode*));
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&pointer_num_169, 0, sizeof(int));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&no_comma_172, 0, sizeof(_Bool));
right_value196 = (void*)0;
memset(&node_173, 0, sizeof(struct sNode*));
memset(&result_type_174, 0, sizeof(struct sType*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&i_183, 0, sizeof(int));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&param_types_187, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_188, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_189, 0, sizeof(struct list$1charph*));
memset(&var_args_190, 0, sizeof(_Bool));
memset(&param_types_187, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_188, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_189, 0, sizeof(struct list$1charph*));
memset(&var_args_190, 0, sizeof(_Bool));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&result_type_191, 0, sizeof(struct sType*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&i_192, 0, sizeof(int));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
memset(&param_types_194, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_195, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_196, 0, sizeof(struct list$1charph*));
memset(&var_args_197, 0, sizeof(_Bool));
memset(&param_types_194, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_195, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_196, 0, sizeof(struct list$1charph*));
memset(&var_args_197, 0, sizeof(_Bool));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&exp_198, 0, sizeof(struct sNode*));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&come_value_199, 0, sizeof(struct CVALUE*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&no_comma_202, 0, sizeof(_Bool));
right_value239 = (void*)0;
memset(&node_203, 0, sizeof(struct sNode*));
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&i_204, 0, sizeof(int));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&generics_type_210, 0, sizeof(struct sType*));
memset(&var_name_211, 0, sizeof(char*));
memset(&err_212, 0, sizeof(_Bool));
memset(&generics_type_210, 0, sizeof(struct sType*));
memset(&var_name_211, 0, sizeof(char*));
memset(&err_212, 0, sizeof(_Bool));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&new_name_213, 0, sizeof(char*));
right_value260 = (void*)0;
memset(&klass_214, 0, sizeof(struct sClass*));
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&types_259, 0, sizeof(struct list$1sTypeph*));
right_value275 = (void*)0;
right_value276 = (void*)0;
memset(&type2_260, 0, sizeof(struct sType*));
memset(&name_261, 0, sizeof(char*));
memset(&err_262, 0, sizeof(_Bool));
memset(&type2_260, 0, sizeof(struct sType*));
memset(&name_261, 0, sizeof(char*));
memset(&err_262, 0, sizeof(_Bool));
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&num_tuples_263, 0, sizeof(int));
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&o2_saved_264, 0, sizeof(struct list$1sTypeph*));
memset(&it_265, 0, sizeof(struct sType*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&new_name_266, 0, sizeof(char*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&no_comma_269, 0, sizeof(_Bool));
right_value290 = (void*)0;
memset(&node_270, 0, sizeof(struct sNode*));
right_value291 = (void*)0;
memset(&node_271, 0, sizeof(struct sNode*));
right_value292 = (void*)0;
memset(&asm_name_272, 0, sizeof(char*));
right_value293 = (void*)0;
right_value294 = (void*)0;
    head_102=info->p;
    head_sline_103=info->sline;
    info->define_struct=(_Bool)0;
    type_name_104=(char*)come_increment_ref_count(((char*)(right_value113=parse_word(info))));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    while(string_operator_equals(type_name_104,"__extension__")) {
        __dec_obj53=type_name_104;
        type_name_104=(char*)come_increment_ref_count(((char*)(right_value114=parse_word(info))));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    constant_105=(_Bool)0;
    static__106=(_Bool)0;
    volatile__107=(_Bool)0;
    register__108=(_Bool)0;
    unsigned__109=(_Bool)0;
    long__110=(_Bool)0;
    long_long_111=(_Bool)0;
    short__112=(_Bool)0;
    restrict__113=(_Bool)0;
    struct__114=(_Bool)0;
    union__115=(_Bool)0;
    enum__116=(_Bool)0;
    no_heap_117=(_Bool)0;
    extern__118=(_Bool)0;
    inline__119=(_Bool)0;
    come_mem_core__120=(_Bool)0;
    alignas__121=((void*)0);
    anonymous_type_122=(_Bool)0;
    anonymous_name_123=(_Bool)0;
    while((_Bool)1) {
        if(string_operator_equals(type_name_104,"struct")) {
            struct__114=(_Bool)1;
            if(*info->p==123) {
                p_124=info->p;
                sline_125=info->sline;
                ((char*)(right_value115=skip_block(info)));
                right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(*info->p==59) {
                    anonymous_name_123=(_Bool)1;
                    anonymous_type_122=(_Bool)1;
                    __dec_obj54=type_name_104;
                    type_name_104=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(""))));
                    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    info->p=p_124;
                    info->sline=sline_125;
                    break;
                }
                else {
                    anonymous_type_122=(_Bool)1;
                    __dec_obj55=type_name_104;
                    type_name_104=(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(""))));
                    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    info->p=p_124;
                    info->sline=sline_125;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj56=type_name_104;
            type_name_104=(char*)come_increment_ref_count(((char*)(right_value118=parse_word(info))));
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(*info->p==60) {
                p_126=info->p;
                sline_127=info->sline;
                info->p++;
                skip_spaces_and_lf(info);
                while((_Bool)1) {
                    if(*info->p==62) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p==123) {
                        }
                        else {
                            info->p=p_126;
                            info->sline=sline_127;
                        }
                        break;
                    }
                    else {
                        if(*info->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result56__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value120=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value119=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 759, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result56__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
            }
            if(*info->p==123) {
                p_128=info->p;
                sline_129=info->sline;
                ((char*)(right_value121=skip_block(info)));
                right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(*info->p==59) {
                    info->p=head_102;
                    info->sline=head_sline_103;
                    info->define_struct=(_Bool)1;
                    __result57__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value123=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value122=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 777, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result57__;
                }
                else {
                    anonymous_type_122=(_Bool)1;
                    info->p=p_128;
                    info->sline=sline_129;
                    break;
                }
            }
        }
        else {
            if(string_operator_equals(type_name_104,"union")) {
                union__115=(_Bool)1;
                if(*info->p==123) {
                    p_130=info->p;
                    sline_131=info->sline;
                    ((char*)(right_value124=skip_block(info)));
                    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(*info->p==59) {
                        info->p=head_102;
                        info->sline=head_sline_103;
                        info->define_struct=(_Bool)0;
                        anonymous_type_122=(_Bool)1;
                        __dec_obj59=type_name_104;
                        type_name_104=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(""))));
                        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        info->p=p_130;
                        info->sline=sline_131;
                        break;
                    }
                    else {
                        anonymous_type_122=(_Bool)1;
                        __dec_obj60=type_name_104;
                        type_name_104=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(""))));
                        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        info->p=p_130;
                        info->sline=sline_131;
                        break;
                    }
                }
                parse_sharp_v5(info);
                __dec_obj61=type_name_104;
                type_name_104=(char*)come_increment_ref_count(((char*)(right_value127=parse_word(info))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(*info->p==123) {
                    p_132=info->p;
                    sline_133=info->sline;
                    ((char*)(right_value128=skip_block(info)));
                    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(*info->p==59) {
                        info->p=head_102;
                        info->sline=head_sline_103;
                        info->define_struct=(_Bool)1;
                        __result58__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value130=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value129=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 832, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result58__;
                    }
                    else {
                        anonymous_type_122=(_Bool)1;
                        info->p=p_132;
                        info->sline=sline_133;
                        break;
                    }
                }
            }
            else {
                if(string_operator_equals(type_name_104,"enum")) {
                    enum__116=(_Bool)1;
                    parse_sharp_v5(info);
                    if(*info->p==123) {
                        p_134=info->p;
                        sline_135=info->sline;
                        ((char*)(right_value131=skip_block(info)));
                        right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(*info->p==59) {
                            info->p=head_102;
                            info->sline=head_sline_103;
                            info->define_struct=(_Bool)1;
                            __result59__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value133=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value132=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 857, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result59__;
                        }
                        else {
                            anonymous_type_122=(_Bool)1;
                            __dec_obj62=type_name_104;
                            type_name_104=(char*)come_increment_ref_count(((char*)(right_value134=__builtin_string(""))));
                            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            info->p=p_134;
                            info->sline=sline_135;
                            break;
                        }
                    }
                    parse_sharp_v5(info);
                    __dec_obj63=type_name_104;
                    type_name_104=(char*)come_increment_ref_count(((char*)(right_value135=parse_word(info))));
                    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parse_sharp_v5(info);
                    if(*info->p==123) {
                        p_136=info->p;
                        sline_137=info->sline;
                        ((char*)(right_value136=skip_block(info)));
                        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(*info->p==59) {
                            info->p=head_102;
                            info->sline=head_sline_103;
                            info->define_struct=(_Bool)1;
                            __result60__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value138=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value137=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 884, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result60__;
                        }
                        else {
                            anonymous_type_122=(_Bool)1;
                            info->p=p_136;
                            info->sline=sline_137;
                            break;
                        }
                    }
                }
                else {
                    if(string_operator_equals(type_name_104,"_Alignas")) {
                        expected_next_character(40,info);
                        exp_138=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value139=expression_v13(info))));
                        if(right_value139) { right_value139 = come_decrement_ref_count2(right_value139, ((struct sNode*)right_value139)->finalize, ((struct sNode*)right_value139)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj64=alignas__121;
                        alignas__121=(struct sNode*)come_increment_ref_count(exp_138);
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
                        expected_next_character(41,info);
                        __dec_obj65=type_name_104;
                        type_name_104=(char*)come_increment_ref_count(((char*)(right_value140=parse_word(info))));
                        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(exp_138) { exp_138 = come_decrement_ref_count2(exp_138, ((struct sNode*)exp_138)->finalize, ((struct sNode*)exp_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(string_operator_equals(type_name_104,"const")) {
                            constant_105=(_Bool)1;
                            __dec_obj66=type_name_104;
                            type_name_104=(char*)come_increment_ref_count(((char*)(right_value141=parse_word(info))));
                            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(string_operator_equals(type_name_104,"static")) {
                                static__106=(_Bool)1;
                                __dec_obj67=type_name_104;
                                type_name_104=(char*)come_increment_ref_count(((char*)(right_value142=parse_word(info))));
                                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(string_operator_equals(type_name_104,"come_mem_core")) {
                                    come_mem_core__120=(_Bool)1;
                                    __dec_obj68=type_name_104;
                                    type_name_104=(char*)come_increment_ref_count(((char*)(right_value143=parse_word(info))));
                                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    if(string_operator_equals(type_name_104,"extern")) {
                                        extern__118=(_Bool)1;
                                        __dec_obj69=type_name_104;
                                        type_name_104=(char*)come_increment_ref_count(((char*)(right_value144=parse_word(info))));
                                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        if(string_operator_equals(type_name_104,"_Noreturn")) {
                                            __dec_obj70=type_name_104;
                                            type_name_104=(char*)come_increment_ref_count(((char*)(right_value145=parse_word(info))));
                                            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            if(string_operator_equals(type_name_104,"inline")||string_operator_equals(type_name_104,"__inline")||string_operator_equals(type_name_104,"__inline__")||string_operator_equals(type_name_104,"__always_inline")) {
                                                inline__119=(_Bool)1;
                                                __dec_obj71=type_name_104;
                                                type_name_104=(char*)come_increment_ref_count(((char*)(right_value146=parse_word(info))));
                                                __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                if(string_operator_equals(type_name_104,"volatile")) {
                                                    volatile__107=(_Bool)1;
                                                    __dec_obj72=type_name_104;
                                                    type_name_104=(char*)come_increment_ref_count(((char*)(right_value147=parse_word(info))));
                                                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    if(string_operator_equals(type_name_104,"long")) {
                                                        {
                                                            p_139=info->p;
                                                            sline_140=info->sline;
                                                            if(!xisalpha(*info->p)) {
                                                                info->p=p_139;
                                                                info->sline=sline_140;
                                                                __dec_obj73=type_name_104;
                                                                type_name_104=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string("long"))));
                                                                __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                break;
                                                            }
                                                            else {
                                                                __dec_obj74=type_name_104;
                                                                type_name_104=(char*)come_increment_ref_count(((char*)(right_value149=parse_word(info))));
                                                                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                if(string_operator_equals(type_name_104,"unsigned")) {
                                                                    __dec_obj75=type_name_104;
                                                                    type_name_104=(char*)come_increment_ref_count(((char*)(right_value150=parse_word(info))));
                                                                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    if(string_operator_equals(type_name_104,"int")) {
                                                                        long__110=(_Bool)1;
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    if(string_operator_equals(type_name_104,"long")) {
                                                                        p_139=info->p;
                                                                        sline_140=info->sline;
                                                                        if(xisalpha(*info->p)) {
                                                                            long_long_111=(_Bool)1;
                                                                            __dec_obj76=type_name_104;
                                                                            type_name_104=(char*)come_increment_ref_count(((char*)(right_value151=parse_word(info))));
                                                                            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            long__110=(_Bool)1;
                                                                            break;
                                                                        }
                                                                        if(string_operator_equals(type_name_104,"int")) {
                                                                            long_long_111=(_Bool)1;
                                                                            break;
                                                                        }
                                                                        else {
                                                                            if(!is_type_name(type_name_104,info)) {
                                                                                __dec_obj77=type_name_104;
                                                                                type_name_104=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("long"))));
                                                                                __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                long_long_111=(_Bool)1;
                                                                                info->p=p_139;
                                                                                info->sline=sline_140;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(is_type_name(type_name_104,info)) {
                                                                            if(long__110) {
                                                                                long_long_111=(_Bool)1;
                                                                                long__110=(_Bool)0;
                                                                            }
                                                                            else {
                                                                                long__110=(_Bool)1;
                                                                            }
                                                                            break;
                                                                        }
                                                                        else {
                                                                            info->p=p_139;
                                                                            info->sline=sline_140;
                                                                            __dec_obj78=type_name_104;
                                                                            type_name_104=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string("long"))));
                                                                            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        if(string_operator_equals(type_name_104,"unsigned")) {
                                                            unsigned__109=(_Bool)1;
                                                            if(xisalpha(*info->p)||*info->p==95) {
                                                                p_141=info->p;
                                                                sline_142=info->sline;
                                                                __dec_obj79=type_name_104;
                                                                type_name_104=(char*)come_increment_ref_count(((char*)(right_value154=parse_word(info))));
                                                                __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                if(string_operator_equals(type_name_104,"short")) {
                                                                    if(xisalpha(*info->p)||*info->p==95) {
                                                                        p_143=info->p;
                                                                        sline_144=info->sline;
                                                                        __dec_obj80=type_name_104;
                                                                        type_name_104=(char*)come_increment_ref_count(((char*)(right_value155=parse_word(info))));
                                                                        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        if(is_type_name(type_name_104,info)) {
                                                                            short__112=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            short__112=(_Bool)1;
                                                                            __dec_obj81=type_name_104;
                                                                            type_name_104=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string("int"))));
                                                                            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            info->p=p_143;
                                                                            info->sline=sline_144;
                                                                        }
                                                                    }
                                                                    else {
                                                                        short__112=(_Bool)1;
                                                                        __dec_obj82=type_name_104;
                                                                        type_name_104=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string("int"))));
                                                                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    if(string_operator_equals(type_name_104,"long")) {
                                                                        if(xisalpha(*info->p)||*info->p==95) {
                                                                            p_145=info->p;
                                                                            sline_146=info->sline;
                                                                            __dec_obj83=type_name_104;
                                                                            type_name_104=(char*)come_increment_ref_count(((char*)(right_value158=parse_word(info))));
                                                                            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(is_type_name(type_name_104,info)) {
                                                                                long__110=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                long__110=(_Bool)1;
                                                                                __dec_obj84=type_name_104;
                                                                                type_name_104=(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string("int"))));
                                                                                __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                info->p=p_145;
                                                                                info->sline=sline_146;
                                                                            }
                                                                        }
                                                                        else {
                                                                            long__110=(_Bool)1;
                                                                            __dec_obj85=type_name_104;
                                                                            type_name_104=(char*)come_increment_ref_count(((char*)(right_value160=__builtin_string("int"))));
                                                                            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(!is_type_name(type_name_104,info)) {
                                                                            __dec_obj86=type_name_104;
                                                                            type_name_104=(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string("int"))));
                                                                            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            info->p=p_141;
                                                                            info->sline=sline_142;
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                __dec_obj87=type_name_104;
                                                                type_name_104=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string("int"))));
                                                                __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                break;
                                                            }
                                                        }
                                                        else {
                                                            if(string_operator_equals(type_name_104,"signed")||string_operator_equals(type_name_104,"__signed__")) {
                                                                unsigned__109=(_Bool)0;
                                                                __dec_obj88=type_name_104;
                                                                type_name_104=(char*)come_increment_ref_count(((char*)(right_value163=parse_word(info))));
                                                                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                if(string_operator_equals(type_name_104,"register")) {
                                                                    register__108=(_Bool)1;
                                                                    __dec_obj89=type_name_104;
                                                                    type_name_104=(char*)come_increment_ref_count(((char*)(right_value164=parse_word(info))));
                                                                    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    if(string_operator_equals(type_name_104,"restrict")) {
                                                                        restrict__113=(_Bool)1;
                                                                        __dec_obj90=type_name_104;
                                                                        type_name_104=(char*)come_increment_ref_count(((char*)(right_value165=parse_word(info))));
                                                                        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    else {
                                                                        if(string_operator_equals(type_name_104,"__restrict")) {
                                                                            restrict__113=(_Bool)1;
                                                                            __dec_obj91=type_name_104;
                                                                            type_name_104=(char*)come_increment_ref_count(((char*)(right_value166=parse_word(info))));
                                                                            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            if(string_operator_equals(type_name_104,"short")) {
                                                                                short__112=(_Bool)1;
                                                                                if(*info->p==58) {
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    if(xisalnum(*info->p)) {
                                                                                        p_147=info->p;
                                                                                        sline_148=info->sline;
                                                                                        __dec_obj92=type_name_104;
                                                                                        type_name_104=(char*)come_increment_ref_count(((char*)(right_value167=parse_word(info))));
                                                                                        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        if(string_operator_equals(type_name_104,"int")) {
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            if(string_operator_equals(type_name_104,"short")) {
                                                                                                short__112=(_Bool)0;
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                if(is_type_name(type_name_104,info)) {
                                                                                                    info->p=p_147;
                                                                                                    info->sline=sline_148;
                                                                                                }
                                                                                                else {
                                                                                                    __dec_obj93=type_name_104;
                                                                                                    type_name_104=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string("short"))));
                                                                                                    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    info->p=p_147;
                                                                                                    info->sline=sline_148;
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
    pointer_num_149=0;
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        pointer_num_149++;
    }
    heap_150=(_Bool)0;
    if(*info->p==37) {
        info->p++;
        skip_spaces_and_lf(info);
        heap_150=(_Bool)1;
    }
    lambda_flag_151=(_Bool)0;
    {
        pX_152=info->p;
        slineX_153=info->sline;
        if(xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(right_value169=parse_word(info)));
            right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(*info->p==40&&info->in_typedef) {
                lambda_flag_151=(_Bool)1;
            }
        }
        info->p=pX_152;
        info->sline=slineX_153;
    }
    function_pointer_flag_156=(_Bool)0;
    {
        p_157=info->p;
        sline_158=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(*info->p==42||*info->p==94) {
                function_pointer_flag_156=(_Bool)1;
            }
            else {
                if(xisalpha(*info->p)||*info->p==95) {
                    word_159=(char*)come_increment_ref_count(((char*)(right_value170=parse_word(info))));
                    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p==40) {
                            function_pointer_flag_156=(_Bool)1;
                        }
                    }
                    word_159 = come_decrement_ref_count2(word_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        info->p=p_157;
        info->sline=sline_158;
    }
    var_name_between_brace_160=(_Bool)0;
    {
        p_161=info->p;
        sline_162=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(xisalpha(*info->p)||*info->p==95) {
                word_163=(char*)come_increment_ref_count(((char*)(right_value171=parse_word(info))));
                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(is_type_name(word_163,info)) {
                }
                else {
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p!=40) {
                            var_name_between_brace_160=(_Bool)1;
                        }
                    }
                }
                word_163 = come_decrement_ref_count2(word_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_161;
        info->sline=sline_162;
    }
    if(anonymous_type_122&&*info->p==123) {
        if(struct__114) {
            if(string_operator_equals(type_name_104,"")) {
                __dec_obj94=type_name_104;
                type_name_104=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("anonymous_typeX%d",++anonymous_num_164))));
                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            node_165=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value173=parse_struct((char*)come_increment_ref_count(type_name_104),info))));
            if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(!node_compile(node_165,info)) {
                err_msg(info,"parse_struct is failed");
                __result61__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value175=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value174=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1247, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_165) { node_165 = come_decrement_ref_count2(node_165, ((struct sNode*)node_165)->finalize, ((struct sNode*)node_165)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_155 = come_decrement_ref_count2(var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result61__;
            }
            pointer_num_166=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_166++;
            }
            __dec_obj95=type_154;
            type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value176=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1257, "struct sType")))),type_name_104,(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_154->mPointerNum=pointer_num_166;
            if(node_165) { node_165 = come_decrement_ref_count2(node_165, ((struct sNode*)node_165)->finalize, ((struct sNode*)node_165)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(enum__116) {
                if(string_operator_equals(type_name_104,"")) {
                    __dec_obj96=type_name_104;
                    type_name_104=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("anonymous_typeY%d",++anonymous_num_164))));
                    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                node_167=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=parse_enum((char*)come_increment_ref_count(type_name_104),info))));
                if(right_value179) { right_value179 = come_decrement_ref_count2(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(!info->no_output_err) {
                    if(!node_compile(node_167,info)) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result62__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value181=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value180=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1271, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_167) { node_167 = come_decrement_ref_count2(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_155 = come_decrement_ref_count2(var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result62__;
                    }
                }
                __dec_obj97=type_154;
                type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value182=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1275, "struct sType")))),type_name_104,(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(node_167) { node_167 = come_decrement_ref_count2(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(union__115) {
                    if(string_operator_equals(type_name_104,"")) {
                        __dec_obj98=type_name_104;
                        type_name_104=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("anonymous_typeZ%d",++anonymous_num_164))));
                        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    node_168=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=parse_union((char*)come_increment_ref_count(type_name_104),info))));
                    if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(!node_compile(node_168,info)) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result63__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value187=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value186=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1287, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_168) { node_168 = come_decrement_ref_count2(node_168, ((struct sNode*)node_168)->finalize, ((struct sNode*)node_168)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_155 = come_decrement_ref_count2(var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result63__;
                    }
                    pointer_num_169=0;
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_num_169++;
                    }
                    __dec_obj99=type_154;
                    type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value188=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1298, "struct sType")))),type_name_104,(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    type_154->mPointerNum=pointer_num_169;
                    if(node_168) { node_168 = come_decrement_ref_count2(node_168, ((struct sNode*)node_168)->finalize, ((struct sNode*)node_168)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __result64__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value191=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value190=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1304, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    var_name_155 = come_decrement_ref_count2(var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result64__;
                }
            }
        }
        if(parse_variable_name) {
            parse_sharp_v5(info);
            if(var_name_between_brace_160&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(*info->p==58) {
                __dec_obj100=var_name_155;
                var_name_155=(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string(""))));
                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(anonymous_name_123) {
                    num_anonymous_var_name_170++;
                    __dec_obj101=var_name_155;
                    var_name_155=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_170))));
                    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(xisalnum(*info->p)||*info->p==95) {
                        __dec_obj102=var_name_155;
                        var_name_155=(char*)come_increment_ref_count(((char*)(right_value194=parse_word(info))));
                        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        num_anonymous_var_name_171++;
                        __dec_obj103=var_name_155;
                        var_name_155=(char*)come_increment_ref_count(((char*)(right_value195=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_171))));
                        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            if(var_name_between_brace_160&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_172=info->no_comma;
                info->no_comma=(_Bool)1;
                node_173=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=expression_v13(info))));
                if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_172;
                __dec_obj104=type_154->mSizeNum;
                type_154->mSizeNum=(struct sNode*)come_increment_ref_count(node_173);
                if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_173) { node_173 = come_decrement_ref_count2(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        if(lambda_flag_151) {
            if(_if_conditional299=((struct sType*)(right_value197=map$2charphsTypephp_operator_load_element(info->types,type_name_104))),            come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
            _if_conditional299) {
                __dec_obj105=result_type_174;
                result_type_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_clone(((struct sType*)(right_value198=map$2charphsTypephp_operator_load_element(info->types,type_name_104)))))));
                come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                if(list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_104))) {
                    for(                    i_183=0;                    i_183<list$1charph_length(info->generics_type_names);                    i_183++                    ){
                        if(_if_conditional308=string_operator_equals(((char*)(right_value200=list$1charphp_operator_load_element(info->generics_type_names,i_183))),type_name_104),                        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                        _if_conditional308) {
                            __dec_obj106=result_type_174;
                            result_type_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value201=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1357, "struct sType")))),((char*)(right_value202=xsprintf("generics_type%d",i_183))),(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    __dec_obj107=result_type_174;
                    result_type_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value204=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1362, "struct sType")))),type_name_104,(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
            result_type_174->mConstant=result_type_174->mConstant||constant_105;
            __dec_obj108=result_type_174->mAlignas;
            result_type_174->mAlignas=(struct sNode*)come_increment_ref_count(alignas__121);
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
            result_type_174->mComeMemCore=result_type_174->mComeMemCore||come_mem_core__120;
            result_type_174->mRegister=register__108;
            result_type_174->mUnsigned=result_type_174->mUnsigned||unsigned__109;
            result_type_174->mVolatile=volatile__107;
            result_type_174->mStatic=result_type_174->mStatic||static__106;
            result_type_174->mExtern=result_type_174->mExtern||extern__118;
            result_type_174->mInline=result_type_174->mInline||inline__119;
            result_type_174->mRestrict=result_type_174->mRestrict||restrict__113;
            result_type_174->mLongLong=result_type_174->mLongLong||long_long_111;
            result_type_174->mLong=result_type_174->mLong||long__110;
            result_type_174->mShort=result_type_174->mShort||short__112;
            result_type_174->mPointerNum=pointer_num_149;
            result_type_174->mHeap=result_type_174->mHeap||heap_150;
            __dec_obj109=var_name_155;
            var_name_155=(char*)come_increment_ref_count(((char*)(right_value206=parse_word(info))));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            multiple_assign_var2=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value207=parse_params(info)));
            param_types_187=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var2->v1);
            param_names_188=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v2);
            param_default_parametors_189=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v3);
            var_args_190=multiple_assign_var2->v4;
            come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj110=type_154;
            type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value208=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1385, "struct sType")))),"lambda",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj112=type_154->mResultType;
            type_154->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value211=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value210=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1387, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_174)))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj113=type_154->mParamTypes;
            type_154->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_187);
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __dec_obj114=type_154->mParamNames;
            type_154->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_188);
            come_call_finalizer2(list$1charph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_154->mVarArgs=var_args_190;
            type_154->mExtern=extern__118;
            come_call_finalizer2(sType_finalize,result_type_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(function_pointer_flag_156) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                if(*info->p==42||*info->p==94) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                skip_pointer_attribute(info);
                if(_if_conditional311=((struct sType*)(right_value212=map$2charphsTypephp_operator_load_element(info->types,type_name_104))),                come_call_finalizer2(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                _if_conditional311) {
                    __dec_obj115=result_type_191;
                    result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(((struct sType*)(right_value213=map$2charphsTypephp_operator_load_element(info->types,type_name_104)))))));
                    come_call_finalizer2(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_104))) {
                        for(                        i_192=0;                        i_192<list$1charph_length(info->generics_type_names);                        i_192++                        ){
                            if(_if_conditional313=string_operator_equals(((char*)(right_value215=list$1charphp_operator_load_element(info->generics_type_names,i_192))),type_name_104),                            right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                            _if_conditional313) {
                                __dec_obj116=result_type_191;
                                result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value216=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1414, "struct sType")))),((char*)(right_value217=xsprintf("generics_type%d",i_192))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        __dec_obj117=result_type_191;
                        result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value219=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1419, "struct sType")))),type_name_104,(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                }
                result_type_191->mConstant=result_type_191->mConstant||constant_105;
                __dec_obj118=result_type_191->mAlignas;
                result_type_191->mAlignas=(struct sNode*)come_increment_ref_count(alignas__121);
                if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
                result_type_191->mComeMemCore=result_type_191->mComeMemCore||come_mem_core__120;
                result_type_191->mRegister=register__108;
                result_type_191->mUnsigned=result_type_191->mUnsigned||unsigned__109;
                result_type_191->mVolatile=volatile__107;
                result_type_191->mStatic=result_type_191->mStatic||static__106;
                result_type_191->mExtern=result_type_191->mExtern||extern__118;
                result_type_191->mInline=result_type_191->mInline||inline__119;
                result_type_191->mRestrict=result_type_191->mRestrict||restrict__113;
                result_type_191->mLongLong=result_type_191->mLongLong||long_long_111;
                result_type_191->mLong=result_type_191->mLong||long__110;
                result_type_191->mShort=result_type_191->mShort||short__112;
                result_type_191->mPointerNum+=pointer_num_149;
                result_type_191->mHeap=result_type_191->mHeap||heap_150;
                if(xisalnum(*info->p)||*info->p==95) {
                    __dec_obj119=var_name_155;
                    var_name_155=(char*)come_increment_ref_count(((char*)(right_value221=parse_word(info))));
                    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(*info->p==40) {
                        __result82__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value223=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value222=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1441, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_191),(char*)come_increment_ref_count(var_name_155),(_Bool)0)));
                        come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_155 = come_decrement_ref_count2(var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result82__;
                    }
                }
                else {
                    num_anonymous_var_name_193++;
                    __dec_obj120=var_name_155;
                    var_name_155=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_193))));
                    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                expected_next_character(41,info);
                multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value225=parse_params(info)));
                param_types_194=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
                param_names_195=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
                param_default_parametors_196=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
                var_args_197=multiple_assign_var3->v4;
                come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj121=type_154;
                type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1453, "struct sType")))),"lambda",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj122=type_154->mResultType;
                type_154->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value229=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value228=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1455, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_191)))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj123=type_154->mParamTypes;
                type_154->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_194);
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __dec_obj124=type_154->mParamNames;
                type_154->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_195);
                come_call_finalizer2(list$1charph_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_154->mVarArgs=var_args_197;
                type_154->mExtern=extern__118;
                come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(string_operator_equals(type_name_104,"__typeof__")&&*info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    exp_198=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value230=expression_v13(info))));
                    if(right_value230) { right_value230 = come_decrement_ref_count2(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    expected_next_character(41,info);
                    if(!node_compile(exp_198,info)) {
                        err_msg(info,"invalid __typeof__ expression");
                        __result84__ = __result_obj__ = ((struct tuple3$3voidpvoidpbool*)(right_value232=tuple3$3voidpvoidpbool_initialize((struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value231=(struct tuple3$3voidpvoidpbool*)come_calloc(1, sizeof(struct tuple3$3voidpvoidpbool)*(1), "05function4.c", 1471, "struct tuple3$3voidpvoidpbool")))),((void*)0),((void*)0),(_Bool)0)));
                        if(exp_198) { exp_198 = come_decrement_ref_count2(exp_198, ((struct sNode*)exp_198)->finalize, ((struct sNode*)exp_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_155 = come_decrement_ref_count2(var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3voidpvoidpboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result84__;
                    }
                    come_value_199=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    dec_stack_ptr(1,info);
                    __dec_obj125=type_154;
                    type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(come_value_199->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(var_name_between_brace_160&&*info->p==40) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p==58) {
                            __dec_obj126=var_name_155;
                            var_name_155=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(""))));
                            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(anonymous_name_123) {
                                num_anonymous_var_name_200++;
                                __dec_obj127=var_name_155;
                                var_name_155=(char*)come_increment_ref_count(((char*)(right_value236=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_200))));
                                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(xisalnum(*info->p)||*info->p==95) {
                                    __dec_obj128=var_name_155;
                                    var_name_155=(char*)come_increment_ref_count(((char*)(right_value237=parse_word(info))));
                                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    num_anonymous_var_name_201++;
                                    __dec_obj129=var_name_155;
                                    var_name_155=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_201))));
                                    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        if(var_name_between_brace_160&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_202=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_203=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value239=expression_v13(info))));
                            if(right_value239) { right_value239 = come_decrement_ref_count2(right_value239, ((struct sNode*)right_value239)->finalize, ((struct sNode*)right_value239)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_202;
                            __dec_obj130=type_154->mSizeNum;
                            type_154->mSizeNum=(struct sNode*)come_increment_ref_count(node_203);
                            if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_203) { node_203 = come_decrement_ref_count2(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_198) { exp_198 = come_decrement_ref_count2(exp_198, ((struct sNode*)exp_198)->finalize, ((struct sNode*)exp_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional327=((struct sType*)(right_value240=map$2charphsTypephp_operator_load_element(info->types,type_name_104))),                    come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                    _if_conditional327) {
                        __dec_obj131=type_154;
                        type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(((struct sType*)(right_value241=map$2charphsTypephp_operator_load_element(info->types,type_name_104)))))));
                        come_call_finalizer2(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj132=type_154->mOriginalTypeName;
                        type_154->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(type_name_104))));
                        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        type_154->mOriginalTypeNamePointerNum=pointer_num_149;
                        type_154->mConstant=type_154->mConstant||constant_105;
                        __dec_obj133=type_154->mAlignas;
                        type_154->mAlignas=(struct sNode*)come_increment_ref_count(alignas__121);
                        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
                        type_154->mComeMemCore=type_154->mComeMemCore||come_mem_core__120;
                        type_154->mRegister=register__108;
                        type_154->mUnsigned=type_154->mUnsigned||unsigned__109;
                        type_154->mVolatile=volatile__107;
                        type_154->mStatic=type_154->mStatic||static__106;
                        type_154->mExtern=type_154->mExtern||extern__118;
                        type_154->mInline=type_154->mInline||inline__119;
                        type_154->mRestrict=type_154->mRestrict||restrict__113;
                        type_154->mLongLong=type_154->mLongLong||long_long_111;
                        type_154->mLong=type_154->mLong||long__110;
                        type_154->mShort=type_154->mShort||short__112;
                        type_154->mPointerNum+=pointer_num_149;
                        type_154->mHeap=type_154->mHeap||heap_150;
                    }
                    else {
                        if(list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_104))) {
                            for(                            i_204=0;                            i_204<list$1charph_length(info->generics_type_names);                            i_204++                            ){
                                if(_if_conditional329=string_operator_equals(((char*)(right_value244=list$1charphp_operator_load_element(info->generics_type_names,i_204))),type_name_104),                                right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                _if_conditional329) {
                                    __dec_obj134=type_154;
                                    type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value245=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1548, "struct sType")))),((char*)(right_value246=xsprintf("generics_type%d",i_204))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                            type_154->mConstant=type_154->mConstant||constant_105;
                            __dec_obj135=type_154->mAlignas;
                            type_154->mAlignas=(struct sNode*)come_increment_ref_count(alignas__121);
                            if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
                            type_154->mComeMemCore=type_154->mComeMemCore||come_mem_core__120;
                            type_154->mRegister=register__108;
                            type_154->mUnsigned=type_154->mUnsigned||unsigned__109;
                            type_154->mVolatile=volatile__107;
                            type_154->mStatic=type_154->mStatic||static__106;
                            type_154->mExtern=type_154->mExtern||extern__118;
                            type_154->mInline=type_154->mInline||inline__119;
                            type_154->mRestrict=type_154->mRestrict||restrict__113;
                            type_154->mLongLong=type_154->mLongLong||long_long_111;
                            type_154->mLong=type_154->mLong||long__110;
                            type_154->mShort=type_154->mShort||short__112;
                            type_154->mPointerNum+=pointer_num_149;
                            type_154->mHeap=type_154->mHeap||heap_150;
                        }
                        else {
                            if(*info->p==60) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                if(_if_conditional341=((struct sClass*)(right_value248=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_104)))==((void*)0),                                come_call_finalizer2(sClass_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                                _if_conditional341) {
                                    __result89__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value250=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value249=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1574, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                    type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    var_name_155 = come_decrement_ref_count2(var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    return __result89__;
                                }
                                __dec_obj136=type_154;
                                type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value251=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1577, "struct sType")))),type_name_104,(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                while((_Bool)1) {
                                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value253=parse_type(info,(_Bool)0,(_Bool)0)));
                                    generics_type_210=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                                    var_name_211=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                                    err_212=multiple_assign_var4->v3;
                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(!err_212) {
                                        __result90__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value255=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value254=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1583, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        come_call_finalizer2(sType_finalize,generics_type_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_211 = come_decrement_ref_count2(var_name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_155 = come_decrement_ref_count2(var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        return __result90__;
                                    }
                                    list$1sTypeph_push_back(type_154->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_210));
                                    if(*info->p==44) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(*info->p==62) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            come_call_finalizer2(sType_finalize,generics_type_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_211 = come_decrement_ref_count2(var_name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"invalid generics type\n");
                                            __result91__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value257=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value256=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1600, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            come_call_finalizer2(sType_finalize,generics_type_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_211 = come_decrement_ref_count2(var_name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_155 = come_decrement_ref_count2(var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            return __result91__;
                                        }
                                    }
                                    come_call_finalizer2(sType_finalize,generics_type_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    var_name_211 = come_decrement_ref_count2(var_name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(is_contained_generics_class(type_154,info)) {
                                    __dec_obj137=type_154;
                                    type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=solve_generics(type_154,info->generics_type,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    if(!output_generics_struct(type_154,type_154,info)) {
                                        new_name_213=(char*)come_increment_ref_count(((char*)(right_value259=create_generics_name(type_154,info))));
                                        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_213);
                                        exit(7);
                                        new_name_213 = come_decrement_ref_count2(new_name_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                }
                                type_154->mConstant=type_154->mConstant||constant_105;
                                __dec_obj138=type_154->mAlignas;
                                type_154->mAlignas=(struct sNode*)come_increment_ref_count(alignas__121);
                                if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
                                type_154->mComeMemCore=type_154->mComeMemCore||come_mem_core__120;
                                type_154->mRegister=register__108;
                                type_154->mUnsigned=type_154->mUnsigned||unsigned__109;
                                type_154->mVolatile=volatile__107;
                                type_154->mStatic=type_154->mStatic||static__106;
                                type_154->mExtern=type_154->mExtern||extern__118;
                                type_154->mInline=type_154->mInline||inline__119;
                                type_154->mRestrict=type_154->mRestrict||restrict__113;
                                type_154->mLongLong=type_154->mLongLong||long_long_111;
                                type_154->mLong=type_154->mLong||long__110;
                                type_154->mShort=type_154->mShort||short__112;
                                type_154->mPointerNum+=pointer_num_149;
                                type_154->mHeap=type_154->mHeap||heap_150;
                            }
                            else {
                                if(struct__114) {
                                    klass_214=((struct sClass*)(right_value260=map$2charphsClassphp_operator_load_element(info->classes,type_name_104)));
                                    come_call_finalizer2(sClass_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(klass_214==((void*)0)&&*info->p!=60) {
                                        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_104),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value270=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value269=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1637, "struct sClass")))),type_name_104,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                        come_call_finalizer2(sClass_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sClass_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                __dec_obj139=type_154;
                                type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1641, "struct sType")))),type_name_104,(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                type_154->mConstant=type_154->mConstant||constant_105;
                                __dec_obj140=type_154->mAlignas;
                                type_154->mAlignas=(struct sNode*)come_increment_ref_count(alignas__121);
                                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
                                type_154->mComeMemCore=type_154->mComeMemCore||come_mem_core__120;
                                type_154->mRegister=register__108;
                                type_154->mUnsigned=type_154->mUnsigned||unsigned__109;
                                type_154->mVolatile=volatile__107;
                                type_154->mStatic=type_154->mStatic||static__106;
                                type_154->mExtern=type_154->mExtern||extern__118;
                                type_154->mInline=type_154->mInline||inline__119;
                                type_154->mRestrict=type_154->mRestrict||restrict__113;
                                type_154->mLongLong=type_154->mLongLong||long_long_111;
                                type_154->mLong=type_154->mLong||long__110;
                                type_154->mShort=type_154->mShort||short__112;
                                type_154->mPointerNum+=pointer_num_149;
                                type_154->mHeap=type_154->mHeap||heap_150;
                            }
                        }
                    }
                    skip_pointer_attribute(info);
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_154->mPointerNum++;
                        if(type_154->mNoSolvedGenericsType->v1) {
                            type_154->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(*info->p==37) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_154->mHeap=(_Bool)1;
                        if(type_154->mNoSolvedGenericsType->v1) {
                            type_154->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(*info->p==38) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_154->mNoHeap=(_Bool)1;
                        if(type_154->mNoSolvedGenericsType->v1) {
                            type_154->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    if(*info->p==63) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_154->mNullValue=(_Bool)1;
                    }
                    if(*info->p==124) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_154->mNoCallingDestructor=(_Bool)1;
                    }
                    skip_pointer_attribute(info);
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_154->mPointerNum++;
                        if(type_154->mNoSolvedGenericsType->v1) {
                            type_154->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(parse_multiple_type&&*info->p==44) {
                        types_259=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value274=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value273=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 1724, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        list$1sTypeph_push_back(types_259,(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_clone(type_154)))));
                        come_call_finalizer2(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value276=parse_type(info,(_Bool)0,(_Bool)0)));
                            type2_260=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                            name_261=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            err_262=multiple_assign_var5->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(!err_262) {
                                __result116__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value278=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value277=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1735, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer2(sType_finalize,type2_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                name_261 = come_decrement_ref_count2(name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sTypephp_finalize,types_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                var_name_155 = come_decrement_ref_count2(var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                return __result116__;
                            }
                            list$1sTypeph_push_back(types_259,(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(type2_260)))));
                            come_call_finalizer2(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name_261 = come_decrement_ref_count2(name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        num_tuples_263=list$1sTypeph_length(types_259);
                        __dec_obj141=type_154;
                        type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value280=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1743, "struct sType")))),((char*)(right_value281=xsprintf("tuple%d",num_tuples_263))),(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        type_154->mPointerNum++;
                        type_154->mHeap=(_Bool)1;
                        for(                        o2_saved_264=(struct list$1sTypeph*)come_increment_ref_count((types_259)),it_265=list$1sTypeph_begin((o2_saved_264));                        !list$1sTypeph_end((o2_saved_264));                        it_265=list$1sTypeph_next((o2_saved_264))                        ){
                            list$1sTypeph_push_back(type_154->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(it_265)))));
                            come_call_finalizer2(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(is_contained_generics_class(type_154,info)) {
                            __dec_obj142=type_154;
                            type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=solve_generics(type_154,info->generics_type,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(!output_generics_struct(type_154,type_154,info)) {
                                new_name_266=(char*)come_increment_ref_count(((char*)(right_value285=create_generics_name(type_154,info))));
                                right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                printf("output generics is failed(%s)\n",new_name_266);
                                exit(9);
                                new_name_266 = come_decrement_ref_count2(new_name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,types_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(var_name_between_brace_160&&*info->p==40) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p==58) {
                            __dec_obj143=var_name_155;
                            var_name_155=(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string(""))));
                            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(anonymous_name_123) {
                                num_anonymous_var_name_267++;
                                __dec_obj144=var_name_155;
                                var_name_155=(char*)come_increment_ref_count(((char*)(right_value287=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_267))));
                                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(xisalnum(*info->p)||*info->p==95) {
                                    __dec_obj145=var_name_155;
                                    var_name_155=(char*)come_increment_ref_count(((char*)(right_value288=parse_word(info))));
                                    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    num_anonymous_var_name_268++;
                                    __dec_obj146=var_name_155;
                                    var_name_155=(char*)come_increment_ref_count(((char*)(right_value289=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_268))));
                                    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        if(var_name_between_brace_160&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_269=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=expression_v13(info))));
                            if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_269;
                            __dec_obj147=type_154->mSizeNum;
                            type_154->mSizeNum=(struct sNode*)come_increment_ref_count(node_270);
                            if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_270) { node_270 = come_decrement_ref_count2(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_154->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=expression_v13(info))));
        if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1sNodeph_push_back(type_154->mArrayNum,(struct sNode*)come_increment_ref_count(node_271));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_271) { node_271 = come_decrement_ref_count2(node_271, ((struct sNode*)node_271)->finalize, ((struct sNode*)node_271)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    asm_name_272=(char*)come_increment_ref_count(((char*)(right_value292=parse_attribute(info))));
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj148=type_154->mAsmName;
    type_154->mAsmName=(char*)come_increment_ref_count(asm_name_272);
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    __result117__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value294=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value293=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1837, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_154),(char*)come_increment_ref_count(var_name_155),(_Bool)1)));
    type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_155 = come_decrement_ref_count2(var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_272 = come_decrement_ref_count2(asm_name_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result117__;
    type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__121) { alignas__121 = come_decrement_ref_count2(alignas__121, ((struct sNode*)alignas__121)->finalize, ((struct sNode*)alignas__121)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_155 = come_decrement_ref_count2(var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_272 = come_decrement_ref_count2(asm_name_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
struct sType* __dec_obj57;
char* __dec_obj58;
struct tuple3$3sTypephcharphbool* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj57=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                __dec_obj58=self->v2;
                                self->v2=(char*)come_increment_ref_count(v2);
                                __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct sType* default_value_175;
unsigned int hash_176;
unsigned int it_177;
_Bool _if_conditional295;
_Bool _if_conditional296;
struct sType* __result65__;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct sType* __result66__;
struct sType* __result67__;
struct sType* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_175, 0, sizeof(struct sType*));
memset(&hash_176, 0, sizeof(unsigned int));
memset(&it_177, 0, sizeof(unsigned int));
                memset(&default_value_175,0,sizeof(struct sType*));
                hash_176=string_get_hash_key(((char*)key))%self->size;
                it_177=hash_176;
                while((_Bool)1) {
                    if(self->item_existance[it_177]) {
                        if(string_equals(self->keys[it_177],key)) {
                            __result65__ = __result_obj__ = self->items[it_177];
                            come_call_finalizer2(sType_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result65__;
                        }
                        it_177++;
                        if(it_177>=self->size) {
                            it_177=0;
                        }
                        else {
                            if(it_177==hash_176) {
                                __result66__ = __result_obj__ = default_value_175;
                                come_call_finalizer2(sType_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result66__;
                            }
                        }
                    }
                    else {
                        __result67__ = __result_obj__ = default_value_175;
                        come_call_finalizer2(sType_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result67__;
                    }
                }
                __result68__ = __result_obj__ = default_value_175;
                come_call_finalizer2(sType_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer2(sType_finalize,default_value_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_180;
_Bool _if_conditional304;
_Bool __result76__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_180, 0, sizeof(char*));
                    for(                    it_180=list$1charph_begin(self);                    !list$1charph_end(self);                    it_180=list$1charph_next(self)                    ){
                        if(string_operator_equals(it_180,item)) {
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
_Bool _if_conditional300;
char* result_178;
char* __result69__;
_Bool _if_conditional301;
char* __result70__;
char* result_179;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_178, 0, sizeof(char*));
memset(&result_179, 0, sizeof(char*));
                        if(self==((void*)0)) {
                            memset(&result_178,0,sizeof(char*));
                            __result69__ = __result_obj__ = result_178;
                            return __result69__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result70__ = __result_obj__ = self->it->item;
                            return __result70__;
                        }
                        memset(&result_179,0,sizeof(char*));
                        __result71__ = __result_obj__ = result_179;
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
_Bool _if_conditional302;
char* result_181;
char* __result73__;
_Bool _if_conditional303;
char* __result74__;
char* result_182;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_181, 0, sizeof(char*));
memset(&result_182, 0, sizeof(char*));
                        if(self==((void*)0)||self->it==((void*)0)) {
                            memset(&result_181,0,sizeof(char*));
                            __result73__ = __result_obj__ = result_181;
                            return __result73__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result74__ = __result_obj__ = self->it->item;
                            return __result74__;
                        }
                        memset(&result_182,0,sizeof(char*));
                        __result75__ = __result_obj__ = result_182;
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
_Bool _if_conditional306;
struct list_item$1charph* it_184;
int i_185;
_Bool _if_conditional307;
char* __result79__;
char* default_value_186;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_184, 0, sizeof(struct list_item$1charph*));
memset(&i_185, 0, sizeof(int));
memset(&default_value_186, 0, sizeof(char*));
                            if(position<0) {
                                position+=self->len;
                            }
                            it_184=self->head;
                            i_185=0;
                            while(it_184!=((void*)0)) {
                                if(position==i_185) {
                                    __result79__ = __result_obj__ = it_184->item;
                                    return __result79__;
                                }
                                it_184=it_184->next;
                                i_185++;
                            }
                            memset(&default_value_186,0,sizeof(char*));
                            __result80__ = __result_obj__ = default_value_186;
                            default_value_186 = come_decrement_ref_count2(default_value_186, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result80__;
                            default_value_186 = come_decrement_ref_count2(default_value_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj111;
struct tuple1$1sTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj111=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional318;
_Bool _if_conditional319;
memset(&__result_obj__, 0, sizeof(void*));
                        if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->type!=((void*)0)) {
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_205;
unsigned int hash_206;
unsigned int it_207;
_Bool _if_conditional331;
_Bool _if_conditional332;
struct sClass* __result85__;
_Bool _if_conditional339;
_Bool _if_conditional340;
struct sClass* __result86__;
struct sClass* __result87__;
struct sClass* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_205, 0, sizeof(struct sClass*));
memset(&hash_206, 0, sizeof(unsigned int));
memset(&it_207, 0, sizeof(unsigned int));
                                    memset(&default_value_205,0,sizeof(struct sClass*));
                                    hash_206=string_get_hash_key(((char*)key))%self->size;
                                    it_207=hash_206;
                                    while((_Bool)1) {
                                        if(self->item_existance[it_207]) {
                                            if(string_equals(self->keys[it_207],key)) {
                                                __result85__ = __result_obj__ = self->items[it_207];
                                                come_call_finalizer2(sClass_finalize,default_value_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                return __result85__;
                                            }
                                            it_207++;
                                            if(it_207>=self->size) {
                                                it_207=0;
                                            }
                                            else {
                                                if(it_207==hash_206) {
                                                    __result86__ = __result_obj__ = default_value_205;
                                                    come_call_finalizer2(sClass_finalize,default_value_205, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result86__;
                                                }
                                            }
                                        }
                                        else {
                                            __result87__ = __result_obj__ = default_value_205;
                                            come_call_finalizer2(sClass_finalize,default_value_205, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result87__;
                                        }
                                    }
                                    __result88__ = __result_obj__ = default_value_205;
                                    come_call_finalizer2(sClass_finalize,default_value_205, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result88__;
                                    come_call_finalizer2(sClass_finalize,default_value_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional338;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                                                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
                                                        self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_208;
struct list_item$1tuple2$2charphsTypephph* prev_it_209;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_208, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_209, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                            it_208=self->head;
                                                            while(it_208!=((void*)0)) {
                                                                prev_it_209=it_208;
                                                                it_208=it_208->next;
                                                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                                                                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional336;
_Bool _if_conditional337;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                                                                come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional349;
unsigned int hash_232;
unsigned int it_233;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool same_key_exist_250;
char* it2_253;
_Bool _if_conditional392;
_Bool _if_conditional393;
struct map$2charphsClassph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_232, 0, sizeof(unsigned int));
memset(&it_233, 0, sizeof(unsigned int));
memset(&same_key_exist_250, 0, sizeof(_Bool));
memset(&it2_253, 0, sizeof(char*));
                                            if(self->len*10>=self->size) {
                                                map$2charphsClassph_rehash(self);
                                            }
                                            hash_232=string_get_hash_key(key)%self->size;
                                            it_233=hash_232;
                                            while((_Bool)1) {
                                                if(self->item_existance[it_233]) {
                                                    if(string_equals(self->keys[it_233],key)) {
                                                        if(1) {
                                                            list$1charp_remove(self->key_list,self->keys[it_233]);
                                                            self->keys[it_233] = come_decrement_ref_count2(self->keys[it_233], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            self->keys[it_233]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            list$1charp_remove(self->key_list,self->keys[it_233]);
                                                            self->keys[it_233]=key;
                                                        }
                                                        if(1) {
                                                            come_call_finalizer2(sClass_finalize,self->items[it_233], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->items[it_233]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            self->items[it_233]=item;
                                                        }
                                                        break;
                                                    }
                                                    it_233++;
                                                    if(it_233>=self->size) {
                                                        it_233=0;
                                                    }
                                                    else {
                                                        if(it_233==hash_232) {
                                                            printf("unexpected error in map.insert\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    self->item_existance[it_233]=(_Bool)1;
                                                    if(1) {
                                                        self->keys[it_233]=(char*)come_increment_ref_count(key);
                                                    }
                                                    else {
                                                        self->keys[it_233]=key;
                                                    }
                                                    if(1) {
                                                        self->items[it_233]=(struct sClass*)come_increment_ref_count(item);
                                                    }
                                                    else {
                                                        self->items[it_233]=item;
                                                    }
                                                    self->len++;
                                                    break;
                                                }
                                            }
                                            same_key_exist_250=(_Bool)0;
                                            for(                                            it2_253=list$1charp_begin(self->key_list);                                            !list$1charp_end(self->key_list);                                            it2_253=list$1charp_next(self->key_list)                                            ){
                                                if(string_equals(it2_253,key)) {
                                                    same_key_exist_250=(_Bool)1;
                                                }
                                            }
                                            if(!same_key_exist_250) {
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
int size_215;
void* right_value261;
char** keys_216;
void* right_value262;
struct sClass** items_217;
void* right_value263;
_Bool* item_existance_218;
int len_219;
char* it_222;
struct sClass* default_value_225;
void* right_value264;
struct sClass* it2_228;
unsigned int hash_229;
int n_230;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
struct sClass* default_value_231;
void* right_value265;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_215, 0, sizeof(int));
right_value261 = (void*)0;
memset(&keys_216, 0, sizeof(char**));
right_value262 = (void*)0;
memset(&items_217, 0, sizeof(struct sClass**));
right_value263 = (void*)0;
memset(&item_existance_218, 0, sizeof(_Bool*));
memset(&len_219, 0, sizeof(int));
memset(&it_222, 0, sizeof(char*));
memset(&default_value_225, 0, sizeof(struct sClass*));
right_value264 = (void*)0;
memset(&it2_228, 0, sizeof(struct sClass*));
memset(&hash_229, 0, sizeof(unsigned int));
memset(&n_230, 0, sizeof(int));
memset(&default_value_231, 0, sizeof(struct sClass*));
right_value265 = (void*)0;
                                                    size_215=self->size*10;
                                                    keys_216=(char**)come_increment_ref_count(((char**)(right_value261=(char**)come_calloc(1, sizeof(char*)*(1*(size_215)), "./comelang2.h", 1331, "char*"))));
                                                    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    items_217=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value262=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_215)), "./comelang2.h", 1332, "struct sClass*"))));
                                                    come_call_finalizer2(sClass_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    item_existance_218=(_Bool*)come_increment_ref_count(((_Bool*)(right_value263=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_215)), "./comelang2.h", 1333, "_Bool"))));
                                                    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    len_219=0;
                                                    for(                                                    it_222=map$2charphsClassph_begin(self);                                                    !map$2charphsClassph_end(self);                                                    it_222=map$2charphsClassph_next(self)                                                    ){
                                                        memset(&default_value_225,0,sizeof(struct sClass*));
                                                        it2_228=((struct sClass*)(right_value264=map$2charphsClassph_at(self,it_222,default_value_225)));
                                                        come_call_finalizer2(sClass_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        hash_229=string_get_hash_key(it_222)%size_215;
                                                        n_230=hash_229;
                                                        while((_Bool)1) {
                                                            if(item_existance_218[n_230]) {
                                                                n_230++;
                                                                if(n_230>=size_215) {
                                                                    n_230=0;
                                                                }
                                                                else {
                                                                    if(n_230==hash_229) {
                                                                        printf("unexpected error in map.rehash(1)\n");
                                                                        stackframe();
                                                                        exit(2);
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                item_existance_218[n_230]=(_Bool)1;
                                                                keys_216[n_230]=it_222;
                                                                items_217[n_230]=((struct sClass*)(right_value265=map$2charphsClassph_at(self,it_222,default_value_231)));
                                                                come_call_finalizer2(sClass_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                len_219++;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    come_free((char*)self->items);
                                                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    come_free((char*)self->keys);
                                                    self->keys=keys_216;
                                                    self->items=items_217;
                                                    self->item_existance=item_existance_218;
                                                    self->size=size_215;
                                                    self->len=len_219;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional350;
char* result_220;
char* __result92__;
_Bool _if_conditional351;
char* __result93__;
char* result_221;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_220, 0, sizeof(char*));
memset(&result_221, 0, sizeof(char*));
                                                        if(self==((void*)0)) {
                                                            memset(&result_220,0,sizeof(char*));
                                                            __result92__ = __result_obj__ = result_220;
                                                            return __result92__;
                                                        }
                                                        self->key_list->it=self->key_list->head;
                                                        if(self->key_list->it) {
                                                            __result93__ = __result_obj__ = self->key_list->it->item;
                                                            return __result93__;
                                                        }
                                                        memset(&result_221,0,sizeof(char*));
                                                        __result94__ = __result_obj__ = result_221;
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
_Bool _if_conditional352;
char* result_223;
char* __result96__;
_Bool _if_conditional353;
char* __result97__;
char* result_224;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_223, 0, sizeof(char*));
memset(&result_224, 0, sizeof(char*));
                                                        if(self==((void*)0)||self->key_list->it==((void*)0)) {
                                                            memset(&result_223,0,sizeof(char*));
                                                            __result96__ = __result_obj__ = result_223;
                                                            return __result96__;
                                                        }
                                                        self->key_list->it=self->key_list->it->next;
                                                        if(self->key_list->it) {
                                                            __result97__ = __result_obj__ = self->key_list->it->item;
                                                            return __result97__;
                                                        }
                                                        memset(&result_224,0,sizeof(char*));
                                                        __result98__ = __result_obj__ = result_224;
                                                        return __result98__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_226;
unsigned int it_227;
_Bool _if_conditional354;
_Bool _if_conditional355;
struct sClass* __result99__;
_Bool _if_conditional356;
_Bool _if_conditional357;
struct sClass* __result100__;
struct sClass* __result101__;
struct sClass* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_226, 0, sizeof(unsigned int));
memset(&it_227, 0, sizeof(unsigned int));
                                                            hash_226=string_get_hash_key(((char*)key))%self->size;
                                                            it_227=hash_226;
                                                            while((_Bool)1) {
                                                                if(self->item_existance[it_227]) {
                                                                    if(string_equals(self->keys[it_227],key)) {
                                                                        __result99__ = __result_obj__ = self->items[it_227];
                                                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result99__;
                                                                    }
                                                                    it_227++;
                                                                    if(it_227>=self->size) {
                                                                        it_227=0;
                                                                    }
                                                                    else {
                                                                        if(it_227==hash_226) {
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
int it2_234;
struct list_item$1charp* it_235;
_Bool _if_conditional364;
struct list$1charp* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_234, 0, sizeof(int));
memset(&it_235, 0, sizeof(struct list_item$1charp*));
                                                                it2_234=0;
                                                                it_235=self->head;
                                                                while(it_235!=((void*)0)) {
                                                                    if(string_equals(it_235->item,item)) {
                                                                        list$1charp_delete(self,it2_234,it2_234+1);
                                                                        break;
                                                                    }
                                                                    it2_234++;
                                                                    it_235=it_235->next;
                                                                }
                                                                __result106__ = __result_obj__ = self;
                                                                return __result106__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
int tmp_236;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
struct list$1charp* __result103__;
_Bool _if_conditional371;
_Bool _if_conditional372;
struct list_item$1charp* it_239;
int i_240;
_Bool _if_conditional373;
struct list_item$1charp* prev_it_241;
_Bool _if_conditional374;
_Bool _if_conditional375;
struct list_item$1charp* it_242;
int i_243;
_Bool _if_conditional376;
_Bool _if_conditional377;
struct list_item$1charp* prev_it_244;
struct list_item$1charp* it_245;
struct list_item$1charp* head_prev_it_246;
struct list_item$1charp* tail_it_247;
int i_248;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
struct list_item$1charp* prev_it_249;
_Bool _if_conditional381;
_Bool _if_conditional382;
struct list$1charp* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_236, 0, sizeof(int));
memset(&it_239, 0, sizeof(struct list_item$1charp*));
memset(&i_240, 0, sizeof(int));
memset(&prev_it_241, 0, sizeof(struct list_item$1charp*));
memset(&it_242, 0, sizeof(struct list_item$1charp*));
memset(&i_243, 0, sizeof(int));
memset(&prev_it_244, 0, sizeof(struct list_item$1charp*));
memset(&it_245, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_246, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_247, 0, sizeof(struct list_item$1charp*));
memset(&i_248, 0, sizeof(int));
memset(&prev_it_249, 0, sizeof(struct list_item$1charp*));
                                                                            if(head<0) {
                                                                                head+=self->len;
                                                                            }
                                                                            if(tail<0) {
                                                                                tail+=self->len+1;
                                                                            }
                                                                            if(head>tail) {
                                                                                tmp_236=tail;
                                                                                tail=head;
                                                                                head=tmp_236;
                                                                            }
                                                                            if(head<0) {
                                                                                head=0;
                                                                            }
                                                                            if(tail>self->len) {
                                                                                tail=self->len;
                                                                            }
                                                                            if(head==tail) {
                                                                                __result103__ = __result_obj__ = self;
                                                                                return __result103__;
                                                                            }
                                                                            if(head==0&&tail==self->len) {
                                                                                list$1charp_reset(self);
                                                                            }
                                                                            else {
                                                                                if(head==0) {
                                                                                    it_239=self->head;
                                                                                    i_240=0;
                                                                                    while(it_239!=((void*)0)) {
                                                                                        if(i_240<tail) {
                                                                                            prev_it_241=it_239;
                                                                                            it_239=it_239->next;
                                                                                            i_240++;
                                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            self->len--;
                                                                                        }
                                                                                        else {
                                                                                            if(i_240==tail) {
                                                                                                self->head=it_239;
                                                                                                self->head->prev=((void*)0);
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                it_239=it_239->next;
                                                                                                i_240++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(tail==self->len) {
                                                                                        it_242=self->head;
                                                                                        i_243=0;
                                                                                        while(it_242!=((void*)0)) {
                                                                                            if(i_243==head) {
                                                                                                self->tail=it_242->prev;
                                                                                                self->tail->next=((void*)0);
                                                                                            }
                                                                                            if(i_243>=head) {
                                                                                                prev_it_244=it_242;
                                                                                                it_242=it_242->next;
                                                                                                i_243++;
                                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                it_242=it_242->next;
                                                                                                i_243++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        it_245=self->head;
                                                                                        head_prev_it_246=((void*)0);
                                                                                        tail_it_247=((void*)0);
                                                                                        i_248=0;
                                                                                        while(it_245!=((void*)0)) {
                                                                                            if(i_248==head) {
                                                                                                head_prev_it_246=it_245->prev;
                                                                                            }
                                                                                            if(i_248==tail) {
                                                                                                tail_it_247=it_245;
                                                                                            }
                                                                                            if(i_248>=head&&i_248<tail) {
                                                                                                prev_it_249=it_245;
                                                                                                it_245=it_245->next;
                                                                                                i_248++;
                                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                it_245=it_245->next;
                                                                                                i_248++;
                                                                                            }
                                                                                        }
                                                                                        if(head_prev_it_246!=((void*)0)) {
                                                                                            head_prev_it_246->next=tail_it_247;
                                                                                        }
                                                                                        if(tail_it_247!=((void*)0)) {
                                                                                            tail_it_247->prev=head_prev_it_246;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            __result105__ = __result_obj__ = self;
                                                                            return __result105__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_237;
struct list_item$1charp* prev_it_238;
struct list$1charp* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_237, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_238, 0, sizeof(struct list_item$1charp*));
                                                                                    it_237=self->head;
                                                                                    while(it_237!=((void*)0)) {
                                                                                        prev_it_238=it_237;
                                                                                        it_237=it_237->next;
                                                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional388;
char* result_251;
char* __result107__;
_Bool _if_conditional389;
char* __result108__;
char* result_252;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_251, 0, sizeof(char*));
memset(&result_252, 0, sizeof(char*));
                                                if(self==((void*)0)) {
                                                    memset(&result_251,0,sizeof(char*));
                                                    __result107__ = __result_obj__ = result_251;
                                                    return __result107__;
                                                }
                                                self->it=self->head;
                                                if(self->it) {
                                                    __result108__ = __result_obj__ = self->it->item;
                                                    return __result108__;
                                                }
                                                memset(&result_252,0,sizeof(char*));
                                                __result109__ = __result_obj__ = result_252;
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
_Bool _if_conditional390;
char* result_254;
char* __result111__;
_Bool _if_conditional391;
char* __result112__;
char* result_255;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_254, 0, sizeof(char*));
memset(&result_255, 0, sizeof(char*));
                                                if(self==((void*)0)||self->it==((void*)0)) {
                                                    memset(&result_254,0,sizeof(char*));
                                                    __result111__ = __result_obj__ = result_254;
                                                    return __result111__;
                                                }
                                                self->it=self->it->next;
                                                if(self->it) {
                                                    __result112__ = __result_obj__ = self->it->item;
                                                    return __result112__;
                                                }
                                                memset(&result_255,0,sizeof(char*));
                                                __result113__ = __result_obj__ = result_255;
                                                return __result113__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional394;
void* right_value266;
struct list_item$1charp* litem_256;
_Bool _if_conditional395;
void* right_value267;
struct list_item$1charp* litem_257;
void* right_value268;
struct list_item$1charp* litem_258;
struct list$1charp* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
memset(&litem_256, 0, sizeof(struct list_item$1charp*));
right_value267 = (void*)0;
memset(&litem_257, 0, sizeof(struct list_item$1charp*));
right_value268 = (void*)0;
memset(&litem_258, 0, sizeof(struct list_item$1charp*));
                                                    if(self->len==0) {
                                                        litem_256=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value266=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 225, "struct list_item$1charp"))));
                                                        come_call_finalizer2(list_item$1charpp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_256->prev=((void*)0);
                                                        litem_256->next=((void*)0);
                                                        litem_256->item=item;
                                                        self->tail=litem_256;
                                                        self->head=litem_256;
                                                    }
                                                    else {
                                                        if(self->len==1) {
                                                            litem_257=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value267=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 235, "struct list_item$1charp"))));
                                                            come_call_finalizer2(list_item$1charpp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_257->prev=self->head;
                                                            litem_257->next=((void*)0);
                                                            litem_257->item=item;
                                                            self->tail=litem_257;
                                                            self->head->next=litem_257;
                                                        }
                                                        else {
                                                            litem_258=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value268=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 245, "struct list_item$1charp"))));
                                                            come_call_finalizer2(list_item$1charpp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_258->prev=self->tail;
                                                            litem_258->next=((void*)0);
                                                            litem_258->item=item;
                                                            self->tail->next=litem_258;
                                                            self->tail=litem_258;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result114__ = __result_obj__ = self;
                                                    return __result114__;
}

