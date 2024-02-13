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
struct optional$2sFunphbool
{
    struct sFun* v1;
    _Bool v2;
};
struct sStoreFieldNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
    int sline;
    char* sname;
};
struct optional$2sClassphbool
{
    struct sClass* v1;
    _Bool v2;
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
struct sExceptionGetValueNode
{
    struct sNode* mLeft;
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

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

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
static struct optional$2sFunphbool* optional$2sFunphbool_initialize(struct optional$2sFunphbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunphboolp_finalize(struct optional$2sFunphbool* self);
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
static struct optional$2sClassphbool* optional$2sClassphbool_initialize(struct optional$2sClassphbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClassphboolp_finalize(struct optional$2sClassphbool* self);
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

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info);

_Bool sExceptionGetValueNode_terminated();

_Bool compiletime_get_exception_value(struct sInfo* info);

char* sExceptionGetValueNode_kind();

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info);

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info);

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info);

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

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self);
static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self);
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
void* right_value53;
void* right_value54;
char* __dec_obj31;
int i_43;
_Bool _for_condtionalA1;
void* right_value55;
char* new_fun_name_44;
void* right_value56;
_Bool _if_conditional129;
void* right_value57;
char* __dec_obj32;
_Bool _if_conditional130;
void* right_value58;
_Bool result_45;
_Bool _if_conditional131;
void* right_value59;
struct CVALUE* come_value_46;
char* left_value2_47;
void* right_value60;
void* right_value61;
void* right_value62;
void* right_value63;
_Bool _if_conditional136;
void* right_value64;
void* right_value65;
char* __dec_obj33;
void* right_value66;
char* __dec_obj34;
char* middle_value2_51;
void* right_value67;
void* right_value68;
void* right_value69;
void* right_value70;
_Bool _if_conditional137;
void* right_value71;
void* right_value72;
char* __dec_obj35;
void* right_value73;
char* __dec_obj36;
char* right_value2_52;
void* right_value74;
void* right_value75;
void* right_value76;
void* right_value77;
_Bool _if_conditional138;
void* right_value78;
void* right_value79;
char* __dec_obj37;
void* right_value80;
char* __dec_obj38;
void* right_value81;
void* right_value82;
void* right_value83;
void* right_value84;
void* right_value85;
char* __dec_obj39;
void* right_value86;
struct sType* result_type1_53;
void* right_value87;
struct sType* result_type2_54;
void* right_value88;
struct sType* __dec_obj40;
_Bool _if_conditional139;
void* right_value89;
char* __dec_obj41;
void* right_value90;
char* __dec_obj42;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&i_43, 0, sizeof(int));
right_value55 = (void*)0;
memset(&new_fun_name_44, 0, sizeof(char*));
right_value56 = (void*)0;
right_value57 = (void*)0;
right_value58 = (void*)0;
memset(&result_45, 0, sizeof(_Bool));
right_value59 = (void*)0;
memset(&come_value_46, 0, sizeof(struct CVALUE*));
memset(&left_value2_47, 0, sizeof(char*));
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value65 = (void*)0;
right_value66 = (void*)0;
memset(&middle_value2_51, 0, sizeof(char*));
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
memset(&right_value2_52, 0, sizeof(char*));
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
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&result_type1_53, 0, sizeof(struct sType*));
right_value87 = (void*)0;
memset(&result_type2_54, 0, sizeof(struct sType*));
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44, right_value44 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional91=generics_type_29->mNoSolvedGenericsType->v1,    _if_conditional91) {
        __dec_obj28=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(generics_type_29->mNoSolvedGenericsType->v1);
        if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    operator_fun_33=((void*)0);
    if(_if_conditional92=type->mNoSolvedGenericsType->v1,    _if_conditional92) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional93=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional93) {
        none_generics_name_34=(char*)come_increment_ref_count(((char*)(right_value45=get_none_generics_name(type->mClass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45, right_value45 = (void*)0;
        __freed_obj__ = 0;
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=solve_generics(type,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value46, right_value46 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj29=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value47, right_value47 = (void*)0;
        __freed_obj__ = 0;
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value48, right_value48 = (void*)0;
        __freed_obj__ = 0;
        generics_fun_39=((struct sGenericsFun*)(right_value49=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value49, right_value49 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional107=generics_fun_39,        _if_conditional107) {
            if(_if_conditional108=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(fun_name2_32)))),generics_fun_39,obj_type_35,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50),
            (right_value50 && right_value50 != __result_obj__ && !__freed_obj__) ? right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value50, right_value50 = (void*)0, 
            __freed_obj__ = 0, 
            _if_conditional108) {
                __result30__ = (_Bool)0;
                if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_32 && !__freed_obj__) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
                return __result30__;
            }
        }
        operator_fun_33=((struct sFun*)(right_value53=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_32)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value53, right_value53 = (void*)0;
        __freed_obj__ = 0;
        if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj31=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value54=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value54, right_value54 = (void*)0;
        __freed_obj__ = 0;
        for(
        i_43=128-1 ,        0;        _for_condtionalA1=        i_43>=1 ,        _for_condtionalA1;        i_43-- ,        0        ){
            new_fun_name_44=(char*)come_increment_ref_count(((char*)(right_value55=xsprintf("%s_v%d",fun_name2_32,i_43))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value55, right_value55 = (void*)0;
            __freed_obj__ = 0;
            operator_fun_33=((struct sFun*)(right_value56=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_44)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value56, right_value56 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional129=operator_fun_33,            _if_conditional129) {
                __dec_obj32=fun_name2_32;
                fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value57=__builtin_string(new_fun_name_44))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value57, right_value57 = (void*)0;
                __freed_obj__ = 0;
                if(new_fun_name_44 && !__freed_obj__) { new_fun_name_44 = come_decrement_ref_count(new_fun_name_44, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_44 && !__freed_obj__) { new_fun_name_44 = come_decrement_ref_count(new_fun_name_44, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional130=operator_fun_33==((void*)0),        _if_conditional130) {
            operator_fun_33=((struct sFun*)(right_value58=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_32)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value58, right_value58 = (void*)0;
            __freed_obj__ = 0;
        }
    }
    result_45=(_Bool)0;
    if(_if_conditional131=operator_fun_33,    _if_conditional131) {
        come_value_46=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value59=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value59, right_value59 = (void*)0;
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value61=xsprintf("\%s is assigned to",((char*)(right_value60=string_to_string(fun_name2_32)))))),((struct sType*)(right_value62=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0))),left_value->type,left_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value60, right_value60 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value61, right_value61 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value62);
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value62, right_value62 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional136=((struct sType*)(right_value63=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0)))->mHeap&&left_value->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63),
        (right_value63 && right_value63 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value63, right_value63 = (void*)0, 
        __freed_obj__ = 0, 
        _if_conditional136) {
            std_move(((struct sType*)(right_value64=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0))),left_value->type,left_value,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value64, right_value64 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj33=left_value2_47;
            left_value2_47=(char*)come_increment_ref_count(((char*)(right_value65=xsprintf("%s",left_value->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65, right_value65 = (void*)0;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj34=left_value2_47;
            left_value2_47=(char*)come_increment_ref_count(((char*)(right_value66=string_clone(left_value->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value66, right_value66 = (void*)0;
            __freed_obj__ = 0;
        }
        check_assign_type(((char*)(right_value68=xsprintf("\%s is assigned to",((char*)(right_value67=string_to_string(fun_name2_32)))))),((struct sType*)(right_value69=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1))),middle_value->type,middle_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value67, right_value67 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value68, right_value68 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value69, right_value69 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional137=((struct sType*)(right_value70=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1)))->mHeap&&middle_value->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70),
        (right_value70 && right_value70 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value70, right_value70 = (void*)0, 
        __freed_obj__ = 0, 
        _if_conditional137) {
            std_move(((struct sType*)(right_value71=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1))),middle_value->type,middle_value,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value71, right_value71 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj35=middle_value2_51;
            middle_value2_51=(char*)come_increment_ref_count(((char*)(right_value72=xsprintf("%s",middle_value->c_value))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value72, right_value72 = (void*)0;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj36=middle_value2_51;
            middle_value2_51=(char*)come_increment_ref_count(((char*)(right_value73=string_clone(middle_value->c_value))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value73, right_value73 = (void*)0;
            __freed_obj__ = 0;
        }
        check_assign_type(((char*)(right_value75=xsprintf("\%s is assigned to",((char*)(right_value74=string_to_string(fun_name2_32)))))),((struct sType*)(right_value76=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2))),right_value->type,right_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value74, right_value74 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value75);
        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value75, right_value75 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value76);
        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value76, right_value76 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional138=((struct sType*)(right_value77=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2)))->mHeap&&right_value->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77),
        (right_value77 && right_value77 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value77, right_value77 = (void*)0, 
        __freed_obj__ = 0, 
        _if_conditional138) {
            std_move(((struct sType*)(right_value78=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2))),right_value->type,right_value,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value78, right_value78 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj37=right_value2_52;
            right_value2_52=(char*)come_increment_ref_count(((char*)(right_value79=xsprintf("%s",right_value->c_value))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value79, right_value79 = (void*)0;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj38=right_value2_52;
            right_value2_52=(char*)come_increment_ref_count(((char*)(right_value80=string_clone(right_value->c_value))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value80, right_value80 = (void*)0;
            __freed_obj__ = 0;
        }
        __dec_obj39=come_value_46->c_value;
        come_value_46->c_value=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value81=string_to_string(fun_name2_32))),((char*)(right_value82=string_to_string(left_value2_47))),((char*)(right_value83=string_to_string(middle_value2_51))),((char*)(right_value84=string_to_string(right_value2_52)))))));
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value81, right_value81 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value82, right_value82 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value83, right_value83 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value84, right_value84 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value85);
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value85, right_value85 = (void*)0;
        __freed_obj__ = 0;
        result_type1_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(operator_fun_33->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value86, right_value86 = (void*)0;
        __freed_obj__ = 0;
        result_type2_54=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=solve_generics(result_type1_53,generics_type_29,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value87, right_value87 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj40=come_value_46->type;
        come_value_46->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(result_type2_54))));
        if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value88, right_value88 = (void*)0;
        __freed_obj__ = 0;
        come_value_46->var=((void*)0);
        if(_if_conditional139=result_type2_54->mHeap,        _if_conditional139) {
            __dec_obj41=come_value_46->c_value;
            come_value_46->c_value=(char*)come_increment_ref_count(((char*)(right_value89=append_object_to_right_values(come_value_46->c_value,(struct sType*)come_increment_ref_count(result_type2_54),info))));
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
            if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value89, right_value89 = (void*)0;
            __freed_obj__ = 0;
        }
        __dec_obj42=come_value_46->c_value;
        come_value_46->c_value=(char*)come_increment_ref_count(((char*)(right_value90=append_exception_value(come_value_46->c_value,come_value_46->type,info))));
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value90, right_value90 = (void*)0;
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_46->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_46));
        result_45=(_Bool)1;
        if(come_value_46 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_46, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_47 && !__freed_obj__) { left_value2_47 = come_decrement_ref_count(left_value2_47, (void*)0, (void*)0, 0, 0, 0); }
        if(middle_value2_51 && !__freed_obj__) { middle_value2_51 = come_decrement_ref_count(middle_value2_51, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value2_52 && !__freed_obj__) { right_value2_52 = come_decrement_ref_count(right_value2_52, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type1_53 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type1_53, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_54 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result39__ = result_45;
    if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_32 && !__freed_obj__) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
    return __result39__;
    if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_32 && !__freed_obj__) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
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
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value10, right_value10 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional22=self!=((void*)0),        _if_conditional22) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional23) {
            __dec_obj7=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value13=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj7) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
            if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value13, right_value13 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional27) {
            __dec_obj8=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value14, right_value14 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional28) {
            __dec_obj9=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value15=string_clone(self->mGenericsName))));
            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value15, right_value15 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional29) {
            __dec_obj13=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value22, right_value22 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional33=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional33) {
            __dec_obj17=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value30, right_value30 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional46=self!=((void*)0),        _if_conditional46) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional47=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional47) {
            __dec_obj18=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value31=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value31, right_value31 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional48=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional48) {
            __dec_obj22=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj22) { come_call_finalizer(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38, right_value38 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional52=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional52) {
            __dec_obj23=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value39, right_value39 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional53=self!=((void*)0),        _if_conditional53) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional54=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional54) {
            __dec_obj24=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=sNode_clone(self->mAlignas))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value40, right_value40 = (void*)0;
            __freed_obj__ = 0;
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
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value41, right_value41 = (void*)0;
            __freed_obj__ = 0;
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
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value42, right_value42 = (void*)0;
            __freed_obj__ = 0;
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
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value43, right_value43 = (void*)0;
            __freed_obj__ = 0;
        }
        __result24__ = __result_obj__ = result_5;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result24__;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional6=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional6) {
                if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional8=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional8) {
                if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional9=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional9) {
                if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional10=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional10) {
                if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional12=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional12) {
                if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional14=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional14) {
                if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional15=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional15) {
                if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional17=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional17) {
                if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional18=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional18) {
                if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional19=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional19) {
                if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional20) {
                if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional21=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional21) {
                if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional7) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                    it_6=self->head;
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        if(prev_it_7 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional11) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                    it_8=self->head;
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=it_8->next;
                        if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional13) {
                                if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                    it_10=self->head;
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=it_10->next;
                        if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
struct tuple1$1sTypeph* __result8__;
void* right_value11;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional26;
void* right_value12;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value11 = (void*)0;
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
right_value12 = (void*)0;
                if(_if_conditional24=self==(void*)0,                _if_conditional24) {
                    __result8__ = __result_obj__ = (void*)0;
                    return __result8__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value11=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value11, right_value11 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional26) {
                    __dec_obj6=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(self->v1))));
                    if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value12, right_value12 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result9__ = __result_obj__ = result_12;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result9__;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional25) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value16 = (void*)0;
right_value17 = (void*)0;
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
right_value21 = (void*)0;
                if(_if_conditional30=self==((void*)0),                _if_conditional30) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16, right_value16 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value17, right_value17 = (void*)0;
                __freed_obj__ = 0;
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(it_14->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value21, right_value21 = (void*)0;
                    __freed_obj__ = 0;
                    it_14=it_14->next;
                }
                __result13__ = __result_obj__ = result_13;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result13__;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result11__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value18 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value19 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
