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
struct optional$2charphbool
{
    char* v1;
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
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sEnumNode
{
    char* mTypeName;
    struct list$1tuple2$2charphsNodephph* mElements;
    int sline;
    char* sname;
    _Bool mOutput;
    char* mDeclareSName;
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

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2charphbool* string_read(char* file_name);

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

struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
_Bool sEnumNode_terminated();

char* sEnumNode_kind();

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info);

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info);

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

static void sEnumNode_finalize(struct sEnumNode* self);
static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self);
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

struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
void* right_value11;
char* __dec_obj7;
void* right_value22;
struct list$1tuple2$2charphsNodephph* __dec_obj13;
void* right_value23;
char* __dec_obj14;
struct sEnumNode* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value10 = (void*)0;
right_value11 = (void*)0;
right_value22 = (void*)0;
right_value23 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10, right_value10 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj7=self->mTypeName;
    self->mTypeName=(char*)come_increment_ref_count(((char*)(right_value11=__builtin_string(type_name))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value11, right_value11 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj13=self->mElements;
    self->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value22=list$1tuple2$2charphsNodephphp_clone(elements))));
    if(__dec_obj13) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value22, right_value22 = (void*)0;
    __freed_obj__ = 0;
    self->mOutput=output;
    __dec_obj14=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value23=__builtin_string(info->sname))));
    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value23, right_value23 = (void*)0;
    __freed_obj__ = 0;
    __result15__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    return __result15__;
    if(self && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
struct list$1tuple2$2charphsNodephph* __result7__;
void* right_value12;
void* right_value13;
struct list$1tuple2$2charphsNodephph* result_7;
struct list_item$1tuple2$2charphsNodephph* it_8;
_Bool _while_condtional2;
void* right_value21;
struct list$1tuple2$2charphsNodephph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value12 = (void*)0;
right_value13 = (void*)0;
memset(&result_7, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_8, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value21 = (void*)0;
        if(_if_conditional5=self==((void*)0),        _if_conditional5) {
            __result7__ = __result_obj__ = ((void*)0);
            return __result7__;
        }
        result_7=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value13=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value12=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 198, "struct list$1tuple2$2charphsNodephph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
        if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value12, right_value12 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value13, right_value13 = (void*)0;
        __freed_obj__ = 0;
        it_8=self->head;
        while(_while_condtional2=it_8!=((void*)0),        _while_condtional2) {
            list$1tuple2$2charphsNodephph_add(result_7,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value21=tuple2$2charphsNodephp_clone(it_8->item)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value21, right_value21 = (void*)0;
            __freed_obj__ = 0;
            it_8=it_8->next;
        }
        __result14__ = __result_obj__ = result_7;
        if(result_7 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_7, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result14__;
        if(result_7 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsNodephph* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result8__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result8__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsNodephph* it_5;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsNodephph* prev_it_6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_5, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_6, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_5=self->head;
                while(_while_condtional1=it_5!=((void*)0),                _while_condtional1) {
                    prev_it_6=it_5;
                    it_5=it_5->next;
                    if(prev_it_6 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_6, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional6=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional6) {
                            if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional7) {
                                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional8=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional8) {
                                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
void* right_value14;
struct list_item$1tuple2$2charphsNodephph* litem_9;
struct tuple2$2charphsNodeph* __dec_obj8;
_Bool _if_conditional12;
void* right_value15;
struct list_item$1tuple2$2charphsNodephph* litem_10;
struct tuple2$2charphsNodeph* __dec_obj9;
void* right_value16;
struct list_item$1tuple2$2charphsNodephph* litem_11;
struct tuple2$2charphsNodeph* __dec_obj10;
struct list$1tuple2$2charphsNodephph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value14 = (void*)0;
memset(&litem_9, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value15 = (void*)0;
memset(&litem_10, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value16 = (void*)0;
memset(&litem_11, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    litem_9=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value14=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 212, "struct list_item$1tuple2$2charphsNodephph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value14, right_value14 = (void*)0;
                    __freed_obj__ = 0;
                    litem_9->prev=((void*)0);
                    litem_9->next=((void*)0);
                    __dec_obj8=litem_9->item;
                    litem_9->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj8) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_9;
                    self->head=litem_9;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_10=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value15=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 222, "struct list_item$1tuple2$2charphsNodephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                        if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value15, right_value15 = (void*)0;
                        __freed_obj__ = 0;
                        litem_10->prev=self->head;
                        litem_10->next=((void*)0);
                        __dec_obj9=litem_10->item;
                        litem_10->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj9) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_10;
                        self->head->next=litem_10;
                    }
                    else {
                        litem_11=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value16=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 232, "struct list_item$1tuple2$2charphsNodephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value16, right_value16 = (void*)0;
                        __freed_obj__ = 0;
                        litem_11->prev=self->tail;
                        litem_11->next=((void*)0);
                        __dec_obj10=litem_11->item;
                        litem_11->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj10) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_11;
                        self->tail=litem_11;
                    }
                }
                self->len++;
                __result9__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result9__;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional10=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional10) {
                            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional11=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional11) {
                            if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
struct tuple2$2charphsNodeph* __result10__;
void* right_value17;
struct tuple2$2charphsNodeph* result_12;
_Bool _if_conditional14;
void* right_value18;
char* __dec_obj11;
_Bool _if_conditional15;
void* right_value20;
struct sNode* __dec_obj12;
struct tuple2$2charphsNodeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value17 = (void*)0;
memset(&result_12, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value18 = (void*)0;
right_value20 = (void*)0;
                if(_if_conditional13=self==(void*)0,                _if_conditional13) {
                    __result10__ = __result_obj__ = (void*)0;
                    return __result10__;
                }
                result_12=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value17=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value17, right_value17 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional14=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional14) {
                    __dec_obj11=result_12->v1;
                    result_12->v1=(char*)come_increment_ref_count(((char*)(right_value18=string_clone(self->v1))));
                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value18, right_value18 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional15=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional15) {
                    __dec_obj12=result_12->v2;
                    result_12->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value20=sNode_clone(self->v2))));
                    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, ((struct sNode*)right_value20)->finalize, ((struct sNode*)right_value20)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value20, right_value20 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result13__ = __result_obj__ = result_12;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result13__;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
struct sNode* __result11__;
void* right_value19;
struct sNode* result_13;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
struct sNode* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value19 = (void*)0;
memset(&result_13, 0, sizeof(struct sNode*));
                        if(_if_conditional16=self==(void*)0,                        _if_conditional16) {
                            __result11__ = __result_obj__ = (void*)0;
                            return __result11__;
                        }
                        result_13=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                        if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value19, right_value19 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional17=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional17) {
                            result_13->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional18=self!=((void*)0),                        _if_conditional18) {
                            result_13->finalize=self->finalize;
                        }
                        if(_if_conditional19=self!=((void*)0),                        _if_conditional19) {
                            result_13->clone=self->clone;
                        }
                        if(_if_conditional20=self!=((void*)0),                        _if_conditional20) {
                            result_13->compile=self->compile;
                        }
                        if(_if_conditional21=self!=((void*)0),                        _if_conditional21) {
                            result_13->sline=self->sline;
                        }
                        if(_if_conditional22=self!=((void*)0),                        _if_conditional22) {
                            result_13->sname=self->sname;
                        }
                        if(_if_conditional23=self!=((void*)0),                        _if_conditional23) {
                            result_13->terminated=self->terminated;
                        }
                        if(_if_conditional24=self!=((void*)0),                        _if_conditional24) {
                            result_13->kind=self->kind;
                        }
                        __result12__ = __result_obj__ = result_13;
                        if(result_13 && !__freed_obj__) { result_13 = come_decrement_ref_count(result_13, ((struct sNode*)result_13)->finalize, ((struct sNode*)result_13)->_protocol_obj, 0, 1, 0); } 
                        return __result12__;
                        if(result_13 && !__freed_obj__) { result_13 = come_decrement_ref_count(result_13, ((struct sNode*)result_13)->finalize, ((struct sNode*)result_13)->_protocol_obj, 0, 0, 0); } 
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sEnumNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result16__ = (_Bool)1;
    return __result16__;
}

char* sEnumNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value24;
char* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value24 = (void*)0;
    __result17__ = __result_obj__ = ((char*)(right_value24=__builtin_string("sEnumNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value24, right_value24 = (void*)0;
    __freed_obj__ = 0;
    return __result17__;
}

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* type_name_14;
struct list$1tuple2$2charphsNodephph* elements_15;
void* right_value25;
void* right_value26;
struct buffer* buf_16;
_Bool _if_conditional29;
void* right_value27;
void* right_value28;
int i_17;
int n_18;
struct list$1tuple2$2charphsNodephph* o2_saved_19;
struct tuple2$2charphsNodeph* it_22;
_Bool _for_condtionalA1;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* name_25;
struct sNode* value_26;
_Bool _if_conditional34;
_Bool _if_conditional35;
void* right_value29;
char* c_value_27;
void* right_value30;
void* right_value31;
_Bool _if_conditional52;
_Bool __result26__;
void* right_value32;
struct CVALUE* right_value_34;
void* right_value33;
void* right_value34;
void* right_value35;
_Bool _if_conditional55;
void* right_value36;
_Bool _if_conditional56;
_Bool _if_conditional57;
void* right_value37;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_name_14, 0, sizeof(char*));
memset(&elements_15, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value25 = (void*)0;
right_value26 = (void*)0;
memset(&buf_16, 0, sizeof(struct buffer*));
right_value27 = (void*)0;
right_value28 = (void*)0;
memset(&i_17, 0, sizeof(int));
memset(&n_18, 0, sizeof(int));
memset(&o2_saved_19, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_22, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&name_25, 0, sizeof(char*));
memset(&value_26, 0, sizeof(struct sNode*));
memset(&name_25, 0, sizeof(char*));
memset(&value_26, 0, sizeof(struct sNode*));
right_value29 = (void*)0;
memset(&c_value_27, 0, sizeof(char*));
right_value30 = (void*)0;
right_value31 = (void*)0;
right_value32 = (void*)0;
memset(&right_value_34, 0, sizeof(struct CVALUE*));
right_value33 = (void*)0;
right_value34 = (void*)0;
right_value35 = (void*)0;
right_value36 = (void*)0;
right_value37 = (void*)0;
    type_name_14=(char*)come_increment_ref_count(self->mTypeName);
    elements_15=self->mElements;
    buf_16=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value26=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 46, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value25, right_value25 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value26, right_value26 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional29=string_operator_equals(type_name_14,""),    _if_conditional29) {
        buffer_append_str(buf_16,((char*)(right_value27=xsprintf("enum { ",type_name_14))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value27, right_value27 = (void*)0;
        __freed_obj__ = 0;
    }
    else {
        buffer_append_str(buf_16,((char*)(right_value28=xsprintf("enum %s { ",type_name_14))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value28, right_value28 = (void*)0;
        __freed_obj__ = 0;
    }
    i_17=0;
    n_18=0;
    for(
    o2_saved_19=(elements_15),it_22=list$1tuple2$2charphsNodephph_begin((o2_saved_19)) ,    0;    _for_condtionalA1=    !list$1tuple2$2charphsNodephph_end((o2_saved_19)) ,    _for_condtionalA1;    it_22=list$1tuple2$2charphsNodephph_next((o2_saved_19)) ,    0    ){
        multiple_assign_var1=it_22;
        name_25=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        value_26=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional34=value_26==((void*)0),        _if_conditional34) {
            buffer_append_str(buf_16,name_25);
            buffer_append_str(buf_16,"\n");
            if(_if_conditional35=i_17!=list$1tuple2$2charphsNodephph_length(elements_15)-1,            _if_conditional35) {
                buffer_append_str(buf_16,",");
            }
            c_value_27=(char*)come_increment_ref_count(((char*)(right_value29=xsprintf("%d",n_18))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value29, right_value29 = (void*)0;
            __freed_obj__ = 0;
            add_variable_to_global_table_with_int_value(name_25,(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value30=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 70, "struct sType")))),"int",(_Bool)0,info)))),c_value_27,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value30, right_value30 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value31, right_value31 = (void*)0;
            __freed_obj__ = 0;
            if(c_value_27 && !__freed_obj__) { c_value_27 = come_decrement_ref_count(c_value_27, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional52=!node_compile(value_26,info),            _if_conditional52) {
                __result26__ = (_Bool)0;
                if(name_25 && !__freed_obj__) { name_25 = come_decrement_ref_count(name_25, (void*)0, (void*)0, 0, 0, 0); }
                if(value_26 && !__freed_obj__) { value_26 = come_decrement_ref_count(value_26, ((struct sNode*)value_26)->finalize, ((struct sNode*)value_26)->_protocol_obj, 0, 0, 0); } 
                if(type_name_14 && !__freed_obj__) { type_name_14 = come_decrement_ref_count(type_name_14, (void*)0, (void*)0, 0, 0, 0); }
                if(buf_16 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result26__;
            }
            right_value_34=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value32=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
            if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value32, right_value32 = (void*)0;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            add_variable_to_global_table_with_int_value(name_25,(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value33=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 80, "struct sType")))),"int",(_Bool)0,info)))),right_value_34->c_value,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value33, right_value33 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value34);
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value34, right_value34 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(buf_16,((char*)(right_value35=xsprintf("%s=%s",name_25,right_value_34->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
            if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value35, right_value35 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional55=i_17!=list$1tuple2$2charphsNodephph_length(elements_15)-1,            _if_conditional55) {
                buffer_append_str(buf_16,",");
            }
            buffer_append_str(buf_16,"\n");
            n_18=atoi(right_value_34->c_value);
            if(right_value_34 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_34, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        i_17++;
        n_18++;
        if(name_25 && !__freed_obj__) { name_25 = come_decrement_ref_count(name_25, (void*)0, (void*)0, 0, 0, 0); }
        if(value_26 && !__freed_obj__) { value_26 = come_decrement_ref_count(value_26, ((struct sNode*)value_26)->finalize, ((struct sNode*)value_26)->_protocol_obj, 0, 0, 0); } 
    }
    buffer_append_str(buf_16,((char*)(right_value36=xsprintf("};\n",type_name_14))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value36, right_value36 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional56=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),    _if_conditional56) {
    }
    else {
        if(_if_conditional57=self->mOutput,        _if_conditional57) {
            add_come_code_at_source_head(info,"%s",((char*)(right_value37=buffer_to_string(buf_16))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value37, right_value37 = (void*)0;
            __freed_obj__ = 0;
        }
    }
    __result27__ = (_Bool)1;
    if(type_name_14 && !__freed_obj__) { type_name_14 = come_decrement_ref_count(type_name_14, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_16 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_16, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result27__;
    if(type_name_14 && !__freed_obj__) { type_name_14 = come_decrement_ref_count(type_name_14, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_16 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_16, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
struct tuple2$2charphsNodeph* result_20;
struct tuple2$2charphsNodeph* __result18__;
_Bool _if_conditional31;
struct tuple2$2charphsNodeph* __result19__;
struct tuple2$2charphsNodeph* result_21;
struct tuple2$2charphsNodeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_20, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_21, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional30=self==((void*)0),        _if_conditional30) {
            memset(&result_20,0,sizeof(struct tuple2$2charphsNodeph*));
            __result18__ = __result_obj__ = result_20;
            return __result18__;
        }
        self->it=self->head;
        if(_if_conditional31=self->it,        _if_conditional31) {
            __result19__ = __result_obj__ = self->it->item;
            return __result19__;
        }
        memset(&result_21,0,sizeof(struct tuple2$2charphsNodeph*));
        __result20__ = __result_obj__ = result_21;
        return __result20__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result21__ = self==((void*)0)||self->it==((void*)0);
        return __result21__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
struct tuple2$2charphsNodeph* result_23;
struct tuple2$2charphsNodeph* __result22__;
_Bool _if_conditional33;
struct tuple2$2charphsNodeph* __result23__;
struct tuple2$2charphsNodeph* result_24;
struct tuple2$2charphsNodeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_23, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_24, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional32=self==((void*)0)||self->it==((void*)0),        _if_conditional32) {
            memset(&result_23,0,sizeof(struct tuple2$2charphsNodeph*));
            __result22__ = __result_obj__ = result_23;
            return __result22__;
        }
        self->it=self->it->next;
        if(_if_conditional33=self->it,        _if_conditional33) {
            __result23__ = __result_obj__ = self->it->item;
            return __result23__;
        }
        memset(&result_24,0,sizeof(struct tuple2$2charphsNodeph*));
        __result24__ = __result_obj__ = result_24;
        return __result24__;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result25__ = self->len;
                return __result25__;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional36;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional42;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional36=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional36) {
                    if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional38=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional38) {
                    if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional39=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional39) {
                    if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional40=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional40) {
                    if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional42=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional42) {
                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional44=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional44) {
                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional45=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional45) {
                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional47=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional47) {
                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional48=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional48) {
                    if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional49=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional49) {
                    if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional50=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional50) {
                    if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional51=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional51) {
                    if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional37=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional37) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_28;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_28, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_29, 0, sizeof(struct list_item$1sTypeph*));
                        it_28=self->head;
                        while(_while_condtional3=it_28!=((void*)0),                        _while_condtional3) {
                            prev_it_29=it_28;
                            it_28=it_28->next;
                            if(prev_it_29 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional41=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional41) {
                                    if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_30;
_Bool _while_condtional4;
struct list_item$1sNodeph* prev_it_31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_30, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_31, 0, sizeof(struct list_item$1sNodeph*));
                        it_30=self->head;
                        while(_while_condtional4=it_30!=((void*)0),                        _while_condtional4) {
                            prev_it_31=it_30;
                            it_30=it_30->next;
                            if(prev_it_31 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_31, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional43=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional43) {
                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_32;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_33;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_32, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_33, 0, sizeof(struct list_item$1charph*));
                        it_32=self->head;
                        while(_while_condtional5=it_32!=((void*)0),                        _while_condtional5) {
                            prev_it_33=it_32;
                            it_32=it_32->next;
                            if(prev_it_33 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_33, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional46=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional46) {
                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional53;
_Bool _if_conditional54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional53=self!=((void*)0)&&self->c_value!=((void*)0),                _if_conditional53) {
                    if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional54=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional54) {
                    if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result28__ = self->sline;
    return __result28__;
}

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value38;
char* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value38 = (void*)0;
    __result29__ = __result_obj__ = ((char*)(right_value38=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value38, right_value38 = (void*)0;
    __freed_obj__ = 0;
    return __result29__;
}

struct sNode* parse_enum(char* type_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_35;
_Bool output_36;
void* right_value39;
_Bool _if_conditional68;
void* right_value40;
void* right_value41;
struct sClass* __dec_obj15;
void* right_value50;
void* right_value101;
struct sClass* __dec_obj48;
void* right_value102;
void* right_value103;
struct list$1tuple2$2charphsNodephph* elements_109;
_Bool _while_condtional19;
void* right_value104;
char* element_name_110;
_Bool _if_conditional200;
_Bool no_comma_111;
void* right_value105;
struct sNode* element_value_112;
_Bool _if_conditional201;
void* right_value109;
void* right_value110;
_Bool _if_conditional204;
void* right_value111;
void* right_value112;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value113;
void* right_value114;
struct sNode* _inf_value1;
struct sEnumNode* _inf_obj_value1;
void* right_value120;
struct sNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_35, 0, sizeof(struct sClass*));
memset(&output_36, 0, sizeof(_Bool));
right_value39 = (void*)0;
right_value40 = (void*)0;
right_value41 = (void*)0;
right_value50 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&elements_109, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value104 = (void*)0;
memset(&element_name_110, 0, sizeof(char*));
memset(&no_comma_111, 0, sizeof(_Bool));
right_value105 = (void*)0;
memset(&element_value_112, 0, sizeof(struct sNode*));
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value120 = (void*)0;
    if(_if_conditional68=((struct sClass*)(right_value39=map$2charphsClassph_at(info->classes,type_name,((void*)0))))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39),
    (right_value39 && right_value39 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value39, right_value39 = (void*)0, 
    __freed_obj__ = 0, 
    _if_conditional68) {
        output_36=(_Bool)1;
        __dec_obj15=klass_35;
        klass_35=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value41=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value40=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 125, "struct sClass")))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info))));
        if(__dec_obj15) { come_call_finalizer(sClass_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value40, right_value40 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value41);
        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value41, right_value41 = (void*)0;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(klass_35));
    }
    else {
        output_36=(_Bool)0;
        __dec_obj48=klass_35;
        klass_35=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value101=sClass_clone(((struct sClass*)(right_value50=map$2charphsClassph_at(info->classes,type_name,((void*)0))))))));
        if(__dec_obj48) { come_call_finalizer(sClass_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value50, right_value50 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value101, right_value101 = (void*)0;
        __freed_obj__ = 0;
    }
    expected_next_character(123,info);
    elements_109=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value103=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value102=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 135, "struct list$1tuple2$2charphsNodephph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value102, right_value102 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value103, right_value103 = (void*)0;
    __freed_obj__ = 0;
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        parse_sharp_v5(info);
        element_name_110=(char*)come_increment_ref_count(((char*)(right_value104=parse_word(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value104, right_value104 = (void*)0;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        if(_if_conditional200=*info->p==61,        _if_conditional200) {
            info->p++;
            skip_spaces_and_lf(info);
            no_comma_111=info->no_comma;
            info->no_comma=(_Bool)1;
            element_value_112=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
            if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value105, right_value105 = (void*)0;
            __freed_obj__ = 0;
            info->no_comma=no_comma_111;
            if(_if_conditional201=!info->no_output_err,            _if_conditional201) {
                list$1tuple2$2charphsNodephph_push_back(elements_109,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value110=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value109=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 155, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_110),(struct sNode*)come_increment_ref_count(element_value_112))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value109, right_value109 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
                if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value110, right_value110 = (void*)0;
                __freed_obj__ = 0;
            }
            if(element_value_112 && !__freed_obj__) { element_value_112 = come_decrement_ref_count(element_value_112, ((struct sNode*)element_value_112)->finalize, ((struct sNode*)element_value_112)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional204=!info->no_output_err,            _if_conditional204) {
                list$1tuple2$2charphsNodephph_push_back(elements_109,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value112=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value111=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 160, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_110),((void*)0))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value111, right_value111 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value112);
                if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value112, right_value112 = (void*)0;
                __freed_obj__ = 0;
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional205=*info->p==44,        _if_conditional205) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(_if_conditional206=*info->p==125,        _if_conditional206) {
            info->p++;
            skip_spaces_and_lf(info);
            if(element_name_110 && !__freed_obj__) { element_name_110 = come_decrement_ref_count(element_name_110, (void*)0, (void*)0, 0, 0, 0); }
            break;
        }
        if(element_name_110 && !__freed_obj__) { element_name_110 = come_decrement_ref_count(element_name_110, (void*)0, (void*)0, 0, 0, 0); }
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 180, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sEnumNode*)(right_value114=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value113=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 180, "struct sEnumNode")))),(char*)come_increment_ref_count(type_name),elements_109,output_36,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sEnumNode_finalize;
    _inf_value1->clone=(void*)sEnumNode_clone;
    _inf_value1->compile=(void*)sEnumNode_compile;
    _inf_value1->sline=(void*)sEnumNode_sline;
    _inf_value1->sname=(void*)sEnumNode_sname;
    _inf_value1->terminated=(void*)sEnumNode_terminated;
    _inf_value1->kind=(void*)sEnumNode_kind;
    __result86__ = __result_obj__ = ((struct sNode*)(right_value120=_inf_value1));
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_35 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_35, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elements_109 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113, right_value113 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value114, right_value114 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value120, right_value120 = (void*)0;
    __freed_obj__ = 0;
    return __result86__;
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_35 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_35, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elements_109 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_109, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional6;
_Bool _if_conditional58;
_Bool _if_conditional59;
struct sClass* __result30__;
_Bool _if_conditional66;
_Bool _if_conditional67;
struct sClass* __result31__;
struct sClass* __result32__;
struct sClass* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
        hash_37=string_get_hash_key(((char*)key))%self->size;
        it_38=hash_37;
        while(_while_condtional6=(_Bool)1,        _while_condtional6) {
            if(_if_conditional58=self->item_existance[it_38],            _if_conditional58) {
                if(_if_conditional59=string_equals(self->keys[it_38],key),                _if_conditional59) {
                    __result30__ = __result_obj__ = self->items[it_38];
                    if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result30__;
                }
                it_38++;
                if(_if_conditional66=it_38>=self->size,                _if_conditional66) {
                    it_38=0;
                }
                else {
                    if(_if_conditional67=it_38==hash_37,                    _if_conditional67) {
                        __result31__ = __result_obj__ = default_value;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result31__;
                    }
                }
            }
            else {
                __result32__ = __result_obj__ = default_value;
                if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result32__;
            }
        }
        __result33__ = __result_obj__ = default_value;
        if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result33__;
        if(default_value && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional65;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional60=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional60) {
                            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional61=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional61) {
                            if(self->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional65=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional65) {
                            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_39;
_Bool _while_condtional7;
struct list_item$1tuple2$2charphsTypephph* prev_it_40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_39, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_40, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_39=self->head;
                                while(_while_condtional7=it_39!=((void*)0),                                _while_condtional7) {
                                    prev_it_40=it_39;
                                    it_39=it_39->next;
                                    if(prev_it_40 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_40, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional62=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional62) {
                                            if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional63=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional63) {
                                                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                                if(_if_conditional64=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional64) {
                                                    if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional69;
unsigned int hash_56;
unsigned int it_57;
_Bool _while_condtional9;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool same_key_exist_74;
char* it2_77;
_Bool _for_condtionalA3;
_Bool _if_conditional108;
_Bool _if_conditional109;
struct map$2charphsClassph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_56, 0, sizeof(unsigned int));
memset(&it_57, 0, sizeof(unsigned int));
memset(&same_key_exist_74, 0, sizeof(_Bool));
memset(&it2_77, 0, sizeof(char*));
            if(_if_conditional69=self->len*10>=self->size,            _if_conditional69) {
                map$2charphsClassph_rehash(self);
            }
            hash_56=string_get_hash_key(key)%self->size;
            it_57=hash_56;
            while(_while_condtional9=(_Bool)1,            _while_condtional9) {
                if(_if_conditional77=self->item_existance[it_57],                _if_conditional77) {
                    if(_if_conditional78=string_equals(self->keys[it_57],key),                    _if_conditional78) {
                        if(_if_conditional79=1,                        _if_conditional79) {
                            list$1charp_remove(self->key_list,self->keys[it_57]);
                            if(self->keys[it_57] && !__freed_obj__) { self->keys[it_57] = come_decrement_ref_count(self->keys[it_57], (void*)0, (void*)0, 0, 0, 0); }
                            self->keys[it_57]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_57]);
                            self->keys[it_57]=key;
                        }
                        if(_if_conditional99=1,                        _if_conditional99) {
                            if(self->items[it_57] && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->items[it_57], (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->items[it_57]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_57]=item;
                        }
                        break;
                    }
                    it_57++;
                    if(_if_conditional100=it_57>=self->size,                    _if_conditional100) {
                        it_57=0;
                    }
                    else {
                        if(_if_conditional101=it_57==hash_56,                        _if_conditional101) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_57]=(_Bool)1;
                    if(_if_conditional102=1,                    _if_conditional102) {
                        self->keys[it_57]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_57]=key;
                    }
                    if(_if_conditional103=1,                    _if_conditional103) {
                        self->items[it_57]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_57]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_74=(_Bool)0;
            for(
            it2_77=list$1charp_begin(self->key_list) ,            0;            _for_condtionalA3=            !list$1charp_end(self->key_list) ,            _for_condtionalA3;            it2_77=list$1charp_next(self->key_list) ,            0            ){
                if(_if_conditional108=string_equals(it2_77,key),                _if_conditional108) {
                    same_key_exist_74=(_Bool)1;
                }
            }
            if(_if_conditional109=!same_key_exist_74,            _if_conditional109) {
                list$1charp_push_back(self->key_list,key);
            }
            __result53__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result53__;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_41;
void* right_value42;
char** keys_42;
void* right_value43;
struct sClass** items_43;
void* right_value44;
_Bool* item_existance_44;
int len_45;
char* it_48;
_Bool _for_condtionalA2;
struct sClass* default_value_51;
void* right_value45;
struct sClass* it2_52;
unsigned int hash_53;
int n_54;
_Bool _while_condtional8;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct sClass* default_value_55;
void* right_value46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_41, 0, sizeof(int));
right_value42 = (void*)0;
memset(&keys_42, 0, sizeof(char**));
right_value43 = (void*)0;
memset(&items_43, 0, sizeof(struct sClass**));
right_value44 = (void*)0;
memset(&item_existance_44, 0, sizeof(_Bool*));
memset(&len_45, 0, sizeof(int));
memset(&it_48, 0, sizeof(char*));
memset(&default_value_51, 0, sizeof(struct sClass*));
right_value45 = (void*)0;
memset(&it2_52, 0, sizeof(struct sClass*));
memset(&hash_53, 0, sizeof(unsigned int));
memset(&n_54, 0, sizeof(int));
memset(&default_value_55, 0, sizeof(struct sClass*));
right_value46 = (void*)0;
                    size_41=self->size*10;
                    keys_42=(char**)come_increment_ref_count(((char**)(right_value42=(char**)come_calloc(1, sizeof(char*)*(1*(size_41)), "./comelang2.h", 1388, "char*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value42, right_value42 = (void*)0;
                    __freed_obj__ = 0;
                    items_43=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value43=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_41)), "./comelang2.h", 1389, "struct sClass*"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value43, right_value43 = (void*)0;
                    __freed_obj__ = 0;
                    item_existance_44=(_Bool*)come_increment_ref_count(((_Bool*)(right_value44=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_41)), "./comelang2.h", 1390, "_Bool"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value44, right_value44 = (void*)0;
                    __freed_obj__ = 0;
                    len_45=0;
                    for(
                    it_48=map$2charphsClassph_begin(self) ,                    0;                    _for_condtionalA2=                    !map$2charphsClassph_end(self) ,                    _for_condtionalA2;                    it_48=map$2charphsClassph_next(self) ,                    0                    ){
                        memset(&default_value_51,0,sizeof(struct sClass*));
                        it2_52=((struct sClass*)(right_value45=map$2charphsClassph_at(self,it_48,default_value_51)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value45, right_value45 = (void*)0;
                        __freed_obj__ = 0;
                        hash_53=string_get_hash_key(it_48)%size_41;
                        n_54=hash_53;
                        while(_while_condtional8=(_Bool)1,                        _while_condtional8) {
                            if(_if_conditional74=item_existance_44[n_54],                            _if_conditional74) {
                                n_54++;
                                if(_if_conditional75=n_54>=size_41,                                _if_conditional75) {
                                    n_54=0;
                                }
                                else {
                                    if(_if_conditional76=n_54==hash_53,                                    _if_conditional76) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_44[n_54]=(_Bool)1;
                                keys_42[n_54]=it_48;
                                items_43[n_54]=((struct sClass*)(right_value46=map$2charphsClassph_at(self,it_48,default_value_55)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value46, right_value46 = (void*)0;
                                __freed_obj__ = 0;
                                len_45++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    come_free((char*)self->keys);
                    self->keys=keys_42;
                    self->items=items_43;
                    self->item_existance=item_existance_44;
                    self->size=size_41;
                    self->len=len_45;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional70;
char* result_46;
char* __result34__;
_Bool _if_conditional71;
char* __result35__;
char* result_47;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_46, 0, sizeof(char*));
memset(&result_47, 0, sizeof(char*));
                        if(_if_conditional70=self==((void*)0),                        _if_conditional70) {
                            memset(&result_46,0,sizeof(char*));
                            __result34__ = __result_obj__ = result_46;
                            return __result34__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(_if_conditional71=self->key_list->it,                        _if_conditional71) {
                            __result35__ = __result_obj__ = self->key_list->it->item;
                            return __result35__;
                        }
                        memset(&result_47,0,sizeof(char*));
                        __result36__ = __result_obj__ = result_47;
                        return __result36__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result37__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result37__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional72;
char* result_49;
char* __result38__;
_Bool _if_conditional73;
char* __result39__;
char* result_50;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_49, 0, sizeof(char*));
memset(&result_50, 0, sizeof(char*));
                        if(_if_conditional72=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional72) {
                            memset(&result_49,0,sizeof(char*));
                            __result38__ = __result_obj__ = result_49;
                            return __result38__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(_if_conditional73=self->key_list->it,                        _if_conditional73) {
                            __result39__ = __result_obj__ = self->key_list->it->item;
                            return __result39__;
                        }
                        memset(&result_50,0,sizeof(char*));
                        __result40__ = __result_obj__ = result_50;
                        return __result40__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_58;
struct list_item$1charp* it_59;
_Bool _while_condtional10;
_Bool _if_conditional80;
struct list$1charp* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_58, 0, sizeof(int));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
                                it2_58=0;
                                it_59=self->head;
                                while(_while_condtional10=it_59!=((void*)0),                                _while_condtional10) {
                                    if(_if_conditional80=string_equals(it_59->item,item),                                    _if_conditional80) {
                                        list$1charp_delete(self,it2_58,it2_58+1);
                                        break;
                                    }
                                    it2_58++;
                                    it_59=it_59->next;
                                }
                                __result44__ = __result_obj__ = self;
                                return __result44__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
int tmp_60;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
struct list$1charp* __result41__;
_Bool _if_conditional87;
_Bool _if_conditional88;
struct list_item$1charp* it_63;
int i_64;
_Bool _while_condtional12;
_Bool _if_conditional89;
struct list_item$1charp* prev_it_65;
_Bool _if_conditional90;
_Bool _if_conditional91;
struct list_item$1charp* it_66;
int i_67;
_Bool _while_condtional13;
_Bool _if_conditional92;
_Bool _if_conditional93;
struct list_item$1charp* prev_it_68;
struct list_item$1charp* it_69;
struct list_item$1charp* head_prev_it_70;
struct list_item$1charp* tail_it_71;
int i_72;
_Bool _while_condtional14;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
struct list_item$1charp* prev_it_73;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct list$1charp* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_60, 0, sizeof(int));
memset(&it_63, 0, sizeof(struct list_item$1charp*));
memset(&i_64, 0, sizeof(int));
memset(&prev_it_65, 0, sizeof(struct list_item$1charp*));
memset(&it_66, 0, sizeof(struct list_item$1charp*));
memset(&i_67, 0, sizeof(int));
memset(&prev_it_68, 0, sizeof(struct list_item$1charp*));
memset(&it_69, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_70, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_71, 0, sizeof(struct list_item$1charp*));
memset(&i_72, 0, sizeof(int));
memset(&prev_it_73, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional81=head<0,                                            _if_conditional81) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional82=tail<0,                                            _if_conditional82) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional83=head>tail,                                            _if_conditional83) {
                                                tmp_60=tail;
                                                tail=head;
                                                head=tmp_60;
                                            }
                                            if(_if_conditional84=head<0,                                            _if_conditional84) {
                                                head=0;
                                            }
                                            if(_if_conditional85=tail>self->len,                                            _if_conditional85) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional86=head==tail,                                            _if_conditional86) {
                                                __result41__ = __result_obj__ = self;
                                                return __result41__;
                                            }
                                            if(_if_conditional87=head==0&&tail==self->len,                                            _if_conditional87) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional88=head==0,                                                _if_conditional88) {
                                                    it_63=self->head;
                                                    i_64=0;
                                                    while(_while_condtional12=it_63!=((void*)0),                                                    _while_condtional12) {
                                                        if(_if_conditional89=i_64<tail,                                                        _if_conditional89) {
                                                            prev_it_65=it_63;
                                                            it_63=it_63->next;
                                                            i_64++;
                                                            if(prev_it_65 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional90=i_64==tail,                                                            _if_conditional90) {
                                                                self->head=it_63;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_63=it_63->next;
                                                                i_64++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional91=tail==self->len,                                                    _if_conditional91) {
                                                        it_66=self->head;
                                                        i_67=0;
                                                        while(_while_condtional13=it_66!=((void*)0),                                                        _while_condtional13) {
                                                            if(_if_conditional92=i_67==head,                                                            _if_conditional92) {
                                                                self->tail=it_66->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional93=i_67>=head,                                                            _if_conditional93) {
                                                                prev_it_68=it_66;
                                                                it_66=it_66->next;
                                                                i_67++;
                                                                if(prev_it_68 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_66=it_66->next;
                                                                i_67++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_69=self->head;
                                                        head_prev_it_70=((void*)0);
                                                        tail_it_71=((void*)0);
                                                        i_72=0;
                                                        while(_while_condtional14=it_69!=((void*)0),                                                        _while_condtional14) {
                                                            if(_if_conditional94=i_72==head,                                                            _if_conditional94) {
                                                                head_prev_it_70=it_69->prev;
                                                            }
                                                            if(_if_conditional95=i_72==tail,                                                            _if_conditional95) {
                                                                tail_it_71=it_69;
                                                            }
                                                            if(_if_conditional96=i_72>=head&&i_72<tail,                                                            _if_conditional96) {
                                                                prev_it_73=it_69;
                                                                it_69=it_69->next;
                                                                i_72++;
                                                                if(prev_it_73 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_73, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_69=it_69->next;
                                                                i_72++;
                                                            }
                                                        }
                                                        if(_if_conditional97=head_prev_it_70!=((void*)0),                                                        _if_conditional97) {
                                                            head_prev_it_70->next=tail_it_71;
                                                        }
                                                        if(_if_conditional98=tail_it_71!=((void*)0),                                                        _if_conditional98) {
                                                            tail_it_71->prev=head_prev_it_70;
                                                        }
                                                    }
                                                }
                                            }
                                            __result43__ = __result_obj__ = self;
                                            return __result43__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_61;
_Bool _while_condtional11;
struct list_item$1charp* prev_it_62;
struct list$1charp* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_61, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_62, 0, sizeof(struct list_item$1charp*));
                                                    it_61=self->head;
                                                    while(_while_condtional11=it_61!=((void*)0),                                                    _while_condtional11) {
                                                        prev_it_62=it_61;
                                                        it_61=it_61->next;
                                                        if(prev_it_62 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result42__ = __result_obj__ = self;
                                                    return __result42__;
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
_Bool _if_conditional104;
char* result_75;
char* __result45__;
_Bool _if_conditional105;
char* __result46__;
char* result_76;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_75, 0, sizeof(char*));
memset(&result_76, 0, sizeof(char*));
                if(_if_conditional104=self==((void*)0),                _if_conditional104) {
                    memset(&result_75,0,sizeof(char*));
                    __result45__ = __result_obj__ = result_75;
                    return __result45__;
                }
                self->it=self->head;
                if(_if_conditional105=self->it,                _if_conditional105) {
                    __result46__ = __result_obj__ = self->it->item;
                    return __result46__;
                }
                memset(&result_76,0,sizeof(char*));
                __result47__ = __result_obj__ = result_76;
                return __result47__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result48__ = self==((void*)0)||self->it==((void*)0);
                return __result48__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional106;
char* result_78;
char* __result49__;
_Bool _if_conditional107;
char* __result50__;
char* result_79;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_78, 0, sizeof(char*));
memset(&result_79, 0, sizeof(char*));
                if(_if_conditional106=self==((void*)0)||self->it==((void*)0),                _if_conditional106) {
                    memset(&result_78,0,sizeof(char*));
                    __result49__ = __result_obj__ = result_78;
                    return __result49__;
                }
                self->it=self->it->next;
                if(_if_conditional107=self->it,                _if_conditional107) {
                    __result50__ = __result_obj__ = self->it->item;
                    return __result50__;
                }
                memset(&result_79,0,sizeof(char*));
                __result51__ = __result_obj__ = result_79;
                return __result51__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional110;
void* right_value47;
struct list_item$1charp* litem_80;
_Bool _if_conditional111;
void* right_value48;
struct list_item$1charp* litem_81;
void* right_value49;
struct list_item$1charp* litem_82;
struct list$1charp* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value47 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1charp*));
right_value48 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1charp*));
right_value49 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional110=self->len==0,                    _if_conditional110) {
                        litem_80=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value47=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value47, right_value47 = (void*)0;
                        __freed_obj__ = 0;
                        litem_80->prev=((void*)0);
                        litem_80->next=((void*)0);
                        litem_80->item=item;
                        self->tail=litem_80;
                        self->head=litem_80;
                    }
                    else {
                        if(_if_conditional111=self->len==1,                        _if_conditional111) {
                            litem_81=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value48=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292, "struct list_item$1charp"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value48, right_value48 = (void*)0;
                            __freed_obj__ = 0;
                            litem_81->prev=self->head;
                            litem_81->next=((void*)0);
                            litem_81->item=item;
                            self->tail=litem_81;
                            self->head->next=litem_81;
                        }
                        else {
                            litem_82=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value49=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 302, "struct list_item$1charp"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                            if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value49, right_value49 = (void*)0;
                            __freed_obj__ = 0;
                            litem_82->prev=self->tail;
                            litem_82->next=((void*)0);
                            litem_82->item=item;
                            self->tail->next=litem_82;
                            self->tail=litem_82;
                        }
                    }
                    self->len++;
                    __result52__ = __result_obj__ = self;
                    return __result52__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional112;
struct sClass* __result54__;
void* right_value51;
struct sClass* result_83;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value52;
char* __dec_obj16;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
void* right_value99;
struct list$1tuple2$2charphsTypephph* __dec_obj46;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value100;
char* __dec_obj47;
struct sClass* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value51 = (void*)0;
memset(&result_83, 0, sizeof(struct sClass*));
right_value52 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
            if(_if_conditional112=self==(void*)0,            _if_conditional112) {
                __result54__ = __result_obj__ = (void*)0;
                return __result54__;
            }
            result_83=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value51=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value51, right_value51 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                result_83->mStruct=self->mStruct;
            }
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                result_83->mFloat=self->mFloat;
            }
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                result_83->mUnion=self->mUnion;
            }
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                result_83->mGenerics=self->mGenerics;
            }
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                result_83->mMethodGenerics=self->mMethodGenerics;
            }
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                result_83->mEnum=self->mEnum;
            }
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                result_83->mProtocol=self->mProtocol;
            }
            if(_if_conditional120=self!=((void*)0),            _if_conditional120) {
                result_83->mNumber=self->mNumber;
            }
            if(_if_conditional121=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional121) {
                __dec_obj16=result_83->mName;
                result_83->mName=(char*)come_increment_ref_count(((char*)(right_value52=string_clone(self->mName))));
                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value52, right_value52 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional122=self!=((void*)0),            _if_conditional122) {
                result_83->mGenericsNum=self->mGenericsNum;
            }
            if(_if_conditional123=self!=((void*)0),            _if_conditional123) {
                result_83->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            if(_if_conditional124=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional124) {
                __dec_obj46=result_83->mFields;
                result_83->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value99=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                if(__dec_obj46) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value99, right_value99 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional198=self!=((void*)0),            _if_conditional198) {
                result_83->mOutputed=self->mOutputed;
            }
            if(_if_conditional199=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional199) {
                __dec_obj47=result_83->mDeclareSName;
                result_83->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value100=string_clone(self->mDeclareSName))));
                if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value100, right_value100 = (void*)0;
                __freed_obj__ = 0;
            }
            __result81__ = __result_obj__ = result_83;
            if(result_83 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_83, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result81__;
            if(result_83 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_83, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
struct list$1tuple2$2charphsTypephph* __result55__;
void* right_value53;
void* right_value54;
struct list$1tuple2$2charphsTypephph* result_84;
struct list_item$1tuple2$2charphsTypephph* it_85;
_Bool _while_condtional15;
void* right_value98;
struct list$1tuple2$2charphsTypephph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&result_84, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_85, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value98 = (void*)0;
                    if(_if_conditional125=self==((void*)0),                    _if_conditional125) {
                        __result55__ = __result_obj__ = ((void*)0);
                        return __result55__;
                    }
                    result_84=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value54=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value53=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 198, "struct list$1tuple2$2charphsTypephph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value53, right_value53 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value54, right_value54 = (void*)0;
                    __freed_obj__ = 0;
                    it_85=self->head;
                    while(_while_condtional15=it_85!=((void*)0),                    _while_condtional15) {
                        list$1tuple2$2charphsTypephph_add(result_84,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value98=tuple2$2charphsTypephp_clone(it_85->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value98, right_value98 = (void*)0;
                        __freed_obj__ = 0;
                        it_85=it_85->next;
                    }
                    __result80__ = __result_obj__ = result_84;
                    if(result_84 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_84, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result80__;
                    if(result_84 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_84, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsTypephph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result56__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result56__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
void* right_value55;
struct list_item$1tuple2$2charphsTypephph* litem_86;
struct tuple2$2charphsTypeph* __dec_obj17;
_Bool _if_conditional129;
void* right_value56;
struct list_item$1tuple2$2charphsTypephph* litem_87;
struct tuple2$2charphsTypeph* __dec_obj18;
void* right_value57;
struct list_item$1tuple2$2charphsTypephph* litem_88;
struct tuple2$2charphsTypeph* __dec_obj19;
struct list$1tuple2$2charphsTypephph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value55 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value56 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value57 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional126=self->len==0,                            _if_conditional126) {
                                litem_86=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value55=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 212, "struct list_item$1tuple2$2charphsTypephph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value55, right_value55 = (void*)0;
                                __freed_obj__ = 0;
                                litem_86->prev=((void*)0);
                                litem_86->next=((void*)0);
                                __dec_obj17=litem_86->item;
                                litem_86->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj17) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_86;
                                self->head=litem_86;
                            }
                            else {
                                if(_if_conditional129=self->len==1,                                _if_conditional129) {
                                    litem_87=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value56=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 222, "struct list_item$1tuple2$2charphsTypephph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value56, right_value56 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_87->prev=self->head;
                                    litem_87->next=((void*)0);
                                    __dec_obj18=litem_87->item;
                                    litem_87->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    if(__dec_obj18) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_87;
                                    self->head->next=litem_87;
                                }
                                else {
                                    litem_88=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value57=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 232, "struct list_item$1tuple2$2charphsTypephph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value57, right_value57 = (void*)0;
                                    __freed_obj__ = 0;
                                    litem_88->prev=self->tail;
                                    litem_88->next=((void*)0);
                                    __dec_obj19=litem_88->item;
                                    litem_88->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    if(__dec_obj19) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail->next=litem_88;
                                    self->tail=litem_88;
                                }
                            }
                            self->len++;
                            __result57__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result57__;
                            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional127=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional127) {
                                        if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional128=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional128) {
                                        if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
struct tuple2$2charphsTypeph* __result58__;
void* right_value58;
struct tuple2$2charphsTypeph* result_89;
_Bool _if_conditional131;
void* right_value59;
char* __dec_obj20;
_Bool _if_conditional132;
void* right_value97;
struct sType* __dec_obj45;
struct tuple2$2charphsTypeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value58 = (void*)0;
memset(&result_89, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value59 = (void*)0;
right_value97 = (void*)0;
                            if(_if_conditional130=self==(void*)0,                            _if_conditional130) {
                                __result58__ = __result_obj__ = (void*)0;
                                return __result58__;
                            }
                            result_89=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value58=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value58, right_value58 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional131=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional131) {
                                __dec_obj20=result_89->v1;
                                result_89->v1=(char*)come_increment_ref_count(((char*)(right_value59=string_clone(self->v1))));
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value59, right_value59 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional132=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional132) {
                                __dec_obj45=result_89->v2;
                                result_89->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(self->v2))));
                                if(__dec_obj45) { come_call_finalizer(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value97, right_value97 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            __result79__ = __result_obj__ = result_89;
                            if(result_89 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_89, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result79__;
                            if(result_89 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_89, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
struct sType* __result59__;
void* right_value60;
struct sType* result_90;
_Bool _if_conditional134;
_Bool _if_conditional135;
void* right_value63;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional139;
void* right_value66;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional142;
void* right_value67;
char* __dec_obj25;
_Bool _if_conditional143;
void* right_value74;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional147;
void* right_value81;
struct list$1sNodeph* __dec_obj33;
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value82;
struct list$1sTypeph* __dec_obj34;
_Bool _if_conditional153;
void* right_value89;
struct list$1charph* __dec_obj38;
_Bool _if_conditional157;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj40;
_Bool _if_conditional160;
_Bool _if_conditional161;
void* right_value93;
struct sNode* __dec_obj41;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
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
void* right_value94;
struct sNode* __dec_obj42;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value95;
char* __dec_obj43;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value96;
char* __dec_obj44;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value60 = (void*)0;
memset(&result_90, 0, sizeof(struct sType*));
right_value63 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value74 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value89 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
                                    if(_if_conditional133=self==(void*)0,                                    _if_conditional133) {
                                        __result59__ = __result_obj__ = (void*)0;
                                        return __result59__;
                                    }
                                    result_90=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value60, right_value60 = (void*)0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional134=self!=((void*)0),                                    _if_conditional134) {
                                        result_90->mClass=self->mClass;
                                    }
                                    if(_if_conditional135=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional135) {
                                        __dec_obj22=result_90->mNoSolvedGenericsType;
                                        result_90->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value63=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                        if(__dec_obj22) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                                        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value63, right_value63 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional139=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional139) {
                                        __dec_obj24=result_90->mOriginalLoadVarType;
                                        result_90->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value66=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                        if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                                        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value66, right_value66 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional142=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional142) {
                                        __dec_obj25=result_90->mGenericsName;
                                        result_90->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value67=string_clone(self->mGenericsName))));
                                        if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                                        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value67, right_value67 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional143=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional143) {
                                        __dec_obj29=result_90->mGenericsTypes;
                                        result_90->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value74=list$1sTypeph_clone(self->mGenericsTypes))));
                                        if(__dec_obj29) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                                        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value74, right_value74 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional147=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional147) {
                                        __dec_obj33=result_90->mArrayNum;
                                        result_90->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value81=list$1sNodeph_clone(self->mArrayNum))));
                                        if(__dec_obj33) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                                        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value81, right_value81 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional151=self!=((void*)0),                                    _if_conditional151) {
                                        result_90->mOmitArrayNum=self->mOmitArrayNum;
                                    }
                                    if(_if_conditional152=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional152) {
                                        __dec_obj34=result_90->mParamTypes;
                                        result_90->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=list$1sTypeph_clone(self->mParamTypes))));
                                        if(__dec_obj34) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                                        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value82, right_value82 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional153=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional153) {
                                        __dec_obj38=result_90->mParamNames;
                                        result_90->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_clone(self->mParamNames))));
                                        if(__dec_obj38) { come_call_finalizer(list$1charph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                                        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value89, right_value89 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional157=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional157) {
                                        __dec_obj40=result_90->mResultType;
                                        result_90->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mResultType))));
                                        if(__dec_obj40) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                                        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value92, right_value92 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional160=self!=((void*)0),                                    _if_conditional160) {
                                        result_90->mVarArgs=self->mVarArgs;
                                    }
                                    if(_if_conditional161=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional161) {
                                        __dec_obj41=result_90->mAlignas;
                                        result_90->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value93=sNode_clone(self->mAlignas))));
                                        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                                        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, ((struct sNode*)right_value93)->finalize, ((struct sNode*)right_value93)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value93, right_value93 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional162=self!=((void*)0),                                    _if_conditional162) {
                                        result_90->mUnsigned=self->mUnsigned;
                                    }
                                    if(_if_conditional163=self!=((void*)0),                                    _if_conditional163) {
                                        result_90->mShort=self->mShort;
                                    }
                                    if(_if_conditional164=self!=((void*)0),                                    _if_conditional164) {
                                        result_90->mLong=self->mLong;
                                    }
                                    if(_if_conditional165=self!=((void*)0),                                    _if_conditional165) {
                                        result_90->mLongLong=self->mLongLong;
                                    }
                                    if(_if_conditional166=self!=((void*)0),                                    _if_conditional166) {
                                        result_90->mConstant=self->mConstant;
                                    }
                                    if(_if_conditional167=self!=((void*)0),                                    _if_conditional167) {
                                        result_90->mRegister=self->mRegister;
                                    }
                                    if(_if_conditional168=self!=((void*)0),                                    _if_conditional168) {
                                        result_90->mVolatile=self->mVolatile;
                                    }
                                    if(_if_conditional169=self!=((void*)0),                                    _if_conditional169) {
                                        result_90->mStatic=self->mStatic;
                                    }
                                    if(_if_conditional170=self!=((void*)0),                                    _if_conditional170) {
                                        result_90->mExtern=self->mExtern;
                                    }
                                    if(_if_conditional171=self!=((void*)0),                                    _if_conditional171) {
                                        result_90->mRestrict=self->mRestrict;
                                    }
                                    if(_if_conditional172=self!=((void*)0),                                    _if_conditional172) {
                                        result_90->mImmutable=self->mImmutable;
                                    }
                                    if(_if_conditional173=self!=((void*)0),                                    _if_conditional173) {
                                        result_90->mHeap=self->mHeap;
                                    }
                                    if(_if_conditional174=self!=((void*)0),                                    _if_conditional174) {
                                        result_90->mDummyHeap=self->mDummyHeap;
                                    }
                                    if(_if_conditional175=self!=((void*)0),                                    _if_conditional175) {
                                        result_90->mDelegate=self->mDelegate;
                                    }
                                    if(_if_conditional176=self!=((void*)0),                                    _if_conditional176) {
                                        result_90->mShare=self->mShare;
                                    }
                                    if(_if_conditional177=self!=((void*)0),                                    _if_conditional177) {
                                        result_90->mClone=self->mClone;
                                    }
                                    if(_if_conditional178=self!=((void*)0),                                    _if_conditional178) {
                                        result_90->mNoHeap=self->mNoHeap;
                                    }
                                    if(_if_conditional179=self!=((void*)0),                                    _if_conditional179) {
                                        result_90->mNoCallingDestructor=self->mNoCallingDestructor;
                                    }
                                    if(_if_conditional180=self!=((void*)0),                                    _if_conditional180) {
                                        result_90->mRefference=self->mRefference;
                                    }
                                    if(_if_conditional181=self!=((void*)0),                                    _if_conditional181) {
                                        result_90->mException=self->mException;
                                    }
                                    if(_if_conditional182=self!=((void*)0),                                    _if_conditional182) {
                                        result_90->mPointerNum=self->mPointerNum;
                                    }
                                    if(_if_conditional183=self!=((void*)0),                                    _if_conditional183) {
                                        result_90->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                    }
                                    if(_if_conditional184=self!=((void*)0),                                    _if_conditional184) {
                                        result_90->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                    }
                                    if(_if_conditional185=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional185) {
                                        __dec_obj42=result_90->mSizeNum;
                                        result_90->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=sNode_clone(self->mSizeNum))));
                                        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                                        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value94, right_value94 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional186=self!=((void*)0),                                    _if_conditional186) {
                                        result_90->mDynamicArrayNum=self->mDynamicArrayNum;
                                    }
                                    if(_if_conditional187=self!=((void*)0),                                    _if_conditional187) {
                                        result_90->mTypeOfExpression=self->mTypeOfExpression;
                                    }
                                    if(_if_conditional188=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional188) {
                                        __dec_obj43=result_90->mOriginalTypeName;
                                        result_90->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value95=string_clone(self->mOriginalTypeName))));
                                        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                                        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value95, right_value95 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional189=self!=((void*)0),                                    _if_conditional189) {
                                        result_90->mOriginalPointerNum=self->mOriginalPointerNum;
                                    }
                                    if(_if_conditional190=self!=((void*)0),                                    _if_conditional190) {
                                        result_90->mFunctionParam=self->mFunctionParam;
                                    }
                                    if(_if_conditional191=self!=((void*)0),                                    _if_conditional191) {
                                        result_90->mAllocaValue=self->mAllocaValue;
                                    }
                                    if(_if_conditional192=self!=((void*)0),                                    _if_conditional192) {
                                        result_90->mGenericsStruct=self->mGenericsStruct;
                                    }
                                    if(_if_conditional193=self!=((void*)0),                                    _if_conditional193) {
                                        result_90->mSolvedGenericsName=self->mSolvedGenericsName;
                                    }
                                    if(_if_conditional194=self!=((void*)0),                                    _if_conditional194) {
                                        result_90->mComeMemCore=self->mComeMemCore;
                                    }
                                    if(_if_conditional195=self!=((void*)0),                                    _if_conditional195) {
                                        result_90->mInline=self->mInline;
                                    }
                                    if(_if_conditional196=self!=((void*)0),                                    _if_conditional196) {
                                        result_90->mNullValue=self->mNullValue;
                                    }
                                    if(_if_conditional197=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional197) {
                                        __dec_obj44=result_90->mAsmName;
                                        result_90->mAsmName=(char*)come_increment_ref_count(((char*)(right_value96=string_clone(self->mAsmName))));
                                        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                                        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value96, right_value96 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    __result78__ = __result_obj__ = result_90;
                                    if(result_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_90, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result78__;
                                    if(result_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_90, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional137=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional137) {
                                                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional144;
struct list$1sTypeph* __result64__;
void* right_value68;
void* right_value69;
struct list$1sTypeph* result_93;
struct list_item$1sTypeph* it_94;
_Bool _while_condtional16;
void* right_value73;
struct list$1sTypeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value68 = (void*)0;
right_value69 = (void*)0;
memset(&result_93, 0, sizeof(struct list$1sTypeph*));
memset(&it_94, 0, sizeof(struct list_item$1sTypeph*));
right_value73 = (void*)0;
                                            if(_if_conditional144=self==((void*)0),                                            _if_conditional144) {
                                                __result64__ = __result_obj__ = ((void*)0);
                                                return __result64__;
                                            }
                                            result_93=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value69=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value68=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                                            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value68, right_value68 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value69);
                                            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value69, right_value69 = (void*)0;
                                            __freed_obj__ = 0;
                                            it_94=self->head;
                                            while(_while_condtional16=it_94!=((void*)0),                                            _while_condtional16) {
                                                list$1sTypeph_add(result_93,(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(it_94->item)))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                                                if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value73, right_value73 = (void*)0;
                                                __freed_obj__ = 0;
                                                it_94=it_94->next;
                                            }
                                            __result67__ = __result_obj__ = result_93;
                                            if(result_93 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result67__;
                                            if(result_93 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_93, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result65__ = __result_obj__ = self;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result65__;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional145;
void* right_value70;
struct list_item$1sTypeph* litem_95;
struct sType* __dec_obj26;
_Bool _if_conditional146;
void* right_value71;
struct list_item$1sTypeph* litem_96;
struct sType* __dec_obj27;
void* right_value72;
struct list_item$1sTypeph* litem_97;
struct sType* __dec_obj28;
struct list$1sTypeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value70 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1sTypeph*));
right_value71 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1sTypeph*));
right_value72 = (void*)0;
memset(&litem_97, 0, sizeof(struct list_item$1sTypeph*));
                                                    if(_if_conditional145=self->len==0,                                                    _if_conditional145) {
                                                        litem_95=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value70=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                                                        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value70, right_value70 = (void*)0;
                                                        __freed_obj__ = 0;
                                                        litem_95->prev=((void*)0);
                                                        litem_95->next=((void*)0);
                                                        __dec_obj26=litem_95->item;
                                                        litem_95->item=(struct sType*)come_increment_ref_count(item);
                                                        if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        self->tail=litem_95;
                                                        self->head=litem_95;
                                                    }
                                                    else {
                                                        if(_if_conditional146=self->len==1,                                                        _if_conditional146) {
                                                            litem_96=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value71=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222, "struct list_item$1sTypeph"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                                                            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value71, right_value71 = (void*)0;
                                                            __freed_obj__ = 0;
                                                            litem_96->prev=self->head;
                                                            litem_96->next=((void*)0);
                                                            __dec_obj27=litem_96->item;
                                                            litem_96->item=(struct sType*)come_increment_ref_count(item);
                                                            if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->tail=litem_96;
                                                            self->head->next=litem_96;
                                                        }
                                                        else {
                                                            litem_97=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value72=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 232, "struct list_item$1sTypeph"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                                                            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value72, right_value72 = (void*)0;
                                                            __freed_obj__ = 0;
                                                            litem_97->prev=self->tail;
                                                            litem_97->next=((void*)0);
                                                            __dec_obj28=litem_97->item;
                                                            litem_97->item=(struct sType*)come_increment_ref_count(item);
                                                            if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->tail->next=litem_97;
                                                            self->tail=litem_97;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result66__ = __result_obj__ = self;
                                                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    return __result66__;
                                                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional148;
struct list$1sNodeph* __result68__;
void* right_value75;
void* right_value76;
struct list$1sNodeph* result_98;
struct list_item$1sNodeph* it_99;
_Bool _while_condtional17;
void* right_value80;
struct list$1sNodeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value75 = (void*)0;
right_value76 = (void*)0;
memset(&result_98, 0, sizeof(struct list$1sNodeph*));
memset(&it_99, 0, sizeof(struct list_item$1sNodeph*));
right_value80 = (void*)0;
                                            if(_if_conditional148=self==((void*)0),                                            _if_conditional148) {
                                                __result68__ = __result_obj__ = ((void*)0);
                                                return __result68__;
                                            }
                                            result_98=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value76=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value75=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                                            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value75, right_value75 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value76);
                                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value76, right_value76 = (void*)0;
                                            __freed_obj__ = 0;
                                            it_99=self->head;
                                            while(_while_condtional17=it_99!=((void*)0),                                            _while_condtional17) {
                                                list$1sNodeph_add(result_98,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value80=sNode_clone(it_99->item)))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                                                if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, ((struct sNode*)right_value80)->finalize, ((struct sNode*)right_value80)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value80, right_value80 = (void*)0;
                                                __freed_obj__ = 0;
                                                it_99=it_99->next;
                                            }
                                            __result71__ = __result_obj__ = result_98;
                                            if(result_98 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_98, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result71__;
                                            if(result_98 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_98, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result69__ = __result_obj__ = self;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result69__;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional149;
void* right_value77;
struct list_item$1sNodeph* litem_100;
struct sNode* __dec_obj30;
_Bool _if_conditional150;
void* right_value78;
struct list_item$1sNodeph* litem_101;
struct sNode* __dec_obj31;
void* right_value79;
struct list_item$1sNodeph* litem_102;
struct sNode* __dec_obj32;
struct list$1sNodeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value77 = (void*)0;
memset(&litem_100, 0, sizeof(struct list_item$1sNodeph*));
right_value78 = (void*)0;
memset(&litem_101, 0, sizeof(struct list_item$1sNodeph*));
right_value79 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1sNodeph*));
                                                    if(_if_conditional149=self->len==0,                                                    _if_conditional149) {
                                                        litem_100=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value77=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                                                        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value77, right_value77 = (void*)0;
                                                        __freed_obj__ = 0;
                                                        litem_100->prev=((void*)0);
                                                        litem_100->next=((void*)0);
                                                        __dec_obj30=litem_100->item;
                                                        litem_100->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0); }
                                                        self->tail=litem_100;
                                                        self->head=litem_100;
                                                    }
                                                    else {
                                                        if(_if_conditional150=self->len==1,                                                        _if_conditional150) {
                                                            litem_101=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value78=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222, "struct list_item$1sNodeph"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                                                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value78, right_value78 = (void*)0;
                                                            __freed_obj__ = 0;
                                                            litem_101->prev=self->head;
                                                            litem_101->next=((void*)0);
                                                            __dec_obj31=litem_101->item;
                                                            litem_101->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0); }
                                                            self->tail=litem_101;
                                                            self->head->next=litem_101;
                                                        }
                                                        else {
                                                            litem_102=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value79=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 232, "struct list_item$1sNodeph"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                                                            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value79, right_value79 = (void*)0;
                                                            __freed_obj__ = 0;
                                                            litem_102->prev=self->tail;
                                                            litem_102->next=((void*)0);
                                                            __dec_obj32=litem_102->item;
                                                            litem_102->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0); }
                                                            self->tail->next=litem_102;
                                                            self->tail=litem_102;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result70__ = __result_obj__ = self;
                                                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                                    return __result70__;
                                                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional154;
