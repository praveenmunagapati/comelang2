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




struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, struct sInfo* info){
void* __result_obj__;
void* right_value13;
char* __dec_obj6;
void* right_value15;
struct sNode* __dec_obj7;
void* right_value42;
struct sBlock* __dec_obj16;
void* right_value43;
struct list$1sNodeph* __dec_obj17;
void* right_value50;
struct list$1sBlockph* __dec_obj21;
_Bool _if_conditional104;
void* right_value51;
struct sBlock* __dec_obj22;
struct sBlock* __dec_obj23;
struct sIfNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
right_value15 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
right_value50 = (void*)0;
right_value51 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(info->sname))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj7=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value15=sNode_clone(expression_node))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count2(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value15) { right_value15 = come_decrement_ref_count2(right_value15, ((struct sNode*)right_value15)->finalize, ((struct sNode*)right_value15)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj16=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value42=sBlock_clone(if_block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj17=self->mElifExpressionNodes;
    self->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value43=list$1sNodephp_clone(elif_expression_nodes))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj21=self->mElifBlocks;
    self->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value50=list$1sBlockphp_clone(elif_blocks))));
    come_call_finalizer2(list$1sBlockph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sBlockphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mElifNum=elif_num;
    if(else_block) {
        __dec_obj22=self->mElseBlock;
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value51=sBlock_clone(else_block))));
        come_call_finalizer2(sBlock_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj23=self->mElseBlock;
        self->mElseBlock=((void*)0);
        come_call_finalizer2(sBlock_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result52__ = __result_obj__ = self;
    come_call_finalizer2(sIfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result52__;
    come_call_finalizer2(sIfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional5;
struct sNode* __result10__;
void* right_value14;
struct sNode* result_5;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
struct sNode* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_5, 0, sizeof(struct sNode*));
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result10__ = __result_obj__ = (void*)0;
            return __result10__;
        }
        result_5=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
        if(right_value14) { right_value14 = come_decrement_ref_count2(right_value14, ((struct sNode*)right_value14)->finalize, ((struct sNode*)right_value14)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
        __result11__ = __result_obj__ = result_5;
        if(result_5) { result_5 = come_decrement_ref_count2(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result11__;
        if(result_5) { result_5 = come_decrement_ref_count2(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional14;
struct sBlock* __result12__;
void* right_value16;
struct sBlock* result_6;
_Bool _if_conditional18;
void* right_value23;
struct list$1sNodeph* __dec_obj11;
_Bool _if_conditional22;
void* right_value41;
struct sVarTable* __dec_obj15;
struct sBlock* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_6, 0, sizeof(struct sBlock*));
right_value23 = (void*)0;
right_value41 = (void*)0;
        if(_if_conditional14=self==(void*)0,        _if_conditional14) {
            __result12__ = __result_obj__ = (void*)0;
            return __result12__;
        }
        result_6=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value16=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional18=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional18) {
            __dec_obj11=result_6->mNodes;
            result_6->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional22=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional22) {
            __dec_obj15=result_6->mVarTable;
            result_6->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value41=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result47__ = __result_obj__ = result_6;
        come_call_finalizer2(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result47__;
        come_call_finalizer2(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional15;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional15=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional17=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional17) {
                come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list$1sNodeph* __result13__;
void* right_value17;
void* right_value18;
struct list$1sNodeph* result_9;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
void* right_value22;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value17 = (void*)0;
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct list$1sNodeph*));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
right_value22 = (void*)0;
                if(_if_conditional19=self==((void*)0),                _if_conditional19) {
                    __result13__ = __result_obj__ = ((void*)0);
                    return __result13__;
                }
                result_9=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value18=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value17=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_10=self->head;
                while(_while_condtional2=it_10!=((void*)0),                _while_condtional2) {
                    list$1sNodeph_add(result_9,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value22=sNode_clone(it_10->item)))));
                    if(right_value22) { right_value22 = come_decrement_ref_count2(right_value22, ((struct sNode*)right_value22)->finalize, ((struct sNode*)right_value22)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_10=it_10->next;
                }
                __result16__ = __result_obj__ = result_9;
                come_call_finalizer2(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result16__;
                come_call_finalizer2(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result14__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result14__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional20;
void* right_value19;
struct list_item$1sNodeph* litem_11;
struct sNode* __dec_obj8;
_Bool _if_conditional21;
void* right_value20;
struct list_item$1sNodeph* litem_12;
struct sNode* __dec_obj9;
void* right_value21;
struct list_item$1sNodeph* litem_13;
struct sNode* __dec_obj10;
struct list$1sNodeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
memset(&litem_11, 0, sizeof(struct list_item$1sNodeph*));
right_value20 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1sNodeph*));
right_value21 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional20=self->len==0,                        _if_conditional20) {
                            litem_11=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value19=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                litem_12=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value20=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_12->prev=self->head;
                                litem_12->next=((void*)0);
                                __dec_obj9=litem_12->item;
                                litem_12->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count2(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_12;
                                self->head->next=litem_12;
                            }
                            else {
                                litem_13=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value21=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                        __result15__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result15__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional23;
struct sVarTable* __result17__;
void* right_value24;
struct sVarTable* result_14;
_Bool _if_conditional24;
void* right_value40;
struct map$2charphsVarph* __dec_obj14;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
struct sVarTable* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
memset(&result_14, 0, sizeof(struct sVarTable*));
right_value40 = (void*)0;
                if(_if_conditional23=self==(void*)0,                _if_conditional23) {
                    __result17__ = __result_obj__ = (void*)0;
                    return __result17__;
                }
                result_14=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value24=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional24=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional24) {
                    __dec_obj14=result_14->mVars;
                    result_14->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value40=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    result_14->mGlobal=self->mGlobal;
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_14->mParent=self->mParent;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    result_14->mID=self->mID;
                }
                __result46__ = __result_obj__ = result_14;
                come_call_finalizer2(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result46__;
                come_call_finalizer2(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional25;
struct map$2charphsVarph* __result18__;
void* right_value25;
void* right_value31;
struct map$2charphsVarph* result_24;
void* right_value32;
void* right_value33;
struct list$1charp* __dec_obj13;
char* it_27;
struct sVar* default_value_30;
struct sVar* it2_33;
struct map$2charphsVarph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
right_value31 = (void*)0;
memset(&result_24, 0, sizeof(struct map$2charphsVarph*));
right_value32 = (void*)0;
right_value33 = (void*)0;
memset(&it_27, 0, sizeof(char*));
memset(&default_value_30, 0, sizeof(struct sVar*));
memset(&it2_33, 0, sizeof(struct sVar*));
                        if(_if_conditional25=self==((void*)0),                        _if_conditional25) {
                            __result18__ = __result_obj__ = ((void*)0);
                            return __result18__;
                        }
                        result_24=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value31=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value25=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1177, "struct map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj13=result_24->key_list;
                        result_24->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value33=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value32=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1179, "struct list$1charp"))))))));
                        come_call_finalizer2(list$1charp_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charpp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charpp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        for(                        it_27=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_27=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_30,0,sizeof(struct sVar*));
                            it2_33=map$2charphsVarph_at(self,it_27,default_value_30);
                            map$2charphsVarph_insert2(result_24,it_27,it2_33);
                        }
                        __result45__ = __result_obj__ = result_24;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result45__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value26;