right_value20 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional31=self->len==0,                        _if_conditional31) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value18, right_value18 = (void*)0;
                            __freed_obj__ = 0;
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj10=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else {
                            if(_if_conditional32=self->len==1,                            _if_conditional32) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value19, right_value19 = (void*)0;
                                __freed_obj__ = 0;
                                litem_16->prev=self->head;
                                litem_16->next=((void*)0);
                                __dec_obj11=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_16;
                                self->head->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 232, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value20, right_value20 = (void*)0;
                                __freed_obj__ = 0;
                                litem_17->prev=self->tail;
                                litem_17->next=((void*)0);
                                __dec_obj12=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail->next=litem_17;
                                self->tail=litem_17;
                            }
                        }
                        self->len++;
                        __result12__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result12__;
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
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value23 = (void*)0;
right_value24 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value29 = (void*)0;
                if(_if_conditional34=self==((void*)0),                _if_conditional34) {
                    __result14__ = __result_obj__ = ((void*)0);
                    return __result14__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23, right_value23 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value24, right_value24 = (void*)0;
                __freed_obj__ = 0;
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(it_19->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value29, right_value29 = (void*)0;
                    __freed_obj__ = 0;
                    it_19=it_19->next;
                }
                __result19__ = __result_obj__ = result_18;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result19__;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result15__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result15__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value25 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value26 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value27 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional35=self->len==0,                        _if_conditional35) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value25, right_value25 = (void*)0;
                            __freed_obj__ = 0;
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj14=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional36=self->len==1,                            _if_conditional36) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value26, right_value26 = (void*)0;
                                __freed_obj__ = 0;
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj15=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 232, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value27, right_value27 = (void*)0;
                                __freed_obj__ = 0;
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj16=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result16__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        return __result16__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value28 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        _if_conditional37) {
                            __result17__ = __result_obj__ = (void*)0;
                            return __result17__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, ((struct sNode*)right_value28)->finalize, ((struct sNode*)right_value28)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value28, right_value28 = (void*)0;
                        __freed_obj__ = 0;
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
                        if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0); } 
                        return __result18__;
                        if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0); } 
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
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value32 = (void*)0;
right_value33 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value37 = (void*)0;
                if(_if_conditional49=self==((void*)0),                _if_conditional49) {
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32, right_value32 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value33, right_value33 = (void*)0;
                __freed_obj__ = 0;
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value37=string_clone(it_25->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value37, right_value37 = (void*)0;
                    __freed_obj__ = 0;
                    it_25=it_25->next;
                }
                __result23__ = __result_obj__ = result_24;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result23__;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result21__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result21__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value34 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value35 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value36 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional50=self->len==0,                        _if_conditional50) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value34, right_value34 = (void*)0;
                            __freed_obj__ = 0;
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj19=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional51=self->len==1,                            _if_conditional51) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value35, right_value35 = (void*)0;
                                __freed_obj__ = 0;
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj20=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 232, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value36, right_value36 = (void*)0;
                                __freed_obj__ = 0;
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj21=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result22__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result22__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result25__ = self->len;
        return __result25__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
            hash_37=string_get_hash_key(((char*)key))%self->size;
            it_38=hash_37;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional94=self->item_existance[it_38],                _if_conditional94) {
                    if(_if_conditional95=string_equals(self->keys[it_38],key),                    _if_conditional95) {
                        __result26__ = __result_obj__ = self->items[it_38];
                        if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result26__;
                    }
                    it_38++;
                    if(_if_conditional105=it_38>=self->size,                    _if_conditional105) {
                        it_38=0;
                    }
                    else {
                        if(_if_conditional106=it_38==hash_37,                        _if_conditional106) {
                            __result27__ = __result_obj__ = default_value;
                            if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result27__;
                        }
                    }
                }
                else {
                    __result28__ = __result_obj__ = default_value;
                    if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result28__;
                }
            }
            __result29__ = __result_obj__ = default_value;
            if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result29__;
            if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional96=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional96) {
                                if(self->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional97=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional97) {
                                if(self->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional98=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional98) {
                                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional99=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional99) {
                                if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional100=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional100) {
                                if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional101=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional101) {
                                if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional102) {
                                if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional103=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional103) {
                                if(self->mBlock && !__freed_obj__) { self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional104) {
                                if(self->mGenericsSName && !__freed_obj__) { self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
void* right_value51;
void* right_value52;
struct sFun* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_40, 0, sizeof(struct sFun*));
memset(&hash_41, 0, sizeof(unsigned int));
memset(&it_42, 0, sizeof(unsigned int));
right_value51 = (void*)0;
right_value52 = (void*)0;
            memset(&default_value_40,0,sizeof(struct sFun*));
            hash_41=string_get_hash_key(((char*)key))%self->size;
            it_42=hash_41;
            while(_while_condtional8=(_Bool)1,            _while_condtional8) {
                if(_if_conditional109=self->item_existance[it_42],                _if_conditional109) {
                    if(_if_conditional110=string_equals(self->keys[it_42],key),                    _if_conditional110) {
                        __result31__ = __result_obj__ = self->items[it_42];
                        if(default_value_40 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0); }
                        return __result31__;
                    }
                    it_42++;
                    if(_if_conditional126=it_42>=self->size,                    _if_conditional126) {
                        it_42=0;
                    }
                    else {
                        if(_if_conditional127=it_42==hash_41,                        _if_conditional127) {
                            __result32__ = __result_obj__ = default_value_40;
                            if(default_value_40 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result32__;
                        }
                    }
                }
                else {
                    __result33__ = __result_obj__ = default_value_40;
                    if(default_value_40 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result33__;
                }
            }
            __result35__ = __result_obj__ = ((struct optional$2sFunphbool*)(right_value52=optional$2sFunphbool_initialize(((struct optional$2sFunphbool*)(right_value51=(struct optional$2sFunphbool*)come_calloc(1, sizeof(struct optional$2sFunphbool)*(1), "./comelang2.h", 1630, "struct optional$2sFunphbool"))),(struct sFun*)come_increment_ref_count(default_value_40),(_Bool)0)));
            if(default_value_40 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value51, right_value51 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value52);
            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value52, right_value52 = (void*)0;
            __freed_obj__ = 0;
            return __result35__;
            if(default_value_40 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional111=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional111) {
                                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional112=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional112) {
                                if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional113=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional113) {
                                if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional114=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional114) {
                                if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional115=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional115) {
                                if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional116=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional116) {
                                if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional117=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional117) {
                                if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional120=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional120) {
                                if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional121=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional121) {
                                if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional122=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional122) {
                                if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional123=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional123) {
                                if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional124=self!=((void*)0)&&self->mComeHeader!=((void*)0),                            _if_conditional124) {
                                if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional125=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional125) {
                                if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional118=self!=((void*)0)&&self->mNodes!=((void*)0),                                    _if_conditional118) {
                                        if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional119=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional119) {
                                        if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static struct optional$2sFunphbool* optional$2sFunphbool_initialize(struct optional$2sFunphbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* __dec_obj30;
struct optional$2sFunphbool* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj30=self->v1;
                self->v1=(struct sFun*)come_increment_ref_count(v1);
                if(__dec_obj30) { come_call_finalizer(sFun_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->v2=v2;
                __result34__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result34__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunphboolp_finalize(struct optional$2sFunphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional128=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional128) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
_Bool _if_conditional133;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional132=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional132) {
                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional133=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional133) {
                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
struct list_item$1sTypeph* it_48;
int i_49;
_Bool _while_condtional9;
_Bool _if_conditional135;
struct sType* __result36__;
struct sType* default_value_50;
struct sType* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_49, 0, sizeof(int));
memset(&default_value_50, 0, sizeof(struct sType*));
            if(_if_conditional134=position<0,            _if_conditional134) {
                position+=self->len;
            }
            it_48=self->head;
            i_49=0;
            while(_while_condtional9=it_48!=((void*)0),            _while_condtional9) {
                if(_if_conditional135=position==i_49,                _if_conditional135) {
                    __result36__ = __result_obj__ = it_48->item;
                    return __result36__;
                }
                it_48=it_48->next;
                i_49++;
            }
            memset(&default_value_50,0,sizeof(struct sType*));
            __result37__ = __result_obj__ = default_value_50;
            if(default_value_50 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_50, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result37__;
            if(default_value_50 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_50, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional140;
void* right_value91;
struct list_item$1CVALUEph* litem_55;
struct CVALUE* __dec_obj43;
_Bool _if_conditional142;
void* right_value92;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj44;
void* right_value93;
struct list_item$1CVALUEph* litem_57;
struct CVALUE* __dec_obj45;
struct list$1CVALUEph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value91 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1CVALUEph*));
right_value92 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
right_value93 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional140=self->len==0,            _if_conditional140) {
                litem_55=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value91=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value91, right_value91 = (void*)0;
                __freed_obj__ = 0;
                litem_55->prev=((void*)0);
                litem_55->next=((void*)0);
                __dec_obj43=litem_55->item;
                litem_55->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj43) { come_call_finalizer(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_55;
                self->head=litem_55;
            }
            else {
                if(_if_conditional142=self->len==1,                _if_conditional142) {
                    litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value92=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292, "struct list_item$1CVALUEph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value92, right_value92 = (void*)0;
                    __freed_obj__ = 0;
                    litem_56->prev=self->head;
                    litem_56->next=((void*)0);
                    __dec_obj44=litem_56->item;
                    litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj44) { come_call_finalizer(CVALUE_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_56;
                    self->head->next=litem_56;
                }
                else {
                    litem_57=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value93=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 302, "struct list_item$1CVALUEph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value93, right_value93 = (void*)0;
                    __freed_obj__ = 0;
                    litem_57->prev=self->tail;
                    litem_57->next=((void*)0);
                    __dec_obj45=litem_57->item;
                    litem_57->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj45) { come_call_finalizer(CVALUE_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail->next=litem_57;
                    self->tail=litem_57;
                }
            }
            self->len++;
            __result38__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result38__;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional141;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional141=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional141) {
                        if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value94;
char* __dec_obj46;
void* right_value95;
struct sNode* __dec_obj47;
void* right_value96;
struct sNode* __dec_obj48;
void* right_value97;
char* __dec_obj49;
struct sStoreFieldNode* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
    self->sline=info->sline;
    __dec_obj46=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string(info->sname))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94, right_value94 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj47=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value95=sNode_clone(left))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, ((struct sNode*)right_value95)->finalize, ((struct sNode*)right_value95)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value95, right_value95 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj48=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=sNode_clone(right))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value96, right_value96 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj49=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value97=__builtin_string(name))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value97, right_value97 = (void*)0;
    __freed_obj__ = 0;
    __result40__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result40__;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStoreFieldNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result41__ = (_Bool)0;
    return __result41__;
}

char* sStoreFieldNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value98;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value98 = (void*)0;
    __result42__ = __result_obj__ = ((char*)(right_value98=__builtin_string("sStoreFieldNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value98, right_value98 = (void*)0;
    __freed_obj__ = 0;
    return __result42__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_58;
struct sNode* right_59;
void* right_value99;
char* name_60;
_Bool _if_conditional147;
_Bool __result43__;
void* right_value100;
struct CVALUE* left_value_61;
_Bool _if_conditional148;
_Bool __result44__;
void* right_value101;
struct CVALUE* right_value_62;
struct sType* right_type_63;
struct sType* left_type_64;
void* right_value102;
struct sType* left_type2_65;
struct sClass* klass_66;
void* right_value105;
struct sType* field_type_72;
int index_73;
char* child_field_name_74;
void* right_value106;
_Bool _if_conditional160;
_Bool __result50__;
struct list$1tuple2$2charphsTypephph* o2_saved_75;
struct tuple2$2charphsTypeph* field_78;
_Bool _for_condtionalA2;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_81;
struct sType* field_type2_82;
_Bool _if_conditional165;
void* right_value107;
struct sType* __dec_obj51;
_Bool _if_conditional166;
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
_Bool _if_conditional167;
void* right_value108;
char* __dec_obj52;
void* right_value109;
struct sType* __dec_obj53;
_Bool _if_conditional168;
_Bool _if_conditional169;
void* right_value110;
struct sType* __dec_obj54;
_Bool _if_conditional170;
_Bool __result59__;
void* right_value111;
struct CVALUE* come_value_92;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool __result60__;
void* right_value112;
void* right_value113;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value114;
char* c_value_93;
void* right_value115;
char* __dec_obj55;
void* right_value116;
char* c_value_94;
void* right_value117;
char* __dec_obj56;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value118;
char* c_value_95;
void* right_value119;
char* __dec_obj57;
void* right_value120;
char* c_value_96;
void* right_value121;
char* __dec_obj58;
void* right_value122;
char* __dec_obj59;
_Bool __result61__;
int right_value_id_97;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value123;
char* c_value_98;
void* right_value124;
char* __dec_obj60;
void* right_value125;
char* c_value_99;
void* right_value126;
char* __dec_obj61;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value127;
char* c_value_100;
void* right_value128;
char* __dec_obj62;
void* right_value129;
char* c_value_101;
void* right_value130;
char* __dec_obj63;
_Bool __result62__;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value131;
char* __dec_obj64;
void* right_value132;
char* __dec_obj65;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value133;
char* __dec_obj66;
void* right_value134;
char* __dec_obj67;
_Bool __result63__;
void* right_value135;
struct sType* __dec_obj68;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_58, 0, sizeof(struct sNode*));
memset(&right_59, 0, sizeof(struct sNode*));
right_value99 = (void*)0;
memset(&name_60, 0, sizeof(char*));
right_value100 = (void*)0;
memset(&left_value_61, 0, sizeof(struct CVALUE*));
right_value101 = (void*)0;
memset(&right_value_62, 0, sizeof(struct CVALUE*));
memset(&right_type_63, 0, sizeof(struct sType*));
memset(&left_type_64, 0, sizeof(struct sType*));
right_value102 = (void*)0;
memset(&left_type2_65, 0, sizeof(struct sType*));
memset(&klass_66, 0, sizeof(struct sClass*));
right_value105 = (void*)0;
memset(&field_type_72, 0, sizeof(struct sType*));
memset(&index_73, 0, sizeof(int));
memset(&child_field_name_74, 0, sizeof(char*));
right_value106 = (void*)0;
memset(&o2_saved_75, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_78, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_81, 0, sizeof(char*));
memset(&field_type2_82, 0, sizeof(struct sType*));
memset(&field_name_81, 0, sizeof(char*));
memset(&field_type2_82, 0, sizeof(struct sType*));
right_value107 = (void*)0;
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
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&come_value_92, 0, sizeof(struct CVALUE*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
memset(&c_value_93, 0, sizeof(char*));
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&c_value_94, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&c_value_95, 0, sizeof(char*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&c_value_96, 0, sizeof(char*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&right_value_id_97, 0, sizeof(int));
right_value123 = (void*)0;
memset(&c_value_98, 0, sizeof(char*));
right_value124 = (void*)0;
right_value125 = (void*)0;
memset(&c_value_99, 0, sizeof(char*));
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&c_value_100, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&c_value_101, 0, sizeof(char*));
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
    left_58=self->mLeft;
    right_59=self->mRight;
    name_60=(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string(self->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value99, right_value99 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional147=!node_compile(left_58,info),    _if_conditional147) {
        __result43__ = (_Bool)0;
        if(name_60 && !__freed_obj__) { name_60 = come_decrement_ref_count(name_60, (void*)0, (void*)0, 0, 0, 0); }
        return __result43__;
    }
    left_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value100=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value100, right_value100 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional148=!node_compile(right_59,info),    _if_conditional148) {
        __result44__ = (_Bool)0;
        if(name_60 && !__freed_obj__) { name_60 = come_decrement_ref_count(name_60, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result44__;
    }
    right_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value101=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value101, right_value101 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_type_63=right_value_62->type;
    left_type_64=left_value_61->type;
    left_type2_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=solve_generics(left_type_64,left_type_64,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value102, right_value102 = (void*)0;
    __freed_obj__ = 0;
    klass_66=left_type2_65->mClass;
    klass_66=((struct sClass*)(right_value105=map$2charphsClassphp_operator_load_element(info->classes,klass_66->mName)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value105, right_value105 = (void*)0;
    __freed_obj__ = 0;
    field_type_72=((void*)0);
    index_73=0;
    child_field_name_74=((void*)0);
    klass_66=((struct sClass*)(right_value106=map$2charphsClassphp_operator_load_element(info->classes,klass_66->mName)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106, right_value106 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional160=klass_66->mFields==((void*)0),    _if_conditional160) {
        err_msg(info,"%s fields are null",klass_66->mName);
        __result50__ = (_Bool)0;
        if(name_60 && !__freed_obj__) { name_60 = come_decrement_ref_count(name_60, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_type2_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(field_type_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(child_field_name_74 && !__freed_obj__) { child_field_name_74 = come_decrement_ref_count(child_field_name_74, (void*)0, (void*)0, 0, 0, 0); }
        return __result50__;
    }
    for(
    o2_saved_75=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_66->mFields)),field_78=list$1tuple2$2charphsTypephph_begin((o2_saved_75)) ,    0;    _for_condtionalA2=    !list$1tuple2$2charphsTypephph_end((o2_saved_75)) ,    _for_condtionalA2;    field_78=list$1tuple2$2charphsTypephph_next((o2_saved_75)) ,    0    ){
        multiple_assign_var1=field_78;
        field_name_81=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_82=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional165=string_operator_equals(field_name_81,name_60),        _if_conditional165) {
            __dec_obj51=field_type_72;
            field_type_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(field_type2_82))));
            if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value107, right_value107 = (void*)0;
            __freed_obj__ = 0;
            if(field_name_81 && !__freed_obj__) { field_name_81 = come_decrement_ref_count(field_name_81, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_82 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_82, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
        }
        index_73++;
        if(field_name_81 && !__freed_obj__) { field_name_81 = come_decrement_ref_count(field_name_81, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_82 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_75 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_75, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(_if_conditional166=index_73==list$1tuple2$2charphsTypephph_length(klass_66->mFields),    _if_conditional166) {
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
                if(_if_conditional167=string_operator_equals(field_name2_90,name_60),                _if_conditional167) {
                    __dec_obj52=child_field_name_74;
                    child_field_name_74=(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string(field_name_85))));
                    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value108, right_value108 = (void*)0;
                    __freed_obj__ = 0;
                    __dec_obj53=field_type_72;
                    field_type_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(field_type3_91))));
                    if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value109, right_value109 = (void*)0;
                    __freed_obj__ = 0;
                    if(field_name2_90 && !__freed_obj__) { field_name2_90 = come_decrement_ref_count(field_name2_90, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_91 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_91, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
                if(field_name2_90 && !__freed_obj__) { field_name2_90 = come_decrement_ref_count(field_name2_90, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_91 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_91, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_88 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_88, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(_if_conditional168=child_field_name_74,            _if_conditional168) {
                if(field_name_85 && !__freed_obj__) { field_name_85 = come_decrement_ref_count(field_name_85, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_86 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_86, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
            }
            if(_if_conditional169=string_operator_equals(field_name_85,name_60),            _if_conditional169) {
                __dec_obj54=field_type_72;
                field_type_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=sType_clone(field_type2_86))));
                if(__dec_obj54) { come_call_finalizer(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value110, right_value110 = (void*)0;
                __freed_obj__ = 0;
                if(field_name_85 && !__freed_obj__) { field_name_85 = come_decrement_ref_count(field_name_85, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_86 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_86, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
            }
            index_73++;
            if(field_name_85 && !__freed_obj__) { field_name_85 = come_decrement_ref_count(field_name_85, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_86 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_86, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_83 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_83, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(_if_conditional170=index_73==list$1tuple2$2charphsTypephph_length(klass_66->mFields),        _if_conditional170) {
            err_msg(info,"field not found(%s) in %s(1)",name_60,klass_66->mName);
            __result59__ = (_Bool)0;
            if(name_60 && !__freed_obj__) { name_60 = come_decrement_ref_count(name_60, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_74 && !__freed_obj__) { child_field_name_74 = come_decrement_ref_count(child_field_name_74, (void*)0, (void*)0, 0, 0, 0); }
            return __result59__;
        }
    }
    come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 232, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value111, right_value111 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional171=field_type_72->mHeap&&!right_type_63->mHeap,    _if_conditional171) {
        if(_if_conditional172=string_operator_equals(right_type_63->mClass->mName,"void")&&right_type_63->mPointerNum==1,        _if_conditional172) {
        }
        else {
            if(_if_conditional173=!right_type_63->mDelegate&&!right_type_63->mShare&&!gComeGC,            _if_conditional173) {
                err_msg(info,"require right value as heap object(%s)",name_60);
                __result60__ = (_Bool)0;
                if(name_60 && !__freed_obj__) { name_60 = come_decrement_ref_count(name_60, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_74 && !__freed_obj__) { child_field_name_74 = come_decrement_ref_count(child_field_name_74, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result60__;
            }
        }
    }
    check_assign_type(((char*)(right_value113=xsprintf("\%s is assigned to",((char*)(right_value112=string_to_string(name_60)))))),field_type_72,right_type_63,right_value_62,(_Bool)0,info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value112, right_value112 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value113, right_value113 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional174=field_type_72->mHeap&&right_type_63->mHeap&&field_type_72->mPointerNum>0&&right_type_63->mPointerNum>0,    _if_conditional174) {
        if(_if_conditional175=left_value_61->type->mPointerNum==1,        _if_conditional175) {
            if(_if_conditional176=child_field_name_74,            _if_conditional176) {
                c_value_93=(char*)come_increment_ref_count(((char*)(right_value114=xsprintf("%s->%s.%s",left_value_61->c_value,child_field_name_74,name_60))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value114, right_value114 = (void*)0;
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_72,c_value_93,info,(_Bool)0);
                std_move(field_type_72,right_type_63,right_value_62,info);
                __dec_obj55=come_value_92->c_value;
                come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("%s->%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value115, right_value115 = (void*)0;
                __freed_obj__ = 0;
                if(c_value_93 && !__freed_obj__) { c_value_93 = come_decrement_ref_count(c_value_93, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                c_value_94=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("%s->%s",left_value_61->c_value,name_60))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value116, right_value116 = (void*)0;
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_72,c_value_94,info,(_Bool)0);
                std_move(field_type_72,right_type_63,right_value_62,info);
                __dec_obj56=come_value_92->c_value;
                come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value117=xsprintf("%s->%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value117, right_value117 = (void*)0;
                __freed_obj__ = 0;
                if(c_value_94 && !__freed_obj__) { c_value_94 = come_decrement_ref_count(c_value_94, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            if(_if_conditional177=left_value_61->type->mPointerNum==0,            _if_conditional177) {
                if(_if_conditional178=child_field_name_74,                _if_conditional178) {
                    c_value_95=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s.%s.%s",left_value_61->c_value,child_field_name_74,name_60))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value118, right_value118 = (void*)0;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_72,c_value_95,info,(_Bool)0);
                    std_move(field_type_72,right_type_63,right_value_62,info);
                    __dec_obj57=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("%s.%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value119, right_value119 = (void*)0;
                    __freed_obj__ = 0;
                    if(c_value_95 && !__freed_obj__) { c_value_95 = come_decrement_ref_count(c_value_95, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_96=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("%s.%s",left_value_61->c_value,name_60))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value120, right_value120 = (void*)0;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_72,c_value_96,info,(_Bool)0);
                    __dec_obj58=right_value_62->c_value;
                    right_value_62->c_value=(char*)come_increment_ref_count(((char*)(right_value121=increment_ref_count_object(right_value_62->type,right_value_62->c_value,info))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value121, right_value121 = (void*)0;
                    __freed_obj__ = 0;
                    __dec_obj59=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("%s.%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value122, right_value122 = (void*)0;
                    __freed_obj__ = 0;
                    if(c_value_96 && !__freed_obj__) { c_value_96 = come_decrement_ref_count(c_value_96, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_60,left_value_61->type->mPointerNum);
                __result61__ = (_Bool)0;
                if(name_60 && !__freed_obj__) { name_60 = come_decrement_ref_count(name_60, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_74 && !__freed_obj__) { child_field_name_74 = come_decrement_ref_count(child_field_name_74, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result61__;
            }
        }
        right_value_id_97=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_62->c_value));
        if(_if_conditional179=right_value_id_97!=-1,        _if_conditional179) {
            remove_object_from_right_values(right_value_id_97,info);
        }
    }
    else {
        if(_if_conditional180=field_type_72->mHeap&&field_type_72->mPointerNum>0&&right_type_63->mPointerNum>0&&string_operator_equals(right_type_63->mClass->mName,"void"),        _if_conditional180) {
            if(_if_conditional181=left_value_61->type->mPointerNum==1,            _if_conditional181) {
                if(_if_conditional182=child_field_name_74,                _if_conditional182) {
                    c_value_98=(char*)come_increment_ref_count(((char*)(right_value123=xsprintf("%s->%s.%s",left_value_61->c_value,child_field_name_74,name_60))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value123, right_value123 = (void*)0;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_72,c_value_98,info,(_Bool)0);
                    __dec_obj60=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("%s->%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value124, right_value124 = (void*)0;
                    __freed_obj__ = 0;
                    if(c_value_98 && !__freed_obj__) { c_value_98 = come_decrement_ref_count(c_value_98, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_99=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s->%s",left_value_61->c_value,name_60))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value125, right_value125 = (void*)0;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_72,c_value_99,info,(_Bool)0);
                    __dec_obj61=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("%s->%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126, right_value126 = (void*)0;
                    __freed_obj__ = 0;
                    if(c_value_99 && !__freed_obj__) { c_value_99 = come_decrement_ref_count(c_value_99, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                if(_if_conditional183=left_value_61->type->mPointerNum==0,                _if_conditional183) {
                    if(_if_conditional184=child_field_name_74,                    _if_conditional184) {
                        c_value_100=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("%s.%s.%s",left_value_61->c_value,child_field_name_74,name_60))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value127, right_value127 = (void*)0;
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_72,c_value_100,info,(_Bool)0);
                        __dec_obj62=come_value_92->c_value;
                        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("%s.%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value128, right_value128 = (void*)0;
                        __freed_obj__ = 0;
                        if(c_value_100 && !__freed_obj__) { c_value_100 = come_decrement_ref_count(c_value_100, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        c_value_101=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("%s.%s",left_value_61->c_value,name_60))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value129, right_value129 = (void*)0;
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_72,c_value_101,info,(_Bool)0);
                        __dec_obj63=come_value_92->c_value;
                        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s.%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value130, right_value130 = (void*)0;
                        __freed_obj__ = 0;
                        if(c_value_101 && !__freed_obj__) { c_value_101 = come_decrement_ref_count(c_value_101, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_60,left_value_61->type->mPointerNum);
                    __result62__ = (_Bool)0;
                    if(name_60 && !__freed_obj__) { name_60 = come_decrement_ref_count(name_60, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_74 && !__freed_obj__) { child_field_name_74 = come_decrement_ref_count(child_field_name_74, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result62__;
                }
            }
        }
        else {
            if(_if_conditional185=left_value_61->type->mPointerNum==1,            _if_conditional185) {
                if(_if_conditional186=child_field_name_74,                _if_conditional186) {
                    __dec_obj64=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("%s->%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value131, right_value131 = (void*)0;
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj65=come_value_92->c_value;
                    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("%s->%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value132, right_value132 = (void*)0;
                    __freed_obj__ = 0;
                }
            }
            else {
                if(_if_conditional187=left_value_61->type->mPointerNum==0,                _if_conditional187) {
                    if(_if_conditional188=child_field_name_74,                    _if_conditional188) {
                        __dec_obj66=come_value_92->c_value;
                        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("%s.%s.%s=%s",left_value_61->c_value,child_field_name_74,name_60,right_value_62->c_value))));
                        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value133, right_value133 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj67=come_value_92->c_value;
                        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s.%s=%s",left_value_61->c_value,name_60,right_value_62->c_value))));
                        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value134, right_value134 = (void*)0;
                        __freed_obj__ = 0;
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_60,left_value_61->type->mPointerNum);
                    __result63__ = (_Bool)0;
                    if(name_60 && !__freed_obj__) { name_60 = come_decrement_ref_count(name_60, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_74 && !__freed_obj__) { child_field_name_74 = come_decrement_ref_count(child_field_name_74, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result63__;
                }
            }
        }
    }
    __dec_obj68=come_value_92->type;
    come_value_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(field_type_72))));
    if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value135, right_value135 = (void*)0;
    __freed_obj__ = 0;
    come_value_92->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
    add_come_last_code(info,"%s;\n",come_value_92->c_value);
    __result64__ = (_Bool)1;
    if(name_60 && !__freed_obj__) { name_60 = come_decrement_ref_count(name_60, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_74 && !__freed_obj__) { child_field_name_74 = come_decrement_ref_count(child_field_name_74, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result64__;
    if(name_60 && !__freed_obj__) { name_60 = come_decrement_ref_count(name_60, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_72, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_74 && !__freed_obj__) { child_field_name_74 = come_decrement_ref_count(child_field_name_74, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_67;
unsigned int hash_68;
unsigned int it_69;
_Bool _while_condtional10;
_Bool _if_conditional149;
_Bool _if_conditional150;
struct sClass* __result45__;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct sClass* __result46__;
struct sClass* __result47__;
void* right_value103;
void* right_value104;
struct sClass* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_67, 0, sizeof(struct sClass*));
memset(&hash_68, 0, sizeof(unsigned int));
memset(&it_69, 0, sizeof(unsigned int));
right_value103 = (void*)0;
right_value104 = (void*)0;
        memset(&default_value_67,0,sizeof(struct sClass*));
        hash_68=string_get_hash_key(((char*)key))%self->size;
        it_69=hash_68;
        while(_while_condtional10=(_Bool)1,        _while_condtional10) {
            if(_if_conditional149=self->item_existance[it_69],            _if_conditional149) {
                if(_if_conditional150=string_equals(self->keys[it_69],key),                _if_conditional150) {
                    __result45__ = __result_obj__ = self->items[it_69];
                    if(default_value_67 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result45__;
                }
                it_69++;
                if(_if_conditional157=it_69>=self->size,                _if_conditional157) {
                    it_69=0;
                }
                else {
                    if(_if_conditional158=it_69==hash_68,                    _if_conditional158) {
                        __result46__ = __result_obj__ = default_value_67;
                        if(default_value_67 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result46__;
                    }
                }
            }
            else {
                __result47__ = __result_obj__ = default_value_67;
                if(default_value_67 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result47__;
            }
        }
        __result49__ = __result_obj__ = ((struct optional$2sClassphbool*)(right_value104=optional$2sClassphbool_initialize(((struct optional$2sClassphbool*)(right_value103=(struct optional$2sClassphbool*)come_calloc(1, sizeof(struct optional$2sClassphbool)*(1), "./comelang2.h", 1630, "struct optional$2sClassphbool"))),(struct sClass*)come_increment_ref_count(default_value_67),(_Bool)0)));
        if(default_value_67 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value103, right_value103 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClassphboolp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value104, right_value104 = (void*)0;
        __freed_obj__ = 0;
        return __result49__;
        if(default_value_67 && !__freed_obj__) { come_call_finalizer(sClass_finalize,default_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional156;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional151=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional151) {
                            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional152=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional152) {
                            if(self->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional156=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional156) {
                            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_70;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_71;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_70, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_71, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_70=self->head;
                                while(_while_condtional11=it_70!=((void*)0),                                _while_condtional11) {
                                    prev_it_71=it_70;
                                    it_70=it_70->next;
                                    if(prev_it_71 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional153=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional153) {
                                            if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional154;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional154=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional154) {
                                                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                                if(_if_conditional155=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional155) {
                                                    if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static struct optional$2sClassphbool* optional$2sClassphbool_initialize(struct optional$2sClassphbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* __dec_obj50;
struct optional$2sClassphbool* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj50=self->v1;
            self->v1=(struct sClass*)come_increment_ref_count(v1);
            if(__dec_obj50) { come_call_finalizer(sClass_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->v2=v2;
            __result48__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sClassphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result48__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sClassphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClassphboolp_finalize(struct optional$2sClassphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional159;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional159=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional159) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
struct tuple2$2charphsTypeph* result_76;
struct tuple2$2charphsTypeph* __result51__;
_Bool _if_conditional162;
struct tuple2$2charphsTypeph* __result52__;
struct tuple2$2charphsTypeph* result_77;
struct tuple2$2charphsTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_76, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_77, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional161=self==((void*)0),        _if_conditional161) {
            memset(&result_76,0,sizeof(struct tuple2$2charphsTypeph*));
            __result51__ = __result_obj__ = result_76;
            return __result51__;
        }
        self->it=self->head;
        if(_if_conditional162=self->it,        _if_conditional162) {
            __result52__ = __result_obj__ = self->it->item;
            return __result52__;
        }
        memset(&result_77,0,sizeof(struct tuple2$2charphsTypeph*));
        __result53__ = __result_obj__ = result_77;
        return __result53__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result54__ = self==((void*)0)||self->it==((void*)0);
        return __result54__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
struct tuple2$2charphsTypeph* result_79;
struct tuple2$2charphsTypeph* __result55__;
_Bool _if_conditional164;
struct tuple2$2charphsTypeph* __result56__;
struct tuple2$2charphsTypeph* result_80;
struct tuple2$2charphsTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_79, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_80, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional163=self==((void*)0)||self->it==((void*)0),        _if_conditional163) {
            memset(&result_79,0,sizeof(struct tuple2$2charphsTypeph*));
            __result55__ = __result_obj__ = result_79;
            return __result55__;
        }
        self->it=self->it->next;
        if(_if_conditional164=self->it,        _if_conditional164) {
            __result56__ = __result_obj__ = self->it->item;
            return __result56__;
        }
        memset(&result_80,0,sizeof(struct tuple2$2charphsTypeph*));
        __result57__ = __result_obj__ = result_80;
        return __result57__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result58__ = self->len;
        return __result58__;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result65__ = self->sline;
    return __result65__;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value136;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value136 = (void*)0;
    __result66__ = __result_obj__ = ((char*)(right_value136=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136, right_value136 = (void*)0;
    __freed_obj__ = 0;
    return __result66__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value137;
char* __dec_obj69;
void* right_value138;
struct sNode* __dec_obj70;
struct sNullCheckNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value137 = (void*)0;
right_value138 = (void*)0;
    self->sline=info->sline;
    __dec_obj69=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(info->sname))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value137, right_value137 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj70=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value138=sNode_clone(left))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value138, right_value138 = (void*)0;
    __freed_obj__ = 0;
    self->mOnlyNullCecker=only_null_checker;
    __result67__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result67__;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullCheckNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result68__ = (_Bool)0;
    return __result68__;
}

char* sNullCheckNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value139;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value139 = (void*)0;
    __result69__ = __result_obj__ = ((char*)(right_value139=__builtin_string("sNullCheckNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value139, right_value139 = (void*)0;
    __freed_obj__ = 0;
    return __result69__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_102;
_Bool _if_conditional191;
_Bool __result70__;
void* right_value140;
struct CVALUE* left_value_103;
_Bool _if_conditional192;
void* right_value141;
char* method_name_104;
void* right_value142;
_Bool _if_conditional197;
struct sType* obj_type_107;
_Bool _if_conditional198;
struct sType* obj_type2_108;
void* right_value143;
void* right_value144;
char* __dec_obj71;
void* right_value145;
struct sFun* fun_109;
_Bool _if_conditional199;
_Bool __result75__;
void* right_value146;
struct sType* type_110;
void* right_value147;
struct CVALUE* come_value_111;
void* right_value148;
char* __dec_obj72;
void* right_value149;
struct sType* __dec_obj73;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value150;
struct CVALUE* come_value_112;
void* right_value151;
void* right_value152;
char* __dec_obj74;
void* right_value153;
struct sType* __dec_obj75;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_102, 0, sizeof(struct sNode*));
right_value140 = (void*)0;
memset(&left_value_103, 0, sizeof(struct CVALUE*));
right_value141 = (void*)0;
memset(&method_name_104, 0, sizeof(char*));
right_value142 = (void*)0;
memset(&obj_type_107, 0, sizeof(struct sType*));
memset(&obj_type2_108, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&fun_109, 0, sizeof(struct sFun*));
right_value146 = (void*)0;
memset(&type_110, 0, sizeof(struct sType*));
right_value147 = (void*)0;
memset(&come_value_111, 0, sizeof(struct CVALUE*));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&come_value_112, 0, sizeof(struct CVALUE*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
    left_102=self->mLeft;
    if(_if_conditional191=!node_compile(left_102,info),    _if_conditional191) {
        __result70__ = (_Bool)0;
        return __result70__;
    }
    left_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value140=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value140, right_value140 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional192=!self->mOnlyNullCecker&&left_value_103->type->mNoSolvedGenericsType&&left_value_103->type->mNoSolvedGenericsType->v1&&left_value_103->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_103->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional192) {
        method_name_104=(char*)come_increment_ref_count(((char*)(right_value141=create_method_name(left_value_103->type,(_Bool)0,"expect",info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value141, right_value141 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional197=((struct sFun*)(right_value142=map$2charphsFunph_at(info->funcs,method_name_104,((void*)0))))==((void*)0),        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142),
        (right_value142 && right_value142 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value142, right_value142 = (void*)0, 
        __freed_obj__ = 0, 
        _if_conditional197) {
            obj_type_107=left_value_103->type->mNoSolvedGenericsType->v1;
            if(_if_conditional198=list$1sTypeph_length(obj_type_107->mGenericsTypes)>0,            _if_conditional198) {
                obj_type2_108=left_value_103->type;
                __dec_obj71=method_name_104;
                method_name_104=(char*)come_increment_ref_count(((char*)(right_value144=make_generics_function(obj_type2_108,(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string("expect")))),info))));
                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value143, right_value143 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value144);
                if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value144, right_value144 = (void*)0;
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_103->type->mClass->mName);
                exit(1);
            }
        }
        fun_109=((struct sFun*)(right_value145=map$2charphsFunphp_operator_load_element(info->funcs,method_name_104)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value145, right_value145 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional199=fun_109==((void*)0),        _if_conditional199) {
            err_msg(info,"function not found(%s)",method_name_104);
            __result75__ = (_Bool)1;
            if(method_name_104 && !__freed_obj__) { method_name_104 = come_decrement_ref_count(method_name_104, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result75__;
        }
        type_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=solve_generics(fun_109->mResultType,left_value_103->type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value146, right_value146 = (void*)0;
        __freed_obj__ = 0;
        come_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 427, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value147, right_value147 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj72=come_value_111->c_value;
        come_value_111->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("%s(%s)",method_name_104,left_value_103->c_value))));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value148, right_value148 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj73=come_value_111->type;
        come_value_111->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(type_110))));
        if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value149, right_value149 = (void*)0;
        __freed_obj__ = 0;
        come_value_111->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_111));
        add_come_last_code(info,"%s;\n",come_value_111->c_value);
        if(method_name_104 && !__freed_obj__) { method_name_104 = come_decrement_ref_count(method_name_104, (void*)0, (void*)0, 0, 0, 0); }
        if(type_110 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_110, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value_111 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional200=!gComeDebug,        _if_conditional200) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_103));
        }
        else {
            if(_if_conditional201=left_value_103->type->mPointerNum>0,            _if_conditional201) {
                come_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 441, "struct CVALUE"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value150, right_value150 = (void*)0;
                __freed_obj__ = 0;
                __dec_obj74=come_value_112->c_value;
                come_value_112->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("((%s)come_null_check(%s, \"%s\", %d))",((char*)(right_value151=make_type_name_string(left_value_103->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_103->c_value,info->sname,info->sline))));
                if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value151, right_value151 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value152);
                if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value152, right_value152 = (void*)0;
                __freed_obj__ = 0;
                __dec_obj75=come_value_112->type;
                come_value_112->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(left_value_103->type))));
                if(__dec_obj75) { come_call_finalizer(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value153, right_value153 = (void*)0;
                __freed_obj__ = 0;
                come_value_112->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_112));
                add_come_last_code(info,"%s;\n",come_value_112->c_value);
                if(come_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_103));
            }
        }
    }
    __result76__ = (_Bool)1;
    if(left_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result76__;
    if(left_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_105;
unsigned int it_106;
_Bool _while_condtional12;
_Bool _if_conditional193;
_Bool _if_conditional194;
struct sFun* __result71__;
_Bool _if_conditional195;
_Bool _if_conditional196;
struct sFun* __result72__;
struct sFun* __result73__;
struct sFun* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_105, 0, sizeof(unsigned int));
memset(&it_106, 0, sizeof(unsigned int));
            hash_105=string_get_hash_key(((char*)key))%self->size;
            it_106=hash_105;
            while(_while_condtional12=(_Bool)1,            _while_condtional12) {
                if(_if_conditional193=self->item_existance[it_106],                _if_conditional193) {
                    if(_if_conditional194=string_equals(self->keys[it_106],key),                    _if_conditional194) {
                        __result71__ = __result_obj__ = self->items[it_106];
                        if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result71__;
                    }
                    it_106++;
                    if(_if_conditional195=it_106>=self->size,                    _if_conditional195) {
                        it_106=0;
                    }
                    else {
                        if(_if_conditional196=it_106==hash_105,                        _if_conditional196) {
                            __result72__ = __result_obj__ = default_value;
                            if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result72__;
                        }
                    }
                }
                else {
                    __result73__ = __result_obj__ = default_value;
                    if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result73__;
                }
            }
            __result74__ = __result_obj__ = default_value;
            if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result74__;
            if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = self->sline;
    return __result77__;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value154;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value154 = (void*)0;
    __result78__ = __result_obj__ = ((char*)(right_value154=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value154, right_value154 = (void*)0;
    __freed_obj__ = 0;
    return __result78__;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value155;
char* __dec_obj76;
void* right_value156;
struct sNode* __dec_obj77;
void* right_value157;
struct sNode* __dec_obj78;
void* right_value158;
struct sNode* __dec_obj79;
struct sRangeCheckNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
    self->sline=info->sline;
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(info->sname))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value155, right_value155 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value156=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, ((struct sNode*)right_value156)->finalize, ((struct sNode*)right_value156)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value156, right_value156 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj78=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value157=sNode_clone(begin))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value157, right_value157 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj79=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value158=sNode_clone(end))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value158, right_value158 = (void*)0;
    __freed_obj__ = 0;
    __result79__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result79__;
    if(self && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sRangeCheckNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result80__ = (_Bool)0;
    return __result80__;
}

char* sRangeCheckNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value159;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value159 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value159=__builtin_string("sRangeCheckNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value159, right_value159 = (void*)0;
    __freed_obj__ = 0;
    return __result81__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_113;
_Bool _if_conditional206;
_Bool __result82__;
void* right_value160;
struct CVALUE* left_value_114;
struct sNode* begin_115;
_Bool _if_conditional207;
_Bool __result83__;
void* right_value161;
struct CVALUE* begin_value_116;
struct sNode* end_117;
_Bool _if_conditional208;
_Bool __result84__;
void* right_value162;
struct CVALUE* end_value_118;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value163;
struct CVALUE* come_value_119;
void* right_value164;
void* right_value165;
char* __dec_obj80;
void* right_value166;
struct sType* __dec_obj81;
void* right_value167;
struct CVALUE* come_value_120;
void* right_value168;
void* right_value169;
char* __dec_obj82;
void* right_value170;
struct sType* __dec_obj83;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_113, 0, sizeof(struct sNode*));
right_value160 = (void*)0;
memset(&left_value_114, 0, sizeof(struct CVALUE*));
memset(&begin_115, 0, sizeof(struct sNode*));
right_value161 = (void*)0;
memset(&begin_value_116, 0, sizeof(struct CVALUE*));
memset(&end_117, 0, sizeof(struct sNode*));
right_value162 = (void*)0;
memset(&end_value_118, 0, sizeof(struct CVALUE*));
right_value163 = (void*)0;
memset(&come_value_119, 0, sizeof(struct CVALUE*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&come_value_120, 0, sizeof(struct CVALUE*));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
    left_113=self->mLeft;
    if(_if_conditional206=!node_compile(left_113,info),    _if_conditional206) {
        __result82__ = (_Bool)0;
        return __result82__;
    }
    left_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160, right_value160 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    begin_115=self->mBegin;
    if(_if_conditional207=!node_compile(begin_115,info),    _if_conditional207) {
        __result83__ = (_Bool)0;
        if(left_value_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result83__;
    }
    begin_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value161, right_value161 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    end_117=self->mEnd;
    if(_if_conditional208=!node_compile(end_117,info),    _if_conditional208) {
        __result84__ = (_Bool)0;
        if(left_value_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(begin_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,begin_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result84__;
    }
    end_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value162, right_value162 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional209=left_value_114->type->mPointerNum>0,    _if_conditional209) {
        if(_if_conditional210=!gComeDebug,        _if_conditional210) {
            come_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 531, "struct CVALUE"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
            if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value163, right_value163 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj80=come_value_119->c_value;
            come_value_119->c_value=(char*)come_increment_ref_count(((char*)(right_value165=xsprintf("(*((%s)%s))",((char*)(right_value164=make_type_name_string(left_value_114->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_114->c_value))));
            if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
            if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value164, right_value164 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value165);
            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value165, right_value165 = (void*)0;
            __freed_obj__ = 0;
            left_value_114->type->mPointerNum--;
            __dec_obj81=come_value_119->type;
            come_value_119->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(left_value_114->type))));
            if(__dec_obj81) { come_call_finalizer(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
            if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value166, right_value166 = (void*)0;
            __freed_obj__ = 0;
            come_value_119->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_119));
            add_come_last_code(info,"%s;\n",come_value_119->c_value);
            if(come_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 544, "struct CVALUE"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value167, right_value167 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj82=come_value_120->c_value;
            come_value_120->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value168=make_type_name_string(left_value_114->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_114->c_value,begin_value_116->c_value,end_value_118->c_value,info->sname,info->sline))));
            if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
            if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value168, right_value168 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value169);
            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value169, right_value169 = (void*)0;
            __freed_obj__ = 0;
            left_value_114->type->mPointerNum--;
            __dec_obj83=come_value_120->type;
            come_value_120->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_clone(left_value_114->type))));
            if(__dec_obj83) { come_call_finalizer(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
            if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value170, right_value170 = (void*)0;
            __freed_obj__ = 0;
            come_value_120->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_120));
            add_come_last_code(info,"%s;\n",come_value_120->c_value);
            if(come_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_114));
    }
    __result85__ = (_Bool)1;
    if(left_value_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(begin_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,begin_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(end_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,end_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result85__;
    if(left_value_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(begin_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,begin_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(end_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,end_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result86__ = self->sline;
    return __result86__;
}

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value171;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value171 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value171=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value171, right_value171 = (void*)0;
    __freed_obj__ = 0;
    return __result87__;
}

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value172;
char* __dec_obj84;
void* right_value173;
struct sNode* __dec_obj85;
struct sExceptionGetValueNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value172 = (void*)0;
right_value173 = (void*)0;
    self->sline=info->sline;
    __dec_obj84=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string(info->sname))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value172, right_value172 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj85=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value173=sNode_clone(left))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value173, right_value173 = (void*)0;
    __freed_obj__ = 0;
    __result88__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result88__;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sExceptionGetValueNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result89__ = (_Bool)0;
    return __result89__;
}

_Bool compiletime_get_exception_value(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value174;
struct CVALUE* left_value_121;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value175;
char* method_name_122;
void* right_value176;
_Bool _if_conditional215;
struct sType* obj_type_123;
_Bool _if_conditional216;
struct sType* obj_type2_124;
void* right_value177;
void* right_value178;
char* __dec_obj86;
void* right_value179;
struct sFun* fun_125;
_Bool _if_conditional217;
_Bool __result90__;
void* right_value180;
struct sType* type_126;
void* right_value181;
struct CVALUE* come_value_127;
void* right_value182;
char* __dec_obj87;
void* right_value183;
struct sType* __dec_obj88;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value174 = (void*)0;
memset(&left_value_121, 0, sizeof(struct CVALUE*));
right_value175 = (void*)0;
memset(&method_name_122, 0, sizeof(char*));
right_value176 = (void*)0;
memset(&obj_type_123, 0, sizeof(struct sType*));
memset(&obj_type2_124, 0, sizeof(struct sType*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&fun_125, 0, sizeof(struct sFun*));
right_value180 = (void*)0;
memset(&type_126, 0, sizeof(struct sType*));
right_value181 = (void*)0;
memset(&come_value_127, 0, sizeof(struct CVALUE*));
right_value182 = (void*)0;
right_value183 = (void*)0;
    left_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value174, right_value174 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional213=left_value_121==((void*)0),    _if_conditional213) {
    }
    else {
        if(_if_conditional214=left_value_121->type->mNoSolvedGenericsType&&left_value_121->type->mNoSolvedGenericsType->v1&&left_value_121->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_121->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),        _if_conditional214) {
            method_name_122=(char*)come_increment_ref_count(((char*)(right_value175=create_method_name(left_value_121->type,(_Bool)0,"value",info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value175, right_value175 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional215=((struct sFun*)(right_value176=map$2charphsFunph_at(info->funcs,method_name_122,((void*)0))))==((void*)0),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176),
            (right_value176 && right_value176 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value176, right_value176 = (void*)0, 
            __freed_obj__ = 0, 
            _if_conditional215) {
                obj_type_123=left_value_121->type->mNoSolvedGenericsType->v1;
                if(_if_conditional216=list$1sTypeph_length(obj_type_123->mGenericsTypes)>0,                _if_conditional216) {
                    obj_type2_124=left_value_121->type;
                    __dec_obj86=method_name_122;
                    method_name_122=(char*)come_increment_ref_count(((char*)(right_value178=make_generics_function(obj_type2_124,(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string("value")))),info))));
                    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value177, right_value177 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value178);
                    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value178, right_value178 = (void*)0;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require expect implementation(%s)",left_value_121->type->mClass->mName);
                    exit(1);
                }
            }
            fun_125=((struct sFun*)(right_value179=map$2charphsFunphp_operator_load_element(info->funcs,method_name_122)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
            if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value179, right_value179 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional217=fun_125==((void*)0),            _if_conditional217) {
                err_msg(info,"function not found(%s)",method_name_122);
                __result90__ = (_Bool)1;
                if(method_name_122 && !__freed_obj__) { method_name_122 = come_decrement_ref_count(method_name_122, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_121 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result90__;
            }
            type_126=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=solve_generics(fun_125->mResultType,left_value_121->type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value180, right_value180 = (void*)0;
            __freed_obj__ = 0;
            come_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 627, "struct CVALUE"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
            if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value181, right_value181 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj87=come_value_127->c_value;
            come_value_127->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("%s(%s)",method_name_122,left_value_121->c_value))));
            if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
            if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value182, right_value182 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj88=come_value_127->type;
            come_value_127->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(type_126))));
            if(__dec_obj88) { come_call_finalizer(sType_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
            if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value183, right_value183 = (void*)0;
            __freed_obj__ = 0;
            come_value_127->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_127));
            add_come_last_code(info,"%s;\n",come_value_127->c_value);
            if(method_name_122 && !__freed_obj__) { method_name_122 = come_decrement_ref_count(method_name_122, (void*)0, (void*)0, 0, 0, 0); }
            if(type_126 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_126, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_127 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_121));
            add_come_last_code(info,"%s;\n",left_value_121->c_value);
        }
    }
    __result91__ = (_Bool)1;
    if(left_value_121 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result91__;
    if(left_value_121 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sExceptionGetValueNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value184;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value184 = (void*)0;
    __result92__ = __result_obj__ = ((char*)(right_value184=__builtin_string("sExceptionGetValueNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value184, right_value184 = (void*)0;
    __freed_obj__ = 0;
    return __result92__;
}

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_128;
_Bool _if_conditional218;
_Bool __result93__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_128, 0, sizeof(struct sNode*));
    left_128=self->mLeft;
    if(_if_conditional218=!node_compile(left_128,info),    _if_conditional218) {
        __result93__ = (_Bool)0;
        return __result93__;
    }
    __result94__ = compiletime_get_exception_value(info);
    return __result94__;
}

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result95__ = self->sline;
    return __result95__;
}

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value185;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value185 = (void*)0;
    __result96__ = __result_obj__ = ((char*)(right_value185=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value185, right_value185 = (void*)0;
    __freed_obj__ = 0;
    return __result96__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value186;
void* right_value187;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value193;
struct sNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value193 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 674, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value187=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value186=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 674, "struct sStoreFieldNode")))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result99__ = __result_obj__ = ((struct sNode*)(right_value193=_inf_value1));
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value186, right_value186 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value187, right_value187 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value193, right_value193 = (void*)0;
    __freed_obj__ = 0;
    return __result99__;
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value194;
char* __dec_obj93;
void* right_value195;
struct sNode* __dec_obj94;
void* right_value196;
char* __dec_obj95;
struct sLoadFieldNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
    self->sline=info->sline;
    __dec_obj93=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(info->sname))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value194, right_value194 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj94=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNode_clone(left))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value195, right_value195 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj95=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(name))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value196, right_value196 = (void*)0;
    __freed_obj__ = 0;
    __result100__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result100__;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadFieldNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result101__ = (_Bool)0;
    return __result101__;
}

char* sLoadFieldNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value197;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value197 = (void*)0;
    __result102__ = __result_obj__ = ((char*)(right_value197=__builtin_string("sLoadFieldNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value197, right_value197 = (void*)0;
    __freed_obj__ = 0;
    return __result102__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_130;
void* right_value198;
char* name_131;
_Bool _if_conditional232;
_Bool __result103__;
void* right_value199;
struct CVALUE* left_value_132;
struct sType* left_type_133;
void* right_value200;
struct sType* left_type2_134;
struct sClass* klass_135;
void* right_value201;
struct sType* field_type_136;
int index_137;
char* child_field_name_138;
void* right_value202;
struct list$1tuple2$2charphsTypephph* o2_saved_139;
struct tuple2$2charphsTypeph* field_140;
_Bool _for_condtionalA5;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_141;
struct sType* field_type2_142;
_Bool _if_conditional233;
void* right_value203;
struct sType* __dec_obj96;
_Bool _if_conditional234;
struct list$1tuple2$2charphsTypephph* o2_saved_143;
struct tuple2$2charphsTypeph* field_144;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_145;
struct sType* field_type2_146;
struct sClass* klass2_147;
struct list$1tuple2$2charphsTypephph* o2_saved_148;
struct tuple2$2charphsTypeph* field2_149;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_150;
struct sType* field_type3_151;
_Bool _if_conditional235;
void* right_value204;
char* __dec_obj97;
void* right_value205;
struct sType* __dec_obj98;
_Bool _if_conditional236;
_Bool _if_conditional237;
void* right_value206;
struct sType* __dec_obj99;
_Bool _if_conditional238;
_Bool __result104__;
void* right_value207;
struct CVALUE* come_value_152;
_Bool _if_conditional239;
_Bool _if_conditional240;
void* right_value208;
char* __dec_obj100;
void* right_value209;
char* __dec_obj101;
_Bool _if_conditional241;
void* right_value210;
char* __dec_obj102;
void* right_value211;
char* __dec_obj103;
void* right_value212;
struct sType* __dec_obj104;
_Bool _if_conditional242;
_Bool __result105__;
_Bool _if_conditional243;
void* right_value213;
struct sType* __dec_obj105;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_130, 0, sizeof(struct sNode*));
right_value198 = (void*)0;
memset(&name_131, 0, sizeof(char*));
right_value199 = (void*)0;
memset(&left_value_132, 0, sizeof(struct CVALUE*));
memset(&left_type_133, 0, sizeof(struct sType*));
right_value200 = (void*)0;
memset(&left_type2_134, 0, sizeof(struct sType*));
memset(&klass_135, 0, sizeof(struct sClass*));
right_value201 = (void*)0;
memset(&field_type_136, 0, sizeof(struct sType*));
memset(&index_137, 0, sizeof(int));
memset(&child_field_name_138, 0, sizeof(char*));
right_value202 = (void*)0;
memset(&o2_saved_139, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_140, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_141, 0, sizeof(char*));
memset(&field_type2_142, 0, sizeof(struct sType*));
memset(&field_name_141, 0, sizeof(char*));
memset(&field_type2_142, 0, sizeof(struct sType*));
right_value203 = (void*)0;
memset(&o2_saved_143, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_144, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_145, 0, sizeof(char*));
memset(&field_type2_146, 0, sizeof(struct sType*));
memset(&field_name_145, 0, sizeof(char*));
memset(&field_type2_146, 0, sizeof(struct sType*));
memset(&klass2_147, 0, sizeof(struct sClass*));
memset(&o2_saved_148, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_149, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_150, 0, sizeof(char*));
memset(&field_type3_151, 0, sizeof(struct sType*));
memset(&field_name2_150, 0, sizeof(char*));
memset(&field_type3_151, 0, sizeof(struct sType*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&come_value_152, 0, sizeof(struct CVALUE*));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
    left_130=self->mLeft;
    name_131=(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string(self->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value198, right_value198 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional232=!node_compile(left_130,info),    _if_conditional232) {
        __result103__ = (_Bool)0;
        if(name_131 && !__freed_obj__) { name_131 = come_decrement_ref_count(name_131, (void*)0, (void*)0, 0, 0, 0); }
        return __result103__;
    }
    left_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value199, right_value199 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    left_type_133=left_value_132->type;
    left_type2_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=solve_generics(left_type_133,left_type_133,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value200, right_value200 = (void*)0;
    __freed_obj__ = 0;
    klass_135=left_type2_134->mClass;
    klass_135=((struct sClass*)(right_value201=map$2charphsClassphp_operator_load_element(info->classes,klass_135->mName)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value201, right_value201 = (void*)0;
    __freed_obj__ = 0;
    field_type_136=((void*)0);
    index_137=0;
    child_field_name_138=((void*)0);
    klass_135=((struct sClass*)(right_value202=map$2charphsClassphp_operator_load_element(info->classes,klass_135->mName)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value202, right_value202 = (void*)0;
    __freed_obj__ = 0;
    for(
    o2_saved_139=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_135->mFields)),field_140=list$1tuple2$2charphsTypephph_begin((o2_saved_139)) ,    0;    _for_condtionalA5=    !list$1tuple2$2charphsTypephph_end((o2_saved_139)) ,    _for_condtionalA5;    field_140=list$1tuple2$2charphsTypephph_next((o2_saved_139)) ,    0    ){
        multiple_assign_var4=field_140;
        field_name_141=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_142=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(_if_conditional233=string_operator_equals(field_name_141,name_131),        _if_conditional233) {
            __dec_obj96=field_type_136;
            field_type_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(field_type2_142))));
            if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
            if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value203, right_value203 = (void*)0;
            __freed_obj__ = 0;
            if(field_name_141 && !__freed_obj__) { field_name_141 = come_decrement_ref_count(field_name_141, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_142 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_142, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
        }
        index_137++;
        if(field_name_141 && !__freed_obj__) { field_name_141 = come_decrement_ref_count(field_name_141, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_142 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_139 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(_if_conditional234=index_137==list$1tuple2$2charphsTypephph_length(klass_135->mFields),    _if_conditional234) {
        index_137=0;
        for(
        o2_saved_143=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_135->mFields)),field_144=list$1tuple2$2charphsTypephph_begin((o2_saved_143)) ,        0;        _for_condtionalA6=        !list$1tuple2$2charphsTypephph_end((o2_saved_143)) ,        _for_condtionalA6;        field_144=list$1tuple2$2charphsTypephph_next((o2_saved_143)) ,        0        ){
            multiple_assign_var5=field_144;
            field_name_145=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_146=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_147=field_type2_146->mClass;
            for(
            o2_saved_148=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_147->mFields)),field2_149=list$1tuple2$2charphsTypephph_begin((o2_saved_148)) ,            0;            _for_condtionalA7=            !list$1tuple2$2charphsTypephph_end((o2_saved_148)) ,            _for_condtionalA7;            field2_149=list$1tuple2$2charphsTypephph_next((o2_saved_148)) ,            0            ){
                multiple_assign_var6=field2_149;
                field_name2_150=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_151=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional235=string_operator_equals(field_name2_150,name_131),                _if_conditional235) {
                    __dec_obj97=child_field_name_138;
                    child_field_name_138=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(field_name_145))));
                    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value204, right_value204 = (void*)0;
                    __freed_obj__ = 0;
                    __dec_obj98=field_type_136;
                    field_type_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_clone(field_type3_151))));
                    if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value205, right_value205 = (void*)0;
                    __freed_obj__ = 0;
                    if(field_name2_150 && !__freed_obj__) { field_name2_150 = come_decrement_ref_count(field_name2_150, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_151, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
                if(field_name2_150 && !__freed_obj__) { field_name2_150 = come_decrement_ref_count(field_name2_150, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_151, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_148 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_148, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(_if_conditional236=child_field_name_138,            _if_conditional236) {
                if(field_name_145 && !__freed_obj__) { field_name_145 = come_decrement_ref_count(field_name_145, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_146 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_146, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
            }
            if(_if_conditional237=string_operator_equals(field_name_145,name_131),            _if_conditional237) {
                __dec_obj99=field_type_136;
                field_type_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(field_type2_146))));
                if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
                if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value206, right_value206 = (void*)0;
                __freed_obj__ = 0;
                if(field_name_145 && !__freed_obj__) { field_name_145 = come_decrement_ref_count(field_name_145, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_146 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_146, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
            }
            index_137++;
            if(field_name_145 && !__freed_obj__) { field_name_145 = come_decrement_ref_count(field_name_145, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_146 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_146, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_143 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_143, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(_if_conditional238=index_137==list$1tuple2$2charphsTypephph_length(klass_135->mFields),        _if_conditional238) {
            err_msg(info,"field not found(%s) in %s(2)",name_131,klass_135->mName);
            __result104__ = (_Bool)0;
            if(name_131 && !__freed_obj__) { name_131 = come_decrement_ref_count(name_131, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_132 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_132, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_134, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_138 && !__freed_obj__) { child_field_name_138 = come_decrement_ref_count(child_field_name_138, (void*)0, (void*)0, 0, 0, 0); }
            return __result104__;
        }
    }
    come_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 776, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value207, right_value207 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional239=left_value_132->type->mPointerNum>0,    _if_conditional239) {
        if(_if_conditional240=child_field_name_138,        _if_conditional240) {
            __dec_obj100=come_value_152->c_value;
            come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value208=xsprintf("%s->%s.%s",left_value_132->c_value,child_field_name_138,name_131))));
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value208, right_value208 = (void*)0;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj101=come_value_152->c_value;
            come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value209=xsprintf("%s->%s",left_value_132->c_value,name_131))));
            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
            if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value209, right_value209 = (void*)0;
            __freed_obj__ = 0;
        }
    }
    else {
        if(_if_conditional241=child_field_name_138,        _if_conditional241) {
            __dec_obj102=come_value_152->c_value;
            come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("%s.%s.%s",left_value_132->c_value,child_field_name_138,name_131))));
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value210, right_value210 = (void*)0;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj103=come_value_152->c_value;
            come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("%s.%s",left_value_132->c_value,name_131))));
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
            if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value211, right_value211 = (void*)0;
            __freed_obj__ = 0;
        }
    }
    __dec_obj104=come_value_152->type;
    come_value_152->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_clone(field_type_136))));
    if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value212, right_value212 = (void*)0;
    __freed_obj__ = 0;
    come_value_152->var=((void*)0);
    if(_if_conditional242=field_type_136==((void*)0),    _if_conditional242) {
        err_msg(info,"no field(%s)\n",name_131);
        __result105__ = (_Bool)0;
        if(name_131 && !__freed_obj__) { name_131 = come_decrement_ref_count(name_131, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_132 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_132, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_type2_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_134, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(field_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(child_field_name_138 && !__freed_obj__) { child_field_name_138 = come_decrement_ref_count(child_field_name_138, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value_152 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_152, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result105__;
    }
    if(_if_conditional243=list$1sNodeph_length(come_value_152->type->mArrayNum)==1,    _if_conditional243) {
        __dec_obj105=come_value_152->type->mOriginalLoadVarType->v1;
        come_value_152->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(come_value_152->type))));
        if(__dec_obj105) { come_call_finalizer(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value213, right_value213 = (void*)0;
        __freed_obj__ = 0;
        list$1sNodeph_reset(come_value_152->type->mArrayNum);
        come_value_152->type->mPointerNum++;
        come_value_152->type->mOriginalTypeNamePointerNum=come_value_152->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_152));
    __result108__ = (_Bool)1;
    if(name_131 && !__freed_obj__) { name_131 = come_decrement_ref_count(name_131, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_132 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_138 && !__freed_obj__) { child_field_name_138 = come_decrement_ref_count(child_field_name_138, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_152 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result108__;
    if(name_131 && !__freed_obj__) { name_131 = come_decrement_ref_count(name_131, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_132 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_136 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_138 && !__freed_obj__) { child_field_name_138 = come_decrement_ref_count(child_field_name_138, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_152 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_152, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result106__ = self->len;
        return __result106__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_153;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_154;
struct list$1sNodeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_153, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_154, 0, sizeof(struct list_item$1sNodeph*));
            it_153=self->head;
            while(_while_condtional13=it_153!=((void*)0),            _while_condtional13) {
                prev_it_154=it_153;
                it_153=it_153->next;
                if(prev_it_154 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_154, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result107__ = __result_obj__ = self;
            return __result107__;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result109__ = self->sline;
    return __result109__;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value214;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value214 = (void*)0;
    __result110__ = __result_obj__ = ((char*)(right_value214=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value214, right_value214 = (void*)0;
    __freed_obj__ = 0;
    return __result110__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value215;
char* __dec_obj106;
void* right_value216;
struct sNode* __dec_obj107;
void* right_value217;
struct sNode* __dec_obj108;
void* right_value218;
struct list$1sNodeph* __dec_obj109;
struct sStoreArrayNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
    self->sline=info->sline;
    __dec_obj106=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(info->sname))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value215, right_value215 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj107=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value216=sNode_clone(left))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value216, right_value216 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj108=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=sNode_clone(right))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value217, right_value217 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj109=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value218=list$1sNodephp_clone(array_num))));
    if(__dec_obj109) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value218, right_value218 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __result111__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result111__;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sStoreArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result112__ = (_Bool)0;
    return __result112__;
}

char* sStoreArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value219;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value219 = (void*)0;
    __result113__ = __result_obj__ = ((char*)(right_value219=__builtin_string("sStoreArrayNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value219, right_value219 = (void*)0;
    __freed_obj__ = 0;
    return __result113__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_155;
struct sNode* right_156;
struct list$1sNodeph* array_num_nodes_157;
_Bool _if_conditional248;
_Bool __result114__;
void* right_value220;
struct CVALUE* left_value_158;
struct sType* left_type_159;
void* right_value221;
void* right_value222;
struct list$1CVALUEph* array_num_162;
struct list$1sNodeph* o2_saved_163;
struct sNode* it_166;
_Bool _for_condtionalA8;
_Bool _if_conditional253;
_Bool __result123__;
void* right_value223;
struct CVALUE* c_value_169;
_Bool _if_conditional254;
_Bool __result124__;
void* right_value224;
struct CVALUE* right_value_170;
struct sType* right_type_171;
struct sClass* klass_172;
void* right_value225;
struct sType* type_173;
char* fun_name_174;
_Bool calling_fun_175;
_Bool _if_conditional255;
void* right_value226;
_Bool _if_conditional258;
void* right_value227;
struct CVALUE* come_value_179;
_Bool _if_conditional259;
int i_180;
_Bool _for_condtionalA9;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value228;
void* right_value229;
struct buffer* buf_193;
struct list$1CVALUEph* o2_saved_194;
struct CVALUE* it_197;
_Bool _for_condtionalA10;
void* right_value230;
void* right_value231;
char* left_value_code_200;
void* right_value232;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value233;
char* __dec_obj110;
_Bool _if_conditional286;
void* right_value234;
char* __dec_obj111;
_Bool __result137__;
int right_value_id_201;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value235;
char* __dec_obj112;
_Bool _if_conditional289;
void* right_value236;
char* __dec_obj113;
_Bool __result138__;
void* right_value237;
struct sType* result_type_202;
void* right_value238;
void* right_value239;
struct list$1sNodeph* __dec_obj114;
struct sType* __dec_obj115;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_155, 0, sizeof(struct sNode*));
memset(&right_156, 0, sizeof(struct sNode*));
memset(&array_num_nodes_157, 0, sizeof(struct list$1sNodeph*));
right_value220 = (void*)0;
memset(&left_value_158, 0, sizeof(struct CVALUE*));
memset(&left_type_159, 0, sizeof(struct sType*));
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&array_num_162, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_163, 0, sizeof(struct list$1sNodeph*));
memset(&it_166, 0, sizeof(struct sNode*));
right_value223 = (void*)0;
memset(&c_value_169, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
memset(&right_value_170, 0, sizeof(struct CVALUE*));
memset(&right_type_171, 0, sizeof(struct sType*));
memset(&klass_172, 0, sizeof(struct sClass*));
right_value225 = (void*)0;
memset(&type_173, 0, sizeof(struct sType*));
memset(&fun_name_174, 0, sizeof(char*));
memset(&calling_fun_175, 0, sizeof(_Bool));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&come_value_179, 0, sizeof(struct CVALUE*));
memset(&i_180, 0, sizeof(int));
right_value228 = (void*)0;
right_value229 = (void*)0;
memset(&buf_193, 0, sizeof(struct buffer*));
memset(&o2_saved_194, 0, sizeof(struct list$1CVALUEph*));
memset(&it_197, 0, sizeof(struct CVALUE*));
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&left_value_code_200, 0, sizeof(char*));
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&right_value_id_201, 0, sizeof(int));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&result_type_202, 0, sizeof(struct sType*));
right_value238 = (void*)0;
right_value239 = (void*)0;
    left_155=self->mLeft;
    right_156=self->mRight;
    array_num_nodes_157=self->mArrayNum;
    if(_if_conditional248=!node_compile(left_155,info),    _if_conditional248) {
        __result114__ = (_Bool)0;
        return __result114__;
    }
    left_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value220, right_value220 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    left_type_159=left_value_158->type;
    array_num_162=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value222=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value221=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 874, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value221, right_value221 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value222, right_value222 = (void*)0;
    __freed_obj__ = 0;
    for(
    o2_saved_163=(array_num_nodes_157),it_166=list$1sNodeph_begin((o2_saved_163)) ,    0;    _for_condtionalA8=    !list$1sNodeph_end((o2_saved_163)) ,    _for_condtionalA8;    it_166=list$1sNodeph_next((o2_saved_163)) ,    0    ){
        if(_if_conditional253=!node_compile(it_166,info),        _if_conditional253) {
            __result123__ = (_Bool)0;
            if(left_value_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_162 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_162, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result123__;
        }
        c_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value223, right_value223 = (void*)0;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_162,(struct CVALUE*)come_increment_ref_count(c_value_169));
        if(c_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional254=!node_compile(right_156,info),    _if_conditional254) {
        __result124__ = (_Bool)0;
        if(left_value_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(array_num_162 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_162, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result124__;
    }
    right_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value224, right_value224 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_type_171=right_value_170->type;
    klass_172=left_value_158->type->mClass;
    type_173=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(left_value_158->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value225, right_value225 = (void*)0;
    __freed_obj__ = 0;
    fun_name_174="operator_store_element";
    if(_if_conditional255=self->mQuote,    _if_conditional255) {
        calling_fun_175=(_Bool)0;
    }
    else {
        calling_fun_175=operator_overload_fun2(type_173,fun_name_174,left_value_158,((struct CVALUE*)(right_value226=list$1CVALUEphp_operator_load_element(array_num_162,0))),right_value_170,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value226, right_value226 = (void*)0;
        __freed_obj__ = 0;
    }
    if(_if_conditional258=!calling_fun_175,    _if_conditional258) {
        come_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 910, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value227, right_value227 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional259=list$1sNodeph_length(left_type_159->mArrayNum)>0,        _if_conditional259) {
            for(
            i_180=0 ,            0;            _for_condtionalA9=            i_180<list$1CVALUEph_length(array_num_162) ,            _for_condtionalA9;            i_180++ ,            0            ){
                list$1sNodeph_delete(left_type_159->mArrayNum,-1,-1);
            }
        }
        else {
            if(_if_conditional278=left_type_159->mPointerNum>0,            _if_conditional278) {
                left_type_159->mPointerNum-=list$1CVALUEph_length(array_num_162);
                if(_if_conditional279=left_type_159->mPointerNum<0,                _if_conditional279) {
                    left_type_159->mPointerNum=0;
                }
            }
        }
        buf_193=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value229=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value228=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 931, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value228, right_value228 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value229, right_value229 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(buf_193,left_value_158->c_value);
        for(
        o2_saved_194=(struct list$1CVALUEph*)come_increment_ref_count((array_num_162)),it_197=list$1CVALUEph_begin((o2_saved_194)) ,        0;        _for_condtionalA10=        !list$1CVALUEph_end((o2_saved_194)) ,        _for_condtionalA10;        it_197=list$1CVALUEph_next((o2_saved_194)) ,        0        ){
            buffer_append_str(buf_193,((char*)(right_value230=xsprintf("[%s]",it_197->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
            if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value230, right_value230 = (void*)0;
            __freed_obj__ = 0;
        }
        if(o2_saved_194 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_194, (void*)0, (void*)0, 0, 0, 0, 0); }
        left_value_code_200=(char*)come_increment_ref_count(((char*)(right_value231=buffer_to_string(buf_193))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value231, right_value231 = (void*)0;
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value232=xsprintf("array is assinged to"))),left_type_159,right_type_171,right_value_170,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value232, right_value232 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional284=left_type_159->mHeap&&right_type_171->mHeap&&left_type_159->mPointerNum>0&&right_type_171->mPointerNum>0,        _if_conditional284) {
            if(_if_conditional285=left_value_158->type->mPointerNum>=1,            _if_conditional285) {
                decrement_ref_count_object(left_type_159,left_value_code_200,info,(_Bool)0);
                std_move(left_type_159,right_type_171,right_value_170,info);
                __dec_obj110=come_value_179->c_value;
                come_value_179->c_value=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("%s=%s",left_value_code_200,right_value_170->c_value))));
                if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value233, right_value233 = (void*)0;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional286=left_value_158->type->mPointerNum==0,                _if_conditional286) {
                    decrement_ref_count_object(left_type_159,left_value_code_200,info,(_Bool)0);
                    std_move(left_type_159,right_type_171,right_value_170,info);
                    __dec_obj111=come_value_179->c_value;
                    come_value_179->c_value=(char*)come_increment_ref_count(((char*)(right_value234=xsprintf("%s=%s",left_value_code_200,right_value_170->c_value))));
                    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value234, right_value234 = (void*)0;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_200,left_value_158->type->mPointerNum);
                    __result137__ = (_Bool)0;
                    if(come_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_193 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_200 && !__freed_obj__) { left_value_code_200 = come_decrement_ref_count(left_value_code_200, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_162 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_162, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_170 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_170, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_173 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_173, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result137__;
                }
            }
            right_value_id_201=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_170->c_value));
            if(_if_conditional287=right_value_id_201!=-1,            _if_conditional287) {
                remove_object_from_right_values(right_value_id_201,info);
            }
        }
        else {
            if(_if_conditional288=left_value_158->type->mPointerNum>=1,            _if_conditional288) {
                __dec_obj112=come_value_179->c_value;
                come_value_179->c_value=(char*)come_increment_ref_count(((char*)(right_value235=xsprintf("%s=%s",left_value_code_200,right_value_170->c_value))));
                if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value235, right_value235 = (void*)0;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional289=left_value_158->type->mPointerNum==0,                _if_conditional289) {
                    __dec_obj113=come_value_179->c_value;
                    come_value_179->c_value=(char*)come_increment_ref_count(((char*)(right_value236=xsprintf("%s=%s",left_value_code_200,right_value_170->c_value))));
                    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
                    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value236, right_value236 = (void*)0;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_200,left_value_158->type->mPointerNum);
                    __result138__ = (_Bool)0;
                    if(come_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_193 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_200 && !__freed_obj__) { left_value_code_200 = come_decrement_ref_count(left_value_code_200, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_162 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_162, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_170 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_170, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_173 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_173, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result138__;
                }
            }
        }
        result_type_202=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_clone(left_type_159))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value237, right_value237 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj114=result_type_202->mArrayNum;
        result_type_202->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value239=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value238=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 977, "struct list$1sNodeph"))))))));
        if(__dec_obj114) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value238, right_value238 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value239, right_value239 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj115=come_value_179->type;
        come_value_179->type=(struct sType*)come_increment_ref_count(result_type_202);
        if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
        come_value_179->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_179));
        add_come_last_code(info,"%s;\n",come_value_179->c_value);
        if(come_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_193 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_193, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_200 && !__freed_obj__) { left_value_code_200 = come_decrement_ref_count(left_value_code_200, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_202 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_202, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result139__ = (_Bool)1;
    if(left_value_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_162 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_170 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_170, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_173 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_173, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result139__;
    if(left_value_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_162 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_170 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_170, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_173 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_173, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result115__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result115__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_160;
_Bool _while_condtional14;
struct list_item$1CVALUEph* prev_it_161;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_160, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_161, 0, sizeof(struct list_item$1CVALUEph*));
            it_160=self->head;
            while(_while_condtional14=it_160!=((void*)0),            _while_condtional14) {
                prev_it_161=it_160;
                it_160=it_160->next;
                if(prev_it_161 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_161, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional249;
struct sNode* result_164;
struct sNode* __result116__;
_Bool _if_conditional250;
struct sNode* __result117__;
struct sNode* result_165;
struct sNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_164, 0, sizeof(struct sNode*));
memset(&result_165, 0, sizeof(struct sNode*));
        if(_if_conditional249=self==((void*)0),        _if_conditional249) {
            memset(&result_164,0,sizeof(struct sNode*));
            __result116__ = __result_obj__ = result_164;
            return __result116__;
        }
        self->it=self->head;
        if(_if_conditional250=self->it,        _if_conditional250) {
            __result117__ = __result_obj__ = self->it->item;
            return __result117__;
        }
        memset(&result_165,0,sizeof(struct sNode*));
        __result118__ = __result_obj__ = result_165;
        return __result118__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result119__ = self==((void*)0)||self->it==((void*)0);
        return __result119__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional251;
struct sNode* result_167;
struct sNode* __result120__;
_Bool _if_conditional252;
struct sNode* __result121__;
struct sNode* result_168;
struct sNode* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_167, 0, sizeof(struct sNode*));
memset(&result_168, 0, sizeof(struct sNode*));
        if(_if_conditional251=self==((void*)0)||self->it==((void*)0),        _if_conditional251) {
            memset(&result_167,0,sizeof(struct sNode*));
            __result120__ = __result_obj__ = result_167;
            return __result120__;
        }
        self->it=self->it->next;
        if(_if_conditional252=self->it,        _if_conditional252) {
            __result121__ = __result_obj__ = self->it->item;
            return __result121__;
        }
        memset(&result_168,0,sizeof(struct sNode*));
        __result122__ = __result_obj__ = result_168;
        return __result122__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional256;
struct list_item$1CVALUEph* it_176;
int i_177;
_Bool _while_condtional15;
_Bool _if_conditional257;
struct CVALUE* __result125__;
struct CVALUE* default_value_178;
struct CVALUE* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_176, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_177, 0, sizeof(int));
memset(&default_value_178, 0, sizeof(struct CVALUE*));
            if(_if_conditional256=position<0,            _if_conditional256) {
                position+=self->len;
            }
            it_176=self->head;
            i_177=0;
            while(_while_condtional15=it_176!=((void*)0),            _while_condtional15) {
                if(_if_conditional257=position==i_177,                _if_conditional257) {
                    __result125__ = __result_obj__ = it_176->item;
                    return __result125__;
                }
                it_176=it_176->next;
                i_177++;
            }
            memset(&default_value_178,0,sizeof(struct CVALUE*));
            __result126__ = __result_obj__ = default_value_178;
            if(default_value_178 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_178, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result126__;
            if(default_value_178 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_178, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result127__ = self->len;
                return __result127__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
int tmp_181;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct list$1sNodeph* __result128__;
_Bool _if_conditional266;
_Bool _if_conditional267;
struct list_item$1sNodeph* it_182;
int i_183;
_Bool _while_condtional16;
_Bool _if_conditional268;
struct list_item$1sNodeph* prev_it_184;
_Bool _if_conditional269;
_Bool _if_conditional270;
struct list_item$1sNodeph* it_185;
int i_186;
_Bool _while_condtional17;
_Bool _if_conditional271;
_Bool _if_conditional272;
struct list_item$1sNodeph* prev_it_187;
struct list_item$1sNodeph* it_188;
struct list_item$1sNodeph* head_prev_it_189;
struct list_item$1sNodeph* tail_it_190;
int i_191;
_Bool _while_condtional18;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
struct list_item$1sNodeph* prev_it_192;
_Bool _if_conditional276;
_Bool _if_conditional277;
struct list$1sNodeph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_181, 0, sizeof(int));
memset(&it_182, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_183, 0, sizeof(int));
memset(&prev_it_184, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_185, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_186, 0, sizeof(int));
memset(&prev_it_187, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_188, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_189, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_190, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_191, 0, sizeof(int));
memset(&prev_it_192, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional260=head<0,                    _if_conditional260) {
                        head+=self->len;
                    }
                    if(_if_conditional261=tail<0,                    _if_conditional261) {
                        tail+=self->len+1;
                    }
                    if(_if_conditional262=head>tail,                    _if_conditional262) {
                        tmp_181=tail;
                        tail=head;
                        head=tmp_181;
                    }
                    if(_if_conditional263=head<0,                    _if_conditional263) {
                        head=0;
                    }
                    if(_if_conditional264=tail>self->len,                    _if_conditional264) {
                        tail=self->len;
                    }
                    if(_if_conditional265=head==tail,                    _if_conditional265) {
                        __result128__ = __result_obj__ = self;
                        return __result128__;
                    }
                    if(_if_conditional266=head==0&&tail==self->len,                    _if_conditional266) {
                        list$1sNodeph_reset(self);
                    }
                    else {
                        if(_if_conditional267=head==0,                        _if_conditional267) {
                            it_182=self->head;
                            i_183=0;
                            while(_while_condtional16=it_182!=((void*)0),                            _while_condtional16) {
                                if(_if_conditional268=i_183<tail,                                _if_conditional268) {
                                    prev_it_184=it_182;
                                    it_182=it_182->next;
                                    i_183++;
                                    if(prev_it_184 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->len--;
                                }
                                else {
                                    if(_if_conditional269=i_183==tail,                                    _if_conditional269) {
                                        self->head=it_182;
                                        self->head->prev=((void*)0);
                                        break;
                                    }
                                    else {
                                        it_182=it_182->next;
                                        i_183++;
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional270=tail==self->len,                            _if_conditional270) {
                                it_185=self->head;
                                i_186=0;
                                while(_while_condtional17=it_185!=((void*)0),                                _while_condtional17) {
                                    if(_if_conditional271=i_186==head,                                    _if_conditional271) {
                                        self->tail=it_185->prev;
                                        self->tail->next=((void*)0);
                                    }
                                    if(_if_conditional272=i_186>=head,                                    _if_conditional272) {
                                        prev_it_187=it_185;
                                        it_185=it_185->next;
                                        i_186++;
                                        if(prev_it_187 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->len--;
                                    }
                                    else {
                                        it_185=it_185->next;
                                        i_186++;
                                    }
                                }
                            }
                            else {
                                it_188=self->head;
                                head_prev_it_189=((void*)0);
                                tail_it_190=((void*)0);
                                i_191=0;
                                while(_while_condtional18=it_188!=((void*)0),                                _while_condtional18) {
                                    if(_if_conditional273=i_191==head,                                    _if_conditional273) {
                                        head_prev_it_189=it_188->prev;
                                    }
                                    if(_if_conditional274=i_191==tail,                                    _if_conditional274) {
                                        tail_it_190=it_188;
                                    }
                                    if(_if_conditional275=i_191>=head&&i_191<tail,                                    _if_conditional275) {
                                        prev_it_192=it_188;
                                        it_188=it_188->next;
                                        i_191++;
                                        if(prev_it_192 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->len--;
                                    }
                                    else {
                                        it_188=it_188->next;
                                        i_191++;
                                    }
                                }
                                if(_if_conditional276=head_prev_it_189!=((void*)0),                                _if_conditional276) {
                                    head_prev_it_189->next=tail_it_190;
                                }
                                if(_if_conditional277=tail_it_190!=((void*)0),                                _if_conditional277) {
                                    tail_it_190->prev=head_prev_it_189;
                                }
                            }
                        }
                    }
                    __result129__ = __result_obj__ = self;
                    return __result129__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional280;
struct CVALUE* result_195;
struct CVALUE* __result130__;
_Bool _if_conditional281;
struct CVALUE* __result131__;
struct CVALUE* result_196;
struct CVALUE* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_195, 0, sizeof(struct CVALUE*));
memset(&result_196, 0, sizeof(struct CVALUE*));
            if(_if_conditional280=self==((void*)0),            _if_conditional280) {
                memset(&result_195,0,sizeof(struct CVALUE*));
                __result130__ = __result_obj__ = result_195;
                return __result130__;
            }
            self->it=self->head;
            if(_if_conditional281=self->it,            _if_conditional281) {
                __result131__ = __result_obj__ = self->it->item;
                return __result131__;
            }
            memset(&result_196,0,sizeof(struct CVALUE*));
            __result132__ = __result_obj__ = result_196;
            return __result132__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result133__ = self==((void*)0)||self->it==((void*)0);
            return __result133__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional282;
struct CVALUE* result_198;
struct CVALUE* __result134__;
_Bool _if_conditional283;
struct CVALUE* __result135__;
struct CVALUE* result_199;
struct CVALUE* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_198, 0, sizeof(struct CVALUE*));
memset(&result_199, 0, sizeof(struct CVALUE*));
            if(_if_conditional282=self==((void*)0)||self->it==((void*)0),            _if_conditional282) {
                memset(&result_198,0,sizeof(struct CVALUE*));
                __result134__ = __result_obj__ = result_198;
                return __result134__;
            }
            self->it=self->it->next;
            if(_if_conditional283=self->it,            _if_conditional283) {
                __result135__ = __result_obj__ = self->it->item;
                return __result135__;
            }
            memset(&result_199,0,sizeof(struct CVALUE*));
            __result136__ = __result_obj__ = result_199;
            return __result136__;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result140__ = self->sline;
    return __result140__;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value240;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value240 = (void*)0;
    __result141__ = __result_obj__ = ((char*)(right_value240=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value240, right_value240 = (void*)0;
    __freed_obj__ = 0;
    return __result141__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value241;
char* __dec_obj116;
void* right_value242;
struct list$1sNodeph* __dec_obj117;
void* right_value243;
struct sNode* __dec_obj118;
struct sLoadArrayNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
    self->sline=info->sline;
    __dec_obj116=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(info->sname))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value241, right_value241 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj117=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value242=list$1sNodephp_clone(array_num))));
    if(__dec_obj117) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value242, right_value242 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj118=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value243=sNode_clone(left))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, ((struct sNode*)right_value243)->finalize, ((struct sNode*)right_value243)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value243, right_value243 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __result142__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result142__;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result143__ = (_Bool)0;
    return __result143__;
}

char* sLoadArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value244;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value244 = (void*)0;
    __result144__ = __result_obj__ = ((char*)(right_value244=__builtin_string("sLoadArrayNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value244, right_value244 = (void*)0;
    __freed_obj__ = 0;
    return __result144__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_203;
struct list$1sNodeph* array_num_nodes_204;
_Bool _if_conditional293;
_Bool __result145__;
void* right_value245;
struct CVALUE* left_value_205;
void* right_value246;
struct sType* left_type_206;
void* right_value247;
void* right_value248;
struct list$1CVALUEph* array_num_207;
struct list$1sNodeph* o2_saved_208;
struct sNode* it_209;
_Bool _for_condtionalA11;
_Bool _if_conditional294;
_Bool __result146__;
void* right_value249;
struct CVALUE* c_value_210;
void* right_value250;
struct sType* type_211;
char* fun_name_212;
_Bool calling_fun_213;
_Bool _if_conditional295;
void* right_value251;
_Bool _if_conditional296;
void* right_value252;
struct CVALUE* come_value_214;
void* right_value253;
void* right_value254;
struct buffer* buf_215;
struct list$1CVALUEph* o2_saved_216;
struct CVALUE* it_217;
_Bool _for_condtionalA12;
void* right_value255;
void* right_value256;
char* left_value_code_218;
void* right_value257;
char* __dec_obj119;
void* right_value258;
struct sType* result_type_219;
_Bool _if_conditional297;
struct sType* __dec_obj120;
_Bool _if_conditional298;
int n_220;
_Bool _if_conditional299;
void* right_value259;
struct sType* __dec_obj121;
_Bool _if_conditional300;
void* right_value260;
struct sType* __dec_obj122;
_Bool _if_conditional301;
int i_221;
_Bool _for_condtionalA13;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value261;
struct sType* __dec_obj123;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_203, 0, sizeof(struct sNode*));
memset(&array_num_nodes_204, 0, sizeof(struct list$1sNodeph*));
right_value245 = (void*)0;
memset(&left_value_205, 0, sizeof(struct CVALUE*));
right_value246 = (void*)0;
memset(&left_type_206, 0, sizeof(struct sType*));
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&array_num_207, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_208, 0, sizeof(struct list$1sNodeph*));
memset(&it_209, 0, sizeof(struct sNode*));
right_value249 = (void*)0;
memset(&c_value_210, 0, sizeof(struct CVALUE*));
right_value250 = (void*)0;
memset(&type_211, 0, sizeof(struct sType*));
memset(&fun_name_212, 0, sizeof(char*));
memset(&calling_fun_213, 0, sizeof(_Bool));
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&come_value_214, 0, sizeof(struct CVALUE*));
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&buf_215, 0, sizeof(struct buffer*));
memset(&o2_saved_216, 0, sizeof(struct list$1CVALUEph*));
memset(&it_217, 0, sizeof(struct CVALUE*));
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&left_value_code_218, 0, sizeof(char*));
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&result_type_219, 0, sizeof(struct sType*));
memset(&n_220, 0, sizeof(int));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&i_221, 0, sizeof(int));
right_value261 = (void*)0;
    left_203=self->mLeft;
    array_num_nodes_204=self->mArrayNum;
    if(_if_conditional293=!node_compile(left_203,info),    _if_conditional293) {
        __result145__ = (_Bool)0;
        return __result145__;
    }
    left_value_205=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value245=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value245, right_value245 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    left_type_206=(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_clone(left_value_205->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value246, right_value246 = (void*)0;
    __freed_obj__ = 0;
    array_num_207=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value248=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value247=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1046, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value247, right_value247 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value248, right_value248 = (void*)0;
    __freed_obj__ = 0;
    for(
    o2_saved_208=(array_num_nodes_204),it_209=list$1sNodeph_begin((o2_saved_208)) ,    0;    _for_condtionalA11=    !list$1sNodeph_end((o2_saved_208)) ,    _for_condtionalA11;    it_209=list$1sNodeph_next((o2_saved_208)) ,    0    ){
        if(_if_conditional294=!node_compile(it_209,info),        _if_conditional294) {
            __result146__ = (_Bool)0;
            if(left_value_205 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_205, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_206 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_207, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result146__;
        }
        c_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value249, right_value249 = (void*)0;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_207,(struct CVALUE*)come_increment_ref_count(c_value_210));
        if(c_value_210 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(left_value_205->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value250, right_value250 = (void*)0;
    __freed_obj__ = 0;
    fun_name_212="operator_load_element";
    if(_if_conditional295=self->mQuote,    _if_conditional295) {
        calling_fun_213=(_Bool)0;
    }
    else {
        calling_fun_213=operator_overload_fun(type_211,fun_name_212,left_value_205,((struct CVALUE*)(right_value251=list$1CVALUEphp_operator_load_element(array_num_207,0))),info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value251, right_value251 = (void*)0;
        __freed_obj__ = 0;
    }
    if(_if_conditional296=!calling_fun_213,    _if_conditional296) {
        come_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1071, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value252, right_value252 = (void*)0;
        __freed_obj__ = 0;
        buf_215=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value254=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value253=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1073, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value253, right_value253 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value254, right_value254 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(buf_215,left_value_205->c_value);
        for(
        o2_saved_216=(struct list$1CVALUEph*)come_increment_ref_count((array_num_207)),it_217=list$1CVALUEph_begin((o2_saved_216)) ,        0;        _for_condtionalA12=        !list$1CVALUEph_end((o2_saved_216)) ,        _for_condtionalA12;        it_217=list$1CVALUEph_next((o2_saved_216)) ,        0        ){
            buffer_append_str(buf_215,((char*)(right_value255=xsprintf("[%s]",it_217->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
            if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value255, right_value255 = (void*)0;
            __freed_obj__ = 0;
        }
        if(o2_saved_216 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_216, (void*)0, (void*)0, 0, 0, 0, 0); }
        left_value_code_218=(char*)come_increment_ref_count(((char*)(right_value256=buffer_to_string(buf_215))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value256, right_value256 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj119=come_value_214->c_value;
        come_value_214->c_value=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("%s",left_value_code_218))));
        if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value257, right_value257 = (void*)0;
        __freed_obj__ = 0;
        result_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(left_type_206))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value258, right_value258 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional297=result_type_219->mOriginalLoadVarType->v1,        _if_conditional297) {
            __dec_obj120=result_type_219;
            result_type_219=(struct sType*)come_increment_ref_count(result_type_219->mOriginalLoadVarType->v1);
            if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional298=list$1sNodeph_length(result_type_219->mArrayNum)>0,        _if_conditional298) {
            n_220=list$1sNodeph_length(result_type_219->mArrayNum)-list$1CVALUEph_length(array_num_207);
            if(_if_conditional299=n_220==0,            _if_conditional299) {
                __dec_obj121=result_type_219;
                result_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_clone(left_type_206))));
                if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
                if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value259, right_value259 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional300=left_type_206->mOriginalLoadVarType->v1,                _if_conditional300) {
                    __dec_obj122=result_type_219;
                    result_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(left_type_206->mOriginalLoadVarType->v1))));
                    if(__dec_obj122) { come_call_finalizer(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
                    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value260, right_value260 = (void*)0;
                    __freed_obj__ = 0;
                }
                list$1sNodeph_reset(result_type_219->mArrayNum);
            }
            else {
                if(_if_conditional301=n_220>0,                _if_conditional301) {
                    for(
                    i_221=0 ,                    0;                    _for_condtionalA13=                    i_221<n_220 ,                    _for_condtionalA13;                    i_221++ ,                    0                    ){
                        list$1sNodeph_delete(result_type_219->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(_if_conditional302=n_220<0,                    _if_conditional302) {
                        list$1sNodeph_reset(result_type_219->mArrayNum);
                        result_type_219->mPointerNum+=n_220;
                        if(_if_conditional303=result_type_219->mPointerNum<0,                        _if_conditional303) {
                            result_type_219->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional304=result_type_219->mPointerNum>0,            _if_conditional304) {
                result_type_219->mPointerNum-=list$1CVALUEph_length(array_num_207);
                if(_if_conditional305=result_type_219->mPointerNum<0,                _if_conditional305) {
                    result_type_219->mPointerNum=0;
                }
            }
        }
        __dec_obj123=come_value_214->type;
        come_value_214->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(result_type_219))));
        if(__dec_obj123) { come_call_finalizer(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value261, right_value261 = (void*)0;
        __freed_obj__ = 0;
        come_value_214->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_214));
        add_come_last_code(info,"%s;\n",come_value_214->c_value);
        if(come_value_214 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_214, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_215 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_215, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_218 && !__freed_obj__) { left_value_code_218 = come_decrement_ref_count(left_value_code_218, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_219 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_219, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result147__ = (_Bool)1;
    if(left_value_205 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_205, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_206 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result147__;
    if(left_value_205 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_205, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_206 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result148__ = self->sline;
    return __result148__;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value262;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value262 = (void*)0;
    __result149__ = __result_obj__ = ((char*)(right_value262=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value262, right_value262 = (void*)0;
    __freed_obj__ = 0;
    return __result149__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value263;
char* __dec_obj124;
void* right_value264;
struct list$1sNodeph* __dec_obj125;
void* right_value265;
struct sNode* __dec_obj126;
struct sLoadRangeArrayNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
    self->sline=info->sline;
    __dec_obj124=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string(info->sname))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
    if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value263, right_value263 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj125=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value264=list$1sNodephp_clone(array_num))));
    if(__dec_obj125) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value264, right_value264 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj126=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=sNode_clone(left))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value265, right_value265 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __result150__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result150__;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadRangeArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result151__ = (_Bool)0;
    return __result151__;
}

char* sLoadRangeArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value266;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value266 = (void*)0;
    __result152__ = __result_obj__ = ((char*)(right_value266=__builtin_string("sLoadRangeArrayNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value266, right_value266 = (void*)0;
    __freed_obj__ = 0;
    return __result152__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_222;
struct list$1sNodeph* array_num_nodes_223;
_Bool _if_conditional309;
_Bool __result153__;
void* right_value267;
struct CVALUE* left_value_224;
void* right_value268;
struct sType* left_type_225;
void* right_value269;
void* right_value270;
struct list$1CVALUEph* array_num_226;
struct list$1sNodeph* o2_saved_227;
struct sNode* it_228;
_Bool _for_condtionalA14;
_Bool _if_conditional310;
_Bool __result154__;
void* right_value271;
struct CVALUE* c_value_229;
void* right_value272;
struct sType* type_230;
char* fun_name_231;
_Bool calling_fun_232;
_Bool _if_conditional311;
void* right_value273;
void* right_value274;
_Bool _if_conditional312;
void* right_value275;
struct CVALUE* come_value_233;
void* right_value276;
void* right_value277;
struct buffer* buf_234;
struct list$1CVALUEph* o2_saved_235;
struct CVALUE* it_236;
_Bool _for_condtionalA15;
void* right_value278;
void* right_value279;
char* left_value_code_237;
void* right_value280;
char* __dec_obj127;
void* right_value281;
struct sType* result_type_238;
_Bool _if_conditional313;
struct sType* __dec_obj128;
_Bool _if_conditional314;
int n_239;
_Bool _if_conditional315;
void* right_value282;
struct sType* __dec_obj129;
_Bool _if_conditional316;
void* right_value283;
struct sType* __dec_obj130;
_Bool _if_conditional317;
int i_240;
_Bool _for_condtionalA16;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value284;
struct sType* __dec_obj131;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_222, 0, sizeof(struct sNode*));
memset(&array_num_nodes_223, 0, sizeof(struct list$1sNodeph*));
right_value267 = (void*)0;
memset(&left_value_224, 0, sizeof(struct CVALUE*));
right_value268 = (void*)0;
memset(&left_type_225, 0, sizeof(struct sType*));
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&array_num_226, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_227, 0, sizeof(struct list$1sNodeph*));
memset(&it_228, 0, sizeof(struct sNode*));
right_value271 = (void*)0;
memset(&c_value_229, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
memset(&type_230, 0, sizeof(struct sType*));
memset(&fun_name_231, 0, sizeof(char*));
memset(&calling_fun_232, 0, sizeof(_Bool));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
memset(&come_value_233, 0, sizeof(struct CVALUE*));
right_value276 = (void*)0;
right_value277 = (void*)0;
memset(&buf_234, 0, sizeof(struct buffer*));
memset(&o2_saved_235, 0, sizeof(struct list$1CVALUEph*));
memset(&it_236, 0, sizeof(struct CVALUE*));
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&left_value_code_237, 0, sizeof(char*));
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&result_type_238, 0, sizeof(struct sType*));
memset(&n_239, 0, sizeof(int));
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&i_240, 0, sizeof(int));
right_value284 = (void*)0;
    left_222=self->mLeft;
    array_num_nodes_223=self->mArrayNum;
    if(_if_conditional309=!node_compile(left_222,info),    _if_conditional309) {
        __result153__ = (_Bool)0;
        return __result153__;
    }
    left_value_224=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value267, right_value267 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    left_type_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_clone(left_value_224->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value268, right_value268 = (void*)0;
    __freed_obj__ = 0;
    array_num_226=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value270=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value269=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1193, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value269, right_value269 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value270);
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value270, right_value270 = (void*)0;
    __freed_obj__ = 0;
    for(
    o2_saved_227=(array_num_nodes_223),it_228=list$1sNodeph_begin((o2_saved_227)) ,    0;    _for_condtionalA14=    !list$1sNodeph_end((o2_saved_227)) ,    _for_condtionalA14;    it_228=list$1sNodeph_next((o2_saved_227)) ,    0    ){
        if(_if_conditional310=!node_compile(it_228,info),        _if_conditional310) {
            __result154__ = (_Bool)0;
            if(left_value_224 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_225, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_226 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result154__;
        }
        c_value_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value271, right_value271 = (void*)0;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_226,(struct CVALUE*)come_increment_ref_count(c_value_229));
        if(c_value_229 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_clone(left_value_224->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value272, right_value272 = (void*)0;
    __freed_obj__ = 0;
    fun_name_231="operator_load_range_element";
    if(_if_conditional311=self->mQuote,    _if_conditional311) {
        calling_fun_232=(_Bool)0;
    }
    else {
        calling_fun_232=operator_overload_fun2(type_230,fun_name_231,left_value_224,((struct CVALUE*)(right_value273=list$1CVALUEphp_operator_load_element(array_num_226,0))),((struct CVALUE*)(right_value274=list$1CVALUEphp_operator_load_element(array_num_226,1))),info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value273, right_value273 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value274, right_value274 = (void*)0;
        __freed_obj__ = 0;
    }
    if(_if_conditional312=!calling_fun_232,    _if_conditional312) {
        come_value_233=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1218, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value275, right_value275 = (void*)0;
        __freed_obj__ = 0;
        buf_234=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value277=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value276=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1220, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value276, right_value276 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value277);
        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value277, right_value277 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(buf_234,left_value_224->c_value);
        for(
        o2_saved_235=(struct list$1CVALUEph*)come_increment_ref_count((array_num_226)),it_236=list$1CVALUEph_begin((o2_saved_235)) ,        0;        _for_condtionalA15=        !list$1CVALUEph_end((o2_saved_235)) ,        _for_condtionalA15;        it_236=list$1CVALUEph_next((o2_saved_235)) ,        0        ){
            buffer_append_str(buf_234,((char*)(right_value278=xsprintf("[%s]",it_236->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
            if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value278, right_value278 = (void*)0;
            __freed_obj__ = 0;
        }
        if(o2_saved_235 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_235, (void*)0, (void*)0, 0, 0, 0, 0); }
        left_value_code_237=(char*)come_increment_ref_count(((char*)(right_value279=buffer_to_string(buf_234))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value279, right_value279 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj127=come_value_233->c_value;
        come_value_233->c_value=(char*)come_increment_ref_count(((char*)(right_value280=xsprintf("%s",left_value_code_237))));
        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value280, right_value280 = (void*)0;
        __freed_obj__ = 0;
        result_type_238=(struct sType*)come_increment_ref_count(((struct sType*)(right_value281=sType_clone(left_type_225))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value281, right_value281 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional313=result_type_238->mOriginalLoadVarType->v1,        _if_conditional313) {
            __dec_obj128=result_type_238;
            result_type_238=(struct sType*)come_increment_ref_count(result_type_238->mOriginalLoadVarType->v1);
            if(__dec_obj128) { come_call_finalizer(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional314=list$1sNodeph_length(result_type_238->mArrayNum)>0,        _if_conditional314) {
            n_239=list$1sNodeph_length(result_type_238->mArrayNum)-list$1CVALUEph_length(array_num_226);
            if(_if_conditional315=n_239==0,            _if_conditional315) {
                __dec_obj129=result_type_238;
                result_type_238=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(left_type_225))));
                if(__dec_obj129) { come_call_finalizer(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
                if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value282, right_value282 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional316=left_type_225->mOriginalLoadVarType->v1,                _if_conditional316) {
                    __dec_obj130=result_type_238;
                    result_type_238=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(left_type_225->mOriginalLoadVarType->v1))));
                    if(__dec_obj130) { come_call_finalizer(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
                    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value283, right_value283 = (void*)0;
                    __freed_obj__ = 0;
                }
                list$1sNodeph_reset(result_type_238->mArrayNum);
            }
            else {
                if(_if_conditional317=n_239>0,                _if_conditional317) {
                    for(
                    i_240=0 ,                    0;                    _for_condtionalA16=                    i_240<n_239 ,                    _for_condtionalA16;                    i_240++ ,                    0                    ){
                        list$1sNodeph_delete(result_type_238->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(_if_conditional318=n_239<0,                    _if_conditional318) {
                        list$1sNodeph_reset(result_type_238->mArrayNum);
                        result_type_238->mPointerNum+=n_239;
                        if(_if_conditional319=result_type_238->mPointerNum<0,                        _if_conditional319) {
                            result_type_238->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional320=result_type_238->mPointerNum>0,            _if_conditional320) {
                result_type_238->mPointerNum-=list$1CVALUEph_length(array_num_226);
                if(_if_conditional321=result_type_238->mPointerNum<0,                _if_conditional321) {
                    result_type_238->mPointerNum=0;
                }
            }
        }
        __dec_obj131=come_value_233->type;
        come_value_233->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_clone(result_type_238))));
        if(__dec_obj131) { come_call_finalizer(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value284, right_value284 = (void*)0;
        __freed_obj__ = 0;
        come_value_233->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_233));
        add_come_last_code(info,"%s;\n",come_value_233->c_value);
        if(come_value_233 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_233, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_234 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_234, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_237 && !__freed_obj__) { left_value_code_237 = come_decrement_ref_count(left_value_code_237, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_238 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result155__ = (_Bool)1;
    if(left_value_224 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_226 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result155__;
    if(left_value_224 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_226 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result156__ = self->sline;
    return __result156__;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value285;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value285 = (void*)0;
    __result157__ = __result_obj__ = ((char*)(right_value285=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285);
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value285, right_value285 = (void*)0;
    __freed_obj__ = 0;
    return __result157__;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result158__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result158__;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result159__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    return __result159__;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional322;
char* p_241;
int sline_242;
_Bool _if_conditional323;
void* right_value286;
char* word_243;
_Bool _if_conditional324;
void* right_value287;
void* right_value288;
struct sNode* _inf_value2;
struct sExceptionGetValueNode* _inf_obj_value2;
void* right_value292;
struct sNode* __dec_obj134;
void* right_value293;
void* right_value294;
struct sNode* _inf_value3;
struct sExceptionGetValueNode* _inf_obj_value3;
void* right_value298;
struct sNode* __dec_obj137;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value299;
void* right_value300;
struct sNode* _inf_value4;
struct sExceptionGetValueNode* _inf_obj_value4;
void* right_value304;
struct sNode* __dec_obj140;
struct sNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_241, 0, sizeof(char*));
memset(&sline_242, 0, sizeof(int));
right_value286 = (void*)0;
memset(&word_243, 0, sizeof(char*));
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value304 = (void*)0;
    if(_if_conditional322=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),    _if_conditional322) {
        p_241=info->p;
        sline_242=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional323=xisalpha(*info->p)||*info->p==95,        _if_conditional323) {
            word_243=(char*)come_increment_ref_count(((char*)(right_value286=parse_word(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
            if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value286, right_value286 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional324=(string_operator_equals(word_243,"expect")||string_operator_equals(word_243,"value")||string_operator_equals(word_243,"catch"))&&(*info->p==40||*info->p==123),            _if_conditional324) {
                info->p=p_241;
                info->sline=sline_242;
            }
            else {
                info->p=p_241;
                info->sline=sline_242;
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1326, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value288=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value287=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1326, "struct sExceptionGetValueNode")))),node,info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value2->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value2->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value2->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value2->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value2->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value2->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj134=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value292=_inf_value2)));
                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
                if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value287, right_value287 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value288);
                if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value288, right_value288 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value292);
                if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, ((struct sNode*)right_value292)->finalize, ((struct sNode*)right_value292)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value292, right_value292 = (void*)0;
                __freed_obj__ = 0;
            }
            if(word_243 && !__freed_obj__) { word_243 = come_decrement_ref_count(word_243, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            info->p=p_241;
            info->sline=sline_242;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1333, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value294=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value293=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1333, "struct sExceptionGetValueNode")))),node,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExceptionGetValueNode_finalize;
            _inf_value3->clone=(void*)sExceptionGetValueNode_clone;
            _inf_value3->compile=(void*)sExceptionGetValueNode_compile;
            _inf_value3->sline=(void*)sExceptionGetValueNode_sline;
            _inf_value3->sname=(void*)sExceptionGetValueNode_sname;
            _inf_value3->terminated=(void*)sExceptionGetValueNode_terminated;
            _inf_value3->kind=(void*)sExceptionGetValueNode_kind;
            __dec_obj137=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=_inf_value3)));
            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value293);
            if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value293, right_value293 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value294);
            if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value294, right_value294 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value298);
            if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value298, right_value298 = (void*)0;
            __freed_obj__ = 0;
        }
    }
    else {
        if(_if_conditional337=*info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=123,        _if_conditional337) {
        }
        else {
            if(_if_conditional338=node==((void*)0),            _if_conditional338) {
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1341, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value300=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value299=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1341, "struct sExceptionGetValueNode")))),node,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value4->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value4->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value4->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value4->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value4->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value4->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj140=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=_inf_value4)));
                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
                if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value299, right_value299 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value300);
                if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value300, right_value300 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value304);
                if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value304, right_value304 = (void*)0;
                __freed_obj__ = 0;
            }
        }
    }
    __result166__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result166__;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional339;
_Bool _if_conditional340;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional339=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional339) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional340=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional340) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional341;
struct sExceptionGetValueNode* __result164__;
void* right_value301;
struct sExceptionGetValueNode* result_246;
_Bool _if_conditional342;
void* right_value302;
struct sNode* __dec_obj138;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value303;
char* __dec_obj139;
struct sExceptionGetValueNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value301 = (void*)0;
memset(&result_246, 0, sizeof(struct sExceptionGetValueNode*));
right_value302 = (void*)0;
right_value303 = (void*)0;
                    if(_if_conditional341=self==(void*)0,                    _if_conditional341) {
                        __result164__ = __result_obj__ = (void*)0;
                        return __result164__;
                    }
                    result_246=(struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value301=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "sExceptionGetValueNode_clone", 3, "struct sExceptionGetValueNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
                    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value301, right_value301 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional342=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional342) {
                        __dec_obj138=result_246->mLeft;
                        result_246->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=sNode_clone(self->mLeft))));
                        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
                        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value302, right_value302 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional343=self!=((void*)0),                    _if_conditional343) {
                        result_246->sline=self->sline;
                    }
                    if(_if_conditional344=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional344) {
                        __dec_obj139=result_246->sname;
                        result_246->sname=(char*)come_increment_ref_count(((char*)(right_value303=string_clone(self->sname))));
                        if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
                        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value303, right_value303 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    __result165__ = __result_obj__ = result_246;
                    if(result_246 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_246, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result165__;
                    if(result_246 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_246, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional19;
_Bool range_array_247;
char* p_248;
int sline_249;
_Bool _if_conditional345;
_Bool no_comma_250;
_Bool no_output_err_251;
_Bool no_output_come_code_252;
void* right_value305;
struct sNode* exp_253;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool quote_254;
_Bool _if_conditional348;
void* right_value306;
void* right_value307;
struct list$1sNodeph* array_num_255;
void* right_value308;
struct sNode* node2_256;
_Bool _if_conditional351;
void* right_value312;
struct sNode* node3_260;
void* right_value313;
void* right_value314;
struct sNode* _inf_value5;
struct sLoadRangeArrayNode* _inf_obj_value5;
void* right_value319;
struct sNode* __dec_obj147;
_Bool _if_conditional361;
_Bool quote_262;
_Bool _if_conditional362;
_Bool range_263;
void* right_value320;
void* right_value321;
struct list$1sNodeph* array_num_264;
_Bool _while_condtional20;
_Bool range_array2_265;
char* p_266;
int sline_267;
_Bool _if_conditional363;
_Bool no_comma_268;
_Bool no_output_err_269;
_Bool no_output_come_code_270;
void* right_value322;
struct sNode* exp_271;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
void* right_value323;
struct sNode* node2_272;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value324;
struct sNode* right_node_273;
void* right_value325;
void* right_value326;
struct sNode* _inf_value6;
struct sStoreArrayNode* _inf_obj_value6;
void* right_value332;
struct sNode* __dec_obj152;
void* right_value333;
void* right_value334;
struct sNode* _inf_value7;
struct sLoadArrayNode* _inf_obj_value7;
void* right_value339;
struct sNode* __dec_obj156;
void* right_value340;
struct sNode* __dec_obj157;
_Bool _if_conditional389;
_Bool no_comma_276;
void* right_value341;
struct sNode* begin_277;
void* right_value342;
struct sNode* end_278;
void* right_value343;
void* right_value344;
struct sNode* _inf_value8;
struct sRangeCheckNode* _inf_obj_value8;
void* right_value350;
struct sNode* __dec_obj162;
_Bool _if_conditional400;
void* right_value351;
void* right_value352;
struct sNode* _inf_value9;
struct sNullCheckNode* _inf_obj_value9;
void* right_value356;
struct sNode* __dec_obj165;
_Bool _if_conditional408;
_Bool _if_conditional409;
void* right_value357;
void* right_value358;
void* right_value359;
struct sNode* _inf_value10;
struct sNullCheckNode* _inf_obj_value10;
void* right_value363;
struct sNode* __dec_obj168;
void* right_value364;
char* field_name_282;
_Bool _if_conditional417;
void* right_value365;
struct sNode* right_node_283;
void* right_value366;
void* right_value367;
struct sNode* _inf_value11;
struct sStoreFieldNode* _inf_obj_value11;
void* right_value373;
struct sNode* __dec_obj173;
_Bool _if_conditional428;
_Bool _if_conditional429;
void* right_value374;
void* right_value375;
struct sNode* __dec_obj174;
_Bool _if_conditional430;
void* right_value376;
void* right_value377;
struct sNode* __dec_obj175;
void* right_value378;
void* right_value379;
struct sNode* __dec_obj176;
void* right_value380;
void* right_value381;
struct sNode* _inf_value12;
struct sLoadFieldNode* _inf_obj_value12;
void* right_value386;
struct sNode* __dec_obj180;
void* right_value387;
struct sNode* node2_286;
_Bool _if_conditional439;
struct sNode* __dec_obj181;
struct sNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&range_array_247, 0, sizeof(_Bool));
memset(&p_248, 0, sizeof(char*));
memset(&sline_249, 0, sizeof(int));
memset(&no_comma_250, 0, sizeof(_Bool));
memset(&no_output_err_251, 0, sizeof(_Bool));
memset(&no_output_come_code_252, 0, sizeof(_Bool));
right_value305 = (void*)0;
memset(&exp_253, 0, sizeof(struct sNode*));
memset(&quote_254, 0, sizeof(_Bool));
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&array_num_255, 0, sizeof(struct list$1sNodeph*));
right_value308 = (void*)0;
memset(&node2_256, 0, sizeof(struct sNode*));
right_value312 = (void*)0;
memset(&node3_260, 0, sizeof(struct sNode*));
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value319 = (void*)0;
memset(&quote_262, 0, sizeof(_Bool));
memset(&range_263, 0, sizeof(_Bool));
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&array_num_264, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_265, 0, sizeof(_Bool));
memset(&p_266, 0, sizeof(char*));
memset(&sline_267, 0, sizeof(int));
memset(&no_comma_268, 0, sizeof(_Bool));
memset(&no_output_err_269, 0, sizeof(_Bool));
memset(&no_output_come_code_270, 0, sizeof(_Bool));
right_value322 = (void*)0;
memset(&exp_271, 0, sizeof(struct sNode*));
right_value323 = (void*)0;
memset(&node2_272, 0, sizeof(struct sNode*));
right_value324 = (void*)0;
memset(&right_node_273, 0, sizeof(struct sNode*));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
memset(&no_comma_276, 0, sizeof(_Bool));
right_value341 = (void*)0;
memset(&begin_277, 0, sizeof(struct sNode*));
right_value342 = (void*)0;
memset(&end_278, 0, sizeof(struct sNode*));
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&field_name_282, 0, sizeof(char*));
right_value365 = (void*)0;
memset(&right_node_283, 0, sizeof(struct sNode*));
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
memset(&node2_286, 0, sizeof(struct sNode*));
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        range_array_247=(_Bool)0;
        {
            p_248=info->p;
            sline_249=info->sline;
            if(_if_conditional345=*info->p==91,            _if_conditional345) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_250=info->no_comma;
                no_output_err_251=info->no_output_err;
                no_output_come_code_252=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value305=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value305);
                if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value305, right_value305 = (void*)0;
                __freed_obj__ = 0;
                info->no_comma=no_comma_250;
                info->no_output_err=no_output_err_251;
                info->no_output_come_code=no_output_come_code_252;
                if(_if_conditional346=*info->p==46&&*(info->p+1)==46,                _if_conditional346) {
                    range_array_247=(_Bool)1;
                }
                if(exp_253 && !__freed_obj__) { exp_253 = come_decrement_ref_count(exp_253, ((struct sNode*)exp_253)->finalize, ((struct sNode*)exp_253)->_protocol_obj, 0, 0, 0); } 
            }
            info->p=p_248;
            info->sline=sline_249;
        }
        if(_if_conditional347=range_array_247&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional347) {
            quote_254=*info->p==92;
            if(_if_conditional348=quote_254,            _if_conditional348) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_255=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value307=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value306=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1387, "struct list$1sNodeph"))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
            if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value306, right_value306 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value307);
            if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value307, right_value307 = (void*)0;
            __freed_obj__ = 0;
            skip_pointer_attribute(info);
            node2_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value308);
            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value308, right_value308 = (void*)0;
            __freed_obj__ = 0;
            list$1sNodeph_push_back(array_num_255,(struct sNode*)come_increment_ref_count(node2_256));
            if(_if_conditional351=*info->p==46&&*(info->p+1)==46,            _if_conditional351) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
                if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value312, right_value312 = (void*)0;
                __freed_obj__ = 0;
                list$1sNodeph_push_back(array_num_255,(struct sNode*)come_increment_ref_count(node3_260));
                expected_next_character(93,info);
                if(node3_260 && !__freed_obj__) { node3_260 = come_decrement_ref_count(node3_260, ((struct sNode*)node3_260)->finalize, ((struct sNode*)node3_260)->_protocol_obj, 0, 0, 0); } 
            }
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1408, "struct sNode");
            _inf_obj_value5=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value314=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value313=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1408, "struct sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_255),quote_254,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value5->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value5->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value5->sline=(void*)sLoadRangeArrayNode_sline;
            _inf_value5->sname=(void*)sLoadRangeArrayNode_sname;
            _inf_value5->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value5->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj147=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=_inf_value5)));
            if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
            if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value313, right_value313 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value314);
            if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value314, right_value314 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value319);
            if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { right_value319 = come_decrement_ref_count(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value319, right_value319 = (void*)0;
            __freed_obj__ = 0;
            if(array_num_255 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_255, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(node2_256 && !__freed_obj__) { node2_256 = come_decrement_ref_count(node2_256, ((struct sNode*)node2_256)->finalize, ((struct sNode*)node2_256)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional361=!range_array_247&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional361) {
                quote_262=*info->p==92;
                if(_if_conditional362=quote_262,                _if_conditional362) {
                    info->p++;
                }
                range_263=(_Bool)0;
                array_num_264=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value321=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value320=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1419, "struct list$1sNodeph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
                if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value320, right_value320 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value321);
                if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value321, right_value321 = (void*)0;
                __freed_obj__ = 0;
                while(_while_condtional20=1,                _while_condtional20) {
                    range_array2_265=(_Bool)0;
                    {
                        p_266=info->p;
                        sline_267=info->sline;
                        if(_if_conditional363=*info->p==91,                        _if_conditional363) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_268=info->no_comma;
                            no_output_err_269=info->no_output_err;
                            no_output_come_code_270=info->no_output_come_code;
                            info->no_output_err=(_Bool)1;
                            info->no_comma=(_Bool)1;
                            info->no_output_come_code=(_Bool)1;
                            exp_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
                            if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value322, right_value322 = (void*)0;
                            __freed_obj__ = 0;
                            info->no_comma=no_comma_268;
                            info->no_output_err=no_output_err_269;
                            info->no_output_come_code=no_output_come_code_270;
                            if(_if_conditional364=*info->p==46&&*(info->p+1)==46,                            _if_conditional364) {
                                range_array2_265=(_Bool)1;
                            }
                            if(exp_271 && !__freed_obj__) { exp_271 = come_decrement_ref_count(exp_271, ((struct sNode*)exp_271)->finalize, ((struct sNode*)exp_271)->_protocol_obj, 0, 0, 0); } 
                        }
                        info->p=p_266;
                        info->sline=sline_267;
                    }
                    if(_if_conditional365=range_array2_265,                    _if_conditional365) {
                        break;
                    }
                    else {
                        if(_if_conditional366=*info->p==91,                        _if_conditional366) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            skip_pointer_attribute(info);
                            node2_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value323);
                            if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { right_value323 = come_decrement_ref_count(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value323, right_value323 = (void*)0;
                            __freed_obj__ = 0;
                            list$1sNodeph_push_back(array_num_264,(struct sNode*)come_increment_ref_count(node2_272));
                            if(_if_conditional367=*info->p==93,                            _if_conditional367) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                err_msg(info,"require ] character");
                                exit(2);
                            }
                            if(node2_272 && !__freed_obj__) { node2_272 = come_decrement_ref_count(node2_272, ((struct sNode*)node2_272)->finalize, ((struct sNode*)node2_272)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            break;
                        }
                    }
                }
                if(_if_conditional368=*info->p==61&&*(info->p+1)!=61,                _if_conditional368) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_node_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
                    if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value324, right_value324 = (void*)0;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1487, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreArrayNode*)(right_value326=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value325=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1487, "struct sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_273),(struct list$1sNodeph*)come_increment_ref_count(array_num_264),quote_262,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value6->clone=(void*)sStoreArrayNode_clone;
                    _inf_value6->compile=(void*)sStoreArrayNode_compile;
                    _inf_value6->sline=(void*)sStoreArrayNode_sline;
                    _inf_value6->sname=(void*)sStoreArrayNode_sname;
                    _inf_value6->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value6->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj152=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value332=_inf_value6)));
                    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
                    if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value325, right_value325 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value326);
                    if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value326, right_value326 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value332);
                    if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { right_value332 = come_decrement_ref_count(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value332, right_value332 = (void*)0;
                    __freed_obj__ = 0;
                    if(right_node_273 && !__freed_obj__) { right_node_273 = come_decrement_ref_count(right_node_273, ((struct sNode*)right_node_273)->finalize, ((struct sNode*)right_node_273)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1490, "struct sNode");
                    _inf_obj_value7=come_increment_ref_count(((struct sLoadArrayNode*)(right_value334=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value333=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1490, "struct sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_264),quote_262,info))));
                    _inf_value7->_protocol_obj=_inf_obj_value7;
                    _inf_value7->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value7->clone=(void*)sLoadArrayNode_clone;
                    _inf_value7->compile=(void*)sLoadArrayNode_compile;
                    _inf_value7->sline=(void*)sLoadArrayNode_sline;
                    _inf_value7->sname=(void*)sLoadArrayNode_sname;
                    _inf_value7->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value7->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj156=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=_inf_value7)));
                    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
                    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value333, right_value333 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value334);
                    if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value334, right_value334 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value339);
                    if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value339, right_value339 = (void*)0;
                    __freed_obj__ = 0;
                    __dec_obj157=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=exception_get_value((struct sNode*)come_increment_ref_count(node),info))));
                    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value340);
                    if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { right_value340 = come_decrement_ref_count(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value340, right_value340 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(array_num_264 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_264, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional389=*info->p==33&&*(info->p+1)==123,                _if_conditional389) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    no_comma_276=info->no_comma;
                    info->no_comma=(_Bool)1;
                    begin_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
                    if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value341, right_value341 = (void*)0;
                    __freed_obj__ = 0;
                    info->no_comma=no_comma_276;
                    expected_next_character(44,info);
                    end_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342);
                    if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value342, right_value342 = (void*)0;
                    __freed_obj__ = 0;
                    expected_next_character(125,info);
                    parse_sharp_v5(info);
                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1512, "struct sNode");
                    _inf_obj_value8=come_increment_ref_count(((struct sRangeCheckNode*)(right_value344=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value343=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1512, "struct sRangeCheckNode")))),node,begin_277,end_278,info))));
                    _inf_value8->_protocol_obj=_inf_obj_value8;
                    _inf_value8->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value8->clone=(void*)sRangeCheckNode_clone;
                    _inf_value8->compile=(void*)sRangeCheckNode_compile;
                    _inf_value8->sline=(void*)sRangeCheckNode_sline;
                    _inf_value8->sname=(void*)sRangeCheckNode_sname;
                    _inf_value8->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value8->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj162=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=_inf_value8)));
                    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value343);
                    if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value343, right_value343 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value344);
                    if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value344, right_value344 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value350);
                    if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value350, right_value350 = (void*)0;
                    __freed_obj__ = 0;
                    if(begin_277 && !__freed_obj__) { begin_277 = come_decrement_ref_count(begin_277, ((struct sNode*)begin_277)->finalize, ((struct sNode*)begin_277)->_protocol_obj, 0, 0, 0); } 
                    if(end_278 && !__freed_obj__) { end_278 = come_decrement_ref_count(end_278, ((struct sNode*)end_278)->finalize, ((struct sNode*)end_278)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional400=*info->p==33&&*(info->p+1)!=61,                    _if_conditional400) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1520, "struct sNode");
                        _inf_obj_value9=come_increment_ref_count(((struct sNullCheckNode*)(right_value352=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value351=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1520, "struct sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value9->_protocol_obj=_inf_obj_value9;
                        _inf_value9->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value9->clone=(void*)sNullCheckNode_clone;
                        _inf_value9->compile=(void*)sNullCheckNode_compile;
                        _inf_value9->sline=(void*)sNullCheckNode_sline;
                        _inf_value9->sname=(void*)sNullCheckNode_sname;
                        _inf_value9->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value9->kind=(void*)sNullCheckNode_kind;
                        __dec_obj165=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=_inf_value9)));
                        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value351);
                        if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value351, right_value351 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value352);
                        if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value352, right_value352 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value356);
                        if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value356, right_value356 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional408=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                        _if_conditional408) {
                            if(_if_conditional409=*info->p==46,                            _if_conditional409) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1532, "struct sNode");
                            _inf_obj_value10=come_increment_ref_count(((struct sNullCheckNode*)(right_value359=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value357=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1532, "struct sNullCheckNode")))),((struct sNode*)(right_value358=sNode_clone(node))),(_Bool)1,info))));
                            _inf_value10->_protocol_obj=_inf_obj_value10;
                            _inf_value10->finalize=(void*)sNullCheckNode_finalize;
                            _inf_value10->clone=(void*)sNullCheckNode_clone;
                            _inf_value10->compile=(void*)sNullCheckNode_compile;
                            _inf_value10->sline=(void*)sNullCheckNode_sline;
                            _inf_value10->sname=(void*)sNullCheckNode_sname;
                            _inf_value10->terminated=(void*)sNullCheckNode_terminated;
                            _inf_value10->kind=(void*)sNullCheckNode_kind;
                            __dec_obj168=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=_inf_value10)));
                            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
                            if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value357, right_value357 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value358);
                            if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[1] = right_value358, right_value358 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value359);
                            if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value359, right_value359 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value363);
                            if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[3] = right_value363, right_value363 = (void*)0;
                            __freed_obj__ = 0;
                            parse_sharp_v5(info);
                            field_name_282=(char*)come_increment_ref_count(((char*)(right_value364=parse_word(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                            if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value364, right_value364 = (void*)0;
                            __freed_obj__ = 0;
                            parse_sharp_v5(info);
                            if(_if_conditional417=*info->p==61&&*(info->p+1)!=61,                            _if_conditional417) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                right_node_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=expression_v13(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
                                if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value365, right_value365 = (void*)0;
                                __freed_obj__ = 0;
                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1548, "struct sNode");
                                _inf_obj_value11=come_increment_ref_count(((struct sStoreFieldNode*)(right_value367=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value366=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1548, "struct sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_283),(char*)come_increment_ref_count(field_name_282),info))));
                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                _inf_value11->finalize=(void*)sStoreFieldNode_finalize;
                                _inf_value11->clone=(void*)sStoreFieldNode_clone;
                                _inf_value11->compile=(void*)sStoreFieldNode_compile;
                                _inf_value11->sline=(void*)sStoreFieldNode_sline;
                                _inf_value11->sname=(void*)sStoreFieldNode_sname;
                                _inf_value11->terminated=(void*)sStoreFieldNode_terminated;
                                _inf_value11->kind=(void*)sStoreFieldNode_kind;
                                __dec_obj173=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=_inf_value11)));
                                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
                                if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value366, right_value366 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value367);
                                if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value367, right_value367 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value373);
                                if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value373, right_value373 = (void*)0;
                                __freed_obj__ = 0;
                                if(right_node_283 && !__freed_obj__) { right_node_283 = come_decrement_ref_count(right_node_283, ((struct sNode*)right_node_283)->finalize, ((struct sNode*)right_node_283)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional428=*info->p==40||*info->p==123||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                _if_conditional428) {
                                    if(_if_conditional429=string_operator_equals(field_name_282,"if"),                                    _if_conditional429) {
                                        __dec_obj174=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=sNode_clone(node)))),info))));
                                        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374);
                                        if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value374, right_value374 = (void*)0;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value375);
                                        if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { right_value375 = come_decrement_ref_count(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[1] = right_value375, right_value375 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional430=string_operator_equals(field_name_282,"elif"),                                        _if_conditional430) {
                                            __dec_obj175=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=sNode_clone(node)))),info))));
                                            if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value376);
                                            if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { right_value376 = come_decrement_ref_count(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value376, right_value376 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value377);
                                            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[1] = right_value377, right_value377 = (void*)0;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            __dec_obj176=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_282),info))));
                                            if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
                                            if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value378, right_value378 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value379);
                                            if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[1] = right_value379, right_value379 = (void*)0;
                                            __freed_obj__ = 0;
                                        }
                                    }
                                }
                                else {
                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1562, "struct sNode");
                                    _inf_obj_value12=come_increment_ref_count(((struct sLoadFieldNode*)(right_value381=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value380=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1562, "struct sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_282),info))));
                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                    _inf_value12->finalize=(void*)sLoadFieldNode_finalize;
                                    _inf_value12->clone=(void*)sLoadFieldNode_clone;
                                    _inf_value12->compile=(void*)sLoadFieldNode_compile;
                                    _inf_value12->sline=(void*)sLoadFieldNode_sline;
                                    _inf_value12->sname=(void*)sLoadFieldNode_sname;
                                    _inf_value12->terminated=(void*)sLoadFieldNode_terminated;
                                    _inf_value12->kind=(void*)sLoadFieldNode_kind;
                                    __dec_obj180=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=_inf_value12)));
                                    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value380);
                                    if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value380, right_value380 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value381);
                                    if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value381, right_value381 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value386);
                                    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[2] = right_value386, right_value386 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                            }
                            if(field_name_282 && !__freed_obj__) { field_name_282 = come_decrement_ref_count(field_name_282, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            node2_286=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
                            if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value387, right_value387 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional439=node2_286==((void*)0),                            _if_conditional439) {
                                if(node2_286 && !__freed_obj__) { node2_286 = come_decrement_ref_count(node2_286, ((struct sNode*)node2_286)->finalize, ((struct sNode*)node2_286)->_protocol_obj, 0, 0, 0); } 
                                break;
                            }
                            __dec_obj181=node;
                            node=(struct sNode*)come_increment_ref_count(node2_286);
                            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0); }
                            if(node2_286 && !__freed_obj__) { node2_286 = come_decrement_ref_count(node2_286, ((struct sNode*)node2_286)->finalize, ((struct sNode*)node2_286)->_protocol_obj, 0, 0, 0); } 
                        }
                    }
                }
            }
        }
    }
    __result184__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result184__;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional349;
