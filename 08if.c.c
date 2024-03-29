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
struct list_item$1sBlockph
{
    struct sBlock* item;
    struct list_item$1sBlockph* prev;
    struct list_item$1sBlockph* next;
};
struct list$1sBlockph
{
    struct list_item$1sBlockph* head;
    struct list_item$1sBlockph* tail;
    int len;
    struct list_item$1sBlockph* it;
};
struct sIfNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNodeph* mElifExpressionNodes;
    struct list$1sBlockph* mElifBlocks;
    int mElifNum;
    struct sBlock* mElseBlock;
    int sline;
    char* sname;
};
struct sOrStatmentNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    int sline;
    char* sname;
};
struct sAndStatmentNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
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

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

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

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

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

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

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

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
_Bool sIfNode_terminated();

char* sIfNode_kind();

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
int sIfNode_sline(struct sIfNode* self, struct sInfo* info);

char* sIfNode_sname(struct sIfNode* self, struct sInfo* info);

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);

_Bool sOrStatmentNode_terminated();

char* sOrStatmentNode_kind();

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);

int sOrStatmentNode_sline(struct sOrStatmentNode* self, struct sInfo* info);

char* sOrStatmentNode_sname(struct sOrStatmentNode* self, struct sInfo* info);

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);

_Bool sAndStatmentNode_terminated();

char* sAndStatmentNode_kind();

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);

int sAndStatmentNode_sline(struct sAndStatmentNode* self, struct sInfo* info);

char* sAndStatmentNode_sname(struct sAndStatmentNode* self, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

static void sIfNode_finalize(struct sIfNode* self);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
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










struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
void* right_value51;
struct sNode* __dec_obj13;
void* right_value78;
struct sBlock* __dec_obj22;
void* right_value79;
struct list$1sNodeph* __dec_obj23;
void* right_value86;
struct list$1sBlockph* __dec_obj27;
_Bool _if_conditional107;
void* right_value87;
struct sBlock* __dec_obj28;
struct sBlock* __dec_obj29;
struct sIfNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value51 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj13=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value51=sNode_clone(expression_node))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count2(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value51) { right_value51 = come_decrement_ref_count2(right_value51, ((struct sNode*)right_value51)->finalize, ((struct sNode*)right_value51)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj22=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value78=sBlock_clone(if_block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj23=self->mElifExpressionNodes;
    self->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value79=list$1sNodephp_clone(elif_expression_nodes))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj27=self->mElifBlocks;
    self->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value86=list$1sBlockphp_clone(elif_blocks))));
    come_call_finalizer2(list$1sBlockph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sBlockphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mElifNum=elif_num;
    if(else_block) {
        __dec_obj28=self->mElseBlock;
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value87=sBlock_clone(else_block))));
        come_call_finalizer2(sBlock_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj29=self->mElseBlock;
        self->mElseBlock=((void*)0);
        come_call_finalizer2(sBlock_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result76__ = __result_obj__ = self;
    come_call_finalizer2(sIfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result76__;
    come_call_finalizer2(sIfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional7;
struct sNode* __result34__;
void* right_value50;
struct sNode* result_11;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
struct sNode* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
memset(&result_11, 0, sizeof(struct sNode*));
        if(_if_conditional7=self==(void*)0,        _if_conditional7) {
            __result34__ = __result_obj__ = (void*)0;
            return __result34__;
        }
        result_11=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value50=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
        if(right_value50) { right_value50 = come_decrement_ref_count2(right_value50, ((struct sNode*)right_value50)->finalize, ((struct sNode*)right_value50)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional8=self!=((void*)0)&&self->clone!=((void*)0),        _if_conditional8) {
            result_11->_protocol_obj=self->clone(self->_protocol_obj);
        }
        if(_if_conditional9=self!=((void*)0),        _if_conditional9) {
            result_11->finalize=self->finalize;
        }
        if(_if_conditional10=self!=((void*)0),        _if_conditional10) {
            result_11->clone=self->clone;
        }
        if(_if_conditional11=self!=((void*)0),        _if_conditional11) {
            result_11->compile=self->compile;
        }
        if(_if_conditional12=self!=((void*)0),        _if_conditional12) {
            result_11->sline=self->sline;
        }
        if(_if_conditional13=self!=((void*)0),        _if_conditional13) {
            result_11->sname=self->sname;
        }
        if(_if_conditional14=self!=((void*)0),        _if_conditional14) {
            result_11->terminated=self->terminated;
        }
        if(_if_conditional15=self!=((void*)0),        _if_conditional15) {
            result_11->kind=self->kind;
        }
        __result35__ = __result_obj__ = result_11;
        if(result_11) { result_11 = come_decrement_ref_count2(result_11, ((struct sNode*)result_11)->finalize, ((struct sNode*)result_11)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result35__;
        if(result_11) { result_11 = come_decrement_ref_count2(result_11, ((struct sNode*)result_11)->finalize, ((struct sNode*)result_11)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional16;
struct sBlock* __result36__;
void* right_value52;
struct sBlock* result_12;
_Bool _if_conditional20;
void* right_value59;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional24;
void* right_value77;
struct sVarTable* __dec_obj21;
struct sBlock* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&result_12, 0, sizeof(struct sBlock*));
right_value59 = (void*)0;
right_value77 = (void*)0;
        if(_if_conditional16=self==(void*)0,        _if_conditional16) {
            __result36__ = __result_obj__ = (void*)0;
            return __result36__;
        }
        result_12=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value52=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional20=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional20) {
            __dec_obj17=result_12->mNodes;
            result_12->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value59=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional24=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional24) {
            __dec_obj21=result_12->mVarTable;
            result_12->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value77=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result71__ = __result_obj__ = result_12;
        come_call_finalizer2(sBlock_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result71__;
        come_call_finalizer2(sBlock_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional17;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional17=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional17) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional19=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional19) {
                come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_13;
_Bool _while_condtional1;
struct list_item$1sNodeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_13, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sNodeph*));
                    it_13=self->head;
                    while(_while_condtional1=it_13!=((void*)0),                    _while_condtional1) {
                        prev_it_14=it_13;
                        it_13=it_13->next;
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional18) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional21;
struct list$1sNodeph* __result37__;
void* right_value53;
void* right_value54;
struct list$1sNodeph* result_15;
struct list_item$1sNodeph* it_16;
_Bool _while_condtional2;
void* right_value58;
struct list$1sNodeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&result_15, 0, sizeof(struct list$1sNodeph*));
memset(&it_16, 0, sizeof(struct list_item$1sNodeph*));
right_value58 = (void*)0;
                if(_if_conditional21=self==((void*)0),                _if_conditional21) {
                    __result37__ = __result_obj__ = ((void*)0);
                    return __result37__;
                }
                result_15=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value54=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value53=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_16=self->head;
                while(_while_condtional2=it_16!=((void*)0),                _while_condtional2) {
                    list$1sNodeph_add(result_15,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value58=sNode_clone(it_16->item)))));
                    if(right_value58) { right_value58 = come_decrement_ref_count2(right_value58, ((struct sNode*)right_value58)->finalize, ((struct sNode*)right_value58)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_16=it_16->next;
                }
                __result40__ = __result_obj__ = result_15;
                come_call_finalizer2(list$1sNodephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(list$1sNodephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result38__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result38__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional22;
void* right_value55;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj14;
_Bool _if_conditional23;
void* right_value56;
struct list_item$1sNodeph* litem_18;
struct sNode* __dec_obj15;
void* right_value57;
struct list_item$1sNodeph* litem_19;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*));
right_value56 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1sNodeph*));
right_value57 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional22=self->len==0,                        _if_conditional22) {
                            litem_17=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value55=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_17->prev=((void*)0);
                            litem_17->next=((void*)0);
                            __dec_obj14=litem_17->item;
                            litem_17->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_17;
                            self->head=litem_17;
                        }
                        else {
                            if(_if_conditional23=self->len==1,                            _if_conditional23) {
                                litem_18=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value56=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_18->prev=self->head;
                                litem_18->next=((void*)0);
                                __dec_obj15=litem_18->item;
                                litem_18->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_18;
                                self->head->next=litem_18;
                            }
                            else {
                                litem_19=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value57=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_19->prev=self->tail;
                                litem_19->next=((void*)0);
                                __dec_obj16=litem_19->item;
                                litem_19->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_19;
                                self->tail=litem_19;
                            }
                        }
                        self->len++;
                        __result39__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result39__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional25;
struct sVarTable* __result41__;
void* right_value60;
struct sVarTable* result_20;
_Bool _if_conditional26;
void* right_value76;
struct map$2charphsVarph* __dec_obj20;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
struct sVarTable* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
memset(&result_20, 0, sizeof(struct sVarTable*));
right_value76 = (void*)0;
                if(_if_conditional25=self==(void*)0,                _if_conditional25) {
                    __result41__ = __result_obj__ = (void*)0;
                    return __result41__;
                }
                result_20=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value60=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional26=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional26) {
                    __dec_obj20=result_20->mVars;
                    result_20->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value76=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_20->mGlobal=self->mGlobal;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    result_20->mParent=self->mParent;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    result_20->mID=self->mID;
                }
                __result70__ = __result_obj__ = result_20;
                come_call_finalizer2(sVarTable_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result70__;
                come_call_finalizer2(sVarTable_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional27;
struct map$2charphsVarph* __result42__;
void* right_value61;
void* right_value67;
struct map$2charphsVarph* result_30;
void* right_value68;
void* right_value69;
struct list$1charp* __dec_obj19;
char* it_33;
struct sVar* default_value_36;
struct sVar* it2_39;
struct map$2charphsVarph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value67 = (void*)0;
memset(&result_30, 0, sizeof(struct map$2charphsVarph*));
right_value68 = (void*)0;
right_value69 = (void*)0;
memset(&it_33, 0, sizeof(char*));
memset(&default_value_36, 0, sizeof(struct sVar*));
memset(&it2_39, 0, sizeof(struct sVar*));
                        if(_if_conditional27=self==((void*)0),                        _if_conditional27) {
                            __result42__ = __result_obj__ = ((void*)0);
                            return __result42__;
                        }
                        result_30=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value67=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value61=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1178, "map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj19=result_30->key_list;
                        result_30->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value69=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value68=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1180, "list$1charp"))))))));
                        come_call_finalizer2(list$1charp_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charpp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charpp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        for(                        it_33=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_33=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_36,0,sizeof(struct sVar*));
                            it2_39=map$2charphsVarph_at(self,it_33,default_value_36);
                            map$2charphsVarph_insert2(result_30,it_33,it2_39);
                        }
                        __result69__ = __result_obj__ = result_30;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result69__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value62;