void* right_value27;
void* right_value28;
int i_19;
void* right_value29;
void* right_value30;
struct list$1charp* __dec_obj12;
struct map$2charphsVarph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value27 = (void*)0;
right_value28 = (void*)0;
memset(&i_19, 0, sizeof(int));
right_value29 = (void*)0;
right_value30 = (void*)0;
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value26=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1083, "char*"))));
                            right_value26 = come_decrement_ref_count2(right_value26, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value27=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1084, "struct sVar*"))));
                            come_call_finalizer2(sVar_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value28=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1085, "_Bool"))));
                            right_value28 = come_decrement_ref_count2(right_value28, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_19=0;                            i_19<1024;                            i_19++                            ){
                                self->item_existance[i_19]=(_Bool)0;
                            }
                            self->size=1024;
                            self->len=0;
                            __dec_obj12=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value30=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value29=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1095, "struct list$1charp"))))))));
                            come_call_finalizer2(list$1charp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charpp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charpp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->it=0;
                            __result20__ = __result_obj__ = self;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result20__;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional26=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional26) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional27=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional27) {
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional28=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional28) {
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional44=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional44) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional31=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional31) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional32=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional32) {
                                            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional33=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional33) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional35=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional35) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional36=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional36) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional37=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional37) {
                                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional39=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional39) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional40=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional40) {
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional41=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional41) {
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional42=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional42) {
                                            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional43=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional43) {
                                            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional30=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional30) {
                                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional34) {
                                                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional38=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional38) {
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
                                self->head=((void*)0);
                                self->tail=((void*)0);
                                self->len=0;
                                __result19__ = __result_obj__ = self;
                                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result19__;
                                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional45;
_Bool _if_conditional46;
int i_23;
_Bool _if_conditional47;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_22, 0, sizeof(int));
memset(&i_23, 0, sizeof(int));
                                for(                                i_22=0;                                i_22<self->size;                                i_22++                                ){
                                    if(_if_conditional45=self->item_existance[i_22],                                    _if_conditional45) {
                                        if(_if_conditional46=1,                                        _if_conditional46) {
                                            come_call_finalizer2(sVar_finalize,self->items[i_22], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                for(                                i_23=0;                                i_23<self->size;                                i_23++                                ){
                                    if(_if_conditional47=self->item_existance[i_23],                                    _if_conditional47) {
                                        if(_if_conditional48=1,                                        _if_conditional48) {
                                            self->keys[i_23] = come_decrement_ref_count2(self->keys[i_23], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->keys);
                                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional49;
char* result_25;
char* __result21__;
_Bool _if_conditional50;
char* __result22__;
char* result_26;
char* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_25, 0, sizeof(char*));
memset(&result_26, 0, sizeof(char*));
                            if(_if_conditional49=self==((void*)0),                            _if_conditional49) {
                                memset(&result_25,0,sizeof(char*));
                                __result21__ = __result_obj__ = result_25;
                                return __result21__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result22__ = __result_obj__ = self->key_list->it->item;
                                return __result22__;
                            }
                            memset(&result_26,0,sizeof(char*));
                            __result23__ = __result_obj__ = result_26;
                            return __result23__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result24__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result24__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result24__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional51;
char* result_28;
char* __result25__;
_Bool _if_conditional52;
char* __result26__;
char* result_29;
char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_28, 0, sizeof(char*));
memset(&result_29, 0, sizeof(char*));
                            if(_if_conditional51=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional51) {
                                memset(&result_28,0,sizeof(char*));
                                __result25__ = __result_obj__ = result_28;
                                return __result25__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result26__ = __result_obj__ = self->key_list->it->item;
                                return __result26__;
                            }
                            memset(&result_29,0,sizeof(char*));
                            __result27__ = __result_obj__ = result_29;
                            return __result27__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_31;
unsigned int it_32;
_Bool _while_condtional6;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sVar* __result28__;
_Bool _if_conditional55;
_Bool _if_conditional56;
struct sVar* __result29__;
struct sVar* __result30__;
struct sVar* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_31, 0, sizeof(unsigned int));
memset(&it_32, 0, sizeof(unsigned int));
                                hash_31=string_get_hash_key(((char*)key))%self->size;
                                it_32=hash_31;
                                while(_while_condtional6=(_Bool)1,                                _while_condtional6) {
                                    if(_if_conditional53=self->item_existance[it_32],                                    _if_conditional53) {
                                        if(_if_conditional54=string_equals(self->keys[it_32],key),                                        _if_conditional54) {
                                            __result28__ = __result_obj__ = self->items[it_32];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result28__;
                                        }
                                        it_32++;
                                        if(_if_conditional55=it_32>=self->size,                                        _if_conditional55) {
                                            it_32=0;
                                        }
                                        else {
                                            if(_if_conditional56=it_32==hash_31,                                            _if_conditional56) {
                                                __result29__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result29__;
                                            }
                                        }
                                    }
                                    else {
                                        __result30__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result30__;
                                    }
                                }
                                __result31__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result31__;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
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
_Bool _if_conditional92;
_Bool _if_conditional93;
struct map$2charphsVarph* __result44__;
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
                                                self->keys[it_46] = come_decrement_ref_count2(self->keys[it_46], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_46]);
                                                self->keys[it_46]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_46]);
                                                self->keys[it_46]=key;
                                            }
                                            if(_if_conditional83=1,                                            _if_conditional83) {
                                                come_call_finalizer2(sVar_finalize,self->items[it_46], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                for(                                it2_66=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_66=list$1charp_next(self->key_list)                                ){
                                    if(_if_conditional92=string_equals(it2_66,key),                                    _if_conditional92) {
                                        same_key_exist_63=(_Bool)1;
                                    }
                                }
                                if(_if_conditional93=!same_key_exist_63,                                _if_conditional93) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result44__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result44__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_34;
void* right_value34;
char** keys_35;
void* right_value35;
struct sVar** items_36;
void* right_value36;
_Bool* item_existance_37;
int len_38;
char* it_39;
struct sVar* default_value_40;
struct sVar* it2_41;
unsigned int hash_42;
int n_43;
_Bool _while_condtional7;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
struct sVar* default_value_44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_34, 0, sizeof(int));
right_value34 = (void*)0;
memset(&keys_35, 0, sizeof(char**));
right_value35 = (void*)0;
memset(&items_36, 0, sizeof(struct sVar**));
right_value36 = (void*)0;
memset(&item_existance_37, 0, sizeof(_Bool*));
memset(&len_38, 0, sizeof(int));
memset(&it_39, 0, sizeof(char*));
memset(&default_value_40, 0, sizeof(struct sVar*));
memset(&it2_41, 0, sizeof(struct sVar*));
memset(&hash_42, 0, sizeof(unsigned int));
memset(&n_43, 0, sizeof(int));
memset(&default_value_44, 0, sizeof(struct sVar*));
                                        size_34=self->size*10;
                                        keys_35=(char**)come_increment_ref_count(((char**)(right_value34=(char**)come_calloc(1, sizeof(char*)*(1*(size_34)), "./comelang2.h", 1334, "char*"))));
                                        right_value34 = come_decrement_ref_count2(right_value34, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_36=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value35=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_34)), "./comelang2.h", 1335, "struct sVar*"))));
                                        come_call_finalizer2(sVar_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        item_existance_37=(_Bool*)come_increment_ref_count(((_Bool*)(right_value36=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_34)), "./comelang2.h", 1336, "_Bool"))));
                                        right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_38=0;
                                        for(                                        it_39=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_39=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_40,0,sizeof(struct sVar*));
                                            it2_41=map$2charphsVarph_at(self,it_39,default_value_40);
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
                                                    items_36[n_43]=map$2charphsVarph_at(self,it_39,default_value_44);
                                                    len_38++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list$1charp* __result35__;
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
                                                    __result35__ = __result_obj__ = self;
                                                    return __result35__;
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
struct list$1charp* __result32__;
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
struct list$1charp* __result34__;
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
                                                                    __result32__ = __result_obj__ = self;
                                                                    return __result32__;
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
                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                                                __result34__ = __result_obj__ = self;
                                                                return __result34__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_50;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_51;
struct list$1charp* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_51, 0, sizeof(struct list_item$1charp*));
                                                                        it_50=self->head;
                                                                        while(_while_condtional10=it_50!=((void*)0),                                                                        _while_condtional10) {
                                                                            prev_it_51=it_50;
                                                                            it_50=it_50->next;
                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result33__ = __result_obj__ = self;
                                                                        return __result33__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional88;
char* result_64;
char* __result36__;
_Bool _if_conditional89;
char* __result37__;
char* result_65;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_64, 0, sizeof(char*));
memset(&result_65, 0, sizeof(char*));
                                    if(_if_conditional88=self==((void*)0),                                    _if_conditional88) {
                                        memset(&result_64,0,sizeof(char*));
                                        __result36__ = __result_obj__ = result_64;
                                        return __result36__;
                                    }
                                    self->it=self->head;
                                    if(self->it) {
                                        __result37__ = __result_obj__ = self->it->item;
                                        return __result37__;
                                    }
                                    memset(&result_65,0,sizeof(char*));
                                    __result38__ = __result_obj__ = result_65;
                                    return __result38__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result39__ = self==((void*)0)||self->it==((void*)0);
                                    return __result39__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional90;