void* right_value309;
struct list_item$1sNodeph* litem_257;
struct sNode* __dec_obj141;
_Bool _if_conditional350;
void* right_value310;
struct list_item$1sNodeph* litem_258;
struct sNode* __dec_obj142;
void* right_value311;
struct list_item$1sNodeph* litem_259;
struct sNode* __dec_obj143;
struct list$1sNodeph* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value309 = (void*)0;
memset(&litem_257, 0, sizeof(struct list_item$1sNodeph*));
right_value310 = (void*)0;
memset(&litem_258, 0, sizeof(struct list_item$1sNodeph*));
right_value311 = (void*)0;
memset(&litem_259, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional349=self->len==0,                _if_conditional349) {
                    litem_257=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value309=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282, "struct list_item$1sNodeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
                    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value309, right_value309 = (void*)0;
                    __freed_obj__ = 0;
                    litem_257->prev=((void*)0);
                    litem_257->next=((void*)0);
                    __dec_obj141=litem_257->item;
                    litem_257->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0); }
                    self->tail=litem_257;
                    self->head=litem_257;
                }
                else {
                    if(_if_conditional350=self->len==1,                    _if_conditional350) {
                        litem_258=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value310=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292, "struct list_item$1sNodeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
                        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value310, right_value310 = (void*)0;
                        __freed_obj__ = 0;
                        litem_258->prev=self->head;
                        litem_258->next=((void*)0);
                        __dec_obj142=litem_258->item;
                        litem_258->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0); }
                        self->tail=litem_258;
                        self->head->next=litem_258;
                    }
                    else {
                        litem_259=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value311=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 302, "struct list_item$1sNodeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
                        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value311, right_value311 = (void*)0;
                        __freed_obj__ = 0;
                        litem_259->prev=self->tail;
                        litem_259->next=((void*)0);
                        __dec_obj143=litem_259->item;
                        litem_259->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0); }
                        self->tail->next=litem_259;
                        self->tail=litem_259;
                    }
                }
                self->len++;
                __result167__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                return __result167__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional352=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional352) {
                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional353=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional353) {
                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional354=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional354) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional355;