struct list$1charph* __result72__;
void* right_value83;
void* right_value84;
struct list$1charph* result_103;
struct list_item$1charph* it_104;
_Bool _while_condtional18;
void* right_value88;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_103, 0, sizeof(struct list$1charph*));
memset(&it_104, 0, sizeof(struct list_item$1charph*));
right_value88 = (void*)0;
                                            if(_if_conditional154=self==((void*)0),                                            _if_conditional154) {
                                                __result72__ = __result_obj__ = ((void*)0);
                                                return __result72__;
                                            }
                                            result_103=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value84=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value83=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                                            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value83, right_value83 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value84);
                                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value84, right_value84 = (void*)0;
                                            __freed_obj__ = 0;
                                            it_104=self->head;
                                            while(_while_condtional18=it_104!=((void*)0),                                            _while_condtional18) {
                                                list$1charph_add(result_103,(char*)come_increment_ref_count(((char*)(right_value88=string_clone(it_104->item)))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                                                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value88, right_value88 = (void*)0;
                                                __freed_obj__ = 0;
                                                it_104=it_104->next;
                                            }
                                            __result75__ = __result_obj__ = result_103;
                                            if(result_103 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_103, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result75__;
                                            if(result_103 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_103, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result73__ = __result_obj__ = self;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result73__;
                                                if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional155;
void* right_value85;
struct list_item$1charph* litem_105;
char* __dec_obj35;
_Bool _if_conditional156;
void* right_value86;
struct list_item$1charph* litem_106;
char* __dec_obj36;
void* right_value87;
struct list_item$1charph* litem_107;
char* __dec_obj37;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value85 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1charph*));
right_value86 = (void*)0;
memset(&litem_106, 0, sizeof(struct list_item$1charph*));
right_value87 = (void*)0;
memset(&litem_107, 0, sizeof(struct list_item$1charph*));
                                                    if(_if_conditional155=self->len==0,                                                    _if_conditional155) {
                                                        litem_105=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value85=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                                                        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value85, right_value85 = (void*)0;
                                                        __freed_obj__ = 0;
                                                        litem_105->prev=((void*)0);
                                                        litem_105->next=((void*)0);
                                                        __dec_obj35=litem_105->item;
                                                        litem_105->item=(char*)come_increment_ref_count(item);
                                                        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                                                        self->tail=litem_105;
                                                        self->head=litem_105;
                                                    }
                                                    else {
                                                        if(_if_conditional156=self->len==1,                                                        _if_conditional156) {
                                                            litem_106=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value86=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222, "struct list_item$1charph"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                                                            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value86, right_value86 = (void*)0;
                                                            __freed_obj__ = 0;
                                                            litem_106->prev=self->head;
                                                            litem_106->next=((void*)0);
                                                            __dec_obj36=litem_106->item;
                                                            litem_106->item=(char*)come_increment_ref_count(item);
                                                            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                                                            self->tail=litem_106;
                                                            self->head->next=litem_106;
                                                        }
                                                        else {
                                                            litem_107=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value87=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 232, "struct list_item$1charph"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                                                            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value87, right_value87 = (void*)0;
                                                            __freed_obj__ = 0;
                                                            litem_107->prev=self->tail;
                                                            litem_107->next=((void*)0);
                                                            __dec_obj37=litem_107->item;
                                                            litem_107->item=(char*)come_increment_ref_count(item);
                                                            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                                                            self->tail->next=litem_107;
                                                            self->tail=litem_107;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result74__ = __result_obj__ = self;
                                                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                                    return __result74__;
                                                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional158;
struct tuple1$1sTypeph* __result76__;
void* right_value90;
struct tuple1$1sTypeph* result_108;
_Bool _if_conditional159;
void* right_value91;
struct sType* __dec_obj39;
struct tuple1$1sTypeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value90 = (void*)0;
memset(&result_108, 0, sizeof(struct tuple1$1sTypeph*));
right_value91 = (void*)0;
                                            if(_if_conditional158=self==(void*)0,                                            _if_conditional158) {
                                                __result76__ = __result_obj__ = (void*)0;
                                                return __result76__;
                                            }
                                            result_108=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                                            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value90, right_value90 = (void*)0;
                                            __freed_obj__ = 0;
                                            if(_if_conditional159=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional159) {
                                                __dec_obj39=result_108->v1;
                                                result_108->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(self->v1))));
                                                if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                                                if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value91, right_value91 = (void*)0;
                                                __freed_obj__ = 0;
                                            }
                                            __result77__ = __result_obj__ = result_108;
                                            if(result_108 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_108, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result77__;
                                            if(result_108 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_108, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
void* right_value106;
struct list_item$1tuple2$2charphsNodephph* litem_113;
struct tuple2$2charphsNodeph* __dec_obj49;
_Bool _if_conditional203;
void* right_value107;
struct list_item$1tuple2$2charphsNodephph* litem_114;
struct tuple2$2charphsNodeph* __dec_obj50;
void* right_value108;
struct list_item$1tuple2$2charphsNodephph* litem_115;
struct tuple2$2charphsNodeph* __dec_obj51;
struct list$1tuple2$2charphsNodephph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value106 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value107 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value108 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                    if(_if_conditional202=self->len==0,                    _if_conditional202) {
                        litem_113=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value106=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 282, "struct list_item$1tuple2$2charphsNodephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value106, right_value106 = (void*)0;
                        __freed_obj__ = 0;
                        litem_113->prev=((void*)0);
                        litem_113->next=((void*)0);
                        __dec_obj49=litem_113->item;
                        litem_113->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj49) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_113;
                        self->head=litem_113;
                    }
                    else {
                        if(_if_conditional203=self->len==1,                        _if_conditional203) {
                            litem_114=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value107=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 292, "struct list_item$1tuple2$2charphsNodephph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value107, right_value107 = (void*)0;
                            __freed_obj__ = 0;
                            litem_114->prev=self->head;
                            litem_114->next=((void*)0);
                            __dec_obj50=litem_114->item;
                            litem_114->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj50) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_114;
                            self->head->next=litem_114;
                        }
                        else {
                            litem_115=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value108=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 302, "struct list_item$1tuple2$2charphsNodephph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value108, right_value108 = (void*)0;
                            __freed_obj__ = 0;
                            litem_115->prev=self->tail;
                            litem_115->next=((void*)0);
                            __dec_obj51=litem_115->item;
                            litem_115->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj51) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail->next=litem_115;
                            self->tail=litem_115;
                        }
                    }
                    self->len++;
                    __result82__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result82__;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj52;