char* result_67;
char* __result40__;
_Bool _if_conditional91;
char* __result41__;
char* result_68;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_67, 0, sizeof(char*));
memset(&result_68, 0, sizeof(char*));
                                    if(_if_conditional90=self==((void*)0)||self->it==((void*)0),                                    _if_conditional90) {
                                        memset(&result_67,0,sizeof(char*));
                                        __result40__ = __result_obj__ = result_67;
                                        return __result40__;
                                    }
                                    self->it=self->it->next;
                                    if(self->it) {
                                        __result41__ = __result_obj__ = self->it->item;
                                        return __result41__;
                                    }
                                    memset(&result_68,0,sizeof(char*));
                                    __result42__ = __result_obj__ = result_68;
                                    return __result42__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional94;
void* right_value37;
struct list_item$1charp* litem_69;
_Bool _if_conditional95;
void* right_value38;
struct list_item$1charp* litem_70;
void* right_value39;
struct list_item$1charp* litem_71;
struct list$1charp* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1charp*));
right_value38 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1charp*));
right_value39 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional94=self->len==0,                                        _if_conditional94) {
                                            litem_69=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value37=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 225, "struct list_item$1charp"))));
                                            come_call_finalizer2(list_item$1charpp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            litem_69->prev=((void*)0);
                                            litem_69->next=((void*)0);
                                            litem_69->item=item;
                                            self->tail=litem_69;
                                            self->head=litem_69;
                                        }
                                        else {
                                            if(_if_conditional95=self->len==1,                                            _if_conditional95) {
                                                litem_70=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value38=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 235, "struct list_item$1charp"))));
                                                come_call_finalizer2(list_item$1charpp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                litem_70->prev=self->head;
                                                litem_70->next=((void*)0);
                                                litem_70->item=item;
                                                self->tail=litem_70;
                                                self->head->next=litem_70;
                                            }
                                            else {
                                                litem_71=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value39=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 245, "struct list_item$1charp"))));
                                                come_call_finalizer2(list_item$1charpp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                litem_71->prev=self->tail;
                                                litem_71->next=((void*)0);
                                                litem_71->item=item;
                                                self->tail->next=litem_71;
                                                self->tail=litem_71;
                                            }
                                        }
                                        self->len++;
                                        __result43__ = __result_obj__ = self;
                                        return __result43__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional96;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional96=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional96) {
                            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__;
_Bool _if_conditional100;
struct list$1sBlockph* __result48__;
void* right_value44;
void* right_value45;
struct list$1sBlockph* result_74;
struct list_item$1sBlockph* it_75;
_Bool _while_condtional15;
void* right_value49;
struct list$1sBlockph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
right_value45 = (void*)0;
memset(&result_74, 0, sizeof(struct list$1sBlockph*));
memset(&it_75, 0, sizeof(struct list_item$1sBlockph*));
right_value49 = (void*)0;
        if(_if_conditional100=self==((void*)0),        _if_conditional100) {
            __result48__ = __result_obj__ = ((void*)0);
            return __result48__;
        }
        result_74=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value45=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value44=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang2.h", 141, "struct list$1sBlockph"))))))));
        come_call_finalizer2(list$1sBlockphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sBlockphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_75=self->head;
        while(_while_condtional15=it_75!=((void*)0),        _while_condtional15) {
            list$1sBlockph_add(result_74,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value49=sBlock_clone(it_75->item)))));
            come_call_finalizer2(sBlock_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_75=it_75->next;
        }
        __result51__ = __result_obj__ = result_74;
        come_call_finalizer2(list$1sBlockphp_finalize,result_74, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result51__;
        come_call_finalizer2(list$1sBlockphp_finalize,result_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__;
struct list$1sBlockph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result49__ = __result_obj__ = self;
            come_call_finalizer2(list$1sBlockphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result49__;
            come_call_finalizer2(list$1sBlockphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
void* __result_obj__;
struct list_item$1sBlockph* it_72;
_Bool _while_condtional14;
struct list_item$1sBlockph* prev_it_73;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_72, 0, sizeof(struct list_item$1sBlockph*));
memset(&prev_it_73, 0, sizeof(struct list_item$1sBlockph*));
                it_72=self->head;
                while(_while_condtional14=it_72!=((void*)0),                _while_condtional14) {
                    prev_it_73=it_72;
                    it_72=it_72->next;
                    come_call_finalizer2(list_item$1sBlockphp_finalize,prev_it_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
void* __result_obj__;
_Bool _if_conditional101;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional101=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional101) {
                            come_call_finalizer2(sBlock_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__;
_Bool _if_conditional102;
void* right_value46;
struct list_item$1sBlockph* litem_76;
struct sBlock* __dec_obj18;
_Bool _if_conditional103;
void* right_value47;
struct list_item$1sBlockph* litem_77;
struct sBlock* __dec_obj19;
void* right_value48;
struct list_item$1sBlockph* litem_78;
struct sBlock* __dec_obj20;
struct list$1sBlockph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1sBlockph*));
right_value47 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1sBlockph*));
right_value48 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1sBlockph*));
                if(_if_conditional102=self->len==0,                _if_conditional102) {
                    litem_76=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value46=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 155, "struct list_item$1sBlockph"))));
                    come_call_finalizer2(list_item$1sBlockphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_76->prev=((void*)0);
                    litem_76->next=((void*)0);
                    __dec_obj18=litem_76->item;
                    litem_76->item=(struct sBlock*)come_increment_ref_count(item);
                    come_call_finalizer2(sBlock_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_76;
                    self->head=litem_76;
                }
                else {
                    if(_if_conditional103=self->len==1,                    _if_conditional103) {
                        litem_77=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value47=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 165, "struct list_item$1sBlockph"))));
                        come_call_finalizer2(list_item$1sBlockphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_77->prev=self->head;
                        litem_77->next=((void*)0);
                        __dec_obj19=litem_77->item;
                        litem_77->item=(struct sBlock*)come_increment_ref_count(item);
                        come_call_finalizer2(sBlock_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_77;
                        self->head->next=litem_77;
                    }
                    else {
                        litem_78=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value48=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 175, "struct list_item$1sBlockph"))));
                        come_call_finalizer2(list_item$1sBlockphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_78->prev=self->tail;
                        litem_78->next=((void*)0);
                        __dec_obj20=litem_78->item;
                        litem_78->item=(struct sBlock*)come_increment_ref_count(item);
                        come_call_finalizer2(sBlock_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_78;
                        self->tail=litem_78;
                    }
                }
                self->len++;
                __result50__ = __result_obj__ = self;
                come_call_finalizer2(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result50__;
                come_call_finalizer2(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sIfNode_terminated(){
void* __result_obj__;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = (_Bool)1;
    return __result53__;
}

char* sIfNode_kind(){
void* __result_obj__;
void* right_value52;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
    __result54__ = __result_obj__ = ((char*)(right_value52=__builtin_string("sIfNode")));
    right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
void* __result_obj__;
struct sBlock* else_block_79;
int elif_num_80;
struct sNode* expression_node_81;
int sline_82;
char* sname_83;
_Bool _if_conditional111;
_Bool __result55__;
struct sBlock* if_block_84;
static int num_if_conditional_85=0;
int num_if_conditional_stack_86;
_Bool normal_if_87;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
void* right_value53;
struct CVALUE* conditional_value_88;
void* right_value54;
struct CVALUE* conditional_value_89;
_Bool _if_conditional117;
int i_90;
struct sNode* expression_node2_94;
_Bool _if_conditional120;
_Bool __result58__;
struct sBlock* elif_node_block_98;
_Bool normal_if_99;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value55;
struct CVALUE* conditional_value_100;
void* right_value56;
struct CVALUE* conditional_value_101;
static int num_elif_conditional_102=0;
int num_elif_conditional_stack_103;
_Bool _if_conditional126;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&else_block_79, 0, sizeof(struct sBlock*));
memset(&elif_num_80, 0, sizeof(int));
memset(&expression_node_81, 0, sizeof(struct sNode*));
memset(&sline_82, 0, sizeof(int));
memset(&sname_83, 0, sizeof(char*));
memset(&if_block_84, 0, sizeof(struct sBlock*));
memset(&num_if_conditional_stack_86, 0, sizeof(int));
memset(&normal_if_87, 0, sizeof(_Bool));
right_value53 = (void*)0;
memset(&conditional_value_88, 0, sizeof(struct CVALUE*));
right_value54 = (void*)0;
memset(&conditional_value_89, 0, sizeof(struct CVALUE*));
memset(&i_90, 0, sizeof(int));
memset(&expression_node2_94, 0, sizeof(struct sNode*));
memset(&elif_node_block_98, 0, sizeof(struct sBlock*));
memset(&normal_if_99, 0, sizeof(_Bool));
right_value55 = (void*)0;
memset(&conditional_value_100, 0, sizeof(struct CVALUE*));
right_value56 = (void*)0;
memset(&conditional_value_101, 0, sizeof(struct CVALUE*));
memset(&num_elif_conditional_stack_103, 0, sizeof(int));
    else_block_79=self->mElseBlock;
    elif_num_80=self->mElifNum;
    expression_node_81=self->mExpressionNode;
    sline_82=info->sline;
    sname_83=info->sname;
    info->writing_source_file_position=(_Bool)1;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional111=!node_compile(expression_node_81,info),    _if_conditional111) {
        __result55__ = (_Bool)0;
        return __result55__;
    }
    info->without_semicolon=(_Bool)0;
    if_block_84=self->mIfBlock;
    add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_85);
    num_if_conditional_stack_86=num_if_conditional_85;
    normal_if_87=(_Bool)1;
    if(_if_conditional112=info->module->mLastCode||info->module->mLastCode2||info->module->mLastCode3,    _if_conditional112) {
        normal_if_87=(_Bool)0;
    }
    if(_if_conditional113=existance_free_right_value_objects(info),    _if_conditional113) {
        normal_if_87=(_Bool)0;
    }
    if(normal_if_87) {
        conditional_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value53=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        add_come_code(info,"if(%s) {\n",conditional_value_88->c_value);
        come_call_finalizer2(CVALUE_finalize,conditional_value_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        conditional_value_89=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value54=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        add_come_code(info,"if(_if_conditional%d=%s,",num_if_conditional_85,conditional_value_89->c_value);
        add_last_code_to_source_with_comma(info);
        free_right_value_objects(info,(_Bool)1);
        add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_86);
        come_call_finalizer2(CVALUE_finalize,conditional_value_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    transpile_block(if_block_84,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    if(_if_conditional117=elif_num_80>0,    _if_conditional117) {
        for(        i_90=0;        i_90<elif_num_80;        i_90++        ){
            expression_node2_94=list$1sNodephp_operator_load_element(self->mElifExpressionNodes,i_90);
            info->writing_source_file_position=(_Bool)1;
            info->without_semicolon=(_Bool)1;
            if(_if_conditional120=!node_compile(expression_node2_94,info),            _if_conditional120) {
                __result58__ = (_Bool)0;
                return __result58__;
            }
            info->without_semicolon=(_Bool)0;
            elif_node_block_98=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_90);
            normal_if_99=(_Bool)1;
            if(_if_conditional123=info->module->mLastCode||info->module->mLastCode2||info->module->mLastCode3,            _if_conditional123) {
                normal_if_99=(_Bool)0;
            }
            if(_if_conditional124=existance_free_right_value_objects(info),            _if_conditional124) {
                normal_if_99=(_Bool)0;
            }
            if(normal_if_99) {
                conditional_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value55=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                add_come_code(info,"else if(%s) {\n",conditional_value_100->c_value);
                come_call_finalizer2(CVALUE_finalize,conditional_value_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                conditional_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value56=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_102);
                num_elif_conditional_stack_103=num_elif_conditional_102;
                add_come_code(info,"else if(_elif_conditional%d=%s,",num_elif_conditional_102,conditional_value_101->c_value);
                add_last_code_to_source_with_comma(info);
                free_right_value_objects(info,(_Bool)1);
                add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_103);
                come_call_finalizer2(CVALUE_finalize,conditional_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            transpile_block(elif_node_block_98,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
            add_come_code(info,"}\n");
        }
    }
    if(else_block_79) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_79,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    __result61__ = (_Bool)1;
    return __result61__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional115;
_Bool _if_conditional116;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional115=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional115) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional116=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional116) {
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional118;
struct list_item$1sNodeph* it_91;
int i_92;
_Bool _while_condtional16;
_Bool _if_conditional119;
struct sNode* __result56__;
struct sNode* default_value_93;
struct sNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_91, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_92, 0, sizeof(int));
memset(&default_value_93, 0, sizeof(struct sNode*));
                if(_if_conditional118=position<0,                _if_conditional118) {
                    position+=self->len;
                }
                it_91=self->head;
                i_92=0;
                while(_while_condtional16=it_91!=((void*)0),                _while_condtional16) {
                    if(_if_conditional119=position==i_92,                    _if_conditional119) {
                        __result56__ = __result_obj__ = it_91->item;
                        return __result56__;
                    }
                    it_91=it_91->next;
                    i_92++;
                }
                memset(&default_value_93,0,sizeof(struct sNode*));
                __result57__ = __result_obj__ = default_value_93;
                if(default_value_93) { default_value_93 = come_decrement_ref_count2(default_value_93, ((struct sNode*)default_value_93)->finalize, ((struct sNode*)default_value_93)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result57__;
                if(default_value_93) { default_value_93 = come_decrement_ref_count2(default_value_93, ((struct sNode*)default_value_93)->finalize, ((struct sNode*)default_value_93)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__;
_Bool _if_conditional121;
struct list_item$1sBlockph* it_95;
int i_96;
_Bool _while_condtional17;
_Bool _if_conditional122;
struct sBlock* __result59__;
struct sBlock* default_value_97;
struct sBlock* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_95, 0, sizeof(struct list_item$1sBlockph*));
memset(&i_96, 0, sizeof(int));
memset(&default_value_97, 0, sizeof(struct sBlock*));
                if(_if_conditional121=position<0,                _if_conditional121) {
                    position+=self->len;
                }
                it_95=self->head;
                i_96=0;
                while(_while_condtional17=it_95!=((void*)0),                _while_condtional17) {
                    if(_if_conditional122=position==i_96,                    _if_conditional122) {
                        __result59__ = __result_obj__ = it_95->item;
                        return __result59__;
                    }
                    it_95=it_95->next;
                    i_96++;
                }
                memset(&default_value_97,0,sizeof(struct sBlock*));
                __result60__ = __result_obj__ = default_value_97;
                come_call_finalizer2(sBlock_finalize,default_value_97, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result60__;
                come_call_finalizer2(sBlock_finalize,default_value_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sIfNode_sline(struct sIfNode* self, struct sInfo* info){
void* __result_obj__;
int __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    __result62__ = self->sline;
    return __result62__;
}

char* sIfNode_sname(struct sIfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value57;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
    __result63__ = __result_obj__ = ((char*)(right_value57=__builtin_string(self->sname)));
    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__;
void* right_value58;
char* __dec_obj24;
void* right_value59;
struct sNode* __dec_obj25;
void* right_value60;
struct sBlock* __dec_obj26;
struct sOrStatmentNode* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
    self->sline=info->sline;
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value58=__builtin_string(info->sname))));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj25=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value59=sNode_clone(expression_node))));
    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value59) { right_value59 = come_decrement_ref_count2(right_value59, ((struct sNode*)right_value59)->finalize, ((struct sNode*)right_value59)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj26=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value60=sBlock_clone(if_block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result64__ = __result_obj__ = self;
    come_call_finalizer2(sOrStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result64__;
    come_call_finalizer2(sOrStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrStatmentNode_terminated(){
void* __result_obj__;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
    __result65__ = (_Bool)1;
    return __result65__;
}

char* sOrStatmentNode_kind(){
void* __result_obj__;
void* right_value61;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
    __result66__ = __result_obj__ = ((char*)(right_value61=__builtin_string("sOrStatmentNode")));
    right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* expression_node_104;
_Bool _if_conditional130;
_Bool __result67__;
void* right_value62;
struct CVALUE* conditional_value_105;
struct sBlock* if_block_106;
static int num_or_conditional_107=0;
int num_or_conditional_stack_108;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&expression_node_104, 0, sizeof(struct sNode*));
right_value62 = (void*)0;
memset(&conditional_value_105, 0, sizeof(struct CVALUE*));
memset(&if_block_106, 0, sizeof(struct sBlock*));
memset(&num_or_conditional_stack_108, 0, sizeof(int));
    expression_node_104=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional130=!node_compile(expression_node_104,info),    _if_conditional130) {
        __result67__ = (_Bool)0;
        return __result67__;
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value62=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if_block_106=self->mIfBlock;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_107);
    add_come_code(info,"if(_or_conditional%d=%s,",num_or_conditional_107,conditional_value_105->c_value);
    num_or_conditional_stack_108=num_or_conditional_107;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_or_conditional%d != 0) {\n",num_or_conditional_stack_108);
    transpile_block(if_block_106,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result68__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,conditional_value_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result68__;
    come_call_finalizer2(CVALUE_finalize,conditional_value_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sOrStatmentNode_sline(struct sOrStatmentNode* self, struct sInfo* info){
void* __result_obj__;
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
    __result69__ = self->sline;
    return __result69__;
}

char* sOrStatmentNode_sname(struct sOrStatmentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value63;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
    __result70__ = __result_obj__ = ((char*)(right_value63=__builtin_string(self->sname)));
    right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__;
void* right_value64;
char* __dec_obj27;
void* right_value65;
struct sNode* __dec_obj28;
void* right_value66;
struct sBlock* __dec_obj29;
struct sAndStatmentNode* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
right_value65 = (void*)0;
right_value66 = (void*)0;
    self->sline=info->sline;
    __dec_obj27=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value64=__builtin_string(info->sname))));
    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj28=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value65=sNode_clone(expression_node))));
    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value65) { right_value65 = come_decrement_ref_count2(right_value65, ((struct sNode*)right_value65)->finalize, ((struct sNode*)right_value65)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj29=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value66=sBlock_clone(if_block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result71__ = __result_obj__ = self;
    come_call_finalizer2(sAndStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result71__;
    come_call_finalizer2(sAndStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndStatmentNode_terminated(){
void* __result_obj__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    __result72__ = (_Bool)1;
    return __result72__;
}

char* sAndStatmentNode_kind(){
void* __result_obj__;
void* right_value67;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
    __result73__ = __result_obj__ = ((char*)(right_value67=__builtin_string("sAndStatmentNode")));
    right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result73__;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* expression_node_109;
_Bool _if_conditional134;
_Bool __result74__;
void* right_value68;
struct CVALUE* conditional_value_110;
struct sBlock* if_block_111;
static int num_and_conditional_112=0;
int num_and_conditional_stack_113;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&expression_node_109, 0, sizeof(struct sNode*));
right_value68 = (void*)0;
memset(&conditional_value_110, 0, sizeof(struct CVALUE*));
memset(&if_block_111, 0, sizeof(struct sBlock*));
memset(&num_and_conditional_stack_113, 0, sizeof(int));
    expression_node_109=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional134=!node_compile(expression_node_109,info),    _if_conditional134) {
        __result74__ = (_Bool)0;
        return __result74__;
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value68=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if_block_111=self->mIfBlock;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_112);
    add_come_code(info,"if(_and_conditional%d=%s,",num_and_conditional_112,conditional_value_110->c_value);
    num_and_conditional_stack_113=num_and_conditional_112;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_and_conditional%d == 0) {\n",num_and_conditional_stack_113);
    transpile_block(if_block_111,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result75__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,conditional_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result75__;
    come_call_finalizer2(CVALUE_finalize,conditional_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAndStatmentNode_sline(struct sAndStatmentNode* self, struct sInfo* info){
void* __result_obj__;
int __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    __result76__ = self->sline;
    return __result76__;
}

char* sAndStatmentNode_sname(struct sAndStatmentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value69;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
    __result77__ = __result_obj__ = ((char*)(right_value69=__builtin_string(self->sname)));
    right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
void* right_value70;
char* sname_114;
int sline_115;
void* right_value71;
struct sBlock* if_block_116;
void* right_value72;
void* right_value73;
struct list$1sNodeph* elif_expression_nodes_117;
void* right_value74;
void* right_value75;
struct list$1sBlockph* elif_blocks_118;
int elif_num_119;
struct sBlock* else_block_120;
_Bool _while_condtional18;
char* saved_p_121;
int saved_sline_122;
_Bool _if_conditional135;
void* right_value76;
char* buf_123;
_Bool _if_conditional136;
_Bool _if_conditional137;
void* right_value77;
struct sNode* expression_node_124;
void* right_value81;
struct sBlock* elif_block_128;
void* right_value85;
struct sBlock* __dec_obj36;
void* right_value86;
void* right_value87;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* right_value95;
struct sNode* result_133;
struct sNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
memset(&sname_114, 0, sizeof(char*));
memset(&sline_115, 0, sizeof(int));
right_value71 = (void*)0;
memset(&if_block_116, 0, sizeof(struct sBlock*));
right_value72 = (void*)0;
right_value73 = (void*)0;
memset(&elif_expression_nodes_117, 0, sizeof(struct list$1sNodeph*));
right_value74 = (void*)0;
right_value75 = (void*)0;
memset(&elif_blocks_118, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_119, 0, sizeof(int));
memset(&else_block_120, 0, sizeof(struct sBlock*));
memset(&saved_p_121, 0, sizeof(char*));
memset(&saved_sline_122, 0, sizeof(int));
right_value76 = (void*)0;
memset(&buf_123, 0, sizeof(char*));
right_value77 = (void*)0;
memset(&expression_node_124, 0, sizeof(struct sNode*));
right_value81 = (void*)0;
memset(&elif_block_128, 0, sizeof(struct sBlock*));
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value95 = (void*)0;
memset(&result_133, 0, sizeof(struct sNode*));
    sname_114=(char*)come_increment_ref_count(((char*)(right_value70=string_clone(info->sname))));
    right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_115=info->sline;
    parse_sharp_v5(info);
    if_block_116=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value71=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    elif_expression_nodes_117=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value73=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value72=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 340, "struct list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    elif_blocks_118=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value75=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value74=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 342, "struct list$1sBlockph"))))))));
    come_call_finalizer2(list$1sBlockphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sBlockphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    elif_num_119=0;
    else_block_120=((void*)0);
    while(_while_condtional18=1,    _while_condtional18) {
        saved_p_121=info->p;
        saved_sline_122=info->sline;
        parse_sharp_v5(info);
        if(_if_conditional135=!xisalpha(*info->p),        _if_conditional135) {
            break;
        }
        parse_sharp_v5(info);
        buf_123=(char*)come_increment_ref_count(((char*)(right_value76=parse_word(info))));
        right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional136=string_operator_equals(buf_123,"else"),        _if_conditional136) {
            if(_if_conditional137=parsecmp("if",info),            _if_conditional137) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_124=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=expression_v13(info))));
                if(right_value77) { right_value77 = come_decrement_ref_count2(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                list$1sNodeph_push_back(elif_expression_nodes_117,(struct sNode*)come_increment_ref_count(expression_node_124));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_128=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value81=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1sBlockph_push_back(elif_blocks_118,(struct sBlock*)come_increment_ref_count(elif_block_128));
                elif_num_119++;
                if(expression_node_124) { expression_node_124 = come_decrement_ref_count2(expression_node_124, ((struct sNode*)expression_node_124)->finalize, ((struct sNode*)expression_node_124)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sBlock_finalize,elif_block_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj36=else_block_120;
                else_block_120=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value85=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                buf_123 = come_decrement_ref_count2(buf_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_121;
            info->sline=saved_sline_122;
            buf_123 = come_decrement_ref_count2(buf_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_123 = come_decrement_ref_count2(buf_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 397, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sIfNode*)(right_value87=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value86=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 397, "struct sIfNode")))),(struct sNode*)come_increment_ref_count(expression_node),if_block_116,elif_expression_nodes_117,elif_blocks_118,elif_num_119,else_block_120,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sIfNode_sline;
    _inf_value1->sname=(void*)sIfNode_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    result_133=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value95=_inf_value1)));
    come_call_finalizer2(sIfNode_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sIfNode_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value95) { right_value95 = come_decrement_ref_count2(right_value95, ((struct sNode*)right_value95)->finalize, ((struct sNode*)right_value95)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result82__ = __result_obj__ = result_133;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_114 = come_decrement_ref_count2(sname_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,if_block_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,else_block_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(result_133) { result_133 = come_decrement_ref_count2(result_133, ((struct sNode*)result_133)->finalize, ((struct sNode*)result_133)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result82__;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_114 = come_decrement_ref_count2(sname_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,if_block_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,else_block_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(result_133) { result_133 = come_decrement_ref_count2(result_133, ((struct sNode*)result_133)->finalize, ((struct sNode*)result_133)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional138;
void* right_value78;
struct list_item$1sNodeph* litem_125;
struct sNode* __dec_obj30;
_Bool _if_conditional139;
void* right_value79;
struct list_item$1sNodeph* litem_126;
struct sNode* __dec_obj31;
void* right_value80;
struct list_item$1sNodeph* litem_127;
struct sNode* __dec_obj32;
struct list$1sNodeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
memset(&litem_125, 0, sizeof(struct list_item$1sNodeph*));
right_value79 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1sNodeph*));
right_value80 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional138=self->len==0,                    _if_conditional138) {
                        litem_125=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value78=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 225, "struct list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_125->prev=((void*)0);
                        litem_125->next=((void*)0);
                        __dec_obj30=litem_125->item;
                        litem_125->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_125;
                        self->head=litem_125;
                    }
                    else {
                        if(_if_conditional139=self->len==1,                        _if_conditional139) {
                            litem_126=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value79=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 235, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_126->prev=self->head;
                            litem_126->next=((void*)0);
                            __dec_obj31=litem_126->item;
                            litem_126->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_126;
                            self->head->next=litem_126;
                        }
                        else {
                            litem_127=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value80=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 245, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_127->prev=self->tail;
                            litem_127->next=((void*)0);
                            __dec_obj32=litem_127->item;
                            litem_127->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail->next=litem_127;
                            self->tail=litem_127;
                        }
                    }
                    self->len++;
                    __result78__ = __result_obj__ = self;
                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result78__;
                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__;
_Bool _if_conditional140;
void* right_value82;
struct list_item$1sBlockph* litem_129;
struct sBlock* __dec_obj33;
_Bool _if_conditional141;
void* right_value83;
struct list_item$1sBlockph* litem_130;
struct sBlock* __dec_obj34;
void* right_value84;
struct list_item$1sBlockph* litem_131;
struct sBlock* __dec_obj35;
struct list$1sBlockph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&litem_129, 0, sizeof(struct list_item$1sBlockph*));
right_value83 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1sBlockph*));
right_value84 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1sBlockph*));
                    if(_if_conditional140=self->len==0,                    _if_conditional140) {
                        litem_129=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value82=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 225, "struct list_item$1sBlockph"))));
                        come_call_finalizer2(list_item$1sBlockphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_129->prev=((void*)0);
                        litem_129->next=((void*)0);
                        __dec_obj33=litem_129->item;
                        litem_129->item=(struct sBlock*)come_increment_ref_count(item);
                        come_call_finalizer2(sBlock_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_129;
                        self->head=litem_129;
                    }
                    else {
                        if(_if_conditional141=self->len==1,                        _if_conditional141) {
                            litem_130=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value83=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 235, "struct list_item$1sBlockph"))));
                            come_call_finalizer2(list_item$1sBlockphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_130->prev=self->head;
                            litem_130->next=((void*)0);
                            __dec_obj34=litem_130->item;
                            litem_130->item=(struct sBlock*)come_increment_ref_count(item);
                            come_call_finalizer2(sBlock_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_130;
                            self->head->next=litem_130;
                        }
                        else {
                            litem_131=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value84=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 245, "struct list_item$1sBlockph"))));
                            come_call_finalizer2(list_item$1sBlockphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_131->prev=self->tail;
                            litem_131->next=((void*)0);
                            __dec_obj35=litem_131->item;
                            litem_131->item=(struct sBlock*)come_increment_ref_count(item);
                            come_call_finalizer2(sBlock_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_131;
                            self->tail=litem_131;
                        }
                    }
                    self->len++;
                    __result79__ = __result_obj__ = self;
                    come_call_finalizer2(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result79__;
                    come_call_finalizer2(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
void* right_value96;
char* sname_134;
int sline_135;
void* right_value97;
struct sNode* expression_node2_136;
void* right_value98;
struct sBlock* if_block_137;
void* right_value99;
void* right_value100;
struct list$1sNodeph* elif_expression_nodes_138;
void* right_value101;
void* right_value102;
struct list$1sBlockph* elif_blocks_139;
int elif_num_140;
struct sBlock* else_block_141;
_Bool _while_condtional19;
char* saved_p_142;
int saved_sline_143;
_Bool _if_conditional157;
void* right_value103;
char* buf_144;
_Bool _if_conditional158;
_Bool _if_conditional159;
void* right_value104;
struct sNode* expression_node_145;
void* right_value105;
struct sBlock* elif_block_146;
void* right_value106;
struct sBlock* __dec_obj43;
void* right_value107;
void* right_value108;
struct sNode* _inf_value2;
struct sIfNode* _inf_obj_value2;
void* right_value116;
struct sNode* result_148;
struct sNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&sname_134, 0, sizeof(char*));
memset(&sline_135, 0, sizeof(int));
right_value97 = (void*)0;
memset(&expression_node2_136, 0, sizeof(struct sNode*));
right_value98 = (void*)0;
memset(&if_block_137, 0, sizeof(struct sBlock*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&elif_expression_nodes_138, 0, sizeof(struct list$1sNodeph*));
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&elif_blocks_139, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_140, 0, sizeof(int));
memset(&else_block_141, 0, sizeof(struct sBlock*));
memset(&saved_p_142, 0, sizeof(char*));
memset(&saved_sline_143, 0, sizeof(int));
right_value103 = (void*)0;
memset(&buf_144, 0, sizeof(char*));
right_value104 = (void*)0;
memset(&expression_node_145, 0, sizeof(struct sNode*));
right_value105 = (void*)0;
memset(&elif_block_146, 0, sizeof(struct sBlock*));
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value116 = (void*)0;
memset(&result_148, 0, sizeof(struct sNode*));
    sname_134=(char*)come_increment_ref_count(((char*)(right_value96=string_clone(info->sname))));
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_135=info->sline;
    parse_sharp_v5(info);
    expression_node2_136=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=craete_logical_denial((struct sNode*)come_increment_ref_count(expression_node),info))));
    if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if_block_137=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value98=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    elif_expression_nodes_138=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value99=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 413, "struct list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    elif_blocks_139=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value102=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value101=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 415, "struct list$1sBlockph"))))))));
    come_call_finalizer2(list$1sBlockphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sBlockphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    elif_num_140=0;
    else_block_141=((void*)0);
    while(_while_condtional19=1,    _while_condtional19) {
        saved_p_142=info->p;
        saved_sline_143=info->sline;
        parse_sharp_v5(info);
        if(_if_conditional157=!xisalpha(*info->p),        _if_conditional157) {
            break;
        }
        parse_sharp_v5(info);
        buf_144=(char*)come_increment_ref_count(((char*)(right_value103=parse_word(info))));
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional158=string_operator_equals(buf_144,"else"),        _if_conditional158) {
            if(_if_conditional159=parsecmp("if",info),            _if_conditional159) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_145=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=expression_v13(info))));
                if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                list$1sNodeph_push_back(elif_expression_nodes_138,(struct sNode*)come_increment_ref_count(expression_node_145));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_146=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value105=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1sBlockph_push_back(elif_blocks_139,(struct sBlock*)come_increment_ref_count(elif_block_146));
                elif_num_140++;
                if(expression_node_145) { expression_node_145 = come_decrement_ref_count2(expression_node_145, ((struct sNode*)expression_node_145)->finalize, ((struct sNode*)expression_node_145)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sBlock_finalize,elif_block_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj43=else_block_141;
                else_block_141=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value106=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                buf_144 = come_decrement_ref_count2(buf_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_142;
            info->sline=saved_sline_143;
            buf_144 = come_decrement_ref_count2(buf_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_144 = come_decrement_ref_count2(buf_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 470, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sIfNode*)(right_value108=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value107=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 470, "struct sIfNode")))),(struct sNode*)come_increment_ref_count(expression_node2_136),if_block_137,elif_expression_nodes_138,elif_blocks_139,elif_num_140,else_block_141,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sIfNode_finalize;
    _inf_value2->clone=(void*)sIfNode_clone;
    _inf_value2->compile=(void*)sIfNode_compile;
    _inf_value2->sline=(void*)sIfNode_sline;
    _inf_value2->sname=(void*)sIfNode_sname;
    _inf_value2->terminated=(void*)sIfNode_terminated;
    _inf_value2->kind=(void*)sIfNode_kind;
    result_148=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=_inf_value2)));
    come_call_finalizer2(sIfNode_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sIfNode_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result85__ = __result_obj__ = result_148;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_134 = come_decrement_ref_count2(sname_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(expression_node2_136) { expression_node2_136 = come_decrement_ref_count2(expression_node2_136, ((struct sNode*)expression_node2_136)->finalize, ((struct sNode*)expression_node2_136)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sBlock_finalize,if_block_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,else_block_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(result_148) { result_148 = come_decrement_ref_count2(result_148, ((struct sNode*)result_148)->finalize, ((struct sNode*)result_148)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result85__;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_134 = come_decrement_ref_count2(sname_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(expression_node2_136) { expression_node2_136 = come_decrement_ref_count2(expression_node2_136, ((struct sNode*)expression_node2_136)->finalize, ((struct sNode*)expression_node2_136)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sBlock_finalize,if_block_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,else_block_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(result_148) { result_148 = come_decrement_ref_count2(result_148, ((struct sNode*)result_148)->finalize, ((struct sNode*)result_148)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional175;
void* right_value117;
char* sname_149;
int sline_150;
void* right_value118;
struct sNode* expression_node_151;
void* right_value119;
struct sBlock* if_block_152;
void* right_value120;
void* right_value121;
struct list$1sNodeph* elif_expression_nodes_153;
void* right_value122;
void* right_value123;
struct list$1sBlockph* elif_blocks_154;
int elif_num_155;
struct sBlock* else_block_156;
_Bool _while_condtional20;
char* saved_p_157;
int saved_sline_158;
_Bool _if_conditional176;
void* right_value124;
char* buf_159;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value125;
struct sNode* expression_node_160;
void* right_value126;
struct sBlock* elif_block_161;
void* right_value127;
struct sBlock* __dec_obj50;
void* right_value128;
void* right_value129;
struct sNode* _inf_value3;
struct sIfNode* _inf_obj_value3;
void* right_value137;
struct sNode* result_163;
struct sNode* __result88__;
void* right_value138;
struct sNode* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&sname_149, 0, sizeof(char*));
memset(&sline_150, 0, sizeof(int));
right_value118 = (void*)0;
memset(&expression_node_151, 0, sizeof(struct sNode*));
right_value119 = (void*)0;
memset(&if_block_152, 0, sizeof(struct sBlock*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&elif_expression_nodes_153, 0, sizeof(struct list$1sNodeph*));
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&elif_blocks_154, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_155, 0, sizeof(int));
memset(&else_block_156, 0, sizeof(struct sBlock*));
memset(&saved_p_157, 0, sizeof(char*));
memset(&saved_sline_158, 0, sizeof(int));
right_value124 = (void*)0;
memset(&buf_159, 0, sizeof(char*));
right_value125 = (void*)0;
memset(&expression_node_160, 0, sizeof(struct sNode*));
right_value126 = (void*)0;
memset(&elif_block_161, 0, sizeof(struct sBlock*));
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value137 = (void*)0;
memset(&result_163, 0, sizeof(struct sNode*));
right_value138 = (void*)0;
    if(_if_conditional175=charp_operator_equals(buf,"if"),    _if_conditional175) {
        sname_149=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(info->sname))));
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        sline_150=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_151=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=expression_v13(info))));
        if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_152=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value119=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        elif_expression_nodes_153=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value121=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value120=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 493, "struct list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodephp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        elif_blocks_154=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value123=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value122=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 495, "struct list$1sBlockph"))))))));
        come_call_finalizer2(list$1sBlockphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sBlockphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        elif_num_155=0;
        else_block_156=((void*)0);
        while(_while_condtional20=1,        _while_condtional20) {
            saved_p_157=info->p;
            saved_sline_158=info->sline;
            parse_sharp_v5(info);
            if(_if_conditional176=!xisalpha(*info->p),            _if_conditional176) {
                break;
            }
            parse_sharp_v5(info);
            buf_159=(char*)come_increment_ref_count(((char*)(right_value124=parse_word(info))));
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(_if_conditional177=string_operator_equals(buf_159,"else"),            _if_conditional177) {
                if(_if_conditional178=parsecmp("if",info),                _if_conditional178) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_160=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=expression_v13(info))));
                    if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    list$1sNodeph_push_back(elif_expression_nodes_153,(struct sNode*)come_increment_ref_count(expression_node_160));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_161=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value126=parse_block(info,(_Bool)0))));
                    come_call_finalizer2(sBlock_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    list$1sBlockph_push_back(elif_blocks_154,(struct sBlock*)come_increment_ref_count(elif_block_161));
                    elif_num_155++;
                    if(expression_node_160) { expression_node_160 = come_decrement_ref_count2(expression_node_160, ((struct sNode*)expression_node_160)->finalize, ((struct sNode*)expression_node_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sBlock_finalize,elif_block_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    __dec_obj50=else_block_156;
                    else_block_156=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value127=parse_block(info,(_Bool)0))));
                    come_call_finalizer2(sBlock_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sBlock_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    buf_159 = come_decrement_ref_count2(buf_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                info->p=saved_p_157;
                info->sline=saved_sline_158;
                buf_159 = come_decrement_ref_count2(buf_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            buf_159 = come_decrement_ref_count2(buf_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 550, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sIfNode*)(right_value129=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value128=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 550, "struct sIfNode")))),(struct sNode*)come_increment_ref_count(expression_node_151),if_block_152,elif_expression_nodes_153,elif_blocks_154,elif_num_155,else_block_156,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sIfNode_finalize;
        _inf_value3->clone=(void*)sIfNode_clone;
        _inf_value3->compile=(void*)sIfNode_compile;
        _inf_value3->sline=(void*)sIfNode_sline;
        _inf_value3->sname=(void*)sIfNode_sname;
        _inf_value3->terminated=(void*)sIfNode_terminated;
        _inf_value3->kind=(void*)sIfNode_kind;
        result_163=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value137=_inf_value3)));
        come_call_finalizer2(sIfNode_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sIfNode_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value137) { right_value137 = come_decrement_ref_count2(right_value137, ((struct sNode*)right_value137)->finalize, ((struct sNode*)right_value137)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result88__ = __result_obj__ = result_163;
        sname_149 = come_decrement_ref_count2(sname_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_151) { expression_node_151 = come_decrement_ref_count2(expression_node_151, ((struct sNode*)expression_node_151)->finalize, ((struct sNode*)expression_node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sBlock_finalize,if_block_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,else_block_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(result_163) { result_163 = come_decrement_ref_count2(result_163, ((struct sNode*)result_163)->finalize, ((struct sNode*)result_163)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result88__;
        sname_149 = come_decrement_ref_count2(sname_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_151) { expression_node_151 = come_decrement_ref_count2(expression_node_151, ((struct sNode*)expression_node_151)->finalize, ((struct sNode*)expression_node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sBlock_finalize,if_block_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sNodephp_finalize,elif_expression_nodes_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sBlockphp_finalize,elif_blocks_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,else_block_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(result_163) { result_163 = come_decrement_ref_count2(result_163, ((struct sNode*)result_163)->finalize, ((struct sNode*)result_163)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result89__ = __result_obj__ = ((struct sNode*)(right_value138=string_node_v7(buf,head,head_sline,info)));
    if(right_value138) { right_value138 = come_decrement_ref_count2(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result89__;
}

static void sIfNode_finalize(struct sIfNode* self){
void* __result_obj__;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional179=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional179) {
                if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional180=self!=((void*)0)&&self->mIfBlock!=((void*)0),            _if_conditional180) {
                come_call_finalizer2(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional181=self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0),            _if_conditional181) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mElifExpressionNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional182=self!=((void*)0)&&self->mElifBlocks!=((void*)0),            _if_conditional182) {
                come_call_finalizer2(list$1sBlockphp_finalize,self->mElifBlocks, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional183=self!=((void*)0)&&self->mElseBlock!=((void*)0),            _if_conditional183) {
                come_call_finalizer2(sBlock_finalize,self->mElseBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional184=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional184) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
void* __result_obj__;
_Bool _if_conditional185;
struct sIfNode* __result86__;
void* right_value130;
struct sIfNode* result_162;
_Bool _if_conditional186;
void* right_value131;
struct sNode* __dec_obj51;
_Bool _if_conditional187;
void* right_value132;
struct sBlock* __dec_obj52;
_Bool _if_conditional188;
void* right_value133;
struct list$1sNodeph* __dec_obj53;
_Bool _if_conditional189;
void* right_value134;
struct list$1sBlockph* __dec_obj54;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value135;
struct sBlock* __dec_obj55;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value136;
char* __dec_obj56;
struct sIfNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&result_162, 0, sizeof(struct sIfNode*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
            if(_if_conditional185=self==(void*)0,            _if_conditional185) {
                __result86__ = __result_obj__ = (void*)0;
                return __result86__;
            }
            result_162=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value130=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "struct sIfNode"))));
            come_call_finalizer2(sIfNode_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional186=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional186) {
                __dec_obj51=result_162->mExpressionNode;
                result_162->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value131=sNode_clone(self->mExpressionNode))));
                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value131) { right_value131 = come_decrement_ref_count2(right_value131, ((struct sNode*)right_value131)->finalize, ((struct sNode*)right_value131)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional187=self!=((void*)0)&&self->mIfBlock!=((void*)0),            _if_conditional187) {
                __dec_obj52=result_162->mIfBlock;
                result_162->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value132=sBlock_clone(self->mIfBlock))));
                come_call_finalizer2(sBlock_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional188=self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0),            _if_conditional188) {
                __dec_obj53=result_162->mElifExpressionNodes;
                result_162->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value133=list$1sNodephp_clone(self->mElifExpressionNodes))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional189=self!=((void*)0)&&self->mElifBlocks!=((void*)0),            _if_conditional189) {
                __dec_obj54=result_162->mElifBlocks;
                result_162->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value134=list$1sBlockphp_clone(self->mElifBlocks))));
                come_call_finalizer2(list$1sBlockph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sBlockphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional190=self!=((void*)0),            _if_conditional190) {
                result_162->mElifNum=self->mElifNum;
            }
            if(_if_conditional191=self!=((void*)0)&&self->mElseBlock!=((void*)0),            _if_conditional191) {
                __dec_obj55=result_162->mElseBlock;
                result_162->mElseBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value135=sBlock_clone(self->mElseBlock))));
                come_call_finalizer2(sBlock_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional192=self!=((void*)0),            _if_conditional192) {
                result_162->sline=self->sline;
            }
            if(_if_conditional193=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional193) {
                __dec_obj56=result_162->sname;
                result_162->sname=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(self->sname))));
                __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result87__ = __result_obj__ = result_162;
            come_call_finalizer2(sIfNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result87__;
            come_call_finalizer2(sIfNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
void* right_value139;
char* sname_164;
int sline_165;
void* right_value140;
struct sBlock* if_block_166;
void* right_value141;
void* right_value142;
struct sNode* _inf_value4;
struct sOrStatmentNode* _inf_obj_value4;
void* right_value147;
struct sNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&sname_164, 0, sizeof(char*));
memset(&sline_165, 0, sizeof(int));
right_value140 = (void*)0;
memset(&if_block_166, 0, sizeof(struct sBlock*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value147 = (void*)0;
    sname_164=(char*)come_increment_ref_count(((char*)(right_value139=string_clone(info->sname))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_165=info->sline;
    parse_sharp_v5(info);
    if_block_166=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value140=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 567, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sOrStatmentNode*)(right_value142=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(right_value141=(struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 567, "struct sOrStatmentNode")))),(struct sNode*)come_increment_ref_count(expression_node),if_block_166,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value4->clone=(void*)sOrStatmentNode_clone;
    _inf_value4->compile=(void*)sOrStatmentNode_compile;
    _inf_value4->sline=(void*)sOrStatmentNode_sline;
    _inf_value4->sname=(void*)sOrStatmentNode_sname;
    _inf_value4->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value4->kind=(void*)sOrStatmentNode_kind;
    __result92__ = __result_obj__ = ((struct sNode*)(right_value147=_inf_value4));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_164 = come_decrement_ref_count2(sname_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,if_block_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sOrStatmentNode_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sOrStatmentNode_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result92__;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_164 = come_decrement_ref_count2(sname_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,if_block_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
void* __result_obj__;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional194=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional194) {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional195=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional195) {
            come_call_finalizer2(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional196=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional196) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
void* __result_obj__;
_Bool _if_conditional197;
struct sOrStatmentNode* __result90__;
void* right_value143;
struct sOrStatmentNode* result_167;
_Bool _if_conditional198;
void* right_value144;
struct sNode* __dec_obj57;
_Bool _if_conditional199;
void* right_value145;
struct sBlock* __dec_obj58;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value146;
char* __dec_obj59;
struct sOrStatmentNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
memset(&result_167, 0, sizeof(struct sOrStatmentNode*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
        if(_if_conditional197=self==(void*)0,        _if_conditional197) {
            __result90__ = __result_obj__ = (void*)0;
            return __result90__;
        }
        result_167=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(right_value143=(struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "struct sOrStatmentNode"))));
        come_call_finalizer2(sOrStatmentNode_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional198=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional198) {
            __dec_obj57=result_167->mExpressionNode;
            result_167->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=sNode_clone(self->mExpressionNode))));
            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value144) { right_value144 = come_decrement_ref_count2(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional199=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional199) {
            __dec_obj58=result_167->mIfBlock;
            result_167->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value145=sBlock_clone(self->mIfBlock))));
            come_call_finalizer2(sBlock_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sBlock_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional200=self!=((void*)0),        _if_conditional200) {
            result_167->sline=self->sline;
        }
        if(_if_conditional201=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional201) {
            __dec_obj59=result_167->sname;
            result_167->sname=(char*)come_increment_ref_count(((char*)(right_value146=string_clone(self->sname))));
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result91__ = __result_obj__ = result_167;
        come_call_finalizer2(sOrStatmentNode_finalize,result_167, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result91__;
        come_call_finalizer2(sOrStatmentNode_finalize,result_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
void* right_value148;
char* sname_168;
int sline_169;
void* right_value149;
struct sBlock* if_block_170;
void* right_value150;
void* right_value151;
struct sNode* _inf_value5;
struct sAndStatmentNode* _inf_obj_value5;
void* right_value156;
struct sNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
memset(&sname_168, 0, sizeof(char*));
memset(&sline_169, 0, sizeof(int));
right_value149 = (void*)0;
memset(&if_block_170, 0, sizeof(struct sBlock*));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value156 = (void*)0;
    sname_168=(char*)come_increment_ref_count(((char*)(right_value148=string_clone(info->sname))));
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_169=info->sline;
    parse_sharp_v5(info);
    if_block_170=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value149=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 579, "struct sNode");
    _inf_obj_value5=come_increment_ref_count(((struct sAndStatmentNode*)(right_value151=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(right_value150=(struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 579, "struct sAndStatmentNode")))),(struct sNode*)come_increment_ref_count(expression_node),if_block_170,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value5->clone=(void*)sAndStatmentNode_clone;
    _inf_value5->compile=(void*)sAndStatmentNode_compile;
    _inf_value5->sline=(void*)sAndStatmentNode_sline;
    _inf_value5->sname=(void*)sAndStatmentNode_sname;
    _inf_value5->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value5->kind=(void*)sAndStatmentNode_kind;
    __result95__ = __result_obj__ = ((struct sNode*)(right_value156=_inf_value5));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_168 = come_decrement_ref_count2(sname_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,if_block_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sAndStatmentNode_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sAndStatmentNode_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value156) { right_value156 = come_decrement_ref_count2(right_value156, ((struct sNode*)right_value156)->finalize, ((struct sNode*)right_value156)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result95__;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    sname_168 = come_decrement_ref_count2(sname_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,if_block_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
void* __result_obj__;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional202=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional202) {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional203=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional203) {
            come_call_finalizer2(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional204=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional204) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
void* __result_obj__;
_Bool _if_conditional205;
struct sAndStatmentNode* __result93__;
void* right_value152;
struct sAndStatmentNode* result_171;
_Bool _if_conditional206;
void* right_value153;
struct sNode* __dec_obj60;
_Bool _if_conditional207;
void* right_value154;
struct sBlock* __dec_obj61;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value155;
char* __dec_obj62;
struct sAndStatmentNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&result_171, 0, sizeof(struct sAndStatmentNode*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
        if(_if_conditional205=self==(void*)0,        _if_conditional205) {
            __result93__ = __result_obj__ = (void*)0;
            return __result93__;
        }
        result_171=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(right_value152=(struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "struct sAndStatmentNode"))));
        come_call_finalizer2(sAndStatmentNode_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional206=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional206) {
            __dec_obj60=result_171->mExpressionNode;
            result_171->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=sNode_clone(self->mExpressionNode))));
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional207=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional207) {
            __dec_obj61=result_171->mIfBlock;
            result_171->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value154=sBlock_clone(self->mIfBlock))));
            come_call_finalizer2(sBlock_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sBlock_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional208=self!=((void*)0),        _if_conditional208) {
            result_171->sline=self->sline;
        }
        if(_if_conditional209=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional209) {
            __dec_obj62=result_171->sname;
            result_171->sname=(char*)come_increment_ref_count(((char*)(right_value155=string_clone(self->sname))));
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result94__ = __result_obj__ = result_171;
        come_call_finalizer2(sAndStatmentNode_finalize,result_171, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result94__;
        come_call_finalizer2(sAndStatmentNode_finalize,result_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