struct sLoadRangeArrayNode* __result168__;
void* right_value315;
struct sLoadRangeArrayNode* result_261;
_Bool _if_conditional356;
void* right_value316;
struct sNode* __dec_obj144;
_Bool _if_conditional357;
void* right_value317;
struct list$1sNodeph* __dec_obj145;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
void* right_value318;
char* __dec_obj146;
struct sLoadRangeArrayNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value315 = (void*)0;
memset(&result_261, 0, sizeof(struct sLoadRangeArrayNode*));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
                if(_if_conditional355=self==(void*)0,                _if_conditional355) {
                    __result168__ = __result_obj__ = (void*)0;
                    return __result168__;
                }
                result_261=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value315=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value315);
                if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value315, right_value315 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional356=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional356) {
                    __dec_obj144=result_261->mLeft;
                    result_261->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=sNode_clone(self->mLeft))));
                    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316);
                    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value316, right_value316 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional357=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional357) {
                    __dec_obj145=result_261->mArrayNum;
                    result_261->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value317=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj145) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317);
                    if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value317, right_value317 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional358=self!=((void*)0),                _if_conditional358) {
                    result_261->mQuote=self->mQuote;
                }
                if(_if_conditional359=self!=((void*)0),                _if_conditional359) {
                    result_261->sline=self->sline;
                }
                if(_if_conditional360=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional360) {
                    __dec_obj146=result_261->sname;
                    result_261->sname=(char*)come_increment_ref_count(((char*)(right_value318=string_clone(self->sname))));
                    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value318);
                    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value318, right_value318 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result169__ = __result_obj__ = result_261;
                if(result_261 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result169__;
                if(result_261 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional369=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional369) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional370=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional370) {
                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional371=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional371) {
                            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional372=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional372) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional373;