struct sNode* __dec_obj53;
struct tuple2$2charphsNodeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj52=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                    __dec_obj53=self->v2;
                    self->v2=(struct sNode*)come_increment_ref_count(v2);
                    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0); }
                    __result83__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
                    return __result83__;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional218;
char* type_name_117;
_Bool _if_conditional219;
void* right_value121;
char* __dec_obj58;
void* right_value122;
char* __dec_obj59;
void* right_value123;
void* right_value124;
void* right_value125;
void* right_value126;
struct list$1tuple2$2charphsNodephph* elements_118;
_Bool _while_condtional20;
void* right_value127;
char* element_name_119;
_Bool _if_conditional220;
_Bool no_comma_120;
void* right_value128;
struct sNode* element_value_121;
void* right_value129;
void* right_value130;
void* right_value131;
void* right_value132;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value133;
void* right_value134;
struct sNode* _inf_value2;
struct sEnumNode* _inf_obj_value2;
void* right_value140;
struct sNode* __result89__;
void* right_value141;
struct sNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_name_117, 0, sizeof(char*));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
memset(&elements_118, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value127 = (void*)0;
memset(&element_name_119, 0, sizeof(char*));
memset(&no_comma_120, 0, sizeof(_Bool));
right_value128 = (void*)0;
memset(&element_value_121, 0, sizeof(struct sNode*));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
    if(_if_conditional218=charp_operator_equals(buf,"enum"),    _if_conditional218) {
        type_name_117=((void*)0);
        if(_if_conditional219=*info->p==123,        _if_conditional219) {
            __dec_obj58=type_name_117;
            type_name_117=(char*)come_increment_ref_count(((char*)(right_value121=__builtin_string(""))));
            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
            if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value121, right_value121 = (void*)0;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj59=type_name_117;
            type_name_117=(char*)come_increment_ref_count(((char*)(right_value122=parse_word(info))));
            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
            if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value122, right_value122 = (void*)0;
            __freed_obj__ = 0;
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_117),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value124=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value123=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 193, "struct sClass")))),type_name_117,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value123, right_value123 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value124);
            if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value124, right_value124 = (void*)0;
            __freed_obj__ = 0;
        }
        expected_next_character(123,info);
        elements_118=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value126=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value125=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 198, "struct list$1tuple2$2charphsNodephph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value125, right_value125 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value126);
        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value126, right_value126 = (void*)0;
        __freed_obj__ = 0;
        while(_while_condtional20=(_Bool)1,        _while_condtional20) {
            parse_sharp_v5(info);
            element_name_119=(char*)come_increment_ref_count(((char*)(right_value127=parse_word(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value127, right_value127 = (void*)0;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            if(_if_conditional220=*info->p==61,            _if_conditional220) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_120=info->no_comma;
                info->no_comma=(_Bool)1;
                element_value_121=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value128, right_value128 = (void*)0;
                __freed_obj__ = 0;
                info->no_comma=no_comma_120;
                list$1tuple2$2charphsNodephph_push_back(elements_118,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value130=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value129=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 215, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_119),(struct sNode*)come_increment_ref_count(element_value_121))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value129, right_value129 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value130, right_value130 = (void*)0;
                __freed_obj__ = 0;
                if(element_value_121 && !__freed_obj__) { element_value_121 = come_decrement_ref_count(element_value_121, ((struct sNode*)element_value_121)->finalize, ((struct sNode*)element_value_121)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                list$1tuple2$2charphsNodephph_push_back(elements_118,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value132=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value131=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 218, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_119),((void*)0))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value131, right_value131 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
                if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value132, right_value132 = (void*)0;
                __freed_obj__ = 0;
            }
            parse_sharp_v5(info);
            if(_if_conditional221=*info->p==44,            _if_conditional221) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(_if_conditional222=*info->p==125,            _if_conditional222) {
                info->p++;
                skip_spaces_and_lf(info);
                if(element_name_119 && !__freed_obj__) { element_name_119 = come_decrement_ref_count(element_name_119, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(element_name_119 && !__freed_obj__) { element_name_119 = come_decrement_ref_count(element_name_119, (void*)0, (void*)0, 0, 0, 0); }
        }
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 235, "struct sNode");
        _inf_obj_value2=come_increment_ref_count(((struct sEnumNode*)(right_value134=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value133=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 235, "struct sEnumNode")))),(char*)come_increment_ref_count(type_name_117),elements_118,(_Bool)1,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sEnumNode_finalize;
        _inf_value2->clone=(void*)sEnumNode_clone;
        _inf_value2->compile=(void*)sEnumNode_compile;
        _inf_value2->sline=(void*)sEnumNode_sline;
        _inf_value2->sname=(void*)sEnumNode_sname;
        _inf_value2->terminated=(void*)sEnumNode_terminated;
        _inf_value2->kind=(void*)sEnumNode_kind;
        __result89__ = __result_obj__ = ((struct sNode*)(right_value140=_inf_value2));
        if(type_name_117 && !__freed_obj__) { type_name_117 = come_decrement_ref_count(type_name_117, (void*)0, (void*)0, 0, 0, 0); }
        if(elements_118 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_118, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value133, right_value133 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value134, right_value134 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value140, right_value140 = (void*)0;
        __freed_obj__ = 0;
        return __result89__;
        if(type_name_117 && !__freed_obj__) { type_name_117 = come_decrement_ref_count(type_name_117, (void*)0, (void*)0, 0, 0, 0); }
        if(elements_118 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result90__ = __result_obj__ = ((struct sNode*)(right_value141=top_level_v95(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value141, right_value141 = (void*)0;
    __freed_obj__ = 0;
    return __result90__;
}

static void sEnumNode_finalize(struct sEnumNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional223=self!=((void*)0)&&self->mTypeName!=((void*)0),            _if_conditional223) {
                if(self->mTypeName && !__freed_obj__) { self->mTypeName = come_decrement_ref_count(self->mTypeName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional224=self!=((void*)0)&&self->mElements!=((void*)0),            _if_conditional224) {
                if(self->mElements && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self->mElements, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional225=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional225) {
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional226=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional226) {
                if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional227;
struct sEnumNode* __result87__;
void* right_value135;
struct sEnumNode* result_122;
_Bool _if_conditional228;
void* right_value136;
char* __dec_obj60;
_Bool _if_conditional229;
void* right_value137;
struct list$1tuple2$2charphsNodephph* __dec_obj61;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value138;
char* __dec_obj62;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value139;
char* __dec_obj63;
struct sEnumNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value135 = (void*)0;
memset(&result_122, 0, sizeof(struct sEnumNode*));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
            if(_if_conditional227=self==(void*)0,            _if_conditional227) {
                __result87__ = __result_obj__ = (void*)0;
                return __result87__;
            }
            result_122=(struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value135=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "sEnumNode_clone", 3, "struct sEnumNode"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value135, right_value135 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional228=self!=((void*)0)&&self->mTypeName!=((void*)0),            _if_conditional228) {
                __dec_obj60=result_122->mTypeName;
                result_122->mTypeName=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(self->mTypeName))));
                if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value136, right_value136 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional229=self!=((void*)0)&&self->mElements!=((void*)0),            _if_conditional229) {
                __dec_obj61=result_122->mElements;
                result_122->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value137=list$1tuple2$2charphsNodephphp_clone(self->mElements))));
                if(__dec_obj61) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value137, right_value137 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional230=self!=((void*)0),            _if_conditional230) {
                result_122->sline=self->sline;
            }
            if(_if_conditional231=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional231) {
                __dec_obj62=result_122->sname;
                result_122->sname=(char*)come_increment_ref_count(((char*)(right_value138=string_clone(self->sname))));
                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value138, right_value138 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional232=self!=((void*)0),            _if_conditional232) {
                result_122->mOutput=self->mOutput;
            }
            if(_if_conditional233=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional233) {
                __dec_obj63=result_122->mDeclareSName;
                result_122->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value139=string_clone(self->mDeclareSName))));
                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value139, right_value139 = (void*)0;
                __freed_obj__ = 0;
            }
            __result88__ = __result_obj__ = result_122;
            if(result_122 && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,result_122, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result88__;
            if(result_122 && !__freed_obj__) { come_call_finalizer(sEnumNode_finalize,result_122, (void*)0, (void*)0, 0, 0, 0, 0); }
}

