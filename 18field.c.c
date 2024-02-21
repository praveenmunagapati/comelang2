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
struct sStoreFieldNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
    int sline;
    char* sname;
};
struct sNullCheckNode
{
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
    int sline;
    char* sname;
};
struct sRangeCheckNode
{
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
    int sline;
    char* sname;
};
struct sLoadFieldNode
{
    struct sNode* mLeft;
    char* mName;
    int sline;
    char* sname;
};
struct sStoreArrayNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLoadArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLoadRangeArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
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

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated();

char* sStoreFieldNode_kind();

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info);

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info);

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated();

char* sNullCheckNode_kind();

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info);

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info);

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);

_Bool sRangeCheckNode_terminated();

char* sRangeCheckNode_kind();

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info);

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated();

char* sLoadFieldNode_kind();

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info);

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info);

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sStoreArrayNode_terminated();

char* sStoreArrayNode_kind();

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info);

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info);

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadArrayNode_terminated();

char* sLoadArrayNode_kind();

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info);

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadRangeArrayNode_terminated();

char* sLoadRangeArrayNode_kind();

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info);

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value44;
struct sType* generics_type_29;
_Bool _if_conditional91;
struct sType* __dec_obj28;
struct sClass* klass_30;
char* class_name_31;
char* fun_name2_32;
struct sFun* operator_fun_33;
_Bool _if_conditional92;
_Bool _if_conditional93;
void* right_value45;
char* none_generics_name_34;
void* right_value46;
struct sType* obj_type_35;
void* right_value47;
char* __dec_obj29;
void* right_value48;
char* fun_name3_36;
void* right_value49;
struct sGenericsFun* generics_fun_39;
_Bool _if_conditional107;
void* right_value50;
_Bool _if_conditional108;
_Bool __result30__;
void* right_value51;
void* right_value52;
char* __dec_obj30;
int i_43;
_Bool _for_condtionalA1;
void* right_value53;
char* new_fun_name_44;
void* right_value54;
_Bool _if_conditional128;
void* right_value55;
char* __dec_obj31;
_Bool _if_conditional129;
void* right_value56;
_Bool result_45;
_Bool _if_conditional130;
void* right_value57;
struct CVALUE* come_value_46;
char* left_value2_47;
void* right_value58;
void* right_value59;
void* right_value60;
void* right_value61;
_Bool _if_conditional135;
void* right_value62;
void* right_value63;
char* __dec_obj32;
void* right_value64;
char* __dec_obj33;
char* middle_value2_51;
void* right_value65;
void* right_value66;
void* right_value67;
void* right_value68;
_Bool _if_conditional136;
void* right_value69;
void* right_value70;
char* __dec_obj34;
void* right_value71;
char* __dec_obj35;
char* right_value2_52;
void* right_value72;
void* right_value73;
void* right_value74;
void* right_value75;
_Bool _if_conditional137;
void* right_value76;
void* right_value77;
char* __dec_obj36;
void* right_value78;
char* __dec_obj37;
void* right_value79;
void* right_value80;
void* right_value81;
void* right_value82;
void* right_value83;
char* __dec_obj38;
void* right_value84;
struct sType* result_type1_53;
void* right_value85;
struct sType* result_type2_54;
void* right_value86;
struct sType* __dec_obj39;
_Bool _if_conditional138;
void* right_value87;
char* __dec_obj40;
void* right_value88;
char* __dec_obj41;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
memset(&generics_type_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&class_name_31, 0, sizeof(char*));
memset(&fun_name2_32, 0, sizeof(char*));
memset(&operator_fun_33, 0, sizeof(struct sFun*));
right_value45 = (void*)0;
memset(&none_generics_name_34, 0, sizeof(char*));
right_value46 = (void*)0;
memset(&obj_type_35, 0, sizeof(struct sType*));
right_value47 = (void*)0;
right_value48 = (void*)0;
memset(&fun_name3_36, 0, sizeof(char*));
right_value49 = (void*)0;
memset(&generics_fun_39, 0, sizeof(struct sGenericsFun*));
right_value50 = (void*)0;
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&i_43, 0, sizeof(int));
right_value53 = (void*)0;
memset(&new_fun_name_44, 0, sizeof(char*));
right_value54 = (void*)0;
right_value55 = (void*)0;
right_value56 = (void*)0;
memset(&result_45, 0, sizeof(_Bool));
right_value57 = (void*)0;
memset(&come_value_46, 0, sizeof(struct CVALUE*));
memset(&left_value2_47, 0, sizeof(char*));
right_value58 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&middle_value2_51, 0, sizeof(char*));
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&right_value2_52, 0, sizeof(char*));
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_type1_53, 0, sizeof(struct sType*));
right_value85 = (void*)0;
memset(&result_type2_54, 0, sizeof(struct sType*));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional91=generics_type_29->mNoSolvedGenericsType->v1,    _if_conditional91) {
        __dec_obj28=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(generics_type_29->mNoSolvedGenericsType->v1);
        come_call_finalizer2(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    operator_fun_33=((void*)0);
    if(_if_conditional92=type->mNoSolvedGenericsType->v1,    _if_conditional92) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional93=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional93) {
        none_generics_name_34=(char*)come_increment_ref_count(((char*)(right_value45=get_none_generics_name(type->mClass->mName))));
        if(right_value45) { right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj29=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value47) { right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        if(right_value48) { right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        generics_fun_39=((struct sGenericsFun*)(right_value49=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0))));
        come_call_finalizer2(sGenericsFun_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional107=generics_fun_39,        _if_conditional107) {
            if(_if_conditional108=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(fun_name2_32)))),generics_fun_39,obj_type_35,info),            (right_value50) ? right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__):0,
            _if_conditional108) {
                __result30__ = (_Bool)0;
                if(none_generics_name_34) { none_generics_name_34 = come_decrement_ref_count2(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(fun_name3_36) { fun_name3_36 = come_decrement_ref_count2(fun_name3_36, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(fun_name2_32) { fun_name2_32 = come_decrement_ref_count2(fun_name2_32, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                return __result30__;
            }
        }
        operator_fun_33=((struct sFun*)(right_value51=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_32)));
        come_call_finalizer2(sFun_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(none_generics_name_34) { none_generics_name_34 = come_decrement_ref_count2(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(fun_name3_36) { fun_name3_36 = come_decrement_ref_count2(fun_name3_36, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    }
    else {
        __dec_obj30=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value52=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value52) { right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        for(
        i_43=128-1 ,        0;        _for_condtionalA1=        i_43>=1 ,        _for_condtionalA1;        i_43-- ,        0        ){
            new_fun_name_44=(char*)come_increment_ref_count(((char*)(right_value53=xsprintf("%s_v%d",fun_name2_32,i_43))));
            if(right_value53) { right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            operator_fun_33=((struct sFun*)(right_value54=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_44)));
            come_call_finalizer2(sFun_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional128=operator_fun_33,            _if_conditional128) {
                __dec_obj31=fun_name2_32;
                fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(new_fun_name_44))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value55) { right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(new_fun_name_44) { new_fun_name_44 = come_decrement_ref_count2(new_fun_name_44, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
            }
            if(new_fun_name_44) { new_fun_name_44 = come_decrement_ref_count2(new_fun_name_44, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        if(_if_conditional129=operator_fun_33==((void*)0),        _if_conditional129) {
            operator_fun_33=((struct sFun*)(right_value56=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_32)));
            come_call_finalizer2(sFun_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    result_45=(_Bool)0;
    if(_if_conditional130=operator_fun_33,    _if_conditional130) {
        come_value_46=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value57=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value59=xsprintf("\%s is assigned to",((char*)(right_value58=string_to_string(fun_name2_32)))))),((struct sType*)(right_value60=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0))),left_value->type,left_value,(_Bool)0,info);
        if(right_value58) { right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value59) { right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional135=((struct sType*)(right_value61=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0)))->mHeap&&left_value->type->mHeap,        come_call_finalizer2(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
        _if_conditional135) {
            std_move(((struct sType*)(right_value62=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0))),left_value->type,left_value,info);
            come_call_finalizer2(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj32=left_value2_47;
            left_value2_47=(char*)come_increment_ref_count(((char*)(right_value63=xsprintf("%s",left_value->c_value))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value63) { right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        else {
            __dec_obj33=left_value2_47;
            left_value2_47=(char*)come_increment_ref_count(((char*)(right_value64=string_clone(left_value->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value64) { right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        check_assign_type(((char*)(right_value66=xsprintf("\%s is assigned to",((char*)(right_value65=string_to_string(fun_name2_32)))))),((struct sType*)(right_value67=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1))),middle_value->type,middle_value,(_Bool)0,info);
        if(right_value65) { right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value66) { right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional136=((struct sType*)(right_value68=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1)))->mHeap&&middle_value->type->mHeap,        come_call_finalizer2(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
        _if_conditional136) {
            std_move(((struct sType*)(right_value69=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1))),middle_value->type,middle_value,info);
            come_call_finalizer2(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj34=middle_value2_51;
            middle_value2_51=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("%s",middle_value->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value70) { right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        else {
            __dec_obj35=middle_value2_51;
            middle_value2_51=(char*)come_increment_ref_count(((char*)(right_value71=string_clone(middle_value->c_value))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value71) { right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        check_assign_type(((char*)(right_value73=xsprintf("\%s is assigned to",((char*)(right_value72=string_to_string(fun_name2_32)))))),((struct sType*)(right_value74=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2))),right_value->type,right_value,(_Bool)0,info);
        if(right_value72) { right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value73) { right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional137=((struct sType*)(right_value75=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2)))->mHeap&&right_value->type->mHeap,        come_call_finalizer2(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
        _if_conditional137) {
            std_move(((struct sType*)(right_value76=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2))),right_value->type,right_value,info);
            come_call_finalizer2(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj36=right_value2_52;
            right_value2_52=(char*)come_increment_ref_count(((char*)(right_value77=xsprintf("%s",right_value->c_value))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value77) { right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        else {
            __dec_obj37=right_value2_52;
            right_value2_52=(char*)come_increment_ref_count(((char*)(right_value78=string_clone(right_value->c_value))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value78) { right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        __dec_obj38=come_value_46->c_value;
        come_value_46->c_value=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value79=string_to_string(fun_name2_32))),((char*)(right_value80=string_to_string(left_value2_47))),((char*)(right_value81=string_to_string(middle_value2_51))),((char*)(right_value82=string_to_string(right_value2_52)))))));
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value79) { right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value82) { right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value83) { right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        result_type1_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(operator_fun_33->mResultType))));
        come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type2_54=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=solve_generics(result_type1_53,generics_type_29,info))));
        come_call_finalizer2(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj39=come_value_46->type;
        come_value_46->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(result_type2_54))));
        come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_46->var=((void*)0);
        if(_if_conditional138=result_type2_54->mHeap,        _if_conditional138) {
            __dec_obj40=come_value_46->c_value;
            come_value_46->c_value=(char*)come_increment_ref_count(((char*)(right_value87=append_object_to_right_values(come_value_46->c_value,(struct sType*)come_increment_ref_count(result_type2_54),info))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value87) { right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        __dec_obj41=come_value_46->c_value;
        come_value_46->c_value=(char*)come_increment_ref_count(((char*)(right_value88=append_stackframe(come_value_46->c_value,come_value_46->type,info))));
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value88) { right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        add_come_last_code(info,"%s;\n",come_value_46->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_46));
        result_45=(_Bool)1;
        come_call_finalizer2(CVALUE_finalize,come_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(left_value2_47) { left_value2_47 = come_decrement_ref_count2(left_value2_47, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        if(middle_value2_51) { middle_value2_51 = come_decrement_ref_count2(middle_value2_51, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        if(right_value2_52) { right_value2_52 = come_decrement_ref_count2(right_value2_52, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(sType_finalize,result_type1_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result38__ = result_45;
    come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(fun_name2_32) { fun_name2_32 = come_decrement_ref_count2(fun_name2_32, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    return __result38__;
    come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(fun_name2_32) { fun_name2_32 = come_decrement_ref_count2(fun_name2_32, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional5;
struct sType* __result7__;
void* right_value10;
struct sType* result_5;
_Bool _if_conditional22;
_Bool _if_conditional23;
void* right_value13;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional27;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value15;
char* __dec_obj9;
_Bool _if_conditional29;
void* right_value22;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional33;
void* right_value30;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value31;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional48;
void* right_value38;
struct list$1charph* __dec_obj22;
_Bool _if_conditional52;
void* right_value39;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value40;
struct sNode* __dec_obj24;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
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
void* right_value41;
struct sNode* __dec_obj25;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value42;
char* __dec_obj26;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value43;
char* __dec_obj27;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value13 = (void*)0;
right_value14 = (void*)0;
right_value15 = (void*)0;
right_value22 = (void*)0;
right_value30 = (void*)0;
right_value31 = (void*)0;
right_value38 = (void*)0;
right_value39 = (void*)0;
right_value40 = (void*)0;
right_value41 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value10=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        come_call_finalizer2(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional22=self!=((void*)0),        _if_conditional22) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional23) {
            __dec_obj7=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value13=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional27) {
            __dec_obj8=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional28) {
            __dec_obj9=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value15=string_clone(self->mGenericsName))));
            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value15) { right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional29) {
            __dec_obj13=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional33=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional33) {
            __dec_obj17=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional46=self!=((void*)0),        _if_conditional46) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional47=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional47) {
            __dec_obj18=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value31=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional48) {
            __dec_obj22=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional52) {
            __dec_obj23=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional53=self!=((void*)0),        _if_conditional53) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional54=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional54) {
            __dec_obj24=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=sNode_clone(self->mAlignas))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value40) { right_value40 = come_decrement_ref_count2(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional55=self!=((void*)0),        _if_conditional55) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional56=self!=((void*)0),        _if_conditional56) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mException=self->mException;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional78=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional78) {
            __dec_obj25=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(self->mSizeNum))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value41) { right_value41 = come_decrement_ref_count2(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional81=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional81) {
            __dec_obj26=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value42=string_clone(self->mOriginalTypeName))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value42) { right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional90=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional90) {
            __dec_obj27=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mAsmName))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value43) { right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        __result24__ = __result_obj__ = result_5;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result24__;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional6) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional8=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional8) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional9=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional9) {
                if(self->mGenericsName) { self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional10=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional10) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional12=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional12) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional14=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional14) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional17=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional17) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional18) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional19=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional19) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional20) {
                if(self->mOriginalTypeName) { self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional21=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional21) {
                if(self->mAsmName) { self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional7) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                    it_6=self->head;
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional11) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                    it_8=self->head;
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=it_8->next;
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional13) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                    it_10=self->head;
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=it_10->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
struct tuple1$1sTypeph* __result8__;
void* right_value11;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional26;
void* right_value12;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
right_value12 = (void*)0;
                if(_if_conditional24=self==(void*)0,                _if_conditional24) {
                    __result8__ = __result_obj__ = (void*)0;
                    return __result8__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value11=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional26) {
                    __dec_obj6=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result9__ = __result_obj__ = result_12;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result9__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional25) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
struct list$1sTypeph* __result10__;
void* right_value16;
void* right_value17;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value21;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
right_value17 = (void*)0;
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
right_value21 = (void*)0;
                if(_if_conditional30=self==((void*)0),                _if_conditional30) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(it_14->item)))));
                    come_call_finalizer2(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_14=it_14->next;
                }
                __result13__ = __result_obj__ = result_13;
                come_call_finalizer2(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result13__;
                come_call_finalizer2(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result11__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional31;
void* right_value18;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj10;
_Bool _if_conditional32;
void* right_value19;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj11;
void* right_value20;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj12;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value19 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
right_value20 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional31=self->len==0,                        _if_conditional31) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj10=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else {
                            if(_if_conditional32=self->len==1,                            _if_conditional32) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_16->prev=self->head;
                                litem_16->next=((void*)0);
                                __dec_obj11=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_16;
                                self->head->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_17->prev=self->tail;
                                litem_17->next=((void*)0);
                                __dec_obj12=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_17;
                                self->tail=litem_17;
                            }
                        }
                        self->len++;
                        __result12__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result12__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional34;
struct list$1sNodeph* __result14__;
void* right_value23;
void* right_value24;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value29;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value29 = (void*)0;
                if(_if_conditional34=self==((void*)0),                _if_conditional34) {
                    __result14__ = __result_obj__ = ((void*)0);
                    return __result14__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(it_19->item)))));
                    if(right_value29) { right_value29 = come_decrement_ref_count2(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_19=it_19->next;
                }
                __result19__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result19__;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result15__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result15__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional35;
void* right_value25;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj14;
_Bool _if_conditional36;
void* right_value26;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj15;
void* right_value27;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value26 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value27 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional35=self->len==0,                        _if_conditional35) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj14=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional36=self->len==1,                            _if_conditional36) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj15=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj16=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result16__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result16__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional37;
struct sNode* __result17__;
void* right_value28;
struct sNode* result_23;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct sNode* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value28 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        _if_conditional37) {
                            __result17__ = __result_obj__ = (void*)0;
                            return __result17__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value28) { right_value28 = come_decrement_ref_count2(right_value28, ((struct sNode*)right_value28)->finalize, ((struct sNode*)right_value28)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional38=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional38) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional39=self!=((void*)0),                        _if_conditional39) {
                            result_23->finalize=self->finalize;
                        }
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            result_23->clone=self->clone;
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            result_23->compile=self->compile;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            result_23->sline=self->sline;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_23->sname=self->sname;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_23->terminated=self->terminated;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_23->kind=self->kind;
                        }
                        __result18__ = __result_obj__ = result_23;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result18__;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional49;