struct sStoreArrayNode* __result170__;
void* right_value327;
struct sStoreArrayNode* result_274;
_Bool _if_conditional374;
void* right_value328;
struct sNode* __dec_obj148;
_Bool _if_conditional375;
void* right_value329;
struct sNode* __dec_obj149;
_Bool _if_conditional376;
void* right_value330;
struct list$1sNodeph* __dec_obj150;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool _if_conditional379;
void* right_value331;
char* __dec_obj151;
struct sStoreArrayNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value327 = (void*)0;
memset(&result_274, 0, sizeof(struct sStoreArrayNode*));
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
                        if(_if_conditional373=self==(void*)0,                        _if_conditional373) {
                            __result170__ = __result_obj__ = (void*)0;
                            return __result170__;
                        }
                        result_274=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value327=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
                        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value327, right_value327 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional374=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional374) {
                            __dec_obj148=result_274->mLeft;
                            result_274->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=sNode_clone(self->mLeft))));
                            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
                            if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value328, right_value328 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional375=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional375) {
                            __dec_obj149=result_274->mRight;
                            result_274->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=sNode_clone(self->mRight))));
                            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
                            if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value329, right_value329 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional376=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional376) {
                            __dec_obj150=result_274->mArrayNum;
                            result_274->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value330=list$1sNodephp_clone(self->mArrayNum))));
                            if(__dec_obj150) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value330);
                            if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value330, right_value330 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional377=self!=((void*)0),                        _if_conditional377) {
                            result_274->mQuote=self->mQuote;
                        }
                        if(_if_conditional378=self!=((void*)0),                        _if_conditional378) {
                            result_274->sline=self->sline;
                        }
                        if(_if_conditional379=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional379) {
                            __dec_obj151=result_274->sname;
                            result_274->sname=(char*)come_increment_ref_count(((char*)(right_value331=string_clone(self->sname))));
                            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value331);
                            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value331, right_value331 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        __result171__ = __result_obj__ = result_274;
                        if(result_274 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_274, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result171__;
                        if(result_274 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_274, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional380=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional380) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional381=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional381) {
                            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional382=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional382) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional383;
