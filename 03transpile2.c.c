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
struct optional$2intbool
{
    int v1;
    _Bool v2;
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
struct optional$2boolbool
{
    _Bool v1;
    _Bool v2;
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
struct optional$2charphbool
{
    char* v1;
    _Bool v2;
};
struct optional$2intpbool
{
    int* v1;
    _Bool v2;
};
struct optional$2list$1charphphbool
{
    struct list$1charph* v1;
    _Bool v2;
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
struct optional$2sFunphbool
{
    struct sFun* v1;
    _Bool v2;
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

void exception_stackframe();

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

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

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

struct optional$2boolbool* charp_equals(char* self, char* right);

struct optional$2boolbool* string_equals(char* self, char* right);

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

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2intpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* string_puts(char* self);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

struct optional$2charphbool* charp_print(char* self);

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

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info);

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

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info);

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info);

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

void come_init_v3();

void come_final_v3();

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
void show_type(struct sType* type, struct sInfo* info);

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
char* output_function(struct sFun* fun, struct sInfo* info);

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
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
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

int transpile_v3(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
_Bool output_source_file_v3(struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunphbool* optional$2sFunphbool_initialize(struct optional$2sFunphbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunphboolp_finalize(struct optional$2sFunphbool* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void list$1charpp_finalize(struct list$1charp* self);
_Bool output_header_file(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_last_code_to_source(struct sInfo* info);

void add_last_code_to_source_with_comma(struct sInfo* info);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void dec_stack_ptr(int value, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail);
static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);

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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2008, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2018, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2028, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2038, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2048, "struct smart_pointer$1long"))));
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

void come_init_v3(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void come_final_v3(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
void* right_value11;
struct buffer* buf_5;
char* class_name_6;
_Bool _if_conditional5;
_Bool _if_conditional6;
void* right_value12;
char* __result7__;
void* right_value13;
struct CVALUE* come_value_7;
void* right_value14;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
void* right_value15;
char* result_type_str_14;
int j_15;
struct list$1sTypeph* o2_saved_16;
struct sType* it_19;
_Bool _for_condtionalA1;
void* right_value16;
char* param_type_str_22;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value17;
char* __result16__;
_Bool _if_conditional53;
int i_23;
_Bool _for_condtionalA2;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value18;
char* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&class_name_6, 0, sizeof(char*));
right_value12 = (void*)0;
right_value13 = (void*)0;
memset(&come_value_7, 0, sizeof(struct CVALUE*));
right_value14 = (void*)0;
right_value15 = (void*)0;
memset(&result_type_str_14, 0, sizeof(char*));
memset(&j_15, 0, sizeof(int));
memset(&o2_saved_16, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct sType*));
right_value16 = (void*)0;
memset(&param_type_str_22, 0, sizeof(char*));
right_value17 = (void*)0;
memset(&i_23, 0, sizeof(int));
right_value18 = (void*)0;
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 15, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10, right_value10 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11, right_value11 = (void*)0;
    __freed_obj__ = 0;
    class_name_6=type->mClass->mName;
    if(_if_conditional5=type->mAlignas,    _if_conditional5) {
        if(_if_conditional6=!node_compile(type->mAlignas,info),        _if_conditional6) {
            printf("_Alignas error\n");
            __result7__ = __result_obj__ = ((char*)(right_value12=__builtin_string("")));
            if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value12, right_value12 = (void*)0;
            __freed_obj__ = 0;
            return __result7__;
        }
        come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value13=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value13, right_value13 = (void*)0;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        buffer_append_str(buf_5,((char*)(right_value14=xsprintf("_Alignas(%s) ",come_value_7->c_value))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
        if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value14, right_value14 = (void*)0;
        __freed_obj__ = 0;
        if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional25=type->mStatic&&!type->mClass->mStruct&&!type->mClass->mUnion,    _if_conditional25) {
        buffer_append_str(buf_5,"static ");
    }
    if(_if_conditional26=type->mConstant,    _if_conditional26) {
        buffer_append_str(buf_5,"const ");
    }
    if(_if_conditional27=type->mUnsigned,    _if_conditional27) {
        buffer_append_str(buf_5,"unsigned ");
    }
    if(_if_conditional28=type->mShort,    _if_conditional28) {
        buffer_append_str(buf_5,"short ");
    }
    if(_if_conditional29=string_operator_equals(type->mOriginalTypeName,"va_list"),    _if_conditional29) {
        buffer_append_str(buf_5,"va_list");
    }
    else {
        if(_if_conditional30=string_operator_equals(type->mOriginalTypeName,"__builtin_va_list"),        _if_conditional30) {
            buffer_append_str(buf_5,"__builtin_va_list");
        }
        else {
            if(_if_conditional31=charp_operator_equals(class_name_6,"__builtin_va_list"),            _if_conditional31) {
                if(_if_conditional32=in_header,                _if_conditional32) {
                    buffer_append_str(buf_5,class_name_6);
                }
                else {
                    buffer_append_str(buf_5,"va_list");
                }
            }
            else {
                if(_if_conditional33=type->mClass->mStruct,                _if_conditional33) {
                    buffer_append_str(buf_5,"struct ");
                    buffer_append_str(buf_5,class_name_6);
                }
                else {
                    if(_if_conditional34=type->mClass->mUnion,                    _if_conditional34) {
                        buffer_append_str(buf_5,"union ");
                        buffer_append_str(buf_5,class_name_6);
                    }
                    else {
                        if(_if_conditional35=type->mClass->mEnum,                        _if_conditional35) {
                            buffer_append_str(buf_5,"enum ");
                            buffer_append_str(buf_5,class_name_6);
                        }
                        else {
                            if(_if_conditional36=type->mLongLong,                            _if_conditional36) {
                                if(_if_conditional37=charp_operator_equals(class_name_6,"int"),                                _if_conditional37) {
                                    buffer_append_str(buf_5,"long long int");
                                }
                                else {
                                    if(_if_conditional38=charp_operator_equals(class_name_6,"long"),                                    _if_conditional38) {
                                        buffer_append_str(buf_5,"long long");
                                    }
                                }
                            }
                            else {
                                if(_if_conditional39=type->mLong,                                _if_conditional39) {
                                    if(_if_conditional40=charp_operator_equals(class_name_6,"int"),                                    _if_conditional40) {
                                        buffer_append_str(buf_5,"long int");
                                    }
                                    else {
                                        if(_if_conditional41=charp_operator_equals(class_name_6,"long"),                                        _if_conditional41) {
                                            buffer_append_str(buf_5,"long long");
                                        }
                                        else {
                                            if(_if_conditional42=charp_operator_equals(class_name_6,"double"),                                            _if_conditional42) {
                                                buffer_append_str(buf_5,"long double");
                                            }
                                        }
                                    }
                                }
                                else {
                                    if(_if_conditional43=charp_operator_equals(class_name_6,"long"),                                    _if_conditional43) {
                                        buffer_append_str(buf_5,"long");
                                    }
                                    else {
                                        if(_if_conditional44=charp_operator_equals(class_name_6,"__uint128_t"),                                        _if_conditional44) {
                                            buffer_append_str(buf_5,"__uint128_t");
                                        }
                                        else {
                                            if(_if_conditional45=charp_operator_equals(class_name_6,"bool"),                                            _if_conditional45) {
                                                buffer_append_str(buf_5,"_Bool");
                                            }
                                            else {
                                                if(_if_conditional46=charp_operator_equals(class_name_6,"lambda"),                                                _if_conditional46) {
                                                    result_type_str_14=(char*)come_increment_ref_count(((char*)(right_value15=make_type_name_string(type->mResultType->v1,in_header,(_Bool)0,(_Bool)0,info))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                                                    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value15, right_value15 = (void*)0;
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(buf_5,result_type_str_14);
                                                    buffer_append_str(buf_5," (*)(");
                                                    j_15=0;
                                                    for(
                                                    o2_saved_16=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_19=list$1sTypeph_begin((o2_saved_16)) ,                                                    0;                                                    _for_condtionalA1=                                                    !list$1sTypeph_end((o2_saved_16)) ,                                                    _for_condtionalA1;                                                    it_19=list$1sTypeph_next((o2_saved_16)) ,                                                    0                                                    ){
                                                        param_type_str_22=(char*)come_increment_ref_count(((char*)(right_value16=make_type_name_string(it_19,in_header,(_Bool)0,(_Bool)0,info))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                                                        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value16, right_value16 = (void*)0;
                                                        __freed_obj__ = 0;
                                                        buffer_append_str(buf_5,param_type_str_22);
                                                        if(_if_conditional51=j_15!=list$1sTypeph_length(type->mParamTypes)-1,                                                        _if_conditional51) {
                                                            buffer_append_str(buf_5,",");
                                                        }
                                                        j_15++;
                                                        if(param_type_str_22 && !__freed_obj__) { param_type_str_22 = come_decrement_ref_count(param_type_str_22, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
                                                    if(o2_saved_16 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    buffer_append_str(buf_5,")");
                                                    if(result_type_str_14 && !__freed_obj__) { result_type_str_14 = come_decrement_ref_count(result_type_str_14, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                                else {
                                                    if(_if_conditional52=class_name_6==((void*)0),                                                    _if_conditional52) {
                                                        err_msg(info,"class name is null");
                                                        __result16__ = __result_obj__ = ((char*)(right_value17=__builtin_string("")));
                                                        if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                                                        if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value17, right_value17 = (void*)0;
                                                        __freed_obj__ = 0;
                                                        return __result16__;
                                                    }
                                                    buffer_append_str(buf_5,class_name_6);
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
    if(_if_conditional53=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_6,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional53) {
        for(
        i_23=0 ,        0;        _for_condtionalA2=        i_23<type->mPointerNum ,        _for_condtionalA2;        i_23++ ,        0        ){
            buffer_append_str(buf_5,"*");
        }
    }
    if(_if_conditional54=array_cast_pointer&&list$1sNodeph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional54) {
        buffer_append_str(buf_5,"*");
    }
    if(_if_conditional55=type->mRestrict,    _if_conditional55) {
        buffer_append_str(buf_5,"restrict");
    }
    __result18__ = __result_obj__ = ((char*)(right_value18=buffer_to_string(buf_5)));
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18, right_value18 = (void*)0;
    __freed_obj__ = 0;
    return __result18__;
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional7=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional7) {
                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional8=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional8) {
                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
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
struct list_item$1sTypeph* it_8;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                            it_8=self->head;
                            while(_while_condtional1=it_8!=((void*)0),                            _while_condtional1) {
                                prev_it_9=it_8;
                                it_8=it_8->next;
                                if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
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
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                            it_10=self->head;
                            while(_while_condtional2=it_10!=((void*)0),                            _while_condtional2) {
                                prev_it_11=it_10;
                                it_10=it_10->next;
                                if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
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
struct list_item$1charph* it_12;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                            it_12=self->head;
                            while(_while_condtional3=it_12!=((void*)0),                            _while_condtional3) {
                                prev_it_13=it_12;
                                it_12=it_12->next;
                                if(prev_it_13 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0); }
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

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
struct sType* result_17;
struct sType* __result8__;
_Bool _if_conditional48;
struct sType* __result9__;
struct sType* result_18;
struct sType* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_17, 0, sizeof(struct sType*));
memset(&result_18, 0, sizeof(struct sType*));
                                                        if(_if_conditional47=self==((void*)0),                                                        _if_conditional47) {
                                                            memset(&result_17,0,sizeof(struct sType*));
                                                            __result8__ = __result_obj__ = result_17;
                                                            return __result8__;
                                                        }
                                                        self->it=self->head;
                                                        if(_if_conditional48=self->it,                                                        _if_conditional48) {
                                                            __result9__ = __result_obj__ = self->it->item;
                                                            return __result9__;
                                                        }
                                                        memset(&result_18,0,sizeof(struct sType*));
                                                        __result10__ = __result_obj__ = result_18;
                                                        return __result10__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __result11__ = self==((void*)0)||self->it==((void*)0);
                                                        return __result11__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
struct sType* result_20;
struct sType* __result12__;
_Bool _if_conditional50;
struct sType* __result13__;
struct sType* result_21;
struct sType* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_20, 0, sizeof(struct sType*));
memset(&result_21, 0, sizeof(struct sType*));
                                                        if(_if_conditional49=self==((void*)0)||self->it==((void*)0),                                                        _if_conditional49) {
                                                            memset(&result_20,0,sizeof(struct sType*));
                                                            __result12__ = __result_obj__ = result_20;
                                                            return __result12__;
                                                        }
                                                        self->it=self->it->next;
                                                        if(_if_conditional50=self->it,                                                        _if_conditional50) {
                                                            __result13__ = __result_obj__ = self->it->item;
                                                            return __result13__;
                                                        }
                                                        memset(&result_21,0,sizeof(struct sType*));
                                                        __result14__ = __result_obj__ = result_21;
                                                        return __result14__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            __result15__ = self->len;
                                                            return __result15__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result17__ = self->len;
        return __result17__;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value19;
void* right_value20;
struct buffer* buf_24;
char* class_name_25;
_Bool _if_conditional56;
int i_26;
_Bool _for_condtionalA3;
void* right_value21;
struct sType* gtype_30;
void* right_value22;
_Bool _if_conditional59;
_Bool _if_conditional60;
int i_31;
_Bool _for_condtionalA4;
_Bool _if_conditional61;
void* right_value23;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value19 = (void*)0;
right_value20 = (void*)0;
memset(&buf_24, 0, sizeof(struct buffer*));
memset(&class_name_25, 0, sizeof(char*));
memset(&i_26, 0, sizeof(int));
right_value21 = (void*)0;
memset(&gtype_30, 0, sizeof(struct sType*));
right_value22 = (void*)0;
memset(&i_31, 0, sizeof(int));
right_value23 = (void*)0;
    buf_24=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value20=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 147, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value19, right_value19 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value20);
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value20, right_value20 = (void*)0;
    __freed_obj__ = 0;
    class_name_25=type->mClass->mName;
    buffer_append_str(buf_24,class_name_25);
    if(_if_conditional56=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional56) {
        buffer_append_str(buf_24,"<");
        for(
        i_26=0 ,        0;        _for_condtionalA3=        i_26<list$1sTypeph_length(type->mGenericsTypes) ,        _for_condtionalA3;        i_26++ ,        0        ){
            gtype_30=((struct sType*)(right_value21=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_26)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value21, right_value21 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(buf_24,((char*)(right_value22=make_come_type_name_string(gtype_30,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value22, right_value22 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional59=i_26!=list$1sTypeph_length(type->mGenericsTypes)-1,            _if_conditional59) {
                buffer_append_str(buf_24,",");
            }
        }
        buffer_append_str(buf_24,">");
    }
    if(_if_conditional60=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_25,"lambda"),    _if_conditional60) {
        for(
        i_31=0 ,        0;        _for_condtionalA4=        i_31<type->mPointerNum ,        _for_condtionalA4;        i_31++ ,        0        ){
            buffer_append_str(buf_24,"*");
        }
    }
    if(_if_conditional61=type->mHeap,    _if_conditional61) {
        buffer_append_str(buf_24,"%");
    }
    __result21__ = __result_obj__ = ((char*)(right_value23=buffer_to_string(buf_24)));
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value23, right_value23 = (void*)0;
    __freed_obj__ = 0;
    return __result21__;
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
struct list_item$1sTypeph* it_27;
int i_28;
_Bool _while_condtional4;
_Bool _if_conditional58;
struct sType* __result19__;
struct sType* default_value_29;
struct sType* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_27, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_28, 0, sizeof(int));
memset(&default_value_29, 0, sizeof(struct sType*));
                if(_if_conditional57=position<0,                _if_conditional57) {
                    position+=self->len;
                }
                it_27=self->head;
                i_28=0;
                while(_while_condtional4=it_27!=((void*)0),                _while_condtional4) {
                    if(_if_conditional58=position==i_28,                    _if_conditional58) {
                        __result19__ = __result_obj__ = it_27->item;
                        return __result19__;
                    }
                    it_27=it_27->next;
                    i_28++;
                }
                memset(&default_value_29,0,sizeof(struct sType*));
                __result20__ = __result_obj__ = default_value_29;
                if(default_value_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result20__;
                if(default_value_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value24 = (void*)0;
    puts(((char*)(right_value24=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value24, right_value24 = (void*)0;
    __freed_obj__ = 0;
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value25;
void* right_value26;
struct buffer* buf_32;
_Bool _if_conditional62;
void* right_value27;
char* __result22__;
_Bool _if_conditional63;
void* right_value28;
int i_33;
struct list$1sTypeph* o2_saved_34;
struct sType* it_35;
_Bool _for_condtionalA5;
void* right_value29;
_Bool _if_conditional64;
void* right_value30;
void* right_value31;
char* __result23__;
void* right_value32;
void* right_value33;
int i_36;
struct list$1sTypeph* o2_saved_37;
struct sType* it_38;
_Bool _for_condtionalA6;
void* right_value34;
_Bool _if_conditional65;
void* right_value35;
char* __result24__;
void* right_value36;
char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value25 = (void*)0;
right_value26 = (void*)0;
memset(&buf_32, 0, sizeof(struct buffer*));
right_value27 = (void*)0;
right_value28 = (void*)0;
memset(&i_33, 0, sizeof(int));
memset(&o2_saved_34, 0, sizeof(struct list$1sTypeph*));
memset(&it_35, 0, sizeof(struct sType*));
right_value29 = (void*)0;
right_value30 = (void*)0;
right_value31 = (void*)0;
right_value32 = (void*)0;
right_value33 = (void*)0;
memset(&i_36, 0, sizeof(int));
memset(&o2_saved_37, 0, sizeof(struct list$1sTypeph*));
memset(&it_38, 0, sizeof(struct sType*));
right_value34 = (void*)0;
right_value35 = (void*)0;
right_value36 = (void*)0;
    buf_32=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value26=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 188, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value25, right_value25 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value26, right_value26 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional62=type->mResultType==((void*)0),    _if_conditional62) {
        err_msg(info,"invalid lambda type");
        __result22__ = __result_obj__ = ((char*)(right_value27=__builtin_string("")));
        if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value27, right_value27 = (void*)0;
        __freed_obj__ = 0;
        return __result22__;
    }
    if(_if_conditional63=type->mResultType->v1&&string_operator_equals(type->mResultType->v1->mClass->mName,"lambda"),    _if_conditional63) {
        buffer_append_str(buf_32,((char*)(right_value28=xsprintf("(*%s)(",var_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value28, right_value28 = (void*)0;
        __freed_obj__ = 0;
        i_33=0;
        for(
        o2_saved_34=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_35=list$1sTypeph_begin((o2_saved_34)) ,        0;        _for_condtionalA5=        !list$1sTypeph_end((o2_saved_34)) ,        _for_condtionalA5;        it_35=list$1sTypeph_next((o2_saved_34)) ,        0        ){
            buffer_append_str(buf_32,((char*)(right_value29=make_type_name_string(it_35,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value29, right_value29 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional64=i_33!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional64) {
                buffer_append_str(buf_32,",");
            }
            i_33++;
        }
        if(o2_saved_34 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_34, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_32,")");
        __result23__ = __result_obj__ = ((char*)(right_value31=make_lambda_type_name_string(type->mResultType->v1,((char*)(right_value30=buffer_to_string(buf_32))),info)));
        if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value30, right_value30 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value31, right_value31 = (void*)0;
        __freed_obj__ = 0;
        return __result23__;
    }
    else {
        buffer_append_str(buf_32,((char*)(right_value33=xsprintf("%s (*%s)(",((char*)(right_value32=make_type_name_string(type->mResultType->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))),var_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value32, right_value32 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value33, right_value33 = (void*)0;
        __freed_obj__ = 0;
        i_36=0;
        for(
        o2_saved_37=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_38=list$1sTypeph_begin((o2_saved_37)) ,        0;        _for_condtionalA6=        !list$1sTypeph_end((o2_saved_37)) ,        _for_condtionalA6;        it_38=list$1sTypeph_next((o2_saved_37)) ,        0        ){
            buffer_append_str(buf_32,((char*)(right_value34=make_type_name_string(it_38,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value34, right_value34 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional65=i_36!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional65) {
                buffer_append_str(buf_32,",");
            }
            i_36++;
        }
        if(o2_saved_37 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_37, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_32,")");
        __result24__ = __result_obj__ = ((char*)(right_value35=buffer_to_string(buf_32)));
        if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value35, right_value35 = (void*)0;
        __freed_obj__ = 0;
        return __result24__;
    }
    __result25__ = __result_obj__ = ((char*)(right_value36=buffer_to_string(buf_32)));
    if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value36, right_value36 = (void*)0;
    __freed_obj__ = 0;
    return __result25__;
    if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value37;
void* right_value38;
struct buffer* buf_39;
_Bool _if_conditional66;
void* right_value39;
char* str_40;
_Bool _if_conditional67;
void* right_value40;
char* str_41;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value41;
char* __result26__;
void* right_value42;
struct CVALUE* come_value_42;
void* right_value43;
char* type_str_43;
void* right_value44;
void* right_value45;
_Bool _if_conditional70;
void* right_value46;
_Bool _if_conditional71;
void* right_value47;
_Bool _if_conditional72;
void* right_value48;
char* type_str_44;
_Bool _if_conditional73;
void* right_value49;
_Bool _if_conditional74;
void* right_value50;
char* type_str_45;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct list$1sNodeph* o2_saved_46;
struct sNode* it_49;
_Bool _for_condtionalA7;
_Bool _if_conditional81;
void* right_value51;
char* __result34__;
void* right_value52;
struct CVALUE* cvalue_52;
void* right_value53;
_Bool _if_conditional82;
void* right_value54;
void* right_value55;
char* type_str_53;
_Bool _if_conditional83;
void* right_value56;
char* __result35__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value57;
void* right_value58;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value37 = (void*)0;
right_value38 = (void*)0;
memset(&buf_39, 0, sizeof(struct buffer*));
right_value39 = (void*)0;
memset(&str_40, 0, sizeof(char*));
right_value40 = (void*)0;
memset(&str_41, 0, sizeof(char*));
right_value41 = (void*)0;
right_value42 = (void*)0;
memset(&come_value_42, 0, sizeof(struct CVALUE*));
right_value43 = (void*)0;
memset(&type_str_43, 0, sizeof(char*));
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
right_value48 = (void*)0;
memset(&type_str_44, 0, sizeof(char*));
right_value49 = (void*)0;
right_value50 = (void*)0;
memset(&type_str_45, 0, sizeof(char*));
memset(&o2_saved_46, 0, sizeof(struct list$1sNodeph*));
memset(&it_49, 0, sizeof(struct sNode*));
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&cvalue_52, 0, sizeof(struct CVALUE*));
right_value53 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
memset(&type_str_53, 0, sizeof(char*));
right_value56 = (void*)0;
right_value57 = (void*)0;
right_value58 = (void*)0;
    buf_39=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value38=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value37=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 237, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value37, right_value37 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value38);
    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value38, right_value38 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional66=string_operator_equals(type->mClass->mName,"lambda")&&type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),    _if_conditional66) {
        str_40=(char*)come_increment_ref_count(((char*)(right_value39=header_lambda(type,(char*)come_increment_ref_count(type->mAsmName),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value39, right_value39 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(buf_39,str_40);
        if(str_40 && !__freed_obj__) { str_40 = come_decrement_ref_count(str_40, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional67=string_operator_equals(type->mClass->mName,"lambda"),        _if_conditional67) {
            str_41=(char*)come_increment_ref_count(((char*)(right_value40=make_lambda_type_name_string(type,name,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value40, right_value40 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(buf_39,str_41);
            if(str_41 && !__freed_obj__) { str_41 = come_decrement_ref_count(str_41, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional68=type->mSizeNum!=((void*)0),            _if_conditional68) {
                if(_if_conditional69=!node_compile(type->mSizeNum,info),                _if_conditional69) {
                    err_msg(info,"invalid bit field number");
                    __result26__ = __result_obj__ = ((char*)(right_value41=__builtin_string("")));
                    if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value41, right_value41 = (void*)0;
                    __freed_obj__ = 0;
                    return __result26__;
                }
                come_value_42=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value42=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value42, right_value42 = (void*)0;
                __freed_obj__ = 0;
                dec_stack_ptr(1,info);
                type_str_43=(char*)come_increment_ref_count(((char*)(right_value43=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value43, right_value43 = (void*)0;
                __freed_obj__ = 0;
                buffer_append_str(buf_39,((char*)(right_value44=xsprintf("%s ",type_str_43))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value44, right_value44 = (void*)0;
                __freed_obj__ = 0;
                buffer_append_str(buf_39,((char*)(right_value45=xsprintf("%s:%s",name,come_value_42->c_value))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value45, right_value45 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional70=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional70) {
                    buffer_append_str(buf_39,((char*)(right_value46=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value46, right_value46 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional71=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional71) {
                    buffer_append_str(buf_39,((char*)(right_value47=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value47, right_value47 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(come_value_42 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_42, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_str_43 && !__freed_obj__) { type_str_43 = come_decrement_ref_count(type_str_43, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional72=type->mOmitArrayNum,                _if_conditional72) {
                    type_str_44=(char*)come_increment_ref_count(((char*)(right_value48=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value48, right_value48 = (void*)0;
                    __freed_obj__ = 0;
                    buffer_append_str(buf_39,type_str_44);
                    buffer_append_str(buf_39," ");
                    buffer_append_str(buf_39,name);
                    buffer_append_str(buf_39,"[]");
                    if(_if_conditional73=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                    _if_conditional73) {
                        buffer_append_str(buf_39,((char*)(right_value49=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value49, right_value49 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(type_str_44 && !__freed_obj__) { type_str_44 = come_decrement_ref_count(type_str_44, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional74=list$1sNodeph_length(type->mArrayNum)>0,                    _if_conditional74) {
                        type_str_45=(char*)come_increment_ref_count(((char*)(right_value50=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value50, right_value50 = (void*)0;
                        __freed_obj__ = 0;
                        buffer_append_str(buf_39,type_str_45);
                        buffer_append_str(buf_39," ");
                        if(_if_conditional75=type->mNoArrayPointerNum>0,                        _if_conditional75) {
                            buffer_append_str(buf_39,"(*");
                        }
                        buffer_append_str(buf_39,name);
                        if(_if_conditional76=type->mNoArrayPointerNum>0,                        _if_conditional76) {
                            buffer_append_str(buf_39,")");
                        }
                        for(
                        o2_saved_46=(struct list$1sNodeph*)come_increment_ref_count((type->mArrayNum)),it_49=list$1sNodeph_begin((o2_saved_46)) ,                        0;                        _for_condtionalA7=                        !list$1sNodeph_end((o2_saved_46)) ,                        _for_condtionalA7;                        it_49=list$1sNodeph_next((o2_saved_46)) ,                        0                        ){
                            if(_if_conditional81=!node_compile(it_49,info),                            _if_conditional81) {
                                err_msg(info,"invalid array number");
                                __result34__ = __result_obj__ = ((char*)(right_value51=__builtin_string("")));
                                if(o2_saved_46 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_str_45 && !__freed_obj__) { type_str_45 = come_decrement_ref_count(type_str_45, (void*)0, (void*)0, 0, 0, 0); }
                                if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                                if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value51, right_value51 = (void*)0;
                                __freed_obj__ = 0;
                                return __result34__;
                            }
                            cvalue_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value52=get_value_from_stack(-1,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value52, right_value52 = (void*)0;
                            __freed_obj__ = 0;
                            dec_stack_ptr(1,info);
                            buffer_append_str(buf_39,((char*)(right_value53=xsprintf("[%s]",cvalue_52->c_value))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value53, right_value53 = (void*)0;
                            __freed_obj__ = 0;
                            if(cvalue_52 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_46 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(_if_conditional82=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional82) {
                            buffer_append_str(buf_39,((char*)(right_value54=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                            if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value54, right_value54 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(type_str_45 && !__freed_obj__) { type_str_45 = come_decrement_ref_count(type_str_45, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        type_str_53=(char*)come_increment_ref_count(((char*)(right_value55=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value55, right_value55 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional83=string_operator_equals(type_str_53,""),                        _if_conditional83) {
                            __result35__ = __result_obj__ = ((char*)(right_value56=__builtin_string("")));
                            if(type_str_53 && !__freed_obj__) { type_str_53 = come_decrement_ref_count(type_str_53, (void*)0, (void*)0, 0, 0, 0); }
                            if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value56, right_value56 = (void*)0;
                            __freed_obj__ = 0;
                            return __result35__;
                        }
                        buffer_append_str(buf_39,type_str_53);
                        buffer_append_str(buf_39," ");
                        if(_if_conditional84=type->mNoArrayPointerNum>0,                        _if_conditional84) {
                            buffer_append_str(buf_39,"(*");
                        }
                        buffer_append_str(buf_39,name);
                        if(_if_conditional85=type->mNoArrayPointerNum>0,                        _if_conditional85) {
                            buffer_append_str(buf_39,")");
                        }
                        if(_if_conditional86=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional86) {
                            buffer_append_str(buf_39,((char*)(right_value57=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value57, right_value57 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(type_str_53 && !__freed_obj__) { type_str_53 = come_decrement_ref_count(type_str_53, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
        }
    }
    __result36__ = __result_obj__ = ((char*)(right_value58=buffer_to_string(buf_39)));
    if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value58, right_value58 = (void*)0;
    __freed_obj__ = 0;
    return __result36__;
    if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional77;
struct sNode* result_47;
struct sNode* __result27__;
_Bool _if_conditional78;
struct sNode* __result28__;
struct sNode* result_48;
struct sNode* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_47, 0, sizeof(struct sNode*));
memset(&result_48, 0, sizeof(struct sNode*));
                            if(_if_conditional77=self==((void*)0),                            _if_conditional77) {
                                memset(&result_47,0,sizeof(struct sNode*));
                                __result27__ = __result_obj__ = result_47;
                                return __result27__;
                            }
                            self->it=self->head;
                            if(_if_conditional78=self->it,                            _if_conditional78) {
                                __result28__ = __result_obj__ = self->it->item;
                                return __result28__;
                            }
                            memset(&result_48,0,sizeof(struct sNode*));
                            __result29__ = __result_obj__ = result_48;
                            return __result29__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result30__ = self==((void*)0)||self->it==((void*)0);
                            return __result30__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional79;
struct sNode* result_50;
struct sNode* __result31__;
_Bool _if_conditional80;
struct sNode* __result32__;
struct sNode* result_51;
struct sNode* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_50, 0, sizeof(struct sNode*));
memset(&result_51, 0, sizeof(struct sNode*));
                            if(_if_conditional79=self==((void*)0)||self->it==((void*)0),                            _if_conditional79) {
                                memset(&result_50,0,sizeof(struct sNode*));
                                __result31__ = __result_obj__ = result_50;
                                return __result31__;
                            }
                            self->it=self->it->next;
                            if(_if_conditional80=self->it,                            _if_conditional80) {
                                __result32__ = __result_obj__ = self->it->item;
                                return __result32__;
                            }
                            memset(&result_51,0,sizeof(struct sNode*));
                            __result33__ = __result_obj__ = result_51;
                            return __result33__;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value59;
void* right_value60;
struct buffer* output_54;
_Bool _if_conditional87;
void* right_value61;
void* right_value62;
struct buffer* output2_55;
int i_56;
struct list$1sTypeph* o2_saved_57;
struct sType* it_58;
_Bool _for_condtionalA8;
void* right_value63;
char* name_62;
void* right_value64;
char* str_63;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value65;
void* right_value66;
char* str_64;
void* right_value67;
_Bool _if_conditional92;
void* right_value102;
struct sType* base_result_type_83;
void* right_value103;
void* right_value104;
struct list$1sNodeph* __dec_obj28;
void* right_value105;
char* result_type_str_84;
int i_85;
struct list$1sTypeph* o2_saved_86;
struct sType* it_87;
_Bool _for_condtionalA9;
void* right_value106;
char* name_88;
void* right_value107;
char* str_89;
_Bool _if_conditional163;
_Bool _if_conditional164;
void* right_value108;
struct sNode* node_93;
_Bool _if_conditional167;
void* right_value109;
char* __result59__;
void* right_value110;
struct CVALUE* cvalue_94;
void* right_value111;
void* right_value112;
void* right_value113;
char* result_type_str_95;
int i_96;
struct list$1sTypeph* o2_saved_97;
struct sType* it_98;
_Bool _for_condtionalA10;
void* right_value114;
char* name_99;
void* right_value115;
char* str_100;
_Bool _if_conditional168;
_Bool _if_conditional169;
void* right_value116;
void* right_value117;
void* right_value118;
void* right_value119;
void* right_value120;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value59 = (void*)0;
right_value60 = (void*)0;
memset(&output_54, 0, sizeof(struct buffer*));
right_value61 = (void*)0;
right_value62 = (void*)0;
memset(&output2_55, 0, sizeof(struct buffer*));
memset(&i_56, 0, sizeof(int));
memset(&o2_saved_57, 0, sizeof(struct list$1sTypeph*));
memset(&it_58, 0, sizeof(struct sType*));
right_value63 = (void*)0;
memset(&name_62, 0, sizeof(char*));
right_value64 = (void*)0;
memset(&str_63, 0, sizeof(char*));
right_value65 = (void*)0;
right_value66 = (void*)0;
memset(&str_64, 0, sizeof(char*));
right_value67 = (void*)0;
right_value102 = (void*)0;
memset(&base_result_type_83, 0, sizeof(struct sType*));
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_type_str_84, 0, sizeof(char*));
memset(&i_85, 0, sizeof(int));
memset(&o2_saved_86, 0, sizeof(struct list$1sTypeph*));
memset(&it_87, 0, sizeof(struct sType*));
right_value106 = (void*)0;
memset(&name_88, 0, sizeof(char*));
right_value107 = (void*)0;
memset(&str_89, 0, sizeof(char*));
right_value108 = (void*)0;
memset(&node_93, 0, sizeof(struct sNode*));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&cvalue_94, 0, sizeof(struct CVALUE*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&result_type_str_95, 0, sizeof(char*));
memset(&i_96, 0, sizeof(int));
memset(&o2_saved_97, 0, sizeof(struct list$1sTypeph*));
memset(&it_98, 0, sizeof(struct sType*));
right_value114 = (void*)0;
memset(&name_99, 0, sizeof(char*));
right_value115 = (void*)0;
memset(&str_100, 0, sizeof(char*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
    output_54=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value60=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value59=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 341, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value59, right_value59 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value60, right_value60 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional87=fun->mResultType->mResultType,    _if_conditional87) {
        output2_55=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value62=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value61=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 343, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value61, right_value61 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value62);
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value62, right_value62 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(output2_55,fun->mName);
        buffer_append_str(output2_55,"(");
        i_56=0;
        for(
        o2_saved_57=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_58=list$1sTypeph_begin((o2_saved_57)) ,        0;        _for_condtionalA8=        !list$1sTypeph_end((o2_saved_57)) ,        _for_condtionalA8;        it_58=list$1sTypeph_next((o2_saved_57)) ,        0        ){
            name_62=((char*)(right_value63=list$1charphp_operator_load_element(fun->mParamNames,i_56)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value63, right_value63 = (void*)0;
            __freed_obj__ = 0;
            str_63=(char*)come_increment_ref_count(((char*)(right_value64=make_define_var(it_58,name_62,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value64, right_value64 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(output2_55,str_63);
            if(_if_conditional90=i_56==list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional90) {
                if(_if_conditional91=fun->mVarArgs,                _if_conditional91) {
                    buffer_append_str(output2_55,", ...");
                }
            }
            else {
                buffer_append_str(output2_55,", ");
            }
            i_56++;
            if(str_63 && !__freed_obj__) { str_63 = come_decrement_ref_count(str_63, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_57 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_57, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(output2_55,")");
        str_64=(char*)come_increment_ref_count(((char*)(right_value66=make_lambda_type_name_string(fun->mResultType,((char*)(right_value65=buffer_to_string(output2_55))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value65, right_value65 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value66, right_value66 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(output_54,str_64);
        buffer_append_str(info->module->mSourceHead,((char*)(right_value67=buffer_to_string(output_54))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value67, right_value67 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(info->module->mSourceHead,";\n");
        if(output2_55 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_55, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_64 && !__freed_obj__) { str_64 = come_decrement_ref_count(str_64, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional92=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional92) {
            base_result_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(fun->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value102, right_value102 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj28=base_result_type_83->mArrayNum;
            base_result_type_83->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value104=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value103=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 379, "struct list$1sNodeph"))))))));
            if(__dec_obj28) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value103, right_value103 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value104, right_value104 = (void*)0;
            __freed_obj__ = 0;
            result_type_str_84=(char*)come_increment_ref_count(((char*)(right_value105=make_type_name_string(base_result_type_83,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
            if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value105, right_value105 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(output_54,result_type_str_84);
            buffer_append_str(output_54," (*");
            buffer_append_str(output_54,fun->mName);
            buffer_append_str(output_54,"(");
            i_85=0;
            for(
            o2_saved_86=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_87=list$1sTypeph_begin((o2_saved_86)) ,            0;            _for_condtionalA9=            !list$1sTypeph_end((o2_saved_86)) ,            _for_condtionalA9;            it_87=list$1sTypeph_next((o2_saved_86)) ,            0            ){
                name_88=((char*)(right_value106=list$1charphp_operator_load_element(fun->mParamNames,i_85)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value106, right_value106 = (void*)0;
                __freed_obj__ = 0;
                str_89=(char*)come_increment_ref_count(((char*)(right_value107=make_define_var(it_87,name_88,(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value107, right_value107 = (void*)0;
                __freed_obj__ = 0;
                buffer_append_str(output_54,str_89);
                if(_if_conditional163=i_85==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional163) {
                    if(_if_conditional164=fun->mVarArgs,                    _if_conditional164) {
                        buffer_append_str(output_54,", ...");
                    }
                }
                else {
                    buffer_append_str(output_54,", ");
                }
                i_85++;
                if(str_89 && !__freed_obj__) { str_89 = come_decrement_ref_count(str_89, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_86 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_86, (void*)0, (void*)0, 0, 0, 0, 0); }
            node_93=((struct sNode*)(right_value108=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, ((struct sNode*)right_value108)->finalize, ((struct sNode*)right_value108)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value108, right_value108 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional167=!node_compile(node_93,info),            _if_conditional167) {
                err_msg(info,"invalid array number");
                __result59__ = __result_obj__ = ((char*)(right_value109=__builtin_string("")));
                if(base_result_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_84 && !__freed_obj__) { result_type_str_84 = come_decrement_ref_count(result_type_str_84, (void*)0, (void*)0, 0, 0, 0); }
                if(output_54 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value109, right_value109 = (void*)0;
                __freed_obj__ = 0;
                return __result59__;
            }
            cvalue_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value110=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value110, right_value110 = (void*)0;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            buffer_append_str(output_54,((char*)(right_value111=xsprintf("))[%s]",cvalue_94->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
            if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value111, right_value111 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(info->module->mSourceHead,((char*)(right_value112=buffer_to_string(output_54))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value112, right_value112 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(info->module->mSourceHead,";\n");
            if(base_result_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_84 && !__freed_obj__) { result_type_str_84 = come_decrement_ref_count(result_type_str_84, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_94, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            result_type_str_95=(char*)come_increment_ref_count(((char*)(right_value113=make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value113, right_value113 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(output_54,result_type_str_95);
            buffer_append_str(output_54," ");
            buffer_append_str(output_54,fun->mName);
            buffer_append_str(output_54,"(");
            i_96=0;
            for(
            o2_saved_97=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_98=list$1sTypeph_begin((o2_saved_97)) ,            0;            _for_condtionalA10=            !list$1sTypeph_end((o2_saved_97)) ,            _for_condtionalA10;            it_98=list$1sTypeph_next((o2_saved_97)) ,            0            ){
                name_99=((char*)(right_value114=list$1charphp_operator_load_element(fun->mParamNames,i_96)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value114, right_value114 = (void*)0;
                __freed_obj__ = 0;
                str_100=(char*)come_increment_ref_count(((char*)(right_value115=make_define_var(it_98,name_99,(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value115, right_value115 = (void*)0;
                __freed_obj__ = 0;
                buffer_append_str(output_54,str_100);
                if(_if_conditional168=i_96==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional168) {
                    if(_if_conditional169=fun->mVarArgs,                    _if_conditional169) {
                        buffer_append_str(output_54,", ...");
                    }
                }
                else {
                    buffer_append_str(output_54,", ");
                }
                i_96++;
                if(str_100 && !__freed_obj__) { str_100 = come_decrement_ref_count(str_100, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_97 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_97, (void*)0, (void*)0, 0, 0, 0, 0); }
            buffer_append_str(output_54,")");
            buffer_append_str(info->module->mSourceHead,((char*)(right_value116=buffer_to_string(output_54))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
            if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value116, right_value116 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(info->module->mSourceHead,";\n");
            if(result_type_str_95 && !__freed_obj__) { result_type_str_95 = come_decrement_ref_count(result_type_str_95, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    buffer_append_str(output_54,"{\n");
    buffer_append_str(output_54,((char*)(right_value117=buffer_to_string(fun->mSourceHead))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117, right_value117 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(output_54,((char*)(right_value118=buffer_to_string(fun->mSourceHead2))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118, right_value118 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(output_54,((char*)(right_value119=buffer_to_string(fun->mSource))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value119, right_value119 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(output_54,"}\n");
    __result60__ = __result_obj__ = ((char*)(right_value120=buffer_to_string(output_54)));
    if(output_54 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120, right_value120 = (void*)0;
    __freed_obj__ = 0;
    return __result60__;
    if(output_54 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional88;
struct list_item$1charph* it_59;
int i_60;
_Bool _while_condtional5;
_Bool _if_conditional89;
char* __result37__;
char* default_value_61;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_59, 0, sizeof(struct list_item$1charph*));
memset(&i_60, 0, sizeof(int));
memset(&default_value_61, 0, sizeof(char*));
                if(_if_conditional88=position<0,                _if_conditional88) {
                    position+=self->len;
                }
                it_59=self->head;
                i_60=0;
                while(_while_condtional5=it_59!=((void*)0),                _while_condtional5) {
                    if(_if_conditional89=position==i_60,                    _if_conditional89) {
                        __result37__ = __result_obj__ = it_59->item;
                        return __result37__;
                    }
                    it_59=it_59->next;
                    i_60++;
                }
                memset(&default_value_61,0,sizeof(char*));
                __result38__ = __result_obj__ = default_value_61;
                if(default_value_61 && !__freed_obj__) { default_value_61 = come_decrement_ref_count(default_value_61, (void*)0, (void*)0, 0, 1, 0); }
                return __result38__;
                if(default_value_61 && !__freed_obj__) { default_value_61 = come_decrement_ref_count(default_value_61, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
struct sType* __result39__;
void* right_value68;
struct sType* result_65;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value71;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional99;
void* right_value72;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional100;
void* right_value73;
char* __dec_obj9;
_Bool _if_conditional101;
void* right_value80;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional105;
void* right_value88;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value89;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional120;
void* right_value96;
struct list$1charph* __dec_obj22;
_Bool _if_conditional124;
void* right_value97;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value98;
struct sNode* __dec_obj24;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
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
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value99;
struct sNode* __dec_obj25;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value100;
char* __dec_obj26;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value101;
char* __dec_obj27;
struct sType* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value68 = (void*)0;
memset(&result_65, 0, sizeof(struct sType*));
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value80 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
                if(_if_conditional93=self==(void*)0,                _if_conditional93) {
                    __result39__ = __result_obj__ = (void*)0;
                    return __result39__;
                }
                result_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value68, right_value68 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_65->mClass=self->mClass;
                }
                if(_if_conditional95=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional95) {
                    __dec_obj7=result_65->mNoSolvedGenericsType;
                    result_65->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value71=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj7) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value71, right_value71 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional99=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional99) {
                    __dec_obj8=result_65->mOriginalLoadVarType;
                    result_65->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value72=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value72, right_value72 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional100=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional100) {
                    __dec_obj9=result_65->mGenericsName;
                    result_65->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value73=string_clone(self->mGenericsName))));
                    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value73, right_value73 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional101=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional101) {
                    __dec_obj13=result_65->mGenericsTypes;
                    result_65->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value80, right_value80 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional105=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional105) {
                    __dec_obj17=result_65->mArrayNum;
                    result_65->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value88=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value88, right_value88 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    result_65->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional119=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional119) {
                    __dec_obj18=result_65->mParamTypes;
                    result_65->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value89=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value89, right_value89 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional120=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional120) {
                    __dec_obj22=result_65->mParamNames;
                    result_65->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value96=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj22) { come_call_finalizer(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value96, right_value96 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional124=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional124) {
                    __dec_obj23=result_65->mResultType;
                    result_65->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value97=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value97, right_value97 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional125=self!=((void*)0),                _if_conditional125) {
                    result_65->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional126=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional126) {
                    __dec_obj24=result_65->mAlignas;
                    result_65->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=sNode_clone(self->mAlignas))));
                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value98, right_value98 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional127=self!=((void*)0),                _if_conditional127) {
                    result_65->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional128=self!=((void*)0),                _if_conditional128) {
                    result_65->mShort=self->mShort;
                }
                if(_if_conditional129=self!=((void*)0),                _if_conditional129) {
                    result_65->mLong=self->mLong;
                }
                if(_if_conditional130=self!=((void*)0),                _if_conditional130) {
                    result_65->mLongLong=self->mLongLong;
                }
                if(_if_conditional131=self!=((void*)0),                _if_conditional131) {
                    result_65->mConstant=self->mConstant;
                }
                if(_if_conditional132=self!=((void*)0),                _if_conditional132) {
                    result_65->mRegister=self->mRegister;
                }
                if(_if_conditional133=self!=((void*)0),                _if_conditional133) {
                    result_65->mVolatile=self->mVolatile;
                }
                if(_if_conditional134=self!=((void*)0),                _if_conditional134) {
                    result_65->mStatic=self->mStatic;
                }
                if(_if_conditional135=self!=((void*)0),                _if_conditional135) {
                    result_65->mExtern=self->mExtern;
                }
                if(_if_conditional136=self!=((void*)0),                _if_conditional136) {
                    result_65->mRestrict=self->mRestrict;
                }
                if(_if_conditional137=self!=((void*)0),                _if_conditional137) {
                    result_65->mImmutable=self->mImmutable;
                }
                if(_if_conditional138=self!=((void*)0),                _if_conditional138) {
                    result_65->mHeap=self->mHeap;
                }
                if(_if_conditional139=self!=((void*)0),                _if_conditional139) {
                    result_65->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional140=self!=((void*)0),                _if_conditional140) {
                    result_65->mDelegate=self->mDelegate;
                }
                if(_if_conditional141=self!=((void*)0),                _if_conditional141) {
                    result_65->mShare=self->mShare;
                }
                if(_if_conditional142=self!=((void*)0),                _if_conditional142) {
                    result_65->mClone=self->mClone;
                }
                if(_if_conditional143=self!=((void*)0),                _if_conditional143) {
                    result_65->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional144=self!=((void*)0),                _if_conditional144) {
                    result_65->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional145=self!=((void*)0),                _if_conditional145) {
                    result_65->mRefference=self->mRefference;
                }
                if(_if_conditional146=self!=((void*)0),                _if_conditional146) {
                    result_65->mException=self->mException;
                }
                if(_if_conditional147=self!=((void*)0),                _if_conditional147) {
                    result_65->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional148=self!=((void*)0),                _if_conditional148) {
                    result_65->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional149=self!=((void*)0),                _if_conditional149) {
                    result_65->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional150=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional150) {
                    __dec_obj25=result_65->mSizeNum;
                    result_65->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=sNode_clone(self->mSizeNum))));
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value99, right_value99 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional151=self!=((void*)0),                _if_conditional151) {
                    result_65->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional152=self!=((void*)0),                _if_conditional152) {
                    result_65->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional153=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional153) {
                    __dec_obj26=result_65->mOriginalTypeName;
                    result_65->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value100=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value100, right_value100 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional154=self!=((void*)0),                _if_conditional154) {
                    result_65->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional155=self!=((void*)0),                _if_conditional155) {
                    result_65->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional156=self!=((void*)0),                _if_conditional156) {
                    result_65->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional157=self!=((void*)0),                _if_conditional157) {
                    result_65->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional158=self!=((void*)0),                _if_conditional158) {
                    result_65->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional159=self!=((void*)0),                _if_conditional159) {
                    result_65->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional160=self!=((void*)0),                _if_conditional160) {
                    result_65->mInline=self->mInline;
                }
                if(_if_conditional161=self!=((void*)0),                _if_conditional161) {
                    result_65->mNullValue=self->mNullValue;
                }
                if(_if_conditional162=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional162) {
                    __dec_obj27=result_65->mAsmName;
                    result_65->mAsmName=(char*)come_increment_ref_count(((char*)(right_value101=string_clone(self->mAsmName))));
                    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
                    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value101, right_value101 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result56__ = __result_obj__ = result_65;
                if(result_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_65, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result56__;
                if(result_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_65, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
struct tuple1$1sTypeph* __result40__;
void* right_value69;
struct tuple1$1sTypeph* result_66;
_Bool _if_conditional98;
void* right_value70;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value69 = (void*)0;
memset(&result_66, 0, sizeof(struct tuple1$1sTypeph*));
right_value70 = (void*)0;
                        if(_if_conditional96=self==(void*)0,                        _if_conditional96) {
                            __result40__ = __result_obj__ = (void*)0;
                            return __result40__;
                        }
                        result_66=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value69=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value69, right_value69 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional98=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional98) {
                            __dec_obj6=result_66->v1;
                            result_66->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=sType_clone(self->v1))));
                            if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value70, right_value70 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        __result41__ = __result_obj__ = result_66;
                        if(result_66 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result41__;
                        if(result_66 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional97=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional97) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
struct list$1sTypeph* __result42__;
void* right_value74;
void* right_value75;
struct list$1sTypeph* result_67;
struct list_item$1sTypeph* it_68;
_Bool _while_condtional6;
void* right_value79;
struct list$1sTypeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value74 = (void*)0;
right_value75 = (void*)0;
memset(&result_67, 0, sizeof(struct list$1sTypeph*));
memset(&it_68, 0, sizeof(struct list_item$1sTypeph*));
right_value79 = (void*)0;
                        if(_if_conditional102=self==((void*)0),                        _if_conditional102) {
                            __result42__ = __result_obj__ = ((void*)0);
                            return __result42__;
                        }
                        result_67=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value75=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value74=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value74, right_value74 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value75);
                        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value75, right_value75 = (void*)0;
                        __freed_obj__ = 0;
                        it_68=self->head;
                        while(_while_condtional6=it_68!=((void*)0),                        _while_condtional6) {
                            list$1sTypeph_add(result_67,(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(it_68->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value79, right_value79 = (void*)0;
                            __freed_obj__ = 0;
                            it_68=it_68->next;
                        }
                        __result45__ = __result_obj__ = result_67;
                        if(result_67 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result45__;
                        if(result_67 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result43__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result43__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
void* right_value76;
struct list_item$1sTypeph* litem_69;
struct sType* __dec_obj10;
_Bool _if_conditional104;
void* right_value77;
struct list_item$1sTypeph* litem_70;
struct sType* __dec_obj11;
void* right_value78;
struct list_item$1sTypeph* litem_71;
struct sType* __dec_obj12;
struct list$1sTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value76 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1sTypeph*));
right_value77 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1sTypeph*));
right_value78 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional103=self->len==0,                                _if_conditional103) {
                                    litem_69=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value76=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                                    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value76, right_value76 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_69->prev=((void*)0);
                                    litem_69->next=((void*)0);
                                    __dec_obj10=litem_69->item;
                                    litem_69->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_69;
                                    self->head=litem_69;
                                }
                                else {
                                    if(_if_conditional104=self->len==1,                                    _if_conditional104) {
                                        litem_70=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value77=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222, "struct list_item$1sTypeph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                                        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value77, right_value77 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_70->prev=self->head;
                                        litem_70->next=((void*)0);
                                        __dec_obj11=litem_70->item;
                                        litem_70->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->tail=litem_70;
                                        self->head->next=litem_70;
                                    }
                                    else {
                                        litem_71=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value78=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 232, "struct list_item$1sTypeph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                                        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value78, right_value78 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_71->prev=self->tail;
                                        litem_71->next=((void*)0);
                                        __dec_obj12=litem_71->item;
                                        litem_71->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->tail->next=litem_71;
                                        self->tail=litem_71;
                                    }
                                }
                                self->len++;
                                __result44__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result44__;
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
_Bool _if_conditional106;
struct list$1sNodeph* __result46__;
void* right_value81;
void* right_value82;
struct list$1sNodeph* result_72;
struct list_item$1sNodeph* it_73;
_Bool _while_condtional7;
void* right_value87;
struct list$1sNodeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_72, 0, sizeof(struct list$1sNodeph*));
memset(&it_73, 0, sizeof(struct list_item$1sNodeph*));
right_value87 = (void*)0;
                        if(_if_conditional106=self==((void*)0),                        _if_conditional106) {
                            __result46__ = __result_obj__ = ((void*)0);
                            return __result46__;
                        }
                        result_72=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value82=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value81=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value81, right_value81 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
                        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value82, right_value82 = (void*)0;
                        __freed_obj__ = 0;
                        it_73=self->head;
                        while(_while_condtional7=it_73!=((void*)0),                        _while_condtional7) {
                            list$1sNodeph_add(result_72,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value87=sNode_clone(it_73->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, ((struct sNode*)right_value87)->finalize, ((struct sNode*)right_value87)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value87, right_value87 = (void*)0;
                            __freed_obj__ = 0;
                            it_73=it_73->next;
                        }
                        __result51__ = __result_obj__ = result_72;
                        if(result_72 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result51__;
                        if(result_72 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_72, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result47__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result47__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional107;
void* right_value83;
struct list_item$1sNodeph* litem_74;
struct sNode* __dec_obj14;
_Bool _if_conditional108;
void* right_value84;
struct list_item$1sNodeph* litem_75;
struct sNode* __dec_obj15;
void* right_value85;
struct list_item$1sNodeph* litem_76;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value83 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1sNodeph*));
right_value84 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1sNodeph*));
right_value85 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional107=self->len==0,                                _if_conditional107) {
                                    litem_74=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value83=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                                    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value83, right_value83 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_74->prev=((void*)0);
                                    litem_74->next=((void*)0);
                                    __dec_obj14=litem_74->item;
                                    litem_74->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_74;
                                    self->head=litem_74;
                                }
                                else {
                                    if(_if_conditional108=self->len==1,                                    _if_conditional108) {
                                        litem_75=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value84=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222, "struct list_item$1sNodeph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                                        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value84, right_value84 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_75->prev=self->head;
                                        litem_75->next=((void*)0);
                                        __dec_obj15=litem_75->item;
                                        litem_75->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                        self->tail=litem_75;
                                        self->head->next=litem_75;
                                    }
                                    else {
                                        litem_76=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value85=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 232, "struct list_item$1sNodeph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                                        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value85, right_value85 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_76->prev=self->tail;
                                        litem_76->next=((void*)0);
                                        __dec_obj16=litem_76->item;
                                        litem_76->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                        self->tail->next=litem_76;
                                        self->tail=litem_76;
                                    }
                                }
                                self->len++;
                                __result48__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                return __result48__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
struct sNode* __result49__;
void* right_value86;
struct sNode* result_77;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
struct sNode* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value86 = (void*)0;
memset(&result_77, 0, sizeof(struct sNode*));
                                if(_if_conditional109=self==(void*)0,                                _if_conditional109) {
                                    __result49__ = __result_obj__ = (void*)0;
                                    return __result49__;
                                }
                                result_77=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value86=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, ((struct sNode*)right_value86)->finalize, ((struct sNode*)right_value86)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value86, right_value86 = (void*)0;
                                __freed_obj__ = 0;
                                if(_if_conditional110=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional110) {
                                    result_77->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional111=self!=((void*)0),                                _if_conditional111) {
                                    result_77->finalize=self->finalize;
                                }
                                if(_if_conditional112=self!=((void*)0),                                _if_conditional112) {
                                    result_77->clone=self->clone;
                                }
                                if(_if_conditional113=self!=((void*)0),                                _if_conditional113) {
                                    result_77->compile=self->compile;
                                }
                                if(_if_conditional114=self!=((void*)0),                                _if_conditional114) {
                                    result_77->sline=self->sline;
                                }
                                if(_if_conditional115=self!=((void*)0),                                _if_conditional115) {
                                    result_77->sname=self->sname;
                                }
                                if(_if_conditional116=self!=((void*)0),                                _if_conditional116) {
                                    result_77->terminated=self->terminated;
                                }
                                if(_if_conditional117=self!=((void*)0),                                _if_conditional117) {
                                    result_77->kind=self->kind;
                                }
                                __result50__ = __result_obj__ = result_77;
                                if(result_77 && !__freed_obj__) { result_77 = come_decrement_ref_count(result_77, ((struct sNode*)result_77)->finalize, ((struct sNode*)result_77)->_protocol_obj, 0, 1, 0); } 
                                return __result50__;
                                if(result_77 && !__freed_obj__) { result_77 = come_decrement_ref_count(result_77, ((struct sNode*)result_77)->finalize, ((struct sNode*)result_77)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional121;
struct list$1charph* __result52__;
void* right_value90;
void* right_value91;
struct list$1charph* result_78;
struct list_item$1charph* it_79;
_Bool _while_condtional8;
void* right_value95;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&result_78, 0, sizeof(struct list$1charph*));
memset(&it_79, 0, sizeof(struct list_item$1charph*));
right_value95 = (void*)0;
                        if(_if_conditional121=self==((void*)0),                        _if_conditional121) {
                            __result52__ = __result_obj__ = ((void*)0);
                            return __result52__;
                        }
                        result_78=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value90, right_value90 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
                        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value91, right_value91 = (void*)0;
                        __freed_obj__ = 0;
                        it_79=self->head;
                        while(_while_condtional8=it_79!=((void*)0),                        _while_condtional8) {
                            list$1charph_add(result_78,(char*)come_increment_ref_count(((char*)(right_value95=string_clone(it_79->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value95, right_value95 = (void*)0;
                            __freed_obj__ = 0;
                            it_79=it_79->next;
                        }
                        __result55__ = __result_obj__ = result_78;
                        if(result_78 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result55__;
                        if(result_78 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_78, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result53__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result53__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
void* right_value92;
struct list_item$1charph* litem_80;
char* __dec_obj19;
_Bool _if_conditional123;
void* right_value93;
struct list_item$1charph* litem_81;
char* __dec_obj20;
void* right_value94;
struct list_item$1charph* litem_82;
char* __dec_obj21;
struct list$1charph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value92 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1charph*));
right_value93 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1charph*));
right_value94 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional122=self->len==0,                                _if_conditional122) {
                                    litem_80=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value92, right_value92 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_80->prev=((void*)0);
                                    litem_80->next=((void*)0);
                                    __dec_obj19=litem_80->item;
                                    litem_80->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_80;
                                    self->head=litem_80;
                                }
                                else {
                                    if(_if_conditional123=self->len==1,                                    _if_conditional123) {
                                        litem_81=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value93=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222, "struct list_item$1charph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                                        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value93, right_value93 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_81->prev=self->head;
                                        litem_81->next=((void*)0);
                                        __dec_obj20=litem_81->item;
                                        litem_81->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                        self->tail=litem_81;
                                        self->head->next=litem_81;
                                    }
                                    else {
                                        litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value94=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 232, "struct list_item$1charph"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                                        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value94, right_value94 = (void*)0;
                                        __freed_obj__ = 0;
                                        litem_82->prev=self->tail;
                                        litem_82->next=((void*)0);
                                        __dec_obj21=litem_82->item;
                                        litem_82->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                        self->tail->next=litem_82;
                                        self->tail=litem_82;
                                    }
                                }
                                self->len++;
                                __result54__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                return __result54__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
struct list_item$1sNodeph* it_90;
int i_91;
_Bool _while_condtional9;
_Bool _if_conditional166;
struct sNode* __result57__;
struct sNode* default_value_92;
struct sNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_90, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_91, 0, sizeof(int));
memset(&default_value_92, 0, sizeof(struct sNode*));
                if(_if_conditional165=position<0,                _if_conditional165) {
                    position+=self->len;
                }
                it_90=self->head;
                i_91=0;
                while(_while_condtional9=it_90!=((void*)0),                _while_condtional9) {
                    if(_if_conditional166=position==i_91,                    _if_conditional166) {
                        __result57__ = __result_obj__ = it_90->item;
                        return __result57__;
                    }
                    it_90=it_90->next;
                    i_91++;
                }
                memset(&default_value_92,0,sizeof(struct sNode*));
                __result58__ = __result_obj__ = default_value_92;
                if(default_value_92 && !__freed_obj__) { default_value_92 = come_decrement_ref_count(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 1, 0); } 
                return __result58__;
                if(default_value_92 && !__freed_obj__) { default_value_92 = come_decrement_ref_count(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 0, 0); } 
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value121;
void* right_value122;
struct buffer* output_101;
_Bool _if_conditional170;
void* right_value123;
void* right_value124;
struct buffer* output2_102;
int i_103;
struct list$1sTypeph* o2_saved_104;
struct sType* it_105;
_Bool _for_condtionalA11;
void* right_value125;
char* name_106;
void* right_value126;
char* str_107;
_Bool _if_conditional171;
void* right_value127;
void* right_value128;
char* str_108;
_Bool _if_conditional172;
void* right_value129;
struct sType* base_result_type_109;
void* right_value130;
void* right_value131;
struct list$1sNodeph* __dec_obj29;
void* right_value132;
char* result_type_str_110;
int i_111;
struct list$1sTypeph* o2_saved_112;
struct sType* it_113;
_Bool _for_condtionalA12;
void* right_value133;
char* name_114;
void* right_value134;
char* str_115;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value135;
struct sNode* node_116;
_Bool _if_conditional175;
void* right_value136;
char* __result61__;
void* right_value137;
struct CVALUE* cvalue_117;
void* right_value138;
void* right_value139;
char* result_type_str_118;
int i_119;
struct list$1sTypeph* o2_saved_120;
struct sType* it_121;
_Bool _for_condtionalA13;
void* right_value140;
char* name_122;
void* right_value141;
char* str_123;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value142;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&output_101, 0, sizeof(struct buffer*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&output2_102, 0, sizeof(struct buffer*));
memset(&i_103, 0, sizeof(int));
memset(&o2_saved_104, 0, sizeof(struct list$1sTypeph*));
memset(&it_105, 0, sizeof(struct sType*));
right_value125 = (void*)0;
memset(&name_106, 0, sizeof(char*));
right_value126 = (void*)0;
memset(&str_107, 0, sizeof(char*));
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&str_108, 0, sizeof(char*));
right_value129 = (void*)0;
memset(&base_result_type_109, 0, sizeof(struct sType*));
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&result_type_str_110, 0, sizeof(char*));
memset(&i_111, 0, sizeof(int));
memset(&o2_saved_112, 0, sizeof(struct list$1sTypeph*));
memset(&it_113, 0, sizeof(struct sType*));
right_value133 = (void*)0;
memset(&name_114, 0, sizeof(char*));
right_value134 = (void*)0;
memset(&str_115, 0, sizeof(char*));
right_value135 = (void*)0;
memset(&node_116, 0, sizeof(struct sNode*));
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&cvalue_117, 0, sizeof(struct CVALUE*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&result_type_str_118, 0, sizeof(char*));
memset(&i_119, 0, sizeof(int));
memset(&o2_saved_120, 0, sizeof(struct list$1sTypeph*));
memset(&it_121, 0, sizeof(struct sType*));
right_value140 = (void*)0;
memset(&name_122, 0, sizeof(char*));
right_value141 = (void*)0;
memset(&str_123, 0, sizeof(char*));
right_value142 = (void*)0;
    output_101=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value122=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value121=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 468, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value121, right_value121 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value122, right_value122 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional170=fun->mResultType->mResultType,    _if_conditional170) {
        output2_102=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value124=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value123=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 471, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value123, right_value123 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value124);
        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value124, right_value124 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(output2_102,fun->mName);
        buffer_append_str(output2_102,"(");
        i_103=0;
        for(
        o2_saved_104=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_105=list$1sTypeph_begin((o2_saved_104)) ,        0;        _for_condtionalA11=        !list$1sTypeph_end((o2_saved_104)) ,        _for_condtionalA11;        it_105=list$1sTypeph_next((o2_saved_104)) ,        0        ){
            name_106=((char*)(right_value125=list$1charphp_operator_load_element(fun->mParamNames,i_103)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value125, right_value125 = (void*)0;
            __freed_obj__ = 0;
            str_107=(char*)come_increment_ref_count(((char*)(right_value126=make_define_var(it_105,name_106,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
            if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value126, right_value126 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(output2_102,str_107);
            if(_if_conditional171=i_103!=list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional171) {
                buffer_append_str(output2_102,", ");
            }
            i_103++;
            if(str_107 && !__freed_obj__) { str_107 = come_decrement_ref_count(str_107, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_104 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_104, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(output2_102,")");
        str_108=(char*)come_increment_ref_count(((char*)(right_value128=make_lambda_type_name_string(fun->mResultType,((char*)(right_value127=buffer_to_string(output2_102))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value127, right_value127 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value128, right_value128 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(output_101,str_108);
        buffer_append_str(output_101,";\n");
        if(output2_102 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_102, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_108 && !__freed_obj__) { str_108 = come_decrement_ref_count(str_108, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional172=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional172) {
            base_result_type_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=sType_clone(fun->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value129, right_value129 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj29=base_result_type_109->mArrayNum;
            base_result_type_109->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value131=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value130=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 497, "struct list$1sNodeph"))))))));
            if(__dec_obj29) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value130, right_value130 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value131);
            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value131, right_value131 = (void*)0;
            __freed_obj__ = 0;
            result_type_str_110=(char*)come_increment_ref_count(((char*)(right_value132=make_type_name_string(base_result_type_109,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value132, right_value132 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(output_101,result_type_str_110);
            buffer_append_str(output_101," (*");
            buffer_append_str(output_101,fun->mName);
            buffer_append_str(output_101,"(");
            i_111=0;
            for(
            o2_saved_112=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_113=list$1sTypeph_begin((o2_saved_112)) ,            0;            _for_condtionalA12=            !list$1sTypeph_end((o2_saved_112)) ,            _for_condtionalA12;            it_113=list$1sTypeph_next((o2_saved_112)) ,            0            ){
                name_114=((char*)(right_value133=list$1charphp_operator_load_element(fun->mParamNames,i_111)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value133, right_value133 = (void*)0;
                __freed_obj__ = 0;
                str_115=(char*)come_increment_ref_count(((char*)(right_value134=make_define_var(it_113,name_114,(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value134, right_value134 = (void*)0;
                __freed_obj__ = 0;
                buffer_append_str(output_101,str_115);
                if(_if_conditional173=i_111==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional173) {
                    if(_if_conditional174=fun->mVarArgs,                    _if_conditional174) {
                        buffer_append_str(output_101,", ...");
                    }
                }
                else {
                    buffer_append_str(output_101,", ");
                }
                i_111++;
                if(str_115 && !__freed_obj__) { str_115 = come_decrement_ref_count(str_115, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_112 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_112, (void*)0, (void*)0, 0, 0, 0, 0); }
            node_116=((struct sNode*)(right_value135=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, ((struct sNode*)right_value135)->finalize, ((struct sNode*)right_value135)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value135, right_value135 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional175=!node_compile(node_116,info),            _if_conditional175) {
                err_msg(info,"invalid array number");
                __result61__ = __result_obj__ = ((char*)(right_value136=__builtin_string("")));
                if(base_result_type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_110 && !__freed_obj__) { result_type_str_110 = come_decrement_ref_count(result_type_str_110, (void*)0, (void*)0, 0, 0, 0); }
                if(output_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value136, right_value136 = (void*)0;
                __freed_obj__ = 0;
                return __result61__;
            }
            cvalue_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value137, right_value137 = (void*)0;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            buffer_append_str(output_101,((char*)(right_value138=xsprintf("))[%s];\n",cvalue_117->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
            if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value138, right_value138 = (void*)0;
            __freed_obj__ = 0;
            if(base_result_type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_110 && !__freed_obj__) { result_type_str_110 = come_decrement_ref_count(result_type_str_110, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_117, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            result_type_str_118=(char*)come_increment_ref_count(((char*)(right_value139=make_type_name_string(fun->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value139, right_value139 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(output_101,result_type_str_118);
            buffer_append_str(output_101," ");
            buffer_append_str(output_101,fun->mName);
            buffer_append_str(output_101,"(");
            i_119=0;
            for(
            o2_saved_120=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_121=list$1sTypeph_begin((o2_saved_120)) ,            0;            _for_condtionalA13=            !list$1sTypeph_end((o2_saved_120)) ,            _for_condtionalA13;            it_121=list$1sTypeph_next((o2_saved_120)) ,            0            ){
                name_122=((char*)(right_value140=list$1charphp_operator_load_element(fun->mParamNames,i_119)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value140, right_value140 = (void*)0;
                __freed_obj__ = 0;
                str_123=(char*)come_increment_ref_count(((char*)(right_value141=make_define_var(it_121,name_122,(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value141, right_value141 = (void*)0;
                __freed_obj__ = 0;
                buffer_append_str(output_101,str_123);
                if(_if_conditional176=i_119==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional176) {
                    if(_if_conditional177=fun->mVarArgs,                    _if_conditional177) {
                        buffer_append_str(output_101,", ...");
                    }
                }
                else {
                    buffer_append_str(output_101,", ");
                }
                i_119++;
                if(str_123 && !__freed_obj__) { str_123 = come_decrement_ref_count(str_123, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_120 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_120, (void*)0, (void*)0, 0, 0, 0, 0); }
            buffer_append_str(output_101,");\n");
            if(result_type_str_118 && !__freed_obj__) { result_type_str_118 = come_decrement_ref_count(result_type_str_118, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    __result62__ = __result_obj__ = ((char*)(right_value142=buffer_to_string(output_101)));
    if(output_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value142, right_value142 = (void*)0;
    __freed_obj__ = 0;
    return __result62__;
    if(output_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value143;
void* right_value144;
struct buffer* output_124;
void* right_value145;
char* result_type_str_125;
int i_126;
struct list$1sTypeph* o2_saved_127;
struct sType* it_128;
_Bool _for_condtionalA14;
void* right_value146;
char* name_129;
void* right_value147;
char* str_130;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value148;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&output_124, 0, sizeof(struct buffer*));
right_value145 = (void*)0;
memset(&result_type_str_125, 0, sizeof(char*));
memset(&i_126, 0, sizeof(int));
memset(&o2_saved_127, 0, sizeof(struct list$1sTypeph*));
memset(&it_128, 0, sizeof(struct sType*));
right_value146 = (void*)0;
memset(&name_129, 0, sizeof(char*));
right_value147 = (void*)0;
memset(&str_130, 0, sizeof(char*));
right_value148 = (void*)0;
    output_124=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value144=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value143=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 570, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value143, right_value143 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value144, right_value144 = (void*)0;
    __freed_obj__ = 0;
    result_type_str_125=(char*)come_increment_ref_count(((char*)(right_value145=make_type_name_string(lambda_type->mResultType->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value145, right_value145 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(output_124,result_type_str_125);
    buffer_append_str(output_124," ");
    buffer_append_str(output_124,name);
    buffer_append_str(output_124,"(");
    i_126=0;
    for(
    o2_saved_127=(struct list$1sTypeph*)come_increment_ref_count((lambda_type->mParamTypes)),it_128=list$1sTypeph_begin((o2_saved_127)) ,    0;    _for_condtionalA14=    !list$1sTypeph_end((o2_saved_127)) ,    _for_condtionalA14;    it_128=list$1sTypeph_next((o2_saved_127)) ,    0    ){
        name_129=((char*)(right_value146=list$1charphp_operator_load_element(lambda_type->mParamNames,i_126)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value146, right_value146 = (void*)0;
        __freed_obj__ = 0;
        str_130=(char*)come_increment_ref_count(((char*)(right_value147=make_define_var(it_128,name_129,(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value147, right_value147 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(output_124,str_130);
        if(_if_conditional178=i_126==list$1sTypeph_length(lambda_type->mParamTypes)-1,        _if_conditional178) {
            if(_if_conditional179=lambda_type->mVarArgs,            _if_conditional179) {
                buffer_append_str(output_124,", ...");
            }
        }
        else {
            buffer_append_str(output_124,", ");
        }
        i_126++;
        if(str_130 && !__freed_obj__) { str_130 = come_decrement_ref_count(str_130, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_127 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(output_124,");\n");
    __result63__ = __result_obj__ = ((char*)(right_value148=buffer_to_string(output_124)));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_125 && !__freed_obj__) { result_type_str_125 = come_decrement_ref_count(result_type_str_125, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value148, right_value148 = (void*)0;
    __freed_obj__ = 0;
    return __result63__;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_125 && !__freed_obj__) { result_type_str_125 = come_decrement_ref_count(result_type_str_125, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional180;
char* msg2_131;
va_list args_132;
int len_133;
_Bool _if_conditional181;
int i_134;
_Bool _for_condtionalA15;
void* right_value149;
void* right_value150;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_131, 0, sizeof(char*));
memset(&args_132, 0, sizeof(va_list));
memset(&len_133, 0, sizeof(int));
memset(&i_134, 0, sizeof(int));
right_value149 = (void*)0;
right_value150 = (void*)0;
    if(_if_conditional180=info->no_output_come_code,    _if_conditional180) {
        return;
    }
    __builtin_va_start(args_132,msg);
    len_133=vasprintf(&msg2_131,msg,args_132);
    __builtin_va_end(args_132);
    if(_if_conditional181=info->come_fun,    _if_conditional181) {
        for(
        i_134=0 ,        0;        _for_condtionalA15=        i_134<info->block_level ,        _for_condtionalA15;        i_134++ ,        0        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(right_value149=xsprintf("%s",msg2_131))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value149, right_value149 = (void*)0;
        __freed_obj__ = 0;
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(right_value150=xsprintf("%s",msg2_131))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value150, right_value150 = (void*)0;
        __freed_obj__ = 0;
    }
    free(msg2_131);
    if((&args_132) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_132), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
char* msg2_135;
va_list args_136;
int len_137;
void* right_value151;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_135, 0, sizeof(char*));
memset(&args_136, 0, sizeof(va_list));
memset(&len_137, 0, sizeof(int));
right_value151 = (void*)0;
    if(_if_conditional182=info->no_output_come_code,    _if_conditional182) {
        return;
    }
    __builtin_va_start(args_136,msg);
    len_137=vasprintf(&msg2_135,msg,args_136);
    __builtin_va_end(args_136);
    buffer_append_str(info->module->mSourceHead,((char*)(right_value151=xsprintf("%s",msg2_135))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value151, right_value151 = (void*)0;
    __freed_obj__ = 0;
    free(msg2_135);
    if((&args_136) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_136), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value152;
char* name_138;
void* right_value153;
void* right_value154;
struct sType* result_type_139;
void* right_value155;
void* right_value156;
void* right_value157;
void* right_value158;
struct sType* __list_values1___140[2];
void* right_value162;
void* right_value163;
struct list$1sTypeph* param_types_145;
void* right_value164;
void* right_value165;
char* __list_values2___146[2];
void* right_value169;
void* right_value170;
struct list$1charph* param_names_151;
void* right_value171;
void* right_value172;
struct list$1charph* param_default_parametors_152;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
struct sFun* main_fun_153;
void* right_value189;
int __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value152 = (void*)0;
memset(&name_138, 0, sizeof(char*));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&result_type_139, 0, sizeof(struct sType*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&param_types_145, 0, sizeof(struct list$1sTypeph*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&param_names_151, 0, sizeof(struct list$1charph*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&param_default_parametors_152, 0, sizeof(struct list$1charph*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&main_fun_153, 0, sizeof(struct sFun*));
right_value189 = (void*)0;
    name_138=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("main"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value152, right_value152 = (void*)0;
    __freed_obj__ = 0;
    result_type_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value153=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 651, "struct sType")))),"int",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value153, right_value153 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value154, right_value154 = (void*)0;
    __freed_obj__ = 0;
    {__list_values1___140[0]=come_increment_ref_count(((struct sType*)(right_value156=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value155=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652, "struct sType")))),"int",(_Bool)0,info))));
__list_values1___140[1]=come_increment_ref_count(((struct sType*)(right_value158=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value157=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652, "struct sType")))),"char**",(_Bool)0,info))));
}    param_types_145=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value163=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value162=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 652, "struct list$1sTypeph")))),2,__list_values1___140))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value155, right_value155 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value156, right_value156 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value157, right_value157 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value158, right_value158 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value162, right_value162 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value163, right_value163 = (void*)0;
    __freed_obj__ = 0;
    {__list_values2___146[0]=come_increment_ref_count(((char*)(right_value164=__builtin_string("argc"))));
__list_values2___146[1]=come_increment_ref_count(((char*)(right_value165=__builtin_string("argv"))));
}    param_names_151=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value170=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value169=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 653, "struct list$1charph")))),2,__list_values2___146))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value164, right_value164 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value165, right_value165 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value169, right_value169 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value170, right_value170 = (void*)0;
    __freed_obj__ = 0;
    param_default_parametors_152=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value172=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value171=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 654, "struct list$1charph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value171, right_value171 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value172, right_value172 = (void*)0;
    __freed_obj__ = 0;
    main_fun_153=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value176=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value173=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 655, "struct sFun")))),(char*)come_increment_ref_count(name_138),(struct sType*)come_increment_ref_count(result_type_139),(struct list$1sTypeph*)come_increment_ref_count(param_types_145),(struct list$1charph*)come_increment_ref_count(param_names_151),(struct list$1charph*)come_increment_ref_count(param_default_parametors_152),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value175=__builtin_string("")))),info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value173, right_value173 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value174, right_value174 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value175, right_value175 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value176, right_value176 = (void*)0;
    __freed_obj__ = 0;
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string(name_138)))),(struct sFun*)come_increment_ref_count(main_fun_153));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value189, right_value189 = (void*)0;
    __freed_obj__ = 0;
    add_come_code(info,"#include <stdio.h>\n");
    info->come_fun=main_fun_153;
    info->block_level++;
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    add_come_code(info,"return 0;\n");
    info->block_level--;
    __result94__ = 0;
    if(name_138 && !__freed_obj__) { name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_145 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_151 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_152 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_153 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result94__;
    if(name_138 && !__freed_obj__) { name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_145 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_151 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_152 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_153 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_153, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_141;
_Bool _for_condtionalA16;
struct list$1sTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_141, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(
        i_141=0 ,        0;        _for_condtionalA16=        i_141<num_value ,        _for_condtionalA16;        i_141++ ,        0        ){
            list$1sTypeph_push_back(self,values[i_141]);
        }
        __result65__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result65__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
void* right_value159;
struct list_item$1sTypeph* litem_142;
struct sType* __dec_obj30;
_Bool _if_conditional184;
void* right_value160;
struct list_item$1sTypeph* litem_143;
struct sType* __dec_obj31;
void* right_value161;
struct list_item$1sTypeph* litem_144;
struct sType* __dec_obj32;
struct list$1sTypeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value159 = (void*)0;
memset(&litem_142, 0, sizeof(struct list_item$1sTypeph*));
right_value160 = (void*)0;
memset(&litem_143, 0, sizeof(struct list_item$1sTypeph*));
right_value161 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional183=self->len==0,                _if_conditional183) {
                    litem_142=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value159=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282, "struct list_item$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value159, right_value159 = (void*)0;
                    __freed_obj__ = 0;
                    litem_142->prev=((void*)0);
                    litem_142->next=((void*)0);
                    __dec_obj30=litem_142->item;
                    litem_142->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_142;
                    self->head=litem_142;
                }
                else {
                    if(_if_conditional184=self->len==1,                    _if_conditional184) {
                        litem_143=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value160=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292, "struct list_item$1sTypeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value160, right_value160 = (void*)0;
                        __freed_obj__ = 0;
                        litem_143->prev=self->head;
                        litem_143->next=((void*)0);
                        __dec_obj31=litem_143->item;
                        litem_143->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj31) { come_call_finalizer(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_143;
                        self->head->next=litem_143;
                    }
                    else {
                        litem_144=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value161=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 302, "struct list_item$1sTypeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value161, right_value161 = (void*)0;
                        __freed_obj__ = 0;
                        litem_144->prev=self->tail;
                        litem_144->next=((void*)0);
                        __dec_obj32=litem_144->item;
                        litem_144->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_144;
                        self->tail=litem_144;
                    }
                }
                self->len++;
                __result64__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result64__;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_147;
_Bool _for_condtionalA17;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_147, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(
        i_147=0 ,        0;        _for_condtionalA17=        i_147<num_value ,        _for_condtionalA17;        i_147++ ,        0        ){
            list$1charph_push_back(self,values[i_147]);
        }
        __result67__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result67__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
void* right_value166;
struct list_item$1charph* litem_148;
char* __dec_obj33;
_Bool _if_conditional186;
void* right_value167;
struct list_item$1charph* litem_149;
char* __dec_obj34;
void* right_value168;
struct list_item$1charph* litem_150;
char* __dec_obj35;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value166 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1charph*));
right_value167 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
right_value168 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional185=self->len==0,                _if_conditional185) {
                    litem_148=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value166=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282, "struct list_item$1charph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value166, right_value166 = (void*)0;
                    __freed_obj__ = 0;
                    litem_148->prev=((void*)0);
                    litem_148->next=((void*)0);
                    __dec_obj33=litem_148->item;
                    litem_148->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_148;
                    self->head=litem_148;
                }
                else {
                    if(_if_conditional186=self->len==1,                    _if_conditional186) {
                        litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value167=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value167, right_value167 = (void*)0;
                        __freed_obj__ = 0;
                        litem_149->prev=self->head;
                        litem_149->next=((void*)0);
                        __dec_obj34=litem_149->item;
                        litem_149->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_149;
                        self->head->next=litem_149;
                    }
                    else {
                        litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value168=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 302, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
                        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value168, right_value168 = (void*)0;
                        __freed_obj__ = 0;
                        litem_150->prev=self->tail;
                        litem_150->next=((void*)0);
                        __dec_obj35=litem_150->item;
                        litem_150->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_150;
                        self->tail=litem_150;
                    }
                }
                self->len++;
                __result66__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result66__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional187=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional187) {
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional188=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional188) {
            if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional189=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional189) {
            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional190=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional190) {
            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional191=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional191) {
            if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional192=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional192) {
            if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional193=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional193) {
            if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional196=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional196) {
            if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional197=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional197) {
            if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional198=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional198) {
            if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional199=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional199) {
            if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional200=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional200) {
            if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional201=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional201) {
            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
_Bool _if_conditional195;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional194=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional194) {
                    if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional195=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional195) {
                    if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
unsigned int hash_172;
unsigned int it_173;
_Bool _while_condtional12;
_Bool _if_conditional215;
void* right_value183;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool same_key_exist_190;
char* it2_193;
_Bool _for_condtionalA19;
void* right_value185;
_Bool _if_conditional246;
_Bool _if_conditional247;
struct map$2charphsFunph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_172, 0, sizeof(unsigned int));
memset(&it_173, 0, sizeof(unsigned int));
right_value183 = (void*)0;
memset(&same_key_exist_190, 0, sizeof(_Bool));
memset(&it2_193, 0, sizeof(char*));
right_value185 = (void*)0;
        if(_if_conditional202=self->len*10>=self->size,        _if_conditional202) {
            map$2charphsFunph_rehash(self);
        }
        hash_172=string_get_hash_key(key)%self->size;
        it_173=hash_172;
        while(_while_condtional12=(_Bool)1,        _while_condtional12) {
            if(_if_conditional215=self->item_existance[it_173],            _if_conditional215) {
                if(_if_conditional216=optional$2boolbool_value(((struct optional$2boolbool*)(right_value183=string_equals(self->keys[it_173],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183),
                (right_value183 && right_value183 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value183, right_value183 = (void*)0, 
                __freed_obj__ = 0, 
                _if_conditional216) {
                    if(_if_conditional217=1,                    _if_conditional217) {
                        list$1charp_remove(self->key_list,self->keys[it_173]);
                        if(self->keys[it_173] && !__freed_obj__) { self->keys[it_173] = come_decrement_ref_count(self->keys[it_173], (void*)0, (void*)0, 0, 0, 0); }
                        self->keys[it_173]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_173]);
                        self->keys[it_173]=key;
                    }
                    if(_if_conditional237=1,                    _if_conditional237) {
                        if(self->items[it_173] && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->items[it_173], (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->items[it_173]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_173]=item;
                    }
                    break;
                }
                it_173++;
                if(_if_conditional238=it_173>=self->size,                _if_conditional238) {
                    it_173=0;
                }
                else {
                    if(_if_conditional239=it_173==hash_172,                    _if_conditional239) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_173]=(_Bool)1;
                if(_if_conditional240=1,                _if_conditional240) {
                    self->keys[it_173]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_173]=key;
                }
                if(_if_conditional241=1,                _if_conditional241) {
                    self->items[it_173]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_173]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_190=(_Bool)0;
        for(
        it2_193=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA19=        !list$1charp_end(self->key_list) ,        _for_condtionalA19;        it2_193=list$1charp_next(self->key_list) ,        0        ){
            if(_if_conditional246=optional$2boolbool_value(((struct optional$2boolbool*)(right_value185=string_equals(it2_193,key)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185),
            (right_value185 && right_value185 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value185, right_value185 = (void*)0, 
            __freed_obj__ = 0, 
            _if_conditional246) {
                same_key_exist_190=(_Bool)1;
            }
        }
        if(_if_conditional247=!same_key_exist_190,        _if_conditional247) {
            list$1charp_push_back(self->key_list,key);
        }
        __result93__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result93__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_154;
void* right_value177;
char** keys_155;
void* right_value178;
struct sFun** items_156;
void* right_value179;
_Bool* item_existance_157;
int len_158;
char* it_161;
_Bool _for_condtionalA18;
struct sFun* default_value_164;
void* right_value181;
struct sFun* it2_168;
unsigned int hash_169;
int n_170;
_Bool _while_condtional11;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
struct sFun* default_value_171;
void* right_value182;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_154, 0, sizeof(int));
right_value177 = (void*)0;
memset(&keys_155, 0, sizeof(char**));
right_value178 = (void*)0;
memset(&items_156, 0, sizeof(struct sFun**));
right_value179 = (void*)0;
memset(&item_existance_157, 0, sizeof(_Bool*));
memset(&len_158, 0, sizeof(int));
memset(&it_161, 0, sizeof(char*));
memset(&default_value_164, 0, sizeof(struct sFun*));
right_value181 = (void*)0;
memset(&it2_168, 0, sizeof(struct sFun*));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&n_170, 0, sizeof(int));
memset(&default_value_171, 0, sizeof(struct sFun*));
right_value182 = (void*)0;
                size_154=self->size*10;
                keys_155=(char**)come_increment_ref_count(((char**)(right_value177=(char**)come_calloc(1, sizeof(char*)*(1*(size_154)), "./comelang2.h", 1388, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value177, right_value177 = (void*)0;
                __freed_obj__ = 0;
                items_156=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value178=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_154)), "./comelang2.h", 1389, "struct sFun*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value178, right_value178 = (void*)0;
                __freed_obj__ = 0;
                item_existance_157=(_Bool*)come_increment_ref_count(((_Bool*)(right_value179=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_154)), "./comelang2.h", 1390, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value179, right_value179 = (void*)0;
                __freed_obj__ = 0;
                len_158=0;
                for(
                it_161=map$2charphsFunph_begin(self) ,                0;                _for_condtionalA18=                !map$2charphsFunph_end(self) ,                _for_condtionalA18;                it_161=map$2charphsFunph_next(self) ,                0                ){
                    memset(&default_value_164,0,sizeof(struct sFun*));
                    it2_168=((struct sFun*)(right_value181=map$2charphsFunph_at(self,it_161,default_value_164)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value181, right_value181 = (void*)0;
                    __freed_obj__ = 0;
                    hash_169=string_get_hash_key(it_161)%size_154;
                    n_170=hash_169;
                    while(_while_condtional11=(_Bool)1,                    _while_condtional11) {
                        if(_if_conditional212=item_existance_157[n_170],                        _if_conditional212) {
                            n_170++;
                            if(_if_conditional213=n_170>=size_154,                            _if_conditional213) {
                                n_170=0;
                            }
                            else {
                                if(_if_conditional214=n_170==hash_169,                                _if_conditional214) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_157[n_170]=(_Bool)1;
                            keys_155[n_170]=it_161;
                            items_156[n_170]=((struct sFun*)(right_value182=map$2charphsFunph_at(self,it_161,default_value_171)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                            if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value182, right_value182 = (void*)0;
                            __freed_obj__ = 0;
                            len_158++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                come_free((char*)self->keys);
                self->keys=keys_155;
                self->items=items_156;
                self->item_existance=item_existance_157;
                self->size=size_154;
                self->len=len_158;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional203;
char* result_159;
char* __result68__;
_Bool _if_conditional204;
char* __result69__;
char* result_160;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_159, 0, sizeof(char*));
memset(&result_160, 0, sizeof(char*));
                    if(_if_conditional203=self==((void*)0),                    _if_conditional203) {
                        memset(&result_159,0,sizeof(char*));
                        __result68__ = __result_obj__ = result_159;
                        return __result68__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(_if_conditional204=self->key_list->it,                    _if_conditional204) {
                        __result69__ = __result_obj__ = self->key_list->it->item;
                        return __result69__;
                    }
                    memset(&result_160,0,sizeof(char*));
                    __result70__ = __result_obj__ = result_160;
                    return __result70__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result71__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result71__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
char* result_162;
char* __result72__;
_Bool _if_conditional206;
char* __result73__;
char* result_163;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_162, 0, sizeof(char*));
memset(&result_163, 0, sizeof(char*));
                    if(_if_conditional205=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional205) {
                        memset(&result_162,0,sizeof(char*));
                        __result72__ = __result_obj__ = result_162;
                        return __result72__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(_if_conditional206=self->key_list->it,                    _if_conditional206) {
                        __result73__ = __result_obj__ = self->key_list->it->item;
                        return __result73__;
                    }
                    memset(&result_163,0,sizeof(char*));
                    __result74__ = __result_obj__ = result_163;
                    return __result74__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_165;
unsigned int it_166;
_Bool _while_condtional10;
_Bool _if_conditional207;
void* right_value180;
_Bool _if_conditional209;
struct sFun* __result77__;
_Bool _if_conditional210;
_Bool _if_conditional211;
struct sFun* __result78__;
struct sFun* __result79__;
struct sFun* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_165, 0, sizeof(unsigned int));
memset(&it_166, 0, sizeof(unsigned int));
right_value180 = (void*)0;
                        hash_165=string_get_hash_key(((char*)key))%self->size;
                        it_166=hash_165;
                        while(_while_condtional10=(_Bool)1,                        _while_condtional10) {
                            if(_if_conditional207=self->item_existance[it_166],                            _if_conditional207) {
                                if(_if_conditional209=optional$2boolbool_value(((struct optional$2boolbool*)(right_value180=string_equals(self->keys[it_166],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180),
                                (right_value180 && right_value180 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value180, right_value180 = (void*)0, 
                                __freed_obj__ = 0, 
                                _if_conditional209) {
                                    __result77__ = __result_obj__ = self->items[it_166];
                                    if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result77__;
                                }
                                it_166++;
                                if(_if_conditional210=it_166>=self->size,                                _if_conditional210) {
                                    it_166=0;
                                }
                                else {
                                    if(_if_conditional211=it_166==hash_165,                                    _if_conditional211) {
                                        __result78__ = __result_obj__ = default_value;
                                        if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result78__;
                                    }
                                }
                            }
                            else {
                                __result79__ = __result_obj__ = default_value;
                                if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result79__;
                            }
                        }
                        __result80__ = __result_obj__ = default_value;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result80__;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
_Bool default_value_167;
_Bool __result75__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_167, 0, sizeof(_Bool));
                                    if(_if_conditional208=self==((void*)0),                                    _if_conditional208) {
                                        memset(&default_value_167,0,sizeof(_Bool));
                                        __result75__ = default_value_167;
                                        return __result75__;
                                    }
                                    else {
                                        __result76__ = self->v1;
                                        return __result76__;
                                    }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_174;
struct list_item$1charp* it_175;
_Bool _while_condtional13;
void* right_value184;
_Bool _if_conditional218;
struct list$1charp* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_174, 0, sizeof(int));
memset(&it_175, 0, sizeof(struct list_item$1charp*));
right_value184 = (void*)0;
                            it2_174=0;
                            it_175=self->head;
                            while(_while_condtional13=it_175!=((void*)0),                            _while_condtional13) {
                                if(_if_conditional218=optional$2boolbool_value(((struct optional$2boolbool*)(right_value184=string_equals(it_175->item,item)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184),
                                (right_value184 && right_value184 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value184, right_value184 = (void*)0, 
                                __freed_obj__ = 0, 
                                _if_conditional218) {
                                    list$1charp_delete(self,it2_174,it2_174+1);
                                    break;
                                }
                                it2_174++;
                                it_175=it_175->next;
                            }
                            __result84__ = __result_obj__ = self;
                            return __result84__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
int tmp_176;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
struct list$1charp* __result81__;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct list_item$1charp* it_179;
int i_180;
_Bool _while_condtional15;
_Bool _if_conditional227;
struct list_item$1charp* prev_it_181;
_Bool _if_conditional228;
_Bool _if_conditional229;
struct list_item$1charp* it_182;
int i_183;
_Bool _while_condtional16;
_Bool _if_conditional230;
_Bool _if_conditional231;
struct list_item$1charp* prev_it_184;
struct list_item$1charp* it_185;
struct list_item$1charp* head_prev_it_186;
struct list_item$1charp* tail_it_187;
int i_188;
_Bool _while_condtional17;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
struct list_item$1charp* prev_it_189;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list$1charp* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_176, 0, sizeof(int));
memset(&it_179, 0, sizeof(struct list_item$1charp*));
memset(&i_180, 0, sizeof(int));
memset(&prev_it_181, 0, sizeof(struct list_item$1charp*));
memset(&it_182, 0, sizeof(struct list_item$1charp*));
memset(&i_183, 0, sizeof(int));
memset(&prev_it_184, 0, sizeof(struct list_item$1charp*));
memset(&it_185, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_186, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_187, 0, sizeof(struct list_item$1charp*));
memset(&i_188, 0, sizeof(int));
memset(&prev_it_189, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional219=head<0,                                        _if_conditional219) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional220=tail<0,                                        _if_conditional220) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional221=head>tail,                                        _if_conditional221) {
                                            tmp_176=tail;
                                            tail=head;
                                            head=tmp_176;
                                        }
                                        if(_if_conditional222=head<0,                                        _if_conditional222) {
                                            head=0;
                                        }
                                        if(_if_conditional223=tail>self->len,                                        _if_conditional223) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional224=head==tail,                                        _if_conditional224) {
                                            __result81__ = __result_obj__ = self;
                                            return __result81__;
                                        }
                                        if(_if_conditional225=head==0&&tail==self->len,                                        _if_conditional225) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional226=head==0,                                            _if_conditional226) {
                                                it_179=self->head;
                                                i_180=0;
                                                while(_while_condtional15=it_179!=((void*)0),                                                _while_condtional15) {
                                                    if(_if_conditional227=i_180<tail,                                                    _if_conditional227) {
                                                        prev_it_181=it_179;
                                                        it_179=it_179->next;
                                                        i_180++;
                                                        if(prev_it_181 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional228=i_180==tail,                                                        _if_conditional228) {
                                                            self->head=it_179;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_179=it_179->next;
                                                            i_180++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional229=tail==self->len,                                                _if_conditional229) {
                                                    it_182=self->head;
                                                    i_183=0;
                                                    while(_while_condtional16=it_182!=((void*)0),                                                    _while_condtional16) {
                                                        if(_if_conditional230=i_183==head,                                                        _if_conditional230) {
                                                            self->tail=it_182->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional231=i_183>=head,                                                        _if_conditional231) {
                                                            prev_it_184=it_182;
                                                            it_182=it_182->next;
                                                            i_183++;
                                                            if(prev_it_184 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_182=it_182->next;
                                                            i_183++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_185=self->head;
                                                    head_prev_it_186=((void*)0);
                                                    tail_it_187=((void*)0);
                                                    i_188=0;
                                                    while(_while_condtional17=it_185!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional232=i_188==head,                                                        _if_conditional232) {
                                                            head_prev_it_186=it_185->prev;
                                                        }
                                                        if(_if_conditional233=i_188==tail,                                                        _if_conditional233) {
                                                            tail_it_187=it_185;
                                                        }
                                                        if(_if_conditional234=i_188>=head&&i_188<tail,                                                        _if_conditional234) {
                                                            prev_it_189=it_185;
                                                            it_185=it_185->next;
                                                            i_188++;
                                                            if(prev_it_189 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_185=it_185->next;
                                                            i_188++;
                                                        }
                                                    }
                                                    if(_if_conditional235=head_prev_it_186!=((void*)0),                                                    _if_conditional235) {
                                                        head_prev_it_186->next=tail_it_187;
                                                    }
                                                    if(_if_conditional236=tail_it_187!=((void*)0),                                                    _if_conditional236) {
                                                        tail_it_187->prev=head_prev_it_186;
                                                    }
                                                }
                                            }
                                        }
                                        __result83__ = __result_obj__ = self;
                                        return __result83__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_177;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_178;
struct list$1charp* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_177, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_178, 0, sizeof(struct list_item$1charp*));
                                                it_177=self->head;
                                                while(_while_condtional14=it_177!=((void*)0),                                                _while_condtional14) {
                                                    prev_it_178=it_177;
                                                    it_177=it_177->next;
                                                    if(prev_it_178 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result82__ = __result_obj__ = self;
                                                return __result82__;
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
_Bool _if_conditional242;
char* result_191;
char* __result85__;
_Bool _if_conditional243;
char* __result86__;
char* result_192;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_191, 0, sizeof(char*));
memset(&result_192, 0, sizeof(char*));
            if(_if_conditional242=self==((void*)0),            _if_conditional242) {
                memset(&result_191,0,sizeof(char*));
                __result85__ = __result_obj__ = result_191;
                return __result85__;
            }
            self->it=self->head;
            if(_if_conditional243=self->it,            _if_conditional243) {
                __result86__ = __result_obj__ = self->it->item;
                return __result86__;
            }
            memset(&result_192,0,sizeof(char*));
            __result87__ = __result_obj__ = result_192;
            return __result87__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result88__ = self==((void*)0)||self->it==((void*)0);
            return __result88__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional244;
char* result_194;
char* __result89__;
_Bool _if_conditional245;
char* __result90__;
char* result_195;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_194, 0, sizeof(char*));
memset(&result_195, 0, sizeof(char*));
            if(_if_conditional244=self==((void*)0)||self->it==((void*)0),            _if_conditional244) {
                memset(&result_194,0,sizeof(char*));
                __result89__ = __result_obj__ = result_194;
                return __result89__;
            }
            self->it=self->it->next;
            if(_if_conditional245=self->it,            _if_conditional245) {
                __result90__ = __result_obj__ = self->it->item;
                return __result90__;
            }
            memset(&result_195,0,sizeof(char*));
            __result91__ = __result_obj__ = result_195;
            return __result91__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional248;
void* right_value186;
struct list_item$1charp* litem_196;
_Bool _if_conditional249;
void* right_value187;
struct list_item$1charp* litem_197;
void* right_value188;
struct list_item$1charp* litem_198;
struct list$1charp* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value186 = (void*)0;
memset(&litem_196, 0, sizeof(struct list_item$1charp*));
right_value187 = (void*)0;
memset(&litem_197, 0, sizeof(struct list_item$1charp*));
right_value188 = (void*)0;
memset(&litem_198, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional248=self->len==0,                _if_conditional248) {
                    litem_196=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value186=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282, "struct list_item$1charp"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value186, right_value186 = (void*)0;
                    __freed_obj__ = 0;
                    litem_196->prev=((void*)0);
                    litem_196->next=((void*)0);
                    litem_196->item=item;
                    self->tail=litem_196;
                    self->head=litem_196;
                }
                else {
                    if(_if_conditional249=self->len==1,                    _if_conditional249) {
                        litem_197=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value187=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value187, right_value187 = (void*)0;
                        __freed_obj__ = 0;
                        litem_197->prev=self->head;
                        litem_197->next=((void*)0);
                        litem_197->item=item;
                        self->tail=litem_197;
                        self->head->next=litem_197;
                    }
                    else {
                        litem_198=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value188=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 302, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value188, right_value188 = (void*)0;
                        __freed_obj__ = 0;
                        litem_198->prev=self->tail;
                        litem_198->next=((void*)0);
                        litem_198->item=item;
                        self->tail->next=litem_198;
                        self->tail=litem_198;
                    }
                }
                self->len++;
                __result92__ = __result_obj__ = self;
                return __result92__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value190;
char* output_file_name_199;
struct _IO_FILE* f_200;
void* right_value191;
struct map$2charphsFunph* o2_saved_201;
char* it_202;
_Bool _for_condtionalA20;
void* right_value192;
void* right_value196;
struct sFun* it2_206;
void* right_value197;
char* header_207;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
struct map$2charphsFunph* o2_saved_212;
char* it_213;
_Bool _for_condtionalA23;
void* right_value198;
void* right_value199;
struct sFun* it2_214;
void* right_value200;
char* header_215;
_Bool _if_conditional263;
void* right_value201;
char* output_216;
_Bool _if_conditional264;
void* right_value202;
char* output_217;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct map$2charphsFunph* o2_saved_218;
char* it_219;
_Bool _for_condtionalA24;
void* right_value203;
struct sFun* it2_220;
_Bool _if_conditional267;
void* right_value204;
char* output_221;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value190 = (void*)0;
memset(&output_file_name_199, 0, sizeof(char*));
memset(&f_200, 0, sizeof(struct _IO_FILE*));
right_value191 = (void*)0;
memset(&o2_saved_201, 0, sizeof(struct map$2charphsFunph*));
memset(&it_202, 0, sizeof(char*));
right_value192 = (void*)0;
right_value196 = (void*)0;
memset(&it2_206, 0, sizeof(struct sFun*));
right_value197 = (void*)0;
memset(&header_207, 0, sizeof(char*));
memset(&o2_saved_212, 0, sizeof(struct map$2charphsFunph*));
memset(&it_213, 0, sizeof(char*));
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&it2_214, 0, sizeof(struct sFun*));
right_value200 = (void*)0;
memset(&header_215, 0, sizeof(char*));
right_value201 = (void*)0;
memset(&output_216, 0, sizeof(char*));
right_value202 = (void*)0;
memset(&output_217, 0, sizeof(char*));
memset(&o2_saved_218, 0, sizeof(struct map$2charphsFunph*));
memset(&it_219, 0, sizeof(char*));
right_value203 = (void*)0;
memset(&it2_220, 0, sizeof(struct sFun*));
right_value204 = (void*)0;
memset(&output_221, 0, sizeof(char*));
    output_file_name_199=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s.c",info->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value190, right_value190 = (void*)0;
    __freed_obj__ = 0;
    f_200=fopen(output_file_name_199,"w");
    fprintf(f_200,"// source head\n");
    fprintf(f_200,"%s\n",((char*)(right_value191=buffer_to_string(info->module->mSourceHead))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value191, right_value191 = (void*)0;
    __freed_obj__ = 0;
    fprintf(f_200,"// header function\n");
    for(
    o2_saved_201=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_202=map$2charphsFunph_begin((o2_saved_201)) ,    0;    _for_condtionalA20=    !map$2charphsFunph_end((o2_saved_201)) ,    _for_condtionalA20;    it_202=map$2charphsFunph_next((o2_saved_201)) ,    0    ){
        it2_206=((struct sFun*)(right_value196=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value192=__builtin_string(it_202))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value192, right_value192 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value196, right_value196 = (void*)0;
        __freed_obj__ = 0;
        header_207=(char*)come_increment_ref_count(((char*)(right_value197=header_function(it2_206,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value197, right_value197 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional255=it2_206->mStatic&&it2_206->mResultType->mInline,        _if_conditional255) {
        }
        else {
            if(_if_conditional256=it2_206->mStatic,            _if_conditional256) {
                fprintf(f_200,"static %s",header_207);
            }
            else {
                if(_if_conditional257=it2_206->mResultType->mInline,                _if_conditional257) {
                }
                else {
                    if(_if_conditional258=string_operator_not_equals(it_202,"__builtin_va_start")&&string_operator_not_equals(it_202,"__builtin_va_end"),                    _if_conditional258) {
                        fprintf(f_200,"%s\n",header_207,it_202);
                    }
                }
            }
        }
        if(header_207 && !__freed_obj__) { header_207 = come_decrement_ref_count(header_207, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_201 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_201, (void*)0, (void*)0, 0, 0, 0, 0); }
    fprintf(f_200,"// inline function\n");
    for(
    o2_saved_212=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_213=map$2charphsFunph_begin((o2_saved_212)) ,    0;    _for_condtionalA23=    !map$2charphsFunph_end((o2_saved_212)) ,    _for_condtionalA23;    it_213=map$2charphsFunph_next((o2_saved_212)) ,    0    ){
        it2_214=((struct sFun*)(right_value199=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value198=__builtin_string(it_213))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value198, right_value198 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value199, right_value199 = (void*)0;
        __freed_obj__ = 0;
        header_215=(char*)come_increment_ref_count(((char*)(right_value200=header_function(it2_214,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value200, right_value200 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional263=it2_214->mStatic&&it2_214->mResultType->mInline,        _if_conditional263) {
            output_216=(char*)come_increment_ref_count(((char*)(right_value201=output_function(it2_214,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
            if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value201, right_value201 = (void*)0;
            __freed_obj__ = 0;
            fprintf(f_200,"static inline %s",output_216);
            if(output_216 && !__freed_obj__) { output_216 = come_decrement_ref_count(output_216, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional264=it2_214->mResultType->mInline,            _if_conditional264) {
                output_217=(char*)come_increment_ref_count(((char*)(right_value202=output_function(it2_214,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value202, right_value202 = (void*)0;
                __freed_obj__ = 0;
                fprintf(f_200,"static inline %s",output_217);
                if(output_217 && !__freed_obj__) { output_217 = come_decrement_ref_count(output_217, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional265=it2_214->mStatic,                _if_conditional265) {
                }
                else {
                    if(_if_conditional266=string_operator_not_equals(it_213,"__builtin_va_start")&&string_operator_not_equals(it_213,"__builtin_va_end"),                    _if_conditional266) {
                    }
                }
            }
        }
        if(header_215 && !__freed_obj__) { header_215 = come_decrement_ref_count(header_215, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_212 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    fprintf(f_200,"\n");
    fprintf(f_200,"// body function\n");
    for(
    o2_saved_218=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_219=map$2charphsFunph_begin((o2_saved_218)) ,    0;    _for_condtionalA24=    !map$2charphsFunph_end((o2_saved_218)) ,    _for_condtionalA24;    it_219=map$2charphsFunph_next((o2_saved_218)) ,    0    ){
        it2_220=((struct sFun*)(right_value203=map$2charphsFunphp_operator_load_element(info->funcs,it_219)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value203, right_value203 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional267=!it2_220->mExternal,        _if_conditional267) {
            output_221=(char*)come_increment_ref_count(((char*)(right_value204=output_function(it2_220,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
            if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value204, right_value204 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional268=it2_220->mStatic&&it2_220->mResultType->mInline,            _if_conditional268) {
            }
            else {
                if(_if_conditional269=it2_220->mStatic,                _if_conditional269) {
                    fprintf(f_200,"static %s",output_221);
                }
                else {
                    if(_if_conditional270=it2_220->mResultType->mInline,                    _if_conditional270) {
                    }
                    else {
                        fprintf(f_200,"%s",output_221);
                    }
                }
            }
            fprintf(f_200,"\n");
            if(output_221 && !__freed_obj__) { output_221 = come_decrement_ref_count(output_221, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    if(o2_saved_218 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    fclose(f_200);
    __result100__ = (_Bool)1;
    if(output_file_name_199 && !__freed_obj__) { output_file_name_199 = come_decrement_ref_count(output_file_name_199, (void*)0, (void*)0, 0, 0, 0); }
    return __result100__;
    if(output_file_name_199 && !__freed_obj__) { output_file_name_199 = come_decrement_ref_count(output_file_name_199, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_203;
unsigned int hash_204;
unsigned int it_205;
_Bool _while_condtional18;
_Bool _if_conditional250;
void* right_value193;
_Bool _if_conditional251;
struct sFun* __result95__;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct sFun* __result96__;
struct sFun* __result97__;
void* right_value194;
void* right_value195;
struct sFun* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_203, 0, sizeof(struct sFun*));
memset(&hash_204, 0, sizeof(unsigned int));
memset(&it_205, 0, sizeof(unsigned int));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
            memset(&default_value_203,0,sizeof(struct sFun*));
            hash_204=string_get_hash_key(((char*)key))%self->size;
            it_205=hash_204;
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                if(_if_conditional250=self->item_existance[it_205],                _if_conditional250) {
                    if(_if_conditional251=optional$2boolbool_value(((struct optional$2boolbool*)(right_value193=string_equals(self->keys[it_205],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193),
                    (right_value193 && right_value193 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value193, right_value193 = (void*)0, 
                    __freed_obj__ = 0, 
                    _if_conditional251) {
                        __result95__ = __result_obj__ = self->items[it_205];
                        if(default_value_203 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                        return __result95__;
                    }
                    it_205++;
                    if(_if_conditional252=it_205>=self->size,                    _if_conditional252) {
                        it_205=0;
                    }
                    else {
                        if(_if_conditional253=it_205==hash_204,                        _if_conditional253) {
                            __result96__ = __result_obj__ = default_value_203;
                            if(default_value_203 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_203, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result96__;
                        }
                    }
                }
                else {
                    __result97__ = __result_obj__ = default_value_203;
                    if(default_value_203 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_203, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result97__;
                }
            }
            __result99__ = __result_obj__ = ((struct optional$2sFunphbool*)(right_value195=optional$2sFunphbool_initialize(((struct optional$2sFunphbool*)(right_value194=(struct optional$2sFunphbool*)come_calloc(1, sizeof(struct optional$2sFunphbool)*(1), "./comelang2.h", 1630, "struct optional$2sFunphbool"))),(struct sFun*)come_increment_ref_count(default_value_203),(_Bool)0)));
            if(default_value_203 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_203, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
            if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value194, right_value194 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value195);
            if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value195, right_value195 = (void*)0;
            __freed_obj__ = 0;
            return __result99__;
            if(default_value_203 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_203, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sFunphbool* optional$2sFunphbool_initialize(struct optional$2sFunphbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* __dec_obj36;
struct optional$2sFunphbool* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj36=self->v1;
                self->v1=(struct sFun*)come_increment_ref_count(v1);
                if(__dec_obj36) { come_call_finalizer(sFun_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->v2=v2;
                __result98__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result98__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunphboolp_finalize(struct optional$2sFunphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional254;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional254=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional254) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_208;
_Bool _for_condtionalA21;
_Bool _if_conditional259;
_Bool _if_conditional260;
int i_209;
_Bool _for_condtionalA22;
_Bool _if_conditional261;
_Bool _if_conditional262;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_208, 0, sizeof(int));
memset(&i_209, 0, sizeof(int));
        for(
        i_208=0 ,        0;        _for_condtionalA21=        i_208<self->size ,        _for_condtionalA21;        i_208++ ,        0        ){
            if(_if_conditional259=self->item_existance[i_208],            _if_conditional259) {
                if(_if_conditional260=1,                _if_conditional260) {
                    if(self->items[i_208] && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->items[i_208], (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
        }
        come_free((char*)self->items);
        for(
        i_209=0 ,        0;        _for_condtionalA22=        i_209<self->size ,        _for_condtionalA22;        i_209++ ,        0        ){
            if(_if_conditional261=self->item_existance[i_209],            _if_conditional261) {
                if(_if_conditional262=1,                _if_conditional262) {
                    if(self->keys[i_209] && !__freed_obj__) { self->keys[i_209] = come_decrement_ref_count(self->keys[i_209], (void*)0, (void*)0, 0, 0, 0); }
                }
            }
        }
        come_free((char*)self->keys);
        if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_210;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_211;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_210, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_211, 0, sizeof(struct list_item$1charp*));
            it_210=self->head;
            while(_while_condtional19=it_210!=((void*)0),            _while_condtional19) {
                prev_it_211=it_210;
                it_210=it_210->next;
                if(prev_it_211 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* output_file_name_222;
struct _IO_FILE* f_223;
_Bool _if_conditional271;
void* right_value205;
struct map$2charphsFunph* o2_saved_224;
char* it_225;
_Bool _for_condtionalA25;
void* right_value206;
void* right_value207;
struct sFun* it2_226;
void* right_value208;
char* header_227;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
struct map$2charphsFunph* o2_saved_228;
char* it_229;
_Bool _for_condtionalA26;
void* right_value209;
void* right_value210;
struct sFun* it2_230;
void* right_value211;
char* header_231;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value212;
char* output_232;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value213;
char* output_233;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&output_file_name_222, 0, sizeof(char*));
memset(&f_223, 0, sizeof(struct _IO_FILE*));
right_value205 = (void*)0;
memset(&o2_saved_224, 0, sizeof(struct map$2charphsFunph*));
memset(&it_225, 0, sizeof(char*));
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&it2_226, 0, sizeof(struct sFun*));
right_value208 = (void*)0;
memset(&header_227, 0, sizeof(char*));
memset(&o2_saved_228, 0, sizeof(struct map$2charphsFunph*));
memset(&it_229, 0, sizeof(char*));
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&it2_230, 0, sizeof(struct sFun*));
right_value211 = (void*)0;
memset(&header_231, 0, sizeof(char*));
right_value212 = (void*)0;
memset(&output_232, 0, sizeof(char*));
right_value213 = (void*)0;
memset(&output_233, 0, sizeof(char*));
    output_file_name_222=(char*)come_increment_ref_count(info->output_file_name);
    f_223=fopen(output_file_name_222,"a");
    if(_if_conditional271=info->num_source_files==0&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional271) {
        fprintf(f_223,"#ifndef __COMMON_H__\n");
        fprintf(f_223,"#define __COMMON_H__\n");
        fprintf(f_223,"#include <comelang2.h>\n");
    }
    fprintf(f_223,"// source head\n");
    fprintf(f_223,"%s\n",((char*)(right_value205=buffer_to_string(info->module->mSourceHead))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value205, right_value205 = (void*)0;
    __freed_obj__ = 0;
    fprintf(f_223,"// header function\n");
    for(
    o2_saved_224=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_225=map$2charphsFunph_begin((o2_saved_224)) ,    0;    _for_condtionalA25=    !map$2charphsFunph_end((o2_saved_224)) ,    _for_condtionalA25;    it_225=map$2charphsFunph_next((o2_saved_224)) ,    0    ){
        it2_226=((struct sFun*)(right_value207=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value206=__builtin_string(it_225))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206, right_value206 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207);
        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value207, right_value207 = (void*)0;
        __freed_obj__ = 0;
        header_227=(char*)come_increment_ref_count(((char*)(right_value208=header_function(it2_226,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value208, right_value208 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional272=it2_226->mStatic&&it2_226->mResultType->mInline,        _if_conditional272) {
        }
        else {
            if(_if_conditional273=it2_226->mStatic,            _if_conditional273) {
            }
            else {
                if(_if_conditional274=it2_226->mResultType->mInline,                _if_conditional274) {
                }
                else {
                    if(_if_conditional275=string_operator_not_equals(it_225,"__builtin_va_start")&&string_operator_not_equals(it_225,"__builtin_va_end"),                    _if_conditional275) {
                        if(_if_conditional276=string_operator_equals(it2_226->mDeclareSName,info->base_sname),                        _if_conditional276) {
                            fprintf(f_223,"%s\n",header_227,it_225);
                        }
                    }
                }
            }
        }
        if(header_227 && !__freed_obj__) { header_227 = come_decrement_ref_count(header_227, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_224 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    fprintf(f_223,"// inline function\n");
    for(
    o2_saved_228=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_229=map$2charphsFunph_begin((o2_saved_228)) ,    0;    _for_condtionalA26=    !map$2charphsFunph_end((o2_saved_228)) ,    _for_condtionalA26;    it_229=map$2charphsFunph_next((o2_saved_228)) ,    0    ){
        it2_230=((struct sFun*)(right_value210=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value209=__builtin_string(it_229))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value209, right_value209 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value210, right_value210 = (void*)0;
        __freed_obj__ = 0;
        header_231=(char*)come_increment_ref_count(((char*)(right_value211=header_function(it2_230,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value211, right_value211 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional277=it2_230->mStatic&&it2_230->mResultType->mInline,        _if_conditional277) {
            if(_if_conditional278=string_operator_equals(it2_230->mDeclareSName,info->base_sname),            _if_conditional278) {
                output_232=(char*)come_increment_ref_count(((char*)(right_value212=output_function(it2_230,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value212, right_value212 = (void*)0;
                __freed_obj__ = 0;
                fprintf(f_223,"static inline %s",output_232);
                if(output_232 && !__freed_obj__) { output_232 = come_decrement_ref_count(output_232, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            if(_if_conditional279=it2_230->mResultType->mInline,            _if_conditional279) {
                if(_if_conditional280=string_operator_equals(it2_230->mDeclareSName,info->base_sname),                _if_conditional280) {
                    output_233=(char*)come_increment_ref_count(((char*)(right_value213=output_function(it2_230,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value213, right_value213 = (void*)0;
                    __freed_obj__ = 0;
                    fprintf(f_223,"static inline %s",output_233);
                    if(output_233 && !__freed_obj__) { output_233 = come_decrement_ref_count(output_233, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                if(_if_conditional281=it2_230->mStatic,                _if_conditional281) {
                }
                else {
                    if(_if_conditional282=string_operator_not_equals(it_229,"__builtin_va_start")&&string_operator_not_equals(it_229,"__builtin_va_end"),                    _if_conditional282) {
                    }
                }
            }
        }
        if(header_231 && !__freed_obj__) { header_231 = come_decrement_ref_count(header_231, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_228 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    fprintf(f_223,"\n");
    if(_if_conditional283=info->num_source_files==info->max_source_files-1&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional283) {
        fprintf(f_223,"#endif\n");
    }
    fclose(f_223);
    __result101__ = (_Bool)1;
    if(output_file_name_222 && !__freed_obj__) { output_file_name_222 = come_decrement_ref_count(output_file_name_222, (void*)0, (void*)0, 0, 0, 0); }
    return __result101__;
    if(output_file_name_222 && !__freed_obj__) { output_file_name_222 = come_decrement_ref_count(output_file_name_222, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional284;
char* msg2_234;
va_list args_235;
int len_236;
_Bool _if_conditional285;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_234, 0, sizeof(char*));
memset(&args_235, 0, sizeof(va_list));
memset(&len_236, 0, sizeof(int));
    if(_if_conditional284=info->no_output_come_code,    _if_conditional284) {
        return;
    }
    __builtin_va_start(args_235,code);
    len_236=vasprintf(&msg2_234,code,args_235);
    __builtin_va_end(args_235);
    if(_if_conditional285=info->come_fun,    _if_conditional285) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_234);
    }
    free(msg2_234);
    if((&args_235) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_235), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional286;
char* msg2_237;
va_list args_238;
int len_239;
_Bool _if_conditional287;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_237, 0, sizeof(char*));
memset(&args_238, 0, sizeof(va_list));
memset(&len_239, 0, sizeof(int));
    if(_if_conditional286=info->no_output_come_code,    _if_conditional286) {
        return;
    }
    __builtin_va_start(args_238,code);
    len_239=vasprintf(&msg2_237,code,args_238);
    __builtin_va_end(args_238);
    if(_if_conditional287=info->come_fun,    _if_conditional287) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_237);
    }
    free(msg2_237);
    if((&args_238) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_238), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional288;
_Bool _if_conditional289;
char* __dec_obj37;
_Bool _if_conditional290;
char* __dec_obj38;
_Bool _if_conditional291;
char* __dec_obj39;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional288=info->no_output_come_code,    _if_conditional288) {
        return;
    }
    if(_if_conditional289=info->module->mLastCode,    _if_conditional289) {
        add_come_code(info,"%s",info->module->mLastCode);
        __dec_obj37=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    }
    if(_if_conditional290=info->module->mLastCode2,    _if_conditional290) {
        add_come_code(info,"%s",info->module->mLastCode2);
        __dec_obj38=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    }
    if(_if_conditional291=info->module->mLastCode3,    _if_conditional291) {
        add_come_code(info,"%s",info->module->mLastCode3);
        __dec_obj39=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional292;
_Bool _if_conditional293;
void* right_value214;
char* __dec_obj40;
_Bool _if_conditional294;
void* right_value215;
char* __dec_obj41;
_Bool _if_conditional295;
void* right_value216;
char* __dec_obj42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
    if(_if_conditional292=info->no_output_come_code,    _if_conditional292) {
        return;
    }
    if(_if_conditional293=info->module->mLastCode,    _if_conditional293) {
        add_come_code(info,"%s ,",((char*)(right_value214=string_substring(info->module->mLastCode,0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value214, right_value214 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj40=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
    }
    if(_if_conditional294=info->module->mLastCode2,    _if_conditional294) {
        add_come_code(info,"%s ,",((char*)(right_value215=string_substring(info->module->mLastCode2,0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value215, right_value215 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj41=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
    }
    if(_if_conditional295=info->module->mLastCode3,    _if_conditional295) {
        add_come_code(info,"%s ,",((char*)(right_value216=string_substring(info->module->mLastCode3,0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value216, right_value216 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj42=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional296;
char* msg2_240;
va_list args_241;
int len_242;
void* right_value217;
char* __dec_obj43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_240, 0, sizeof(char*));
memset(&args_241, 0, sizeof(va_list));
memset(&len_242, 0, sizeof(int));
right_value217 = (void*)0;
    if(_if_conditional296=info->no_output_come_code,    _if_conditional296) {
        return;
    }
    __builtin_va_start(args_241,msg);
    len_242=vasprintf(&msg2_240,msg,args_241);
    __builtin_va_end(args_241);
    __dec_obj43=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value217=xsprintf("%s",msg2_240))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value217, right_value217 = (void*)0;
    __freed_obj__ = 0;
    free(msg2_240);
    if((&args_241) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_241), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional297;
char* msg2_243;
va_list args_244;
int len_245;
void* right_value218;
char* __dec_obj44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_243, 0, sizeof(char*));
memset(&args_244, 0, sizeof(va_list));
memset(&len_245, 0, sizeof(int));
right_value218 = (void*)0;
    if(_if_conditional297=info->no_output_come_code,    _if_conditional297) {
        return;
    }
    __builtin_va_start(args_244,msg);
    len_245=vasprintf(&msg2_243,msg,args_244);
    __builtin_va_end(args_244);
    __dec_obj44=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s",msg2_243))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value218, right_value218 = (void*)0;
    __freed_obj__ = 0;
    free(msg2_243);
    if((&args_244) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_244), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional298;
char* msg2_246;
va_list args_247;
int len_248;
void* right_value219;
char* __dec_obj45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_246, 0, sizeof(char*));
memset(&args_247, 0, sizeof(va_list));
memset(&len_248, 0, sizeof(int));
right_value219 = (void*)0;
    if(_if_conditional298=info->no_output_come_code,    _if_conditional298) {
        return;
    }
    __builtin_va_start(args_247,msg);
    len_248=vasprintf(&msg2_246,msg,args_247);
    __builtin_va_end(args_247);
    __dec_obj45=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s",msg2_246))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value219, right_value219 = (void*)0;
    __freed_obj__ = 0;
    free(msg2_246);
    if((&args_247) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_247), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    list$1CVALUEph_delete(info->stack,-value,-1);
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
int tmp_249;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
struct list$1CVALUEph* __result102__;
_Bool _if_conditional305;
_Bool _if_conditional307;
struct list_item$1CVALUEph* it_252;
int i_253;
_Bool _while_condtional21;
_Bool _if_conditional308;
struct list_item$1CVALUEph* prev_it_254;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list_item$1CVALUEph* it_255;
int i_256;
_Bool _while_condtional22;
_Bool _if_conditional311;
_Bool _if_conditional312;
struct list_item$1CVALUEph* prev_it_257;
struct list_item$1CVALUEph* it_258;
struct list_item$1CVALUEph* head_prev_it_259;
struct list_item$1CVALUEph* tail_it_260;
int i_261;
_Bool _while_condtional23;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
struct list_item$1CVALUEph* prev_it_262;
_Bool _if_conditional316;
_Bool _if_conditional317;
struct list$1CVALUEph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_249, 0, sizeof(int));
memset(&it_252, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_253, 0, sizeof(int));
memset(&prev_it_254, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_255, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_256, 0, sizeof(int));
memset(&prev_it_257, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_258, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_259, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_260, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_261, 0, sizeof(int));
memset(&prev_it_262, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional299=head<0,        _if_conditional299) {
            head+=self->len;
        }
        if(_if_conditional300=tail<0,        _if_conditional300) {
            tail+=self->len+1;
        }
        if(_if_conditional301=head>tail,        _if_conditional301) {
            tmp_249=tail;
            tail=head;
            head=tmp_249;
        }
        if(_if_conditional302=head<0,        _if_conditional302) {
            head=0;
        }
        if(_if_conditional303=tail>self->len,        _if_conditional303) {
            tail=self->len;
        }
        if(_if_conditional304=head==tail,        _if_conditional304) {
            __result102__ = __result_obj__ = self;
            return __result102__;
        }
        if(_if_conditional305=head==0&&tail==self->len,        _if_conditional305) {
            list$1CVALUEph_reset(self);
        }
        else {
            if(_if_conditional307=head==0,            _if_conditional307) {
                it_252=self->head;
                i_253=0;
                while(_while_condtional21=it_252!=((void*)0),                _while_condtional21) {
                    if(_if_conditional308=i_253<tail,                    _if_conditional308) {
                        prev_it_254=it_252;
                        it_252=it_252->next;
                        i_253++;
                        if(prev_it_254 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_254, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->len--;
                    }
                    else {
                        if(_if_conditional309=i_253==tail,                        _if_conditional309) {
                            self->head=it_252;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_252=it_252->next;
                            i_253++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional310=tail==self->len,                _if_conditional310) {
                    it_255=self->head;
                    i_256=0;
                    while(_while_condtional22=it_255!=((void*)0),                    _while_condtional22) {
                        if(_if_conditional311=i_256==head,                        _if_conditional311) {
                            self->tail=it_255->prev;
                            self->tail->next=((void*)0);
                        }
                        if(_if_conditional312=i_256>=head,                        _if_conditional312) {
                            prev_it_257=it_255;
                            it_255=it_255->next;
                            i_256++;
                            if(prev_it_257 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->len--;
                        }
                        else {
                            it_255=it_255->next;
                            i_256++;
                        }
                    }
                }
                else {
                    it_258=self->head;
                    head_prev_it_259=((void*)0);
                    tail_it_260=((void*)0);
                    i_261=0;
                    while(_while_condtional23=it_258!=((void*)0),                    _while_condtional23) {
                        if(_if_conditional313=i_261==head,                        _if_conditional313) {
                            head_prev_it_259=it_258->prev;
                        }
                        if(_if_conditional314=i_261==tail,                        _if_conditional314) {
                            tail_it_260=it_258;
                        }
                        if(_if_conditional315=i_261>=head&&i_261<tail,                        _if_conditional315) {
                            prev_it_262=it_258;
                            it_258=it_258->next;
                            i_261++;
                            if(prev_it_262 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->len--;
                        }
                        else {
                            it_258=it_258->next;
                            i_261++;
                        }
                    }
                    if(_if_conditional316=head_prev_it_259!=((void*)0),                    _if_conditional316) {
                        head_prev_it_259->next=tail_it_260;
                    }
                    if(_if_conditional317=tail_it_260!=((void*)0),                    _if_conditional317) {
                        tail_it_260->prev=head_prev_it_259;
                    }
                }
            }
        }
        __result104__ = __result_obj__ = self;
        return __result104__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_250;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_251;
struct list$1CVALUEph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_250, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_251, 0, sizeof(struct list_item$1CVALUEph*));
                it_250=self->head;
                while(_while_condtional20=it_250!=((void*)0),                _while_condtional20) {
                    prev_it_251=it_250;
                    it_250=it_250->next;
                    if(prev_it_251 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_251, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result103__ = __result_obj__ = self;
                return __result103__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional306;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional306=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional306) {
                            if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj46;
void* right_value220;
void* right_value224;
struct CVALUE* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value220 = (void*)0;
right_value224 = (void*)0;
    __dec_obj46=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    __result109__ = __result_obj__ = ((struct CVALUE*)(right_value224=CVALUE_clone(((struct CVALUE*)(right_value220=list$1CVALUEphp_operator_load_element(info->stack,offset))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value220, right_value220 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value224, right_value224 = (void*)0;
    __freed_obj__ = 0;
    return __result109__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional318;
struct list_item$1CVALUEph* it_263;
int i_264;
_Bool _while_condtional24;
_Bool _if_conditional319;
struct CVALUE* __result105__;
struct CVALUE* default_value_265;
struct CVALUE* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_263, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_264, 0, sizeof(int));
memset(&default_value_265, 0, sizeof(struct CVALUE*));
        if(_if_conditional318=position<0,        _if_conditional318) {
            position+=self->len;
        }
        it_263=self->head;
        i_264=0;
        while(_while_condtional24=it_263!=((void*)0),        _while_condtional24) {
            if(_if_conditional319=position==i_264,            _if_conditional319) {
                __result105__ = __result_obj__ = it_263->item;
                return __result105__;
            }
            it_263=it_263->next;
            i_264++;
        }
        memset(&default_value_265,0,sizeof(struct CVALUE*));
        __result106__ = __result_obj__ = default_value_265;
        if(default_value_265 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_265, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result106__;
        if(default_value_265 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_265, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional320;
struct CVALUE* __result107__;
void* right_value221;
struct CVALUE* result_266;
_Bool _if_conditional321;
void* right_value222;
char* __dec_obj47;
_Bool _if_conditional322;
void* right_value223;
struct sType* __dec_obj48;
_Bool _if_conditional323;
struct CVALUE* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value221 = (void*)0;
memset(&result_266, 0, sizeof(struct CVALUE*));
right_value222 = (void*)0;
right_value223 = (void*)0;
        if(_if_conditional320=self==(void*)0,        _if_conditional320) {
            __result107__ = __result_obj__ = (void*)0;
            return __result107__;
        }
        result_266=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value221, right_value221 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional321=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional321) {
            __dec_obj47=result_266->c_value;
            result_266->c_value=(char*)come_increment_ref_count(((char*)(right_value222=string_clone(self->c_value))));
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
            if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value222, right_value222 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional322=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional322) {
            __dec_obj48=result_266->type;
            result_266->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_clone(self->type))));
            if(__dec_obj48) { come_call_finalizer(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
            if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value223, right_value223 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional323=self!=((void*)0),        _if_conditional323) {
            result_266->var=self->var;
        }
        __result108__ = __result_obj__ = result_266;
        if(result_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_266, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result108__;
        if(result_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_266, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __dec_obj49=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __dec_obj50=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    __dec_obj51=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
}