struct list$1charph* __result20__;
void* right_value32;
void* right_value33;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value37;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
right_value33 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value37 = (void*)0;
                if(_if_conditional49=self==((void*)0),                _if_conditional49) {
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value37=string_clone(it_25->item)))));
                    if(right_value37) { right_value37 = come_decrement_ref_count2(right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    it_25=it_25->next;
                }
                __result23__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result23__;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional50;
void* right_value34;
struct list_item$1charph* litem_26;
char* __dec_obj19;
_Bool _if_conditional51;
void* right_value35;
struct list_item$1charph* litem_27;
char* __dec_obj20;
void* right_value36;
struct list_item$1charph* litem_28;
char* __dec_obj21;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value35 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value36 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional50=self->len==0,                        _if_conditional50) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj19=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional51=self->len==1,                            _if_conditional51) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj20=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj21=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result22__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
                        return __result22__;
                        if(item) { item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
        __result25__ = self->len;
        return __result25__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional7;
_Bool _if_conditional94;
_Bool _if_conditional95;
struct sGenericsFun* __result26__;
_Bool _if_conditional105;
_Bool _if_conditional106;
struct sGenericsFun* __result27__;
struct sGenericsFun* __result28__;
struct sGenericsFun* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
            hash_37=string_get_hash_key(((char*)key))%self->size;
            it_38=hash_37;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional94=self->item_existance[it_38],                _if_conditional94) {
                    if(_if_conditional95=string_equals(self->keys[it_38],key),                    _if_conditional95) {
                        __result26__ = __result_obj__ = self->items[it_38];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result26__;
                    }
                    it_38++;
                    if(_if_conditional105=it_38>=self->size,                    _if_conditional105) {
                        it_38=0;
                    }
                    else {
                        if(_if_conditional106=it_38==hash_37,                        _if_conditional106) {
                            __result27__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result27__;
                        }
                    }
                }
                else {
                    __result28__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result28__;
                }
            }
            __result29__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result29__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional96=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional96) {
                                come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional97=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional97) {
                                come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional98=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional98) {
                                if(self->mName) { self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
                            if(_if_conditional99=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional99) {
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional100=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional100) {
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional101=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional101) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional102) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional103=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional103) {
                                if(self->mBlock) { self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional104) {
                                if(self->mGenericsSName) { self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_40;
unsigned int hash_41;
unsigned int it_42;
_Bool _while_condtional8;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct sFun* __result31__;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct sFun* __result32__;
struct sFun* __result33__;
struct sFun* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_40, 0, sizeof(struct sFun*));
memset(&hash_41, 0, sizeof(unsigned int));
memset(&it_42, 0, sizeof(unsigned int));
            memset(&default_value_40,0,sizeof(struct sFun*));
            hash_41=string_get_hash_key(((char*)key))%self->size;
            it_42=hash_41;
            while(_while_condtional8=(_Bool)1,            _while_condtional8) {
                if(_if_conditional109=self->item_existance[it_42],                _if_conditional109) {
                    if(_if_conditional110=string_equals(self->keys[it_42],key),                    _if_conditional110) {
                        __result31__ = __result_obj__ = self->items[it_42];
                        come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result31__;
                    }
                    it_42++;
                    if(_if_conditional126=it_42>=self->size,                    _if_conditional126) {
                        it_42=0;
                    }
                    else {
                        if(_if_conditional127=it_42==hash_41,                        _if_conditional127) {
                            __result32__ = __result_obj__ = default_value_40;
                            come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result32__;
                        }
                    }
                }
                else {
                    __result33__ = __result_obj__ = default_value_40;
                    come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result33__;
                }
            }
            __result34__ = __result_obj__ = default_value_40;
            come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result34__;
            come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional111=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional111) {
                                if(self->mName) { self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
                            if(_if_conditional112=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional112) {
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional113=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional113) {
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional114=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional114) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional115=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional115) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional116=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional116) {
                                come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional117=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional117) {
                                come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional120=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional120) {
                                come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional121=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional121) {
                                come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional122=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional122) {
                                come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional123=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional123) {
                                come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional124=self!=((void*)0)&&self->mComeHeader!=((void*)0),                            _if_conditional124) {
                                if(self->mComeHeader) { self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
                            if(_if_conditional125=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional125) {
                                if(self->mDeclareSName) { self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional118=self!=((void*)0)&&self->mNodes!=((void*)0),                                    _if_conditional118) {
                                        come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional119=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional119) {
                                        come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional131;
_Bool _if_conditional132;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional131=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional131) {
                if(self->c_value) { self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional132=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional132) {
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional133;
struct list_item$1sTypeph* it_48;
int i_49;
_Bool _while_condtional9;
_Bool _if_conditional134;
struct sType* __result35__;
struct sType* default_value_50;
struct sType* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_49, 0, sizeof(int));
memset(&default_value_50, 0, sizeof(struct sType*));
            if(_if_conditional133=position<0,            _if_conditional133) {
                position+=self->len;
            }
            it_48=self->head;
            i_49=0;
            while(_while_condtional9=it_48!=((void*)0),            _while_condtional9) {
                if(_if_conditional134=position==i_49,                _if_conditional134) {
                    __result35__ = __result_obj__ = it_48->item;
                    return __result35__;
                }
                it_48=it_48->next;
                i_49++;
            }
            memset(&default_value_50,0,sizeof(struct sType*));
            __result36__ = __result_obj__ = default_value_50;
            come_call_finalizer2(sType_finalize,default_value_50, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result36__;
            come_call_finalizer2(sType_finalize,default_value_50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional139;
void* right_value89;
struct list_item$1CVALUEph* litem_55;
struct CVALUE* __dec_obj42;
_Bool _if_conditional141;
void* right_value90;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj43;
void* right_value91;
struct list_item$1CVALUEph* litem_57;
struct CVALUE* __dec_obj44;
struct list$1CVALUEph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1CVALUEph*));
right_value90 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
right_value91 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional139=self->len==0,            _if_conditional139) {
                litem_55=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value89=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 225, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_55->prev=((void*)0);
                litem_55->next=((void*)0);
                __dec_obj42=litem_55->item;
                litem_55->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_55;
                self->head=litem_55;
            }
            else {
                if(_if_conditional141=self->len==1,                _if_conditional141) {
                    litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value90=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 235, "struct list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_56->prev=self->head;
                    litem_56->next=((void*)0);
                    __dec_obj43=litem_56->item;
                    litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_56;
                    self->head->next=litem_56;
                }
                else {
                    litem_57=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value91=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 245, "struct list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_57->prev=self->tail;
                    litem_57->next=((void*)0);
                    __dec_obj44=litem_57->item;
                    litem_57->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_57;
                    self->tail=litem_57;
                }
            }
            self->len++;
            __result37__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result37__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional140=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional140) {
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value92;
char* __dec_obj45;
void* right_value93;
struct sNode* __dec_obj46;
void* right_value94;
struct sNode* __dec_obj47;
void* right_value95;
char* __dec_obj48;
struct sStoreFieldNode* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
    self->sline=info->sline;
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string(info->sname))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value92) { right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj46=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value93=sNode_clone(left))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value93) { right_value93 = come_decrement_ref_count2(right_value93, ((struct sNode*)right_value93)->finalize, ((struct sNode*)right_value93)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj47=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=sNode_clone(right))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value94) { right_value94 = come_decrement_ref_count2(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj48=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string(name))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value95) { right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __result39__ = __result_obj__ = self;
    come_call_finalizer2(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(name) { name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result39__;
    come_call_finalizer2(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(name) { name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
}

_Bool sStoreFieldNode_terminated(){
void* __result_obj__;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
    __result40__ = (_Bool)0;
    return __result40__;
}

char* sStoreFieldNode_kind(){
void* __result_obj__;
void* right_value96;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
    __result41__ = __result_obj__ = ((char*)(right_value96=__builtin_string("sStoreFieldNode")));
    if(right_value96) { right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result41__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_58;
struct sNode* right_59;
void* right_value97;
char* name_60;
_Bool _if_conditional146;
_Bool __result42__;
void* right_value98;
struct CVALUE* left_value_61;
_Bool _if_conditional147;
_Bool __result43__;
void* right_value99;
struct CVALUE* right_value_62;
struct sType* right_type_63;
struct sType* left_type_64;
void* right_value100;
struct sType* left_type2_65;
struct sClass* klass_66;
void* right_value101;
struct sType* field_type_72;
int index_73;
char* child_field_name_74;
void* right_value102;
_Bool _if_conditional158;
_Bool __result48__;
struct list$1tuple2$2charphsTypephph* o2_saved_75;
struct tuple2$2charphsTypeph* field_78;
_Bool _for_condtionalA2;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_81;
struct sType* field_type2_82;
_Bool _if_conditional163;
void* right_value103;
struct sType* __dec_obj49;
_Bool _if_conditional164;
struct list$1tuple2$2charphsTypephph* o2_saved_83;
struct tuple2$2charphsTypeph* field_84;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* field_name_85;
struct sType* field_type2_86;
struct sClass* klass2_87;
struct list$1tuple2$2charphsTypephph* o2_saved_88;
struct tuple2$2charphsTypeph* field2_89;
_Bool _for_condtionalA4;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* field_name2_90;
struct sType* field_type3_91;
_Bool _if_conditional165;
void* right_value104;
char* __dec_obj50;
void* right_value105;
struct sType* __dec_obj51;
_Bool _if_conditional166;
_Bool _if_conditional167;
void* right_value106;
struct sType* __dec_obj52;
_Bool _if_conditional168;
_Bool __result57__;
void* right_value107;
struct CVALUE* come_value_92;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool __result58__;
void* right_value108;
void* right_value109;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value110;
char* c_value_93;
void* right_value111;
char* __dec_obj53;
void* right_value112;
char* c_value_94;
void* right_value113;
char* __dec_obj54;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value114;
char* c_value_95;
void* right_value115;
char* __dec_obj55;
void* right_value116;
char* c_value_96;
void* right_value117;
char* __dec_obj56;
void* right_value118;
char* __dec_obj57;
_Bool __result59__;
int right_value_id_97;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value119;
char* c_value_98;
void* right_value120;
char* __dec_obj58;
void* right_value121;
char* c_value_99;
void* right_value122;
char* __dec_obj59;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value123;
char* c_value_100;
void* right_value124;
char* __dec_obj60;
void* right_value125;
char* c_value_101;
void* right_value126;
char* __dec_obj61;
_Bool __result60__;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value127;
char* __dec_obj62;
void* right_value128;
char* __dec_obj63;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value129;
char* __dec_obj64;
void* right_value130;
char* __dec_obj65;
_Bool __result61__;
void* right_value131;
struct sType* __dec_obj66;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_58, 0, sizeof(struct sNode*));
memset(&right_59, 0, sizeof(struct sNode*));
right_value97 = (void*)0;
memset(&name_60, 0, sizeof(char*));
right_value98 = (void*)0;
memset(&left_value_61, 0, sizeof(struct CVALUE*));
right_value99 = (void*)0;
memset(&right_value_62, 0, sizeof(struct CVALUE*));
memset(&right_type_63, 0, sizeof(struct sType*));
memset(&left_type_64, 0, sizeof(struct sType*));
right_value100 = (void*)0;
memset(&left_type2_65, 0, sizeof(struct sType*));
memset(&klass_66, 0, sizeof(struct sClass*));
right_value101 = (void*)0;
memset(&field_type_72, 0, sizeof(struct sType*));
memset(&index_73, 0, sizeof(int));
memset(&child_field_name_74, 0, sizeof(char*));
right_value102 = (void*)0;
memset(&o2_saved_75, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_78, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_81, 0, sizeof(char*));
memset(&field_type2_82, 0, sizeof(struct sType*));
memset(&field_name_81, 0, sizeof(char*));
memset(&field_type2_82, 0, sizeof(struct sType*));
right_value103 = (void*)0;
memset(&o2_saved_83, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_84, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_85, 0, sizeof(char*));
memset(&field_type2_86, 0, sizeof(struct sType*));
memset(&field_name_85, 0, sizeof(char*));
memset(&field_type2_86, 0, sizeof(struct sType*));
memset(&klass2_87, 0, sizeof(struct sClass*));
memset(&o2_saved_88, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_89, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_90, 0, sizeof(char*));
memset(&field_type3_91, 0, sizeof(struct sType*));
memset(&field_name2_90, 0, sizeof(char*));
memset(&field_type3_91, 0, sizeof(struct sType*));
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&come_value_92, 0, sizeof(struct CVALUE*));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&c_value_93, 0, sizeof(char*));
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&c_value_94, 0, sizeof(char*));
right_value113 = (void*)0;
right_value114 = (void*)0;
memset(&c_value_95, 0, sizeof(char*));
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&c_value_96, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&right_value_id_97, 0, sizeof(int));
right_value119 = (void*)0;
memset(&c_value_98, 0, sizeof(char*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&c_value_99, 0, sizeof(char*));
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&c_value_100, 0, sizeof(char*));
right_value124 = (void*)0;
right_value125 = (void*)0;
memset(&c_value_101, 0, sizeof(char*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
    left_58=self->mLeft;
    right_59=self->mRight;
    name_60=(char*)come_increment_ref_count(((char*)(right_value97=__builtin_string(self->mName))));
    if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(_if_conditional146=!node_compile(left_58,info),    _if_conditional146) {
        __result42__ = (_Bool)0;
        if(name_60) { name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        return __result42__;
    }
    left_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional147=!node_compile(right_59,info),    _if_conditional147) {
        __result43__ = (_Bool)0;
        if(name_60) { name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result43__;
    }
    right_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value99=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_type_63=right_value_62->type;
    left_type_64=left_value_61->type;
    left_type2_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=solve_generics(left_type_64,left_type_64,info))));
    come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    klass_66=left_type2_65->mClass;
    klass_66=((struct sClass*)(right_value101=map$2charphsClassphp_operator_load_element(info->classes,klass_66->mName)));
    come_call_finalizer2(sClass_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    field_type_72=((void*)0);
    index_73=0;
    child_field_name_74=((void*)0);
    klass_66=((struct sClass*)(right_value102=map$2charphsClassphp_operator_load_element(info->classes,klass_66->mName)));
    come_call_finalizer2(sClass_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional158=klass_66->mFields==((void*)0),    _if_conditional158) {
        err_msg(info,"%s fields are null",klass_66->mName);
        __result48__ = (_Bool)0;
        if(name_60) { name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(child_field_name_74) { child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        return __result48__;
    }
    for(
    o2_saved_75=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_66->mFields)),field_78=list$1tuple2$2charphsTypephph_begin((o2_saved_75)) ,    0;    _for_condtionalA2=    !list$1tuple2$2charphsTypephph_end((o2_saved_75)) ,    _for_condtionalA2;    field_78=list$1tuple2$2charphsTypephph_next((o2_saved_75)) ,    0    ){
        multiple_assign_var1=field_78;
        field_name_81=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_82=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional163=string_operator_equals(field_name_81,name_60),        _if_conditional163) {
            __dec_obj49=field_type_72;
            field_type_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_clone(field_type2_82))));
            come_call_finalizer2(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(field_name_81) { field_name_81 = come_decrement_ref_count2(field_name_81, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            come_call_finalizer2(sType_finalize,field_type2_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_73++;
        if(field_name_81) { field_name_81 = come_decrement_ref_count2(field_name_81, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(sType_finalize,field_type2_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(_if_conditional164=index_73==list$1tuple2$2charphsTypephph_length(klass_66->mFields),    _if_conditional164) {
        index_73=0;
        for(
        o2_saved_83=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_66->mFields)),field_84=list$1tuple2$2charphsTypephph_begin((o2_saved_83)) ,        0;        _for_condtionalA3=        !list$1tuple2$2charphsTypephph_end((o2_saved_83)) ,        _for_condtionalA3;        field_84=list$1tuple2$2charphsTypephph_next((o2_saved_83)) ,        0        ){
            multiple_assign_var2=field_84;
            field_name_85=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_86=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            klass2_87=field_type2_86->mClass;
            for(
            o2_saved_88=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_87->mFields)),field2_89=list$1tuple2$2charphsTypephph_begin((o2_saved_88)) ,            0;            _for_condtionalA4=            !list$1tuple2$2charphsTypephph_end((o2_saved_88)) ,            _for_condtionalA4;            field2_89=list$1tuple2$2charphsTypephph_next((o2_saved_88)) ,            0            ){
                multiple_assign_var3=field2_89;
                field_name2_90=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_91=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                if(_if_conditional165=string_operator_equals(field_name2_90,name_60),                _if_conditional165) {
                    __dec_obj50=child_field_name_74;
                    child_field_name_74=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string(field_name_85))));
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    __dec_obj51=field_type_72;
                    field_type_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_clone(field_type3_91))));
                    come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(field_name2_90) { field_name2_90 = come_decrement_ref_count2(field_name2_90, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    come_call_finalizer2(sType_finalize,field_type3_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
                if(field_name2_90) { field_name2_90 = come_decrement_ref_count2(field_name2_90, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(sType_finalize,field_type3_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(_if_conditional166=child_field_name_74,            _if_conditional166) {
                if(field_name_85) { field_name_85 = come_decrement_ref_count2(field_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(sType_finalize,field_type2_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(_if_conditional167=string_operator_equals(field_name_85,name_60),            _if_conditional167) {
                __dec_obj52=field_type_72;
                field_type_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(field_type2_86))));
                come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(field_name_85) { field_name_85 = come_decrement_ref_count2(field_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(sType_finalize,field_type2_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_73++;
            if(field_name_85) { field_name_85 = come_decrement_ref_count2(field_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            come_call_finalizer2(sType_finalize,field_type2_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(_if_conditional168=index_73==list$1tuple2$2charphsTypephph_length(klass_66->mFields),        _if_conditional168) {
            err_msg(info,"field not found(%s) in %s(1)",name_60,klass_66->mName);
            __result57__ = (_Bool)0;
            if(name_60) { name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(child_field_name_74) { child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            return __result57__;
        }
    }
    come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 232, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional169=field_type_72->mHeap&&!right_type_63->mHeap,    _if_conditional169) {
        if(_if_conditional170=string_operator_equals(right_type_63->mClass->mName,"void")&&right_type_63->mPointerNum==1,        _if_conditional170) {
        }
        else {
            if(_if_conditional171=!right_type_63->mDelegate&&!right_type_63->mShare&&!gComeGC,            _if_conditional171) {
                err_msg(info,"require right value as heap object(%s)",name_60);
                __result58__ = (_Bool)0;
                if(name_60) { name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(child_field_name_74) { child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result58__;
            }
        }
    }
    check_assign_type(((char*)(right_value109=xsprintf("\%s is assigned to",((char*)(right_value108=string_to_string(name_60)))))),field_type_72,right_type_63,right_value_62,(_Bool)0,info);
    if(right_value108) { right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value109) { right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(_if_conditional172=field_type_72->mHeap&&right_type_63->mHeap&&field_type_72->mPointerNum>0&&right_type_63->mPointerNum>0,    _if_conditional172) {
        if(_if_conditional173=left_value_61->type->mPointerNum==1,        _if_conditional173) {
            if(_if_conditional174=child_field_name_74,            _if_conditional174) {
                c_value_93=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("%s->%s.%s",left_value_61->c_value,child_field_name_74,name_60))));
                if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                decrement_ref_count_object(field_type_72,c_value_93,info,(_Bool)0);
                std_move(field_type_72,right_type_63,right_value_62,info);
                __dec_obj53=come_value_92->c_value;
                come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("%s->%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(c_value_93) { c_value_93 = come_decrement_ref_count2(c_value_93, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            else {
                c_value_94=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("%s->%s",left_value_61->c_value,name_60))));
                if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                decrement_ref_count_object(field_type_72,c_value_94,info,(_Bool)0);
                std_move(field_type_72,right_type_63,right_value_62,info);
                __dec_obj54=come_value_92->c_value;
                come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("%s->%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(c_value_94) { c_value_94 = come_decrement_ref_count2(c_value_94, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
        }
        else {
            if(_if_conditional175=left_value_61->type->mPointerNum==0,            _if_conditional175) {
                if(_if_conditional176=child_field_name_74,                _if_conditional176) {
                    c_value_95=(char*)come_increment_ref_count(((char*)(right_value114=xsprintf("%s.%s.%s",left_value_61->c_value,child_field_name_74,name_60))));
                    if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    decrement_ref_count_object(field_type_72,c_value_95,info,(_Bool)0);
                    std_move(field_type_72,right_type_63,right_value_62,info);
                    __dec_obj55=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("%s.%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    if(c_value_95) { c_value_95 = come_decrement_ref_count2(c_value_95, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                else {
                    c_value_96=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("%s.%s",left_value_61->c_value,name_60))));
                    if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    decrement_ref_count_object(field_type_72,c_value_96,info,(_Bool)0);
                    __dec_obj56=right_value_62->c_value;
                    right_value_62->c_value=(char*)come_increment_ref_count(((char*)(right_value117=increment_ref_count_object(right_value_62->type,right_value_62->c_value,info))));
                    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    __dec_obj57=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s.%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    if(c_value_96) { c_value_96 = come_decrement_ref_count2(c_value_96, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_60,left_value_61->type->mPointerNum);
                __result59__ = (_Bool)0;
                if(name_60) { name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(child_field_name_74) { child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result59__;
            }
        }
        right_value_id_97=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_62->c_value));
        if(_if_conditional177=right_value_id_97!=-1,        _if_conditional177) {
            remove_object_from_right_values(right_value_id_97,info);
        }
    }
    else {
        if(_if_conditional178=field_type_72->mHeap&&field_type_72->mPointerNum>0&&right_type_63->mPointerNum>0&&string_operator_equals(right_type_63->mClass->mName,"void"),        _if_conditional178) {
            if(_if_conditional179=left_value_61->type->mPointerNum==1,            _if_conditional179) {
                if(_if_conditional180=child_field_name_74,                _if_conditional180) {
                    c_value_98=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("%s->%s.%s",left_value_61->c_value,child_field_name_74,name_60))));
                    if(right_value119) { right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    decrement_ref_count_object(field_type_72,c_value_98,info,(_Bool)0);
                    __dec_obj58=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("%s->%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    if(c_value_98) { c_value_98 = come_decrement_ref_count2(c_value_98, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                else {
                    c_value_99=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("%s->%s",left_value_61->c_value,name_60))));
                    if(right_value121) { right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    decrement_ref_count_object(field_type_72,c_value_99,info,(_Bool)0);
                    __dec_obj59=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("%s->%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value122) { right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    if(c_value_99) { c_value_99 = come_decrement_ref_count2(c_value_99, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
            }
            else {
                if(_if_conditional181=left_value_61->type->mPointerNum==0,                _if_conditional181) {
                    if(_if_conditional182=child_field_name_74,                    _if_conditional182) {
                        c_value_100=(char*)come_increment_ref_count(((char*)(right_value123=xsprintf("%s.%s.%s",left_value_61->c_value,child_field_name_74,name_60))));
                        if(right_value123) { right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                        decrement_ref_count_object(field_type_72,c_value_100,info,(_Bool)0);
                        __dec_obj60=come_value_92->c_value;
                        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("%s.%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0); }
                        if(right_value124) { right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                        if(c_value_100) { c_value_100 = come_decrement_ref_count2(c_value_100, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
                    else {
                        c_value_101=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s.%s",left_value_61->c_value,name_60))));
                        if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                        decrement_ref_count_object(field_type_72,c_value_101,info,(_Bool)0);
                        __dec_obj61=come_value_92->c_value;
                        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("%s.%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0); }
                        if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                        if(c_value_101) { c_value_101 = come_decrement_ref_count2(c_value_101, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_60,left_value_61->type->mPointerNum);
                    __result60__ = (_Bool)0;
                    if(name_60) { name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(child_field_name_74) { child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result60__;
                }
            }
        }
        else {
            if(_if_conditional183=left_value_61->type->mPointerNum==1,            _if_conditional183) {
                if(_if_conditional184=child_field_name_74,                _if_conditional184) {
                    __dec_obj62=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("%s->%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value127) { right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                }
                else {
                    __dec_obj63=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("%s->%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value128) { right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                }
            }
            else {
                if(_if_conditional185=left_value_61->type->mPointerNum==0,                _if_conditional185) {
                    if(_if_conditional186=child_field_name_74,                    _if_conditional186) {
                        __dec_obj64=come_value_92->c_value;
                        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("%s.%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0); }
                        if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    }
                    else {
                        __dec_obj65=come_value_92->c_value;
                        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s.%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0); }
                        if(right_value130) { right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_60,left_value_61->type->mPointerNum);
                    __result61__ = (_Bool)0;
                    if(name_60) { name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(child_field_name_74) { child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result61__;
                }
            }
        }
    }
    __dec_obj66=come_value_92->type;
    come_value_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(field_type_72))));
    come_call_finalizer2(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_92->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
    add_come_last_code(info,"%s;\n",come_value_92->c_value);
    __result62__ = (_Bool)1;
    if(name_60) { name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(child_field_name_74) { child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result62__;
    if(name_60) { name_60 = come_decrement_ref_count2(name_60, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    come_call_finalizer2(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(child_field_name_74) { child_field_name_74 = come_decrement_ref_count2(child_field_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_67;
unsigned int hash_68;
unsigned int it_69;
_Bool _while_condtional10;
_Bool _if_conditional148;
_Bool _if_conditional149;
struct sClass* __result44__;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct sClass* __result45__;
struct sClass* __result46__;
struct sClass* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_67, 0, sizeof(struct sClass*));
memset(&hash_68, 0, sizeof(unsigned int));
memset(&it_69, 0, sizeof(unsigned int));
        memset(&default_value_67,0,sizeof(struct sClass*));
        hash_68=string_get_hash_key(((char*)key))%self->size;
        it_69=hash_68;
        while(_while_condtional10=(_Bool)1,        _while_condtional10) {
            if(_if_conditional148=self->item_existance[it_69],            _if_conditional148) {
                if(_if_conditional149=string_equals(self->keys[it_69],key),                _if_conditional149) {
                    __result44__ = __result_obj__ = self->items[it_69];
                    come_call_finalizer2(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result44__;
                }
                it_69++;
                if(_if_conditional156=it_69>=self->size,                _if_conditional156) {
                    it_69=0;
                }
                else {
                    if(_if_conditional157=it_69==hash_68,                    _if_conditional157) {
                        __result45__ = __result_obj__ = default_value_67;
                        come_call_finalizer2(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result45__;
                    }
                }
            }
            else {
                __result46__ = __result_obj__ = default_value_67;
                come_call_finalizer2(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result46__;
            }
        }
        __result47__ = __result_obj__ = default_value_67;
        come_call_finalizer2(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result47__;
        come_call_finalizer2(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional150=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional150) {
                            if(self->mName) { self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                        }
                        if(_if_conditional151=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional151) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional155=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional155) {
                            if(self->mDeclareSName) { self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_70;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_71;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_70, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_71, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_70=self->head;
                                while(_while_condtional11=it_70!=((void*)0),                                _while_condtional11) {
                                    prev_it_71=it_70;
                                    it_70=it_70->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional152;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional152=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional152) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional153;
_Bool _if_conditional154;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional153=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional153) {
                                                    if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                                }
                                                if(_if_conditional154=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional154) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional159;
struct tuple2$2charphsTypeph* result_76;
struct tuple2$2charphsTypeph* __result49__;
_Bool _if_conditional160;
struct tuple2$2charphsTypeph* __result50__;
struct tuple2$2charphsTypeph* result_77;
struct tuple2$2charphsTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_76, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_77, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional159=self==((void*)0),        _if_conditional159) {
            memset(&result_76,0,sizeof(struct tuple2$2charphsTypeph*));
            __result49__ = __result_obj__ = result_76;
            return __result49__;
        }
        self->it=self->head;
        if(_if_conditional160=self->it,        _if_conditional160) {
            __result50__ = __result_obj__ = self->it->item;
            return __result50__;
        }
        memset(&result_77,0,sizeof(struct tuple2$2charphsTypeph*));
        __result51__ = __result_obj__ = result_77;
        return __result51__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
        __result52__ = self==((void*)0)||self->it==((void*)0);
        return __result52__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional161;
struct tuple2$2charphsTypeph* result_79;
struct tuple2$2charphsTypeph* __result53__;
_Bool _if_conditional162;
struct tuple2$2charphsTypeph* __result54__;
struct tuple2$2charphsTypeph* result_80;
struct tuple2$2charphsTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_79, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_80, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional161=self==((void*)0)||self->it==((void*)0),        _if_conditional161) {
            memset(&result_79,0,sizeof(struct tuple2$2charphsTypeph*));
            __result53__ = __result_obj__ = result_79;
            return __result53__;
        }
        self->it=self->it->next;
        if(_if_conditional162=self->it,        _if_conditional162) {
            __result54__ = __result_obj__ = self->it->item;
            return __result54__;
        }
        memset(&result_80,0,sizeof(struct tuple2$2charphsTypeph*));
        __result55__ = __result_obj__ = result_80;
        return __result55__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result56__;
memset(&__result_obj__, 0, sizeof(void*));
        __result56__ = self->len;
        return __result56__;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
int __result63__;
memset(&__result_obj__, 0, sizeof(void*));
    __result63__ = self->sline;
    return __result63__;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value132;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
    __result64__ = __result_obj__ = ((char*)(right_value132=__builtin_string(self->sname)));
    if(right_value132) { right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result64__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
void* right_value133;
char* __dec_obj67;
void* right_value134;
struct sNode* __dec_obj68;
struct sNullCheckNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
right_value134 = (void*)0;
    self->sline=info->sline;
    __dec_obj67=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(info->sname))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value133) { right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj68=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value134=sNode_clone(left))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value134) { right_value134 = come_decrement_ref_count2(right_value134, ((struct sNode*)right_value134)->finalize, ((struct sNode*)right_value134)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mOnlyNullCecker=only_null_checker;
    __result65__ = __result_obj__ = self;
    come_call_finalizer2(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result65__;
    come_call_finalizer2(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullCheckNode_terminated(){
void* __result_obj__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    __result66__ = (_Bool)0;
    return __result66__;
}

char* sNullCheckNode_kind(){
void* __result_obj__;
void* right_value135;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
    __result67__ = __result_obj__ = ((char*)(right_value135=__builtin_string("sNullCheckNode")));
    if(right_value135) { right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result67__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_102;
_Bool _if_conditional189;
_Bool __result68__;
void* right_value136;
struct CVALUE* left_value_103;
_Bool _if_conditional190;
void* right_value137;
char* method_name_104;
void* right_value138;
_Bool _if_conditional195;
struct sType* obj_type_107;
_Bool _if_conditional196;
struct sType* obj_type2_108;
void* right_value139;
void* right_value140;
char* __dec_obj69;
void* right_value141;
struct sFun* fun_109;
_Bool _if_conditional197;
_Bool __result73__;
void* right_value142;
struct sType* type_110;
void* right_value143;
struct CVALUE* come_value_111;
void* right_value144;
char* __dec_obj70;
void* right_value145;
struct sType* __dec_obj71;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value146;
struct CVALUE* come_value_112;
void* right_value147;
void* right_value148;
char* __dec_obj72;
void* right_value149;
struct sType* __dec_obj73;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_102, 0, sizeof(struct sNode*));
right_value136 = (void*)0;
memset(&left_value_103, 0, sizeof(struct CVALUE*));
right_value137 = (void*)0;
memset(&method_name_104, 0, sizeof(char*));
right_value138 = (void*)0;
memset(&obj_type_107, 0, sizeof(struct sType*));
memset(&obj_type2_108, 0, sizeof(struct sType*));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&fun_109, 0, sizeof(struct sFun*));
right_value142 = (void*)0;
memset(&type_110, 0, sizeof(struct sType*));
right_value143 = (void*)0;
memset(&come_value_111, 0, sizeof(struct CVALUE*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&come_value_112, 0, sizeof(struct CVALUE*));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
    left_102=self->mLeft;
    if(_if_conditional189=!node_compile(left_102,info),    _if_conditional189) {
        __result68__ = (_Bool)0;
        return __result68__;
    }
    left_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional190=!self->mOnlyNullCecker&&left_value_103->type->mNoSolvedGenericsType&&left_value_103->type->mNoSolvedGenericsType->v1&&left_value_103->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_103->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional190) {
        method_name_104=(char*)come_increment_ref_count(((char*)(right_value137=create_method_name(left_value_103->type,(_Bool)0,"expect",info))));
        if(right_value137) { right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(_if_conditional195=((struct sFun*)(right_value138=map$2charphsFunph_at(info->funcs,method_name_104,((void*)0))))==((void*)0),        come_call_finalizer2(sFun_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
        _if_conditional195) {
            obj_type_107=left_value_103->type->mNoSolvedGenericsType->v1;
            if(_if_conditional196=list$1sTypeph_length(obj_type_107->mGenericsTypes)>0,            _if_conditional196) {
                obj_type2_108=left_value_103->type;
                __dec_obj69=method_name_104;
                method_name_104=(char*)come_increment_ref_count(((char*)(right_value140=make_generics_function(obj_type2_108,(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string("expect")))),info))));
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value139) { right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_103->type->mClass->mName);
                exit(1);
            }
        }
        fun_109=((struct sFun*)(right_value141=map$2charphsFunphp_operator_load_element(info->funcs,method_name_104)));
        come_call_finalizer2(sFun_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional197=fun_109==((void*)0),        _if_conditional197) {
            err_msg(info,"function not found(%s)",method_name_104);
            __result73__ = (_Bool)1;
            if(method_name_104) { method_name_104 = come_decrement_ref_count2(method_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result73__;
        }
        type_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=solve_generics(fun_109->mResultType,left_value_103->type,info))));
        come_call_finalizer2(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value143=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 427, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj70=come_value_111->c_value;
        come_value_111->c_value=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("%s(%s)",method_name_104,left_value_103->c_value))));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value144) { right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj71=come_value_111->type;
        come_value_111->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(type_110))));
        come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_111->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_111));
        add_come_last_code(info,"%s;\n",come_value_111->c_value);
        if(method_name_104) { method_name_104 = come_decrement_ref_count2(method_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(sType_finalize,type_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional198=!gComeDebug,        _if_conditional198) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_103));
        }
        else {
            if(_if_conditional199=left_value_103->type->mPointerNum>0,            _if_conditional199) {
                come_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 441, "struct CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj72=come_value_112->c_value;
                come_value_112->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("((%s)come_null_check(%s, \"%s\", %d))",((char*)(right_value147=make_type_name_string(left_value_103->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_103->c_value,info->sname,info->sline))));
                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(right_value148) { right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                __dec_obj73=come_value_112->type;
                come_value_112->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(left_value_103->type))));
                come_call_finalizer2(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_112->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_112));
                add_come_last_code(info,"%s;\n",come_value_112->c_value);
                come_call_finalizer2(CVALUE_finalize,come_value_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_103));
            }
        }
    }
    __result74__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result74__;
    come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_105;
unsigned int it_106;
_Bool _while_condtional12;
_Bool _if_conditional191;
_Bool _if_conditional192;
struct sFun* __result69__;
_Bool _if_conditional193;
_Bool _if_conditional194;
struct sFun* __result70__;
struct sFun* __result71__;
struct sFun* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_105, 0, sizeof(unsigned int));
memset(&it_106, 0, sizeof(unsigned int));
            hash_105=string_get_hash_key(((char*)key))%self->size;
            it_106=hash_105;
            while(_while_condtional12=(_Bool)1,            _while_condtional12) {
                if(_if_conditional191=self->item_existance[it_106],                _if_conditional191) {
                    if(_if_conditional192=string_equals(self->keys[it_106],key),                    _if_conditional192) {
                        __result69__ = __result_obj__ = self->items[it_106];
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result69__;
                    }
                    it_106++;
                    if(_if_conditional193=it_106>=self->size,                    _if_conditional193) {
                        it_106=0;
                    }
                    else {
                        if(_if_conditional194=it_106==hash_105,                        _if_conditional194) {
                            __result70__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result70__;
                        }
                    }
                }
                else {
                    __result71__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result71__;
                }
            }
            __result72__ = __result_obj__ = default_value;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result72__;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    __result75__ = self->sline;
    return __result75__;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value150;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
    __result76__ = __result_obj__ = ((char*)(right_value150=__builtin_string(self->sname)));
    if(right_value150) { right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result76__;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* right_value151;
char* __dec_obj74;
void* right_value152;
struct sNode* __dec_obj75;
void* right_value153;
struct sNode* __dec_obj76;
void* right_value154;
struct sNode* __dec_obj77;
struct sRangeCheckNode* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
    self->sline=info->sline;
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(info->sname))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value151) { right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj75=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=sNode_clone(left))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj76=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=sNode_clone(begin))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj77=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=sNode_clone(end))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result77__ = __result_obj__ = self;
    come_call_finalizer2(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result77__;
    come_call_finalizer2(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sRangeCheckNode_terminated(){
void* __result_obj__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    __result78__ = (_Bool)0;
    return __result78__;
}

char* sRangeCheckNode_kind(){
void* __result_obj__;
void* right_value155;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __result79__ = __result_obj__ = ((char*)(right_value155=__builtin_string("sRangeCheckNode")));
    if(right_value155) { right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result79__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_113;
_Bool _if_conditional204;
_Bool __result80__;
void* right_value156;
struct CVALUE* left_value_114;
struct sNode* begin_115;
_Bool _if_conditional205;
_Bool __result81__;
void* right_value157;
struct CVALUE* begin_value_116;
struct sNode* end_117;
_Bool _if_conditional206;
_Bool __result82__;
void* right_value158;
struct CVALUE* end_value_118;
_Bool _if_conditional207;
_Bool _if_conditional208;
void* right_value159;
struct CVALUE* come_value_119;
void* right_value160;
void* right_value161;
char* __dec_obj78;
void* right_value162;
struct sType* __dec_obj79;
void* right_value163;
struct CVALUE* come_value_120;
void* right_value164;
void* right_value165;
char* __dec_obj80;
void* right_value166;
struct sType* __dec_obj81;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_113, 0, sizeof(struct sNode*));
right_value156 = (void*)0;
memset(&left_value_114, 0, sizeof(struct CVALUE*));
memset(&begin_115, 0, sizeof(struct sNode*));
right_value157 = (void*)0;
memset(&begin_value_116, 0, sizeof(struct CVALUE*));
memset(&end_117, 0, sizeof(struct sNode*));
right_value158 = (void*)0;
memset(&end_value_118, 0, sizeof(struct CVALUE*));
right_value159 = (void*)0;
memset(&come_value_119, 0, sizeof(struct CVALUE*));
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&come_value_120, 0, sizeof(struct CVALUE*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
    left_113=self->mLeft;
    if(_if_conditional204=!node_compile(left_113,info),    _if_conditional204) {
        __result80__ = (_Bool)0;
        return __result80__;
    }
    left_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value156=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    begin_115=self->mBegin;
    if(_if_conditional205=!node_compile(begin_115,info),    _if_conditional205) {
        __result81__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result81__;
    }
    begin_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    end_117=self->mEnd;
    if(_if_conditional206=!node_compile(end_117,info),    _if_conditional206) {
        __result82__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,begin_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result82__;
    }
    end_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional207=left_value_114->type->mPointerNum>0,    _if_conditional207) {
        if(_if_conditional208=!gComeDebug,        _if_conditional208) {
            come_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value159=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 531, "struct CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj78=come_value_119->c_value;
            come_value_119->c_value=(char*)come_increment_ref_count(((char*)(right_value161=xsprintf("(*((%s)%s))",((char*)(right_value160=make_type_name_string(left_value_114->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_114->c_value))));
            if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value160) { right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(right_value161) { right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            left_value_114->type->mPointerNum--;
            __dec_obj79=come_value_119->type;
            come_value_119->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(left_value_114->type))));
            come_call_finalizer2(sType_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value_119->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_119));
            add_come_last_code(info,"%s;\n",come_value_119->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 544, "struct CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj80=come_value_120->c_value;
            come_value_120->c_value=(char*)come_increment_ref_count(((char*)(right_value165=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value164=make_type_name_string(left_value_114->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_114->c_value,begin_value_116->c_value,end_value_118->c_value,info->sname,info->sline))));
            if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value164) { right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(right_value165) { right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            left_value_114->type->mPointerNum--;
            __dec_obj81=come_value_120->type;
            come_value_120->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(left_value_114->type))));
            come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value_120->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_120));
            add_come_last_code(info,"%s;\n",come_value_120->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_114));
    }
    __result83__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,begin_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,end_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result83__;
    come_call_finalizer2(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,begin_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,end_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
int __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    __result84__ = self->sline;
    return __result84__;
}

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value167;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
    __result85__ = __result_obj__ = ((char*)(right_value167=__builtin_string(self->sname)));
    if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result85__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value168;
void* right_value169;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value175;
struct sNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value175 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 575, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value169=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value168=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 575, "struct sStoreFieldNode")))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result88__ = __result_obj__ = ((struct sNode*)(right_value175=_inf_value1));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(name) { name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    come_call_finalizer2(sStoreFieldNode_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStoreFieldNode_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value175) { right_value175 = come_decrement_ref_count2(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result88__;
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(name) { name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value176;
char* __dec_obj86;
void* right_value177;
struct sNode* __dec_obj87;
void* right_value178;
char* __dec_obj88;
struct sLoadFieldNode* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
    self->sline=info->sline;
    __dec_obj86=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string(info->sname))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value176) { right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj87=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value177=sNode_clone(left))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value177) { right_value177 = come_decrement_ref_count2(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj88=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string(name))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __result89__ = __result_obj__ = self;
    come_call_finalizer2(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(name) { name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result89__;
    come_call_finalizer2(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(name) { name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
}

_Bool sLoadFieldNode_terminated(){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = (_Bool)0;
    return __result90__;
}

char* sLoadFieldNode_kind(){
void* __result_obj__;
void* right_value179;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(right_value179=__builtin_string("sLoadFieldNode")));
    if(right_value179) { right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result91__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_122;
void* right_value180;
char* name_123;
_Bool _if_conditional222;
_Bool __result92__;
void* right_value181;
struct CVALUE* left_value_124;
struct sType* left_type_125;
void* right_value182;
struct sType* left_type2_126;
struct sClass* klass_127;
void* right_value183;
struct sType* field_type_128;
int index_129;
char* child_field_name_130;
void* right_value184;
struct list$1tuple2$2charphsTypephph* o2_saved_131;
struct tuple2$2charphsTypeph* field_132;
_Bool _for_condtionalA5;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_133;
struct sType* field_type2_134;
_Bool _if_conditional223;
void* right_value185;
struct sType* __dec_obj89;
_Bool _if_conditional224;
struct list$1tuple2$2charphsTypephph* o2_saved_135;
struct tuple2$2charphsTypeph* field_136;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_137;
struct sType* field_type2_138;
struct sClass* klass2_139;
struct list$1tuple2$2charphsTypephph* o2_saved_140;
struct tuple2$2charphsTypeph* field2_141;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_142;
struct sType* field_type3_143;
_Bool _if_conditional225;
void* right_value186;
char* __dec_obj90;
void* right_value187;
struct sType* __dec_obj91;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value188;
struct sType* __dec_obj92;
_Bool _if_conditional228;
_Bool __result93__;
void* right_value189;
struct CVALUE* come_value_144;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value190;
char* __dec_obj93;
void* right_value191;
char* __dec_obj94;
_Bool _if_conditional231;
void* right_value192;
char* __dec_obj95;
void* right_value193;
char* __dec_obj96;
void* right_value194;
struct sType* __dec_obj97;
_Bool _if_conditional232;
_Bool __result94__;
_Bool _if_conditional233;
void* right_value195;
struct sType* __dec_obj98;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_122, 0, sizeof(struct sNode*));
right_value180 = (void*)0;
memset(&name_123, 0, sizeof(char*));
right_value181 = (void*)0;
memset(&left_value_124, 0, sizeof(struct CVALUE*));
memset(&left_type_125, 0, sizeof(struct sType*));
right_value182 = (void*)0;
memset(&left_type2_126, 0, sizeof(struct sType*));
memset(&klass_127, 0, sizeof(struct sClass*));
right_value183 = (void*)0;
memset(&field_type_128, 0, sizeof(struct sType*));
memset(&index_129, 0, sizeof(int));
memset(&child_field_name_130, 0, sizeof(char*));
right_value184 = (void*)0;
memset(&o2_saved_131, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_132, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_133, 0, sizeof(char*));
memset(&field_type2_134, 0, sizeof(struct sType*));
memset(&field_name_133, 0, sizeof(char*));
memset(&field_type2_134, 0, sizeof(struct sType*));
right_value185 = (void*)0;
memset(&o2_saved_135, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_136, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_137, 0, sizeof(char*));
memset(&field_type2_138, 0, sizeof(struct sType*));
memset(&field_name_137, 0, sizeof(char*));
memset(&field_type2_138, 0, sizeof(struct sType*));
memset(&klass2_139, 0, sizeof(struct sClass*));
memset(&o2_saved_140, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_141, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_142, 0, sizeof(char*));
memset(&field_type3_143, 0, sizeof(struct sType*));
memset(&field_name2_142, 0, sizeof(char*));
memset(&field_type3_143, 0, sizeof(struct sType*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&come_value_144, 0, sizeof(struct CVALUE*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
    left_122=self->mLeft;
    name_123=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string(self->mName))));
    if(right_value180) { right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(_if_conditional222=!node_compile(left_122,info),    _if_conditional222) {
        __result92__ = (_Bool)0;
        if(name_123) { name_123 = come_decrement_ref_count2(name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        return __result92__;
    }
    left_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_125=left_value_124->type;
    left_type2_126=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=solve_generics(left_type_125,left_type_125,info))));
    come_call_finalizer2(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    klass_127=left_type2_126->mClass;
    klass_127=((struct sClass*)(right_value183=map$2charphsClassphp_operator_load_element(info->classes,klass_127->mName)));
    come_call_finalizer2(sClass_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    field_type_128=((void*)0);
    index_129=0;
    child_field_name_130=((void*)0);
    klass_127=((struct sClass*)(right_value184=map$2charphsClassphp_operator_load_element(info->classes,klass_127->mName)));
    come_call_finalizer2(sClass_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(
    o2_saved_131=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_127->mFields)),field_132=list$1tuple2$2charphsTypephph_begin((o2_saved_131)) ,    0;    _for_condtionalA5=    !list$1tuple2$2charphsTypephph_end((o2_saved_131)) ,    _for_condtionalA5;    field_132=list$1tuple2$2charphsTypephph_next((o2_saved_131)) ,    0    ){
        multiple_assign_var4=field_132;
        field_name_133=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_134=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(_if_conditional223=string_operator_equals(field_name_133,name_123),        _if_conditional223) {
            __dec_obj89=field_type_128;
            field_type_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_clone(field_type2_134))));
            come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(field_name_133) { field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            come_call_finalizer2(sType_finalize,field_type2_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_129++;
        if(field_name_133) { field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(sType_finalize,field_type2_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(_if_conditional224=index_129==list$1tuple2$2charphsTypephph_length(klass_127->mFields),    _if_conditional224) {
        index_129=0;
        for(
        o2_saved_135=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_127->mFields)),field_136=list$1tuple2$2charphsTypephph_begin((o2_saved_135)) ,        0;        _for_condtionalA6=        !list$1tuple2$2charphsTypephph_end((o2_saved_135)) ,        _for_condtionalA6;        field_136=list$1tuple2$2charphsTypephph_next((o2_saved_135)) ,        0        ){
            multiple_assign_var5=field_136;
            field_name_137=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_138=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_139=field_type2_138->mClass;
            for(
            o2_saved_140=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_139->mFields)),field2_141=list$1tuple2$2charphsTypephph_begin((o2_saved_140)) ,            0;            _for_condtionalA7=            !list$1tuple2$2charphsTypephph_end((o2_saved_140)) ,            _for_condtionalA7;            field2_141=list$1tuple2$2charphsTypephph_next((o2_saved_140)) ,            0            ){
                multiple_assign_var6=field2_141;
                field_name2_142=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_143=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional225=string_operator_equals(field_name2_142,name_123),                _if_conditional225) {
                    __dec_obj90=child_field_name_130;
                    child_field_name_130=(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string(field_name_137))));
                    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value186) { right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    __dec_obj91=field_type_128;
                    field_type_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(field_type3_143))));
                    come_call_finalizer2(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(field_name2_142) { field_name2_142 = come_decrement_ref_count2(field_name2_142, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    come_call_finalizer2(sType_finalize,field_type3_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
                if(field_name2_142) { field_name2_142 = come_decrement_ref_count2(field_name2_142, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(sType_finalize,field_type3_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(_if_conditional226=child_field_name_130,            _if_conditional226) {
                if(field_name_137) { field_name_137 = come_decrement_ref_count2(field_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(sType_finalize,field_type2_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(_if_conditional227=string_operator_equals(field_name_137,name_123),            _if_conditional227) {
                __dec_obj92=field_type_128;
                field_type_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(field_type2_138))));
                come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(field_name_137) { field_name_137 = come_decrement_ref_count2(field_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(sType_finalize,field_type2_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_129++;
            if(field_name_137) { field_name_137 = come_decrement_ref_count2(field_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            come_call_finalizer2(sType_finalize,field_type2_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(_if_conditional228=index_129==list$1tuple2$2charphsTypephph_length(klass_127->mFields),        _if_conditional228) {
            err_msg(info,"field not found(%s) in %s(2)",name_123,klass_127->mName);
            __result93__ = (_Bool)0;
            if(name_123) { name_123 = come_decrement_ref_count2(name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type2_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(child_field_name_130) { child_field_name_130 = come_decrement_ref_count2(child_field_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            return __result93__;
        }
    }
    come_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 677, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional229=left_value_124->type->mPointerNum>0,    _if_conditional229) {
        if(_if_conditional230=child_field_name_130,        _if_conditional230) {
            __dec_obj93=come_value_144->c_value;
            come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s->%s.%s",left_value_124->c_value,child_field_name_130,name_123))));
            if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value190) { right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        else {
            __dec_obj94=come_value_144->c_value;
            come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("%s->%s",left_value_124->c_value,name_123))));
            if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value191) { right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
    }
    else {
        if(_if_conditional231=child_field_name_130,        _if_conditional231) {
            __dec_obj95=come_value_144->c_value;
            come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s.%s.%s",left_value_124->c_value,child_field_name_130,name_123))));
            if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        else {
            __dec_obj96=come_value_144->c_value;
            come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s.%s",left_value_124->c_value,name_123))));
            if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
    }
    __dec_obj97=come_value_144->type;
    come_value_144->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(field_type_128))));
    come_call_finalizer2(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_144->var=((void*)0);
    if(_if_conditional232=field_type_128==((void*)0),    _if_conditional232) {
        err_msg(info,"no field(%s)\n",name_123);
        __result94__ = (_Bool)0;
        if(name_123) { name_123 = come_decrement_ref_count2(name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(child_field_name_130) { child_field_name_130 = come_decrement_ref_count2(child_field_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result94__;
    }
    if(_if_conditional233=list$1sNodeph_length(come_value_144->type->mArrayNum)==1,    _if_conditional233) {
        __dec_obj98=come_value_144->type->mOriginalLoadVarType->v1;
        come_value_144->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(come_value_144->type))));
        come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1sNodeph_reset(come_value_144->type->mArrayNum);
        come_value_144->type->mPointerNum++;
        come_value_144->type->mOriginalTypeNamePointerNum=come_value_144->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_144));
    __result97__ = (_Bool)1;
    if(name_123) { name_123 = come_decrement_ref_count2(name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(child_field_name_130) { child_field_name_130 = come_decrement_ref_count2(child_field_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    come_call_finalizer2(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result97__;
    if(name_123) { name_123 = come_decrement_ref_count2(name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(child_field_name_130) { child_field_name_130 = come_decrement_ref_count2(child_field_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    come_call_finalizer2(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
        __result95__ = self->len;
        return __result95__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_145;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_146;
struct list$1sNodeph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_145, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_146, 0, sizeof(struct list_item$1sNodeph*));
            it_145=self->head;
            while(_while_condtional13=it_145!=((void*)0),            _while_condtional13) {
                prev_it_146=it_145;
                it_145=it_145->next;
                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result96__ = __result_obj__ = self;
            return __result96__;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    __result98__ = self->sline;
    return __result98__;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value196;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(right_value196=__builtin_string(self->sname)));
    if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result99__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value197;
char* __dec_obj99;
void* right_value198;
struct sNode* __dec_obj100;
void* right_value199;
struct sNode* __dec_obj101;
void* right_value200;
struct list$1sNodeph* __dec_obj102;
struct sStoreArrayNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
    self->sline=info->sline;
    __dec_obj99=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string(info->sname))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value197) { right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj100=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=sNode_clone(left))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value198) { right_value198 = come_decrement_ref_count2(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj101=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=sNode_clone(right))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value199) { right_value199 = come_decrement_ref_count2(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj102=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value200=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __result100__ = __result_obj__ = self;
    come_call_finalizer2(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result100__;
    come_call_finalizer2(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sStoreArrayNode_terminated(){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    __result101__ = (_Bool)0;
    return __result101__;
}

char* sStoreArrayNode_kind(){
void* __result_obj__;
void* right_value201;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
    __result102__ = __result_obj__ = ((char*)(right_value201=__builtin_string("sStoreArrayNode")));
    if(right_value201) { right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result102__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_147;
struct sNode* right_148;
struct list$1sNodeph* array_num_nodes_149;
_Bool _if_conditional238;
_Bool __result103__;
void* right_value202;
struct CVALUE* left_value_150;
struct sType* left_type_151;
void* right_value203;
void* right_value204;
struct list$1CVALUEph* array_num_154;
struct list$1sNodeph* o2_saved_155;
struct sNode* it_158;
_Bool _for_condtionalA8;
_Bool _if_conditional243;
_Bool __result112__;
void* right_value205;
struct CVALUE* c_value_161;
_Bool _if_conditional244;
_Bool __result113__;
void* right_value206;
struct CVALUE* right_value_162;
struct sType* right_type_163;
struct sClass* klass_164;
void* right_value207;
struct sType* type_165;
char* fun_name_166;
_Bool calling_fun_167;
_Bool _if_conditional245;
void* right_value208;
_Bool _if_conditional248;
void* right_value209;
struct CVALUE* come_value_171;
_Bool _if_conditional249;
int i_172;
_Bool _for_condtionalA9;
_Bool _if_conditional268;
_Bool _if_conditional269;
void* right_value210;
void* right_value211;
struct buffer* buf_185;
struct list$1CVALUEph* o2_saved_186;
struct CVALUE* it_189;
_Bool _for_condtionalA10;
void* right_value212;
void* right_value213;
char* left_value_code_192;
void* right_value214;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value215;
char* __dec_obj103;
_Bool _if_conditional276;
void* right_value216;
char* __dec_obj104;
_Bool __result126__;
int right_value_id_193;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value217;
char* __dec_obj105;
_Bool _if_conditional279;
void* right_value218;
char* __dec_obj106;
_Bool __result127__;
void* right_value219;
struct sType* result_type_194;
void* right_value220;
void* right_value221;
struct list$1sNodeph* __dec_obj107;
struct sType* __dec_obj108;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_147, 0, sizeof(struct sNode*));
memset(&right_148, 0, sizeof(struct sNode*));
memset(&array_num_nodes_149, 0, sizeof(struct list$1sNodeph*));
right_value202 = (void*)0;
memset(&left_value_150, 0, sizeof(struct CVALUE*));
memset(&left_type_151, 0, sizeof(struct sType*));
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&array_num_154, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_155, 0, sizeof(struct list$1sNodeph*));
memset(&it_158, 0, sizeof(struct sNode*));
right_value205 = (void*)0;
memset(&c_value_161, 0, sizeof(struct CVALUE*));
right_value206 = (void*)0;
memset(&right_value_162, 0, sizeof(struct CVALUE*));
memset(&right_type_163, 0, sizeof(struct sType*));
memset(&klass_164, 0, sizeof(struct sClass*));
right_value207 = (void*)0;
memset(&type_165, 0, sizeof(struct sType*));
memset(&fun_name_166, 0, sizeof(char*));
memset(&calling_fun_167, 0, sizeof(_Bool));
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
memset(&i_172, 0, sizeof(int));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&buf_185, 0, sizeof(struct buffer*));
memset(&o2_saved_186, 0, sizeof(struct list$1CVALUEph*));
memset(&it_189, 0, sizeof(struct CVALUE*));
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&left_value_code_192, 0, sizeof(char*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&right_value_id_193, 0, sizeof(int));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&result_type_194, 0, sizeof(struct sType*));
right_value220 = (void*)0;
right_value221 = (void*)0;
    left_147=self->mLeft;
    right_148=self->mRight;
    array_num_nodes_149=self->mArrayNum;
    if(_if_conditional238=!node_compile(left_147,info),    _if_conditional238) {
        __result103__ = (_Bool)0;
        return __result103__;
    }
    left_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_151=left_value_150->type;
    array_num_154=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value204=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value203=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 775, "struct list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(
    o2_saved_155=(array_num_nodes_149),it_158=list$1sNodeph_begin((o2_saved_155)) ,    0;    _for_condtionalA8=    !list$1sNodeph_end((o2_saved_155)) ,    _for_condtionalA8;    it_158=list$1sNodeph_next((o2_saved_155)) ,    0    ){
        if(_if_conditional243=!node_compile(it_158,info),        _if_conditional243) {
            __result112__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result112__;
        }
        c_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value205=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_154,(struct CVALUE*)come_increment_ref_count(c_value_161));
        come_call_finalizer2(CVALUE_finalize,c_value_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional244=!node_compile(right_148,info),    _if_conditional244) {
        __result113__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,array_num_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result113__;
    }
    right_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value206=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_type_163=right_value_162->type;
    klass_164=left_value_150->type->mClass;
    type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(left_value_150->type))));
    come_call_finalizer2(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_166="operator_store_element";
    if(_if_conditional245=self->mQuote,    _if_conditional245) {
        calling_fun_167=(_Bool)0;
    }
    else {
        calling_fun_167=operator_overload_fun2(type_165,fun_name_166,left_value_150,((struct CVALUE*)(right_value208=list$1CVALUEphp_operator_load_element(array_num_154,0))),right_value_162,info);
        come_call_finalizer2(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional248=!calling_fun_167,    _if_conditional248) {
        come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 811, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional249=list$1sNodeph_length(left_type_151->mArrayNum)>0,        _if_conditional249) {
            for(
            i_172=0 ,            0;            _for_condtionalA9=            i_172<list$1CVALUEph_length(array_num_154) ,            _for_condtionalA9;            i_172++ ,            0            ){
                list$1sNodeph_delete(left_type_151->mArrayNum,-1,-1);
            }
        }
        else {
            if(_if_conditional268=left_type_151->mPointerNum>0,            _if_conditional268) {
                left_type_151->mPointerNum-=list$1CVALUEph_length(array_num_154);
                if(_if_conditional269=left_type_151->mPointerNum<0,                _if_conditional269) {
                    left_type_151->mPointerNum=0;
                }
            }
        }
        buf_185=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value211=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value210=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 832, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_185,left_value_150->c_value);
        for(
        o2_saved_186=(struct list$1CVALUEph*)come_increment_ref_count((array_num_154)),it_189=list$1CVALUEph_begin((o2_saved_186)) ,        0;        _for_condtionalA10=        !list$1CVALUEph_end((o2_saved_186)) ,        _for_condtionalA10;        it_189=list$1CVALUEph_next((o2_saved_186)) ,        0        ){
            buffer_append_str(buf_185,((char*)(right_value212=xsprintf("[%s]",it_189->c_value))));
            if(right_value212) { right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_192=(char*)come_increment_ref_count(((char*)(right_value213=buffer_to_string(buf_185))));
        if(right_value213) { right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        check_assign_type(((char*)(right_value214=xsprintf("array is assinged to"))),left_type_151,right_type_163,right_value_162,(_Bool)0,info);
        if(right_value214) { right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(_if_conditional274=left_type_151->mHeap&&right_type_163->mHeap&&left_type_151->mPointerNum>0&&right_type_163->mPointerNum>0,        _if_conditional274) {
            if(_if_conditional275=left_value_150->type->mPointerNum>=1,            _if_conditional275) {
                decrement_ref_count_object(left_type_151,left_value_code_192,info,(_Bool)0);
                std_move(left_type_151,right_type_163,right_value_162,info);
                __dec_obj103=come_value_171->c_value;
                come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s=%s",left_value_code_192,right_value_162->c_value))));
                if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value215) { right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            }
            else {
                if(_if_conditional276=left_value_150->type->mPointerNum==0,                _if_conditional276) {
                    decrement_ref_count_object(left_type_151,left_value_code_192,info,(_Bool)0);
                    std_move(left_type_151,right_type_163,right_value_162,info);
                    __dec_obj104=come_value_171->c_value;
                    come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value216=xsprintf("%s=%s",left_value_code_192,right_value_162->c_value))));
                    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_192,left_value_150->type->mPointerNum);
                    __result126__ = (_Bool)0;
                    come_call_finalizer2(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(left_value_code_192) { left_value_code_192 = come_decrement_ref_count2(left_value_code_192, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result126__;
                }
            }
            right_value_id_193=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_162->c_value));
            if(_if_conditional277=right_value_id_193!=-1,            _if_conditional277) {
                remove_object_from_right_values(right_value_id_193,info);
            }
        }
        else {
            if(_if_conditional278=left_value_150->type->mPointerNum>=1,            _if_conditional278) {
                __dec_obj105=come_value_171->c_value;
                come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value217=xsprintf("%s=%s",left_value_code_192,right_value_162->c_value))));
                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            }
            else {
                if(_if_conditional279=left_value_150->type->mPointerNum==0,                _if_conditional279) {
                    __dec_obj106=come_value_171->c_value;
                    come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s=%s",left_value_code_192,right_value_162->c_value))));
                    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_192,left_value_150->type->mPointerNum);
                    __result127__ = (_Bool)0;
                    come_call_finalizer2(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(left_value_code_192) { left_value_code_192 = come_decrement_ref_count2(left_value_code_192, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result127__;
                }
            }
        }
        result_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(left_type_151))));
        come_call_finalizer2(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj107=result_type_194->mArrayNum;
        result_type_194->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value221=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value220=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 878, "struct list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sNodephp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj108=come_value_171->type;
        come_value_171->type=(struct sType*)come_increment_ref_count(result_type_194);
        come_call_finalizer2(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_value_171->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
        add_come_last_code(info,"%s;\n",come_value_171->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(left_value_code_192) { left_value_code_192 = come_decrement_ref_count2(left_value_code_192, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(sType_finalize,result_type_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result128__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result128__;
    come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result104__ = __result_obj__ = self;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result104__;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_152;
_Bool _while_condtional14;
struct list_item$1CVALUEph* prev_it_153;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_152, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_153, 0, sizeof(struct list_item$1CVALUEph*));
            it_152=self->head;
            while(_while_condtional14=it_152!=((void*)0),            _while_condtional14) {
                prev_it_153=it_152;
                it_152=it_152->next;
                come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional239;
struct sNode* result_156;
struct sNode* __result105__;
_Bool _if_conditional240;
struct sNode* __result106__;
struct sNode* result_157;
struct sNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_156, 0, sizeof(struct sNode*));
memset(&result_157, 0, sizeof(struct sNode*));
        if(_if_conditional239=self==((void*)0),        _if_conditional239) {
            memset(&result_156,0,sizeof(struct sNode*));
            __result105__ = __result_obj__ = result_156;
            return __result105__;
        }
        self->it=self->head;
        if(_if_conditional240=self->it,        _if_conditional240) {
            __result106__ = __result_obj__ = self->it->item;
            return __result106__;
        }
        memset(&result_157,0,sizeof(struct sNode*));
        __result107__ = __result_obj__ = result_157;
        return __result107__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
        __result108__ = self==((void*)0)||self->it==((void*)0);
        return __result108__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional241;
struct sNode* result_159;
struct sNode* __result109__;
_Bool _if_conditional242;
struct sNode* __result110__;
struct sNode* result_160;
struct sNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_159, 0, sizeof(struct sNode*));
memset(&result_160, 0, sizeof(struct sNode*));
        if(_if_conditional241=self==((void*)0)||self->it==((void*)0),        _if_conditional241) {
            memset(&result_159,0,sizeof(struct sNode*));
            __result109__ = __result_obj__ = result_159;
            return __result109__;
        }
        self->it=self->it->next;
        if(_if_conditional242=self->it,        _if_conditional242) {
            __result110__ = __result_obj__ = self->it->item;
            return __result110__;
        }
        memset(&result_160,0,sizeof(struct sNode*));
        __result111__ = __result_obj__ = result_160;
        return __result111__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional246;
struct list_item$1CVALUEph* it_168;
int i_169;
_Bool _while_condtional15;
_Bool _if_conditional247;
struct CVALUE* __result114__;
struct CVALUE* default_value_170;
struct CVALUE* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_168, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_169, 0, sizeof(int));
memset(&default_value_170, 0, sizeof(struct CVALUE*));
            if(_if_conditional246=position<0,            _if_conditional246) {
                position+=self->len;
            }
            it_168=self->head;
            i_169=0;
            while(_while_condtional15=it_168!=((void*)0),            _while_condtional15) {
                if(_if_conditional247=position==i_169,                _if_conditional247) {
                    __result114__ = __result_obj__ = it_168->item;
                    return __result114__;
                }
                it_168=it_168->next;
                i_169++;
            }
            memset(&default_value_170,0,sizeof(struct CVALUE*));
            __result115__ = __result_obj__ = default_value_170;
            come_call_finalizer2(CVALUE_finalize,default_value_170, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result115__;
            come_call_finalizer2(CVALUE_finalize,default_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
                __result116__ = self->len;
                return __result116__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
int tmp_173;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
struct list$1sNodeph* __result117__;
_Bool _if_conditional256;
_Bool _if_conditional257;
struct list_item$1sNodeph* it_174;
int i_175;
_Bool _while_condtional16;
_Bool _if_conditional258;
struct list_item$1sNodeph* prev_it_176;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct list_item$1sNodeph* it_177;
int i_178;
_Bool _while_condtional17;
_Bool _if_conditional261;
_Bool _if_conditional262;
struct list_item$1sNodeph* prev_it_179;
struct list_item$1sNodeph* it_180;
struct list_item$1sNodeph* head_prev_it_181;
struct list_item$1sNodeph* tail_it_182;
int i_183;
_Bool _while_condtional18;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct list_item$1sNodeph* prev_it_184;
_Bool _if_conditional266;
_Bool _if_conditional267;
struct list$1sNodeph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_173, 0, sizeof(int));
memset(&it_174, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_175, 0, sizeof(int));
memset(&prev_it_176, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_177, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_178, 0, sizeof(int));
memset(&prev_it_179, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_180, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_181, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_182, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_183, 0, sizeof(int));
memset(&prev_it_184, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional250=head<0,                    _if_conditional250) {
                        head+=self->len;
                    }
                    if(_if_conditional251=tail<0,                    _if_conditional251) {
                        tail+=self->len+1;
                    }
                    if(_if_conditional252=head>tail,                    _if_conditional252) {
                        tmp_173=tail;
                        tail=head;
                        head=tmp_173;
                    }
                    if(_if_conditional253=head<0,                    _if_conditional253) {
                        head=0;
                    }
                    if(_if_conditional254=tail>self->len,                    _if_conditional254) {
                        tail=self->len;
                    }
                    if(_if_conditional255=head==tail,                    _if_conditional255) {
                        __result117__ = __result_obj__ = self;
                        return __result117__;
                    }
                    if(_if_conditional256=head==0&&tail==self->len,                    _if_conditional256) {
                        list$1sNodeph_reset(self);
                    }
                    else {
                        if(_if_conditional257=head==0,                        _if_conditional257) {
                            it_174=self->head;
                            i_175=0;
                            while(_while_condtional16=it_174!=((void*)0),                            _while_condtional16) {
                                if(_if_conditional258=i_175<tail,                                _if_conditional258) {
                                    prev_it_176=it_174;
                                    it_174=it_174->next;
                                    i_175++;
                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->len--;
                                }
                                else {
                                    if(_if_conditional259=i_175==tail,                                    _if_conditional259) {
                                        self->head=it_174;
                                        self->head->prev=((void*)0);
                                        break;
                                    }
                                    else {
                                        it_174=it_174->next;
                                        i_175++;
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional260=tail==self->len,                            _if_conditional260) {
                                it_177=self->head;
                                i_178=0;
                                while(_while_condtional17=it_177!=((void*)0),                                _while_condtional17) {
                                    if(_if_conditional261=i_178==head,                                    _if_conditional261) {
                                        self->tail=it_177->prev;
                                        self->tail->next=((void*)0);
                                    }
                                    if(_if_conditional262=i_178>=head,                                    _if_conditional262) {
                                        prev_it_179=it_177;
                                        it_177=it_177->next;
                                        i_178++;
                                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->len--;
                                    }
                                    else {
                                        it_177=it_177->next;
                                        i_178++;
                                    }
                                }
                            }
                            else {
                                it_180=self->head;
                                head_prev_it_181=((void*)0);
                                tail_it_182=((void*)0);
                                i_183=0;
                                while(_while_condtional18=it_180!=((void*)0),                                _while_condtional18) {
                                    if(_if_conditional263=i_183==head,                                    _if_conditional263) {
                                        head_prev_it_181=it_180->prev;
                                    }
                                    if(_if_conditional264=i_183==tail,                                    _if_conditional264) {
                                        tail_it_182=it_180;
                                    }
                                    if(_if_conditional265=i_183>=head&&i_183<tail,                                    _if_conditional265) {
                                        prev_it_184=it_180;
                                        it_180=it_180->next;
                                        i_183++;
                                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->len--;
                                    }
                                    else {
                                        it_180=it_180->next;
                                        i_183++;
                                    }
                                }
                                if(_if_conditional266=head_prev_it_181!=((void*)0),                                _if_conditional266) {
                                    head_prev_it_181->next=tail_it_182;
                                }
                                if(_if_conditional267=tail_it_182!=((void*)0),                                _if_conditional267) {
                                    tail_it_182->prev=head_prev_it_181;
                                }
                            }
                        }
                    }
                    __result118__ = __result_obj__ = self;
                    return __result118__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional270;
struct CVALUE* result_187;
struct CVALUE* __result119__;
_Bool _if_conditional271;
struct CVALUE* __result120__;
struct CVALUE* result_188;
struct CVALUE* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_187, 0, sizeof(struct CVALUE*));
memset(&result_188, 0, sizeof(struct CVALUE*));
            if(_if_conditional270=self==((void*)0),            _if_conditional270) {
                memset(&result_187,0,sizeof(struct CVALUE*));
                __result119__ = __result_obj__ = result_187;
                return __result119__;
            }
            self->it=self->head;
            if(_if_conditional271=self->it,            _if_conditional271) {
                __result120__ = __result_obj__ = self->it->item;
                return __result120__;
            }
            memset(&result_188,0,sizeof(struct CVALUE*));
            __result121__ = __result_obj__ = result_188;
            return __result121__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
            __result122__ = self==((void*)0)||self->it==((void*)0);
            return __result122__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional272;
struct CVALUE* result_190;
struct CVALUE* __result123__;
_Bool _if_conditional273;
struct CVALUE* __result124__;
struct CVALUE* result_191;
struct CVALUE* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_190, 0, sizeof(struct CVALUE*));
memset(&result_191, 0, sizeof(struct CVALUE*));
            if(_if_conditional272=self==((void*)0)||self->it==((void*)0),            _if_conditional272) {
                memset(&result_190,0,sizeof(struct CVALUE*));
                __result123__ = __result_obj__ = result_190;
                return __result123__;
            }
            self->it=self->it->next;
            if(_if_conditional273=self->it,            _if_conditional273) {
                __result124__ = __result_obj__ = self->it->item;
                return __result124__;
            }
            memset(&result_191,0,sizeof(struct CVALUE*));
            __result125__ = __result_obj__ = result_191;
            return __result125__;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = self->sline;
    return __result129__;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value222;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value222 = (void*)0;
    __result130__ = __result_obj__ = ((char*)(right_value222=__builtin_string(self->sname)));
    if(right_value222) { right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result130__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value223;
char* __dec_obj109;
void* right_value224;
struct list$1sNodeph* __dec_obj110;
void* right_value225;
struct sNode* __dec_obj111;
struct sLoadArrayNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
    self->sline=info->sline;
    __dec_obj109=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(info->sname))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value223) { right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj110=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value224=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj111=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=sNode_clone(left))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value225) { right_value225 = come_decrement_ref_count2(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result131__ = __result_obj__ = self;
    come_call_finalizer2(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result131__;
    come_call_finalizer2(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadArrayNode_terminated(){
void* __result_obj__;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    __result132__ = (_Bool)0;
    return __result132__;
}

char* sLoadArrayNode_kind(){
void* __result_obj__;
void* right_value226;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
    __result133__ = __result_obj__ = ((char*)(right_value226=__builtin_string("sLoadArrayNode")));
    if(right_value226) { right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result133__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_195;
struct list$1sNodeph* array_num_nodes_196;
_Bool _if_conditional283;
_Bool __result134__;
void* right_value227;
struct CVALUE* left_value_197;
void* right_value228;
struct sType* left_type_198;
void* right_value229;
void* right_value230;
struct list$1CVALUEph* array_num_199;
struct list$1sNodeph* o2_saved_200;
struct sNode* it_201;
_Bool _for_condtionalA11;
_Bool _if_conditional284;
_Bool __result135__;
void* right_value231;
struct CVALUE* c_value_202;
void* right_value232;
struct sType* type_203;
char* fun_name_204;
_Bool calling_fun_205;
_Bool _if_conditional285;
void* right_value233;
_Bool _if_conditional286;
void* right_value234;
struct CVALUE* come_value_206;
void* right_value235;
void* right_value236;
struct buffer* buf_207;
struct list$1CVALUEph* o2_saved_208;
struct CVALUE* it_209;
_Bool _for_condtionalA12;
void* right_value237;
void* right_value238;
char* left_value_code_210;
void* right_value239;
char* __dec_obj112;
void* right_value240;
struct sType* result_type_211;
_Bool _if_conditional287;
struct sType* __dec_obj113;
_Bool _if_conditional288;
int n_212;
_Bool _if_conditional289;
void* right_value241;
struct sType* __dec_obj114;
_Bool _if_conditional290;
void* right_value242;
struct sType* __dec_obj115;
_Bool _if_conditional291;
int i_213;
_Bool _for_condtionalA13;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value243;
struct sType* __dec_obj116;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_195, 0, sizeof(struct sNode*));
memset(&array_num_nodes_196, 0, sizeof(struct list$1sNodeph*));
right_value227 = (void*)0;
memset(&left_value_197, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
memset(&left_type_198, 0, sizeof(struct sType*));
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&array_num_199, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_200, 0, sizeof(struct list$1sNodeph*));
memset(&it_201, 0, sizeof(struct sNode*));
right_value231 = (void*)0;
memset(&c_value_202, 0, sizeof(struct CVALUE*));
right_value232 = (void*)0;
memset(&type_203, 0, sizeof(struct sType*));
memset(&fun_name_204, 0, sizeof(char*));
memset(&calling_fun_205, 0, sizeof(_Bool));
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&come_value_206, 0, sizeof(struct CVALUE*));
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&buf_207, 0, sizeof(struct buffer*));
memset(&o2_saved_208, 0, sizeof(struct list$1CVALUEph*));
memset(&it_209, 0, sizeof(struct CVALUE*));
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&left_value_code_210, 0, sizeof(char*));
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&result_type_211, 0, sizeof(struct sType*));
memset(&n_212, 0, sizeof(int));
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&i_213, 0, sizeof(int));
right_value243 = (void*)0;
    left_195=self->mLeft;
    array_num_nodes_196=self->mArrayNum;
    if(_if_conditional283=!node_compile(left_195,info),    _if_conditional283) {
        __result134__ = (_Bool)0;
        return __result134__;
    }
    left_value_197=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_198=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(left_value_197->type))));
    come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    array_num_199=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value230=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value229=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 947, "struct list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(
    o2_saved_200=(array_num_nodes_196),it_201=list$1sNodeph_begin((o2_saved_200)) ,    0;    _for_condtionalA11=    !list$1sNodeph_end((o2_saved_200)) ,    _for_condtionalA11;    it_201=list$1sNodeph_next((o2_saved_200)) ,    0    ){
        if(_if_conditional284=!node_compile(it_201,info),        _if_conditional284) {
            __result135__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result135__;
        }
        c_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_199,(struct CVALUE*)come_increment_ref_count(c_value_202));
        come_call_finalizer2(CVALUE_finalize,c_value_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    type_203=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(left_value_197->type))));
    come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_204="operator_load_element";
    if(_if_conditional285=self->mQuote,    _if_conditional285) {
        calling_fun_205=(_Bool)0;
    }
    else {
        calling_fun_205=operator_overload_fun(type_203,fun_name_204,left_value_197,((struct CVALUE*)(right_value233=list$1CVALUEphp_operator_load_element(array_num_199,0))),info);
        come_call_finalizer2(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional286=!calling_fun_205,    _if_conditional286) {
        come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 972, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buf_207=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value236=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value235=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 974, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_207,left_value_197->c_value);
        for(
        o2_saved_208=(struct list$1CVALUEph*)come_increment_ref_count((array_num_199)),it_209=list$1CVALUEph_begin((o2_saved_208)) ,        0;        _for_condtionalA12=        !list$1CVALUEph_end((o2_saved_208)) ,        _for_condtionalA12;        it_209=list$1CVALUEph_next((o2_saved_208)) ,        0        ){
            buffer_append_str(buf_207,((char*)(right_value237=xsprintf("[%s]",it_209->c_value))));
            if(right_value237) { right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_210=(char*)come_increment_ref_count(((char*)(right_value238=buffer_to_string(buf_207))));
        if(right_value238) { right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj112=come_value_206->c_value;
        come_value_206->c_value=(char*)come_increment_ref_count(((char*)(right_value239=xsprintf("%s",left_value_code_210))));
        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value239) { right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        result_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(left_type_198))));
        come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional287=result_type_211->mOriginalLoadVarType->v1,        _if_conditional287) {
            __dec_obj113=result_type_211;
            result_type_211=(struct sType*)come_increment_ref_count(result_type_211->mOriginalLoadVarType->v1);
            come_call_finalizer2(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional288=list$1sNodeph_length(result_type_211->mArrayNum)>0,        _if_conditional288) {
            n_212=list$1sNodeph_length(result_type_211->mArrayNum)-list$1CVALUEph_length(array_num_199);
            if(_if_conditional289=n_212==0,            _if_conditional289) {
                __dec_obj114=result_type_211;
                result_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_clone(left_type_198))));
                come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional290=left_type_198->mOriginalLoadVarType->v1,                _if_conditional290) {
                    __dec_obj115=result_type_211;
                    result_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(left_type_198->mOriginalLoadVarType->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                list$1sNodeph_reset(result_type_211->mArrayNum);
            }
            else {
                if(_if_conditional291=n_212>0,                _if_conditional291) {
                    for(
                    i_213=0 ,                    0;                    _for_condtionalA13=                    i_213<n_212 ,                    _for_condtionalA13;                    i_213++ ,                    0                    ){
                        list$1sNodeph_delete(result_type_211->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(_if_conditional292=n_212<0,                    _if_conditional292) {
                        list$1sNodeph_reset(result_type_211->mArrayNum);
                        result_type_211->mPointerNum+=n_212;
                        if(_if_conditional293=result_type_211->mPointerNum<0,                        _if_conditional293) {
                            result_type_211->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional294=result_type_211->mPointerNum>0,            _if_conditional294) {
                result_type_211->mPointerNum-=list$1CVALUEph_length(array_num_199);
                if(_if_conditional295=result_type_211->mPointerNum<0,                _if_conditional295) {
                    result_type_211->mPointerNum=0;
                }
            }
        }
        __dec_obj116=come_value_206->type;
        come_value_206->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(result_type_211))));
        come_call_finalizer2(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_206->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_206));
        add_come_last_code(info,"%s;\n",come_value_206->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(left_value_code_210) { left_value_code_210 = come_decrement_ref_count2(left_value_code_210, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(sType_finalize,result_type_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result136__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result136__;
    come_call_finalizer2(CVALUE_finalize,left_value_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    __result137__ = self->sline;
    return __result137__;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value244;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
    __result138__ = __result_obj__ = ((char*)(right_value244=__builtin_string(self->sname)));
    if(right_value244) { right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result138__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value245;
char* __dec_obj117;
void* right_value246;
struct list$1sNodeph* __dec_obj118;
void* right_value247;
struct sNode* __dec_obj119;
struct sLoadRangeArrayNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
    self->sline=info->sline;
    __dec_obj117=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(info->sname))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value245) { right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj118=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value246=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj119=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value247=sNode_clone(left))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value247) { right_value247 = come_decrement_ref_count2(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result139__ = __result_obj__ = self;
    come_call_finalizer2(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result139__;
    come_call_finalizer2(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadRangeArrayNode_terminated(){
void* __result_obj__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __result140__ = (_Bool)0;
    return __result140__;
}

char* sLoadRangeArrayNode_kind(){
void* __result_obj__;
void* right_value248;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
    __result141__ = __result_obj__ = ((char*)(right_value248=__builtin_string("sLoadRangeArrayNode")));
    if(right_value248) { right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result141__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_214;
struct list$1sNodeph* array_num_nodes_215;
_Bool _if_conditional299;
_Bool __result142__;
void* right_value249;
struct CVALUE* left_value_216;
void* right_value250;
struct sType* left_type_217;
void* right_value251;
void* right_value252;
struct list$1CVALUEph* array_num_218;
struct list$1sNodeph* o2_saved_219;
struct sNode* it_220;
_Bool _for_condtionalA14;
_Bool _if_conditional300;
_Bool __result143__;
void* right_value253;
struct CVALUE* c_value_221;
void* right_value254;
struct sType* type_222;
char* fun_name_223;
_Bool calling_fun_224;
_Bool _if_conditional301;
void* right_value255;
void* right_value256;
_Bool _if_conditional302;
void* right_value257;
struct CVALUE* come_value_225;
void* right_value258;
void* right_value259;
struct buffer* buf_226;
struct list$1CVALUEph* o2_saved_227;
struct CVALUE* it_228;
_Bool _for_condtionalA15;
void* right_value260;
void* right_value261;
char* left_value_code_229;
void* right_value262;
char* __dec_obj120;
void* right_value263;
struct sType* result_type_230;
_Bool _if_conditional303;
struct sType* __dec_obj121;
_Bool _if_conditional304;
int n_231;
_Bool _if_conditional305;
void* right_value264;
struct sType* __dec_obj122;
_Bool _if_conditional306;
void* right_value265;
struct sType* __dec_obj123;
_Bool _if_conditional307;
int i_232;
_Bool _for_condtionalA16;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
void* right_value266;
struct sType* __dec_obj124;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_214, 0, sizeof(struct sNode*));
memset(&array_num_nodes_215, 0, sizeof(struct list$1sNodeph*));
right_value249 = (void*)0;
memset(&left_value_216, 0, sizeof(struct CVALUE*));
right_value250 = (void*)0;
memset(&left_type_217, 0, sizeof(struct sType*));
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&array_num_218, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_219, 0, sizeof(struct list$1sNodeph*));
memset(&it_220, 0, sizeof(struct sNode*));
right_value253 = (void*)0;
memset(&c_value_221, 0, sizeof(struct CVALUE*));
right_value254 = (void*)0;
memset(&type_222, 0, sizeof(struct sType*));
memset(&fun_name_223, 0, sizeof(char*));
memset(&calling_fun_224, 0, sizeof(_Bool));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&come_value_225, 0, sizeof(struct CVALUE*));
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&buf_226, 0, sizeof(struct buffer*));
memset(&o2_saved_227, 0, sizeof(struct list$1CVALUEph*));
memset(&it_228, 0, sizeof(struct CVALUE*));
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&left_value_code_229, 0, sizeof(char*));
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&result_type_230, 0, sizeof(struct sType*));
memset(&n_231, 0, sizeof(int));
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&i_232, 0, sizeof(int));
right_value266 = (void*)0;
    left_214=self->mLeft;
    array_num_nodes_215=self->mArrayNum;
    if(_if_conditional299=!node_compile(left_214,info),    _if_conditional299) {
        __result142__ = (_Bool)0;
        return __result142__;
    }
    left_value_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(left_value_216->type))));
    come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    array_num_218=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value252=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value251=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1094, "struct list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(
    o2_saved_219=(array_num_nodes_215),it_220=list$1sNodeph_begin((o2_saved_219)) ,    0;    _for_condtionalA14=    !list$1sNodeph_end((o2_saved_219)) ,    _for_condtionalA14;    it_220=list$1sNodeph_next((o2_saved_219)) ,    0    ){
        if(_if_conditional300=!node_compile(it_220,info),        _if_conditional300) {
            __result143__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result143__;
        }
        c_value_221=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value253=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_218,(struct CVALUE*)come_increment_ref_count(c_value_221));
        come_call_finalizer2(CVALUE_finalize,c_value_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_clone(left_value_216->type))));
    come_call_finalizer2(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_223="operator_load_range_element";
    if(_if_conditional301=self->mQuote,    _if_conditional301) {
        calling_fun_224=(_Bool)0;
    }
    else {
        calling_fun_224=operator_overload_fun2(type_222,fun_name_223,left_value_216,((struct CVALUE*)(right_value255=list$1CVALUEphp_operator_load_element(array_num_218,0))),((struct CVALUE*)(right_value256=list$1CVALUEphp_operator_load_element(array_num_218,1))),info);
        come_call_finalizer2(CVALUE_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional302=!calling_fun_224,    _if_conditional302) {
        come_value_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value257=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1119, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buf_226=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value259=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value258=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1121, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_226,left_value_216->c_value);
        for(
        o2_saved_227=(struct list$1CVALUEph*)come_increment_ref_count((array_num_218)),it_228=list$1CVALUEph_begin((o2_saved_227)) ,        0;        _for_condtionalA15=        !list$1CVALUEph_end((o2_saved_227)) ,        _for_condtionalA15;        it_228=list$1CVALUEph_next((o2_saved_227)) ,        0        ){
            buffer_append_str(buf_226,((char*)(right_value260=xsprintf("[%s]",it_228->c_value))));
            if(right_value260) { right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_229=(char*)come_increment_ref_count(((char*)(right_value261=buffer_to_string(buf_226))));
        if(right_value261) { right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj120=come_value_225->c_value;
        come_value_225->c_value=(char*)come_increment_ref_count(((char*)(right_value262=xsprintf("%s",left_value_code_229))));
        if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        result_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(left_type_217))));
        come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional303=result_type_230->mOriginalLoadVarType->v1,        _if_conditional303) {
            __dec_obj121=result_type_230;
            result_type_230=(struct sType*)come_increment_ref_count(result_type_230->mOriginalLoadVarType->v1);
            come_call_finalizer2(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional304=list$1sNodeph_length(result_type_230->mArrayNum)>0,        _if_conditional304) {
            n_231=list$1sNodeph_length(result_type_230->mArrayNum)-list$1CVALUEph_length(array_num_218);
            if(_if_conditional305=n_231==0,            _if_conditional305) {
                __dec_obj122=result_type_230;
                result_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(left_type_217))));
                come_call_finalizer2(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional306=left_type_217->mOriginalLoadVarType->v1,                _if_conditional306) {
                    __dec_obj123=result_type_230;
                    result_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(left_type_217->mOriginalLoadVarType->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                list$1sNodeph_reset(result_type_230->mArrayNum);
            }
            else {
                if(_if_conditional307=n_231>0,                _if_conditional307) {
                    for(
                    i_232=0 ,                    0;                    _for_condtionalA16=                    i_232<n_231 ,                    _for_condtionalA16;                    i_232++ ,                    0                    ){
                        list$1sNodeph_delete(result_type_230->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(_if_conditional308=n_231<0,                    _if_conditional308) {
                        list$1sNodeph_reset(result_type_230->mArrayNum);
                        result_type_230->mPointerNum+=n_231;
                        if(_if_conditional309=result_type_230->mPointerNum<0,                        _if_conditional309) {
                            result_type_230->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional310=result_type_230->mPointerNum>0,            _if_conditional310) {
                result_type_230->mPointerNum-=list$1CVALUEph_length(array_num_218);
                if(_if_conditional311=result_type_230->mPointerNum<0,                _if_conditional311) {
                    result_type_230->mPointerNum=0;
                }
            }
        }
        __dec_obj124=come_value_225->type;
        come_value_225->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(result_type_230))));
        come_call_finalizer2(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_225->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_225));
        add_come_last_code(info,"%s;\n",come_value_225->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(left_value_code_229) { left_value_code_229 = come_decrement_ref_count2(left_value_code_229, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(sType_finalize,result_type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result144__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result144__;
    come_call_finalizer2(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    __result145__ = self->sline;
    return __result145__;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value267;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value267 = (void*)0;
    __result146__ = __result_obj__ = ((char*)(right_value267=__builtin_string(self->sname)));
    if(right_value267) { right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result146__;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    __result147__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result147__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
struct sNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result148__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(fun_name) { fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result148__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(fun_name) { fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional19;
_Bool range_array_233;
char* p_234;
int sline_235;
_Bool _if_conditional312;
_Bool no_comma_236;
_Bool no_output_err_237;
_Bool no_output_come_code_238;
void* right_value268;
struct sNode* exp_239;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool quote_240;
_Bool _if_conditional315;
void* right_value269;
void* right_value270;
struct list$1sNodeph* array_num_241;
void* right_value271;
struct sNode* node2_242;
_Bool _if_conditional318;
void* right_value275;
struct sNode* node3_246;
void* right_value276;
void* right_value277;
struct sNode* _inf_value2;
struct sLoadRangeArrayNode* _inf_obj_value2;
void* right_value282;
struct sNode* __dec_obj131;
_Bool _if_conditional328;
_Bool quote_248;
_Bool _if_conditional329;
_Bool range_249;
void* right_value283;
void* right_value284;
struct list$1sNodeph* array_num_250;
_Bool _while_condtional20;
_Bool range_array2_251;
char* p_252;
int sline_253;
_Bool _if_conditional330;
_Bool no_comma_254;
_Bool no_output_err_255;
_Bool no_output_come_code_256;
void* right_value285;
struct sNode* exp_257;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
void* right_value286;
struct sNode* node2_258;
_Bool _if_conditional334;
_Bool _if_conditional335;
void* right_value287;
struct sNode* right_node_259;
void* right_value288;
void* right_value289;
struct sNode* _inf_value3;
struct sStoreArrayNode* _inf_obj_value3;
void* right_value295;
struct sNode* __dec_obj136;
void* right_value296;
void* right_value297;
struct sNode* _inf_value4;
struct sLoadArrayNode* _inf_obj_value4;
void* right_value302;
struct sNode* __dec_obj140;
_Bool _if_conditional356;
_Bool no_comma_262;
void* right_value303;
struct sNode* begin_263;
void* right_value304;
struct sNode* end_264;
void* right_value305;
void* right_value306;
struct sNode* _inf_value5;
struct sRangeCheckNode* _inf_obj_value5;
void* right_value312;
struct sNode* __dec_obj145;
_Bool _if_conditional367;
void* right_value313;
void* right_value314;
struct sNode* _inf_value6;
struct sNullCheckNode* _inf_obj_value6;
void* right_value318;
struct sNode* __dec_obj148;
_Bool _if_conditional375;
_Bool _if_conditional376;
void* right_value319;
void* right_value320;
void* right_value321;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* right_value325;
struct sNode* __dec_obj151;
void* right_value326;
char* field_name_268;
_Bool _if_conditional384;
void* right_value327;
struct sNode* right_node_269;
void* right_value328;
void* right_value329;
struct sNode* _inf_value8;
struct sStoreFieldNode* _inf_obj_value8;
void* right_value335;
struct sNode* __dec_obj156;
_Bool _if_conditional395;
_Bool _if_conditional396;
void* right_value336;
void* right_value337;
struct sNode* __dec_obj157;
_Bool _if_conditional397;
void* right_value338;
void* right_value339;
struct sNode* __dec_obj158;
void* right_value340;
void* right_value341;
struct sNode* __dec_obj159;
void* right_value342;
void* right_value343;
struct sNode* _inf_value9;
struct sLoadFieldNode* _inf_obj_value9;
void* right_value348;
struct sNode* __dec_obj163;
void* right_value349;
struct sNode* node2_272;
_Bool _if_conditional406;
struct sNode* __dec_obj164;
struct sNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&range_array_233, 0, sizeof(_Bool));
memset(&p_234, 0, sizeof(char*));
memset(&sline_235, 0, sizeof(int));
memset(&no_comma_236, 0, sizeof(_Bool));
memset(&no_output_err_237, 0, sizeof(_Bool));
memset(&no_output_come_code_238, 0, sizeof(_Bool));
right_value268 = (void*)0;
memset(&exp_239, 0, sizeof(struct sNode*));
memset(&quote_240, 0, sizeof(_Bool));
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&array_num_241, 0, sizeof(struct list$1sNodeph*));
right_value271 = (void*)0;
memset(&node2_242, 0, sizeof(struct sNode*));
right_value275 = (void*)0;
memset(&node3_246, 0, sizeof(struct sNode*));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value282 = (void*)0;
memset(&quote_248, 0, sizeof(_Bool));
memset(&range_249, 0, sizeof(_Bool));
right_value283 = (void*)0;
right_value284 = (void*)0;
memset(&array_num_250, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_251, 0, sizeof(_Bool));
memset(&p_252, 0, sizeof(char*));
memset(&sline_253, 0, sizeof(int));
memset(&no_comma_254, 0, sizeof(_Bool));
memset(&no_output_err_255, 0, sizeof(_Bool));
memset(&no_output_come_code_256, 0, sizeof(_Bool));
right_value285 = (void*)0;
memset(&exp_257, 0, sizeof(struct sNode*));
right_value286 = (void*)0;
memset(&node2_258, 0, sizeof(struct sNode*));
right_value287 = (void*)0;
memset(&right_node_259, 0, sizeof(struct sNode*));
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value302 = (void*)0;
memset(&no_comma_262, 0, sizeof(_Bool));
right_value303 = (void*)0;
memset(&begin_263, 0, sizeof(struct sNode*));
right_value304 = (void*)0;
memset(&end_264, 0, sizeof(struct sNode*));
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&field_name_268, 0, sizeof(char*));
right_value327 = (void*)0;
memset(&right_node_269, 0, sizeof(struct sNode*));
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
memset(&node2_272, 0, sizeof(struct sNode*));
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        range_array_233=(_Bool)0;
        {
            p_234=info->p;
            sline_235=info->sline;
            if(_if_conditional312=*info->p==91,            _if_conditional312) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_236=info->no_comma;
                no_output_err_237=info->no_output_err;
                no_output_come_code_238=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_239=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=expression_v13(info))));
                if(right_value268) { right_value268 = come_decrement_ref_count2(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_236;
                info->no_output_err=no_output_err_237;
                info->no_output_come_code=no_output_come_code_238;
                if(_if_conditional313=*info->p==46&&*(info->p+1)==46,                _if_conditional313) {
                    range_array_233=(_Bool)1;
                }
                if(exp_239) { exp_239 = come_decrement_ref_count2(exp_239, ((struct sNode*)exp_239)->finalize, ((struct sNode*)exp_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_234;
            info->sline=sline_235;
        }
        if(_if_conditional314=range_array_233&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional314) {
            quote_240=*info->p==92;
            if(_if_conditional315=quote_240,            _if_conditional315) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_241=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value270=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value269=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1247, "struct list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            skip_pointer_attribute(info);
            node2_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=expression_v13(info))));
            if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1sNodeph_push_back(array_num_241,(struct sNode*)come_increment_ref_count(node2_242));
            if(_if_conditional318=*info->p==46&&*(info->p+1)==46,            _if_conditional318) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value275=expression_v13(info))));
                if(right_value275) { right_value275 = come_decrement_ref_count2(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                list$1sNodeph_push_back(array_num_241,(struct sNode*)come_increment_ref_count(node3_246));
                expected_next_character(93,info);
                if(node3_246) { node3_246 = come_decrement_ref_count2(node3_246, ((struct sNode*)node3_246)->finalize, ((struct sNode*)node3_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1268, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value277=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value276=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1268, "struct sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_241),quote_240,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value2->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value2->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value2->sline=(void*)sLoadRangeArrayNode_sline;
            _inf_value2->sname=(void*)sLoadRangeArrayNode_sname;
            _inf_value2->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value2->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj131=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=_inf_value2)));
            if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            come_call_finalizer2(list$1sNodephp_finalize,array_num_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node2_242) { node2_242 = come_decrement_ref_count2(node2_242, ((struct sNode*)node2_242)->finalize, ((struct sNode*)node2_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional328=!range_array_233&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional328) {
                quote_248=*info->p==92;
                if(_if_conditional329=quote_248,                _if_conditional329) {
                    info->p++;
                }
                range_249=(_Bool)0;
                array_num_250=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value284=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value283=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1277, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional20=1,                _while_condtional20) {
                    range_array2_251=(_Bool)0;
                    {
                        p_252=info->p;
                        sline_253=info->sline;
                        if(_if_conditional330=*info->p==91,                        _if_conditional330) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_254=info->no_comma;
                            no_output_err_255=info->no_output_err;
                            no_output_come_code_256=info->no_output_come_code;
                            info->no_output_err=(_Bool)1;
                            info->no_comma=(_Bool)1;
                            info->no_output_come_code=(_Bool)1;
                            exp_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=expression_v13(info))));
                            if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_254;
                            info->no_output_err=no_output_err_255;
                            info->no_output_come_code=no_output_come_code_256;
                            if(_if_conditional331=*info->p==46&&*(info->p+1)==46,                            _if_conditional331) {
                                range_array2_251=(_Bool)1;
                            }
                            if(exp_257) { exp_257 = come_decrement_ref_count2(exp_257, ((struct sNode*)exp_257)->finalize, ((struct sNode*)exp_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        info->p=p_252;
                        info->sline=sline_253;
                    }
                    if(_if_conditional332=range_array2_251,                    _if_conditional332) {
                        break;
                    }
                    else {
                        if(_if_conditional333=*info->p==91,                        _if_conditional333) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            skip_pointer_attribute(info);
                            node2_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=expression_v13(info))));
                            if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            list$1sNodeph_push_back(array_num_250,(struct sNode*)come_increment_ref_count(node2_258));
                            if(_if_conditional334=*info->p==93,                            _if_conditional334) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                err_msg(info,"require ] character");
                                exit(2);
                            }
                            if(node2_258) { node2_258 = come_decrement_ref_count2(node2_258, ((struct sNode*)node2_258)->finalize, ((struct sNode*)node2_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            break;
                        }
                    }
                }
                if(_if_conditional335=*info->p==61&&*(info->p+1)!=61,                _if_conditional335) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_node_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=expression_v13(info))));
                    if(right_value287) { right_value287 = come_decrement_ref_count2(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1345, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sStoreArrayNode*)(right_value289=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value288=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1345, "struct sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_259),(struct list$1sNodeph*)come_increment_ref_count(array_num_250),quote_248,info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value3->clone=(void*)sStoreArrayNode_clone;
                    _inf_value3->compile=(void*)sStoreArrayNode_compile;
                    _inf_value3->sline=(void*)sStoreArrayNode_sline;
                    _inf_value3->sname=(void*)sStoreArrayNode_sname;
                    _inf_value3->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value3->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj136=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=_inf_value3)));
                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sStoreArrayNode_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sStoreArrayNode_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(right_node_259) { right_node_259 = come_decrement_ref_count2(right_node_259, ((struct sNode*)right_node_259)->finalize, ((struct sNode*)right_node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1348, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadArrayNode*)(right_value297=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value296=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1348, "struct sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_250),quote_248,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value4->clone=(void*)sLoadArrayNode_clone;
                    _inf_value4->compile=(void*)sLoadArrayNode_compile;
                    _inf_value4->sline=(void*)sLoadArrayNode_sline;
                    _inf_value4->sname=(void*)sLoadArrayNode_sname;
                    _inf_value4->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value4->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj140=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=_inf_value4)));
                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sLoadArrayNode_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLoadArrayNode_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value302) { right_value302 = come_decrement_ref_count2(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                come_call_finalizer2(list$1sNodephp_finalize,array_num_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional356=*info->p==33&&*(info->p+1)==123,                _if_conditional356) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    no_comma_262=info->no_comma;
                    info->no_comma=(_Bool)1;
                    begin_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=expression_v13(info))));
                    if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_262;
                    expected_next_character(44,info);
                    end_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=expression_v13(info))));
                    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    expected_next_character(125,info);
                    parse_sharp_v5(info);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1368, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sRangeCheckNode*)(right_value306=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value305=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1368, "struct sRangeCheckNode")))),node,begin_263,end_264,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value5->clone=(void*)sRangeCheckNode_clone;
                    _inf_value5->compile=(void*)sRangeCheckNode_compile;
                    _inf_value5->sline=(void*)sRangeCheckNode_sline;
                    _inf_value5->sname=(void*)sRangeCheckNode_sname;
                    _inf_value5->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value5->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj145=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=_inf_value5)));
                    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sRangeCheckNode_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sRangeCheckNode_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(begin_263) { begin_263 = come_decrement_ref_count2(begin_263, ((struct sNode*)begin_263)->finalize, ((struct sNode*)begin_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(end_264) { end_264 = come_decrement_ref_count2(end_264, ((struct sNode*)end_264)->finalize, ((struct sNode*)end_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional367=*info->p==33&&*(info->p+1)!=61,                    _if_conditional367) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1376, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sNullCheckNode*)(right_value314=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value313=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1376, "struct sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value6->clone=(void*)sNullCheckNode_clone;
                        _inf_value6->compile=(void*)sNullCheckNode_compile;
                        _inf_value6->sline=(void*)sNullCheckNode_sline;
                        _inf_value6->sname=(void*)sNullCheckNode_sname;
                        _inf_value6->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value6->kind=(void*)sNullCheckNode_kind;
                        __dec_obj148=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=_inf_value6)));
                        if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
                        come_call_finalizer2(sNullCheckNode_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sNullCheckNode_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    else {
                        if(_if_conditional375=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                        _if_conditional375) {
                            if(_if_conditional376=*info->p==46,                            _if_conditional376) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1388, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sNullCheckNode*)(right_value321=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value319=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1388, "struct sNullCheckNode")))),((struct sNode*)(right_value320=sNode_clone(node))),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sNullCheckNode_finalize;
                            _inf_value7->clone=(void*)sNullCheckNode_clone;
                            _inf_value7->compile=(void*)sNullCheckNode_compile;
                            _inf_value7->sline=(void*)sNullCheckNode_sline;
                            _inf_value7->sname=(void*)sNullCheckNode_sname;
                            _inf_value7->terminated=(void*)sNullCheckNode_terminated;
                            _inf_value7->kind=(void*)sNullCheckNode_kind;
                            __dec_obj151=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=_inf_value7)));
                            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
                            come_call_finalizer2(sNullCheckNode_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value320) { right_value320 = come_decrement_ref_count2(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            come_call_finalizer2(sNullCheckNode_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value325) { right_value325 = come_decrement_ref_count2(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            parse_sharp_v5(info);
                            field_name_268=(char*)come_increment_ref_count(((char*)(right_value326=parse_word(info))));
                            if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                            parse_sharp_v5(info);
                            if(_if_conditional384=*info->p==61&&*(info->p+1)!=61,                            _if_conditional384) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                right_node_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=expression_v13(info))));
                                if(right_value327) { right_value327 = come_decrement_ref_count2(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1404, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sStoreFieldNode*)(right_value329=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value328=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1404, "struct sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_269),(char*)come_increment_ref_count(field_name_268),info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sStoreFieldNode_finalize;
                                _inf_value8->clone=(void*)sStoreFieldNode_clone;
                                _inf_value8->compile=(void*)sStoreFieldNode_compile;
                                _inf_value8->sline=(void*)sStoreFieldNode_sline;
                                _inf_value8->sname=(void*)sStoreFieldNode_sname;
                                _inf_value8->terminated=(void*)sStoreFieldNode_terminated;
                                _inf_value8->kind=(void*)sStoreFieldNode_kind;
                                __dec_obj156=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=_inf_value8)));
                                if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                                come_call_finalizer2(sStoreFieldNode_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sStoreFieldNode_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value335) { right_value335 = come_decrement_ref_count2(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(right_node_269) { right_node_269 = come_decrement_ref_count2(right_node_269, ((struct sNode*)right_node_269)->finalize, ((struct sNode*)right_node_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional395=*info->p==40||*info->p==123||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                _if_conditional395) {
                                    if(_if_conditional396=string_operator_equals(field_name_268,"if"),                                    _if_conditional396) {
                                        __dec_obj157=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=sNode_clone(node)))),info))));
                                        if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        if(right_value337) { right_value337 = come_decrement_ref_count2(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    else {
                                        if(_if_conditional397=string_operator_equals(field_name_268,"elif"),                                        _if_conditional397) {
                                            __dec_obj158=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=sNode_clone(node)))),info))));
                                            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value338) { right_value338 = come_decrement_ref_count2(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value339) { right_value339 = come_decrement_ref_count2(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            __dec_obj159=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_268),info))));
                                            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value340) { right_value340 = come_decrement_ref_count2(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                    }
                                }
                                else {
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1418, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sLoadFieldNode*)(right_value343=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value342=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1418, "struct sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_268),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sLoadFieldNode_finalize;
                                    _inf_value9->clone=(void*)sLoadFieldNode_clone;
                                    _inf_value9->compile=(void*)sLoadFieldNode_compile;
                                    _inf_value9->sline=(void*)sLoadFieldNode_sline;
                                    _inf_value9->sname=(void*)sLoadFieldNode_sname;
                                    _inf_value9->terminated=(void*)sLoadFieldNode_terminated;
                                    _inf_value9->kind=(void*)sLoadFieldNode_kind;
                                    __dec_obj163=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=_inf_value9)));
                                    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                                    come_call_finalizer2(sLoadFieldNode_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sLoadFieldNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value348) { right_value348 = come_decrement_ref_count2(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                            if(field_name_268) { field_name_268 = come_decrement_ref_count2(field_name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                        }
                        else {
                            node2_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                            if(right_value349) { right_value349 = come_decrement_ref_count2(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional406=node2_272==((void*)0),                            _if_conditional406) {
                                if(node2_272) { node2_272 = come_decrement_ref_count2(node2_272, ((struct sNode*)node2_272)->finalize, ((struct sNode*)node2_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                break;
                            }
                            __dec_obj164=node;
                            node=(struct sNode*)come_increment_ref_count(node2_272);
                            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node2_272) { node2_272 = come_decrement_ref_count2(node2_272, ((struct sNode*)node2_272)->finalize, ((struct sNode*)node2_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    __result166__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result166__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional316;
void* right_value272;
struct list_item$1sNodeph* litem_243;
struct sNode* __dec_obj125;
_Bool _if_conditional317;
void* right_value273;
struct list_item$1sNodeph* litem_244;
struct sNode* __dec_obj126;
void* right_value274;
struct list_item$1sNodeph* litem_245;
struct sNode* __dec_obj127;
struct list$1sNodeph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value272 = (void*)0;
memset(&litem_243, 0, sizeof(struct list_item$1sNodeph*));
right_value273 = (void*)0;
memset(&litem_244, 0, sizeof(struct list_item$1sNodeph*));
right_value274 = (void*)0;
memset(&litem_245, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional316=self->len==0,                _if_conditional316) {
                    litem_243=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 225, "struct list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_243->prev=((void*)0);
                    litem_243->next=((void*)0);
                    __dec_obj125=litem_243->item;
                    litem_243->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_243;
                    self->head=litem_243;
                }
                else {
                    if(_if_conditional317=self->len==1,                    _if_conditional317) {
                        litem_244=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 235, "struct list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_244->prev=self->head;
                        litem_244->next=((void*)0);
                        __dec_obj126=litem_244->item;
                        litem_244->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_244;
                        self->head->next=litem_244;
                    }
                    else {
                        litem_245=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value274=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 245, "struct list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_245->prev=self->tail;
                        litem_245->next=((void*)0);
                        __dec_obj127=litem_245->item;
                        litem_245->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_245;
                        self->tail=litem_245;
                    }
                }
                self->len++;
                __result149__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result149__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional319=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional319) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional320=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional320) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional321=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional321) {
                    if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional322;
struct sLoadRangeArrayNode* __result150__;
void* right_value278;
struct sLoadRangeArrayNode* result_247;
_Bool _if_conditional323;
void* right_value279;
struct sNode* __dec_obj128;
_Bool _if_conditional324;
void* right_value280;
struct list$1sNodeph* __dec_obj129;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
void* right_value281;
char* __dec_obj130;
struct sLoadRangeArrayNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
memset(&result_247, 0, sizeof(struct sLoadRangeArrayNode*));
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
                if(_if_conditional322=self==(void*)0,                _if_conditional322) {
                    __result150__ = __result_obj__ = (void*)0;
                    return __result150__;
                }
                result_247=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value278=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode"))));
                come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional323=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional323) {
                    __dec_obj128=result_247->mLeft;
                    result_247->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=sNode_clone(self->mLeft))));
                    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value279) { right_value279 = come_decrement_ref_count2(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional324=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional324) {
                    __dec_obj129=result_247->mArrayNum;
                    result_247->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value280=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional325=self!=((void*)0),                _if_conditional325) {
                    result_247->mQuote=self->mQuote;
                }
                if(_if_conditional326=self!=((void*)0),                _if_conditional326) {
                    result_247->sline=self->sline;
                }
                if(_if_conditional327=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional327) {
                    __dec_obj130=result_247->sname;
                    result_247->sname=(char*)come_increment_ref_count(((char*)(right_value281=string_clone(self->sname))));
                    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                }
                __result151__ = __result_obj__ = result_247;
                come_call_finalizer2(sLoadRangeArrayNode_finalize,result_247, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result151__;
                come_call_finalizer2(sLoadRangeArrayNode_finalize,result_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional336=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional336) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional337=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional337) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional338=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional338) {
                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional339=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional339) {
                            if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional340;
struct sStoreArrayNode* __result152__;
void* right_value290;
struct sStoreArrayNode* result_260;
_Bool _if_conditional341;
void* right_value291;
struct sNode* __dec_obj132;
_Bool _if_conditional342;
void* right_value292;
struct sNode* __dec_obj133;
_Bool _if_conditional343;
void* right_value293;
struct list$1sNodeph* __dec_obj134;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool _if_conditional346;
void* right_value294;
char* __dec_obj135;
struct sStoreArrayNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value290 = (void*)0;
memset(&result_260, 0, sizeof(struct sStoreArrayNode*));
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
                        if(_if_conditional340=self==(void*)0,                        _if_conditional340) {
                            __result152__ = __result_obj__ = (void*)0;
                            return __result152__;
                        }
                        result_260=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value290=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode"))));
                        come_call_finalizer2(sStoreArrayNode_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional341=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional341) {
                            __dec_obj132=result_260->mLeft;
                            result_260->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=sNode_clone(self->mLeft))));
                            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional342=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional342) {
                            __dec_obj133=result_260->mRight;
                            result_260->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value292=sNode_clone(self->mRight))));
                            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value292) { right_value292 = come_decrement_ref_count2(right_value292, ((struct sNode*)right_value292)->finalize, ((struct sNode*)right_value292)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional343=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional343) {
                            __dec_obj134=result_260->mArrayNum;
                            result_260->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value293=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional344=self!=((void*)0),                        _if_conditional344) {
                            result_260->mQuote=self->mQuote;
                        }
                        if(_if_conditional345=self!=((void*)0),                        _if_conditional345) {
                            result_260->sline=self->sline;
                        }
                        if(_if_conditional346=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional346) {
                            __dec_obj135=result_260->sname;
                            result_260->sname=(char*)come_increment_ref_count(((char*)(right_value294=string_clone(self->sname))));
                            if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0); }
                            if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                        }
                        __result153__ = __result_obj__ = result_260;
                        come_call_finalizer2(sStoreArrayNode_finalize,result_260, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result153__;
                        come_call_finalizer2(sStoreArrayNode_finalize,result_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool _if_conditional349;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional347=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional347) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional348=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional348) {
                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional349=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional349) {
                            if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional350;
struct sLoadArrayNode* __result154__;
void* right_value298;
struct sLoadArrayNode* result_261;
_Bool _if_conditional351;
void* right_value299;
struct sNode* __dec_obj137;
_Bool _if_conditional352;
void* right_value300;
struct list$1sNodeph* __dec_obj138;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
void* right_value301;
char* __dec_obj139;
struct sLoadArrayNode* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value298 = (void*)0;
memset(&result_261, 0, sizeof(struct sLoadArrayNode*));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
                        if(_if_conditional350=self==(void*)0,                        _if_conditional350) {
                            __result154__ = __result_obj__ = (void*)0;
                            return __result154__;
                        }
                        result_261=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value298=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode"))));
                        come_call_finalizer2(sLoadArrayNode_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional351=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional351) {
                            __dec_obj137=result_261->mLeft;
                            result_261->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=sNode_clone(self->mLeft))));
                            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value299) { right_value299 = come_decrement_ref_count2(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional352=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional352) {
                            __dec_obj138=result_261->mArrayNum;
                            result_261->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value300=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional353=self!=((void*)0),                        _if_conditional353) {
                            result_261->mQuote=self->mQuote;
                        }
                        if(_if_conditional354=self!=((void*)0),                        _if_conditional354) {
                            result_261->sline=self->sline;
                        }
                        if(_if_conditional355=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional355) {
                            __dec_obj139=result_261->sname;
                            result_261->sname=(char*)come_increment_ref_count(((char*)(right_value301=string_clone(self->sname))));
                            if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0); }
                            if(right_value301) { right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                        }
                        __result155__ = __result_obj__ = result_261;
                        come_call_finalizer2(sLoadArrayNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result155__;
                        come_call_finalizer2(sLoadArrayNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional357=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional357) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional358=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional358) {
                            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional359=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional359) {
                            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional360=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional360) {
                            if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional361;
struct sRangeCheckNode* __result156__;
void* right_value307;
struct sRangeCheckNode* result_265;
_Bool _if_conditional362;
void* right_value308;
struct sNode* __dec_obj141;
_Bool _if_conditional363;
void* right_value309;
struct sNode* __dec_obj142;
_Bool _if_conditional364;
void* right_value310;
struct sNode* __dec_obj143;
_Bool _if_conditional365;
_Bool _if_conditional366;
void* right_value311;
char* __dec_obj144;
struct sRangeCheckNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value307 = (void*)0;
memset(&result_265, 0, sizeof(struct sRangeCheckNode*));
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
                        if(_if_conditional361=self==(void*)0,                        _if_conditional361) {
                            __result156__ = __result_obj__ = (void*)0;
                            return __result156__;
                        }
                        result_265=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value307=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "struct sRangeCheckNode"))));
                        come_call_finalizer2(sRangeCheckNode_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional362=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional362) {
                            __dec_obj141=result_265->mLeft;
                            result_265->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(self->mLeft))));
                            if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional363=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional363) {
                            __dec_obj142=result_265->mBegin;
                            result_265->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=sNode_clone(self->mBegin))));
                            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional364=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional364) {
                            __dec_obj143=result_265->mEnd;
                            result_265->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value310=sNode_clone(self->mEnd))));
                            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value310) { right_value310 = come_decrement_ref_count2(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional365=self!=((void*)0),                        _if_conditional365) {
                            result_265->sline=self->sline;
                        }
                        if(_if_conditional366=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional366) {
                            __dec_obj144=result_265->sname;
                            result_265->sname=(char*)come_increment_ref_count(((char*)(right_value311=string_clone(self->sname))));
                            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0); }
                            if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                        }
                        __result157__ = __result_obj__ = result_265;
                        come_call_finalizer2(sRangeCheckNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result157__;
                        come_call_finalizer2(sRangeCheckNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional377;
_Bool _if_conditional378;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional377=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional377) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional378=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional378) {
                                    if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional379;
struct sNullCheckNode* __result160__;
void* right_value322;
struct sNullCheckNode* result_267;
_Bool _if_conditional380;
void* right_value323;
struct sNode* __dec_obj149;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
void* right_value324;
char* __dec_obj150;
struct sNullCheckNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value322 = (void*)0;
memset(&result_267, 0, sizeof(struct sNullCheckNode*));
right_value323 = (void*)0;
right_value324 = (void*)0;
                                if(_if_conditional379=self==(void*)0,                                _if_conditional379) {
                                    __result160__ = __result_obj__ = (void*)0;
                                    return __result160__;
                                }
                                result_267=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value322=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "struct sNullCheckNode"))));
                                come_call_finalizer2(sNullCheckNode_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional380=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional380) {
                                    __dec_obj149=result_267->mLeft;
                                    result_267->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=sNode_clone(self->mLeft))));
                                    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value323) { right_value323 = come_decrement_ref_count2(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional381=self!=((void*)0),                                _if_conditional381) {
                                    result_267->mOnlyNullCecker=self->mOnlyNullCecker;
                                }
                                if(_if_conditional382=self!=((void*)0),                                _if_conditional382) {
                                    result_267->sline=self->sline;
                                }
                                if(_if_conditional383=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional383) {
                                    __dec_obj150=result_267->sname;
                                    result_267->sname=(char*)come_increment_ref_count(((char*)(right_value324=string_clone(self->sname))));
                                    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value324) { right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                }
                                __result161__ = __result_obj__ = result_267;
                                come_call_finalizer2(sNullCheckNode_finalize,result_267, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result161__;
                                come_call_finalizer2(sNullCheckNode_finalize,result_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional385=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional385) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional386=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional386) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional387=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional387) {
                                        if(self->mName) { self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                    }
                                    if(_if_conditional388=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional388) {
                                        if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                    }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional389;
struct sStoreFieldNode* __result162__;
void* right_value330;
struct sStoreFieldNode* result_270;
_Bool _if_conditional390;
void* right_value331;
struct sNode* __dec_obj152;
_Bool _if_conditional391;
void* right_value332;
struct sNode* __dec_obj153;
_Bool _if_conditional392;
void* right_value333;
char* __dec_obj154;
_Bool _if_conditional393;
_Bool _if_conditional394;
void* right_value334;
char* __dec_obj155;
struct sStoreFieldNode* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value330 = (void*)0;
memset(&result_270, 0, sizeof(struct sStoreFieldNode*));
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
                                    if(_if_conditional389=self==(void*)0,                                    _if_conditional389) {
                                        __result162__ = __result_obj__ = (void*)0;
                                        return __result162__;
                                    }
                                    result_270=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value330=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode"))));
                                    come_call_finalizer2(sStoreFieldNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional390=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional390) {
                                        __dec_obj152=result_270->mLeft;
                                        result_270->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=sNode_clone(self->mLeft))));
                                        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional391=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional391) {
                                        __dec_obj153=result_270->mRight;
                                        result_270->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value332=sNode_clone(self->mRight))));
                                        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value332) { right_value332 = come_decrement_ref_count2(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional392=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional392) {
                                        __dec_obj154=result_270->mName;
                                        result_270->mName=(char*)come_increment_ref_count(((char*)(right_value333=string_clone(self->mName))));
                                        if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                        if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                    }
                                    if(_if_conditional393=self!=((void*)0),                                    _if_conditional393) {
                                        result_270->sline=self->sline;
                                    }
                                    if(_if_conditional394=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional394) {
                                        __dec_obj155=result_270->sname;
                                        result_270->sname=(char*)come_increment_ref_count(((char*)(right_value334=string_clone(self->sname))));
                                        if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                        if(right_value334) { right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                    }
                                    __result163__ = __result_obj__ = result_270;
                                    come_call_finalizer2(sStoreFieldNode_finalize,result_270, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result163__;
                                    come_call_finalizer2(sStoreFieldNode_finalize,result_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional398=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional398) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional399=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional399) {
                                            if(self->mName) { self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                        }
                                        if(_if_conditional400=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional400) {
                                            if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                        }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional401;
struct sLoadFieldNode* __result164__;
void* right_value344;
struct sLoadFieldNode* result_271;
_Bool _if_conditional402;
void* right_value345;
struct sNode* __dec_obj160;
_Bool _if_conditional403;
void* right_value346;
char* __dec_obj161;
_Bool _if_conditional404;
_Bool _if_conditional405;
void* right_value347;
char* __dec_obj162;
struct sLoadFieldNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value344 = (void*)0;
memset(&result_271, 0, sizeof(struct sLoadFieldNode*));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
                                        if(_if_conditional401=self==(void*)0,                                        _if_conditional401) {
                                            __result164__ = __result_obj__ = (void*)0;
                                            return __result164__;
                                        }
                                        result_271=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value344=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode"))));
                                        come_call_finalizer2(sLoadFieldNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional402=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional402) {
                                            __dec_obj160=result_271->mLeft;
                                            result_271->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=sNode_clone(self->mLeft))));
                                            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value345) { right_value345 = come_decrement_ref_count2(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional403=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional403) {
                                            __dec_obj161=result_271->mName;
                                            result_271->mName=(char*)come_increment_ref_count(((char*)(right_value346=string_clone(self->mName))));
                                            if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                            if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                        }
                                        if(_if_conditional404=self!=((void*)0),                                        _if_conditional404) {
                                            result_271->sline=self->sline;
                                        }
                                        if(_if_conditional405=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional405) {
                                            __dec_obj162=result_271->sname;
                                            result_271->sname=(char*)come_increment_ref_count(((char*)(right_value347=string_clone(self->sname))));
                                            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                            if(right_value347) { right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                        }
                                        __result165__ = __result_obj__ = result_271;
                                        come_call_finalizer2(sLoadFieldNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result165__;
                                        come_call_finalizer2(sLoadFieldNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

