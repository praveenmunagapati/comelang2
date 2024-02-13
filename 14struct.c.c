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

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    perror(msg);
    stackframe();
    exit(4);
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value0 = (void*)0;
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
right_value1 = (void*)0;
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1950, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0, right_value0 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value1, right_value1 = (void*)0;
    __freed_obj__ = 0;
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result2__;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value2 = (void*)0;
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
right_value3 = (void*)0;
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1960, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2, right_value2 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value3, right_value3 = (void*)0;
    __freed_obj__ = 0;
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result3__;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value4 = (void*)0;
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
right_value5 = (void*)0;
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1970, "struct smart_pointer$1short"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4, right_value4 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value5, right_value5 = (void*)0;
    __freed_obj__ = 0;
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result4__;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value6 = (void*)0;
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
right_value7 = (void*)0;
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1980, "struct smart_pointer$1int"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6, right_value6 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value7, right_value7 = (void*)0;
    __freed_obj__ = 0;
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result5__;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value8 = (void*)0;
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
right_value9 = (void*)0;
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1990, "struct smart_pointer$1long"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8, right_value8 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value9, right_value9 = (void*)0;
    __freed_obj__ = 0;
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result6__;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
}

// body function


static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

char* get_none_generics_name(char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_5;
_Bool _while_condtional1;
_Bool _if_conditional5;
void* right_value10;
void* right_value11;
char* __result7__;
void* right_value12;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_5, 0, sizeof(char*));
right_value10 = (void*)0;
right_value11 = (void*)0;
right_value12 = (void*)0;
    p_5=class_name;
    while(_while_condtional1=*p_5,    _while_condtional1) {
        if(_if_conditional5=*p_5==36,        _if_conditional5) {
            __result7__ = __result_obj__ = ((char*)(right_value11=string_substring(((char*)(right_value10=__builtin_string(class_name))),0,p_5-class_name)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
            if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value10, right_value10 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value11, right_value11 = (void*)0;
            __freed_obj__ = 0;
            return __result7__;
        }
        else {
            p_5++;
        }
    }
    __result8__ = __result_obj__ = ((char*)(right_value12=__builtin_string(class_name)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12, right_value12 = (void*)0;
    __freed_obj__ = 0;
    return __result8__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
void* right_value14;
struct buffer* buf_6;
struct sClass* klass_7;
char* class_name_8;
_Bool _if_conditional6;
int i_9;
_Bool _for_condtionalA1;
void* right_value15;
struct sType* type_19;
void* right_value16;
char* type_name_20;
int i_21;
_Bool _for_condtionalA2;
_Bool _if_conditional25;
void* right_value17;
char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value13 = (void*)0;
right_value14 = (void*)0;
memset(&buf_6, 0, sizeof(struct buffer*));
memset(&klass_7, 0, sizeof(struct sClass*));
memset(&class_name_8, 0, sizeof(char*));
memset(&i_9, 0, sizeof(int));
right_value15 = (void*)0;
memset(&type_19, 0, sizeof(struct sType*));
right_value16 = (void*)0;
memset(&type_name_20, 0, sizeof(char*));
memset(&i_21, 0, sizeof(int));
right_value17 = (void*)0;
    buf_6=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13, right_value13 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value14, right_value14 = (void*)0;
    __freed_obj__ = 0;
    klass_7=generics_type->mClass;
    class_name_8=klass_7->mName;
    buffer_append_str(buf_6,class_name_8);
    if(_if_conditional6=list$1sTypeph_length(generics_type->mGenericsTypes)>0,    _if_conditional6) {
        buffer_append_char(buf_6,36);
        buffer_append_char(buf_6,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(
        i_9=0 ,        0;        _for_condtionalA1=        i_9<list$1sTypeph_length(generics_type->mGenericsTypes) ,        _for_condtionalA1;        i_9++ ,        0        ){
            type_19=((struct sType*)(right_value15=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_9)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value15, right_value15 = (void*)0;
            __freed_obj__ = 0;
            type_name_20=(char*)come_increment_ref_count(((char*)(right_value16=create_generics_name(type_19,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value16, right_value16 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(buf_6,type_name_20);
            for(
            i_21=0 ,            0;            _for_condtionalA2=            i_21<type_19->mPointerNum ,            _for_condtionalA2;            i_21++ ,            0            ){
                buffer_append_char(buf_6,112);
            }
            if(_if_conditional25=type_19->mHeap,            _if_conditional25) {
                buffer_append_str(buf_6,"h");
            }
            if(type_name_20 && !__freed_obj__) { type_name_20 = come_decrement_ref_count(type_name_20, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    __result12__ = __result_obj__ = ((char*)(right_value17=buffer_to_string(buf_6)));
    if(buf_6 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_6, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value17, right_value17 = (void*)0;
    __freed_obj__ = 0;
    return __result12__;
    if(buf_6 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_6, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result9__ = self->len;
        return __result9__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
struct list_item$1sTypeph* it_10;
int i_11;
_Bool _while_condtional2;
_Bool _if_conditional8;
struct sType* __result10__;
struct sType* default_value_12;
struct sType* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
                if(default_value_12 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result11__;
                if(default_value_12 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional9=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional9) {
                        if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional11=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional11) {
                        if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional12=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional12) {
                        if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional13=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional13) {
                        if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional15) {
                        if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional17) {
                        if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional18) {
                        if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional20) {
                        if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional21) {
                        if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional22) {
                        if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional23) {
                        if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional24) {
                        if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional10=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional10) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_13;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sTypeph*));
                            it_13=self->head;
                            while(_while_condtional3=it_13!=((void*)0),                            _while_condtional3) {
                                prev_it_14=it_13;
                                it_13=it_13->next;
                                if(prev_it_14 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional14) {
                                        if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_15;
_Bool _while_condtional4;
struct list_item$1sNodeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sNodeph*));
                            it_15=self->head;
                            while(_while_condtional4=it_15!=((void*)0),                            _while_condtional4) {
                                prev_it_16=it_15;
                                it_15=it_15->next;
                                if(prev_it_16 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional16) {
                                        if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_17;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                            it_17=self->head;
                            while(_while_condtional5=it_17!=((void*)0),                            _while_condtional5) {
                                prev_it_18=it_17;
                                it_17=it_17->next;
                                if(prev_it_18 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional19) {
                                        if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
void* right_value18;
void* right_value19;
struct buffer* buf_22;
void* right_value20;
struct list$1tuple2$2charphsTypephph* o2_saved_23;
struct tuple2$2charphsTypeph* it_26;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_29;
struct sType* type_30;
void* right_value21;
_Bool _if_conditional34;
void* right_value22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value18 = (void*)0;
right_value19 = (void*)0;
memset(&buf_22, 0, sizeof(struct buffer*));
right_value20 = (void*)0;
memset(&o2_saved_23, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_26, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_29, 0, sizeof(char*));
memset(&type_30, 0, sizeof(struct sType*));
memset(&name_29, 0, sizeof(char*));
memset(&type_30, 0, sizeof(struct sType*));
right_value21 = (void*)0;
right_value22 = (void*)0;
    if(_if_conditional26=!klass->mOutputed,    _if_conditional26) {
        klass->mOutputed=(_Bool)1;
        buf_22=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value18=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value18, right_value18 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value19);
        if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value19, right_value19 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(buf_22,((char*)(right_value20=xsprintf("struct %s\n{\n",klass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value20, right_value20 = (void*)0;
        __freed_obj__ = 0;
        for(
        o2_saved_23=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_26=list$1tuple2$2charphsTypephph_begin((o2_saved_23)) ,        0;        _for_condtionalA3=        !list$1tuple2$2charphsTypephph_end((o2_saved_23)) ,        _for_condtionalA3;        it_26=list$1tuple2$2charphsTypephph_next((o2_saved_23)) ,        0        ){
            multiple_assign_var1=it_26;
            name_29=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            type_30=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
            type_30->mStatic=(_Bool)0;
            buffer_append_str(buf_22,"    ");
            buffer_append_str(buf_22,((char*)(right_value21=make_define_var(type_30,name_29,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value21, right_value21 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(buf_22,";\n");
            if(name_29 && !__freed_obj__) { name_29 = come_decrement_ref_count(name_29, (void*)0, (void*)0, 0, 0, 0); }
            if(type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_23 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_23, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_22,"};\n");
        if(_if_conditional34=info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname),        _if_conditional34) {
        }
        else {
            add_come_code_at_source_head(info,"%s",((char*)(right_value22=buffer_to_string(buf_22))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value22, right_value22 = (void*)0;
            __freed_obj__ = 0;
        }
        if(buf_22 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
struct tuple2$2charphsTypeph* result_24;
struct tuple2$2charphsTypeph* __result13__;
_Bool _if_conditional28;
struct tuple2$2charphsTypeph* __result14__;
struct tuple2$2charphsTypeph* result_25;
struct tuple2$2charphsTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_24, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_25, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional27=self==((void*)0),            _if_conditional27) {
                memset(&result_24,0,sizeof(struct tuple2$2charphsTypeph*));
                __result13__ = __result_obj__ = result_24;
                return __result13__;
            }
            self->it=self->head;
            if(_if_conditional28=self->it,            _if_conditional28) {
                __result14__ = __result_obj__ = self->it->item;
                return __result14__;
            }
            memset(&result_25,0,sizeof(struct tuple2$2charphsTypeph*));
            __result15__ = __result_obj__ = result_25;
            return __result15__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result16__ = self==((void*)0)||self->it==((void*)0);
            return __result16__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
struct tuple2$2charphsTypeph* result_27;
struct tuple2$2charphsTypeph* __result17__;
_Bool _if_conditional30;
struct tuple2$2charphsTypeph* __result18__;
struct tuple2$2charphsTypeph* result_28;
struct tuple2$2charphsTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_27, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_28, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional29=self==((void*)0)||self->it==((void*)0),            _if_conditional29) {
                memset(&result_27,0,sizeof(struct tuple2$2charphsTypeph*));
                __result17__ = __result_obj__ = result_27;
                return __result17__;
            }
            self->it=self->it->next;
            if(_if_conditional30=self->it,            _if_conditional30) {
                __result18__ = __result_obj__ = self->it->item;
                return __result18__;
            }
            memset(&result_28,0,sizeof(struct tuple2$2charphsTypeph*));
            __result19__ = __result_obj__ = result_28;
            return __result19__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_31;
_Bool _while_condtional6;
struct list_item$1tuple2$2charphsTypephph* prev_it_32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_31, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_32, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            it_31=self->head;
            while(_while_condtional6=it_31!=((void*)0),            _while_condtional6) {
                prev_it_32=it_31;
                it_31=it_31->next;
                if(prev_it_32 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_32, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional31) {
                        if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional32) {
                                if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional33=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional33) {
                                if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_33;
_Bool _if_conditional35;
_Bool __result20__;
int i_34;
_Bool _for_condtionalA4;
void* right_value23;
_Bool result_35;
_Bool _if_conditional36;
_Bool __result21__;
_Bool __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_33, 0, sizeof(struct sClass*));
memset(&i_34, 0, sizeof(int));
right_value23 = (void*)0;
memset(&result_35, 0, sizeof(_Bool));
    klass_33=type->mClass;
    if(_if_conditional35=klass_33->mGenerics,    _if_conditional35) {
        __result20__ = (_Bool)0;
        return __result20__;
    }
    for(
    i_34=0 ,    0;    _for_condtionalA4=    i_34<list$1sTypeph_length(type->mGenericsTypes) ,    _for_condtionalA4;    i_34++ ,    0    ){
        result_35=is_no_contained_generics_types(((struct sType*)(right_value23=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_34))),info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
        if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value23, right_value23 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional36=!result_35,        _if_conditional36) {
            __result21__ = (_Bool)0;
            return __result21__;
        }
    }
    __result22__ = (_Bool)1;
    return __result22__;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value24;
char* new_name_36;
_Bool _if_conditional41;
void* right_value59;
struct sType* type2_57;
void* right_value60;
struct sClass* generics_class_61;
_Bool _if_conditional119;
_Bool __result49__;
void* right_value61;
void* right_value62;
struct sClass* new_class_62;
void* right_value71;
int i_107;
struct list$1tuple2$2charphsTypephph* o2_saved_108;
struct tuple2$2charphsTypeph* it_109;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_110;
struct sType* type_111;
void* right_value72;
struct sType* new_type_112;
void* right_value76;
void* right_value77;
void* right_value78;
void* right_value79;
void* right_value80;
struct sType* __dec_obj33;
_Bool _if_conditional171;
void* right_value81;
struct sClass* generics_class_118;
_Bool _if_conditional172;
_Bool __result77__;
void* right_value82;
void* right_value83;
struct sClass* new_class_119;
void* right_value84;
int i_120;
struct list$1tuple2$2charphsTypephph* o2_saved_121;
struct tuple2$2charphsTypeph* it_122;
_Bool _for_condtionalA8;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_123;
struct sType* type_124;
void* right_value85;
struct sType* new_type_125;
void* right_value86;
void* right_value87;
void* right_value88;
void* right_value89;
void* right_value90;
struct sType* __dec_obj34;
_Bool _if_conditional173;
void* right_value91;
struct sType* __dec_obj35;
void* right_value92;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value24 = (void*)0;
memset(&new_name_36, 0, sizeof(char*));
right_value59 = (void*)0;
memset(&type2_57, 0, sizeof(struct sType*));
right_value60 = (void*)0;
memset(&generics_class_61, 0, sizeof(struct sClass*));
right_value61 = (void*)0;
right_value62 = (void*)0;
memset(&new_class_62, 0, sizeof(struct sClass*));
right_value71 = (void*)0;
memset(&i_107, 0, sizeof(int));
memset(&o2_saved_108, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_109, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_110, 0, sizeof(char*));
memset(&type_111, 0, sizeof(struct sType*));
memset(&name_110, 0, sizeof(char*));
memset(&type_111, 0, sizeof(struct sType*));
right_value72 = (void*)0;
memset(&new_type_112, 0, sizeof(struct sType*));
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&generics_class_118, 0, sizeof(struct sClass*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&new_class_119, 0, sizeof(struct sClass*));
right_value84 = (void*)0;
memset(&i_120, 0, sizeof(int));
memset(&o2_saved_121, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_122, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_123, 0, sizeof(char*));
memset(&type_124, 0, sizeof(struct sType*));
memset(&name_123, 0, sizeof(char*));
memset(&type_124, 0, sizeof(struct sType*));
right_value85 = (void*)0;
memset(&new_type_125, 0, sizeof(struct sType*));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
    new_name_36=(char*)come_increment_ref_count(((char*)(right_value24=create_generics_name(type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value24, right_value24 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional41=is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(info->classes,new_name_36),    _if_conditional41) {
        type2_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value59, right_value59 = (void*)0;
        __freed_obj__ = 0;
        generics_class_61=((struct sClass*)(right_value60=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value60, right_value60 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional119=generics_class_61==((void*)0),        _if_conditional119) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result49__ = (_Bool)0;
            if(type2_57 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_57, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(new_name_36 && !__freed_obj__) { new_name_36 = come_decrement_ref_count(new_name_36, (void*)0, (void*)0, 0, 0, 0); }
            return __result49__;
        }
        new_class_62=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value62=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value61=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 120, "struct sClass")))),new_name_36,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value61, right_value61 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value62);
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value62, right_value62 = (void*)0;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value71=__builtin_string(new_name_36)))),(struct sClass*)come_increment_ref_count(new_class_62));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value71, right_value71 = (void*)0;
        __freed_obj__ = 0;
        i_107=0;
        for(
        o2_saved_108=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_61->mFields)),it_109=list$1tuple2$2charphsTypephph_begin((o2_saved_108)) ,        0;        _for_condtionalA7=        !list$1tuple2$2charphsTypephph_end((o2_saved_108)) ,        _for_condtionalA7;        it_109=list$1tuple2$2charphsTypephph_next((o2_saved_108)) ,        0        ){
            multiple_assign_var2=it_109;
            name_110=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_111=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            new_type_112=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=solve_generics(type_111,type2_57,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value72, right_value72 = (void*)0;
            __freed_obj__ = 0;
            list$1tuple2$2charphsTypephph_push_back(new_class_62->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value79=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value78=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 130, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value76=string_clone(name_110)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(new_type_112)))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value76, right_value76 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value77, right_value77 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value78, right_value78 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value79);
            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value79, right_value79 = (void*)0;
            __freed_obj__ = 0;
            if(name_110 && !__freed_obj__) { name_110 = come_decrement_ref_count(name_110, (void*)0, (void*)0, 0, 0, 0); }
            if(type_111 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_111, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(new_type_112 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_type_112, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_108 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_108, (void*)0, (void*)0, 0, 0, 0, 0); }
        __dec_obj33=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(type))));
        if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value80, right_value80 = (void*)0;
        __freed_obj__ = 0;
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_62;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_62,info);
        if(type2_57 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_57, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(new_class_62 && !__freed_obj__) { come_call_finalizer(sClass_finalize,new_class_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional171=!map$2charphsClassph_find(info->classes,new_name_36),        _if_conditional171) {
            generics_class_118=((struct sClass*)(right_value81=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value81, right_value81 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional172=generics_class_118==((void*)0),            _if_conditional172) {
                err_msg(info,"generics_class(%s) is null",type->mClass->mName);
                __result77__ = (_Bool)0;
                if(new_name_36 && !__freed_obj__) { new_name_36 = come_decrement_ref_count(new_name_36, (void*)0, (void*)0, 0, 0, 0); }
                return __result77__;
            }
            new_class_119=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value83=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value82=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 148, "struct sClass")))),new_name_36,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value82, right_value82 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value83);
            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value83, right_value83 = (void*)0;
            __freed_obj__ = 0;
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string(new_name_36)))),(struct sClass*)come_increment_ref_count(new_class_119));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value84, right_value84 = (void*)0;
            __freed_obj__ = 0;
            i_120=0;
            for(
            o2_saved_121=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_118->mFields)),it_122=list$1tuple2$2charphsTypephph_begin((o2_saved_121)) ,            0;            _for_condtionalA8=            !list$1tuple2$2charphsTypephph_end((o2_saved_121)) ,            _for_condtionalA8;            it_122=list$1tuple2$2charphsTypephph_next((o2_saved_121)) ,            0            ){
                multiple_assign_var3=it_122;
                name_123=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                type_124=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                new_type_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=solve_generics(type_124,generics_type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value85, right_value85 = (void*)0;
                __freed_obj__ = 0;
                list$1tuple2$2charphsTypephph_push_back(new_class_119->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value89=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value88=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 158, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value86=string_clone(name_123)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(new_type_125)))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value86, right_value86 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value87, right_value87 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value88, right_value88 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value89);
                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value89, right_value89 = (void*)0;
                __freed_obj__ = 0;
                if(name_123 && !__freed_obj__) { name_123 = come_decrement_ref_count(name_123, (void*)0, (void*)0, 0, 0, 0); }
                if(type_124 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_124, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(new_type_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_type_125, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_121 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_121, (void*)0, (void*)0, 0, 0, 0, 0); }
            __dec_obj34=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(type))));
            if(__dec_obj34) { come_call_finalizer(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value90, right_value90 = (void*)0;
            __freed_obj__ = 0;
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            type->mClass=new_class_119;
            list$1sTypeph_reset(type->mGenericsTypes);
            output_struct(new_class_119,info);
            if(new_class_119 && !__freed_obj__) { come_call_finalizer(sClass_finalize,new_class_119, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional173=type->mNoSolvedGenericsType->v1==((void*)0),            _if_conditional173) {
                __dec_obj35=type->mNoSolvedGenericsType->v1;
                type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(type))));
                if(__dec_obj35) { come_call_finalizer(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value91, right_value91 = (void*)0;
                __freed_obj__ = 0;
                type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            }
            type->mClass=((struct sClass*)(right_value92=map$2charphsClassphp_operator_load_element(info->classes,new_name_36)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value92, right_value92 = (void*)0;
            __freed_obj__ = 0;
            list$1sTypeph_reset(type->mGenericsTypes);
        }
    }
    __result78__ = (_Bool)1;
    if(new_name_36 && !__freed_obj__) { new_name_36 = come_decrement_ref_count(new_name_36, (void*)0, (void*)0, 0, 0, 0); }
    return __result78__;
    if(new_name_36 && !__freed_obj__) { new_name_36 = come_decrement_ref_count(new_name_36, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_37;
int it_38;
_Bool _while_condtional7;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool __result23__;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool __result24__;
_Bool __result25__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(int));
        hash_37=string_get_hash_key(((char*)key))%self->size;
        it_38=hash_37;
        while(_while_condtional7=(_Bool)1,        _while_condtional7) {
            if(_if_conditional37=self->item_existance[it_38],            _if_conditional37) {
                if(_if_conditional38=string_equals(self->keys[it_38],key),                _if_conditional38) {
                    __result23__ = (_Bool)1;
                    return __result23__;
                }
                it_38++;
                if(_if_conditional39=it_38>=self->size,                _if_conditional39) {
                    it_38=0;
                }
                else {
                    if(_if_conditional40=it_38==hash_37,                    _if_conditional40) {
                        __result24__ = (_Bool)0;
                        return __result24__;
                    }
                }
            }
            else {
                __result25__ = (_Bool)0;
                return __result25__;
            }
        }
        __result26__ = (_Bool)0;
        return __result26__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional42;
struct sType* __result27__;
void* right_value25;
struct sType* result_39;
_Bool _if_conditional43;
_Bool _if_conditional44;
void* right_value28;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional48;
void* right_value29;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional49;
void* right_value30;
char* __dec_obj9;
_Bool _if_conditional50;
void* right_value37;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional54;
void* right_value45;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional67;
_Bool _if_conditional68;
void* right_value46;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional69;
void* right_value53;
struct list$1charph* __dec_obj22;
_Bool _if_conditional73;
void* right_value54;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional74;
_Bool _if_conditional75;
void* right_value55;
struct sNode* __dec_obj24;
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
void* right_value56;
struct sNode* __dec_obj25;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
void* right_value57;
char* __dec_obj26;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
void* right_value58;
char* __dec_obj27;
struct sType* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value25 = (void*)0;
memset(&result_39, 0, sizeof(struct sType*));
right_value28 = (void*)0;
right_value29 = (void*)0;
right_value30 = (void*)0;
right_value37 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value53 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
right_value56 = (void*)0;
right_value57 = (void*)0;
right_value58 = (void*)0;
            if(_if_conditional42=self==(void*)0,            _if_conditional42) {
                __result27__ = __result_obj__ = (void*)0;
                return __result27__;
            }
            result_39=(struct sType*)come_increment_ref_count(((struct sType*)(right_value25=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value25, right_value25 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional43=self!=((void*)0),            _if_conditional43) {
                result_39->mClass=self->mClass;
            }
            if(_if_conditional44=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional44) {
                __dec_obj7=result_39->mNoSolvedGenericsType;
                result_39->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value28=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj7) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value28, right_value28 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional48=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional48) {
                __dec_obj8=result_39->mOriginalLoadVarType;
                result_39->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value29, right_value29 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional49=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional49) {
                __dec_obj9=result_39->mGenericsName;
                result_39->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value30=string_clone(self->mGenericsName))));
                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value30, right_value30 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional50=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional50) {
                __dec_obj13=result_39->mGenericsTypes;
                result_39->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value37=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value37, right_value37 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional54=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional54) {
                __dec_obj17=result_39->mArrayNum;
                result_39->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value45=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value45, right_value45 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                result_39->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional68=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional68) {
                __dec_obj18=result_39->mParamTypes;
                result_39->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value46=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value46, right_value46 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional69=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional69) {
                __dec_obj22=result_39->mParamNames;
                result_39->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value53=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj22) { come_call_finalizer(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value53, right_value53 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional73=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional73) {
                __dec_obj23=result_39->mResultType;
                result_39->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value54=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54, right_value54 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_39->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional75=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional75) {
                __dec_obj24=result_39->mAlignas;
                result_39->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(self->mAlignas))));
                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value55, right_value55 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_39->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_39->mShort=self->mShort;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_39->mLong=self->mLong;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_39->mLongLong=self->mLongLong;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_39->mConstant=self->mConstant;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_39->mRegister=self->mRegister;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_39->mVolatile=self->mVolatile;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_39->mStatic=self->mStatic;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_39->mExtern=self->mExtern;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_39->mRestrict=self->mRestrict;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_39->mImmutable=self->mImmutable;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_39->mHeap=self->mHeap;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_39->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_39->mDelegate=self->mDelegate;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_39->mShare=self->mShare;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_39->mClone=self->mClone;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_39->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_39->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_39->mRefference=self->mRefference;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_39->mException=self->mException;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                result_39->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                result_39->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                result_39->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional99=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional99) {
                __dec_obj25=result_39->mSizeNum;
                result_39->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value56=sNode_clone(self->mSizeNum))));
                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, ((struct sNode*)right_value56)->finalize, ((struct sNode*)right_value56)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value56, right_value56 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                result_39->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                result_39->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional102=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional102) {
                __dec_obj26=result_39->mOriginalTypeName;
                result_39->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value57=string_clone(self->mOriginalTypeName))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value57, right_value57 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                result_39->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                result_39->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                result_39->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                result_39->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                result_39->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                result_39->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                result_39->mInline=self->mInline;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                result_39->mNullValue=self->mNullValue;
            }
            if(_if_conditional111=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional111) {
                __dec_obj27=result_39->mAsmName;
                result_39->mAsmName=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->mAsmName))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value58, right_value58 = (void*)0;
                __freed_obj__ = 0;
            }
            __result44__ = __result_obj__ = result_39;
            if(result_39 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result44__;
            if(result_39 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
struct tuple1$1sTypeph* __result28__;
void* right_value26;
struct tuple1$1sTypeph* result_40;
_Bool _if_conditional47;
void* right_value27;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value26 = (void*)0;
memset(&result_40, 0, sizeof(struct tuple1$1sTypeph*));
right_value27 = (void*)0;
                    if(_if_conditional45=self==(void*)0,                    _if_conditional45) {
                        __result28__ = __result_obj__ = (void*)0;
                        return __result28__;
                    }
                    result_40=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value26=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value26, right_value26 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional47=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional47) {
                        __dec_obj6=result_40->v1;
                        result_40->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value27=sType_clone(self->v1))));
                        if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value27, right_value27 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    __result29__ = __result_obj__ = result_40;
                    if(result_40 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_40, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result29__;
                    if(result_40 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_40, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional46) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
struct list$1sTypeph* __result30__;
void* right_value31;
void* right_value32;
struct list$1sTypeph* result_41;
struct list_item$1sTypeph* it_42;
_Bool _while_condtional8;
void* right_value36;
struct list$1sTypeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value31 = (void*)0;
right_value32 = (void*)0;
memset(&result_41, 0, sizeof(struct list$1sTypeph*));
memset(&it_42, 0, sizeof(struct list_item$1sTypeph*));
right_value36 = (void*)0;
                    if(_if_conditional51=self==((void*)0),                    _if_conditional51) {
                        __result30__ = __result_obj__ = ((void*)0);
                        return __result30__;
                    }
                    result_41=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value32=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value31=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 140, "struct list$1sTypeph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value31, right_value31 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
                    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value32, right_value32 = (void*)0;
                    __freed_obj__ = 0;
                    it_42=self->head;
                    while(_while_condtional8=it_42!=((void*)0),                    _while_condtional8) {
                        list$1sTypeph_add(result_41,(struct sType*)come_increment_ref_count(((struct sType*)(right_value36=sType_clone(it_42->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value36, right_value36 = (void*)0;
                        __freed_obj__ = 0;
                        it_42=it_42->next;
                    }
                    __result33__ = __result_obj__ = result_41;
                    if(result_41 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_41, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result33__;
                    if(result_41 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result31__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result31__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
void* right_value33;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj10;
_Bool _if_conditional53;
void* right_value34;
struct list_item$1sTypeph* litem_44;
struct sType* __dec_obj11;
void* right_value35;
struct list_item$1sTypeph* litem_45;
struct sType* __dec_obj12;
struct list$1sTypeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value33 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
right_value34 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1sTypeph*));
right_value35 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional52=self->len==0,                            _if_conditional52) {
                                litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value33=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 154, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value33, right_value33 = (void*)0;
                                __freed_obj__ = 0;
                                litem_43->prev=((void*)0);
                                litem_43->next=((void*)0);
                                __dec_obj10=litem_43->item;
                                litem_43->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_43;
                                self->head=litem_43;
                            }
                            else {
                                if(_if_conditional53=self->len==1,                                _if_conditional53) {
                                    litem_44=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value34=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 164, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value34, right_value34 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_44->prev=self->head;
                                    litem_44->next=((void*)0);
                                    __dec_obj11=litem_44->item;
                                    litem_44->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_44;
                                    self->head->next=litem_44;
                                }
                                else {
                                    litem_45=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value35=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 174, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value35, right_value35 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_45->prev=self->tail;
                                    litem_45->next=((void*)0);
                                    __dec_obj12=litem_45->item;
                                    litem_45->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail->next=litem_45;
                                    self->tail=litem_45;
                                }
                            }
                            self->len++;
                            __result32__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result32__;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional55;
struct list$1sNodeph* __result34__;
void* right_value38;
void* right_value39;
struct list$1sNodeph* result_46;
struct list_item$1sNodeph* it_47;
_Bool _while_condtional9;
void* right_value44;
struct list$1sNodeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value38 = (void*)0;
right_value39 = (void*)0;
memset(&result_46, 0, sizeof(struct list$1sNodeph*));
memset(&it_47, 0, sizeof(struct list_item$1sNodeph*));
right_value44 = (void*)0;
                    if(_if_conditional55=self==((void*)0),                    _if_conditional55) {
                        __result34__ = __result_obj__ = ((void*)0);
                        return __result34__;
                    }
                    result_46=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value39=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value38=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 140, "struct list$1sNodeph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value38, right_value38 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value39);
                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value39, right_value39 = (void*)0;
                    __freed_obj__ = 0;
                    it_47=self->head;
                    while(_while_condtional9=it_47!=((void*)0),                    _while_condtional9) {
                        list$1sNodeph_add(result_46,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(it_47->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value44, right_value44 = (void*)0;
                        __freed_obj__ = 0;
                        it_47=it_47->next;
                    }
                    __result39__ = __result_obj__ = result_46;
                    if(result_46 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_46, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result39__;
                    if(result_46 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_46, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result35__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result35__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional56;
void* right_value40;
struct list_item$1sNodeph* litem_48;
struct sNode* __dec_obj14;
_Bool _if_conditional57;
void* right_value41;
struct list_item$1sNodeph* litem_49;
struct sNode* __dec_obj15;
void* right_value42;
struct list_item$1sNodeph* litem_50;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value40 = (void*)0;
memset(&litem_48, 0, sizeof(struct list_item$1sNodeph*));
right_value41 = (void*)0;
memset(&litem_49, 0, sizeof(struct list_item$1sNodeph*));
right_value42 = (void*)0;
memset(&litem_50, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional56=self->len==0,                            _if_conditional56) {
                                litem_48=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value40=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 154, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value40, right_value40 = (void*)0;
                                __freed_obj__ = 0;
                                litem_48->prev=((void*)0);
                                litem_48->next=((void*)0);
                                __dec_obj14=litem_48->item;
                                litem_48->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                                self->tail=litem_48;
                                self->head=litem_48;
                            }
                            else {
                                if(_if_conditional57=self->len==1,                                _if_conditional57) {
                                    litem_49=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value41=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 164, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value41, right_value41 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_49->prev=self->head;
                                    litem_49->next=((void*)0);
                                    __dec_obj15=litem_49->item;
                                    litem_49->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_49;
                                    self->head->next=litem_49;
                                }
                                else {
                                    litem_50=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value42=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 174, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value42, right_value42 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_50->prev=self->tail;
                                    litem_50->next=((void*)0);
                                    __dec_obj16=litem_50->item;
                                    litem_50->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                    self->tail->next=litem_50;
                                    self->tail=litem_50;
                                }
                            }
                            self->len++;
                            __result36__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            return __result36__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
struct sNode* __result37__;
void* right_value43;
struct sNode* result_51;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
struct sNode* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value43 = (void*)0;
memset(&result_51, 0, sizeof(struct sNode*));
                            if(_if_conditional58=self==(void*)0,                            _if_conditional58) {
                                __result37__ = __result_obj__ = (void*)0;
                                return __result37__;
                            }
                            result_51=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, ((struct sNode*)right_value43)->finalize, ((struct sNode*)right_value43)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value43, right_value43 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional59=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional59) {
                                result_51->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional60=self!=((void*)0),                            _if_conditional60) {
                                result_51->finalize=self->finalize;
                            }
                            if(_if_conditional61=self!=((void*)0),                            _if_conditional61) {
                                result_51->clone=self->clone;
                            }
                            if(_if_conditional62=self!=((void*)0),                            _if_conditional62) {
                                result_51->compile=self->compile;
                            }
                            if(_if_conditional63=self!=((void*)0),                            _if_conditional63) {
                                result_51->sline=self->sline;
                            }
                            if(_if_conditional64=self!=((void*)0),                            _if_conditional64) {
                                result_51->sname=self->sname;
                            }
                            if(_if_conditional65=self!=((void*)0),                            _if_conditional65) {
                                result_51->terminated=self->terminated;
                            }
                            if(_if_conditional66=self!=((void*)0),                            _if_conditional66) {
                                result_51->kind=self->kind;
                            }
                            __result38__ = __result_obj__ = result_51;
                            if(result_51 && !__freed_obj__) { result_51 = come_decrement_ref_count(result_51, ((struct sNode*)result_51)->finalize, ((struct sNode*)result_51)->_protocol_obj, 0, 1, 0); } 
                            return __result38__;
                            if(result_51 && !__freed_obj__) { result_51 = come_decrement_ref_count(result_51, ((struct sNode*)result_51)->finalize, ((struct sNode*)result_51)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional70;
struct list$1charph* __result40__;
void* right_value47;
void* right_value48;
struct list$1charph* result_52;
struct list_item$1charph* it_53;
_Bool _while_condtional10;
void* right_value52;
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value47 = (void*)0;
right_value48 = (void*)0;
memset(&result_52, 0, sizeof(struct list$1charph*));
memset(&it_53, 0, sizeof(struct list_item$1charph*));
right_value52 = (void*)0;
                    if(_if_conditional70=self==((void*)0),                    _if_conditional70) {
                        __result40__ = __result_obj__ = ((void*)0);
                        return __result40__;
                    }
                    result_52=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value48=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value47=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 140, "struct list$1charph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value47, right_value47 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value48);
                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value48, right_value48 = (void*)0;
                    __freed_obj__ = 0;
                    it_53=self->head;
                    while(_while_condtional10=it_53!=((void*)0),                    _while_condtional10) {
                        list$1charph_add(result_52,(char*)come_increment_ref_count(((char*)(right_value52=string_clone(it_53->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value52, right_value52 = (void*)0;
                        __freed_obj__ = 0;
                        it_53=it_53->next;
                    }
                    __result43__ = __result_obj__ = result_52;
                    if(result_52 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_52, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result43__;
                    if(result_52 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_52, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result41__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result41__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional71;
void* right_value49;
struct list_item$1charph* litem_54;
char* __dec_obj19;
_Bool _if_conditional72;
void* right_value50;
struct list_item$1charph* litem_55;
char* __dec_obj20;
void* right_value51;
struct list_item$1charph* litem_56;
char* __dec_obj21;
struct list$1charph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value49 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
right_value50 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
right_value51 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional71=self->len==0,                            _if_conditional71) {
                                litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 154, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                                if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value49, right_value49 = (void*)0;
                                __freed_obj__ = 0;
                                litem_54->prev=((void*)0);
                                litem_54->next=((void*)0);
                                __dec_obj19=litem_54->item;
                                litem_54->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_54;
                                self->head=litem_54;
                            }
                            else {
                                if(_if_conditional72=self->len==1,                                _if_conditional72) {
                                    litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value50=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 164, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value50, right_value50 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_55->prev=self->head;
                                    litem_55->next=((void*)0);
                                    __dec_obj20=litem_55->item;
                                    litem_55->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_55;
                                    self->head->next=litem_55;
                                }
                                else {
                                    litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value51=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 174, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                                    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value51, right_value51 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_56->prev=self->tail;
                                    litem_56->next=((void*)0);
                                    __dec_obj21=litem_56->item;
                                    litem_56->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                    self->tail->next=litem_56;
                                    self->tail=litem_56;
                                }
                            }
                            self->len++;
                            __result42__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result42__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_58;
unsigned int hash_59;
unsigned int it_60;
_Bool _while_condtional11;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct sClass* __result45__;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct sClass* __result46__;
struct sClass* __result47__;
struct sClass* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_58, 0, sizeof(struct sClass*));
memset(&hash_59, 0, sizeof(unsigned int));
memset(&it_60, 0, sizeof(unsigned int));
            memset(&default_value_58,0,sizeof(struct sClass*));
            hash_59=string_get_hash_key(((char*)key))%self->size;
            it_60=hash_59;
            while(_while_condtional11=(_Bool)1,            _while_condtional11) {
                if(_if_conditional112=self->item_existance[it_60],                _if_conditional112) {
                    if(_if_conditional113=string_equals(self->keys[it_60],key),                    _if_conditional113) {
                        __result45__ = __result_obj__ = self->items[it_60];
                        if(default_value_58 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                        return __result45__;
                    }
                    it_60++;
                    if(_if_conditional117=it_60>=self->size,                    _if_conditional117) {
                        it_60=0;
                    }
                    else {
                        if(_if_conditional118=it_60==hash_59,                        _if_conditional118) {
                            __result46__ = __result_obj__ = default_value_58;
                            if(default_value_58 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result46__;
                        }
                    }
                }
                else {
                    __result47__ = __result_obj__ = default_value_58;
                    if(default_value_58 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result47__;
                }
            }
            __result48__ = __result_obj__ = default_value_58;
            if(default_value_58 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result48__;
            if(default_value_58 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional114=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional114) {
                                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional115=self!=((void*)0)&&self->mFields!=((void*)0),                            _if_conditional115) {
                                if(self->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional116=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional116) {
                                if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional120;
unsigned int hash_80;
unsigned int it_81;
_Bool _while_condtional14;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool same_key_exist_98;
char* it2_101;
_Bool _for_condtionalA6;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct map$2charphsClassph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_80, 0, sizeof(unsigned int));
memset(&it_81, 0, sizeof(unsigned int));
memset(&same_key_exist_98, 0, sizeof(_Bool));
memset(&it2_101, 0, sizeof(char*));
            if(_if_conditional120=self->len*10>=self->size,            _if_conditional120) {
                map$2charphsClassph_rehash(self);
            }
            hash_80=string_get_hash_key(key)%self->size;
            it_81=hash_80;
            while(_while_condtional14=(_Bool)1,            _while_condtional14) {
                if(_if_conditional132=self->item_existance[it_81],                _if_conditional132) {
                    if(_if_conditional133=string_equals(self->keys[it_81],key),                    _if_conditional133) {
                        if(_if_conditional134=1,                        _if_conditional134) {
                            list$1charp_remove(self->key_list,self->keys[it_81]);
                            if(self->keys[it_81] && !__freed_obj__) { self->keys[it_81] = come_decrement_ref_count(self->keys[it_81], (void*)0, (void*)0, 0, 0, 0); }
                            self->keys[it_81]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_81]);
                            self->keys[it_81]=key;
                        }
                        if(_if_conditional154=1,                        _if_conditional154) {
                            if(self->items[it_81] && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->items[it_81], (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->items[it_81]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_81]=item;
                        }
                        break;
                    }
                    it_81++;
                    if(_if_conditional155=it_81>=self->size,                    _if_conditional155) {
                        it_81=0;
                    }
                    else {
                        if(_if_conditional156=it_81==hash_80,                        _if_conditional156) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_81]=(_Bool)1;
                    if(_if_conditional157=1,                    _if_conditional157) {
                        self->keys[it_81]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_81]=key;
                    }
                    if(_if_conditional158=1,                    _if_conditional158) {
                        self->items[it_81]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_81]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_98=(_Bool)0;
            for(
            it2_101=list$1charp_begin(self->key_list) ,            0;            _for_condtionalA6=            !list$1charp_end(self->key_list) ,            _for_condtionalA6;            it2_101=list$1charp_next(self->key_list) ,            0            ){
                if(_if_conditional163=string_equals(it2_101,key),                _if_conditional163) {
                    same_key_exist_98=(_Bool)1;
                }
            }
            if(_if_conditional164=!same_key_exist_98,            _if_conditional164) {
                list$1charp_push_back(self->key_list,key);
            }
            __result73__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result73__;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_63;
void* right_value63;
char** keys_64;
void* right_value64;
struct sClass** items_65;
void* right_value65;
_Bool* item_existance_66;
int len_67;
char* it_70;
_Bool _for_condtionalA5;
struct sClass* default_value_73;
void* right_value66;
struct sClass* it2_76;
unsigned int hash_77;
int n_78;
_Bool _while_condtional13;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct sClass* default_value_79;
void* right_value67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_63, 0, sizeof(int));
right_value63 = (void*)0;
memset(&keys_64, 0, sizeof(char**));
right_value64 = (void*)0;
memset(&items_65, 0, sizeof(struct sClass**));
right_value65 = (void*)0;
memset(&item_existance_66, 0, sizeof(_Bool*));
memset(&len_67, 0, sizeof(int));
memset(&it_70, 0, sizeof(char*));
memset(&default_value_73, 0, sizeof(struct sClass*));
right_value66 = (void*)0;
memset(&it2_76, 0, sizeof(struct sClass*));
memset(&hash_77, 0, sizeof(unsigned int));
memset(&n_78, 0, sizeof(int));
memset(&default_value_79, 0, sizeof(struct sClass*));
right_value67 = (void*)0;
                    size_63=self->size*10;
                    keys_64=(char**)come_increment_ref_count(((char**)(right_value63=(char**)come_calloc(1, sizeof(char*)*(1*(size_63)), "./comelang2.h", 1330, "char*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value63, right_value63 = (void*)0;
                    __freed_obj__ = 0;
                    items_65=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value64=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_63)), "./comelang2.h", 1331, "struct sClass*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value64, right_value64 = (void*)0;
                    __freed_obj__ = 0;
                    item_existance_66=(_Bool*)come_increment_ref_count(((_Bool*)(right_value65=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_63)), "./comelang2.h", 1332, "_Bool"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value65, right_value65 = (void*)0;
                    __freed_obj__ = 0;
                    len_67=0;
                    for(
                    it_70=map$2charphsClassph_begin(self) ,                    0;                    _for_condtionalA5=                    !map$2charphsClassph_end(self) ,                    _for_condtionalA5;                    it_70=map$2charphsClassph_next(self) ,                    0                    ){
                        memset(&default_value_73,0,sizeof(struct sClass*));
                        it2_76=((struct sClass*)(right_value66=map$2charphsClassph_at(self,it_70,default_value_73)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value66, right_value66 = (void*)0;
                        __freed_obj__ = 0;
                        hash_77=string_get_hash_key(it_70)%size_63;
                        n_78=hash_77;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional129=item_existance_66[n_78],                            _if_conditional129) {
                                n_78++;
                                if(_if_conditional130=n_78>=size_63,                                _if_conditional130) {
                                    n_78=0;
                                }
                                else {
                                    if(_if_conditional131=n_78==hash_77,                                    _if_conditional131) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_66[n_78]=(_Bool)1;
                                keys_64[n_78]=it_70;
                                items_65[n_78]=((struct sClass*)(right_value67=map$2charphsClassph_at(self,it_70,default_value_79)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value67, right_value67 = (void*)0;
                                __freed_obj__ = 0;
                                len_67++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    come_free((char*)self->keys);
                    self->keys=keys_64;
                    self->items=items_65;
                    self->item_existance=item_existance_66;
                    self->size=size_63;
                    self->len=len_67;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional121;
char* result_68;
char* __result50__;
_Bool _if_conditional122;
char* __result51__;
char* result_69;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_68, 0, sizeof(char*));
memset(&result_69, 0, sizeof(char*));
                        if(_if_conditional121=self==((void*)0),                        _if_conditional121) {
                            memset(&result_68,0,sizeof(char*));
                            __result50__ = __result_obj__ = result_68;
                            return __result50__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(_if_conditional122=self->key_list->it,                        _if_conditional122) {
                            __result51__ = __result_obj__ = self->key_list->it->item;
                            return __result51__;
                        }
                        memset(&result_69,0,sizeof(char*));
                        __result52__ = __result_obj__ = result_69;
                        return __result52__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result53__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result53__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional123;
char* result_71;
char* __result54__;
_Bool _if_conditional124;
char* __result55__;
char* result_72;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_71, 0, sizeof(char*));
memset(&result_72, 0, sizeof(char*));
                        if(_if_conditional123=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional123) {
                            memset(&result_71,0,sizeof(char*));
                            __result54__ = __result_obj__ = result_71;
                            return __result54__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(_if_conditional124=self->key_list->it,                        _if_conditional124) {
                            __result55__ = __result_obj__ = self->key_list->it->item;
                            return __result55__;
                        }
                        memset(&result_72,0,sizeof(char*));
                        __result56__ = __result_obj__ = result_72;
                        return __result56__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_74;
unsigned int it_75;
_Bool _while_condtional12;
_Bool _if_conditional125;
_Bool _if_conditional126;
struct sClass* __result57__;
_Bool _if_conditional127;
_Bool _if_conditional128;
struct sClass* __result58__;
struct sClass* __result59__;
struct sClass* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_74, 0, sizeof(unsigned int));
memset(&it_75, 0, sizeof(unsigned int));
                            hash_74=string_get_hash_key(((char*)key))%self->size;
                            it_75=hash_74;
                            while(_while_condtional12=(_Bool)1,                            _while_condtional12) {
                                if(_if_conditional125=self->item_existance[it_75],                                _if_conditional125) {
                                    if(_if_conditional126=string_equals(self->keys[it_75],key),                                    _if_conditional126) {
                                        __result57__ = __result_obj__ = self->items[it_75];
                                        if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result57__;
                                    }
                                    it_75++;
                                    if(_if_conditional127=it_75>=self->size,                                    _if_conditional127) {
                                        it_75=0;
                                    }
                                    else {
                                        if(_if_conditional128=it_75==hash_74,                                        _if_conditional128) {
                                            __result58__ = __result_obj__ = default_value;
                                            if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result58__;
                                        }
                                    }
                                }
                                else {
                                    __result59__ = __result_obj__ = default_value;
                                    if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result59__;
                                }
                            }
                            __result60__ = __result_obj__ = default_value;
                            if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result60__;
                            if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_82;
struct list_item$1charp* it_83;
_Bool _while_condtional15;
_Bool _if_conditional135;
struct list$1charp* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_82, 0, sizeof(int));
memset(&it_83, 0, sizeof(struct list_item$1charp*));
                                it2_82=0;
                                it_83=self->head;
                                while(_while_condtional15=it_83!=((void*)0),                                _while_condtional15) {
                                    if(_if_conditional135=string_equals(it_83->item,item),                                    _if_conditional135) {
                                        list$1charp_delete(self,it2_82,it2_82+1);
                                        break;
                                    }
                                    it2_82++;
                                    it_83=it_83->next;
                                }
                                __result64__ = __result_obj__ = self;
                                return __result64__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
int tmp_84;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct list$1charp* __result61__;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct list_item$1charp* it_87;
int i_88;
_Bool _while_condtional17;
_Bool _if_conditional144;
struct list_item$1charp* prev_it_89;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct list_item$1charp* it_90;
int i_91;
_Bool _while_condtional18;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct list_item$1charp* prev_it_92;
struct list_item$1charp* it_93;
struct list_item$1charp* head_prev_it_94;
struct list_item$1charp* tail_it_95;
int i_96;
_Bool _while_condtional19;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct list_item$1charp* prev_it_97;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list$1charp* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_84, 0, sizeof(int));
memset(&it_87, 0, sizeof(struct list_item$1charp*));
memset(&i_88, 0, sizeof(int));
memset(&prev_it_89, 0, sizeof(struct list_item$1charp*));
memset(&it_90, 0, sizeof(struct list_item$1charp*));
memset(&i_91, 0, sizeof(int));
memset(&prev_it_92, 0, sizeof(struct list_item$1charp*));
memset(&it_93, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_94, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_95, 0, sizeof(struct list_item$1charp*));
memset(&i_96, 0, sizeof(int));
memset(&prev_it_97, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional136=head<0,                                            _if_conditional136) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional137=tail<0,                                            _if_conditional137) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional138=head>tail,                                            _if_conditional138) {
                                                tmp_84=tail;
                                                tail=head;
                                                head=tmp_84;
                                            }
                                            if(_if_conditional139=head<0,                                            _if_conditional139) {
                                                head=0;
                                            }
                                            if(_if_conditional140=tail>self->len,                                            _if_conditional140) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional141=head==tail,                                            _if_conditional141) {
                                                __result61__ = __result_obj__ = self;
                                                return __result61__;
                                            }
                                            if(_if_conditional142=head==0&&tail==self->len,                                            _if_conditional142) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional143=head==0,                                                _if_conditional143) {
                                                    it_87=self->head;
                                                    i_88=0;
                                                    while(_while_condtional17=it_87!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional144=i_88<tail,                                                        _if_conditional144) {
                                                            prev_it_89=it_87;
                                                            it_87=it_87->next;
                                                            i_88++;
                                                            if(prev_it_89 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_89, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional145=i_88==tail,                                                            _if_conditional145) {
                                                                self->head=it_87;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_87=it_87->next;
                                                                i_88++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional146=tail==self->len,                                                    _if_conditional146) {
                                                        it_90=self->head;
                                                        i_91=0;
                                                        while(_while_condtional18=it_90!=((void*)0),                                                        _while_condtional18) {
                                                            if(_if_conditional147=i_91==head,                                                            _if_conditional147) {
                                                                self->tail=it_90->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional148=i_91>=head,                                                            _if_conditional148) {
                                                                prev_it_92=it_90;
                                                                it_90=it_90->next;
                                                                i_91++;
                                                                if(prev_it_92 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_90=it_90->next;
                                                                i_91++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_93=self->head;
                                                        head_prev_it_94=((void*)0);
                                                        tail_it_95=((void*)0);
                                                        i_96=0;
                                                        while(_while_condtional19=it_93!=((void*)0),                                                        _while_condtional19) {
                                                            if(_if_conditional149=i_96==head,                                                            _if_conditional149) {
                                                                head_prev_it_94=it_93->prev;
                                                            }
                                                            if(_if_conditional150=i_96==tail,                                                            _if_conditional150) {
                                                                tail_it_95=it_93;
                                                            }
                                                            if(_if_conditional151=i_96>=head&&i_96<tail,                                                            _if_conditional151) {
                                                                prev_it_97=it_93;
                                                                it_93=it_93->next;
                                                                i_96++;
                                                                if(prev_it_97 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_97, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_93=it_93->next;
                                                                i_96++;
                                                            }
                                                        }
                                                        if(_if_conditional152=head_prev_it_94!=((void*)0),                                                        _if_conditional152) {
                                                            head_prev_it_94->next=tail_it_95;
                                                        }
                                                        if(_if_conditional153=tail_it_95!=((void*)0),                                                        _if_conditional153) {
                                                            tail_it_95->prev=head_prev_it_94;
                                                        }
                                                    }
                                                }
                                            }
                                            __result63__ = __result_obj__ = self;
                                            return __result63__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_85;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_86;
struct list$1charp* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_85, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_86, 0, sizeof(struct list_item$1charp*));
                                                    it_85=self->head;
                                                    while(_while_condtional16=it_85!=((void*)0),                                                    _while_condtional16) {
                                                        prev_it_86=it_85;
                                                        it_85=it_85->next;
                                                        if(prev_it_86 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_86, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result62__ = __result_obj__ = self;
                                                    return __result62__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional159;
char* result_99;
char* __result65__;
_Bool _if_conditional160;
char* __result66__;
char* result_100;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_99, 0, sizeof(char*));
memset(&result_100, 0, sizeof(char*));
                if(_if_conditional159=self==((void*)0),                _if_conditional159) {
                    memset(&result_99,0,sizeof(char*));
                    __result65__ = __result_obj__ = result_99;
                    return __result65__;
                }
                self->it=self->head;
                if(_if_conditional160=self->it,                _if_conditional160) {
                    __result66__ = __result_obj__ = self->it->item;
                    return __result66__;
                }
                memset(&result_100,0,sizeof(char*));
                __result67__ = __result_obj__ = result_100;
                return __result67__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result68__ = self==((void*)0)||self->it==((void*)0);
                return __result68__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
char* result_102;
char* __result69__;
_Bool _if_conditional162;
char* __result70__;
char* result_103;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_102, 0, sizeof(char*));
memset(&result_103, 0, sizeof(char*));
                if(_if_conditional161=self==((void*)0)||self->it==((void*)0),                _if_conditional161) {
                    memset(&result_102,0,sizeof(char*));
                    __result69__ = __result_obj__ = result_102;
                    return __result69__;
                }
                self->it=self->it->next;
                if(_if_conditional162=self->it,                _if_conditional162) {
                    __result70__ = __result_obj__ = self->it->item;
                    return __result70__;
                }
                memset(&result_103,0,sizeof(char*));
                __result71__ = __result_obj__ = result_103;
                return __result71__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
void* right_value68;
struct list_item$1charp* litem_104;
_Bool _if_conditional166;
void* right_value69;
struct list_item$1charp* litem_105;
void* right_value70;
struct list_item$1charp* litem_106;
struct list$1charp* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value68 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1charp*));
right_value69 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1charp*));
right_value70 = (void*)0;
memset(&litem_106, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional165=self->len==0,                    _if_conditional165) {
                        litem_104=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value68=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 224, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value68, right_value68 = (void*)0;
                        __freed_obj__ = 0;
                        litem_104->prev=((void*)0);
                        litem_104->next=((void*)0);
                        litem_104->item=item;
                        self->tail=litem_104;
                        self->head=litem_104;
                    }
                    else {
                        if(_if_conditional166=self->len==1,                        _if_conditional166) {
                            litem_105=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value69=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 234, "struct list_item$1charp"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value69, right_value69 = (void*)0;
                            __freed_obj__ = 0;
                            litem_105->prev=self->head;
                            litem_105->next=((void*)0);
                            litem_105->item=item;
                            self->tail=litem_105;
                            self->head->next=litem_105;
                        }
                        else {
                            litem_106=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value70=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 244, "struct list_item$1charp"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value70, right_value70 = (void*)0;
                            __freed_obj__ = 0;
                            litem_106->prev=self->tail;
                            litem_106->next=((void*)0);
                            litem_106->item=item;
                            self->tail->next=litem_106;
                            self->tail=litem_106;
                        }
                    }
                    self->len++;
                    __result72__ = __result_obj__ = self;
                    return __result72__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
void* right_value73;
struct list_item$1tuple2$2charphsTypephph* litem_113;
struct tuple2$2charphsTypeph* __dec_obj28;
_Bool _if_conditional170;
void* right_value74;
struct list_item$1tuple2$2charphsTypephph* litem_114;
struct tuple2$2charphsTypeph* __dec_obj29;
void* right_value75;
struct list_item$1tuple2$2charphsTypephph* litem_115;
struct tuple2$2charphsTypeph* __dec_obj30;
struct list$1tuple2$2charphsTypephph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value73 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value74 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value75 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                if(_if_conditional167=self->len==0,                _if_conditional167) {
                    litem_113=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value73=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 224, "struct list_item$1tuple2$2charphsTypephph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value73, right_value73 = (void*)0;
                    __freed_obj__ = 0;
                    litem_113->prev=((void*)0);
                    litem_113->next=((void*)0);
                    __dec_obj28=litem_113->item;
                    litem_113->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj28) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_113;
                    self->head=litem_113;
                }
                else {
                    if(_if_conditional170=self->len==1,                    _if_conditional170) {
                        litem_114=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value74=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 234, "struct list_item$1tuple2$2charphsTypephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value74, right_value74 = (void*)0;
                        __freed_obj__ = 0;
                        litem_114->prev=self->head;
                        litem_114->next=((void*)0);
                        __dec_obj29=litem_114->item;
                        litem_114->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        if(__dec_obj29) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_114;
                        self->head->next=litem_114;
                    }
                    else {
                        litem_115=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value75=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 244, "struct list_item$1tuple2$2charphsTypephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value75, right_value75 = (void*)0;
                        __freed_obj__ = 0;
                        litem_115->prev=self->tail;
                        litem_115->next=((void*)0);
                        __dec_obj30=litem_115->item;
                        litem_115->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        if(__dec_obj30) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_115;
                        self->tail=litem_115;
                    }
                }
                self->len++;
                __result74__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result74__;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
_Bool _if_conditional169;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional168=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional168) {
                            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional169=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional169) {
                            if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj31;
struct sType* __dec_obj32;
struct tuple2$2charphsTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj31=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                __dec_obj32=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                __result75__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result75__;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_116;
_Bool _while_condtional20;
struct list_item$1sTypeph* prev_it_117;
struct list$1sTypeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_116, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_117, 0, sizeof(struct list_item$1sTypeph*));
            it_116=self->head;
            while(_while_condtional20=it_116!=((void*)0),            _while_condtional20) {
                prev_it_117=it_116;
                it_116=it_116->next;
                if(prev_it_117 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_117, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result76__ = __result_obj__ = self;
            return __result76__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value93;
char* __dec_obj36;
void* right_value94;
char* __dec_obj37;
void* right_value108;
struct sClass* __dec_obj46;
struct sStructNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value108 = (void*)0;
    self->sline=info->sline;
    __dec_obj36=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(info->sname))));
    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value93, right_value93 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj37=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string(name))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94, right_value94 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj46=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value108=sClass_clone(klass))));
    if(__dec_obj46) { come_call_finalizer(sClass_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value108, right_value108 = (void*)0;
    __freed_obj__ = 0;
    self->mOutput=output;
    __result87__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result87__;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
struct sClass* __result79__;
void* right_value95;
struct sClass* result_126;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value96;
char* __dec_obj38;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value106;
struct list$1tuple2$2charphsTypephph* __dec_obj44;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value107;
char* __dec_obj45;
struct sClass* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value95 = (void*)0;
memset(&result_126, 0, sizeof(struct sClass*));
right_value96 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
        if(_if_conditional174=self==(void*)0,        _if_conditional174) {
            __result79__ = __result_obj__ = (void*)0;
            return __result79__;
        }
        result_126=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value95=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value95, right_value95 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional175=self!=((void*)0),        _if_conditional175) {
            result_126->mStruct=self->mStruct;
        }
        if(_if_conditional176=self!=((void*)0),        _if_conditional176) {
            result_126->mFloat=self->mFloat;
        }
        if(_if_conditional177=self!=((void*)0),        _if_conditional177) {
            result_126->mUnion=self->mUnion;
        }
        if(_if_conditional178=self!=((void*)0),        _if_conditional178) {
            result_126->mGenerics=self->mGenerics;
        }
        if(_if_conditional179=self!=((void*)0),        _if_conditional179) {
            result_126->mMethodGenerics=self->mMethodGenerics;
        }
        if(_if_conditional180=self!=((void*)0),        _if_conditional180) {
            result_126->mEnum=self->mEnum;
        }
        if(_if_conditional181=self!=((void*)0),        _if_conditional181) {
            result_126->mProtocol=self->mProtocol;
        }
        if(_if_conditional182=self!=((void*)0),        _if_conditional182) {
            result_126->mNumber=self->mNumber;
        }
        if(_if_conditional183=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional183) {
            __dec_obj38=result_126->mName;
            result_126->mName=(char*)come_increment_ref_count(((char*)(right_value96=string_clone(self->mName))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value96, right_value96 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional184=self!=((void*)0),        _if_conditional184) {
            result_126->mGenericsNum=self->mGenericsNum;
        }
        if(_if_conditional185=self!=((void*)0),        _if_conditional185) {
            result_126->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        if(_if_conditional186=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional186) {
            __dec_obj44=result_126->mFields;
            result_126->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value106=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            if(__dec_obj44) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value106, right_value106 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional193=self!=((void*)0),        _if_conditional193) {
            result_126->mOutputed=self->mOutputed;
        }
        if(_if_conditional194=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional194) {
            __dec_obj45=result_126->mDeclareSName;
            result_126->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value107=string_clone(self->mDeclareSName))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value107, right_value107 = (void*)0;
            __freed_obj__ = 0;
        }
        __result86__ = __result_obj__ = result_126;
        if(result_126 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_126, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result86__;
        if(result_126 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_126, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
struct list$1tuple2$2charphsTypephph* __result80__;
void* right_value97;
void* right_value98;
struct list$1tuple2$2charphsTypephph* result_127;
struct list_item$1tuple2$2charphsTypephph* it_128;
_Bool _while_condtional21;
void* right_value105;
struct list$1tuple2$2charphsTypephph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value97 = (void*)0;
right_value98 = (void*)0;
memset(&result_127, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_128, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value105 = (void*)0;
                if(_if_conditional187=self==((void*)0),                _if_conditional187) {
                    __result80__ = __result_obj__ = ((void*)0);
                    return __result80__;
                }
                result_127=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value98=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value97=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 140, "struct list$1tuple2$2charphsTypephph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value97, right_value97 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value98, right_value98 = (void*)0;
                __freed_obj__ = 0;
                it_128=self->head;
                while(_while_condtional21=it_128!=((void*)0),                _while_condtional21) {
                    list$1tuple2$2charphsTypephph_add(result_127,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value105=tuple2$2charphsTypephp_clone(it_128->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value105, right_value105 = (void*)0;
                    __freed_obj__ = 0;
                    it_128=it_128->next;
                }
                __result85__ = __result_obj__ = result_127;
                if(result_127 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_127, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result85__;
                if(result_127 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_127, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsTypephph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result81__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result81__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
void* right_value99;
struct list_item$1tuple2$2charphsTypephph* litem_129;
struct tuple2$2charphsTypeph* __dec_obj39;
_Bool _if_conditional189;
void* right_value100;
struct list_item$1tuple2$2charphsTypephph* litem_130;
struct tuple2$2charphsTypeph* __dec_obj40;
void* right_value101;
struct list_item$1tuple2$2charphsTypephph* litem_131;
struct tuple2$2charphsTypeph* __dec_obj41;
struct list$1tuple2$2charphsTypephph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value99 = (void*)0;
memset(&litem_129, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value100 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value101 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        if(_if_conditional188=self->len==0,                        _if_conditional188) {
                            litem_129=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value99=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 154, "struct list_item$1tuple2$2charphsTypephph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value99, right_value99 = (void*)0;
                            __freed_obj__ = 0;
                            litem_129->prev=((void*)0);
                            litem_129->next=((void*)0);
                            __dec_obj39=litem_129->item;
                            litem_129->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj39) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_129;
                            self->head=litem_129;
                        }
                        else {
                            if(_if_conditional189=self->len==1,                            _if_conditional189) {
                                litem_130=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value100=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 164, "struct list_item$1tuple2$2charphsTypephph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                                if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value100, right_value100 = (void*)0;
                                __freed_obj__ = 0;
                                litem_130->prev=self->head;
                                litem_130->next=((void*)0);
                                __dec_obj40=litem_130->item;
                                litem_130->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj40) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_130;
                                self->head->next=litem_130;
                            }
                            else {
                                litem_131=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value101=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 174, "struct list_item$1tuple2$2charphsTypephph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
                                if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value101, right_value101 = (void*)0;
                                __freed_obj__ = 0;
                                litem_131->prev=self->tail;
                                litem_131->next=((void*)0);
                                __dec_obj41=litem_131->item;
                                litem_131->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj41) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail->next=litem_131;
                                self->tail=litem_131;
                            }
                        }
                        self->len++;
                        __result82__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result82__;
                        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
struct tuple2$2charphsTypeph* __result83__;
void* right_value102;
struct tuple2$2charphsTypeph* result_132;
_Bool _if_conditional191;
void* right_value103;
char* __dec_obj42;
_Bool _if_conditional192;
void* right_value104;
struct sType* __dec_obj43;
struct tuple2$2charphsTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value102 = (void*)0;
memset(&result_132, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value103 = (void*)0;
right_value104 = (void*)0;
                        if(_if_conditional190=self==(void*)0,                        _if_conditional190) {
                            __result83__ = __result_obj__ = (void*)0;
                            return __result83__;
                        }
                        result_132=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value102=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value102, right_value102 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional191=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional191) {
                            __dec_obj42=result_132->v1;
                            result_132->v1=(char*)come_increment_ref_count(((char*)(right_value103=string_clone(self->v1))));
                            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value103, right_value103 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional192=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional192) {
                            __dec_obj43=result_132->v2;
                            result_132->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(self->v2))));
                            if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value104, right_value104 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        __result84__ = __result_obj__ = result_132;
                        if(result_132 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_132, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result84__;
                        if(result_132 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_132, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sStructNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result88__ = (_Bool)1;
    return __result88__;
}

char* sStructNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value109;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value109 = (void*)0;
    __result89__ = __result_obj__ = ((char*)(right_value109=__builtin_string("sStructNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value109, right_value109 = (void*)0;
    __freed_obj__ = 0;
    return __result89__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value110;
struct sClass* klass_133;
void* right_value111;
char* name_134;
void* right_value112;
_Bool _if_conditional198;
void* right_value113;
void* right_value114;
_Bool _if_conditional199;
void* right_value115;
struct sClass* klass2_135;
void* right_value116;
struct list$1tuple2$2charphsTypephph* __dec_obj47;
void* right_value117;
void* right_value118;
struct sType* type_136;
void* right_value124;
_Bool _if_conditional222;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value110 = (void*)0;
memset(&klass_133, 0, sizeof(struct sClass*));
right_value111 = (void*)0;
memset(&name_134, 0, sizeof(char*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&klass2_135, 0, sizeof(struct sClass*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&type_136, 0, sizeof(struct sType*));
right_value124 = (void*)0;
    klass_133=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value110=sClass_clone(self->mClass))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value110, right_value110 = (void*)0;
    __freed_obj__ = 0;
    name_134=(char*)come_increment_ref_count(((char*)(right_value111=__builtin_string(self->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value111, right_value111 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional198=((struct sClass*)(right_value112=map$2charphsClassph_at(info->classes,name_134,((void*)0))))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112),
    (right_value112 && right_value112 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value112, right_value112 = (void*)0, 
    __freed_obj__ = 0, 
    _if_conditional198) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_134),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value113=sClass_clone(klass_133)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value113, right_value113 = (void*)0;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional199=list$1tuple2$2charphsTypephph_length(((struct sClass*)(right_value114=map$2charphsClassph_at(info->classes,name_134,((void*)0))))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_133->mFields)>0,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114),
        (right_value114 && right_value114 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value114, right_value114 = (void*)0, 
        __freed_obj__ = 0, 
        _if_conditional199) {
            klass2_135=((struct sClass*)(right_value115=map$2charphsClassph_at(info->classes,name_134,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
            if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value115, right_value115 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj47=klass2_135->mFields;
            klass2_135->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value116=list$1tuple2$2charphsTypephphp_clone(klass_133->mFields))));
            if(__dec_obj47) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
            if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value116, right_value116 = (void*)0;
            __freed_obj__ = 0;
        }
    }
    type_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 227, "struct sType")))),name_134,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117, right_value117 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value118, right_value118 = (void*)0;
    __freed_obj__ = 0;
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_134),(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(type_136)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value124, right_value124 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional222=self->mOutput,    _if_conditional222) {
        output_struct(klass_133,info);
    }
    __result103__ = (_Bool)1;
    if(klass_133 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_134 && !__freed_obj__) { name_134 = come_decrement_ref_count(name_134, (void*)0, (void*)0, 0, 0, 0); }
    if(type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result103__;
    if(klass_133 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_134 && !__freed_obj__) { name_134 = come_decrement_ref_count(name_134, (void*)0, (void*)0, 0, 0, 0); }
    if(type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result90__ = self->len;
            return __result90__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
unsigned int hash_154;
unsigned int it_155;
_Bool _while_condtional24;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool same_key_exist_156;
char* it2_157;
_Bool _for_condtionalA10;
_Bool _if_conditional220;
_Bool _if_conditional221;
struct map$2charphsTypeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_154, 0, sizeof(unsigned int));
memset(&it_155, 0, sizeof(unsigned int));
memset(&same_key_exist_156, 0, sizeof(_Bool));
memset(&it2_157, 0, sizeof(char*));
        if(_if_conditional200=self->len*10>=self->size,        _if_conditional200) {
            map$2charphsTypeph_rehash(self);
        }
        hash_154=string_get_hash_key(key)%self->size;
        it_155=hash_154;
        while(_while_condtional24=(_Bool)1,        _while_condtional24) {
            if(_if_conditional212=self->item_existance[it_155],            _if_conditional212) {
                if(_if_conditional213=string_equals(self->keys[it_155],key),                _if_conditional213) {
                    if(_if_conditional214=1,                    _if_conditional214) {
                        list$1charp_remove(self->key_list,self->keys[it_155]);
                        if(self->keys[it_155] && !__freed_obj__) { self->keys[it_155] = come_decrement_ref_count(self->keys[it_155], (void*)0, (void*)0, 0, 0, 0); }
                        self->keys[it_155]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_155]);
                        self->keys[it_155]=key;
                    }
                    if(_if_conditional215=1,                    _if_conditional215) {
                        if(self->items[it_155] && !__freed_obj__) { come_call_finalizer(sType_finalize,self->items[it_155], (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->items[it_155]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_155]=item;
                    }
                    break;
                }
                it_155++;
                if(_if_conditional216=it_155>=self->size,                _if_conditional216) {
                    it_155=0;
                }
                else {
                    if(_if_conditional217=it_155==hash_154,                    _if_conditional217) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_155]=(_Bool)1;
                if(_if_conditional218=1,                _if_conditional218) {
                    self->keys[it_155]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_155]=key;
                }
                if(_if_conditional219=1,                _if_conditional219) {
                    self->items[it_155]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_155]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_156=(_Bool)0;
        for(
        it2_157=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA10=        !list$1charp_end(self->key_list) ,        _for_condtionalA10;        it2_157=list$1charp_next(self->key_list) ,        0        ){
            if(_if_conditional220=string_equals(it2_157,key),            _if_conditional220) {
                same_key_exist_156=(_Bool)1;
            }
        }
        if(_if_conditional221=!same_key_exist_156,        _if_conditional221) {
            list$1charp_push_back(self->key_list,key);
        }
        __result102__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result102__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_137;
void* right_value119;
char** keys_138;
void* right_value120;
struct sType** items_139;
void* right_value121;
_Bool* item_existance_140;
int len_141;
char* it_144;
_Bool _for_condtionalA9;
struct sType* default_value_147;
void* right_value122;
struct sType* it2_150;
unsigned int hash_151;
int n_152;
_Bool _while_condtional23;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
struct sType* default_value_153;
void* right_value123;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_137, 0, sizeof(int));
right_value119 = (void*)0;
memset(&keys_138, 0, sizeof(char**));
right_value120 = (void*)0;
memset(&items_139, 0, sizeof(struct sType**));
right_value121 = (void*)0;
memset(&item_existance_140, 0, sizeof(_Bool*));
memset(&len_141, 0, sizeof(int));
memset(&it_144, 0, sizeof(char*));
memset(&default_value_147, 0, sizeof(struct sType*));
right_value122 = (void*)0;
memset(&it2_150, 0, sizeof(struct sType*));
memset(&hash_151, 0, sizeof(unsigned int));
memset(&n_152, 0, sizeof(int));
memset(&default_value_153, 0, sizeof(struct sType*));
right_value123 = (void*)0;
                size_137=self->size*10;
                keys_138=(char**)come_increment_ref_count(((char**)(right_value119=(char**)come_calloc(1, sizeof(char*)*(1*(size_137)), "./comelang2.h", 1330, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value119, right_value119 = (void*)0;
                __freed_obj__ = 0;
                items_139=(struct sType**)come_increment_ref_count(((struct sType**)(right_value120=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_137)), "./comelang2.h", 1331, "struct sType*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value120, right_value120 = (void*)0;
                __freed_obj__ = 0;
                item_existance_140=(_Bool*)come_increment_ref_count(((_Bool*)(right_value121=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_137)), "./comelang2.h", 1332, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value121, right_value121 = (void*)0;
                __freed_obj__ = 0;
                len_141=0;
                for(
                it_144=map$2charphsTypeph_begin(self) ,                0;                _for_condtionalA9=                !map$2charphsTypeph_end(self) ,                _for_condtionalA9;                it_144=map$2charphsTypeph_next(self) ,                0                ){
                    memset(&default_value_147,0,sizeof(struct sType*));
                    it2_150=((struct sType*)(right_value122=map$2charphsTypeph_at(self,it_144,default_value_147)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value122, right_value122 = (void*)0;
                    __freed_obj__ = 0;
                    hash_151=string_get_hash_key(it_144)%size_137;
                    n_152=hash_151;
                    while(_while_condtional23=(_Bool)1,                    _while_condtional23) {
                        if(_if_conditional209=item_existance_140[n_152],                        _if_conditional209) {
                            n_152++;
                            if(_if_conditional210=n_152>=size_137,                            _if_conditional210) {
                                n_152=0;
                            }
                            else {
                                if(_if_conditional211=n_152==hash_151,                                _if_conditional211) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_140[n_152]=(_Bool)1;
                            keys_138[n_152]=it_144;
                            items_139[n_152]=((struct sType*)(right_value123=map$2charphsTypeph_at(self,it_144,default_value_153)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value123, right_value123 = (void*)0;
                            __freed_obj__ = 0;
                            len_141++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                come_free((char*)self->keys);
                self->keys=keys_138;
                self->items=items_139;
                self->item_existance=item_existance_140;
                self->size=size_137;
                self->len=len_141;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional201;
char* result_142;
char* __result91__;
_Bool _if_conditional202;
char* __result92__;
char* result_143;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_142, 0, sizeof(char*));
memset(&result_143, 0, sizeof(char*));
                    if(_if_conditional201=self==((void*)0),                    _if_conditional201) {
                        memset(&result_142,0,sizeof(char*));
                        __result91__ = __result_obj__ = result_142;
                        return __result91__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(_if_conditional202=self->key_list->it,                    _if_conditional202) {
                        __result92__ = __result_obj__ = self->key_list->it->item;
                        return __result92__;
                    }
                    memset(&result_143,0,sizeof(char*));
                    __result93__ = __result_obj__ = result_143;
                    return __result93__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result94__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result94__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional203;
char* result_145;
char* __result95__;
_Bool _if_conditional204;
char* __result96__;
char* result_146;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_145, 0, sizeof(char*));
memset(&result_146, 0, sizeof(char*));
                    if(_if_conditional203=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional203) {
                        memset(&result_145,0,sizeof(char*));
                        __result95__ = __result_obj__ = result_145;
                        return __result95__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(_if_conditional204=self->key_list->it,                    _if_conditional204) {
                        __result96__ = __result_obj__ = self->key_list->it->item;
                        return __result96__;
                    }
                    memset(&result_146,0,sizeof(char*));
                    __result97__ = __result_obj__ = result_146;
                    return __result97__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_148;
unsigned int it_149;
_Bool _while_condtional22;
_Bool _if_conditional205;
_Bool _if_conditional206;
struct sType* __result98__;
_Bool _if_conditional207;
_Bool _if_conditional208;
struct sType* __result99__;
struct sType* __result100__;
struct sType* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_148, 0, sizeof(unsigned int));
memset(&it_149, 0, sizeof(unsigned int));
                        hash_148=string_get_hash_key(((char*)key))%self->size;
                        it_149=hash_148;
                        while(_while_condtional22=(_Bool)1,                        _while_condtional22) {
                            if(_if_conditional205=self->item_existance[it_149],                            _if_conditional205) {
                                if(_if_conditional206=string_equals(self->keys[it_149],key),                                _if_conditional206) {
                                    __result98__ = __result_obj__ = self->items[it_149];
                                    if(default_value && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result98__;
                                }
                                it_149++;
                                if(_if_conditional207=it_149>=self->size,                                _if_conditional207) {
                                    it_149=0;
                                }
                                else {
                                    if(_if_conditional208=it_149==hash_148,                                    _if_conditional208) {
                                        __result99__ = __result_obj__ = default_value;
                                        if(default_value && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result99__;
                                    }
                                }
                            }
                            else {
                                __result100__ = __result_obj__ = default_value;
                                if(default_value && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result100__;
                            }
                        }
                        __result101__ = __result_obj__ = default_value;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result101__;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sStructNode_sline(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result104__ = self->sline;
    return __result104__;
}

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value125;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value125 = (void*)0;
    __result105__ = __result_obj__ = ((char*)(right_value125=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value125, right_value125 = (void*)0;
    __freed_obj__ = 0;
    return __result105__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value126;
char* __dec_obj48;
void* right_value127;
char* __dec_obj49;
void* right_value128;
struct sClass* __dec_obj50;
struct sStructNobodyNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
    self->sline=info->sline;
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(info->sname))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value126, right_value126 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj49=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(name))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value127, right_value127 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj50=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value128=sClass_clone(klass))));
    if(__dec_obj50) { come_call_finalizer(sClass_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value128, right_value128 = (void*)0;
    __freed_obj__ = 0;
    __result106__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result106__;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sStructNobodyNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result107__ = (_Bool)1;
    return __result107__;
}

char* sStructNobodyNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value129;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value129 = (void*)0;
    __result108__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sStructNobodyNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value129, right_value129 = (void*)0;
    __freed_obj__ = 0;
    return __result108__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value130;
char* name_158;
struct sClass* klass_159;
void* right_value131;
_Bool _if_conditional226;
void* right_value132;
void* right_value133;
void* right_value134;
struct sType* type_160;
void* right_value135;
_Bool _if_conditional227;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value130 = (void*)0;
memset(&name_158, 0, sizeof(char*));
memset(&klass_159, 0, sizeof(struct sClass*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&type_160, 0, sizeof(struct sType*));
right_value135 = (void*)0;
    name_158=(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(self->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value130, right_value130 = (void*)0;
    __freed_obj__ = 0;
    klass_159=self->mClass;
    if(_if_conditional226=((struct sClass*)(right_value131=map$2charphsClassph_at(info->classes,name_158,((void*)0))))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131),
    (right_value131 && right_value131 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value131, right_value131 = (void*)0, 
    __freed_obj__ = 0, 
    _if_conditional226) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_158),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value132=sClass_clone(klass_159)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value132, right_value132 = (void*)0;
        __freed_obj__ = 0;
    }
    type_160=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value133=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 286, "struct sType")))),name_158,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value133, right_value133 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value134, right_value134 = (void*)0;
    __freed_obj__ = 0;
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_158),(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(type_160)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value135, right_value135 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional227=info->output_header_file&&string_operator_not_equals(klass_159->mDeclareSName,info->base_sname),    _if_conditional227) {
    }
    else {
        add_come_code_at_source_head(info,"struct %s;\n",name_158);
    }
    __result109__ = (_Bool)1;
    if(name_158 && !__freed_obj__) { name_158 = come_decrement_ref_count(name_158, (void*)0, (void*)0, 0, 0, 0); }
    if(type_160 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_160, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result109__;
    if(name_158 && !__freed_obj__) { name_158 = come_decrement_ref_count(name_158, (void*)0, (void*)0, 0, 0, 0); }
    if(type_160 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_160, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result110__ = self->sline;
    return __result110__;
}

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value136;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value136 = (void*)0;
    __result111__ = __result_obj__ = ((char*)(right_value136=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136, right_value136 = (void*)0;
    __freed_obj__ = 0;
    return __result111__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value137;
char* __dec_obj51;
struct sGenericsStructNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value137 = (void*)0;
    self->sline=info->sline;
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(info->sname))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value137, right_value137 = (void*)0;
    __freed_obj__ = 0;
    __result112__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result112__;
    if(self && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sGenericsStructNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result113__ = (_Bool)1;
    return __result113__;
}

char* sGenericsStructNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value138;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value138 = (void*)0;
    __result114__ = __result_obj__ = ((char*)(right_value138=__builtin_string("sGenericsStructNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value138, right_value138 = (void*)0;
    __freed_obj__ = 0;
    return __result114__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result115__ = (_Bool)1;
    return __result115__;
}

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result116__ = self->sline;
    return __result116__;
}

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value139;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value139 = (void*)0;
    __result117__ = __result_obj__ = ((char*)(right_value139=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value139, right_value139 = (void*)0;
    __freed_obj__ = 0;
    return __result117__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_161;
_Bool output_162;
void* right_value140;
_Bool _if_conditional229;
void* right_value141;
void* right_value142;
void* right_value143;
struct sClass* __dec_obj52;
void* right_value144;
void* right_value145;
void* right_value146;
struct sClass* __dec_obj53;
_Bool _while_condtional26;
_Bool multiple_declare_165;
char* p_166;
int sline_167;
_Bool no_output_err_168;
void* right_value147;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_169;
char* name_170;
_Bool err_171;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value148;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_172;
char* name_173;
_Bool err_174;
void* right_value149;
struct tuple2$2sTypephcharph* multiple_assign_var6;
struct sType* type2_175;
char* name2_176;
_Bool _if_conditional236;
void* right_value150;
void* right_value151;
_Bool _while_condtional27;
void* right_value152;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_177;
char* name2_178;
_Bool _if_conditional237;
void* right_value153;
void* right_value154;
void* right_value155;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type2_179;
char* name_180;
_Bool err_181;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value156;
void* right_value157;
_Bool _if_conditional240;
void* right_value158;
void* right_value159;
void* right_value160;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* right_value165;
struct sNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_161, 0, sizeof(struct sClass*));
memset(&output_162, 0, sizeof(_Bool));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&multiple_declare_165, 0, sizeof(_Bool));
memset(&p_166, 0, sizeof(char*));
memset(&sline_167, 0, sizeof(int));
memset(&no_output_err_168, 0, sizeof(_Bool));
right_value147 = (void*)0;
memset(&type_169, 0, sizeof(struct sType*));
memset(&name_170, 0, sizeof(char*));
memset(&err_171, 0, sizeof(_Bool));
memset(&type_169, 0, sizeof(struct sType*));
memset(&name_170, 0, sizeof(char*));
memset(&err_171, 0, sizeof(_Bool));
right_value148 = (void*)0;
memset(&base_type_172, 0, sizeof(struct sType*));
memset(&name_173, 0, sizeof(char*));
memset(&err_174, 0, sizeof(_Bool));
memset(&base_type_172, 0, sizeof(struct sType*));
memset(&name_173, 0, sizeof(char*));
memset(&err_174, 0, sizeof(_Bool));
right_value149 = (void*)0;
memset(&type2_175, 0, sizeof(struct sType*));
memset(&name2_176, 0, sizeof(char*));
memset(&type2_175, 0, sizeof(struct sType*));
memset(&name2_176, 0, sizeof(char*));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
memset(&type2_177, 0, sizeof(struct sType*));
memset(&name2_178, 0, sizeof(char*));
memset(&type2_177, 0, sizeof(struct sType*));
memset(&name2_178, 0, sizeof(char*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&type2_179, 0, sizeof(struct sType*));
memset(&name_180, 0, sizeof(char*));
memset(&err_181, 0, sizeof(_Bool));
memset(&type2_179, 0, sizeof(struct sType*));
memset(&name_180, 0, sizeof(char*));
memset(&err_181, 0, sizeof(_Bool));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value165 = (void*)0;
    if(_if_conditional229=((struct sClass*)(right_value140=map$2charphsClassph_at(info->classes,type_name,((void*)0))))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140),
    (right_value140 && right_value140 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value140, right_value140 = (void*)0, 
    __freed_obj__ = 0, 
    _if_conditional229) {
        output_162=(_Bool)1;
        __dec_obj52=klass_161;
        klass_161=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value143=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value141=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 356, "struct sClass")))),((char*)(right_value142=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        if(__dec_obj52) { come_call_finalizer(sClass_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value141, right_value141 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value142);
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value142, right_value142 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value143, right_value143 = (void*)0;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_161));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value144, right_value144 = (void*)0;
        __freed_obj__ = 0;
    }
    else {
        output_162=(_Bool)0;
        __dec_obj53=klass_161;
        klass_161=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value146=sClass_clone(((struct sClass*)(right_value145=map$2charphsClassph_at(info->classes,type_name,((void*)0))))))));
        if(__dec_obj53) { come_call_finalizer(sClass_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value145, right_value145 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value146, right_value146 = (void*)0;
        __freed_obj__ = 0;
    }
    list$1tuple2$2charphsTypephph_reset(klass_161->mFields);
    expected_next_character(123,info);
    while(_while_condtional26=(_Bool)1,    _while_condtional26) {
        multiple_declare_165=(_Bool)0;
        {
            p_166=info->p;
            sline_167=info->sline;
            no_output_err_168=info->no_output_err;
            info->no_output_err=(_Bool)1;
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value147=parse_type(info,(_Bool)1,(_Bool)1)));
            type_169=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_170=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_171=multiple_assign_var4->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
            if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value147, right_value147 = (void*)0;
            __freed_obj__ = 0;
            info->no_output_err=no_output_err_168;
            if(_if_conditional232=err_171&&*info->p==44,            _if_conditional232) {
                multiple_declare_165=(_Bool)1;
            }
            info->p=p_166;
            info->sline=sline_167;
            if(type_169 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_169, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_170 && !__freed_obj__) { name_170 = come_decrement_ref_count(name_170, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional233=multiple_declare_165,        _if_conditional233) {
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value148=parse_type(info,(_Bool)0,(_Bool)1)));
            base_type_172=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_173=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_174=multiple_assign_var5->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
            if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value148, right_value148 = (void*)0;
            __freed_obj__ = 0;
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(right_value149=parse_variable_name((struct sType*)come_increment_ref_count(base_type_172),(_Bool)1,info)));
            type2_175=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_176=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value149, right_value149 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional236=!info->no_output_err,            _if_conditional236) {
                list$1tuple2$2charphsTypephph_push_back(klass_161->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value151=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value150=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 393, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_176),(struct sType*)come_increment_ref_count(type2_175))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value150, right_value150 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value151);
                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value151, right_value151 = (void*)0;
                __freed_obj__ = 0;
            }
            while(_while_condtional27=*info->p==44,            _while_condtional27) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(right_value152=parse_variable_name((struct sType*)come_increment_ref_count(base_type_172),(_Bool)0,info)));
                type2_177=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_178=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value152, right_value152 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional237=!info->no_output_err,                _if_conditional237) {
                    list$1tuple2$2charphsTypephph_push_back(klass_161->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value154=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value153=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 403, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_178),(struct sType*)come_increment_ref_count(type2_177))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value153, right_value153 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value154);
                    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value154, right_value154 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(type2_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name2_178 && !__freed_obj__) { name2_178 = come_decrement_ref_count(name2_178, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(base_type_172 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_172, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_173 && !__freed_obj__) { name_173 = come_decrement_ref_count(name_173, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_175 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_175, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name2_176 && !__freed_obj__) { name2_176 = come_decrement_ref_count(name2_176, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value155=parse_type(info,(_Bool)1,(_Bool)1)));
            type2_179=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_180=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_181=multiple_assign_var8->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
            if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value155, right_value155 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional238=!err_181,            _if_conditional238) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            if(_if_conditional239=!info->no_output_err,            _if_conditional239) {
                list$1tuple2$2charphsTypephph_push_back(klass_161->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value157=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value156=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 416, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_180),(struct sType*)come_increment_ref_count(type2_179))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value156, right_value156 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value157);
                if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value157, right_value157 = (void*)0;
                __freed_obj__ = 0;
            }
            if(type2_179 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_179, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_180 && !__freed_obj__) { name_180 = come_decrement_ref_count(name_180, (void*)0, (void*)0, 0, 0, 0); }
        }
        expected_next_character(59,info);
        parse_sharp_v5(info);
        if(_if_conditional240=*info->p==125,        _if_conditional240) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 431, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(right_value160=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value158=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 431, "struct sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_161),output_162,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sStructNode_sline;
    _inf_value1->sname=(void*)sStructNode_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result121__ = __result_obj__ = ((struct sNode*)(right_value165=_inf_value1));
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_161 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value158, right_value158 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value159, right_value159 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value160, right_value160 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value165, right_value165 = (void*)0;
    __freed_obj__ = 0;
    return __result121__;
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_161 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_161, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_163;
_Bool _while_condtional25;
struct list_item$1tuple2$2charphsTypephph* prev_it_164;
struct list$1tuple2$2charphsTypephph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_163, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_164, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_163=self->head;
        while(_while_condtional25=it_163!=((void*)0),        _while_condtional25) {
            prev_it_164=it_163;
            it_163=it_163->next;
            if(prev_it_164 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_164, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result118__ = __result_obj__ = self;
        return __result118__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional230;
_Bool _if_conditional231;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional230=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional230) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional231=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional231) {
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
_Bool _if_conditional235;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional234=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional234) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional235=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional235) {
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional250;
char* header_head_183;
void* right_value166;
char* type_name_184;
_Bool _if_conditional251;
struct sClass* struct_class_185;
void* right_value167;
_Bool _if_conditional252;
void* right_value168;
void* right_value169;
struct sClass* __dec_obj57;
void* right_value170;
void* right_value171;
struct sClass* __dec_obj58;
void* right_value172;
void* right_value173;
void* right_value174;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* right_value179;
struct sNode* __result124__;
_Bool _if_conditional261;
_Bool _while_condtional29;
void* right_value180;
char* T_189;
void* right_value184;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct sClass* generics_class_193;
void* right_value185;
_Bool _if_conditional266;
void* right_value186;
void* right_value187;
struct sClass* __dec_obj65;
void* right_value188;
_Bool _if_conditional267;
_Bool _while_condtional30;
void* right_value189;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_194;
char* name_195;
_Bool err_196;
_Bool _if_conditional268;
_Bool _if_conditional269;
void* right_value190;
void* right_value191;
_Bool _while_condtional31;
void* right_value192;
char* name2_197;
void* right_value193;
struct sType* type3_198;
_Bool _if_conditional270;
_Bool no_comma_199;
void* right_value194;
struct sNode* node_200;
struct sNode* __dec_obj66;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
_Bool _if_conditional271;
void* right_value199;
void* right_value200;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* right_value203;
struct sNode* __result129__;
struct sClass* struct_class_202;
void* right_value204;
_Bool _if_conditional276;
void* right_value205;
void* right_value206;
struct sClass* __dec_obj68;
void* right_value207;
void* right_value208;
struct sClass* __dec_obj69;
_Bool _while_condtional32;
_Bool multiple_declare_203;
char* p_204;
int sline_205;
_Bool no_output_err_206;
void* right_value209;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_207;
char* name_208;
_Bool err_209;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value210;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* base_type_210;
char* name_211;
_Bool err_212;
void* right_value211;
struct tuple2$2sTypephcharph* multiple_assign_var12;
struct sType* type2_213;
char* name2_214;
void* right_value212;
void* right_value213;
_Bool _while_condtional33;
void* right_value214;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_215;
char* name2_216;
void* right_value215;
void* right_value216;
void* right_value217;
struct tuple3$3sTypephcharphbool* multiple_assign_var14;
struct sType* type2_217;
char* name_218;
_Bool err_219;
_Bool _if_conditional279;
void* right_value218;
void* right_value219;
_Bool _if_conditional280;
void* right_value220;
void* right_value221;
void* right_value222;
void* right_value223;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* right_value228;
struct sNode* __result132__;
void* right_value229;
struct sNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&header_head_183, 0, sizeof(char*));
right_value166 = (void*)0;
memset(&type_name_184, 0, sizeof(char*));
memset(&struct_class_185, 0, sizeof(struct sClass*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&T_189, 0, sizeof(char*));
right_value184 = (void*)0;
memset(&generics_class_193, 0, sizeof(struct sClass*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&type2_194, 0, sizeof(struct sType*));
memset(&name_195, 0, sizeof(char*));
memset(&err_196, 0, sizeof(_Bool));
memset(&type2_194, 0, sizeof(struct sType*));
memset(&name_195, 0, sizeof(char*));
memset(&err_196, 0, sizeof(_Bool));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&name2_197, 0, sizeof(char*));
right_value193 = (void*)0;
memset(&type3_198, 0, sizeof(struct sType*));
memset(&no_comma_199, 0, sizeof(_Bool));
right_value194 = (void*)0;
memset(&node_200, 0, sizeof(struct sNode*));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value203 = (void*)0;
memset(&struct_class_202, 0, sizeof(struct sClass*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&multiple_declare_203, 0, sizeof(_Bool));
memset(&p_204, 0, sizeof(char*));
memset(&sline_205, 0, sizeof(int));
memset(&no_output_err_206, 0, sizeof(_Bool));
right_value209 = (void*)0;
memset(&type_207, 0, sizeof(struct sType*));
memset(&name_208, 0, sizeof(char*));
memset(&err_209, 0, sizeof(_Bool));
memset(&type_207, 0, sizeof(struct sType*));
memset(&name_208, 0, sizeof(char*));
memset(&err_209, 0, sizeof(_Bool));
right_value210 = (void*)0;
memset(&base_type_210, 0, sizeof(struct sType*));
memset(&name_211, 0, sizeof(char*));
memset(&err_212, 0, sizeof(_Bool));
memset(&base_type_210, 0, sizeof(struct sType*));
memset(&name_211, 0, sizeof(char*));
memset(&err_212, 0, sizeof(_Bool));
right_value211 = (void*)0;
memset(&type2_213, 0, sizeof(struct sType*));
memset(&name2_214, 0, sizeof(char*));
memset(&type2_213, 0, sizeof(struct sType*));
memset(&name2_214, 0, sizeof(char*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&type2_215, 0, sizeof(struct sType*));
memset(&name2_216, 0, sizeof(char*));
memset(&type2_215, 0, sizeof(struct sType*));
memset(&name2_216, 0, sizeof(char*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&type2_217, 0, sizeof(struct sType*));
memset(&name_218, 0, sizeof(char*));
memset(&err_219, 0, sizeof(_Bool));
memset(&type2_217, 0, sizeof(struct sType*));
memset(&name_218, 0, sizeof(char*));
memset(&err_219, 0, sizeof(_Bool));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
    if(_if_conditional250=charp_operator_equals(buf,"struct"),    _if_conditional250) {
        header_head_183=head;
        type_name_184=(char*)come_increment_ref_count(((char*)(right_value166=parse_word(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value166, right_value166 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional251=*info->p==59,        _if_conditional251) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional252=((struct sClass*)(right_value167=map$2charphsClassph_at(info->classes,type_name_184,((void*)0))))==((void*)0),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167),
            (right_value167 && right_value167 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value167, right_value167 = (void*)0, 
            __freed_obj__ = 0, 
            _if_conditional252) {
                __dec_obj57=struct_class_185;
                struct_class_185=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value169=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value168=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 447, "struct sClass")))),type_name_184,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                if(__dec_obj57) { come_call_finalizer(sClass_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value168, right_value168 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value169);
                if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value169, right_value169 = (void*)0;
                __freed_obj__ = 0;
            }
            else {
                __dec_obj58=struct_class_185;
                struct_class_185=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value171=sClass_clone(((struct sClass*)(right_value170=map$2charphsClassph_at(info->classes,type_name_184,((void*)0))))))));
                if(__dec_obj58) { come_call_finalizer(sClass_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value170, right_value170 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value171);
                if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value171, right_value171 = (void*)0;
                __freed_obj__ = 0;
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 453, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(right_value174=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value172=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 453, "struct sStructNobodyNode")))),(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(type_name_184)))),(struct sClass*)come_increment_ref_count(struct_class_185),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sStructNobodyNode_sline;
            _inf_value2->sname=(void*)sStructNobodyNode_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result124__ = __result_obj__ = ((struct sNode*)(right_value179=_inf_value2));
            if(struct_class_185 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_185, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_name_184 && !__freed_obj__) { type_name_184 = come_decrement_ref_count(type_name_184, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value172, right_value172 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value173);
            if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value173, right_value173 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value174);
            if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value174, right_value174 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value179);
            if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value179, right_value179 = (void*)0;
            __freed_obj__ = 0;
            return __result124__;
            if(struct_class_185 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_185, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional261=*info->p==60,            _if_conditional261) {
                list$1charph_reset(info->generics_type_names);
                info->p++;
                skip_spaces_and_lf(info);
                while(_while_condtional29=(_Bool)1,                _while_condtional29) {
                    T_189=(char*)come_increment_ref_count(((char*)(right_value180=parse_word(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value180, right_value180 = (void*)0;
                    __freed_obj__ = 0;
                    list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value184=string_clone(T_189)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value184, right_value184 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional264=*info->p==62,                    _if_conditional264) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(T_189 && !__freed_obj__) { T_189 = come_decrement_ref_count(T_189, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                    }
                    else {
                        if(_if_conditional265=*info->p==44,                        _if_conditional265) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            err_msg(info,"invalid generics struct definition");
                            exit(2);
                        }
                    }
                    if(T_189 && !__freed_obj__) { T_189 = come_decrement_ref_count(T_189, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional266=((struct sClass*)(right_value185=map$2charphsClassph_at(info->generics_classes,type_name_184,((void*)0))))!=((void*)0),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185),
                (right_value185 && right_value185 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value185, right_value185 = (void*)0, 
                __freed_obj__ = 0, 
                _if_conditional266) {
                    err_msg(info,"redifined generics struct(%s)",type_name_184);
                    exit(2);
                }
                else {
                    __dec_obj65=generics_class_193;
                    generics_class_193=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value187=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value186=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 487, "struct sClass")))),type_name_184,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    if(__dec_obj65) { come_call_finalizer(sClass_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value186, right_value186 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value187, right_value187 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional267=((struct sClass*)(right_value188=map$2charphsClassph_at(info->generics_classes,type_name_184,((void*)0))))==((void*)0),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188),
                (right_value188 && right_value188 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value188, right_value188 = (void*)0, 
                __freed_obj__ = 0, 
                _if_conditional267) {
                    map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_184),(struct sClass*)come_increment_ref_count(generics_class_193));
                }
                expected_next_character(123,info);
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    parse_sharp_v5(info);
                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value189=parse_type(info,(_Bool)1,(_Bool)1)));
                    type2_194=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                    name_195=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                    err_196=multiple_assign_var9->v3;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
                    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value189, right_value189 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional268=!err_196,                    _if_conditional268) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    if(_if_conditional269=*info->p==44,                    _if_conditional269) {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_193->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value191=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value190=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 507, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_195),(struct sType*)come_increment_ref_count(type2_194))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value190, right_value190 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value191);
                        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value191, right_value191 = (void*)0;
                        __freed_obj__ = 0;
                        while(_while_condtional31=*info->p==44,                        _while_condtional31) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            name2_197=(char*)come_increment_ref_count(((char*)(right_value192=parse_word(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                            if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value192, right_value192 = (void*)0;
                            __freed_obj__ = 0;
                            type3_198=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(type2_194))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                            if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value193, right_value193 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional270=*info->p==58,                            _if_conditional270) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                no_comma_199=info->no_comma;
                                info->no_comma=(_Bool)1;
                                node_200=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=expression_v13(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
                                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value194, right_value194 = (void*)0;
                                __freed_obj__ = 0;
                                info->no_comma=no_comma_199;
                                __dec_obj66=type3_198->mSizeNum;
                                type3_198->mSizeNum=(struct sNode*)come_increment_ref_count(node_200);
                                if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0); }
                                if(node_200 && !__freed_obj__) { node_200 = come_decrement_ref_count(node_200, ((struct sNode*)node_200)->finalize, ((struct sNode*)node_200)->_protocol_obj, 0, 0, 0); } 
                            }
                            list$1tuple2$2charphsTypephph_push_back(generics_class_193->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value196=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value195=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 529, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_197),(struct sType*)come_increment_ref_count(type3_198))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                            if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value195, right_value195 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value196);
                            if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value196, right_value196 = (void*)0;
                            __freed_obj__ = 0;
                            if(name2_197 && !__freed_obj__) { name2_197 = come_decrement_ref_count(name2_197, (void*)0, (void*)0, 0, 0, 0); }
                            if(type3_198 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                    }
                    else {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_193->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value198=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value197=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 533, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_195),(struct sType*)come_increment_ref_count(type2_194))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value197, right_value197 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value198);
                        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value198, right_value198 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    expected_next_character(59,info);
                    parse_sharp_v5(info);
                    if(_if_conditional271=*info->p==125,                    _if_conditional271) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_195 && !__freed_obj__) { name_195 = come_decrement_ref_count(name_195, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                    }
                    parse_sharp_v5(info);
                    if(type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(name_195 && !__freed_obj__) { name_195 = come_decrement_ref_count(name_195, (void*)0, (void*)0, 0, 0, 0); }
                }
                list$1charph_reset(info->generics_type_names);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 550, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(right_value200=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value199=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 550, "struct sGenericsStructNode")))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sGenericsStructNode_sline;
                _inf_value3->sname=(void*)sGenericsStructNode_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result129__ = __result_obj__ = ((struct sNode*)(right_value203=_inf_value3));
                if(generics_class_193 && !__freed_obj__) { come_call_finalizer(sClass_finalize,generics_class_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_184 && !__freed_obj__) { type_name_184 = come_decrement_ref_count(type_name_184, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
                if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value199, right_value199 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
                if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value200, right_value200 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value203);
                if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, ((struct sNode*)right_value203)->finalize, ((struct sNode*)right_value203)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value203, right_value203 = (void*)0;
                __freed_obj__ = 0;
                return __result129__;
                if(generics_class_193 && !__freed_obj__) { come_call_finalizer(sClass_finalize,generics_class_193, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional276=((struct sClass*)(right_value204=map$2charphsClassph_at(info->classes,type_name_184,((void*)0))))==((void*)0),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204),
                (right_value204 && right_value204 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value204, right_value204 = (void*)0, 
                __freed_obj__ = 0, 
                _if_conditional276) {
                    __dec_obj68=struct_class_202;
                    struct_class_202=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value206=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 555, "struct sClass")))),type_name_184,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    if(__dec_obj68) { come_call_finalizer(sClass_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value205, right_value205 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value206);
                    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value206, right_value206 = (void*)0;
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj69=struct_class_202;
                    struct_class_202=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=sClass_clone(((struct sClass*)(right_value207=map$2charphsClassph_at(info->classes,type_name_184,((void*)0))))))));
                    if(__dec_obj69) { come_call_finalizer(sClass_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value207, right_value207 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value208);
                    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value208, right_value208 = (void*)0;
                    __freed_obj__ = 0;
                }
                expected_next_character(123,info);
                while(_while_condtional32=(_Bool)1,                _while_condtional32) {
                    parse_sharp_v5(info);
                    multiple_declare_203=(_Bool)0;
                    {
                        p_204=info->p;
                        sline_205=info->sline;
                        no_output_err_206=info->no_output_err;
                        info->no_output_err=(_Bool)1;
                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value209=parse_type(info,(_Bool)1,(_Bool)1)));
                        type_207=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                        name_208=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        err_209=multiple_assign_var10->v3;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
                        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value209, right_value209 = (void*)0;
                        __freed_obj__ = 0;
                        info->no_output_err=no_output_err_206;
                        if(_if_conditional277=err_209&&*info->p==44,                        _if_conditional277) {
                            multiple_declare_203=(_Bool)1;
                        }
                        info->p=p_204;
                        info->sline=sline_205;
                        if(type_207 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_208 && !__freed_obj__) { name_208 = come_decrement_ref_count(name_208, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional278=multiple_declare_203,                    _if_conditional278) {
                        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value210=parse_type(info,(_Bool)0,(_Bool)1)));
                        base_type_210=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_211=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_212=multiple_assign_var11->v3;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
                        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value210, right_value210 = (void*)0;
                        __freed_obj__ = 0;
                        multiple_assign_var12=((struct tuple2$2sTypephcharph*)(right_value211=parse_variable_name((struct sType*)come_increment_ref_count(base_type_210),(_Bool)1,info)));
                        type2_213=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name2_214=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
                        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value211, right_value211 = (void*)0;
                        __freed_obj__ = 0;
                        list$1tuple2$2charphsTypephph_push_back(struct_class_202->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value213=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value212=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 589, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_214),(struct sType*)come_increment_ref_count(type2_213))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value212, right_value212 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value213);
                        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value213, right_value213 = (void*)0;
                        __freed_obj__ = 0;
                        while(_while_condtional33=*info->p==44,                        _while_condtional33) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var13=((struct tuple2$2sTypephcharph*)(right_value214=parse_variable_name((struct sType*)come_increment_ref_count(base_type_210),(_Bool)0,info)));
                            type2_215=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                            name2_216=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
                            if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value214, right_value214 = (void*)0;
                            __freed_obj__ = 0;
                            list$1tuple2$2charphsTypephph_push_back(struct_class_202->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value216=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value215=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 597, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_216),(struct sType*)come_increment_ref_count(type2_215))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                            if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value215, right_value215 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value216);
                            if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value216, right_value216 = (void*)0;
                            __freed_obj__ = 0;
                            if(type2_215 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_215, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name2_216 && !__freed_obj__) { name2_216 = come_decrement_ref_count(name2_216, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(base_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_211 && !__freed_obj__) { name_211 = come_decrement_ref_count(name_211, (void*)0, (void*)0, 0, 0, 0); }
                        if(type2_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_213, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name2_214 && !__freed_obj__) { name2_214 = come_decrement_ref_count(name2_214, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(right_value217=parse_type(info,(_Bool)1,(_Bool)1)));
                        type2_217=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                        name_218=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        err_219=multiple_assign_var14->v3;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
                        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value217, right_value217 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional279=!err_219,                        _if_conditional279) {
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            exit(2);
                        }
                        list$1tuple2$2charphsTypephph_push_back(struct_class_202->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value219=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value218=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 607, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_218),(struct sType*)come_increment_ref_count(type2_217))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
                        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value218, right_value218 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
                        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value219, right_value219 = (void*)0;
                        __freed_obj__ = 0;
                        if(type2_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_217, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_218 && !__freed_obj__) { name_218 = come_decrement_ref_count(name_218, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    expected_next_character(59,info);
                    parse_sharp_v5(info);
                    if(_if_conditional280=*info->p==125,                    _if_conditional280) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp_v5(info);
                }
                list$1charph_reset(info->generics_type_names);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 624, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(right_value223=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value220=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 624, "struct sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(type_name_184)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value222=sClass_clone(struct_class_202)))),(_Bool)1,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sStructNode_sline;
                _inf_value4->sname=(void*)sStructNode_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result132__ = __result_obj__ = ((struct sNode*)(right_value228=_inf_value4));
                if(struct_class_202 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_202, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_184 && !__freed_obj__) { type_name_184 = come_decrement_ref_count(type_name_184, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
                if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value220, right_value220 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value221);
                if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value221, right_value221 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value222);
                if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value222, right_value222 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value223);
                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value223, right_value223 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value228);
                if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[4] = right_value228, right_value228 = (void*)0;
                __freed_obj__ = 0;
                return __result132__;
                if(struct_class_202 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_202, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
        if(type_name_184 && !__freed_obj__) { type_name_184 = come_decrement_ref_count(type_name_184, (void*)0, (void*)0, 0, 0, 0); }
    }
    __result133__ = __result_obj__ = ((struct sNode*)(right_value229=top_level_v97(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, ((struct sNode*)right_value229)->finalize, ((struct sNode*)right_value229)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value229, right_value229 = (void*)0;
    __freed_obj__ = 0;
    return __result133__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional253=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional253) {
                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional254=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional254) {
                    if(self->mClass && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional255=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional255) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional256;
struct sStructNobodyNode* __result122__;
void* right_value175;
struct sStructNobodyNode* result_186;
_Bool _if_conditional257;
void* right_value176;
char* __dec_obj59;
_Bool _if_conditional258;
void* right_value177;
struct sClass* __dec_obj60;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value178;
char* __dec_obj61;
struct sStructNobodyNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value175 = (void*)0;
memset(&result_186, 0, sizeof(struct sStructNobodyNode*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
                if(_if_conditional256=self==(void*)0,                _if_conditional256) {
                    __result122__ = __result_obj__ = (void*)0;
                    return __result122__;
                }
                result_186=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value175=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value175, right_value175 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional257=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional257) {
                    __dec_obj59=result_186->mName;
                    result_186->mName=(char*)come_increment_ref_count(((char*)(right_value176=string_clone(self->mName))));
                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value176, right_value176 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional258=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional258) {
                    __dec_obj60=result_186->mClass;
                    result_186->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value177=sClass_clone(self->mClass))));
                    if(__dec_obj60) { come_call_finalizer(sClass_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value177, right_value177 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional259=self!=((void*)0),                _if_conditional259) {
                    result_186->sline=self->sline;
                }
                if(_if_conditional260=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional260) {
                    __dec_obj61=result_186->sname;
                    result_186->sname=(char*)come_increment_ref_count(((char*)(right_value178=string_clone(self->sname))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value178, right_value178 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result123__ = __result_obj__ = result_186;
                if(result_186 && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result123__;
                if(result_186 && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_187;
_Bool _while_condtional28;
struct list_item$1charph* prev_it_188;
struct list$1charph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_187, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_188, 0, sizeof(struct list_item$1charph*));
                    it_187=self->head;
                    while(_while_condtional28=it_187!=((void*)0),                    _while_condtional28) {
                        prev_it_188=it_187;
                        it_187=it_187->next;
                        if(prev_it_188 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result125__ = __result_obj__ = self;
                    return __result125__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional262;
void* right_value181;
struct list_item$1charph* litem_190;
char* __dec_obj62;
_Bool _if_conditional263;
void* right_value182;
struct list_item$1charph* litem_191;
char* __dec_obj63;
void* right_value183;
struct list_item$1charph* litem_192;
char* __dec_obj64;
struct list$1charph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value181 = (void*)0;
memset(&litem_190, 0, sizeof(struct list_item$1charph*));
right_value182 = (void*)0;
memset(&litem_191, 0, sizeof(struct list_item$1charph*));
right_value183 = (void*)0;
memset(&litem_192, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional262=self->len==0,                        _if_conditional262) {
                            litem_190=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value181=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 224, "struct list_item$1charph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                            if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value181, right_value181 = (void*)0;
                            __freed_obj__ = 0;
                            litem_190->prev=((void*)0);
                            litem_190->next=((void*)0);
                            __dec_obj62=litem_190->item;
                            litem_190->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_190;
                            self->head=litem_190;
                        }
                        else {
                            if(_if_conditional263=self->len==1,                            _if_conditional263) {
                                litem_191=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value182=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 234, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                                if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value182, right_value182 = (void*)0;
                                __freed_obj__ = 0;
                                litem_191->prev=self->head;
                                litem_191->next=((void*)0);
                                __dec_obj63=litem_191->item;
                                litem_191->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_191;
                                self->head->next=litem_191;
                            }
                            else {
                                litem_192=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value183=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 244, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value183, right_value183 = (void*)0;
                                __freed_obj__ = 0;
                                litem_192->prev=self->tail;
                                litem_192->next=((void*)0);
                                __dec_obj64=litem_192->item;
                                litem_192->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                                self->tail->next=litem_192;
                                self->tail=litem_192;
                            }
                        }
                        self->len++;
                        __result126__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result126__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional272;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional272=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional272) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional273;
struct sGenericsStructNode* __result127__;
void* right_value201;
struct sGenericsStructNode* result_201;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value202;
char* __dec_obj67;
struct sGenericsStructNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value201 = (void*)0;
memset(&result_201, 0, sizeof(struct sGenericsStructNode*));
right_value202 = (void*)0;
                    if(_if_conditional273=self==(void*)0,                    _if_conditional273) {
                        __result127__ = __result_obj__ = (void*)0;
                        return __result127__;
                    }
                    result_201=(struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value201=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "struct sGenericsStructNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
                    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value201, right_value201 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional274=self!=((void*)0),                    _if_conditional274) {
                        result_201->sline=self->sline;
                    }
                    if(_if_conditional275=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional275) {
                        __dec_obj67=result_201->sname;
                        result_201->sname=(char*)come_increment_ref_count(((char*)(right_value202=string_clone(self->sname))));
                        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value202, right_value202 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    __result128__ = __result_obj__ = result_201;
                    if(result_201 && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,result_201, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result128__;
                    if(result_201 && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,result_201, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStructNode_finalize(struct sStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional281=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional281) {
                        if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional282=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional282) {
                        if(self->mClass && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional283=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional283) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional284;
struct sStructNode* __result130__;
void* right_value224;
struct sStructNode* result_220;
_Bool _if_conditional285;
void* right_value225;
char* __dec_obj70;
_Bool _if_conditional286;
void* right_value226;
struct sClass* __dec_obj71;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value227;
char* __dec_obj72;
_Bool _if_conditional289;
struct sStructNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value224 = (void*)0;
memset(&result_220, 0, sizeof(struct sStructNode*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
                    if(_if_conditional284=self==(void*)0,                    _if_conditional284) {
                        __result130__ = __result_obj__ = (void*)0;
                        return __result130__;
                    }
                    result_220=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value224=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
                    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value224, right_value224 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional285=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional285) {
                        __dec_obj70=result_220->mName;
                        result_220->mName=(char*)come_increment_ref_count(((char*)(right_value225=string_clone(self->mName))));
                        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
                        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value225, right_value225 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional286=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional286) {
                        __dec_obj71=result_220->mClass;
                        result_220->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value226=sClass_clone(self->mClass))));
                        if(__dec_obj71) { come_call_finalizer(sClass_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value226, right_value226 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional287=self!=((void*)0),                    _if_conditional287) {
                        result_220->sline=self->sline;
                    }
                    if(_if_conditional288=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional288) {
                        __dec_obj72=result_220->sname;
                        result_220->sname=(char*)come_increment_ref_count(((char*)(right_value227=string_clone(self->sname))));
                        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
                        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value227, right_value227 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional289=self!=((void*)0),                    _if_conditional289) {
                        result_220->mOutput=self->mOutput;
                    }
                    __result131__ = __result_obj__ = result_220;
                    if(result_220 && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,result_220, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result131__;
                    if(result_220 && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,result_220, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool define_struct_221;
char* p_222;
int sline_223;
_Bool _if_conditional290;
void* right_value230;
char* type_name_224;
_Bool _if_conditional291;
void* right_value231;
_Bool _if_conditional292;
_Bool _if_conditional293;
void* right_value232;
char* type_name_225;
void* right_value233;
struct sNode* __result134__;
void* right_value234;
struct sNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&define_struct_221, 0, sizeof(_Bool));
memset(&p_222, 0, sizeof(char*));
memset(&sline_223, 0, sizeof(int));
right_value230 = (void*)0;
memset(&type_name_224, 0, sizeof(char*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&type_name_225, 0, sizeof(char*));
right_value233 = (void*)0;
right_value234 = (void*)0;
    define_struct_221=(_Bool)0;
    {
        p_222=info->p;
        sline_223=info->sline;
        if(_if_conditional290=charp_operator_equals(buf,"struct"),        _if_conditional290) {
            type_name_224=(char*)come_increment_ref_count(((char*)(right_value230=parse_word(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
            if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value230, right_value230 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional291=*info->p==123,            _if_conditional291) {
                ((char*)(right_value231=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value231, right_value231 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional292=*info->p==59,                _if_conditional292) {
                    define_struct_221=(_Bool)1;
                }
            }
            if(type_name_224 && !__freed_obj__) { type_name_224 = come_decrement_ref_count(type_name_224, (void*)0, (void*)0, 0, 0, 0); }
        }
        info->p=p_222;
        info->sline=sline_223;
    }
    if(_if_conditional293=define_struct_221,    _if_conditional293) {
        type_name_225=(char*)come_increment_ref_count(((char*)(right_value232=parse_word(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value232, right_value232 = (void*)0;
        __freed_obj__ = 0;
        __result134__ = __result_obj__ = ((struct sNode*)(right_value233=parse_struct((char*)come_increment_ref_count(type_name_225),info)));
        if(type_name_225 && !__freed_obj__) { type_name_225 = come_decrement_ref_count(type_name_225, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, ((struct sNode*)right_value233)->finalize, ((struct sNode*)right_value233)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value233, right_value233 = (void*)0;
        __freed_obj__ = 0;
        return __result134__;
        if(type_name_225 && !__freed_obj__) { type_name_225 = come_decrement_ref_count(type_name_225, (void*)0, (void*)0, 0, 0, 0); }
    }
    __result135__ = __result_obj__ = ((struct sNode*)(right_value234=string_node_v13(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value234, right_value234 = (void*)0;
    __freed_obj__ = 0;
    return __result135__;
}