struct sLoadArrayNode* __result172__;
void* right_value335;
struct sLoadArrayNode* result_275;
_Bool _if_conditional384;
void* right_value336;
struct sNode* __dec_obj153;
_Bool _if_conditional385;
void* right_value337;
struct list$1sNodeph* __dec_obj154;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
void* right_value338;
char* __dec_obj155;
struct sLoadArrayNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value335 = (void*)0;
memset(&result_275, 0, sizeof(struct sLoadArrayNode*));
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
                        if(_if_conditional383=self==(void*)0,                        _if_conditional383) {
                            __result172__ = __result_obj__ = (void*)0;
                            return __result172__;
                        }
                        result_275=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value335=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value335);
                        if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value335, right_value335 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional384=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional384) {
                            __dec_obj153=result_275->mLeft;
                            result_275->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=sNode_clone(self->mLeft))));
                            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
                            if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value336, right_value336 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional385=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional385) {
                            __dec_obj154=result_275->mArrayNum;
                            result_275->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value337=list$1sNodephp_clone(self->mArrayNum))));
                            if(__dec_obj154) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value337);
                            if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value337, right_value337 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional386=self!=((void*)0),                        _if_conditional386) {
                            result_275->mQuote=self->mQuote;
                        }
                        if(_if_conditional387=self!=((void*)0),                        _if_conditional387) {
                            result_275->sline=self->sline;
                        }
                        if(_if_conditional388=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional388) {
                            __dec_obj155=result_275->sname;
                            result_275->sname=(char*)come_increment_ref_count(((char*)(right_value338=string_clone(self->sname))));
                            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value338);
                            if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value338, right_value338 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        __result173__ = __result_obj__ = result_275;
                        if(result_275 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result173__;
                        if(result_275 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional390=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional390) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional391=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional391) {
                            if(self->mBegin && !__freed_obj__) { self->mBegin = come_decrement_ref_count(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional392=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional392) {
                            if(self->mEnd && !__freed_obj__) { self->mEnd = come_decrement_ref_count(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional393=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional393) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional394;
struct sRangeCheckNode* __result174__;
void* right_value345;
struct sRangeCheckNode* result_279;
_Bool _if_conditional395;
void* right_value346;
struct sNode* __dec_obj158;
_Bool _if_conditional396;
void* right_value347;
struct sNode* __dec_obj159;
_Bool _if_conditional397;
void* right_value348;
struct sNode* __dec_obj160;
_Bool _if_conditional398;
_Bool _if_conditional399;
void* right_value349;
char* __dec_obj161;
struct sRangeCheckNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value345 = (void*)0;
memset(&result_279, 0, sizeof(struct sRangeCheckNode*));
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
                        if(_if_conditional394=self==(void*)0,                        _if_conditional394) {
                            __result174__ = __result_obj__ = (void*)0;
                            return __result174__;
                        }
                        result_279=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value345=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "struct sRangeCheckNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value345);
                        if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value345, right_value345 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional395=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional395) {
                            __dec_obj158=result_279->mLeft;
                            result_279->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=sNode_clone(self->mLeft))));
                            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value346);
                            if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value346, right_value346 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional396=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional396) {
                            __dec_obj159=result_279->mBegin;
                            result_279->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=sNode_clone(self->mBegin))));
                            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value347);
                            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value347, right_value347 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional397=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional397) {
                            __dec_obj160=result_279->mEnd;
                            result_279->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=sNode_clone(self->mEnd))));
                            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348);
                            if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value348, right_value348 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional398=self!=((void*)0),                        _if_conditional398) {
                            result_279->sline=self->sline;
                        }
                        if(_if_conditional399=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional399) {
                            __dec_obj161=result_279->sname;
                            result_279->sname=(char*)come_increment_ref_count(((char*)(right_value349=string_clone(self->sname))));
                            if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349);
                            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value349, right_value349 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        __result175__ = __result_obj__ = result_279;
                        if(result_279 && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result175__;
                        if(result_279 && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional410;
_Bool _if_conditional411;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional410=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional410) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional411=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional411) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional412;
struct sNullCheckNode* __result178__;
void* right_value360;
struct sNullCheckNode* result_281;
_Bool _if_conditional413;
void* right_value361;
struct sNode* __dec_obj166;
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
void* right_value362;
char* __dec_obj167;
struct sNullCheckNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value360 = (void*)0;
memset(&result_281, 0, sizeof(struct sNullCheckNode*));
right_value361 = (void*)0;
right_value362 = (void*)0;
                                if(_if_conditional412=self==(void*)0,                                _if_conditional412) {
                                    __result178__ = __result_obj__ = (void*)0;
                                    return __result178__;
                                }
                                result_281=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value360=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "struct sNullCheckNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value360);
                                if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value360, right_value360 = (void*)0;
                                __freed_obj__ = 0;
                                if(_if_conditional413=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional413) {
                                    __dec_obj166=result_281->mLeft;
                                    result_281->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=sNode_clone(self->mLeft))));
                                    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
                                    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value361, right_value361 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional414=self!=((void*)0),                                _if_conditional414) {
                                    result_281->mOnlyNullCecker=self->mOnlyNullCecker;
                                }
                                if(_if_conditional415=self!=((void*)0),                                _if_conditional415) {
                                    result_281->sline=self->sline;
                                }
                                if(_if_conditional416=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional416) {
                                    __dec_obj167=result_281->sname;
                                    result_281->sname=(char*)come_increment_ref_count(((char*)(right_value362=string_clone(self->sname))));
                                    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value362);
                                    if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value362, right_value362 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                __result179__ = __result_obj__ = result_281;
                                if(result_281 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result179__;
                                if(result_281 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional418;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool _if_conditional421;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional418=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional418) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional419=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional419) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional420=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional420) {
                                        if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional421=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional421) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional422;