void* right_value63;
void* right_value64;
int i_25;
void* right_value65;
void* right_value66;
struct list$1charp* __dec_obj18;
struct map$2charphsVarph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&i_25, 0, sizeof(int));
right_value65 = (void*)0;
right_value66 = (void*)0;
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value62=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1084, "char*%"))));
                            right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value63=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1085, "sVar*%"))));
                            come_call_finalizer2(sVar_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value64=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1086, "bool"))));
                            right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_25=0;                            i_25<1024;                            i_25++                            ){
                                self->item_existance[i_25]=(_Bool)0;
                            }
                            self->size=1024;
                            self->len=0;
                            __dec_obj18=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value66=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value65=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1096, "list$1charp"))))))));
                            come_call_finalizer2(list$1charp_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charpp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charpp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->it=0;
                            __result44__ = __result_obj__ = self;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result44__;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional28=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional28) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional29=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional29) {
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional30=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional30) {
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional47=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional47) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional31=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                        _if_conditional31) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional33=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional33) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional35=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional35) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional36=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional36) {
                                            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional37=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional37) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional38=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional38) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional39=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional39) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional40=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional40) {
                                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional42=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional42) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional43=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional43) {
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional44=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional44) {
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional45=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional45) {
                                            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional46=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional46) {
                                            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_21;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_21, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_22, 0, sizeof(struct list_item$1sTypeph*));
                                                it_21=self->head;
                                                while(_while_condtional3=it_21!=((void*)0),                                                _while_condtional3) {
                                                    prev_it_22=it_21;
                                                    it_21=it_21->next;
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional32) {
                                                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional34=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional34) {
                                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_23;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_23, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_24, 0, sizeof(struct list_item$1charph*));
                                                it_23=self->head;
                                                while(_while_condtional4=it_23!=((void*)0),                                                _while_condtional4) {
                                                    prev_it_24=it_23;
                                                    it_23=it_23->next;
                                                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional41=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional41) {
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
                                self->head=((void*)0);
                                self->tail=((void*)0);
                                self->len=0;
                                __result43__ = __result_obj__ = self;
                                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result43__;
                                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_26;
_Bool _while_condtional5;
struct list_item$1charp* prev_it_27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_26, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_27, 0, sizeof(struct list_item$1charp*));
                                    it_26=self->head;
                                    while(_while_condtional5=it_26!=((void*)0),                                    _while_condtional5) {
                                        prev_it_27=it_26;
                                        it_26=it_26->next;
                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_28;
_Bool _if_conditional48;
_Bool _if_conditional49;
int i_29;
_Bool _if_conditional50;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_28, 0, sizeof(int));
memset(&i_29, 0, sizeof(int));
                                for(                                i_28=0;                                i_28<self->size;                                i_28++                                ){
                                    if(_if_conditional48=self->item_existance[i_28],                                    _if_conditional48) {
                                        if(_if_conditional49=1,                                        _if_conditional49) {
                                            come_call_finalizer2(sVar_finalize,self->items[i_28], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                for(                                i_29=0;                                i_29<self->size;                                i_29++                                ){
                                    if(_if_conditional50=self->item_existance[i_29],                                    _if_conditional50) {
                                        if(_if_conditional51=1,                                        _if_conditional51) {
                                            self->keys[i_29] = come_decrement_ref_count2(self->keys[i_29], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->keys);
                                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional52;
char* result_31;
char* __result45__;
_Bool _if_conditional53;
char* __result46__;
char* result_32;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_31, 0, sizeof(char*));
memset(&result_32, 0, sizeof(char*));
                            if(_if_conditional52=self==((void*)0),                            _if_conditional52) {
                                memset(&result_31,0,sizeof(char*));
                                __result45__ = __result_obj__ = result_31;
                                return __result45__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result46__ = __result_obj__ = self->key_list->it->item;
                                return __result46__;
                            }
                            memset(&result_32,0,sizeof(char*));
                            __result47__ = __result_obj__ = result_32;
                            return __result47__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result48__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result48__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional54;
char* result_34;
char* __result49__;
_Bool _if_conditional55;
char* __result50__;
char* result_35;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_34, 0, sizeof(char*));
memset(&result_35, 0, sizeof(char*));
                            if(_if_conditional54=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional54) {
                                memset(&result_34,0,sizeof(char*));
                                __result49__ = __result_obj__ = result_34;
                                return __result49__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result50__ = __result_obj__ = self->key_list->it->item;
                                return __result50__;
                            }
                            memset(&result_35,0,sizeof(char*));
                            __result51__ = __result_obj__ = result_35;
                            return __result51__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional6;
_Bool _if_conditional56;
_Bool _if_conditional57;
struct sVar* __result52__;
_Bool _if_conditional58;
_Bool _if_conditional59;
struct sVar* __result53__;
struct sVar* __result54__;
struct sVar* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
                                hash_37=string_get_hash_key(((char*)key))%self->size;
                                it_38=hash_37;
                                while(_while_condtional6=(_Bool)1,                                _while_condtional6) {
                                    if(_if_conditional56=self->item_existance[it_38],                                    _if_conditional56) {
                                        if(_if_conditional57=string_equals(self->keys[it_38],key),                                        _if_conditional57) {
                                            __result52__ = __result_obj__ = self->items[it_38];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result52__;
                                        }
                                        it_38++;
                                        if(_if_conditional58=it_38>=self->size,                                        _if_conditional58) {
                                            it_38=0;
                                        }
                                        else {
                                            if(_if_conditional59=it_38==hash_37,                                            _if_conditional59) {
                                                __result53__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result53__;
                                            }
                                        }
                                    }
                                    else {
                                        __result54__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result54__;
                                    }
                                }
                                __result55__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result55__;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional60;
unsigned int hash_51;
int it_52;
_Bool _while_condtional8;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool same_key_exist_69;
char* it2_72;
_Bool _if_conditional95;
_Bool _if_conditional96;
struct map$2charphsVarph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_51, 0, sizeof(unsigned int));
memset(&it_52, 0, sizeof(int));
memset(&same_key_exist_69, 0, sizeof(_Bool));
memset(&it2_72, 0, sizeof(char*));
                                if(_if_conditional60=self->len*2>=self->size,                                _if_conditional60) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_51=string_get_hash_key(key)%self->size;
                                it_52=hash_51;
                                while(_while_condtional8=(_Bool)1,                                _while_condtional8) {
                                    if(_if_conditional64=self->item_existance[it_52],                                    _if_conditional64) {
                                        if(_if_conditional65=string_equals(self->keys[it_52],key),                                        _if_conditional65) {
                                            if(_if_conditional66=1,                                            _if_conditional66) {
                                                self->keys[it_52] = come_decrement_ref_count2(self->keys[it_52], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_52]);
                                                self->keys[it_52]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_52]);
                                                self->keys[it_52]=key;
                                            }
                                            if(_if_conditional86=1,                                            _if_conditional86) {
                                                come_call_finalizer2(sVar_finalize,self->items[it_52], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                self->items[it_52]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_52]=item;
                                            }
                                            break;
                                        }
                                        it_52++;
                                        if(_if_conditional87=it_52>=self->size,                                        _if_conditional87) {
                                            it_52=0;
                                        }
                                        else {
                                            if(_if_conditional88=it_52==hash_51,                                            _if_conditional88) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_52]=(_Bool)1;
                                        if(_if_conditional89=1,                                        _if_conditional89) {
                                            self->keys[it_52]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_52]=key;
                                        }
                                        if(_if_conditional90=1,                                        _if_conditional90) {
                                            self->items[it_52]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_52]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_69=(_Bool)0;
                                for(                                it2_72=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_72=list$1charp_next(self->key_list)                                ){
                                    if(_if_conditional95=string_equals(it2_72,key),                                    _if_conditional95) {
                                        same_key_exist_69=(_Bool)1;
                                    }
                                }
                                if(_if_conditional96=!same_key_exist_69,                                _if_conditional96) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result68__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result68__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_40;
void* right_value70;
char** keys_41;
void* right_value71;
struct sVar** items_42;
void* right_value72;
_Bool* item_existance_43;
int len_44;
char* it_45;
struct sVar* default_value_46;
struct sVar* it2_47;
unsigned int hash_48;
int n_49;
_Bool _while_condtional7;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
struct sVar* default_value_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_40, 0, sizeof(int));
right_value70 = (void*)0;
memset(&keys_41, 0, sizeof(char**));
right_value71 = (void*)0;
memset(&items_42, 0, sizeof(struct sVar**));
right_value72 = (void*)0;
memset(&item_existance_43, 0, sizeof(_Bool*));
memset(&len_44, 0, sizeof(int));
memset(&it_45, 0, sizeof(char*));
memset(&default_value_46, 0, sizeof(struct sVar*));
memset(&it2_47, 0, sizeof(struct sVar*));
memset(&hash_48, 0, sizeof(unsigned int));
memset(&n_49, 0, sizeof(int));
memset(&default_value_50, 0, sizeof(struct sVar*));
                                        size_40=self->size*10;
                                        keys_41=(char**)come_increment_ref_count(((char**)(right_value70=(char**)come_calloc(1, sizeof(char*)*(1*(size_40)), "./comelang2.h", 1335, "char*%"))));
                                        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_42=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value71=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_40)), "./comelang2.h", 1336, "sVar*%"))));
                                        come_call_finalizer2(sVar_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        item_existance_43=(_Bool*)come_increment_ref_count(((_Bool*)(right_value72=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_40)), "./comelang2.h", 1337, "bool"))));
                                        right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_44=0;
                                        for(                                        it_45=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_45=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_46,0,sizeof(struct sVar*));
                                            it2_47=map$2charphsVarph_at(self,it_45,default_value_46);
                                            hash_48=string_get_hash_key(it_45)%size_40;
                                            n_49=hash_48;
                                            while(_while_condtional7=(_Bool)1,                                            _while_condtional7) {
                                                if(_if_conditional61=item_existance_43[n_49],                                                _if_conditional61) {
                                                    n_49++;
                                                    if(_if_conditional62=n_49>=size_40,                                                    _if_conditional62) {
                                                        n_49=0;
                                                    }
                                                    else {
                                                        if(_if_conditional63=n_49==hash_48,                                                        _if_conditional63) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_43[n_49]=(_Bool)1;
                                                    keys_41[n_49]=it_45;
                                                    items_42[n_49]=map$2charphsVarph_at(self,it_45,default_value_50);
                                                    len_44++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_free((char*)self->keys);
                                        self->keys=keys_41;
                                        self->items=items_42;
                                        self->item_existance=item_existance_43;
                                        self->size=size_40;
                                        self->len=len_44;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_53;
struct list_item$1charp* it_54;
_Bool _while_condtional9;
_Bool _if_conditional67;
struct list$1charp* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_53, 0, sizeof(int));
memset(&it_54, 0, sizeof(struct list_item$1charp*));
                                                    it2_53=0;
                                                    it_54=self->head;
                                                    while(_while_condtional9=it_54!=((void*)0),                                                    _while_condtional9) {
                                                        if(_if_conditional67=string_equals(it_54->item,item),                                                        _if_conditional67) {
                                                            list$1charp_delete(self,it2_53,it2_53+1);
                                                            break;
                                                        }
                                                        it2_53++;
                                                        it_54=it_54->next;
                                                    }
                                                    __result59__ = __result_obj__ = self;
                                                    return __result59__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
int tmp_55;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct list$1charp* __result56__;
_Bool _if_conditional74;
_Bool _if_conditional75;
struct list_item$1charp* it_58;
int i_59;
_Bool _while_condtional11;
_Bool _if_conditional76;
struct list_item$1charp* prev_it_60;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct list_item$1charp* it_61;
int i_62;
_Bool _while_condtional12;
_Bool _if_conditional79;
_Bool _if_conditional80;
struct list_item$1charp* prev_it_63;
struct list_item$1charp* it_64;
struct list_item$1charp* head_prev_it_65;
struct list_item$1charp* tail_it_66;
int i_67;
_Bool _while_condtional13;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct list_item$1charp* prev_it_68;
_Bool _if_conditional84;
_Bool _if_conditional85;
struct list$1charp* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_55, 0, sizeof(int));
memset(&it_58, 0, sizeof(struct list_item$1charp*));
memset(&i_59, 0, sizeof(int));
memset(&prev_it_60, 0, sizeof(struct list_item$1charp*));
memset(&it_61, 0, sizeof(struct list_item$1charp*));
memset(&i_62, 0, sizeof(int));
memset(&prev_it_63, 0, sizeof(struct list_item$1charp*));
memset(&it_64, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_65, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_66, 0, sizeof(struct list_item$1charp*));
memset(&i_67, 0, sizeof(int));
memset(&prev_it_68, 0, sizeof(struct list_item$1charp*));
                                                                if(_if_conditional68=head<0,                                                                _if_conditional68) {
                                                                    head+=self->len;
                                                                }
                                                                if(_if_conditional69=tail<0,                                                                _if_conditional69) {
                                                                    tail+=self->len+1;
                                                                }
                                                                if(_if_conditional70=head>tail,                                                                _if_conditional70) {
                                                                    tmp_55=tail;
                                                                    tail=head;
                                                                    head=tmp_55;
                                                                }
                                                                if(_if_conditional71=head<0,                                                                _if_conditional71) {
                                                                    head=0;
                                                                }
                                                                if(_if_conditional72=tail>self->len,                                                                _if_conditional72) {
                                                                    tail=self->len;
                                                                }
                                                                if(_if_conditional73=head==tail,                                                                _if_conditional73) {
                                                                    __result56__ = __result_obj__ = self;
                                                                    return __result56__;
                                                                }
                                                                if(_if_conditional74=head==0&&tail==self->len,                                                                _if_conditional74) {
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    if(_if_conditional75=head==0,                                                                    _if_conditional75) {
                                                                        it_58=self->head;
                                                                        i_59=0;
                                                                        while(_while_condtional11=it_58!=((void*)0),                                                                        _while_condtional11) {
                                                                            if(_if_conditional76=i_59<tail,                                                                            _if_conditional76) {
                                                                                prev_it_60=it_58;
                                                                                it_58=it_58->next;
                                                                                i_59++;
                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional77=i_59==tail,                                                                                _if_conditional77) {
                                                                                    self->head=it_58;
                                                                                    self->head->prev=((void*)0);
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    it_58=it_58->next;
                                                                                    i_59++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional78=tail==self->len,                                                                        _if_conditional78) {
                                                                            it_61=self->head;
                                                                            i_62=0;
                                                                            while(_while_condtional12=it_61!=((void*)0),                                                                            _while_condtional12) {
                                                                                if(_if_conditional79=i_62==head,                                                                                _if_conditional79) {
                                                                                    self->tail=it_61->prev;
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                if(_if_conditional80=i_62>=head,                                                                                _if_conditional80) {
                                                                                    prev_it_63=it_61;
                                                                                    it_61=it_61->next;
                                                                                    i_62++;
                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    it_61=it_61->next;
                                                                                    i_62++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            it_64=self->head;
                                                                            head_prev_it_65=((void*)0);
                                                                            tail_it_66=((void*)0);
                                                                            i_67=0;
                                                                            while(_while_condtional13=it_64!=((void*)0),                                                                            _while_condtional13) {
                                                                                if(_if_conditional81=i_67==head,                                                                                _if_conditional81) {
                                                                                    head_prev_it_65=it_64->prev;
                                                                                }
                                                                                if(_if_conditional82=i_67==tail,                                                                                _if_conditional82) {
                                                                                    tail_it_66=it_64;
                                                                                }
                                                                                if(_if_conditional83=i_67>=head&&i_67<tail,                                                                                _if_conditional83) {
                                                                                    prev_it_68=it_64;
                                                                                    it_64=it_64->next;
                                                                                    i_67++;
                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    it_64=it_64->next;
                                                                                    i_67++;
                                                                                }
                                                                            }
                                                                            if(_if_conditional84=head_prev_it_65!=((void*)0),                                                                            _if_conditional84) {
                                                                                head_prev_it_65->next=tail_it_66;
                                                                            }
                                                                            if(_if_conditional85=tail_it_66!=((void*)0),                                                                            _if_conditional85) {
                                                                                tail_it_66->prev=head_prev_it_65;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                __result58__ = __result_obj__ = self;
                                                                return __result58__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_56;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_57;
struct list$1charp* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_56, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_57, 0, sizeof(struct list_item$1charp*));
                                                                        it_56=self->head;
                                                                        while(_while_condtional10=it_56!=((void*)0),                                                                        _while_condtional10) {
                                                                            prev_it_57=it_56;
                                                                            it_56=it_56->next;
                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result57__ = __result_obj__ = self;
                                                                        return __result57__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional91;
char* result_70;
char* __result60__;
_Bool _if_conditional92;
char* __result61__;
char* result_71;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_70, 0, sizeof(char*));
memset(&result_71, 0, sizeof(char*));
                                    if(_if_conditional91=self==((void*)0),                                    _if_conditional91) {
                                        memset(&result_70,0,sizeof(char*));
                                        __result60__ = __result_obj__ = result_70;
                                        return __result60__;
                                    }
                                    self->it=self->head;
                                    if(self->it) {
                                        __result61__ = __result_obj__ = self->it->item;
                                        return __result61__;
                                    }
                                    memset(&result_71,0,sizeof(char*));
                                    __result62__ = __result_obj__ = result_71;
                                    return __result62__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result63__ = self==((void*)0)||self->it==((void*)0);
                                    return __result63__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional93;
char* result_73;
char* __result64__;
_Bool _if_conditional94;
char* __result65__;
char* result_74;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_73, 0, sizeof(char*));
memset(&result_74, 0, sizeof(char*));
                                    if(_if_conditional93=self==((void*)0)||self->it==((void*)0),                                    _if_conditional93) {
                                        memset(&result_73,0,sizeof(char*));
                                        __result64__ = __result_obj__ = result_73;
                                        return __result64__;
                                    }
                                    self->it=self->it->next;
                                    if(self->it) {
                                        __result65__ = __result_obj__ = self->it->item;
                                        return __result65__;
                                    }
                                    memset(&result_74,0,sizeof(char*));
                                    __result66__ = __result_obj__ = result_74;
                                    return __result66__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional97;
void* right_value73;
struct list_item$1charp* litem_75;
_Bool _if_conditional98;
void* right_value74;
struct list_item$1charp* litem_76;
void* right_value75;
struct list_item$1charp* litem_77;
struct list$1charp* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charp*));
right_value74 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1charp*));
right_value75 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional97=self->len==0,                                        _if_conditional97) {
                                            litem_75=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value73=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                                            come_call_finalizer2(list_item$1charpp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            litem_75->prev=((void*)0);
                                            litem_75->next=((void*)0);
                                            litem_75->item=item;
                                            self->tail=litem_75;
                                            self->head=litem_75;
                                        }
                                        else {
                                            if(_if_conditional98=self->len==1,                                            _if_conditional98) {
                                                litem_76=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value74=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                                                come_call_finalizer2(list_item$1charpp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                litem_76->prev=self->head;
                                                litem_76->next=((void*)0);
                                                litem_76->item=item;
                                                self->tail=litem_76;
                                                self->head->next=litem_76;
                                            }
                                            else {
                                                litem_77=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value75=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                                                come_call_finalizer2(list_item$1charpp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                litem_77->prev=self->tail;
                                                litem_77->next=((void*)0);
                                                litem_77->item=item;
                                                self->tail->next=litem_77;
                                                self->tail=litem_77;
                                            }
                                        }
                                        self->len++;
                                        __result67__ = __result_obj__ = self;
                                        return __result67__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional99;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional99=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional99) {
                            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__;
_Bool _if_conditional103;
struct list$1sBlockph* __result72__;
void* right_value80;
void* right_value81;
struct list$1sBlockph* result_80;
struct list_item$1sBlockph* it_81;
_Bool _while_condtional15;
void* right_value85;
struct list$1sBlockph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&result_80, 0, sizeof(struct list$1sBlockph*));
memset(&it_81, 0, sizeof(struct list_item$1sBlockph*));
right_value85 = (void*)0;
        if(_if_conditional103=self==((void*)0),        _if_conditional103) {
            __result72__ = __result_obj__ = ((void*)0);
            return __result72__;
        }
        result_80=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value81=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value80=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang2.h", 142, "list$1sBlockph"))))))));
        come_call_finalizer2(list$1sBlockphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sBlockphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_81=self->head;
        while(_while_condtional15=it_81!=((void*)0),        _while_condtional15) {
            list$1sBlockph_add(result_80,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value85=sBlock_clone(it_81->item)))));
            come_call_finalizer2(sBlock_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_81=it_81->next;
        }
        __result75__ = __result_obj__ = result_80;
        come_call_finalizer2(list$1sBlockphp_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result75__;
        come_call_finalizer2(list$1sBlockphp_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__;
struct list$1sBlockph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result73__ = __result_obj__ = self;
            come_call_finalizer2(list$1sBlockphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result73__;
            come_call_finalizer2(list$1sBlockphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
void* __result_obj__;
struct list_item$1sBlockph* it_78;
_Bool _while_condtional14;
struct list_item$1sBlockph* prev_it_79;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_78, 0, sizeof(struct list_item$1sBlockph*));
memset(&prev_it_79, 0, sizeof(struct list_item$1sBlockph*));
                it_78=self->head;
                while(_while_condtional14=it_78!=((void*)0),                _while_condtional14) {
                    prev_it_79=it_78;
                    it_78=it_78->next;
                    come_call_finalizer2(list_item$1sBlockphp_finalize,prev_it_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
void* __result_obj__;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional104=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional104) {
                            come_call_finalizer2(sBlock_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__;
_Bool _if_conditional105;
void* right_value82;
struct list_item$1sBlockph* litem_82;
struct sBlock* __dec_obj24;
_Bool _if_conditional106;
void* right_value83;
struct list_item$1sBlockph* litem_83;
struct sBlock* __dec_obj25;
void* right_value84;
struct list_item$1sBlockph* litem_84;
struct sBlock* __dec_obj26;
struct list$1sBlockph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1sBlockph*));
right_value83 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1sBlockph*));
right_value84 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1sBlockph*));
                if(_if_conditional105=self->len==0,                _if_conditional105) {
                    litem_82=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value82=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 156, "list_item$1sBlockph"))));
                    come_call_finalizer2(list_item$1sBlockphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_82->prev=((void*)0);
                    litem_82->next=((void*)0);
                    __dec_obj24=litem_82->item;
                    litem_82->item=(struct sBlock*)come_increment_ref_count(item);
                    come_call_finalizer2(sBlock_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_82;
                    self->head=litem_82;
                }
                else {
                    if(_if_conditional106=self->len==1,                    _if_conditional106) {
                        litem_83=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value83=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 166, "list_item$1sBlockph"))));
                        come_call_finalizer2(list_item$1sBlockphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_83->prev=self->head;
                        litem_83->next=((void*)0);
                        __dec_obj25=litem_83->item;
                        litem_83->item=(struct sBlock*)come_increment_ref_count(item);
                        come_call_finalizer2(sBlock_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_83;
                        self->head->next=litem_83;
                    }
                    else {
                        litem_84=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value84=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 176, "list_item$1sBlockph"))));
                        come_call_finalizer2(list_item$1sBlockphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_84->prev=self->tail;
                        litem_84->next=((void*)0);
                        __dec_obj26=litem_84->item;
                        litem_84->item=(struct sBlock*)come_increment_ref_count(item);
                        come_call_finalizer2(sBlock_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_84;
                        self->tail=litem_84;
                    }
                }
                self->len++;
                __result74__ = __result_obj__ = self;
                come_call_finalizer2(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result74__;
                come_call_finalizer2(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sIfNode_terminated(){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = (_Bool)1;
    return __result77__;
}

char* sIfNode_kind(){
void* __result_obj__;
void* right_value88;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
    __result78__ = __result_obj__ = ((char*)(right_value88=__builtin_string("sIfNode")));
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
void* __result_obj__;
struct sBlock* else_block_85;
int elif_num_86;
struct sNode* expression_node_87;
int sline_88;
char* sname_89;
_Bool _if_conditional114;
_Bool __result79__;
struct sBlock* if_block_90;
static int num_if_conditional_91=0;
int num_if_conditional_stack_92;
_Bool normal_if_93;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
void* right_value89;
struct CVALUE* conditional_value_94;
void* right_value90;
struct CVALUE* conditional_value_95;
_Bool _if_conditional120;
int i_96;
struct sNode* expression_node2_100;
_Bool _if_conditional123;
_Bool __result82__;
struct sBlock* elif_node_block_104;
_Bool normal_if_105;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value91;
struct CVALUE* conditional_value_106;
void* right_value92;
struct CVALUE* conditional_value_107;
static int num_elif_conditional_108=0;
int num_elif_conditional_stack_109;
_Bool _if_conditional129;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&else_block_85, 0, sizeof(struct sBlock*));
memset(&elif_num_86, 0, sizeof(int));
memset(&expression_node_87, 0, sizeof(struct sNode*));
memset(&sline_88, 0, sizeof(int));
memset(&sname_89, 0, sizeof(char*));
memset(&if_block_90, 0, sizeof(struct sBlock*));
memset(&num_if_conditional_stack_92, 0, sizeof(int));
memset(&normal_if_93, 0, sizeof(_Bool));
right_value89 = (void*)0;
memset(&conditional_value_94, 0, sizeof(struct CVALUE*));
right_value90 = (void*)0;
memset(&conditional_value_95, 0, sizeof(struct CVALUE*));
memset(&i_96, 0, sizeof(int));
memset(&expression_node2_100, 0, sizeof(struct sNode*));
memset(&elif_node_block_104, 0, sizeof(struct sBlock*));
memset(&normal_if_105, 0, sizeof(_Bool));
right_value91 = (void*)0;
memset(&conditional_value_106, 0, sizeof(struct CVALUE*));
right_value92 = (void*)0;
memset(&conditional_value_107, 0, sizeof(struct CVALUE*));
memset(&num_elif_conditional_stack_109, 0, sizeof(int));
    else_block_85=self->mElseBlock;
    elif_num_86=self->mElifNum;
    expression_node_87=self->mExpressionNode;
    sline_88=info->sline;
    sname_89=info->sname;
    info->writing_source_file_position=(_Bool)1;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional114=!node_compile(expression_node_87,info),    _if_conditional114) {
        __result79__ = (_Bool)0;
        return __result79__;
    }
    info->without_semicolon=(_Bool)0;
    if_block_90=self->mIfBlock;
    add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_91);
    num_if_conditional_stack_92=num_if_conditional_91;
    normal_if_93=(_Bool)1;
    if(_if_conditional115=info->module->mLastCode||info->module->mLastCode2||info->module->mLastCode3,    _if_conditional115) {
        normal_if_93=(_Bool)0;
    }
    if(_if_conditional116=existance_free_right_value_objects(info),    _if_conditional116) {
        normal_if_93=(_Bool)0;
    }
    if(normal_if_93) {
        conditional_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        add_come_code(info,"if(%s) {\n",conditional_value_94->c_value);
        come_call_finalizer2(CVALUE_finalize,conditional_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        conditional_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value90=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        add_come_code(info,"if(_if_conditional%d=%s,",num_if_conditional_91,conditional_value_95->c_value);
        add_last_code_to_source_with_comma(info);
        free_right_value_objects(info,(_Bool)1);
        add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_92);
        come_call_finalizer2(CVALUE_finalize,conditional_value_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    transpile_block(if_block_90,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    if(_if_conditional120=elif_num_86>0,    _if_conditional120) {
        for(        i_96=0;        i_96<elif_num_86;        i_96++        ){
            expression_node2_100=list$1sNodephp_operator_load_element(self->mElifExpressionNodes,i_96);
            info->writing_source_file_position=(_Bool)1;
            info->without_semicolon=(_Bool)1;
            if(_if_conditional123=!node_compile(expression_node2_100,info),            _if_conditional123) {
                __result82__ = (_Bool)0;
                return __result82__;
            }
            info->without_semicolon=(_Bool)0;
            elif_node_block_104=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_96);
            normal_if_105=(_Bool)1;
            if(_if_conditional126=info->module->mLastCode||info->module->mLastCode2||info->module->mLastCode3,            _if_conditional126) {
                normal_if_105=(_Bool)0;
            }
            if(_if_conditional127=existance_free_right_value_objects(info),            _if_conditional127) {
                normal_if_105=(_Bool)0;
            }
            if(normal_if_105) {
                conditional_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                add_come_code(info,"else if(%s) {\n",conditional_value_106->c_value);
                come_call_finalizer2(CVALUE_finalize,conditional_value_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                conditional_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value92=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_108);
                num_elif_conditional_stack_109=num_elif_conditional_108;
                add_come_code(info,"else if(_elif_conditional%d=%s,",num_elif_conditional_108,conditional_value_107->c_value);
                add_last_code_to_source_with_comma(info);
                free_right_value_objects(info,(_Bool)1);
                add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_109);
                come_call_finalizer2(CVALUE_finalize,conditional_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            transpile_block(elif_node_block_104,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
            add_come_code(info,"}\n");
        }
    }
    if(else_block_85) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_85,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    __result85__ = (_Bool)1;
    return __result85__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional118=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional118) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional119=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional119) {
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional121;
struct list_item$1sNodeph* it_97;
int i_98;
_Bool _while_condtional16;
_Bool _if_conditional122;
struct sNode* __result80__;
struct sNode* default_value_99;
struct sNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_97, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_98, 0, sizeof(int));
memset(&default_value_99, 0, sizeof(struct sNode*));
                if(_if_conditional121=position<0,                _if_conditional121) {
                    position+=self->len;
                }
                it_97=self->head;
                i_98=0;
                while(_while_condtional16=it_97!=((void*)0),                _while_condtional16) {
                    if(_if_conditional122=position==i_98,                    _if_conditional122) {
                        __result80__ = __result_obj__ = it_97->item;
                        return __result80__;
                    }
                    it_97=it_97->next;
                    i_98++;
                }
                memset(&default_value_99,0,sizeof(struct sNode*));
                __result81__ = __result_obj__ = default_value_99;
                if(default_value_99) { default_value_99 = come_decrement_ref_count2(default_value_99, ((struct sNode*)default_value_99)->finalize, ((struct sNode*)default_value_99)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result81__;
                if(default_value_99) { default_value_99 = come_decrement_ref_count2(default_value_99, ((struct sNode*)default_value_99)->finalize, ((struct sNode*)default_value_99)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__;
_Bool _if_conditional124;
struct list_item$1sBlockph* it_101;
int i_102;
_Bool _while_condtional17;
_Bool _if_conditional125;
struct sBlock* __result83__;
struct sBlock* default_value_103;
struct sBlock* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_101, 0, sizeof(struct list_item$1sBlockph*));
memset(&i_102, 0, sizeof(int));
memset(&default_value_103, 0, sizeof(struct sBlock*));
                if(_if_conditional124=position<0,                _if_conditional124) {
                    position+=self->len;
                }
                it_101=self->head;
                i_102=0;
                while(_while_condtional17=it_101!=((void*)0),                _while_condtional17) {
                    if(_if_conditional125=position==i_102,                    _if_conditional125) {
                        __result83__ = __result_obj__ = it_101->item;
                        return __result83__;
                    }
                    it_101=it_101->next;
                    i_102++;
                }
                memset(&default_value_103,0,sizeof(struct sBlock*));
                __result84__ = __result_obj__ = default_value_103;
                come_call_finalizer2(sBlock_finalize,default_value_103, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result84__;
                come_call_finalizer2(sBlock_finalize,default_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sIfNode_sline(struct sIfNode* self, struct sInfo* info){
void* __result_obj__;
int __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = self->sline;
    return __result86__;
}

char* sIfNode_sname(struct sIfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value93;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value93=__builtin_string(self->sname)));
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__;
void* right_value94;
char* __dec_obj30;
void* right_value95;
struct sNode* __dec_obj31;
void* right_value96;
struct sBlock* __dec_obj32;
struct sOrStatmentNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
    self->sline=info->sline;
    __dec_obj30=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string(info->sname))));
    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj31=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value95=sNode_clone(expression_node))));
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value95) { right_value95 = come_decrement_ref_count2(right_value95, ((struct sNode*)right_value95)->finalize, ((struct sNode*)right_value95)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj32=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value96=sBlock_clone(if_block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result88__ = __result_obj__ = self;
    come_call_finalizer2(sOrStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result88__;
    come_call_finalizer2(sOrStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrStatmentNode_terminated(){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = (_Bool)1;
    return __result89__;
}

char* sOrStatmentNode_kind(){
void* __result_obj__;
void* right_value97;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
    __result90__ = __result_obj__ = ((char*)(right_value97=__builtin_string("sOrStatmentNode")));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* expression_node_110;
_Bool _if_conditional133;
_Bool __result91__;
void* right_value98;
struct CVALUE* conditional_value_111;
struct sBlock* if_block_112;
static int num_or_conditional_113=0;
int num_or_conditional_stack_114;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&expression_node_110, 0, sizeof(struct sNode*));
right_value98 = (void*)0;
memset(&conditional_value_111, 0, sizeof(struct CVALUE*));
memset(&if_block_112, 0, sizeof(struct sBlock*));
memset(&num_or_conditional_stack_114, 0, sizeof(int));
    expression_node_110=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional133=!node_compile(expression_node_110,info),    _if_conditional133) {
        __result91__ = (_Bool)0;
        return __result91__;
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if_block_112=self->mIfBlock;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_113);
    add_come_code(info,"if(_or_conditional%d=%s,",num_or_conditional_113,conditional_value_111->c_value);
    num_or_conditional_stack_114=num_or_conditional_113;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_or_conditional%d != 0) {\n",num_or_conditional_stack_114);
    transpile_block(if_block_112,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result92__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,conditional_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result92__;
    come_call_finalizer2(CVALUE_finalize,conditional_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sOrStatmentNode_sline(struct sOrStatmentNode* self, struct sInfo* info){
void* __result_obj__;
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    __result93__ = self->sline;
    return __result93__;
}

char* sOrStatmentNode_sname(struct sOrStatmentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value99;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
    __result94__ = __result_obj__ = ((char*)(right_value99=__builtin_string(self->sname)));
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__;
void* right_value100;
char* __dec_obj33;
void* right_value101;
struct sNode* __dec_obj34;
void* right_value102;
struct sBlock* __dec_obj35;
struct sAndStatmentNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
    self->sline=info->sline;
    __dec_obj33=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(info->sname))));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj34=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=sNode_clone(expression_node))));
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj35=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value102=sBlock_clone(if_block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result95__ = __result_obj__ = self;
    come_call_finalizer2(sAndStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result95__;
    come_call_finalizer2(sAndStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndStatmentNode_terminated(){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    __result96__ = (_Bool)1;
    return __result96__;
}

char* sAndStatmentNode_kind(){
void* __result_obj__;
void* right_value103;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
    __result97__ = __result_obj__ = ((char*)(right_value103=__builtin_string("sAndStatmentNode")));
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result97__;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* expression_node_115;
_Bool _if_conditional137;
_Bool __result98__;
void* right_value104;
struct CVALUE* conditional_value_116;
struct sBlock* if_block_117;
static int num_and_conditional_118=0;
int num_and_conditional_stack_119;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&expression_node_115, 0, sizeof(struct sNode*));
right_value104 = (void*)0;
memset(&conditional_value_116, 0, sizeof(struct CVALUE*));
memset(&if_block_117, 0, sizeof(struct sBlock*));
memset(&num_and_conditional_stack_119, 0, sizeof(int));
    expression_node_115=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional137=!node_compile(expression_node_115,info),    _if_conditional137) {
        __result98__ = (_Bool)0;
        return __result98__;
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value104=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if_block_117=self->mIfBlock;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_118);
    add_come_code(info,"if(_and_conditional%d=%s,",num_and_conditional_118,conditional_value_116->c_value);
    num_and_conditional_stack_119=num_and_conditional_118;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_and_conditional%d == 0) {\n",num_and_conditional_stack_119);
    transpile_block(if_block_117,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result99__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,conditional_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result99__;
    come_call_finalizer2(CVALUE_finalize,conditional_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAndStatmentNode_sline(struct sAndStatmentNode* self, struct sInfo* info){
void* __result_obj__;
int __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    __result100__ = self->sline;
    return __result100__;
}

char* sAndStatmentNode_sname(struct sAndStatmentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value105;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
    __result101__ = __result_obj__ = ((char*)(right_value105=__builtin_string(self->sname)));
    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
void* right_value106;
char* sname_120;
int sline_121;
void* right_value107;
struct sBlock* if_block_122;
void* right_value108;
void* right_value109;
struct list$1sNodeph* elif_expression_nodes_123;
void* right_value110;
void* right_value111;
struct list$1sBlockph* elif_blocks_124;
int elif_num_125;
struct sBlock* else_block_126;
_Bool _while_condtional18;
char* saved_p_127;
int saved_sline_128;
_Bool _if_conditional138;
void* right_value112;
char* buf_129;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value113;
struct sNode* expression_node_130;
void* right_value117;
struct sBlock* elif_block_134;
void* right_value121;
struct sBlock* __dec_obj42;
void* right_value122;
void* right_value123;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* right_value131;
struct sNode* result_139;
struct sNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&sname_120, 0, sizeof(char*));
memset(&sline_121, 0, sizeof(int));
right_value107 = (void*)0;
memset(&if_block_122, 0, sizeof(struct sBlock*));
right_value108 = (void*)0;
right_value109 = (void*)0;
memset(&elif_expression_nodes_123, 0, sizeof(struct list$1sNodeph*));
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&elif_blocks_124, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_125, 0, sizeof(int));
memset(&else_block_126, 0, sizeof(struct sBlock*));
memset(&saved_p_127, 0, sizeof(char*));
memset(&saved_sline_128, 0, sizeof(int));
right_value112 = (void*)0;
memset(&buf_129, 0, sizeof(char*));
right_value113 = (void*)0;
memset(&expression_node_130, 0, sizeof(struct sNode*));
right_value117 = (void*)0;
memset(&elif_block_134, 0, sizeof(struct sBlock*));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value131 = (void*)0;
memset(&result_139, 0, sizeof(struct sNode*));
    sname_120=(char*)come_increment_ref_count(((char*)(right_value106=string_clone(info->sname))));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_121=info->sline;
    parse_sharp_v5(info);
    if_block_122=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value107=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    elif_expression_nodes_123=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value109=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value108=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 340, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    elif_blocks_124=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value111=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value110=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 342, "list$1sBlockph"))))))));
    come_call_finalizer2(list$1sBlockphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sBlockphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    elif_num_125=0;
    else_block_126=((void*)0);
    while(_while_condtional18=1,    _while_condtional18) {
        saved_p_127=info->p;
        saved_sline_128=info->sline;
        parse_sharp_v5(info);
        if(_if_conditional138=!xisalpha(*info->p),        _if_conditional138) {
            break;
        }
        parse_sharp_v5(info);
        buf_129=(char*)come_increment_ref_count(((char*)(right_value112=parse_word(info))));
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional139=string_operator_equals(buf_129,"else"),        _if_conditional139) {
            if(_if_conditional140=parsecmp("if",info),            _if_conditional140) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_130=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=expression_v13(info))));
                if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                list$1sNodeph_push_back(elif_expression_nodes_123,(struct sNode*)come_increment_ref_count(expression_node_130));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_134=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value117=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1sBlockph_push_back(elif_blocks_124,(struct sBlock*)come_increment_ref_count(elif_block_134));
                elif_num_125++;
                if(expression_node_130) { expression_node_130 = come_decrement_ref_count2(expression_node_130, ((struct sNode*)expression_node_130)->finalize, ((struct sNode*)expression_node_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sBlock_finalize,elif_block_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj42=else_block_126;
                else_block_126=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value121=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                buf_129 = come_decrement_ref_count2(buf_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_127;
            info->sline=saved_sline_128;
            buf_129 = come_decrement_ref_count2(buf_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_129 = come_decrement_ref_count2(buf_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 397, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sIfNode*)(right_value123=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value122=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 397, "sIfNode")))),(struct sNode*)come_increment_ref_count(expression_node),if_block_122,elif_expression_nodes_123,elif_blocks_124,elif_num_125,else_block_126,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sIfNode_sline;
    _inf_value1->sname=(void*)sIfNode_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    result_139=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value131=_inf_value1)));
    come_call_finalizer2(sIfNode_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sIfNode_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value131) { right_value131 = come_decrement_ref_count2(right_value131, ((struct sNode*)right_value131)->finalize, ((struct sNode*)right_value131)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result106__ = __result_obj__ = result_139;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_120 = come_decrement_ref_count2(sname_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,if_block_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,else_block_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(result_139) { result_139 = come_decrement_ref_count2(result_139, ((struct sNode*)result_139)->finalize, ((struct sNode*)result_139)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result106__;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_120 = come_decrement_ref_count2(sname_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,if_block_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,else_block_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(result_139) { result_139 = come_decrement_ref_count2(result_139, ((struct sNode*)result_139)->finalize, ((struct sNode*)result_139)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional141;
void* right_value114;
struct list_item$1sNodeph* litem_131;
struct sNode* __dec_obj36;
_Bool _if_conditional142;
void* right_value115;
struct list_item$1sNodeph* litem_132;
struct sNode* __dec_obj37;
void* right_value116;
struct list_item$1sNodeph* litem_133;
struct sNode* __dec_obj38;
struct list$1sNodeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1sNodeph*));
right_value115 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1sNodeph*));
right_value116 = (void*)0;
memset(&litem_133, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional141=self->len==0,                    _if_conditional141) {
                        litem_131=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_131->prev=((void*)0);
                        litem_131->next=((void*)0);
                        __dec_obj36=litem_131->item;
                        litem_131->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_131;
                        self->head=litem_131;
                    }
                    else {
                        if(_if_conditional142=self->len==1,                        _if_conditional142) {
                            litem_132=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 236, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_132->prev=self->head;
                            litem_132->next=((void*)0);
                            __dec_obj37=litem_132->item;
                            litem_132->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_132;
                            self->head->next=litem_132;
                        }
                        else {
                            litem_133=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 246, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_133->prev=self->tail;
                            litem_133->next=((void*)0);
                            __dec_obj38=litem_133->item;
                            litem_133->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail->next=litem_133;
                            self->tail=litem_133;
                        }
                    }
                    self->len++;
                    __result102__ = __result_obj__ = self;
                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result102__;
                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__;
_Bool _if_conditional143;
void* right_value118;
struct list_item$1sBlockph* litem_135;
struct sBlock* __dec_obj39;
_Bool _if_conditional144;
void* right_value119;
struct list_item$1sBlockph* litem_136;
struct sBlock* __dec_obj40;
void* right_value120;
struct list_item$1sBlockph* litem_137;
struct sBlock* __dec_obj41;
struct list$1sBlockph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
memset(&litem_135, 0, sizeof(struct list_item$1sBlockph*));
right_value119 = (void*)0;
memset(&litem_136, 0, sizeof(struct list_item$1sBlockph*));
right_value120 = (void*)0;
memset(&litem_137, 0, sizeof(struct list_item$1sBlockph*));
                    if(_if_conditional143=self->len==0,                    _if_conditional143) {
                        litem_135=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value118=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 226, "list_item$1sBlockph"))));
                        come_call_finalizer2(list_item$1sBlockphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_135->prev=((void*)0);
                        litem_135->next=((void*)0);
                        __dec_obj39=litem_135->item;
                        litem_135->item=(struct sBlock*)come_increment_ref_count(item);
                        come_call_finalizer2(sBlock_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_135;
                        self->head=litem_135;
                    }
                    else {
                        if(_if_conditional144=self->len==1,                        _if_conditional144) {
                            litem_136=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value119=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 236, "list_item$1sBlockph"))));
                            come_call_finalizer2(list_item$1sBlockphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_136->prev=self->head;
                            litem_136->next=((void*)0);
                            __dec_obj40=litem_136->item;
                            litem_136->item=(struct sBlock*)come_increment_ref_count(item);
                            come_call_finalizer2(sBlock_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_136;
                            self->head->next=litem_136;
                        }
                        else {
                            litem_137=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value120=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 246, "list_item$1sBlockph"))));
                            come_call_finalizer2(list_item$1sBlockphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_137->prev=self->tail;
                            litem_137->next=((void*)0);
                            __dec_obj41=litem_137->item;
                            litem_137->item=(struct sBlock*)come_increment_ref_count(item);
                            come_call_finalizer2(sBlock_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_137;
                            self->tail=litem_137;
                        }
                    }
                    self->len++;
                    __result103__ = __result_obj__ = self;
                    come_call_finalizer2(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result103__;
                    come_call_finalizer2(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
void* right_value132;
char* sname_140;
int sline_141;
void* right_value133;
struct sNode* expression_node2_142;
void* right_value134;
struct sBlock* if_block_143;
void* right_value135;
void* right_value136;
struct list$1sNodeph* elif_expression_nodes_144;
void* right_value137;
void* right_value138;
struct list$1sBlockph* elif_blocks_145;
int elif_num_146;
struct sBlock* else_block_147;
_Bool _while_condtional19;
char* saved_p_148;
int saved_sline_149;
_Bool _if_conditional160;
void* right_value139;
char* buf_150;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value140;
struct sNode* expression_node_151;
void* right_value141;
struct sBlock* elif_block_152;
void* right_value142;
struct sBlock* __dec_obj49;
void* right_value143;
void* right_value144;
struct sNode* _inf_value2;
struct sIfNode* _inf_obj_value2;
void* right_value152;
struct sNode* result_154;
struct sNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
memset(&sname_140, 0, sizeof(char*));
memset(&sline_141, 0, sizeof(int));
right_value133 = (void*)0;
memset(&expression_node2_142, 0, sizeof(struct sNode*));
right_value134 = (void*)0;
memset(&if_block_143, 0, sizeof(struct sBlock*));
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&elif_expression_nodes_144, 0, sizeof(struct list$1sNodeph*));
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&elif_blocks_145, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_146, 0, sizeof(int));
memset(&else_block_147, 0, sizeof(struct sBlock*));
memset(&saved_p_148, 0, sizeof(char*));
memset(&saved_sline_149, 0, sizeof(int));
right_value139 = (void*)0;
memset(&buf_150, 0, sizeof(char*));
right_value140 = (void*)0;
memset(&expression_node_151, 0, sizeof(struct sNode*));
right_value141 = (void*)0;
memset(&elif_block_152, 0, sizeof(struct sBlock*));
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value152 = (void*)0;
memset(&result_154, 0, sizeof(struct sNode*));
    sname_140=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(info->sname))));
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_141=info->sline;
    parse_sharp_v5(info);
    expression_node2_142=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value133=craete_logical_denial((struct sNode*)come_increment_ref_count(expression_node),info))));
    if(right_value133) { right_value133 = come_decrement_ref_count2(right_value133, ((struct sNode*)right_value133)->finalize, ((struct sNode*)right_value133)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if_block_143=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value134=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    elif_expression_nodes_144=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value136=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value135=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 413, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    elif_blocks_145=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value138=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value137=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 415, "list$1sBlockph"))))))));
    come_call_finalizer2(list$1sBlockphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sBlockphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    elif_num_146=0;
    else_block_147=((void*)0);
    while(_while_condtional19=1,    _while_condtional19) {
        saved_p_148=info->p;
        saved_sline_149=info->sline;
        parse_sharp_v5(info);
        if(_if_conditional160=!xisalpha(*info->p),        _if_conditional160) {
            break;
        }
        parse_sharp_v5(info);
        buf_150=(char*)come_increment_ref_count(((char*)(right_value139=parse_word(info))));
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional161=string_operator_equals(buf_150,"else"),        _if_conditional161) {
            if(_if_conditional162=parsecmp("if",info),            _if_conditional162) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_151=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=expression_v13(info))));
                if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                list$1sNodeph_push_back(elif_expression_nodes_144,(struct sNode*)come_increment_ref_count(expression_node_151));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_152=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value141=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1sBlockph_push_back(elif_blocks_145,(struct sBlock*)come_increment_ref_count(elif_block_152));
                elif_num_146++;
                if(expression_node_151) { expression_node_151 = come_decrement_ref_count2(expression_node_151, ((struct sNode*)expression_node_151)->finalize, ((struct sNode*)expression_node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sBlock_finalize,elif_block_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj49=else_block_147;
                else_block_147=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value142=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                buf_150 = come_decrement_ref_count2(buf_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_148;
            info->sline=saved_sline_149;
            buf_150 = come_decrement_ref_count2(buf_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_150 = come_decrement_ref_count2(buf_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 470, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sIfNode*)(right_value144=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value143=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 470, "sIfNode")))),(struct sNode*)come_increment_ref_count(expression_node2_142),if_block_143,elif_expression_nodes_144,elif_blocks_145,elif_num_146,else_block_147,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sIfNode_finalize;
    _inf_value2->clone=(void*)sIfNode_clone;
    _inf_value2->compile=(void*)sIfNode_compile;
    _inf_value2->sline=(void*)sIfNode_sline;
    _inf_value2->sname=(void*)sIfNode_sname;
    _inf_value2->terminated=(void*)sIfNode_terminated;
    _inf_value2->kind=(void*)sIfNode_kind;
    result_154=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=_inf_value2)));
    come_call_finalizer2(sIfNode_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sIfNode_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result109__ = __result_obj__ = result_154;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_140 = come_decrement_ref_count2(sname_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(expression_node2_142) { expression_node2_142 = come_decrement_ref_count2(expression_node2_142, ((struct sNode*)expression_node2_142)->finalize, ((struct sNode*)expression_node2_142)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sBlock_finalize,if_block_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,else_block_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(result_154) { result_154 = come_decrement_ref_count2(result_154, ((struct sNode*)result_154)->finalize, ((struct sNode*)result_154)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result109__;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_140 = come_decrement_ref_count2(sname_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(expression_node2_142) { expression_node2_142 = come_decrement_ref_count2(expression_node2_142, ((struct sNode*)expression_node2_142)->finalize, ((struct sNode*)expression_node2_142)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sBlock_finalize,if_block_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,else_block_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(result_154) { result_154 = come_decrement_ref_count2(result_154, ((struct sNode*)result_154)->finalize, ((struct sNode*)result_154)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional178;
void* right_value153;
char* sname_155;
int sline_156;
void* right_value154;
struct sNode* expression_node_157;
void* right_value155;
struct sBlock* if_block_158;
void* right_value156;
void* right_value157;
struct list$1sNodeph* elif_expression_nodes_159;
void* right_value158;
void* right_value159;
struct list$1sBlockph* elif_blocks_160;
int elif_num_161;
struct sBlock* else_block_162;
_Bool _while_condtional20;
char* saved_p_163;
int saved_sline_164;
_Bool _if_conditional179;
void* right_value160;
char* buf_165;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value161;
struct sNode* expression_node_166;
void* right_value162;
struct sBlock* elif_block_167;
void* right_value163;
struct sBlock* __dec_obj56;
void* right_value164;
void* right_value165;
struct sNode* _inf_value3;
struct sIfNode* _inf_obj_value3;
void* right_value173;
struct sNode* result_169;
struct sNode* __result112__;
void* right_value174;
struct sNode* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
memset(&sname_155, 0, sizeof(char*));
memset(&sline_156, 0, sizeof(int));
right_value154 = (void*)0;
memset(&expression_node_157, 0, sizeof(struct sNode*));
right_value155 = (void*)0;
memset(&if_block_158, 0, sizeof(struct sBlock*));
right_value156 = (void*)0;
right_value157 = (void*)0;
memset(&elif_expression_nodes_159, 0, sizeof(struct list$1sNodeph*));
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&elif_blocks_160, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_161, 0, sizeof(int));
memset(&else_block_162, 0, sizeof(struct sBlock*));
memset(&saved_p_163, 0, sizeof(char*));
memset(&saved_sline_164, 0, sizeof(int));
right_value160 = (void*)0;
memset(&buf_165, 0, sizeof(char*));
right_value161 = (void*)0;
memset(&expression_node_166, 0, sizeof(struct sNode*));
right_value162 = (void*)0;
memset(&elif_block_167, 0, sizeof(struct sBlock*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value173 = (void*)0;
memset(&result_169, 0, sizeof(struct sNode*));
right_value174 = (void*)0;
    if(_if_conditional178=charp_operator_equals(buf,"if"),    _if_conditional178) {
        sname_155=(char*)come_increment_ref_count(((char*)(right_value153=string_clone(info->sname))));
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        sline_156=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_157=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=expression_v13(info))));
        if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_158=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value155=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        elif_expression_nodes_159=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value157=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value156=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 493, "list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodephp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        elif_blocks_160=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value159=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value158=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 495, "list$1sBlockph"))))))));
        come_call_finalizer2(list$1sBlockphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sBlockphp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        elif_num_161=0;
        else_block_162=((void*)0);
        while(_while_condtional20=1,        _while_condtional20) {
            saved_p_163=info->p;
            saved_sline_164=info->sline;
            parse_sharp_v5(info);
            if(_if_conditional179=!xisalpha(*info->p),            _if_conditional179) {
                break;
            }
            parse_sharp_v5(info);
            buf_165=(char*)come_increment_ref_count(((char*)(right_value160=parse_word(info))));
            right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(_if_conditional180=string_operator_equals(buf_165,"else"),            _if_conditional180) {
                if(_if_conditional181=parsecmp("if",info),                _if_conditional181) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_166=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value161=expression_v13(info))));
                    if(right_value161) { right_value161 = come_decrement_ref_count2(right_value161, ((struct sNode*)right_value161)->finalize, ((struct sNode*)right_value161)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    list$1sNodeph_push_back(elif_expression_nodes_159,(struct sNode*)come_increment_ref_count(expression_node_166));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_167=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value162=parse_block(info,(_Bool)0))));
                    come_call_finalizer2(sBlock_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    list$1sBlockph_push_back(elif_blocks_160,(struct sBlock*)come_increment_ref_count(elif_block_167));
                    elif_num_161++;
                    if(expression_node_166) { expression_node_166 = come_decrement_ref_count2(expression_node_166, ((struct sNode*)expression_node_166)->finalize, ((struct sNode*)expression_node_166)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sBlock_finalize,elif_block_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    __dec_obj56=else_block_162;
                    else_block_162=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value163=parse_block(info,(_Bool)0))));
                    come_call_finalizer2(sBlock_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sBlock_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    buf_165 = come_decrement_ref_count2(buf_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                info->p=saved_p_163;
                info->sline=saved_sline_164;
                buf_165 = come_decrement_ref_count2(buf_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            buf_165 = come_decrement_ref_count2(buf_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 550, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sIfNode*)(right_value165=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value164=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 550, "sIfNode")))),(struct sNode*)come_increment_ref_count(expression_node_157),if_block_158,elif_expression_nodes_159,elif_blocks_160,elif_num_161,else_block_162,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sIfNode_finalize;
        _inf_value3->clone=(void*)sIfNode_clone;
        _inf_value3->compile=(void*)sIfNode_compile;
        _inf_value3->sline=(void*)sIfNode_sline;
        _inf_value3->sname=(void*)sIfNode_sname;
        _inf_value3->terminated=(void*)sIfNode_terminated;
        _inf_value3->kind=(void*)sIfNode_kind;
        result_169=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value173=_inf_value3)));
        come_call_finalizer2(sIfNode_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sIfNode_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result112__ = __result_obj__ = result_169;
        sname_155 = come_decrement_ref_count2(sname_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_157) { expression_node_157 = come_decrement_ref_count2(expression_node_157, ((struct sNode*)expression_node_157)->finalize, ((struct sNode*)expression_node_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sBlock_finalize,if_block_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,else_block_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(result_169) { result_169 = come_decrement_ref_count2(result_169, ((struct sNode*)result_169)->finalize, ((struct sNode*)result_169)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result112__;
        sname_155 = come_decrement_ref_count2(sname_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_157) { expression_node_157 = come_decrement_ref_count2(expression_node_157, ((struct sNode*)expression_node_157)->finalize, ((struct sNode*)expression_node_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sBlock_finalize,if_block_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,else_block_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(result_169) { result_169 = come_decrement_ref_count2(result_169, ((struct sNode*)result_169)->finalize, ((struct sNode*)result_169)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result113__ = __result_obj__ = ((struct sNode*)(right_value174=string_node_v7(buf,head,head_sline,info)));
    if(right_value174) { right_value174 = come_decrement_ref_count2(right_value174, ((struct sNode*)right_value174)->finalize, ((struct sNode*)right_value174)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result113__;
}

static void sIfNode_finalize(struct sIfNode* self){
void* __result_obj__;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional182=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional182) {
                if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional183=self!=((void*)0)&&self->mIfBlock!=((void*)0),            _if_conditional183) {
                come_call_finalizer2(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional184=self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0),            _if_conditional184) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mElifExpressionNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional185=self!=((void*)0)&&self->mElifBlocks!=((void*)0),            _if_conditional185) {
                come_call_finalizer2(list$1sBlockphp_finalize,self->mElifBlocks, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional186=self!=((void*)0)&&self->mElseBlock!=((void*)0),            _if_conditional186) {
                come_call_finalizer2(sBlock_finalize,self->mElseBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional187=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional187) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
void* __result_obj__;
_Bool _if_conditional188;
struct sIfNode* __result110__;
void* right_value166;
struct sIfNode* result_168;
_Bool _if_conditional189;
void* right_value167;
struct sNode* __dec_obj57;
_Bool _if_conditional190;
void* right_value168;
struct sBlock* __dec_obj58;
_Bool _if_conditional191;
void* right_value169;
struct list$1sNodeph* __dec_obj59;
_Bool _if_conditional192;
void* right_value170;
struct list$1sBlockph* __dec_obj60;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value171;
struct sBlock* __dec_obj61;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value172;
char* __dec_obj62;
struct sIfNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
memset(&result_168, 0, sizeof(struct sIfNode*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
            if(_if_conditional188=self==(void*)0,            _if_conditional188) {
                __result110__ = __result_obj__ = (void*)0;
                return __result110__;
            }
            result_168=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value166=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "sIfNode"))));
            come_call_finalizer2(sIfNode_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional189=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional189) {
                __dec_obj57=result_168->mExpressionNode;
                result_168->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=sNode_clone(self->mExpressionNode))));
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional190=self!=((void*)0)&&self->mIfBlock!=((void*)0),            _if_conditional190) {
                __dec_obj58=result_168->mIfBlock;
                result_168->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value168=sBlock_clone(self->mIfBlock))));
                come_call_finalizer2(sBlock_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional191=self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0),            _if_conditional191) {
                __dec_obj59=result_168->mElifExpressionNodes;
                result_168->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value169=list$1sNodephp_clone(self->mElifExpressionNodes))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional192=self!=((void*)0)&&self->mElifBlocks!=((void*)0),            _if_conditional192) {
                __dec_obj60=result_168->mElifBlocks;
                result_168->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value170=list$1sBlockphp_clone(self->mElifBlocks))));
                come_call_finalizer2(list$1sBlockph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sBlockphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional193=self!=((void*)0),            _if_conditional193) {
                result_168->mElifNum=self->mElifNum;
            }
            if(_if_conditional194=self!=((void*)0)&&self->mElseBlock!=((void*)0),            _if_conditional194) {
                __dec_obj61=result_168->mElseBlock;
                result_168->mElseBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value171=sBlock_clone(self->mElseBlock))));
                come_call_finalizer2(sBlock_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional195=self!=((void*)0),            _if_conditional195) {
                result_168->sline=self->sline;
            }
            if(_if_conditional196=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional196) {
                __dec_obj62=result_168->sname;
                result_168->sname=(char*)come_increment_ref_count(((char*)(right_value172=string_clone(self->sname))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result111__ = __result_obj__ = result_168;
            come_call_finalizer2(sIfNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result111__;
            come_call_finalizer2(sIfNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
void* right_value175;
char* sname_170;
int sline_171;
void* right_value176;
struct sBlock* if_block_172;
void* right_value177;
void* right_value178;
struct sNode* _inf_value4;
struct sOrStatmentNode* _inf_obj_value4;
void* right_value183;
struct sNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
memset(&sname_170, 0, sizeof(char*));
memset(&sline_171, 0, sizeof(int));
right_value176 = (void*)0;
memset(&if_block_172, 0, sizeof(struct sBlock*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value183 = (void*)0;
    sname_170=(char*)come_increment_ref_count(((char*)(right_value175=string_clone(info->sname))));
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_171=info->sline;
    parse_sharp_v5(info);
    if_block_172=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value176=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 567, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sOrStatmentNode*)(right_value178=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(right_value177=(struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 567, "sOrStatmentNode")))),(struct sNode*)come_increment_ref_count(expression_node),if_block_172,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value4->clone=(void*)sOrStatmentNode_clone;
    _inf_value4->compile=(void*)sOrStatmentNode_compile;
    _inf_value4->sline=(void*)sOrStatmentNode_sline;
    _inf_value4->sname=(void*)sOrStatmentNode_sname;
    _inf_value4->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value4->kind=(void*)sOrStatmentNode_kind;
    __result116__ = __result_obj__ = ((struct sNode*)(right_value183=_inf_value4));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_170 = come_decrement_ref_count2(sname_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,if_block_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sOrStatmentNode_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sOrStatmentNode_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value183) { right_value183 = come_decrement_ref_count2(right_value183, ((struct sNode*)right_value183)->finalize, ((struct sNode*)right_value183)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result116__;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_170 = come_decrement_ref_count2(sname_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,if_block_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
void* __result_obj__;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional197=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional197) {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional198=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional198) {
            come_call_finalizer2(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional199=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional199) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
void* __result_obj__;
_Bool _if_conditional200;
struct sOrStatmentNode* __result114__;
void* right_value179;
struct sOrStatmentNode* result_173;
_Bool _if_conditional201;
void* right_value180;
struct sNode* __dec_obj63;
_Bool _if_conditional202;
void* right_value181;
struct sBlock* __dec_obj64;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value182;
char* __dec_obj65;
struct sOrStatmentNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
memset(&result_173, 0, sizeof(struct sOrStatmentNode*));
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
        if(_if_conditional200=self==(void*)0,        _if_conditional200) {
            __result114__ = __result_obj__ = (void*)0;
            return __result114__;
        }
        result_173=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(right_value179=(struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "sOrStatmentNode"))));
        come_call_finalizer2(sOrStatmentNode_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional201=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional201) {
            __dec_obj63=result_173->mExpressionNode;
            result_173->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value180=sNode_clone(self->mExpressionNode))));
            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value180) { right_value180 = come_decrement_ref_count2(right_value180, ((struct sNode*)right_value180)->finalize, ((struct sNode*)right_value180)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional202=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional202) {
            __dec_obj64=result_173->mIfBlock;
            result_173->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value181=sBlock_clone(self->mIfBlock))));
            come_call_finalizer2(sBlock_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sBlock_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional203=self!=((void*)0),        _if_conditional203) {
            result_173->sline=self->sline;
        }
        if(_if_conditional204=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional204) {
            __dec_obj65=result_173->sname;
            result_173->sname=(char*)come_increment_ref_count(((char*)(right_value182=string_clone(self->sname))));
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result115__ = __result_obj__ = result_173;
        come_call_finalizer2(sOrStatmentNode_finalize,result_173, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result115__;
        come_call_finalizer2(sOrStatmentNode_finalize,result_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
void* right_value184;
char* sname_174;
int sline_175;
void* right_value185;
struct sBlock* if_block_176;
void* right_value186;
void* right_value187;
struct sNode* _inf_value5;
struct sAndStatmentNode* _inf_obj_value5;
void* right_value192;
struct sNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
memset(&sname_174, 0, sizeof(char*));
memset(&sline_175, 0, sizeof(int));
right_value185 = (void*)0;
memset(&if_block_176, 0, sizeof(struct sBlock*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value192 = (void*)0;
    sname_174=(char*)come_increment_ref_count(((char*)(right_value184=string_clone(info->sname))));
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_175=info->sline;
    parse_sharp_v5(info);
    if_block_176=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value185=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 579, "struct sNode");
    _inf_obj_value5=come_increment_ref_count(((struct sAndStatmentNode*)(right_value187=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(right_value186=(struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 579, "sAndStatmentNode")))),(struct sNode*)come_increment_ref_count(expression_node),if_block_176,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value5->clone=(void*)sAndStatmentNode_clone;
    _inf_value5->compile=(void*)sAndStatmentNode_compile;
    _inf_value5->sline=(void*)sAndStatmentNode_sline;
    _inf_value5->sname=(void*)sAndStatmentNode_sname;
    _inf_value5->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value5->kind=(void*)sAndStatmentNode_kind;
    __result119__ = __result_obj__ = ((struct sNode*)(right_value192=_inf_value5));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_174 = come_decrement_ref_count2(sname_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,if_block_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sAndStatmentNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sAndStatmentNode_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result119__;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_174 = come_decrement_ref_count2(sname_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,if_block_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
void* __result_obj__;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional205=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional205) {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional206=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional206) {
            come_call_finalizer2(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional207=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional207) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
void* __result_obj__;
_Bool _if_conditional208;
struct sAndStatmentNode* __result117__;
void* right_value188;
struct sAndStatmentNode* result_177;
_Bool _if_conditional209;
void* right_value189;
struct sNode* __dec_obj66;
_Bool _if_conditional210;
void* right_value190;
struct sBlock* __dec_obj67;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value191;
char* __dec_obj68;
struct sAndStatmentNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
memset(&result_177, 0, sizeof(struct sAndStatmentNode*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
        if(_if_conditional208=self==(void*)0,        _if_conditional208) {
            __result117__ = __result_obj__ = (void*)0;
            return __result117__;
        }
        result_177=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(right_value188=(struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "sAndStatmentNode"))));
        come_call_finalizer2(sAndStatmentNode_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional209=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional209) {
            __dec_obj66=result_177->mExpressionNode;
            result_177->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value189=sNode_clone(self->mExpressionNode))));
            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value189) { right_value189 = come_decrement_ref_count2(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional210=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional210) {
            __dec_obj67=result_177->mIfBlock;
            result_177->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value190=sBlock_clone(self->mIfBlock))));
            come_call_finalizer2(sBlock_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sBlock_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional211=self!=((void*)0),        _if_conditional211) {
            result_177->sline=self->sline;
        }
        if(_if_conditional212=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional212) {
            __dec_obj68=result_177->sname;
            result_177->sname=(char*)come_increment_ref_count(((char*)(right_value191=string_clone(self->sname))));
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result118__ = __result_obj__ = result_177;
        come_call_finalizer2(sAndStatmentNode_finalize,result_177, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result118__;
        come_call_finalizer2(sAndStatmentNode_finalize,result_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

