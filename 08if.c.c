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
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
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
static struct sVar* sVar_clone(struct sVar* self);
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
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
    if(right_value0) { come_call_finalizer2(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value1) { come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    if(result_0) { come_call_finalizer2(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result2__;
    if(result_0) { come_call_finalizer2(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
    if(right_value2) { come_call_finalizer2(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value3) { come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    if(result_1) { come_call_finalizer2(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result3__;
    if(result_1) { come_call_finalizer2(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
    if(right_value4) { come_call_finalizer2(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value5) { come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    if(result_2) { come_call_finalizer2(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result4__;
    if(result_2) { come_call_finalizer2(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
    if(right_value6) { come_call_finalizer2(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value7) { come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    if(result_3) { come_call_finalizer2(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result5__;
    if(result_3) { come_call_finalizer2(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
    if(right_value8) { come_call_finalizer2(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value9) { come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    if(result_4) { come_call_finalizer2(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result6__;
    if(result_4) { come_call_finalizer2(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

// body function


static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            if(self->memory) { come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            if(self->memory) { come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            if(self->memory) { come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            if(self->memory) { come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        }
}

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, struct sInfo* info){
void* __result_obj__;
void* right_value10;
char* __dec_obj6;
void* right_value12;
struct sNode* __dec_obj7;
void* right_value80;
struct sBlock* __dec_obj40;
void* right_value81;
struct list$1sNodeph* __dec_obj41;
void* right_value88;
struct list$1sBlockph* __dec_obj45;
_Bool _if_conditional177;
void* right_value89;
struct sBlock* __dec_obj46;
struct sBlock* __dec_obj47;
struct sIfNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value12 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value10) { right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj7=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value12=sNode_clone(expression_node))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count2(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value12) { right_value12 = come_decrement_ref_count2(right_value12, ((struct sNode*)right_value12)->finalize, ((struct sNode*)right_value12)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj40=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value80=sBlock_clone(if_block))));
    if(__dec_obj40) { come_call_finalizer2(sBlock_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value80) { come_call_finalizer2(sBlock_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj41=self->mElifExpressionNodes;
    self->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value81=list$1sNodephp_clone(elif_expression_nodes))));
    if(__dec_obj41) { come_call_finalizer2(list$1sNodeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value81) { come_call_finalizer2(list$1sNodephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj45=self->mElifBlocks;
    self->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value88=list$1sBlockphp_clone(elif_blocks))));
    if(__dec_obj45) { come_call_finalizer2(list$1sBlockph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value88) { come_call_finalizer2(list$1sBlockphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    self->mElifNum=elif_num;
    if(_if_conditional177=else_block,    _if_conditional177) {
        __dec_obj46=self->mElseBlock;
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value89=sBlock_clone(else_block))));
        if(__dec_obj46) { come_call_finalizer2(sBlock_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        if(right_value89) { come_call_finalizer2(sBlock_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    }
    else {
        __dec_obj47=self->mElseBlock;
        self->mElseBlock=((void*)0);
        if(__dec_obj47) { come_call_finalizer2(sBlock_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    }
    __result69__ = __result_obj__ = self;
    if(self) { come_call_finalizer2(sIfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result69__;
    if(self) { come_call_finalizer2(sIfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional5;
struct sNode* __result7__;
void* right_value11;
struct sNode* result_5;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
struct sNode* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct sNode*));
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
        if(right_value11) { right_value11 = come_decrement_ref_count2(right_value11, ((struct sNode*)right_value11)->finalize, ((struct sNode*)right_value11)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional6=self!=((void*)0)&&self->clone!=((void*)0),        _if_conditional6) {
            result_5->_protocol_obj=self->clone(self->_protocol_obj);
        }
        if(_if_conditional7=self!=((void*)0),        _if_conditional7) {
            result_5->finalize=self->finalize;
        }
        if(_if_conditional8=self!=((void*)0),        _if_conditional8) {
            result_5->clone=self->clone;
        }
        if(_if_conditional9=self!=((void*)0),        _if_conditional9) {
            result_5->compile=self->compile;
        }
        if(_if_conditional10=self!=((void*)0),        _if_conditional10) {
            result_5->sline=self->sline;
        }
        if(_if_conditional11=self!=((void*)0),        _if_conditional11) {
            result_5->sname=self->sname;
        }
        if(_if_conditional12=self!=((void*)0),        _if_conditional12) {
            result_5->terminated=self->terminated;
        }
        if(_if_conditional13=self!=((void*)0),        _if_conditional13) {
            result_5->kind=self->kind;
        }
        __result8__ = __result_obj__ = result_5;
        if(result_5) { result_5 = come_decrement_ref_count2(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result8__;
        if(result_5) { result_5 = come_decrement_ref_count2(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional14;
struct sBlock* __result9__;
void* right_value13;
struct sBlock* result_6;
_Bool _if_conditional18;
void* right_value20;
struct list$1sNodeph* __dec_obj11;
_Bool _if_conditional22;
void* right_value79;
struct sVarTable* __dec_obj39;
struct sBlock* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
memset(&result_6, 0, sizeof(struct sBlock*));
right_value20 = (void*)0;
right_value79 = (void*)0;
        if(_if_conditional14=self==(void*)0,        _if_conditional14) {
            __result9__ = __result_obj__ = (void*)0;
            return __result9__;
        }
        result_6=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value13=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock"))));
        if(right_value13) { come_call_finalizer2(sBlock_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        if(_if_conditional18=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional18) {
            __dec_obj11=result_6->mNodes;
            result_6->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(self->mNodes))));
            if(__dec_obj11) { come_call_finalizer2(list$1sNodeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            if(right_value20) { come_call_finalizer2(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        }
        if(_if_conditional22=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional22) {
            __dec_obj39=result_6->mVarTable;
            result_6->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value79=sVarTable_clone(self->mVarTable))));
            if(__dec_obj39) { come_call_finalizer2(sVarTable_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            if(right_value79) { come_call_finalizer2(sVarTable_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        }
        __result64__ = __result_obj__ = result_6;
        if(result_6) { come_call_finalizer2(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
        return __result64__;
        if(result_6) { come_call_finalizer2(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional15;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional15=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional15) {
                if(self->mNodes) { come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional17=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional17) {
                if(self->mVarTable) { come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_7;
_Bool _while_condtional1;
struct list_item$1sNodeph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_7, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1sNodeph*));
                    it_7=self->head;
                    while(_while_condtional1=it_7!=((void*)0),                    _while_condtional1) {
                        prev_it_8=it_7;
                        it_7=it_7->next;
                        if(prev_it_8) { come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional19;
struct list$1sNodeph* __result10__;
void* right_value14;
void* right_value15;
struct list$1sNodeph* result_9;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
void* right_value19;
struct list$1sNodeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
right_value15 = (void*)0;
memset(&result_9, 0, sizeof(struct list$1sNodeph*));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
right_value19 = (void*)0;
                if(_if_conditional19=self==((void*)0),                _if_conditional19) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_9=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value14=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                if(right_value14) { come_call_finalizer2(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                if(right_value15) { come_call_finalizer2(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                it_10=self->head;
                while(_while_condtional2=it_10!=((void*)0),                _while_condtional2) {
                    list$1sNodeph_add(result_9,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(it_10->item)))));
                    if(right_value19) { right_value19 = come_decrement_ref_count2(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_10=it_10->next;
                }
                __result13__ = __result_obj__ = result_9;
                if(result_9) { come_call_finalizer2(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                return __result13__;
                if(result_9) { come_call_finalizer2(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    if(self) { come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                    return __result11__;
                    if(self) { come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional20;
void* right_value16;
struct list_item$1sNodeph* litem_11;
struct sNode* __dec_obj8;
_Bool _if_conditional21;
void* right_value17;
struct list_item$1sNodeph* litem_12;
struct sNode* __dec_obj9;
void* right_value18;
struct list_item$1sNodeph* litem_13;
struct sNode* __dec_obj10;
struct list$1sNodeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&litem_11, 0, sizeof(struct list_item$1sNodeph*));
right_value17 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1sNodeph*));
right_value18 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional20=self->len==0,                        _if_conditional20) {
                            litem_11=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                            if(right_value16) { come_call_finalizer2(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                            litem_11->prev=((void*)0);
                            litem_11->next=((void*)0);
                            __dec_obj8=litem_11->item;
                            litem_11->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count2(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_11;
                            self->head=litem_11;
                        }
                        else {
                            if(_if_conditional21=self->len==1,                            _if_conditional21) {
                                litem_12=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                if(right_value17) { come_call_finalizer2(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                litem_12->prev=self->head;
                                litem_12->next=((void*)0);
                                __dec_obj9=litem_12->item;
                                litem_12->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count2(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_12;
                                self->head->next=litem_12;
                            }
                            else {
                                litem_13=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                if(right_value18) { come_call_finalizer2(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                litem_13->prev=self->tail;
                                litem_13->next=((void*)0);
                                __dec_obj10=litem_13->item;
                                litem_13->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count2(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_13;
                                self->tail=litem_13;
                            }
                        }
                        self->len++;
                        __result12__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result12__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional23;
struct sVarTable* __result14__;
void* right_value21;
struct sVarTable* result_14;
_Bool _if_conditional24;
void* right_value78;
struct map$2charphsVarph* __dec_obj38;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct sVarTable* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
memset(&result_14, 0, sizeof(struct sVarTable*));
right_value78 = (void*)0;
                if(_if_conditional23=self==(void*)0,                _if_conditional23) {
                    __result14__ = __result_obj__ = (void*)0;
                    return __result14__;
                }
                result_14=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value21=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable"))));
                if(right_value21) { come_call_finalizer2(sVarTable_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                if(_if_conditional24=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional24) {
                    __dec_obj38=result_14->mVars;
                    result_14->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value78=map$2charphsVarphp_clone(self->mVars))));
                    if(__dec_obj38) { come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(right_value78) { come_call_finalizer2(map$2charphsVarphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                }
                if(_if_conditional170=self!=((void*)0),                _if_conditional170) {
                    result_14->mGlobal=self->mGlobal;
                }
                if(_if_conditional171=self!=((void*)0),                _if_conditional171) {
                    result_14->mParent=self->mParent;
                }
                if(_if_conditional172=self!=((void*)0),                _if_conditional172) {
                    result_14->mID=self->mID;
                }
                __result63__ = __result_obj__ = result_14;
                if(result_14) { come_call_finalizer2(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                return __result63__;
                if(result_14) { come_call_finalizer2(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional25;
struct map$2charphsVarph* __result15__;
void* right_value22;
void* right_value28;
struct map$2charphsVarph* result_24;
char* it_27;
_Bool _for_condtionalA4;
struct sVar* default_value_30;
void* right_value29;
struct sVar* it2_33;
void* right_value77;
struct map$2charphsVarph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value28 = (void*)0;
memset(&result_24, 0, sizeof(struct map$2charphsVarph*));
memset(&it_27, 0, sizeof(char*));
memset(&default_value_30, 0, sizeof(struct sVar*));
right_value29 = (void*)0;
memset(&it2_33, 0, sizeof(struct sVar*));
right_value77 = (void*)0;
                        if(_if_conditional25=self==((void*)0),                        _if_conditional25) {
                            __result15__ = __result_obj__ = ((void*)0);
                            return __result15__;
                        }
                        result_24=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value28=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value22=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1176, "struct map$2charphsVarph"))))))));
                        if(right_value22) { come_call_finalizer2(map$2charphsVarphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                        if(right_value28) { come_call_finalizer2(map$2charphsVarphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                        for(
                        it_27=map$2charphsVarph_begin(self) ,                        0;                        _for_condtionalA4=                        !map$2charphsVarph_end(self) ,                        _for_condtionalA4;                        it_27=map$2charphsVarph_next(self) ,                        0                        ){
                            memset(&default_value_30,0,sizeof(struct sVar*));
                            it2_33=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value29=map$2charphsVarph_at(self,it_27,default_value_30))));
                            if(right_value29) { come_call_finalizer2(sVar_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                            map$2charphsVarph_insert2(result_24,it_27,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value77=sVar_clone(it2_33)))));
                            if(right_value77) { come_call_finalizer2(sVar_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                            if(it2_33) { come_call_finalizer2(sVar_finalize,it2_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                        }
                        __result62__ = __result_obj__ = result_24;
                        if(result_24) { come_call_finalizer2(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                        return __result62__;
                        if(result_24) { come_call_finalizer2(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value23;
void* right_value24;
void* right_value25;
int i_19;
_Bool _for_condtionalA1;
void* right_value26;
void* right_value27;
struct list$1charp* __dec_obj12;
struct map$2charphsVarph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
right_value25 = (void*)0;
memset(&i_19, 0, sizeof(int));
right_value26 = (void*)0;
right_value27 = (void*)0;
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value23=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1083, "char*"))));
                            if(right_value23) { right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value24=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1084, "struct sVar*"))));
                            if(right_value24) { come_call_finalizer2(sVar_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value25=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1085, "_Bool"))));
                            if(right_value25) { right_value25 = come_decrement_ref_count2(right_value25, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                            for(
                            i_19=0 ,                            0;                            _for_condtionalA1=                            i_19<1024 ,                            _for_condtionalA1;                            i_19++ ,                            0                            ){
                                self->item_existance[i_19]=(_Bool)0;
                            }
                            self->size=1024;
                            self->len=0;
                            __dec_obj12=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value27=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value26=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1095, "struct list$1charp"))))))));
                            if(__dec_obj12) { come_call_finalizer2(list$1charp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                            if(right_value26) { come_call_finalizer2(list$1charpp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                            if(right_value27) { come_call_finalizer2(list$1charpp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                            self->it=0;
                            __result17__ = __result_obj__ = self;
                            if(self) { come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                            return __result17__;
                            if(self) { come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional26=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional26) {
                                    if(self->mName) { self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                }
                                if(_if_conditional27=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional27) {
                                    if(self->mCValueName) { self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                }
                                if(_if_conditional28=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional28) {
                                    if(self->mType) { come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                }
                                if(_if_conditional44=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional44) {
                                    if(self->mFunName) { self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional29;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional29=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional29) {
                                            if(self->mNoSolvedGenericsType) { come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                        }
                                        if(_if_conditional31=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional31) {
                                            if(self->mOriginalLoadVarType) { come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                        }
                                        if(_if_conditional32=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional32) {
                                            if(self->mGenericsName) { self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                        }
                                        if(_if_conditional33=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional33) {
                                            if(self->mGenericsTypes) { come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                        }
                                        if(_if_conditional35=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional35) {
                                            if(self->mArrayNum) { come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                        }
                                        if(_if_conditional36=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional36) {
                                            if(self->mParamTypes) { come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                        }
                                        if(_if_conditional37=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional37) {
                                            if(self->mParamNames) { come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                        }
                                        if(_if_conditional39=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional39) {
                                            if(self->mResultType) { come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                        }
                                        if(_if_conditional40=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional40) {
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional41=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional41) {
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional42=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional42) {
                                            if(self->mOriginalTypeName) { self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                        }
                                        if(_if_conditional43=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional43) {
                                            if(self->mAsmName) { self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional30=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional30) {
                                                    if(self->v1) { come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_15;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sTypeph*));
                                                it_15=self->head;
                                                while(_while_condtional3=it_15!=((void*)0),                                                _while_condtional3) {
                                                    prev_it_16=it_15;
                                                    it_15=it_15->next;
                                                    if(prev_it_16) { come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional34) {
                                                            if(self->item) { come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_17;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                                                it_17=self->head;
                                                while(_while_condtional4=it_17!=((void*)0),                                                _while_condtional4) {
                                                    prev_it_18=it_17;
                                                    it_17=it_17->next;
                                                    if(prev_it_18) { come_call_finalizer2(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional38=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional38) {
                                                            if(self->item) { self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
                                self->head=((void*)0);
                                self->tail=((void*)0);
                                self->len=0;
                                __result16__ = __result_obj__ = self;
                                if(self) { come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                return __result16__;
                                if(self) { come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_20;
_Bool _while_condtional5;
struct list_item$1charp* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_20, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charp*));
                                    it_20=self->head;
                                    while(_while_condtional5=it_20!=((void*)0),                                    _while_condtional5) {
                                        prev_it_21=it_20;
                                        it_20=it_20->next;
                                        if(prev_it_21) { come_call_finalizer2(list_item$1charpp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
int i_22;
_Bool _for_condtionalA2;
_Bool _if_conditional45;
_Bool _if_conditional46;
int i_23;
_Bool _for_condtionalA3;
_Bool _if_conditional47;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_22, 0, sizeof(int));
memset(&i_23, 0, sizeof(int));
                                for(
                                i_22=0 ,                                0;                                _for_condtionalA2=                                i_22<self->size ,                                _for_condtionalA2;                                i_22++ ,                                0                                ){
                                    if(_if_conditional45=self->item_existance[i_22],                                    _if_conditional45) {
                                        if(_if_conditional46=1,                                        _if_conditional46) {
                                            if(self->items[i_22]) { come_call_finalizer2(sVar_finalize,self->items[i_22], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                for(
                                i_23=0 ,                                0;                                _for_condtionalA3=                                i_23<self->size ,                                _for_condtionalA3;                                i_23++ ,                                0                                ){
                                    if(_if_conditional47=self->item_existance[i_23],                                    _if_conditional47) {
                                        if(_if_conditional48=1,                                        _if_conditional48) {
                                            if(self->keys[i_23]) { self->keys[i_23] = come_decrement_ref_count2(self->keys[i_23], (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                        }
                                    }
                                }
                                come_free((char*)self->keys);
                                if(self->key_list) { come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                if(self->item_existance) { self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional49;
char* result_25;
char* __result18__;
_Bool _if_conditional50;
char* __result19__;
char* result_26;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_25, 0, sizeof(char*));
memset(&result_26, 0, sizeof(char*));
                            if(_if_conditional49=self==((void*)0),                            _if_conditional49) {
                                memset(&result_25,0,sizeof(char*));
                                __result18__ = __result_obj__ = result_25;
                                return __result18__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(_if_conditional50=self->key_list->it,                            _if_conditional50) {
                                __result19__ = __result_obj__ = self->key_list->it->item;
                                return __result19__;
                            }
                            memset(&result_26,0,sizeof(char*));
                            __result20__ = __result_obj__ = result_26;
                            return __result20__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result21__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result21__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional51;
char* result_28;
char* __result22__;
_Bool _if_conditional52;
char* __result23__;
char* result_29;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_28, 0, sizeof(char*));
memset(&result_29, 0, sizeof(char*));
                            if(_if_conditional51=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional51) {
                                memset(&result_28,0,sizeof(char*));
                                __result22__ = __result_obj__ = result_28;
                                return __result22__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(_if_conditional52=self->key_list->it,                            _if_conditional52) {
                                __result23__ = __result_obj__ = self->key_list->it->item;
                                return __result23__;
                            }
                            memset(&result_29,0,sizeof(char*));
                            __result24__ = __result_obj__ = result_29;
                            return __result24__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_31;
unsigned int it_32;
_Bool _while_condtional6;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sVar* __result25__;
_Bool _if_conditional55;
_Bool _if_conditional56;
struct sVar* __result26__;
struct sVar* __result27__;
struct sVar* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_31, 0, sizeof(unsigned int));
memset(&it_32, 0, sizeof(unsigned int));
                                hash_31=string_get_hash_key(((char*)key))%self->size;
                                it_32=hash_31;
                                while(_while_condtional6=(_Bool)1,                                _while_condtional6) {
                                    if(_if_conditional53=self->item_existance[it_32],                                    _if_conditional53) {
                                        if(_if_conditional54=string_equals(self->keys[it_32],key),                                        _if_conditional54) {
                                            __result25__ = __result_obj__ = self->items[it_32];
                                            if(default_value) { come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                            return __result25__;
                                        }
                                        it_32++;
                                        if(_if_conditional55=it_32>=self->size,                                        _if_conditional55) {
                                            it_32=0;
                                        }
                                        else {
                                            if(_if_conditional56=it_32==hash_31,                                            _if_conditional56) {
                                                __result26__ = __result_obj__ = default_value;
                                                if(default_value) { come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                                return __result26__;
                                            }
                                        }
                                    }
                                    else {
                                        __result27__ = __result_obj__ = default_value;
                                        if(default_value) { come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                        return __result27__;
                                    }
                                }
                                __result28__ = __result_obj__ = default_value;
                                if(default_value) { come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                return __result28__;
                                if(default_value) { come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional57;
unsigned int hash_45;
int it_46;
_Bool _while_condtional8;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool same_key_exist_63;
char* it2_66;
_Bool _for_condtionalA6;
_Bool _if_conditional92;
_Bool _if_conditional93;
struct map$2charphsVarph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_45, 0, sizeof(unsigned int));
memset(&it_46, 0, sizeof(int));
memset(&same_key_exist_63, 0, sizeof(_Bool));
memset(&it2_66, 0, sizeof(char*));
                                if(_if_conditional57=self->len*2>=self->size,                                _if_conditional57) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_45=string_get_hash_key(key)%self->size;
                                it_46=hash_45;
                                while(_while_condtional8=(_Bool)1,                                _while_condtional8) {
                                    if(_if_conditional61=self->item_existance[it_46],                                    _if_conditional61) {
                                        if(_if_conditional62=string_equals(self->keys[it_46],key),                                        _if_conditional62) {
                                            if(_if_conditional63=1,                                            _if_conditional63) {
                                                if(self->keys[it_46]) { self->keys[it_46] = come_decrement_ref_count2(self->keys[it_46], (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                                list$1charp_remove(self->key_list,self->keys[it_46]);
                                                self->keys[it_46]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_46]);
                                                self->keys[it_46]=key;
                                            }
                                            if(_if_conditional83=1,                                            _if_conditional83) {
                                                if(self->items[it_46]) { come_call_finalizer2(sVar_finalize,self->items[it_46], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                self->items[it_46]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_46]=item;
                                            }
                                            break;
                                        }
                                        it_46++;
                                        if(_if_conditional84=it_46>=self->size,                                        _if_conditional84) {
                                            it_46=0;
                                        }
                                        else {
                                            if(_if_conditional85=it_46==hash_45,                                            _if_conditional85) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_46]=(_Bool)1;
                                        if(_if_conditional86=1,                                        _if_conditional86) {
                                            self->keys[it_46]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_46]=key;
                                        }
                                        if(_if_conditional87=1,                                        _if_conditional87) {
                                            self->items[it_46]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_46]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_63=(_Bool)0;
                                for(
                                it2_66=list$1charp_begin(self->key_list) ,                                0;                                _for_condtionalA6=                                !list$1charp_end(self->key_list) ,                                _for_condtionalA6;                                it2_66=list$1charp_next(self->key_list) ,                                0                                ){
                                    if(_if_conditional92=string_equals(it2_66,key),                                    _if_conditional92) {
                                        same_key_exist_63=(_Bool)1;
                                    }
                                }
                                if(_if_conditional93=!same_key_exist_63,                                _if_conditional93) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result41__ = __result_obj__ = self;
                                if(key) { key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
                                if(item) { come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                return __result41__;
                                if(key) { key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
                                if(item) { come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_34;
void* right_value30;
char** keys_35;
void* right_value31;
struct sVar** items_36;
void* right_value32;
_Bool* item_existance_37;
int len_38;
char* it_39;
_Bool _for_condtionalA5;
struct sVar* default_value_40;
void* right_value33;
struct sVar* it2_41;
unsigned int hash_42;
int n_43;
_Bool _while_condtional7;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
struct sVar* default_value_44;
void* right_value34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_34, 0, sizeof(int));
right_value30 = (void*)0;
memset(&keys_35, 0, sizeof(char**));
right_value31 = (void*)0;
memset(&items_36, 0, sizeof(struct sVar**));
right_value32 = (void*)0;
memset(&item_existance_37, 0, sizeof(_Bool*));
memset(&len_38, 0, sizeof(int));
memset(&it_39, 0, sizeof(char*));
memset(&default_value_40, 0, sizeof(struct sVar*));
right_value33 = (void*)0;
memset(&it2_41, 0, sizeof(struct sVar*));
memset(&hash_42, 0, sizeof(unsigned int));
memset(&n_43, 0, sizeof(int));
memset(&default_value_44, 0, sizeof(struct sVar*));
right_value34 = (void*)0;
                                        size_34=self->size*10;
                                        keys_35=(char**)come_increment_ref_count(((char**)(right_value30=(char**)come_calloc(1, sizeof(char*)*(1*(size_34)), "./comelang2.h", 1331, "char*"))));
                                        if(right_value30) { right_value30 = come_decrement_ref_count2(right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                        items_36=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value31=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_34)), "./comelang2.h", 1332, "struct sVar*"))));
                                        if(right_value31) { come_call_finalizer2(sVar_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                        item_existance_37=(_Bool*)come_increment_ref_count(((_Bool*)(right_value32=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_34)), "./comelang2.h", 1333, "_Bool"))));
                                        if(right_value32) { right_value32 = come_decrement_ref_count2(right_value32, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                        len_38=0;
                                        for(
                                        it_39=map$2charphsVarph_begin(self) ,                                        0;                                        _for_condtionalA5=                                        !map$2charphsVarph_end(self) ,                                        _for_condtionalA5;                                        it_39=map$2charphsVarph_next(self) ,                                        0                                        ){
                                            memset(&default_value_40,0,sizeof(struct sVar*));
                                            it2_41=((struct sVar*)(right_value33=map$2charphsVarph_at(self,it_39,default_value_40)));
                                            if(right_value33) { come_call_finalizer2(sVar_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                            hash_42=string_get_hash_key(it_39)%size_34;
                                            n_43=hash_42;
                                            while(_while_condtional7=(_Bool)1,                                            _while_condtional7) {
                                                if(_if_conditional58=item_existance_37[n_43],                                                _if_conditional58) {
                                                    n_43++;
                                                    if(_if_conditional59=n_43>=size_34,                                                    _if_conditional59) {
                                                        n_43=0;
                                                    }
                                                    else {
                                                        if(_if_conditional60=n_43==hash_42,                                                        _if_conditional60) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_37[n_43]=(_Bool)1;
                                                    keys_35[n_43]=it_39;
                                                    items_36[n_43]=((struct sVar*)(right_value34=map$2charphsVarph_at(self,it_39,default_value_44)));
                                                    if(right_value34) { come_call_finalizer2(sVar_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                    len_38++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        if(self->item_existance) { self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                        come_free((char*)self->keys);
                                        self->keys=keys_35;
                                        self->items=items_36;
                                        self->item_existance=item_existance_37;
                                        self->size=size_34;
                                        self->len=len_38;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_47;
struct list_item$1charp* it_48;
_Bool _while_condtional9;
_Bool _if_conditional64;
struct list$1charp* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_47, 0, sizeof(int));
memset(&it_48, 0, sizeof(struct list_item$1charp*));
                                                    it2_47=0;
                                                    it_48=self->head;
                                                    while(_while_condtional9=it_48!=((void*)0),                                                    _while_condtional9) {
                                                        if(_if_conditional64=string_equals(it_48->item,item),                                                        _if_conditional64) {
                                                            list$1charp_delete(self,it2_47,it2_47+1);
                                                            break;
                                                        }
                                                        it2_47++;
                                                        it_48=it_48->next;
                                                    }
                                                    __result32__ = __result_obj__ = self;
                                                    return __result32__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
int tmp_49;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
struct list$1charp* __result29__;
_Bool _if_conditional71;
_Bool _if_conditional72;
struct list_item$1charp* it_52;
int i_53;
_Bool _while_condtional11;
_Bool _if_conditional73;
struct list_item$1charp* prev_it_54;
_Bool _if_conditional74;
_Bool _if_conditional75;
struct list_item$1charp* it_55;
int i_56;
_Bool _while_condtional12;
_Bool _if_conditional76;
_Bool _if_conditional77;
struct list_item$1charp* prev_it_57;
struct list_item$1charp* it_58;
struct list_item$1charp* head_prev_it_59;
struct list_item$1charp* tail_it_60;
int i_61;
_Bool _while_condtional13;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
struct list_item$1charp* prev_it_62;
_Bool _if_conditional81;
_Bool _if_conditional82;
struct list$1charp* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_49, 0, sizeof(int));
memset(&it_52, 0, sizeof(struct list_item$1charp*));
memset(&i_53, 0, sizeof(int));
memset(&prev_it_54, 0, sizeof(struct list_item$1charp*));
memset(&it_55, 0, sizeof(struct list_item$1charp*));
memset(&i_56, 0, sizeof(int));
memset(&prev_it_57, 0, sizeof(struct list_item$1charp*));
memset(&it_58, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_59, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_60, 0, sizeof(struct list_item$1charp*));
memset(&i_61, 0, sizeof(int));
memset(&prev_it_62, 0, sizeof(struct list_item$1charp*));
                                                                if(_if_conditional65=head<0,                                                                _if_conditional65) {
                                                                    head+=self->len;
                                                                }
                                                                if(_if_conditional66=tail<0,                                                                _if_conditional66) {
                                                                    tail+=self->len+1;
                                                                }
                                                                if(_if_conditional67=head>tail,                                                                _if_conditional67) {
                                                                    tmp_49=tail;
                                                                    tail=head;
                                                                    head=tmp_49;
                                                                }
                                                                if(_if_conditional68=head<0,                                                                _if_conditional68) {
                                                                    head=0;
                                                                }
                                                                if(_if_conditional69=tail>self->len,                                                                _if_conditional69) {
                                                                    tail=self->len;
                                                                }
                                                                if(_if_conditional70=head==tail,                                                                _if_conditional70) {
                                                                    __result29__ = __result_obj__ = self;
                                                                    return __result29__;
                                                                }
                                                                if(_if_conditional71=head==0&&tail==self->len,                                                                _if_conditional71) {
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    if(_if_conditional72=head==0,                                                                    _if_conditional72) {
                                                                        it_52=self->head;
                                                                        i_53=0;
                                                                        while(_while_condtional11=it_52!=((void*)0),                                                                        _while_condtional11) {
                                                                            if(_if_conditional73=i_53<tail,                                                                            _if_conditional73) {
                                                                                prev_it_54=it_52;
                                                                                it_52=it_52->next;
                                                                                i_53++;
                                                                                if(prev_it_54) { come_call_finalizer2(list_item$1charpp_finalize,prev_it_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional74=i_53==tail,                                                                                _if_conditional74) {
                                                                                    self->head=it_52;
                                                                                    self->head->prev=((void*)0);
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    it_52=it_52->next;
                                                                                    i_53++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional75=tail==self->len,                                                                        _if_conditional75) {
                                                                            it_55=self->head;
                                                                            i_56=0;
                                                                            while(_while_condtional12=it_55!=((void*)0),                                                                            _while_condtional12) {
                                                                                if(_if_conditional76=i_56==head,                                                                                _if_conditional76) {
                                                                                    self->tail=it_55->prev;
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                if(_if_conditional77=i_56>=head,                                                                                _if_conditional77) {
                                                                                    prev_it_57=it_55;
                                                                                    it_55=it_55->next;
                                                                                    i_56++;
                                                                                    if(prev_it_57) { come_call_finalizer2(list_item$1charpp_finalize,prev_it_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    it_55=it_55->next;
                                                                                    i_56++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            it_58=self->head;
                                                                            head_prev_it_59=((void*)0);
                                                                            tail_it_60=((void*)0);
                                                                            i_61=0;
                                                                            while(_while_condtional13=it_58!=((void*)0),                                                                            _while_condtional13) {
                                                                                if(_if_conditional78=i_61==head,                                                                                _if_conditional78) {
                                                                                    head_prev_it_59=it_58->prev;
                                                                                }
                                                                                if(_if_conditional79=i_61==tail,                                                                                _if_conditional79) {
                                                                                    tail_it_60=it_58;
                                                                                }
                                                                                if(_if_conditional80=i_61>=head&&i_61<tail,                                                                                _if_conditional80) {
                                                                                    prev_it_62=it_58;
                                                                                    it_58=it_58->next;
                                                                                    i_61++;
                                                                                    if(prev_it_62) { come_call_finalizer2(list_item$1charpp_finalize,prev_it_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    it_58=it_58->next;
                                                                                    i_61++;
                                                                                }
                                                                            }
                                                                            if(_if_conditional81=head_prev_it_59!=((void*)0),                                                                            _if_conditional81) {
                                                                                head_prev_it_59->next=tail_it_60;
                                                                            }
                                                                            if(_if_conditional82=tail_it_60!=((void*)0),                                                                            _if_conditional82) {
                                                                                tail_it_60->prev=head_prev_it_59;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                __result31__ = __result_obj__ = self;
                                                                return __result31__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_50;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_51;
struct list$1charp* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_51, 0, sizeof(struct list_item$1charp*));
                                                                        it_50=self->head;
                                                                        while(_while_condtional10=it_50!=((void*)0),                                                                        _while_condtional10) {
                                                                            prev_it_51=it_50;
                                                                            it_50=it_50->next;
                                                                            if(prev_it_51) { come_call_finalizer2(list_item$1charpp_finalize,prev_it_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                                        }
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result30__ = __result_obj__ = self;
                                                                        return __result30__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional88;
char* result_64;
char* __result33__;
_Bool _if_conditional89;
char* __result34__;
char* result_65;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_64, 0, sizeof(char*));
memset(&result_65, 0, sizeof(char*));
                                    if(_if_conditional88=self==((void*)0),                                    _if_conditional88) {
                                        memset(&result_64,0,sizeof(char*));
                                        __result33__ = __result_obj__ = result_64;
                                        return __result33__;
                                    }
                                    self->it=self->head;
                                    if(_if_conditional89=self->it,                                    _if_conditional89) {
                                        __result34__ = __result_obj__ = self->it->item;
                                        return __result34__;
                                    }
                                    memset(&result_65,0,sizeof(char*));
                                    __result35__ = __result_obj__ = result_65;
                                    return __result35__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result36__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result36__ = self==((void*)0)||self->it==((void*)0);
                                    return __result36__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional90;
char* result_67;
char* __result37__;
_Bool _if_conditional91;
char* __result38__;
char* result_68;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_67, 0, sizeof(char*));
memset(&result_68, 0, sizeof(char*));
                                    if(_if_conditional90=self==((void*)0)||self->it==((void*)0),                                    _if_conditional90) {
                                        memset(&result_67,0,sizeof(char*));
                                        __result37__ = __result_obj__ = result_67;
                                        return __result37__;
                                    }
                                    self->it=self->it->next;
                                    if(_if_conditional91=self->it,                                    _if_conditional91) {
                                        __result38__ = __result_obj__ = self->it->item;
                                        return __result38__;
                                    }
                                    memset(&result_68,0,sizeof(char*));
                                    __result39__ = __result_obj__ = result_68;
                                    return __result39__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional94;
void* right_value35;
struct list_item$1charp* litem_69;
_Bool _if_conditional95;
void* right_value36;
struct list_item$1charp* litem_70;
void* right_value37;
struct list_item$1charp* litem_71;
struct list$1charp* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1charp*));
right_value36 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1charp*));
right_value37 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional94=self->len==0,                                        _if_conditional94) {
                                            litem_69=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value35=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 225, "struct list_item$1charp"))));
                                            if(right_value35) { come_call_finalizer2(list_item$1charpp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                            litem_69->prev=((void*)0);
                                            litem_69->next=((void*)0);
                                            litem_69->item=item;
                                            self->tail=litem_69;
                                            self->head=litem_69;
                                        }
                                        else {
                                            if(_if_conditional95=self->len==1,                                            _if_conditional95) {
                                                litem_70=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value36=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 235, "struct list_item$1charp"))));
                                                if(right_value36) { come_call_finalizer2(list_item$1charpp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                litem_70->prev=self->head;
                                                litem_70->next=((void*)0);
                                                litem_70->item=item;
                                                self->tail=litem_70;
                                                self->head->next=litem_70;
                                            }
                                            else {
                                                litem_71=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value37=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 245, "struct list_item$1charp"))));
                                                if(right_value37) { come_call_finalizer2(list_item$1charpp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                litem_71->prev=self->tail;
                                                litem_71->next=((void*)0);
                                                litem_71->item=item;
                                                self->tail->next=litem_71;
                                                self->tail=litem_71;
                                            }
                                        }
                                        self->len++;
                                        __result40__ = __result_obj__ = self;
                                        return __result40__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional96;
struct sVar* __result42__;
void* right_value38;
struct sVar* result_72;
_Bool _if_conditional97;
void* right_value39;
char* __dec_obj13;
_Bool _if_conditional98;
void* right_value40;
char* __dec_obj14;
_Bool _if_conditional99;
void* right_value75;
struct sType* __dec_obj36;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
void* right_value76;
char* __dec_obj37;
struct sVar* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
memset(&result_72, 0, sizeof(struct sVar*));
right_value39 = (void*)0;
right_value40 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
                                if(_if_conditional96=self==(void*)0,                                _if_conditional96) {
                                    __result42__ = __result_obj__ = (void*)0;
                                    return __result42__;
                                }
                                result_72=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value38=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar"))));
                                if(right_value38) { come_call_finalizer2(sVar_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                if(_if_conditional97=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional97) {
                                    __dec_obj13=result_72->mName;
                                    result_72->mName=(char*)come_increment_ref_count(((char*)(right_value39=string_clone(self->mName))));
                                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value39) { right_value39 = come_decrement_ref_count2(right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                }
                                if(_if_conditional98=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional98) {
                                    __dec_obj14=result_72->mCValueName;
                                    result_72->mCValueName=(char*)come_increment_ref_count(((char*)(right_value40=string_clone(self->mCValueName))));
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value40) { right_value40 = come_decrement_ref_count2(right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                }
                                if(_if_conditional99=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional99) {
                                    __dec_obj36=result_72->mType;
                                    result_72->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(self->mType))));
                                    if(__dec_obj36) { come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                    if(right_value75) { come_call_finalizer2(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                }
                                if(_if_conditional163=self!=((void*)0),                                _if_conditional163) {
                                    result_72->mBlockLevel=self->mBlockLevel;
                                }
                                if(_if_conditional164=self!=((void*)0),                                _if_conditional164) {
                                    result_72->mGlobal=self->mGlobal;
                                }
                                if(_if_conditional165=self!=((void*)0),                                _if_conditional165) {
                                    result_72->mAllocaValue=self->mAllocaValue;
                                }
                                if(_if_conditional166=self!=((void*)0),                                _if_conditional166) {
                                    result_72->mFunctionParam=self->mFunctionParam;
                                }
                                if(_if_conditional167=self!=((void*)0),                                _if_conditional167) {
                                    result_72->mNoFree=self->mNoFree;
                                }
                                if(_if_conditional168=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional168) {
                                    __dec_obj37=result_72->mFunName;
                                    result_72->mFunName=(char*)come_increment_ref_count(((char*)(right_value76=string_clone(self->mFunName))));
                                    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value76) { right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                }
                                __result61__ = __result_obj__ = result_72;
                                if(result_72) { come_call_finalizer2(sVar_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                return __result61__;
                                if(result_72) { come_call_finalizer2(sVar_finalize,result_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional100;
struct sType* __result43__;
void* right_value41;
struct sType* result_73;
_Bool _if_conditional101;
_Bool _if_conditional102;
void* right_value44;
struct tuple1$1sTypeph* __dec_obj16;
_Bool _if_conditional106;
void* right_value47;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional109;
void* right_value48;
char* __dec_obj19;
_Bool _if_conditional110;
void* right_value55;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional114;
void* right_value59;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional116;
_Bool _if_conditional117;
void* right_value60;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional118;
void* right_value67;
struct list$1charph* __dec_obj29;
_Bool _if_conditional122;
void* right_value70;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value71;
struct sNode* __dec_obj32;
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
void* right_value72;
struct sNode* __dec_obj33;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value73;
char* __dec_obj34;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value74;
char* __dec_obj35;
struct sType* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value41 = (void*)0;
memset(&result_73, 0, sizeof(struct sType*));
right_value44 = (void*)0;
right_value47 = (void*)0;
right_value48 = (void*)0;
right_value55 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
right_value67 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
                                        if(_if_conditional100=self==(void*)0,                                        _if_conditional100) {
                                            __result43__ = __result_obj__ = (void*)0;
                                            return __result43__;
                                        }
                                        result_73=(struct sType*)come_increment_ref_count(((struct sType*)(right_value41=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                                        if(right_value41) { come_call_finalizer2(sType_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                        if(_if_conditional101=self!=((void*)0),                                        _if_conditional101) {
                                            result_73->mClass=self->mClass;
                                        }
                                        if(_if_conditional102=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional102) {
                                            __dec_obj16=result_73->mNoSolvedGenericsType;
                                            result_73->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value44=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                            if(__dec_obj16) { come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                            if(right_value44) { come_call_finalizer2(tuple1$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                        }
                                        if(_if_conditional106=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional106) {
                                            __dec_obj18=result_73->mOriginalLoadVarType;
                                            result_73->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value47=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                            if(__dec_obj18) { come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                            if(right_value47) { come_call_finalizer2(tuple1$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                        }
                                        if(_if_conditional109=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional109) {
                                            __dec_obj19=result_73->mGenericsName;
                                            result_73->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value48=string_clone(self->mGenericsName))));
                                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                            if(right_value48) { right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                        }
                                        if(_if_conditional110=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional110) {
                                            __dec_obj23=result_73->mGenericsTypes;
                                            result_73->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=list$1sTypeph_clone(self->mGenericsTypes))));
                                            if(__dec_obj23) { come_call_finalizer2(list$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                            if(right_value55) { come_call_finalizer2(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                        }
                                        if(_if_conditional114=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional114) {
                                            __dec_obj24=result_73->mArrayNum;
                                            result_73->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value59=list$1sNodeph_clone(self->mArrayNum))));
                                            if(__dec_obj24) { come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                            if(right_value59) { come_call_finalizer2(list$1sNodephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                        }
                                        if(_if_conditional116=self!=((void*)0),                                        _if_conditional116) {
                                            result_73->mOmitArrayNum=self->mOmitArrayNum;
                                        }
                                        if(_if_conditional117=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional117) {
                                            __dec_obj25=result_73->mParamTypes;
                                            result_73->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value60=list$1sTypeph_clone(self->mParamTypes))));
                                            if(__dec_obj25) { come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                            if(right_value60) { come_call_finalizer2(list$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                        }
                                        if(_if_conditional118=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional118) {
                                            __dec_obj29=result_73->mParamNames;
                                            result_73->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value67=list$1charph_clone(self->mParamNames))));
                                            if(__dec_obj29) { come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                            if(right_value67) { come_call_finalizer2(list$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                        }
                                        if(_if_conditional122=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional122) {
                                            __dec_obj31=result_73->mResultType;
                                            result_73->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value70=tuple1$1sTypephp_clone(self->mResultType))));
                                            if(__dec_obj31) { come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                            if(right_value70) { come_call_finalizer2(tuple1$1sTypephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                        }
                                        if(_if_conditional125=self!=((void*)0),                                        _if_conditional125) {
                                            result_73->mVarArgs=self->mVarArgs;
                                        }
                                        if(_if_conditional126=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional126) {
                                            __dec_obj32=result_73->mAlignas;
                                            result_73->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value71=sNode_clone(self->mAlignas))));
                                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value71) { right_value71 = come_decrement_ref_count2(right_value71, ((struct sNode*)right_value71)->finalize, ((struct sNode*)right_value71)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional127=self!=((void*)0),                                        _if_conditional127) {
                                            result_73->mUnsigned=self->mUnsigned;
                                        }
                                        if(_if_conditional128=self!=((void*)0),                                        _if_conditional128) {
                                            result_73->mShort=self->mShort;
                                        }
                                        if(_if_conditional129=self!=((void*)0),                                        _if_conditional129) {
                                            result_73->mLong=self->mLong;
                                        }
                                        if(_if_conditional130=self!=((void*)0),                                        _if_conditional130) {
                                            result_73->mLongLong=self->mLongLong;
                                        }
                                        if(_if_conditional131=self!=((void*)0),                                        _if_conditional131) {
                                            result_73->mConstant=self->mConstant;
                                        }
                                        if(_if_conditional132=self!=((void*)0),                                        _if_conditional132) {
                                            result_73->mRegister=self->mRegister;
                                        }
                                        if(_if_conditional133=self!=((void*)0),                                        _if_conditional133) {
                                            result_73->mVolatile=self->mVolatile;
                                        }
                                        if(_if_conditional134=self!=((void*)0),                                        _if_conditional134) {
                                            result_73->mStatic=self->mStatic;
                                        }
                                        if(_if_conditional135=self!=((void*)0),                                        _if_conditional135) {
                                            result_73->mExtern=self->mExtern;
                                        }
                                        if(_if_conditional136=self!=((void*)0),                                        _if_conditional136) {
                                            result_73->mRestrict=self->mRestrict;
                                        }
                                        if(_if_conditional137=self!=((void*)0),                                        _if_conditional137) {
                                            result_73->mImmutable=self->mImmutable;
                                        }
                                        if(_if_conditional138=self!=((void*)0),                                        _if_conditional138) {
                                            result_73->mHeap=self->mHeap;
                                        }
                                        if(_if_conditional139=self!=((void*)0),                                        _if_conditional139) {
                                            result_73->mDummyHeap=self->mDummyHeap;
                                        }
                                        if(_if_conditional140=self!=((void*)0),                                        _if_conditional140) {
                                            result_73->mDelegate=self->mDelegate;
                                        }
                                        if(_if_conditional141=self!=((void*)0),                                        _if_conditional141) {
                                            result_73->mShare=self->mShare;
                                        }
                                        if(_if_conditional142=self!=((void*)0),                                        _if_conditional142) {
                                            result_73->mClone=self->mClone;
                                        }
                                        if(_if_conditional143=self!=((void*)0),                                        _if_conditional143) {
                                            result_73->mNoHeap=self->mNoHeap;
                                        }
                                        if(_if_conditional144=self!=((void*)0),                                        _if_conditional144) {
                                            result_73->mNoCallingDestructor=self->mNoCallingDestructor;
                                        }
                                        if(_if_conditional145=self!=((void*)0),                                        _if_conditional145) {
                                            result_73->mRefference=self->mRefference;
                                        }
                                        if(_if_conditional146=self!=((void*)0),                                        _if_conditional146) {
                                            result_73->mException=self->mException;
                                        }
                                        if(_if_conditional147=self!=((void*)0),                                        _if_conditional147) {
                                            result_73->mPointerNum=self->mPointerNum;
                                        }
                                        if(_if_conditional148=self!=((void*)0),                                        _if_conditional148) {
                                            result_73->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                        }
                                        if(_if_conditional149=self!=((void*)0),                                        _if_conditional149) {
                                            result_73->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                        }
                                        if(_if_conditional150=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional150) {
                                            __dec_obj33=result_73->mSizeNum;
                                            result_73->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value72=sNode_clone(self->mSizeNum))));
                                            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value72) { right_value72 = come_decrement_ref_count2(right_value72, ((struct sNode*)right_value72)->finalize, ((struct sNode*)right_value72)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional151=self!=((void*)0),                                        _if_conditional151) {
                                            result_73->mDynamicArrayNum=self->mDynamicArrayNum;
                                        }
                                        if(_if_conditional152=self!=((void*)0),                                        _if_conditional152) {
                                            result_73->mTypeOfExpression=self->mTypeOfExpression;
                                        }
                                        if(_if_conditional153=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional153) {
                                            __dec_obj34=result_73->mOriginalTypeName;
                                            result_73->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value73=string_clone(self->mOriginalTypeName))));
                                            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                            if(right_value73) { right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                        }
                                        if(_if_conditional154=self!=((void*)0),                                        _if_conditional154) {
                                            result_73->mOriginalPointerNum=self->mOriginalPointerNum;
                                        }
                                        if(_if_conditional155=self!=((void*)0),                                        _if_conditional155) {
                                            result_73->mFunctionParam=self->mFunctionParam;
                                        }
                                        if(_if_conditional156=self!=((void*)0),                                        _if_conditional156) {
                                            result_73->mAllocaValue=self->mAllocaValue;
                                        }
                                        if(_if_conditional157=self!=((void*)0),                                        _if_conditional157) {
                                            result_73->mGenericsStruct=self->mGenericsStruct;
                                        }
                                        if(_if_conditional158=self!=((void*)0),                                        _if_conditional158) {
                                            result_73->mSolvedGenericsName=self->mSolvedGenericsName;
                                        }
                                        if(_if_conditional159=self!=((void*)0),                                        _if_conditional159) {
                                            result_73->mComeMemCore=self->mComeMemCore;
                                        }
                                        if(_if_conditional160=self!=((void*)0),                                        _if_conditional160) {
                                            result_73->mInline=self->mInline;
                                        }
                                        if(_if_conditional161=self!=((void*)0),                                        _if_conditional161) {
                                            result_73->mNullValue=self->mNullValue;
                                        }
                                        if(_if_conditional162=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional162) {
                                            __dec_obj35=result_73->mAsmName;
                                            result_73->mAsmName=(char*)come_increment_ref_count(((char*)(right_value74=string_clone(self->mAsmName))));
                                            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                            if(right_value74) { right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                        }
                                        __result60__ = __result_obj__ = result_73;
                                        if(result_73) { come_call_finalizer2(sType_finalize,result_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                        return __result60__;
                                        if(result_73) { come_call_finalizer2(sType_finalize,result_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional104=self!=((void*)0)&&self->v1!=((void*)0),                                                    _if_conditional104) {
                                                        if(self->v1) { come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                    }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional111;
struct list$1sTypeph* __result48__;
void* right_value49;
void* right_value50;
struct list$1sTypeph* result_76;
struct list_item$1sTypeph* it_77;
_Bool _while_condtional14;
void* right_value54;
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value50 = (void*)0;
memset(&result_76, 0, sizeof(struct list$1sTypeph*));
memset(&it_77, 0, sizeof(struct list_item$1sTypeph*));
right_value54 = (void*)0;
                                                if(_if_conditional111=self==((void*)0),                                                _if_conditional111) {
                                                    __result48__ = __result_obj__ = ((void*)0);
                                                    return __result48__;
                                                }
                                                result_76=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value50=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value49=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                                                if(right_value49) { come_call_finalizer2(list$1sTypephp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                if(right_value50) { come_call_finalizer2(list$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                it_77=self->head;
                                                while(_while_condtional14=it_77!=((void*)0),                                                _while_condtional14) {
                                                    list$1sTypeph_add(result_76,(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=sType_clone(it_77->item)))));
                                                    if(right_value54) { come_call_finalizer2(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                    it_77=it_77->next;
                                                }
                                                __result51__ = __result_obj__ = result_76;
                                                if(result_76) { come_call_finalizer2(list$1sTypephp_finalize,result_76, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                                return __result51__;
                                                if(result_76) { come_call_finalizer2(list$1sTypephp_finalize,result_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result49__ = __result_obj__ = self;
                                                    if(self) { come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                                    return __result49__;
                                                    if(self) { come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional112;
void* right_value51;
struct list_item$1sTypeph* litem_78;
struct sType* __dec_obj20;
_Bool _if_conditional113;
void* right_value52;
struct list_item$1sTypeph* litem_79;
struct sType* __dec_obj21;
void* right_value53;
struct list_item$1sTypeph* litem_80;
struct sType* __dec_obj22;
struct list$1sTypeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1sTypeph*));
right_value52 = (void*)0;
memset(&litem_79, 0, sizeof(struct list_item$1sTypeph*));
right_value53 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1sTypeph*));
                                                        if(_if_conditional112=self->len==0,                                                        _if_conditional112) {
                                                            litem_78=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value51=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                                                            if(right_value51) { come_call_finalizer2(list_item$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                            litem_78->prev=((void*)0);
                                                            litem_78->next=((void*)0);
                                                            __dec_obj20=litem_78->item;
                                                            litem_78->item=(struct sType*)come_increment_ref_count(item);
                                                            if(__dec_obj20) { come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                            self->tail=litem_78;
                                                            self->head=litem_78;
                                                        }
                                                        else {
                                                            if(_if_conditional113=self->len==1,                                                            _if_conditional113) {
                                                                litem_79=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value52=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                                                if(right_value52) { come_call_finalizer2(list_item$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                                litem_79->prev=self->head;
                                                                litem_79->next=((void*)0);
                                                                __dec_obj21=litem_79->item;
                                                                litem_79->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj21) { come_call_finalizer2(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                                self->tail=litem_79;
                                                                self->head->next=litem_79;
                                                            }
                                                            else {
                                                                litem_80=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                                                if(right_value53) { come_call_finalizer2(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                                litem_80->prev=self->tail;
                                                                litem_80->next=((void*)0);
                                                                __dec_obj22=litem_80->item;
                                                                litem_80->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj22) { come_call_finalizer2(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                                self->tail->next=litem_80;
                                                                self->tail=litem_80;
                                                            }
                                                        }
                                                        self->len++;
                                                        __result50__ = __result_obj__ = self;
                                                        if(item) { come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                                        return __result50__;
                                                        if(item) { come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional115;
struct list$1sNodeph* __result52__;
void* right_value56;
void* right_value57;
struct list$1sNodeph* result_81;
struct list_item$1sNodeph* it_82;
_Bool _while_condtional15;
void* right_value58;
struct list$1sNodeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value57 = (void*)0;
memset(&result_81, 0, sizeof(struct list$1sNodeph*));
memset(&it_82, 0, sizeof(struct list_item$1sNodeph*));
right_value58 = (void*)0;
                                                if(_if_conditional115=self==((void*)0),                                                _if_conditional115) {
                                                    __result52__ = __result_obj__ = ((void*)0);
                                                    return __result52__;
                                                }
                                                result_81=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value57=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value56=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                                                if(right_value56) { come_call_finalizer2(list$1sNodephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                if(right_value57) { come_call_finalizer2(list$1sNodephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                it_82=self->head;
                                                while(_while_condtional15=it_82!=((void*)0),                                                _while_condtional15) {
                                                    list$1sNodeph_add(result_81,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value58=sNode_clone(it_82->item)))));
                                                    if(right_value58) { right_value58 = come_decrement_ref_count2(right_value58, ((struct sNode*)right_value58)->finalize, ((struct sNode*)right_value58)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    it_82=it_82->next;
                                                }
                                                __result53__ = __result_obj__ = result_81;
                                                if(result_81) { come_call_finalizer2(list$1sNodephp_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                                return __result53__;
                                                if(result_81) { come_call_finalizer2(list$1sNodephp_finalize,result_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional119;
struct list$1charph* __result54__;
void* right_value61;
void* right_value62;
struct list$1charph* result_83;
struct list_item$1charph* it_84;
_Bool _while_condtional16;
void* right_value66;
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value62 = (void*)0;
memset(&result_83, 0, sizeof(struct list$1charph*));
memset(&it_84, 0, sizeof(struct list_item$1charph*));
right_value66 = (void*)0;
                                                if(_if_conditional119=self==((void*)0),                                                _if_conditional119) {
                                                    __result54__ = __result_obj__ = ((void*)0);
                                                    return __result54__;
                                                }
                                                result_83=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value62=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value61=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                                                if(right_value61) { come_call_finalizer2(list$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                if(right_value62) { come_call_finalizer2(list$1charphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                it_84=self->head;
                                                while(_while_condtional16=it_84!=((void*)0),                                                _while_condtional16) {
                                                    list$1charph_add(result_83,(char*)come_increment_ref_count(((char*)(right_value66=string_clone(it_84->item)))));
                                                    if(right_value66) { right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                                    it_84=it_84->next;
                                                }
                                                __result57__ = __result_obj__ = result_83;
                                                if(result_83) { come_call_finalizer2(list$1charphp_finalize,result_83, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                                return __result57__;
                                                if(result_83) { come_call_finalizer2(list$1charphp_finalize,result_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result55__ = __result_obj__ = self;
                                                    if(self) { come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                                    return __result55__;
                                                    if(self) { come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional120;
void* right_value63;
struct list_item$1charph* litem_85;
char* __dec_obj26;
_Bool _if_conditional121;
void* right_value64;
struct list_item$1charph* litem_86;
char* __dec_obj27;
void* right_value65;
struct list_item$1charph* litem_87;
char* __dec_obj28;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1charph*));
right_value64 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1charph*));
right_value65 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1charph*));
                                                        if(_if_conditional120=self->len==0,                                                        _if_conditional120) {
                                                            litem_85=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value63=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                                                            if(right_value63) { come_call_finalizer2(list_item$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                            litem_85->prev=((void*)0);
                                                            litem_85->next=((void*)0);
                                                            __dec_obj26=litem_85->item;
                                                            litem_85->item=(char*)come_increment_ref_count(item);
                                                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                                            self->tail=litem_85;
                                                            self->head=litem_85;
                                                        }
                                                        else {
                                                            if(_if_conditional121=self->len==1,                                                            _if_conditional121) {
                                                                litem_86=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value64=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                                                if(right_value64) { come_call_finalizer2(list_item$1charphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                                litem_86->prev=self->head;
                                                                litem_86->next=((void*)0);
                                                                __dec_obj27=litem_86->item;
                                                                litem_86->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                                                self->tail=litem_86;
                                                                self->head->next=litem_86;
                                                            }
                                                            else {
                                                                litem_87=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value65=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                                                if(right_value65) { come_call_finalizer2(list_item$1charphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                                litem_87->prev=self->tail;
                                                                litem_87->next=((void*)0);
                                                                __dec_obj28=litem_87->item;
                                                                litem_87->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                                                self->tail->next=litem_87;
                                                                self->tail=litem_87;
                                                            }
                                                        }
                                                        self->len++;
                                                        __result56__ = __result_obj__ = self;
                                                        if(item) { item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
                                                        return __result56__;
                                                        if(item) { item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional123;
struct tuple1$1sTypeph* __result58__;
void* right_value68;
struct tuple1$1sTypeph* result_88;
_Bool _if_conditional124;
void* right_value69;
struct sType* __dec_obj30;
struct tuple1$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
memset(&result_88, 0, sizeof(struct tuple1$1sTypeph*));
right_value69 = (void*)0;
                                                if(_if_conditional123=self==(void*)0,                                                _if_conditional123) {
                                                    __result58__ = __result_obj__ = (void*)0;
                                                    return __result58__;
                                                }
                                                result_88=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value68=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                                                if(right_value68) { come_call_finalizer2(tuple1$1sTypeph_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                if(_if_conditional124=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional124) {
                                                    __dec_obj30=result_88->v1;
                                                    result_88->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value69=sType_clone(self->v1))));
                                                    if(__dec_obj30) { come_call_finalizer2(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                                                    if(right_value69) { come_call_finalizer2(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                                                }
                                                __result59__ = __result_obj__ = result_88;
                                                if(result_88) { come_call_finalizer2(tuple1$1sTypeph_finalize,result_88, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                                                return __result59__;
                                                if(result_88) { come_call_finalizer2(tuple1$1sTypeph_finalize,result_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional169;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional169=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional169) {
                            if(self->key_list) { come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                        }
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__;
_Bool _if_conditional173;
struct list$1sBlockph* __result65__;
void* right_value82;
void* right_value83;
struct list$1sBlockph* result_91;
struct list_item$1sBlockph* it_92;
_Bool _while_condtional18;
void* right_value87;
struct list$1sBlockph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&result_91, 0, sizeof(struct list$1sBlockph*));
memset(&it_92, 0, sizeof(struct list_item$1sBlockph*));
right_value87 = (void*)0;
        if(_if_conditional173=self==((void*)0),        _if_conditional173) {
            __result65__ = __result_obj__ = ((void*)0);
            return __result65__;
        }
        result_91=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value83=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value82=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang2.h", 141, "struct list$1sBlockph"))))))));
        if(right_value82) { come_call_finalizer2(list$1sBlockphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        if(right_value83) { come_call_finalizer2(list$1sBlockphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        it_92=self->head;
        while(_while_condtional18=it_92!=((void*)0),        _while_condtional18) {
            list$1sBlockph_add(result_91,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value87=sBlock_clone(it_92->item)))));
            if(right_value87) { come_call_finalizer2(sBlock_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            it_92=it_92->next;
        }
        __result68__ = __result_obj__ = result_91;
        if(result_91) { come_call_finalizer2(list$1sBlockphp_finalize,result_91, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
        return __result68__;
        if(result_91) { come_call_finalizer2(list$1sBlockphp_finalize,result_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__;
struct list$1sBlockph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result66__ = __result_obj__ = self;
            if(self) { come_call_finalizer2(list$1sBlockphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
            return __result66__;
            if(self) { come_call_finalizer2(list$1sBlockphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
void* __result_obj__;
struct list_item$1sBlockph* it_89;
_Bool _while_condtional17;
struct list_item$1sBlockph* prev_it_90;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_89, 0, sizeof(struct list_item$1sBlockph*));
memset(&prev_it_90, 0, sizeof(struct list_item$1sBlockph*));
                it_89=self->head;
                while(_while_condtional17=it_89!=((void*)0),                _while_condtional17) {
                    prev_it_90=it_89;
                    it_89=it_89->next;
                    if(prev_it_90) { come_call_finalizer2(list_item$1sBlockphp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
void* __result_obj__;
_Bool _if_conditional174;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional174=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional174) {
                            if(self->item) { come_call_finalizer2(sBlock_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                        }
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__;
_Bool _if_conditional175;
void* right_value84;
struct list_item$1sBlockph* litem_93;
struct sBlock* __dec_obj42;
_Bool _if_conditional176;
void* right_value85;
struct list_item$1sBlockph* litem_94;
struct sBlock* __dec_obj43;
void* right_value86;
struct list_item$1sBlockph* litem_95;
struct sBlock* __dec_obj44;
struct list$1sBlockph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1sBlockph*));
right_value85 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1sBlockph*));
right_value86 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1sBlockph*));
                if(_if_conditional175=self->len==0,                _if_conditional175) {
                    litem_93=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value84=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 155, "struct list_item$1sBlockph"))));
                    if(right_value84) { come_call_finalizer2(list_item$1sBlockphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                    litem_93->prev=((void*)0);
                    litem_93->next=((void*)0);
                    __dec_obj42=litem_93->item;
                    litem_93->item=(struct sBlock*)come_increment_ref_count(item);
                    if(__dec_obj42) { come_call_finalizer2(sBlock_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    self->tail=litem_93;
                    self->head=litem_93;
                }
                else {
                    if(_if_conditional176=self->len==1,                    _if_conditional176) {
                        litem_94=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value85=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 165, "struct list_item$1sBlockph"))));
                        if(right_value85) { come_call_finalizer2(list_item$1sBlockphp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                        litem_94->prev=self->head;
                        litem_94->next=((void*)0);
                        __dec_obj43=litem_94->item;
                        litem_94->item=(struct sBlock*)come_increment_ref_count(item);
                        if(__dec_obj43) { come_call_finalizer2(sBlock_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                        self->tail=litem_94;
                        self->head->next=litem_94;
                    }
                    else {
                        litem_95=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value86=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 175, "struct list_item$1sBlockph"))));
                        if(right_value86) { come_call_finalizer2(list_item$1sBlockphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                        litem_95->prev=self->tail;
                        litem_95->next=((void*)0);
                        __dec_obj44=litem_95->item;
                        litem_95->item=(struct sBlock*)come_increment_ref_count(item);
                        if(__dec_obj44) { come_call_finalizer2(sBlock_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                        self->tail->next=litem_95;
                        self->tail=litem_95;
                    }
                }
                self->len++;
                __result67__ = __result_obj__ = self;
                if(item) { come_call_finalizer2(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                return __result67__;
                if(item) { come_call_finalizer2(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sIfNode_terminated(){
void* __result_obj__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    __result70__ = (_Bool)1;
    return __result70__;
}

char* sIfNode_kind(){
void* __result_obj__;
void* right_value90;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
    __result71__ = __result_obj__ = ((char*)(right_value90=__builtin_string("sIfNode")));
    if(right_value90) { right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result71__;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
void* __result_obj__;
struct sBlock* else_block_96;
int elif_num_97;
struct sNode* expression_node_98;
int sline_99;
char* sname_100;
_Bool _if_conditional184;
_Bool __result72__;
void* right_value91;
struct CVALUE* conditional_value_101;
struct sBlock* if_block_102;
static int num_if_conditional_103=0;
int num_if_conditional_stack_104;
_Bool _if_conditional187;
int i_105;
_Bool _for_condtionalA7;
void* right_value92;
struct sNode* expression_node2_109;
_Bool _if_conditional190;
_Bool __result75__;
void* right_value93;
struct CVALUE* conditional_value_110;
void* right_value94;
struct sBlock* elif_node_block_114;
static int num_elif_conditional_115=0;
int num_elif_conditional_stack_116;
_Bool _if_conditional193;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&else_block_96, 0, sizeof(struct sBlock*));
memset(&elif_num_97, 0, sizeof(int));
memset(&expression_node_98, 0, sizeof(struct sNode*));
memset(&sline_99, 0, sizeof(int));
memset(&sname_100, 0, sizeof(char*));
right_value91 = (void*)0;
memset(&conditional_value_101, 0, sizeof(struct CVALUE*));
memset(&if_block_102, 0, sizeof(struct sBlock*));
memset(&num_if_conditional_stack_104, 0, sizeof(int));
memset(&i_105, 0, sizeof(int));
right_value92 = (void*)0;
memset(&expression_node2_109, 0, sizeof(struct sNode*));
right_value93 = (void*)0;
memset(&conditional_value_110, 0, sizeof(struct CVALUE*));
right_value94 = (void*)0;
memset(&elif_node_block_114, 0, sizeof(struct sBlock*));
memset(&num_elif_conditional_stack_116, 0, sizeof(int));
    else_block_96=self->mElseBlock;
    elif_num_97=self->mElifNum;
    expression_node_98=self->mExpressionNode;
    sline_99=info->sline;
    sname_100=info->sname;
    info->writing_source_file_position=(_Bool)1;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional184=!node_compile(expression_node_98,info),    _if_conditional184) {
        __result72__ = (_Bool)0;
        return __result72__;
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=get_value_from_stack(-1,info))));
    if(right_value91) { come_call_finalizer2(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    dec_stack_ptr(1,info);
    if_block_102=self->mIfBlock;
    add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_103);
    num_if_conditional_stack_104=num_if_conditional_103;
    add_come_code(info,"if(_if_conditional%d=%s,",num_if_conditional_103,conditional_value_101->c_value);
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_104);
    transpile_block(if_block_102,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    if(_if_conditional187=elif_num_97>0,    _if_conditional187) {
        for(
        i_105=0 ,        0;        _for_condtionalA7=        i_105<elif_num_97 ,        _for_condtionalA7;        i_105++ ,        0        ){
            expression_node2_109=((struct sNode*)(right_value92=list$1sNodephp_operator_load_element(self->mElifExpressionNodes,i_105)));
            if(right_value92) { right_value92 = come_decrement_ref_count2(right_value92, ((struct sNode*)right_value92)->finalize, ((struct sNode*)right_value92)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->writing_source_file_position=(_Bool)1;
            info->without_semicolon=(_Bool)1;
            if(_if_conditional190=!node_compile(expression_node2_109,info),            _if_conditional190) {
                __result75__ = (_Bool)0;
                if(conditional_value_101) { come_call_finalizer2(CVALUE_finalize,conditional_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                return __result75__;
            }
            info->without_semicolon=(_Bool)0;
            conditional_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value93=get_value_from_stack(-1,info))));
            if(right_value93) { come_call_finalizer2(CVALUE_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            dec_stack_ptr(1,info);
            elif_node_block_114=((struct sBlock*)(right_value94=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_105)));
            if(right_value94) { come_call_finalizer2(sBlock_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_115);
            num_elif_conditional_stack_116=num_elif_conditional_115;
            add_come_code(info,"else if(_elif_conditional%d=%s,",num_elif_conditional_115,conditional_value_110->c_value);
            add_last_code_to_source_with_comma(info);
            free_right_value_objects(info,(_Bool)1);
            add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_116);
            transpile_block(elif_node_block_114,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
            add_come_code(info,"}\n");
            if(conditional_value_110) { come_call_finalizer2(CVALUE_finalize,conditional_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        }
    }
    if(_if_conditional193=else_block_96,    _if_conditional193) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_96,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    __result78__ = (_Bool)1;
    if(conditional_value_101) { come_call_finalizer2(CVALUE_finalize,conditional_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    return __result78__;
    if(conditional_value_101) { come_call_finalizer2(CVALUE_finalize,conditional_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional185;
_Bool _if_conditional186;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional185=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional185) {
            if(self->c_value) { self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        if(_if_conditional186=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional186) {
            if(self->type) { come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional188;
struct list_item$1sNodeph* it_106;
int i_107;
_Bool _while_condtional19;
_Bool _if_conditional189;
struct sNode* __result73__;
struct sNode* default_value_108;
struct sNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_106, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_107, 0, sizeof(int));
memset(&default_value_108, 0, sizeof(struct sNode*));
                if(_if_conditional188=position<0,                _if_conditional188) {
                    position+=self->len;
                }
                it_106=self->head;
                i_107=0;
                while(_while_condtional19=it_106!=((void*)0),                _while_condtional19) {
                    if(_if_conditional189=position==i_107,                    _if_conditional189) {
                        __result73__ = __result_obj__ = it_106->item;
                        return __result73__;
                    }
                    it_106=it_106->next;
                    i_107++;
                }
                memset(&default_value_108,0,sizeof(struct sNode*));
                __result74__ = __result_obj__ = default_value_108;
                if(default_value_108) { default_value_108 = come_decrement_ref_count2(default_value_108, ((struct sNode*)default_value_108)->finalize, ((struct sNode*)default_value_108)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result74__;
                if(default_value_108) { default_value_108 = come_decrement_ref_count2(default_value_108, ((struct sNode*)default_value_108)->finalize, ((struct sNode*)default_value_108)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__;
_Bool _if_conditional191;
struct list_item$1sBlockph* it_111;
int i_112;
_Bool _while_condtional20;
_Bool _if_conditional192;
struct sBlock* __result76__;
struct sBlock* default_value_113;
struct sBlock* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_111, 0, sizeof(struct list_item$1sBlockph*));
memset(&i_112, 0, sizeof(int));
memset(&default_value_113, 0, sizeof(struct sBlock*));
                if(_if_conditional191=position<0,                _if_conditional191) {
                    position+=self->len;
                }
                it_111=self->head;
                i_112=0;
                while(_while_condtional20=it_111!=((void*)0),                _while_condtional20) {
                    if(_if_conditional192=position==i_112,                    _if_conditional192) {
                        __result76__ = __result_obj__ = it_111->item;
                        return __result76__;
                    }
                    it_111=it_111->next;
                    i_112++;
                }
                memset(&default_value_113,0,sizeof(struct sBlock*));
                __result77__ = __result_obj__ = default_value_113;
                if(default_value_113) { come_call_finalizer2(sBlock_finalize,default_value_113, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                return __result77__;
                if(default_value_113) { come_call_finalizer2(sBlock_finalize,default_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

int sIfNode_sline(struct sIfNode* self, struct sInfo* info){
void* __result_obj__;
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    __result79__ = self->sline;
    return __result79__;
}

char* sIfNode_sname(struct sIfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value95;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
    __result80__ = __result_obj__ = ((char*)(right_value95=__builtin_string(self->sname)));
    if(right_value95) { right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result80__;
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__;
void* right_value96;
char* __dec_obj48;
void* right_value97;
struct sNode* __dec_obj49;
void* right_value98;
struct sBlock* __dec_obj50;
struct sOrStatmentNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
    self->sline=info->sline;
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string(info->sname))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value96) { right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj49=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=sNode_clone(expression_node))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj50=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value98=sBlock_clone(if_block))));
    if(__dec_obj50) { come_call_finalizer2(sBlock_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value98) { come_call_finalizer2(sBlock_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __result81__ = __result_obj__ = self;
    if(self) { come_call_finalizer2(sOrStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result81__;
    if(self) { come_call_finalizer2(sOrStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrStatmentNode_terminated(){
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    __result82__ = (_Bool)1;
    return __result82__;
}

char* sOrStatmentNode_kind(){
void* __result_obj__;
void* right_value99;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
    __result83__ = __result_obj__ = ((char*)(right_value99=__builtin_string("sOrStatmentNode")));
    if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result83__;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* expression_node_117;
_Bool _if_conditional197;
_Bool __result84__;
void* right_value100;
struct CVALUE* conditional_value_118;
struct sBlock* if_block_119;
static int num_or_conditional_120=0;
int num_or_conditional_stack_121;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&expression_node_117, 0, sizeof(struct sNode*));
right_value100 = (void*)0;
memset(&conditional_value_118, 0, sizeof(struct CVALUE*));
memset(&if_block_119, 0, sizeof(struct sBlock*));
memset(&num_or_conditional_stack_121, 0, sizeof(int));
    expression_node_117=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional197=!node_compile(expression_node_117,info),    _if_conditional197) {
        __result84__ = (_Bool)0;
        return __result84__;
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value100=get_value_from_stack(-1,info))));
    if(right_value100) { come_call_finalizer2(CVALUE_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    dec_stack_ptr(1,info);
    if_block_119=self->mIfBlock;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_120);
    add_come_code(info,"if(_or_conditional%d=%s,",num_or_conditional_120,conditional_value_118->c_value);
    num_or_conditional_stack_121=num_or_conditional_120;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_or_conditional%d != 0) {\n",num_or_conditional_stack_121);
    transpile_block(if_block_119,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result85__ = (_Bool)1;
    if(conditional_value_118) { come_call_finalizer2(CVALUE_finalize,conditional_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    return __result85__;
    if(conditional_value_118) { come_call_finalizer2(CVALUE_finalize,conditional_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

int sOrStatmentNode_sline(struct sOrStatmentNode* self, struct sInfo* info){
void* __result_obj__;
int __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = self->sline;
    return __result86__;
}

char* sOrStatmentNode_sname(struct sOrStatmentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value101;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value101=__builtin_string(self->sname)));
    if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result87__;
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__;
void* right_value102;
char* __dec_obj51;
void* right_value103;
struct sNode* __dec_obj52;
void* right_value104;
struct sBlock* __dec_obj53;
struct sAndStatmentNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
    self->sline=info->sline;
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string(info->sname))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj52=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=sNode_clone(expression_node))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value103) { right_value103 = come_decrement_ref_count2(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj53=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value104=sBlock_clone(if_block))));
    if(__dec_obj53) { come_call_finalizer2(sBlock_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value104) { come_call_finalizer2(sBlock_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __result88__ = __result_obj__ = self;
    if(self) { come_call_finalizer2(sAndStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result88__;
    if(self) { come_call_finalizer2(sAndStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndStatmentNode_terminated(){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = (_Bool)1;
    return __result89__;
}

char* sAndStatmentNode_kind(){
void* __result_obj__;
void* right_value105;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
    __result90__ = __result_obj__ = ((char*)(right_value105=__builtin_string("sAndStatmentNode")));
    if(right_value105) { right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result90__;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* expression_node_122;
_Bool _if_conditional201;
_Bool __result91__;
void* right_value106;
struct CVALUE* conditional_value_123;
struct sBlock* if_block_124;
static int num_and_conditional_125=0;
int num_and_conditional_stack_126;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&expression_node_122, 0, sizeof(struct sNode*));
right_value106 = (void*)0;
memset(&conditional_value_123, 0, sizeof(struct CVALUE*));
memset(&if_block_124, 0, sizeof(struct sBlock*));
memset(&num_and_conditional_stack_126, 0, sizeof(int));
    expression_node_122=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional201=!node_compile(expression_node_122,info),    _if_conditional201) {
        __result91__ = (_Bool)0;
        return __result91__;
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=get_value_from_stack(-1,info))));
    if(right_value106) { come_call_finalizer2(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    dec_stack_ptr(1,info);
    if_block_124=self->mIfBlock;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_125);
    add_come_code(info,"if(_and_conditional%d=%s,",num_and_conditional_125,conditional_value_123->c_value);
    num_and_conditional_stack_126=num_and_conditional_125;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_and_conditional%d == 0) {\n",num_and_conditional_stack_126);
    transpile_block(if_block_124,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result92__ = (_Bool)1;
    if(conditional_value_123) { come_call_finalizer2(CVALUE_finalize,conditional_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    return __result92__;
    if(conditional_value_123) { come_call_finalizer2(CVALUE_finalize,conditional_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

int sAndStatmentNode_sline(struct sAndStatmentNode* self, struct sInfo* info){
void* __result_obj__;
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    __result93__ = self->sline;
    return __result93__;
}

char* sAndStatmentNode_sname(struct sAndStatmentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value107;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
    __result94__ = __result_obj__ = ((char*)(right_value107=__builtin_string(self->sname)));
    if(right_value107) { right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result94__;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
void* right_value108;
char* sname_127;
int sline_128;
void* right_value109;
struct sBlock* if_block_129;
void* right_value110;
void* right_value111;
struct list$1sNodeph* elif_expression_nodes_130;
void* right_value112;
void* right_value113;
struct list$1sBlockph* elif_blocks_131;
int elif_num_132;
struct sBlock* else_block_133;
_Bool _while_condtional21;
char* saved_p_134;
int saved_sline_135;
_Bool _if_conditional202;
void* right_value114;
char* buf_136;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value115;
struct sNode* expression_node_137;
void* right_value119;
struct sBlock* elif_block_141;
void* right_value123;
struct sBlock* __dec_obj60;
void* right_value124;
void* right_value125;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* right_value133;
struct sNode* result_146;
struct sNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&sname_127, 0, sizeof(char*));
memset(&sline_128, 0, sizeof(int));
right_value109 = (void*)0;
memset(&if_block_129, 0, sizeof(struct sBlock*));
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&elif_expression_nodes_130, 0, sizeof(struct list$1sNodeph*));
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&elif_blocks_131, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_132, 0, sizeof(int));
memset(&else_block_133, 0, sizeof(struct sBlock*));
memset(&saved_p_134, 0, sizeof(char*));
memset(&saved_sline_135, 0, sizeof(int));
right_value114 = (void*)0;
memset(&buf_136, 0, sizeof(char*));
right_value115 = (void*)0;
memset(&expression_node_137, 0, sizeof(struct sNode*));
right_value119 = (void*)0;
memset(&elif_block_141, 0, sizeof(struct sBlock*));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value133 = (void*)0;
memset(&result_146, 0, sizeof(struct sNode*));
    sname_127=(char*)come_increment_ref_count(((char*)(right_value108=string_clone(info->sname))));
    if(right_value108) { right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    sline_128=info->sline;
    parse_sharp_v5(info);
    if_block_129=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value109=parse_block(info,(_Bool)0))));
    if(right_value109) { come_call_finalizer2(sBlock_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    elif_expression_nodes_130=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value111=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value110=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 307, "struct list$1sNodeph"))))))));
    if(right_value110) { come_call_finalizer2(list$1sNodephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value111) { come_call_finalizer2(list$1sNodephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    elif_blocks_131=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value113=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value112=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 309, "struct list$1sBlockph"))))))));
    if(right_value112) { come_call_finalizer2(list$1sBlockphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value113) { come_call_finalizer2(list$1sBlockphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    elif_num_132=0;
    else_block_133=((void*)0);
    while(_while_condtional21=1,    _while_condtional21) {
        saved_p_134=info->p;
        saved_sline_135=info->sline;
        parse_sharp_v5(info);
        if(_if_conditional202=!xisalpha(*info->p),        _if_conditional202) {
            break;
        }
        parse_sharp_v5(info);
        buf_136=(char*)come_increment_ref_count(((char*)(right_value114=parse_word(info))));
        if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        parse_sharp_v5(info);
        if(_if_conditional203=string_operator_equals(buf_136,"else"),        _if_conditional203) {
            if(_if_conditional204=parsecmp("if",info),            _if_conditional204) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_137=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=expression_v13(info))));
                if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                list$1sNodeph_push_back(elif_expression_nodes_130,(struct sNode*)come_increment_ref_count(expression_node_137));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_141=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value119=parse_block(info,(_Bool)0))));
                if(right_value119) { come_call_finalizer2(sBlock_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                list$1sBlockph_push_back(elif_blocks_131,(struct sBlock*)come_increment_ref_count(elif_block_141));
                elif_num_132++;
                if(expression_node_137) { expression_node_137 = come_decrement_ref_count2(expression_node_137, ((struct sNode*)expression_node_137)->finalize, ((struct sNode*)expression_node_137)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(elif_block_141) { come_call_finalizer2(sBlock_finalize,elif_block_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            }
            else {
                __dec_obj60=else_block_133;
                else_block_133=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value123=parse_block(info,(_Bool)0))));
                if(__dec_obj60) { come_call_finalizer2(sBlock_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(right_value123) { come_call_finalizer2(sBlock_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                if(buf_136) { buf_136 = come_decrement_ref_count2(buf_136, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
            }
        }
        else {
            info->p=saved_p_134;
            info->sline=saved_sline_135;
            if(buf_136) { buf_136 = come_decrement_ref_count2(buf_136, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            break;
        }
        if(buf_136) { buf_136 = come_decrement_ref_count2(buf_136, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 364, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sIfNode*)(right_value125=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value124=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 364, "struct sIfNode")))),(struct sNode*)come_increment_ref_count(expression_node),if_block_129,elif_expression_nodes_130,elif_blocks_131,elif_num_132,else_block_133,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sIfNode_sline;
    _inf_value1->sname=(void*)sIfNode_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    result_146=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value133=_inf_value1)));
    if(right_value124) { come_call_finalizer2(sIfNode_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value125) { come_call_finalizer2(sIfNode_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value133) { right_value133 = come_decrement_ref_count2(right_value133, ((struct sNode*)right_value133)->finalize, ((struct sNode*)right_value133)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result99__ = __result_obj__ = result_146;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(sname_127) { sname_127 = come_decrement_ref_count2(sname_127, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(if_block_129) { come_call_finalizer2(sBlock_finalize,if_block_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(elif_expression_nodes_130) { come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(elif_blocks_131) { come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(else_block_133) { come_call_finalizer2(sBlock_finalize,else_block_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(result_146) { result_146 = come_decrement_ref_count2(result_146, ((struct sNode*)result_146)->finalize, ((struct sNode*)result_146)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result99__;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(sname_127) { sname_127 = come_decrement_ref_count2(sname_127, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(if_block_129) { come_call_finalizer2(sBlock_finalize,if_block_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(elif_expression_nodes_130) { come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(elif_blocks_131) { come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(else_block_133) { come_call_finalizer2(sBlock_finalize,else_block_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(result_146) { result_146 = come_decrement_ref_count2(result_146, ((struct sNode*)result_146)->finalize, ((struct sNode*)result_146)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional205;
void* right_value116;
struct list_item$1sNodeph* litem_138;
struct sNode* __dec_obj54;
_Bool _if_conditional206;
void* right_value117;
struct list_item$1sNodeph* litem_139;
struct sNode* __dec_obj55;
void* right_value118;
struct list_item$1sNodeph* litem_140;
struct sNode* __dec_obj56;
struct list$1sNodeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&litem_138, 0, sizeof(struct list_item$1sNodeph*));
right_value117 = (void*)0;
memset(&litem_139, 0, sizeof(struct list_item$1sNodeph*));
right_value118 = (void*)0;
memset(&litem_140, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional205=self->len==0,                    _if_conditional205) {
                        litem_138=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 225, "struct list_item$1sNodeph"))));
                        if(right_value116) { come_call_finalizer2(list_item$1sNodephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                        litem_138->prev=((void*)0);
                        litem_138->next=((void*)0);
                        __dec_obj54=litem_138->item;
                        litem_138->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_138;
                        self->head=litem_138;
                    }
                    else {
                        if(_if_conditional206=self->len==1,                        _if_conditional206) {
                            litem_139=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value117=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 235, "struct list_item$1sNodeph"))));
                            if(right_value117) { come_call_finalizer2(list_item$1sNodephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                            litem_139->prev=self->head;
                            litem_139->next=((void*)0);
                            __dec_obj55=litem_139->item;
                            litem_139->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_139;
                            self->head->next=litem_139;
                        }
                        else {
                            litem_140=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value118=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 245, "struct list_item$1sNodeph"))));
                            if(right_value118) { come_call_finalizer2(list_item$1sNodephp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                            litem_140->prev=self->tail;
                            litem_140->next=((void*)0);
                            __dec_obj56=litem_140->item;
                            litem_140->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail->next=litem_140;
                            self->tail=litem_140;
                        }
                    }
                    self->len++;
                    __result95__ = __result_obj__ = self;
                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result95__;
                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__;
_Bool _if_conditional207;
void* right_value120;
struct list_item$1sBlockph* litem_142;
struct sBlock* __dec_obj57;
_Bool _if_conditional208;
void* right_value121;
struct list_item$1sBlockph* litem_143;
struct sBlock* __dec_obj58;
void* right_value122;
struct list_item$1sBlockph* litem_144;
struct sBlock* __dec_obj59;
struct list$1sBlockph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_142, 0, sizeof(struct list_item$1sBlockph*));
right_value121 = (void*)0;
memset(&litem_143, 0, sizeof(struct list_item$1sBlockph*));
right_value122 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1sBlockph*));
                    if(_if_conditional207=self->len==0,                    _if_conditional207) {
                        litem_142=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value120=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 225, "struct list_item$1sBlockph"))));
                        if(right_value120) { come_call_finalizer2(list_item$1sBlockphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                        litem_142->prev=((void*)0);
                        litem_142->next=((void*)0);
                        __dec_obj57=litem_142->item;
                        litem_142->item=(struct sBlock*)come_increment_ref_count(item);
                        if(__dec_obj57) { come_call_finalizer2(sBlock_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                        self->tail=litem_142;
                        self->head=litem_142;
                    }
                    else {
                        if(_if_conditional208=self->len==1,                        _if_conditional208) {
                            litem_143=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value121=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 235, "struct list_item$1sBlockph"))));
                            if(right_value121) { come_call_finalizer2(list_item$1sBlockphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                            litem_143->prev=self->head;
                            litem_143->next=((void*)0);
                            __dec_obj58=litem_143->item;
                            litem_143->item=(struct sBlock*)come_increment_ref_count(item);
                            if(__dec_obj58) { come_call_finalizer2(sBlock_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                            self->tail=litem_143;
                            self->head->next=litem_143;
                        }
                        else {
                            litem_144=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value122=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 245, "struct list_item$1sBlockph"))));
                            if(right_value122) { come_call_finalizer2(list_item$1sBlockphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                            litem_144->prev=self->tail;
                            litem_144->next=((void*)0);
                            __dec_obj59=litem_144->item;
                            litem_144->item=(struct sBlock*)come_increment_ref_count(item);
                            if(__dec_obj59) { come_call_finalizer2(sBlock_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                            self->tail->next=litem_144;
                            self->tail=litem_144;
                        }
                    }
                    self->len++;
                    __result96__ = __result_obj__ = self;
                    if(item) { come_call_finalizer2(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                    return __result96__;
                    if(item) { come_call_finalizer2(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
void* right_value134;
char* sname_147;
int sline_148;
void* right_value135;
struct sNode* expression_node2_149;
void* right_value136;
struct sBlock* if_block_150;
void* right_value137;
void* right_value138;
struct list$1sNodeph* elif_expression_nodes_151;
void* right_value139;
void* right_value140;
struct list$1sBlockph* elif_blocks_152;
int elif_num_153;
struct sBlock* else_block_154;
_Bool _while_condtional22;
char* saved_p_155;
int saved_sline_156;
_Bool _if_conditional224;
void* right_value141;
char* buf_157;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value142;
struct sNode* expression_node_158;
void* right_value143;
struct sBlock* elif_block_159;
void* right_value144;
struct sBlock* __dec_obj67;
void* right_value145;
void* right_value146;
struct sNode* _inf_value2;
struct sIfNode* _inf_obj_value2;
void* right_value154;
struct sNode* result_161;
struct sNode* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
memset(&sname_147, 0, sizeof(char*));
memset(&sline_148, 0, sizeof(int));
right_value135 = (void*)0;
memset(&expression_node2_149, 0, sizeof(struct sNode*));
right_value136 = (void*)0;
memset(&if_block_150, 0, sizeof(struct sBlock*));
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&elif_expression_nodes_151, 0, sizeof(struct list$1sNodeph*));
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&elif_blocks_152, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_153, 0, sizeof(int));
memset(&else_block_154, 0, sizeof(struct sBlock*));
memset(&saved_p_155, 0, sizeof(char*));
memset(&saved_sline_156, 0, sizeof(int));
right_value141 = (void*)0;
memset(&buf_157, 0, sizeof(char*));
right_value142 = (void*)0;
memset(&expression_node_158, 0, sizeof(struct sNode*));
right_value143 = (void*)0;
memset(&elif_block_159, 0, sizeof(struct sBlock*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value154 = (void*)0;
memset(&result_161, 0, sizeof(struct sNode*));
    sname_147=(char*)come_increment_ref_count(((char*)(right_value134=string_clone(info->sname))));
    if(right_value134) { right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    sline_148=info->sline;
    parse_sharp_v5(info);
    expression_node2_149=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value135=craete_logical_denial((struct sNode*)come_increment_ref_count(expression_node),info))));
    if(right_value135) { right_value135 = come_decrement_ref_count2(right_value135, ((struct sNode*)right_value135)->finalize, ((struct sNode*)right_value135)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if_block_150=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value136=parse_block(info,(_Bool)0))));
    if(right_value136) { come_call_finalizer2(sBlock_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    elif_expression_nodes_151=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value138=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value137=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 380, "struct list$1sNodeph"))))))));
    if(right_value137) { come_call_finalizer2(list$1sNodephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value138) { come_call_finalizer2(list$1sNodephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    elif_blocks_152=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value140=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value139=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 382, "struct list$1sBlockph"))))))));
    if(right_value139) { come_call_finalizer2(list$1sBlockphp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value140) { come_call_finalizer2(list$1sBlockphp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    elif_num_153=0;
    else_block_154=((void*)0);
    while(_while_condtional22=1,    _while_condtional22) {
        saved_p_155=info->p;
        saved_sline_156=info->sline;
        parse_sharp_v5(info);
        if(_if_conditional224=!xisalpha(*info->p),        _if_conditional224) {
            break;
        }
        parse_sharp_v5(info);
        buf_157=(char*)come_increment_ref_count(((char*)(right_value141=parse_word(info))));
        if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        parse_sharp_v5(info);
        if(_if_conditional225=string_operator_equals(buf_157,"else"),        _if_conditional225) {
            if(_if_conditional226=parsecmp("if",info),            _if_conditional226) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_158=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=expression_v13(info))));
                if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                list$1sNodeph_push_back(elif_expression_nodes_151,(struct sNode*)come_increment_ref_count(expression_node_158));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_159=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value143=parse_block(info,(_Bool)0))));
                if(right_value143) { come_call_finalizer2(sBlock_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                list$1sBlockph_push_back(elif_blocks_152,(struct sBlock*)come_increment_ref_count(elif_block_159));
                elif_num_153++;
                if(expression_node_158) { expression_node_158 = come_decrement_ref_count2(expression_node_158, ((struct sNode*)expression_node_158)->finalize, ((struct sNode*)expression_node_158)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(elif_block_159) { come_call_finalizer2(sBlock_finalize,elif_block_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            }
            else {
                __dec_obj67=else_block_154;
                else_block_154=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value144=parse_block(info,(_Bool)0))));
                if(__dec_obj67) { come_call_finalizer2(sBlock_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(right_value144) { come_call_finalizer2(sBlock_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                if(buf_157) { buf_157 = come_decrement_ref_count2(buf_157, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
            }
        }
        else {
            info->p=saved_p_155;
            info->sline=saved_sline_156;
            if(buf_157) { buf_157 = come_decrement_ref_count2(buf_157, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            break;
        }
        if(buf_157) { buf_157 = come_decrement_ref_count2(buf_157, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 437, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sIfNode*)(right_value146=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value145=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 437, "struct sIfNode")))),(struct sNode*)come_increment_ref_count(expression_node2_149),if_block_150,elif_expression_nodes_151,elif_blocks_152,elif_num_153,else_block_154,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sIfNode_finalize;
    _inf_value2->clone=(void*)sIfNode_clone;
    _inf_value2->compile=(void*)sIfNode_compile;
    _inf_value2->sline=(void*)sIfNode_sline;
    _inf_value2->sname=(void*)sIfNode_sname;
    _inf_value2->terminated=(void*)sIfNode_terminated;
    _inf_value2->kind=(void*)sIfNode_kind;
    result_161=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=_inf_value2)));
    if(right_value145) { come_call_finalizer2(sIfNode_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value146) { come_call_finalizer2(sIfNode_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result102__ = __result_obj__ = result_161;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(sname_147) { sname_147 = come_decrement_ref_count2(sname_147, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(expression_node2_149) { expression_node2_149 = come_decrement_ref_count2(expression_node2_149, ((struct sNode*)expression_node2_149)->finalize, ((struct sNode*)expression_node2_149)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(if_block_150) { come_call_finalizer2(sBlock_finalize,if_block_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(elif_expression_nodes_151) { come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(elif_blocks_152) { come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(else_block_154) { come_call_finalizer2(sBlock_finalize,else_block_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(result_161) { result_161 = come_decrement_ref_count2(result_161, ((struct sNode*)result_161)->finalize, ((struct sNode*)result_161)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result102__;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(sname_147) { sname_147 = come_decrement_ref_count2(sname_147, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(expression_node2_149) { expression_node2_149 = come_decrement_ref_count2(expression_node2_149, ((struct sNode*)expression_node2_149)->finalize, ((struct sNode*)expression_node2_149)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(if_block_150) { come_call_finalizer2(sBlock_finalize,if_block_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(elif_expression_nodes_151) { come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(elif_blocks_152) { come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(else_block_154) { come_call_finalizer2(sBlock_finalize,else_block_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(result_161) { result_161 = come_decrement_ref_count2(result_161, ((struct sNode*)result_161)->finalize, ((struct sNode*)result_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional242;
void* right_value155;
char* sname_162;
int sline_163;
void* right_value156;
struct sNode* expression_node_164;
void* right_value157;
struct sBlock* if_block_165;
void* right_value158;
void* right_value159;
struct list$1sNodeph* elif_expression_nodes_166;
void* right_value160;
void* right_value161;
struct list$1sBlockph* elif_blocks_167;
int elif_num_168;
struct sBlock* else_block_169;
_Bool _while_condtional23;
char* saved_p_170;
int saved_sline_171;
_Bool _if_conditional243;
void* right_value162;
char* buf_172;
_Bool _if_conditional244;
_Bool _if_conditional245;
void* right_value163;
struct sNode* expression_node_173;
void* right_value164;
struct sBlock* elif_block_174;
void* right_value165;
struct sBlock* __dec_obj74;
void* right_value166;
void* right_value167;
struct sNode* _inf_value3;
struct sIfNode* _inf_obj_value3;
void* right_value175;
struct sNode* result_176;
struct sNode* __result105__;
void* right_value176;
struct sNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
memset(&sname_162, 0, sizeof(char*));
memset(&sline_163, 0, sizeof(int));
right_value156 = (void*)0;
memset(&expression_node_164, 0, sizeof(struct sNode*));
right_value157 = (void*)0;
memset(&if_block_165, 0, sizeof(struct sBlock*));
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&elif_expression_nodes_166, 0, sizeof(struct list$1sNodeph*));
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&elif_blocks_167, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_168, 0, sizeof(int));
memset(&else_block_169, 0, sizeof(struct sBlock*));
memset(&saved_p_170, 0, sizeof(char*));
memset(&saved_sline_171, 0, sizeof(int));
right_value162 = (void*)0;
memset(&buf_172, 0, sizeof(char*));
right_value163 = (void*)0;
memset(&expression_node_173, 0, sizeof(struct sNode*));
right_value164 = (void*)0;
memset(&elif_block_174, 0, sizeof(struct sBlock*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value175 = (void*)0;
memset(&result_176, 0, sizeof(struct sNode*));
right_value176 = (void*)0;
    if(_if_conditional242=charp_operator_equals(buf,"if"),    _if_conditional242) {
        sname_162=(char*)come_increment_ref_count(((char*)(right_value155=string_clone(info->sname))));
        if(right_value155) { right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        sline_163=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_164=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value156=expression_v13(info))));
        if(right_value156) { right_value156 = come_decrement_ref_count2(right_value156, ((struct sNode*)right_value156)->finalize, ((struct sNode*)right_value156)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_165=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value157=parse_block(info,(_Bool)0))));
        if(right_value157) { come_call_finalizer2(sBlock_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        elif_expression_nodes_166=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value159=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value158=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 460, "struct list$1sNodeph"))))))));
        if(right_value158) { come_call_finalizer2(list$1sNodephp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        if(right_value159) { come_call_finalizer2(list$1sNodephp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        elif_blocks_167=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value161=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value160=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 462, "struct list$1sBlockph"))))))));
        if(right_value160) { come_call_finalizer2(list$1sBlockphp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        if(right_value161) { come_call_finalizer2(list$1sBlockphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        elif_num_168=0;
        else_block_169=((void*)0);
        while(_while_condtional23=1,        _while_condtional23) {
            saved_p_170=info->p;
            saved_sline_171=info->sline;
            parse_sharp_v5(info);
            if(_if_conditional243=!xisalpha(*info->p),            _if_conditional243) {
                break;
            }
            parse_sharp_v5(info);
            buf_172=(char*)come_increment_ref_count(((char*)(right_value162=parse_word(info))));
            if(right_value162) { right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            parse_sharp_v5(info);
            if(_if_conditional244=string_operator_equals(buf_172,"else"),            _if_conditional244) {
                if(_if_conditional245=parsecmp("if",info),                _if_conditional245) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_173=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value163=expression_v13(info))));
                    if(right_value163) { right_value163 = come_decrement_ref_count2(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    list$1sNodeph_push_back(elif_expression_nodes_166,(struct sNode*)come_increment_ref_count(expression_node_173));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_174=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value164=parse_block(info,(_Bool)0))));
                    if(right_value164) { come_call_finalizer2(sBlock_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                    list$1sBlockph_push_back(elif_blocks_167,(struct sBlock*)come_increment_ref_count(elif_block_174));
                    elif_num_168++;
                    if(expression_node_173) { expression_node_173 = come_decrement_ref_count2(expression_node_173, ((struct sNode*)expression_node_173)->finalize, ((struct sNode*)expression_node_173)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(elif_block_174) { come_call_finalizer2(sBlock_finalize,elif_block_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                }
                else {
                    __dec_obj74=else_block_169;
                    else_block_169=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value165=parse_block(info,(_Bool)0))));
                    if(__dec_obj74) { come_call_finalizer2(sBlock_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(right_value165) { come_call_finalizer2(sBlock_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                    if(buf_172) { buf_172 = come_decrement_ref_count2(buf_172, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    break;
                }
            }
            else {
                info->p=saved_p_170;
                info->sline=saved_sline_171;
                if(buf_172) { buf_172 = come_decrement_ref_count2(buf_172, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
            }
            if(buf_172) { buf_172 = come_decrement_ref_count2(buf_172, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 517, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sIfNode*)(right_value167=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value166=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 517, "struct sIfNode")))),(struct sNode*)come_increment_ref_count(expression_node_164),if_block_165,elif_expression_nodes_166,elif_blocks_167,elif_num_168,else_block_169,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sIfNode_finalize;
        _inf_value3->clone=(void*)sIfNode_clone;
        _inf_value3->compile=(void*)sIfNode_compile;
        _inf_value3->sline=(void*)sIfNode_sline;
        _inf_value3->sname=(void*)sIfNode_sname;
        _inf_value3->terminated=(void*)sIfNode_terminated;
        _inf_value3->kind=(void*)sIfNode_kind;
        result_176=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value175=_inf_value3)));
        if(right_value166) { come_call_finalizer2(sIfNode_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        if(right_value167) { come_call_finalizer2(sIfNode_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        if(right_value175) { right_value175 = come_decrement_ref_count2(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result105__ = __result_obj__ = result_176;
        if(sname_162) { sname_162 = come_decrement_ref_count2(sname_162, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        if(expression_node_164) { expression_node_164 = come_decrement_ref_count2(expression_node_164, ((struct sNode*)expression_node_164)->finalize, ((struct sNode*)expression_node_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(if_block_165) { come_call_finalizer2(sBlock_finalize,if_block_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        if(elif_expression_nodes_166) { come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        if(elif_blocks_167) { come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        if(else_block_169) { come_call_finalizer2(sBlock_finalize,else_block_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        if(result_176) { result_176 = come_decrement_ref_count2(result_176, ((struct sNode*)result_176)->finalize, ((struct sNode*)result_176)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result105__;
        if(sname_162) { sname_162 = come_decrement_ref_count2(sname_162, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        if(expression_node_164) { expression_node_164 = come_decrement_ref_count2(expression_node_164, ((struct sNode*)expression_node_164)->finalize, ((struct sNode*)expression_node_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(if_block_165) { come_call_finalizer2(sBlock_finalize,if_block_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        if(elif_expression_nodes_166) { come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        if(elif_blocks_167) { come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        if(else_block_169) { come_call_finalizer2(sBlock_finalize,else_block_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        if(result_176) { result_176 = come_decrement_ref_count2(result_176, ((struct sNode*)result_176)->finalize, ((struct sNode*)result_176)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result106__ = __result_obj__ = ((struct sNode*)(right_value176=string_node_v7(buf,head,head_sline,info)));
    if(right_value176) { right_value176 = come_decrement_ref_count2(right_value176, ((struct sNode*)right_value176)->finalize, ((struct sNode*)right_value176)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result106__;
}

static void sIfNode_finalize(struct sIfNode* self){
void* __result_obj__;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional246=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional246) {
                if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional247=self!=((void*)0)&&self->mIfBlock!=((void*)0),            _if_conditional247) {
                if(self->mIfBlock) { come_call_finalizer2(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional248=self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0),            _if_conditional248) {
                if(self->mElifExpressionNodes) { come_call_finalizer2(list$1sNodephp_finalize,self->mElifExpressionNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional249=self!=((void*)0)&&self->mElifBlocks!=((void*)0),            _if_conditional249) {
                if(self->mElifBlocks) { come_call_finalizer2(list$1sBlockphp_finalize,self->mElifBlocks, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional250=self!=((void*)0)&&self->mElseBlock!=((void*)0),            _if_conditional250) {
                if(self->mElseBlock) { come_call_finalizer2(sBlock_finalize,self->mElseBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional251=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional251) {
                if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
void* __result_obj__;
_Bool _if_conditional252;
struct sIfNode* __result103__;
void* right_value168;
struct sIfNode* result_175;
_Bool _if_conditional253;
void* right_value169;
struct sNode* __dec_obj75;
_Bool _if_conditional254;
void* right_value170;
struct sBlock* __dec_obj76;
_Bool _if_conditional255;
void* right_value171;
struct list$1sNodeph* __dec_obj77;
_Bool _if_conditional256;
void* right_value172;
struct list$1sBlockph* __dec_obj78;
_Bool _if_conditional257;
_Bool _if_conditional258;
void* right_value173;
struct sBlock* __dec_obj79;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value174;
char* __dec_obj80;
struct sIfNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&result_175, 0, sizeof(struct sIfNode*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
            if(_if_conditional252=self==(void*)0,            _if_conditional252) {
                __result103__ = __result_obj__ = (void*)0;
                return __result103__;
            }
            result_175=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value168=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "struct sIfNode"))));
            if(right_value168) { come_call_finalizer2(sIfNode_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            if(_if_conditional253=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional253) {
                __dec_obj75=result_175->mExpressionNode;
                result_175->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=sNode_clone(self->mExpressionNode))));
                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value169) { right_value169 = come_decrement_ref_count2(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional254=self!=((void*)0)&&self->mIfBlock!=((void*)0),            _if_conditional254) {
                __dec_obj76=result_175->mIfBlock;
                result_175->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value170=sBlock_clone(self->mIfBlock))));
                if(__dec_obj76) { come_call_finalizer2(sBlock_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(right_value170) { come_call_finalizer2(sBlock_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            }
            if(_if_conditional255=self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0),            _if_conditional255) {
                __dec_obj77=result_175->mElifExpressionNodes;
                result_175->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value171=list$1sNodephp_clone(self->mElifExpressionNodes))));
                if(__dec_obj77) { come_call_finalizer2(list$1sNodeph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(right_value171) { come_call_finalizer2(list$1sNodephp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            }
            if(_if_conditional256=self!=((void*)0)&&self->mElifBlocks!=((void*)0),            _if_conditional256) {
                __dec_obj78=result_175->mElifBlocks;
                result_175->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value172=list$1sBlockphp_clone(self->mElifBlocks))));
                if(__dec_obj78) { come_call_finalizer2(list$1sBlockph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(right_value172) { come_call_finalizer2(list$1sBlockphp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            }
            if(_if_conditional257=self!=((void*)0),            _if_conditional257) {
                result_175->mElifNum=self->mElifNum;
            }
            if(_if_conditional258=self!=((void*)0)&&self->mElseBlock!=((void*)0),            _if_conditional258) {
                __dec_obj79=result_175->mElseBlock;
                result_175->mElseBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value173=sBlock_clone(self->mElseBlock))));
                if(__dec_obj79) { come_call_finalizer2(sBlock_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(right_value173) { come_call_finalizer2(sBlock_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            }
            if(_if_conditional259=self!=((void*)0),            _if_conditional259) {
                result_175->sline=self->sline;
            }
            if(_if_conditional260=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional260) {
                __dec_obj80=result_175->sname;
                result_175->sname=(char*)come_increment_ref_count(((char*)(right_value174=string_clone(self->sname))));
                if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value174) { right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            }
            __result104__ = __result_obj__ = result_175;
            if(result_175) { come_call_finalizer2(sIfNode_finalize,result_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
            return __result104__;
            if(result_175) { come_call_finalizer2(sIfNode_finalize,result_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
void* right_value177;
char* sname_177;
int sline_178;
void* right_value178;
struct sBlock* if_block_179;
void* right_value179;
void* right_value180;
struct sNode* _inf_value4;
struct sOrStatmentNode* _inf_obj_value4;
void* right_value185;
struct sNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
memset(&sname_177, 0, sizeof(char*));
memset(&sline_178, 0, sizeof(int));
right_value178 = (void*)0;
memset(&if_block_179, 0, sizeof(struct sBlock*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value185 = (void*)0;
    sname_177=(char*)come_increment_ref_count(((char*)(right_value177=string_clone(info->sname))));
    if(right_value177) { right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    sline_178=info->sline;
    parse_sharp_v5(info);
    if_block_179=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value178=parse_block(info,(_Bool)0))));
    if(right_value178) { come_call_finalizer2(sBlock_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 534, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sOrStatmentNode*)(right_value180=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(right_value179=(struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 534, "struct sOrStatmentNode")))),(struct sNode*)come_increment_ref_count(expression_node),if_block_179,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value4->clone=(void*)sOrStatmentNode_clone;
    _inf_value4->compile=(void*)sOrStatmentNode_compile;
    _inf_value4->sline=(void*)sOrStatmentNode_sline;
    _inf_value4->sname=(void*)sOrStatmentNode_sname;
    _inf_value4->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value4->kind=(void*)sOrStatmentNode_kind;
    __result109__ = __result_obj__ = ((struct sNode*)(right_value185=_inf_value4));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(sname_177) { sname_177 = come_decrement_ref_count2(sname_177, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(if_block_179) { come_call_finalizer2(sBlock_finalize,if_block_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value179) { come_call_finalizer2(sOrStatmentNode_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value180) { come_call_finalizer2(sOrStatmentNode_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result109__;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(sname_177) { sname_177 = come_decrement_ref_count2(sname_177, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(if_block_179) { come_call_finalizer2(sBlock_finalize,if_block_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
void* __result_obj__;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional261=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional261) {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional262=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional262) {
            if(self->mIfBlock) { come_call_finalizer2(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        }
        if(_if_conditional263=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional263) {
            if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
void* __result_obj__;
_Bool _if_conditional264;
struct sOrStatmentNode* __result107__;
void* right_value181;
struct sOrStatmentNode* result_180;
_Bool _if_conditional265;
void* right_value182;
struct sNode* __dec_obj81;
_Bool _if_conditional266;
void* right_value183;
struct sBlock* __dec_obj82;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value184;
char* __dec_obj83;
struct sOrStatmentNode* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
memset(&result_180, 0, sizeof(struct sOrStatmentNode*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
        if(_if_conditional264=self==(void*)0,        _if_conditional264) {
            __result107__ = __result_obj__ = (void*)0;
            return __result107__;
        }
        result_180=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(right_value181=(struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "struct sOrStatmentNode"))));
        if(right_value181) { come_call_finalizer2(sOrStatmentNode_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        if(_if_conditional265=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional265) {
            __dec_obj81=result_180->mExpressionNode;
            result_180->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value182=sNode_clone(self->mExpressionNode))));
            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value182) { right_value182 = come_decrement_ref_count2(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional266=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional266) {
            __dec_obj82=result_180->mIfBlock;
            result_180->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value183=sBlock_clone(self->mIfBlock))));
            if(__dec_obj82) { come_call_finalizer2(sBlock_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            if(right_value183) { come_call_finalizer2(sBlock_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        }
        if(_if_conditional267=self!=((void*)0),        _if_conditional267) {
            result_180->sline=self->sline;
        }
        if(_if_conditional268=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional268) {
            __dec_obj83=result_180->sname;
            result_180->sname=(char*)come_increment_ref_count(((char*)(right_value184=string_clone(self->sname))));
            if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value184) { right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        __result108__ = __result_obj__ = result_180;
        if(result_180) { come_call_finalizer2(sOrStatmentNode_finalize,result_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
        return __result108__;
        if(result_180) { come_call_finalizer2(sOrStatmentNode_finalize,result_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
void* right_value186;
char* sname_181;
int sline_182;
void* right_value187;
struct sBlock* if_block_183;
void* right_value188;
void* right_value189;
struct sNode* _inf_value5;
struct sAndStatmentNode* _inf_obj_value5;
void* right_value194;
struct sNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
memset(&sname_181, 0, sizeof(char*));
memset(&sline_182, 0, sizeof(int));
right_value187 = (void*)0;
memset(&if_block_183, 0, sizeof(struct sBlock*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value194 = (void*)0;
    sname_181=(char*)come_increment_ref_count(((char*)(right_value186=string_clone(info->sname))));
    if(right_value186) { right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    sline_182=info->sline;
    parse_sharp_v5(info);
    if_block_183=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value187=parse_block(info,(_Bool)0))));
    if(right_value187) { come_call_finalizer2(sBlock_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 546, "struct sNode");
    _inf_obj_value5=come_increment_ref_count(((struct sAndStatmentNode*)(right_value189=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(right_value188=(struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 546, "struct sAndStatmentNode")))),(struct sNode*)come_increment_ref_count(expression_node),if_block_183,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value5->clone=(void*)sAndStatmentNode_clone;
    _inf_value5->compile=(void*)sAndStatmentNode_compile;
    _inf_value5->sline=(void*)sAndStatmentNode_sline;
    _inf_value5->sname=(void*)sAndStatmentNode_sname;
    _inf_value5->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value5->kind=(void*)sAndStatmentNode_kind;
    __result112__ = __result_obj__ = ((struct sNode*)(right_value194=_inf_value5));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(sname_181) { sname_181 = come_decrement_ref_count2(sname_181, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(if_block_183) { come_call_finalizer2(sBlock_finalize,if_block_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value188) { come_call_finalizer2(sAndStatmentNode_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value189) { come_call_finalizer2(sAndStatmentNode_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value194) { right_value194 = come_decrement_ref_count2(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result112__;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(sname_181) { sname_181 = come_decrement_ref_count2(sname_181, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(if_block_183) { come_call_finalizer2(sBlock_finalize,if_block_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
void* __result_obj__;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional269=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional269) {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional270=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional270) {
            if(self->mIfBlock) { come_call_finalizer2(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        }
        if(_if_conditional271=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional271) {
            if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
void* __result_obj__;
_Bool _if_conditional272;
struct sAndStatmentNode* __result110__;
void* right_value190;
struct sAndStatmentNode* result_184;
_Bool _if_conditional273;
void* right_value191;
struct sNode* __dec_obj84;
_Bool _if_conditional274;
void* right_value192;
struct sBlock* __dec_obj85;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value193;
char* __dec_obj86;
struct sAndStatmentNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
memset(&result_184, 0, sizeof(struct sAndStatmentNode*));
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
        if(_if_conditional272=self==(void*)0,        _if_conditional272) {
            __result110__ = __result_obj__ = (void*)0;
            return __result110__;
        }
        result_184=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(right_value190=(struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "struct sAndStatmentNode"))));
        if(right_value190) { come_call_finalizer2(sAndStatmentNode_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        if(_if_conditional273=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional273) {
            __dec_obj84=result_184->mExpressionNode;
            result_184->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value191=sNode_clone(self->mExpressionNode))));
            if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value191) { right_value191 = come_decrement_ref_count2(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional274=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional274) {
            __dec_obj85=result_184->mIfBlock;
            result_184->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value192=sBlock_clone(self->mIfBlock))));
            if(__dec_obj85) { come_call_finalizer2(sBlock_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            if(right_value192) { come_call_finalizer2(sBlock_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        }
        if(_if_conditional275=self!=((void*)0),        _if_conditional275) {
            result_184->sline=self->sline;
        }
        if(_if_conditional276=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional276) {
            __dec_obj86=result_184->sname;
            result_184->sname=(char*)come_increment_ref_count(((char*)(right_value193=string_clone(self->sname))));
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        __result111__ = __result_obj__ = result_184;
        if(result_184) { come_call_finalizer2(sAndStatmentNode_finalize,result_184, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
        return __result111__;
        if(result_184) { come_call_finalizer2(sAndStatmentNode_finalize,result_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