struct sStoreFieldNode* __result180__;
void* right_value368;
struct sStoreFieldNode* result_284;
_Bool _if_conditional423;
void* right_value369;
struct sNode* __dec_obj169;
_Bool _if_conditional424;
void* right_value370;
struct sNode* __dec_obj170;
_Bool _if_conditional425;
void* right_value371;
char* __dec_obj171;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value372;
char* __dec_obj172;
struct sStoreFieldNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value368 = (void*)0;
memset(&result_284, 0, sizeof(struct sStoreFieldNode*));
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
                                    if(_if_conditional422=self==(void*)0,                                    _if_conditional422) {
                                        __result180__ = __result_obj__ = (void*)0;
                                        return __result180__;
                                    }
                                    result_284=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value368=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
                                    if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value368, right_value368 = (void*)0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional423=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional423) {
                                        __dec_obj169=result_284->mLeft;
                                        result_284->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=sNode_clone(self->mLeft))));
                                        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value369);
                                        if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value369, right_value369 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional424=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional424) {
                                        __dec_obj170=result_284->mRight;
                                        result_284->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=sNode_clone(self->mRight))));
                                        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value370);
                                        if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value370, right_value370 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional425=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional425) {
                                        __dec_obj171=result_284->mName;
                                        result_284->mName=(char*)come_increment_ref_count(((char*)(right_value371=string_clone(self->mName))));
                                        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value371);
                                        if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value371, right_value371 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional426=self!=((void*)0),                                    _if_conditional426) {
                                        result_284->sline=self->sline;
                                    }
                                    if(_if_conditional427=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional427) {
                                        __dec_obj172=result_284->sname;
                                        result_284->sname=(char*)come_increment_ref_count(((char*)(right_value372=string_clone(self->sname))));
                                        if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
                                        if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value372, right_value372 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    __result181__ = __result_obj__ = result_284;
                                    if(result_284 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_284, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result181__;
                                    if(result_284 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_284, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional431=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional431) {
                                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional432=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional432) {
                                            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        if(_if_conditional433=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional433) {
                                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional434;
struct sLoadFieldNode* __result182__;
void* right_value382;
struct sLoadFieldNode* result_285;
_Bool _if_conditional435;
void* right_value383;
struct sNode* __dec_obj177;
_Bool _if_conditional436;
void* right_value384;
char* __dec_obj178;
_Bool _if_conditional437;
_Bool _if_conditional438;
void* right_value385;
char* __dec_obj179;
struct sLoadFieldNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value382 = (void*)0;
memset(&result_285, 0, sizeof(struct sLoadFieldNode*));
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
                                        if(_if_conditional434=self==(void*)0,                                        _if_conditional434) {
                                            __result182__ = __result_obj__ = (void*)0;
                                            return __result182__;
                                        }
                                        result_285=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value382=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value382);
                                        if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value382, right_value382 = (void*)0;
                                        __freed_obj__ = 0;
                                        if(_if_conditional435=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional435) {
                                            __dec_obj177=result_285->mLeft;
                                            result_285->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=sNode_clone(self->mLeft))));
                                            if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value383);
                                            if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value383, right_value383 = (void*)0;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional436=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional436) {
                                            __dec_obj178=result_285->mName;
                                            result_285->mName=(char*)come_increment_ref_count(((char*)(right_value384=string_clone(self->mName))));
                                            if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value384);
                                            if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value384, right_value384 = (void*)0;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional437=self!=((void*)0),                                        _if_conditional437) {
                                            result_285->sline=self->sline;
                                        }
                                        if(_if_conditional438=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional438) {
                                            __dec_obj179=result_285->sname;
                                            result_285->sname=(char*)come_increment_ref_count(((char*)(right_value385=string_clone(self->sname))));
                                            if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value385);
                                            if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value385, right_value385 = (void*)0;
                                            __freed_obj__ = 0;
                                        }
                                        __result183__ = __result_obj__ = result_285;
                                        if(result_285 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_285, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result183__;
                                        if(result_285 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_285, (void*)0, (void*)0, 0, 0, 0, 0); }
}

