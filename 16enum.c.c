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
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
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
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
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
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value46;
char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
    __result25__ = __result_obj__ = ((char*)(right_value46=xsprintf(msg,self)));
    right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result25__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value47;
char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
    __result26__ = __result_obj__ = ((char*)(right_value47=xsprintf(msg,self)));
    right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result26__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value48;
char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
    __result27__ = __result_obj__ = ((char*)(right_value48=xsprintf(msg,self)));
    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result27__;
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




struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
void* right_value50;
char* __dec_obj13;
void* right_value61;
struct list$1tuple2$2charphsNodephph* __dec_obj19;
void* right_value62;
char* __dec_obj20;
struct sEnumNode* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value50 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj13=self->mTypeName;
    self->mTypeName=(char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(type_name))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj19=self->mElements;
    self->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value61=list$1tuple2$2charphsNodephphp_clone(elements))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mOutput=output;
    __dec_obj20=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value62=__builtin_string(info->sname))));
    __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result36__ = __result_obj__ = self;
    come_call_finalizer2(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result36__;
    come_call_finalizer2(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional7;
struct list$1tuple2$2charphsNodephph* __result28__;
void* right_value51;
void* right_value52;
struct list$1tuple2$2charphsNodephph* result_13;
struct list_item$1tuple2$2charphsNodephph* it_14;
_Bool _while_condtional2;
void* right_value60;
struct list$1tuple2$2charphsNodephph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&result_13, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_14, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value60 = (void*)0;
        if(_if_conditional7=self==((void*)0),        _if_conditional7) {
            __result28__ = __result_obj__ = ((void*)0);
            return __result28__;
        }
        result_13=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value52=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value51=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_14=self->head;
        while(_while_condtional2=it_14!=((void*)0),        _while_condtional2) {
            list$1tuple2$2charphsNodephph_add(result_13,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value60=tuple2$2charphsNodephp_clone(it_14->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_14=it_14->next;
        }
        __result35__ = __result_obj__ = result_13;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result35__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result29__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result29__;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_11;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsNodephph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_11, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_11=self->head;
                while(_while_condtional1=it_11!=((void*)0),                _while_condtional1) {
                    prev_it_12=it_11;
                    it_11=it_11->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional8=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional8) {
                            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional9) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional10=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional10) {
                                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional11;
void* right_value53;
struct list_item$1tuple2$2charphsNodephph* litem_15;
struct tuple2$2charphsNodeph* __dec_obj14;
_Bool _if_conditional14;
void* right_value54;
struct list_item$1tuple2$2charphsNodephph* litem_16;
struct tuple2$2charphsNodeph* __dec_obj15;
void* right_value55;
struct list_item$1tuple2$2charphsNodephph* litem_17;
struct tuple2$2charphsNodeph* __dec_obj16;
struct list$1tuple2$2charphsNodephph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value54 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value55 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    litem_15=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value53=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_15->prev=((void*)0);
                    litem_15->next=((void*)0);
                    __dec_obj14=litem_15->item;
                    litem_15->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_15;
                    self->head=litem_15;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_16=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value54=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_16->prev=self->head;
                        litem_16->next=((void*)0);
                        __dec_obj15=litem_16->item;
                        litem_16->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_16;
                        self->head->next=litem_16;
                    }
                    else {
                        litem_17=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value55=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_17->prev=self->tail;
                        litem_17->next=((void*)0);
                        __dec_obj16=litem_17->item;
                        litem_17->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_17;
                        self->tail=litem_17;
                    }
                }
                self->len++;
                __result30__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result30__;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional12;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional12=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional12) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional13=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional13) {
                            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional15;
struct tuple2$2charphsNodeph* __result31__;
void* right_value56;
struct tuple2$2charphsNodeph* result_18;
_Bool _if_conditional16;
void* right_value57;
char* __dec_obj17;
_Bool _if_conditional17;
void* right_value59;
struct sNode* __dec_obj18;
struct tuple2$2charphsNodeph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
memset(&result_18, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value57 = (void*)0;
right_value59 = (void*)0;
                if(_if_conditional15=self==(void*)0,                _if_conditional15) {
                    __result31__ = __result_obj__ = (void*)0;
                    return __result31__;
                }
                result_18=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value56=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional16=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional16) {
                    __dec_obj17=result_18->v1;
                    result_18->v1=(char*)come_increment_ref_count(((char*)(right_value57=string_clone(self->v1))));
                    __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional17=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional17) {
                    __dec_obj18=result_18->v2;
                    result_18->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value59=sNode_clone(self->v2))));
                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value59) { right_value59 = come_decrement_ref_count2(right_value59, ((struct sNode*)right_value59)->finalize, ((struct sNode*)right_value59)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result34__ = __result_obj__ = result_18;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result34__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional18;
struct sNode* __result32__;
void* right_value58;
struct sNode* result_19;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
struct sNode* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
memset(&result_19, 0, sizeof(struct sNode*));
                        if(_if_conditional18=self==(void*)0,                        _if_conditional18) {
                            __result32__ = __result_obj__ = (void*)0;
                            return __result32__;
                        }
                        result_19=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value58=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value58) { right_value58 = come_decrement_ref_count2(right_value58, ((struct sNode*)right_value58)->finalize, ((struct sNode*)right_value58)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional19=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional19) {
                            result_19->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional20=self!=((void*)0),                        _if_conditional20) {
                            result_19->finalize=self->finalize;
                        }
                        if(_if_conditional21=self!=((void*)0),                        _if_conditional21) {
                            result_19->clone=self->clone;
                        }
                        if(_if_conditional22=self!=((void*)0),                        _if_conditional22) {
                            result_19->compile=self->compile;
                        }
                        if(_if_conditional23=self!=((void*)0),                        _if_conditional23) {
                            result_19->sline=self->sline;
                        }
                        if(_if_conditional24=self!=((void*)0),                        _if_conditional24) {
                            result_19->sname=self->sname;
                        }
                        if(_if_conditional25=self!=((void*)0),                        _if_conditional25) {
                            result_19->terminated=self->terminated;
                        }
                        if(_if_conditional26=self!=((void*)0),                        _if_conditional26) {
                            result_19->kind=self->kind;
                        }
                        __result33__ = __result_obj__ = result_19;
                        if(result_19) { result_19 = come_decrement_ref_count2(result_19, ((struct sNode*)result_19)->finalize, ((struct sNode*)result_19)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result33__;
                        if(result_19) { result_19 = come_decrement_ref_count2(result_19, ((struct sNode*)result_19)->finalize, ((struct sNode*)result_19)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sEnumNode_terminated(){
void* __result_obj__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    __result37__ = (_Bool)1;
    return __result37__;
}

char* sEnumNode_kind(){
void* __result_obj__;
void* right_value63;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
    __result38__ = __result_obj__ = ((char*)(right_value63=__builtin_string("sEnumNode")));
    right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result38__;
}

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
char* type_name_20;
struct list$1tuple2$2charphsNodephph* elements_21;
void* right_value64;
void* right_value65;
struct buffer* buf_22;
_Bool _if_conditional31;
void* right_value66;
void* right_value67;
int i_23;
int n_24;
struct list$1tuple2$2charphsNodephph* o2_saved_25;
struct tuple2$2charphsNodeph* it_28;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* name_31;
struct sNode* value_32;
void* right_value68;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
void* right_value69;
char* c_value_41;
void* right_value70;
void* right_value71;
_Bool _if_conditional64;
_Bool __result51__;
void* right_value72;
struct CVALUE* right_value_42;
void* right_value73;
void* right_value74;
void* right_value75;
_Bool _if_conditional67;
void* right_value76;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value77;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_name_20, 0, sizeof(char*));
memset(&elements_21, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value64 = (void*)0;
right_value65 = (void*)0;
memset(&buf_22, 0, sizeof(struct buffer*));
right_value66 = (void*)0;
right_value67 = (void*)0;
memset(&i_23, 0, sizeof(int));
memset(&n_24, 0, sizeof(int));
memset(&o2_saved_25, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_28, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&name_31, 0, sizeof(char*));
memset(&value_32, 0, sizeof(struct sNode*));
memset(&name_31, 0, sizeof(char*));
memset(&value_32, 0, sizeof(struct sNode*));
right_value68 = (void*)0;
right_value69 = (void*)0;
memset(&c_value_41, 0, sizeof(char*));
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value72 = (void*)0;
memset(&right_value_42, 0, sizeof(struct CVALUE*));
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
    type_name_20=(char*)come_increment_ref_count(self->mTypeName);
    elements_21=self->mElements;
    buf_22=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value65=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value64=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 46, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional31=string_operator_equals(type_name_20,""),    _if_conditional31) {
        buffer_append_str(buf_22,((char*)(right_value66=xsprintf("enum { ",type_name_20))));
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        buffer_append_str(buf_22,((char*)(right_value67=xsprintf("enum %s { ",type_name_20))));
        right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    i_23=0;
    n_24=0;
    for(    o2_saved_25=(elements_21),it_28=list$1tuple2$2charphsNodephph_begin((o2_saved_25));    !list$1tuple2$2charphsNodephph_end((o2_saved_25));    it_28=list$1tuple2$2charphsNodephph_next((o2_saved_25))    ){
        multiple_assign_var1=it_28;
        name_31=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        value_32=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional61=map$2charphsVarph_at(info->gv_table->mVars,((char*)(right_value68=__builtin_string(name_31))),((void*)0))!=((void*)0),        right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional61) {
            self->mOutput=(_Bool)0;
        }
        if(_if_conditional62=value_32==((void*)0),        _if_conditional62) {
            buffer_append_str(buf_22,name_31);
            buffer_append_str(buf_22,"\n");
            if(_if_conditional63=i_23!=list$1tuple2$2charphsNodephph_length(elements_21)-1,            _if_conditional63) {
                buffer_append_str(buf_22,",");
            }
            c_value_41=(char*)come_increment_ref_count(((char*)(right_value69=xsprintf("%d",n_24))));
            right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_variable_to_global_table_with_int_value(name_31,(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value70=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 74, "sType")))),"int",(_Bool)0,info)))),c_value_41,info);
            come_call_finalizer2(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            c_value_41 = come_decrement_ref_count2(c_value_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional64=!node_compile(value_32,info),            _if_conditional64) {
                __result51__ = (_Bool)0;
                name_31 = come_decrement_ref_count2(name_31, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(value_32) { value_32 = come_decrement_ref_count2(value_32, ((struct sNode*)value_32)->finalize, ((struct sNode*)value_32)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_20 = come_decrement_ref_count2(type_name_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,buf_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result51__;
            }
            right_value_42=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value72=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            add_variable_to_global_table_with_int_value(name_31,(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value73=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 84, "sType")))),"int",(_Bool)0,info)))),right_value_42->c_value,info);
            come_call_finalizer2(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_22,((char*)(right_value75=xsprintf("%s=%s",name_31,right_value_42->c_value))));
            right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional67=i_23!=list$1tuple2$2charphsNodephph_length(elements_21)-1,            _if_conditional67) {
                buffer_append_str(buf_22,",");
            }
            buffer_append_str(buf_22,"\n");
            n_24=atoi(right_value_42->c_value);
            come_call_finalizer2(CVALUE_finalize,right_value_42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        i_23++;
        n_24++;
        name_31 = come_decrement_ref_count2(name_31, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(value_32) { value_32 = come_decrement_ref_count2(value_32, ((struct sNode*)value_32)->finalize, ((struct sNode*)value_32)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    buffer_append_str(buf_22,((char*)(right_value76=xsprintf("};\n",type_name_20))));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional68=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),    _if_conditional68) {
    }
    else {
        if(self->mOutput) {
            add_come_code_at_source_head(info,"%s",((char*)(right_value77=buffer_to_string(buf_22))));
            right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __result52__ = (_Bool)1;
    type_name_20 = come_decrement_ref_count2(type_name_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result52__;
    type_name_20 = come_decrement_ref_count2(type_name_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional32;
struct tuple2$2charphsNodeph* result_26;
struct tuple2$2charphsNodeph* __result39__;
_Bool _if_conditional33;
struct tuple2$2charphsNodeph* __result40__;
struct tuple2$2charphsNodeph* result_27;
struct tuple2$2charphsNodeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_26, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_27, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional32=self==((void*)0),        _if_conditional32) {
            memset(&result_26,0,sizeof(struct tuple2$2charphsNodeph*));
            __result39__ = __result_obj__ = result_26;
            return __result39__;
        }
        self->it=self->head;
        if(self->it) {
            __result40__ = __result_obj__ = self->it->item;
            return __result40__;
        }
        memset(&result_27,0,sizeof(struct tuple2$2charphsNodeph*));
        __result41__ = __result_obj__ = result_27;
        return __result41__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result42__;
memset(&__result_obj__, 0, sizeof(void*));
        __result42__ = self==((void*)0)||self->it==((void*)0);
        return __result42__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional34;
struct tuple2$2charphsNodeph* result_29;
struct tuple2$2charphsNodeph* __result43__;
_Bool _if_conditional35;
struct tuple2$2charphsNodeph* __result44__;
struct tuple2$2charphsNodeph* result_30;
struct tuple2$2charphsNodeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_30, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional34=self==((void*)0)||self->it==((void*)0),        _if_conditional34) {
            memset(&result_29,0,sizeof(struct tuple2$2charphsNodeph*));
            __result43__ = __result_obj__ = result_29;
            return __result43__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result44__ = __result_obj__ = self->it->item;
            return __result44__;
        }
        memset(&result_30,0,sizeof(struct tuple2$2charphsNodeph*));
        __result45__ = __result_obj__ = result_30;
        return __result45__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_33;
unsigned int it_34;
_Bool _while_condtional3;
_Bool _if_conditional36;
_Bool _if_conditional37;
struct sVar* __result46__;
_Bool _if_conditional59;
_Bool _if_conditional60;
struct sVar* __result47__;
struct sVar* __result48__;
struct sVar* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_33, 0, sizeof(unsigned int));
memset(&it_34, 0, sizeof(unsigned int));
            hash_33=string_get_hash_key(((char*)key))%self->size;
            it_34=hash_33;
            while(_while_condtional3=(_Bool)1,            _while_condtional3) {
                if(_if_conditional36=self->item_existance[it_34],                _if_conditional36) {
                    if(_if_conditional37=string_equals(self->keys[it_34],key),                    _if_conditional37) {
                        __result46__ = __result_obj__ = self->items[it_34];
                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result46__;
                    }
                    it_34++;
                    if(_if_conditional59=it_34>=self->size,                    _if_conditional59) {
                        it_34=0;
                    }
                    else {
                        if(_if_conditional60=it_34==hash_33,                        _if_conditional60) {
                            __result47__ = __result_obj__ = default_value;
                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result47__;
                        }
                    }
                }
                else {
                    __result48__ = __result_obj__ = default_value;
                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result48__;
                }
            }
            __result49__ = __result_obj__ = default_value;
            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result49__;
            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional58;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional38=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional38) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional39=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional39) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional40=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional40) {
                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional58=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional58) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional41;
_Bool _if_conditional43;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional41=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional41) {
                                        come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional43=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional43) {
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional45=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional45) {
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional46=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional46) {
                                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional47=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional47) {
                                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional48=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional48) {
                                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional50=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional50) {
                                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional51=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional51) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional53=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional53) {
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional54=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional54) {
                                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional55=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional55) {
                                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional56=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional56) {
                                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional57=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional57) {
                                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_35;
_Bool _while_condtional4;
struct list_item$1sTypeph* prev_it_36;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_35, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_36, 0, sizeof(struct list_item$1sTypeph*));
                                            it_35=self->head;
                                            while(_while_condtional4=it_35!=((void*)0),                                            _while_condtional4) {
                                                prev_it_36=it_35;
                                                it_35=it_35->next;
                                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional42;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional42=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional42) {
                                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional44) {
                                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_37;
_Bool _while_condtional5;
struct list_item$1sNodeph* prev_it_38;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_37, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_38, 0, sizeof(struct list_item$1sNodeph*));
                                            it_37=self->head;
                                            while(_while_condtional5=it_37!=((void*)0),                                            _while_condtional5) {
                                                prev_it_38=it_37;
                                                it_37=it_37->next;
                                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional49=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional49) {
                                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_39;
_Bool _while_condtional6;
struct list_item$1charph* prev_it_40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_39, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_40, 0, sizeof(struct list_item$1charph*));
                                            it_39=self->head;
                                            while(_while_condtional6=it_39!=((void*)0),                                            _while_condtional6) {
                                                prev_it_40=it_39;
                                                it_39=it_39->next;
                                                come_call_finalizer2(list_item$1charphp_finalize,prev_it_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional52=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional52) {
                                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
int __result50__;
memset(&__result_obj__, 0, sizeof(void*));
                __result50__ = self->len;
                return __result50__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional65;
_Bool _if_conditional66;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional65=self!=((void*)0)&&self->c_value!=((void*)0),                _if_conditional65) {
                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional66=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional66) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = self->sline;
    return __result53__;
}

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value78;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result54__ = __result_obj__ = ((char*)(right_value78=__builtin_string(self->sname)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

struct sNode* parse_enum(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_43;
_Bool output_44;
_Bool _if_conditional80;
void* right_value79;
void* right_value80;
struct sClass* __dec_obj21;
void* right_value138;
struct sClass* __dec_obj55;
void* right_value139;
void* right_value140;
struct list$1tuple2$2charphsNodephph* elements_117;
_Bool _while_condtional20;
void* right_value141;
char* element_name_118;
_Bool _if_conditional214;
_Bool no_comma_119;
void* right_value142;
struct sNode* element_value_120;
_Bool _if_conditional215;
void* right_value146;
void* right_value147;
_Bool _if_conditional218;
void* right_value148;
void* right_value149;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value150;
void* right_value151;
struct sNode* _inf_value1;
struct sEnumNode* _inf_obj_value1;
void* right_value157;
struct sNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_43, 0, sizeof(struct sClass*));
memset(&output_44, 0, sizeof(_Bool));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&elements_117, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value141 = (void*)0;
memset(&element_name_118, 0, sizeof(char*));
memset(&no_comma_119, 0, sizeof(_Bool));
right_value142 = (void*)0;
memset(&element_value_120, 0, sizeof(struct sNode*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value157 = (void*)0;
    if(_if_conditional80=map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0),    _if_conditional80) {
        output_44=(_Bool)1;
        __dec_obj21=klass_43;
        klass_43=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value80=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value79=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 129, "sClass")))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info))));
        come_call_finalizer2(sClass_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(klass_43));
    }
    else {
        output_44=(_Bool)0;
        __dec_obj55=klass_43;
        klass_43=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value138=sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))))));
        come_call_finalizer2(sClass_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    expected_next_character(123,info);
    elements_117=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value140=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value139=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 139, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional20=(_Bool)1,    _while_condtional20) {
        parse_sharp_v5(info);
        element_name_118=(char*)come_increment_ref_count(((char*)(right_value141=parse_word(info))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional214=*info->p==61,        _if_conditional214) {
            info->p++;
            skip_spaces_and_lf(info);
            no_comma_119=info->no_comma;
            info->no_comma=(_Bool)1;
            element_value_120=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=expression_v13(info))));
            if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_119;
            if(_if_conditional215=!info->no_output_err,            _if_conditional215) {
                list$1tuple2$2charphsNodephph_push_back(elements_117,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value147=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value146=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 159, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_118),(struct sNode*)come_increment_ref_count(element_value_120))))));
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(element_value_120) { element_value_120 = come_decrement_ref_count2(element_value_120, ((struct sNode*)element_value_120)->finalize, ((struct sNode*)element_value_120)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional218=!info->no_output_err,            _if_conditional218) {
                list$1tuple2$2charphsNodephph_push_back(elements_117,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value149=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value148=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 164, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_118),((void*)0))))));
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional219=*info->p==44,        _if_conditional219) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(_if_conditional220=*info->p==125,        _if_conditional220) {
            info->p++;
            skip_spaces_and_lf(info);
            element_name_118 = come_decrement_ref_count2(element_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        element_name_118 = come_decrement_ref_count2(element_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 184, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sEnumNode*)(right_value151=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value150=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 184, "sEnumNode")))),(char*)come_increment_ref_count(type_name),elements_117,output_44,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sEnumNode_finalize;
    _inf_value1->clone=(void*)sEnumNode_clone;
    _inf_value1->compile=(void*)sEnumNode_compile;
    _inf_value1->sline=(void*)sEnumNode_sline;
    _inf_value1->sname=(void*)sEnumNode_sname;
    _inf_value1->terminated=(void*)sEnumNode_terminated;
    _inf_value1->kind=(void*)sEnumNode_kind;
    __result111__ = __result_obj__ = ((struct sNode*)(right_value157=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,elements_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sEnumNode_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sEnumNode_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result111__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,elements_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_45;
unsigned int it_46;
_Bool _while_condtional7;
_Bool _if_conditional70;
_Bool _if_conditional71;
struct sClass* __result55__;
_Bool _if_conditional78;
_Bool _if_conditional79;
struct sClass* __result56__;
struct sClass* __result57__;
struct sClass* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_45, 0, sizeof(unsigned int));
memset(&it_46, 0, sizeof(unsigned int));
        hash_45=string_get_hash_key(((char*)key))%self->size;
        it_46=hash_45;
        while(_while_condtional7=(_Bool)1,        _while_condtional7) {
            if(_if_conditional70=self->item_existance[it_46],            _if_conditional70) {
                if(_if_conditional71=string_equals(self->keys[it_46],key),                _if_conditional71) {
                    __result55__ = __result_obj__ = self->items[it_46];
                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result55__;
                }
                it_46++;
                if(_if_conditional78=it_46>=self->size,                _if_conditional78) {
                    it_46=0;
                }
                else {
                    if(_if_conditional79=it_46==hash_45,                    _if_conditional79) {
                        __result56__ = __result_obj__ = default_value;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result56__;
                    }
                }
            }
            else {
                __result57__ = __result_obj__ = default_value;
                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result57__;
            }
        }
        __result58__ = __result_obj__ = default_value;
        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result58__;
        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional77;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional72=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional72) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional73=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional73) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional77=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional77) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_47;
_Bool _while_condtional8;
struct list_item$1tuple2$2charphsTypephph* prev_it_48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_47, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_48, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_47=self->head;
                                while(_while_condtional8=it_47!=((void*)0),                                _while_condtional8) {
                                    prev_it_48=it_47;
                                    it_47=it_47->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional74;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional74=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional74) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional75;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional75=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional75) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional76=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional76) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional81;
unsigned int hash_64;
unsigned int it_65;
_Bool _while_condtional10;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool same_key_exist_82;
char* it2_85;
_Bool _if_conditional120;
_Bool _if_conditional121;
struct map$2charphsClassph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_64, 0, sizeof(unsigned int));
memset(&it_65, 0, sizeof(unsigned int));
memset(&same_key_exist_82, 0, sizeof(_Bool));
memset(&it2_85, 0, sizeof(char*));
            if(_if_conditional81=self->len*10>=self->size,            _if_conditional81) {
                map$2charphsClassph_rehash(self);
            }
            hash_64=string_get_hash_key(key)%self->size;
            it_65=hash_64;
            while(_while_condtional10=(_Bool)1,            _while_condtional10) {
                if(_if_conditional89=self->item_existance[it_65],                _if_conditional89) {
                    if(_if_conditional90=string_equals(self->keys[it_65],key),                    _if_conditional90) {
                        if(_if_conditional91=1,                        _if_conditional91) {
                            list$1charp_remove(self->key_list,self->keys[it_65]);
                            self->keys[it_65] = come_decrement_ref_count2(self->keys[it_65], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_65]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_65]);
                            self->keys[it_65]=key;
                        }
                        if(_if_conditional111=1,                        _if_conditional111) {
                            come_call_finalizer2(sClass_finalize,self->items[it_65], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_65]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_65]=item;
                        }
                        break;
                    }
                    it_65++;
                    if(_if_conditional112=it_65>=self->size,                    _if_conditional112) {
                        it_65=0;
                    }
                    else {
                        if(_if_conditional113=it_65==hash_64,                        _if_conditional113) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_65]=(_Bool)1;
                    if(_if_conditional114=1,                    _if_conditional114) {
                        self->keys[it_65]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_65]=key;
                    }
                    if(_if_conditional115=1,                    _if_conditional115) {
                        self->items[it_65]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_65]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_82=(_Bool)0;
            for(            it2_85=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_85=list$1charp_next(self->key_list)            ){
                if(_if_conditional120=string_equals(it2_85,key),                _if_conditional120) {
                    puts("SAME KEY");
                    same_key_exist_82=(_Bool)1;
                }
            }
            if(_if_conditional121=!same_key_exist_82,            _if_conditional121) {
                list$1charp_push_back(self->key_list,key);
            }
            __result78__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result78__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_49;
void* right_value81;
char** keys_50;
void* right_value82;
struct sClass** items_51;
void* right_value83;
_Bool* item_existance_52;
int len_53;
char* it_56;
struct sClass* default_value_59;
struct sClass* it2_60;
unsigned int hash_61;
int n_62;
_Bool _while_condtional9;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
struct sClass* default_value_63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_49, 0, sizeof(int));
right_value81 = (void*)0;
memset(&keys_50, 0, sizeof(char**));
right_value82 = (void*)0;
memset(&items_51, 0, sizeof(struct sClass**));
right_value83 = (void*)0;
memset(&item_existance_52, 0, sizeof(_Bool*));
memset(&len_53, 0, sizeof(int));
memset(&it_56, 0, sizeof(char*));
memset(&default_value_59, 0, sizeof(struct sClass*));
memset(&it2_60, 0, sizeof(struct sClass*));
memset(&hash_61, 0, sizeof(unsigned int));
memset(&n_62, 0, sizeof(int));
memset(&default_value_63, 0, sizeof(struct sClass*));
                    size_49=self->size*10;
                    keys_50=(char**)come_increment_ref_count(((char**)(right_value81=(char**)come_calloc(1, sizeof(char*)*(1*(size_49)), "./comelang2.h", 1335, "char*%"))));
                    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_51=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value82=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_49)), "./comelang2.h", 1336, "sClass*%"))));
                    come_call_finalizer2(sClass_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_52=(_Bool*)come_increment_ref_count(((_Bool*)(right_value83=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_49)), "./comelang2.h", 1337, "bool"))));
                    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_53=0;
                    for(                    it_56=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_56=map$2charphsClassph_next(self)                    ){
                        memset(&default_value_59,0,sizeof(struct sClass*));
                        it2_60=map$2charphsClassph_at(self,it_56,default_value_59);
                        hash_61=string_get_hash_key(it_56)%size_49;
                        n_62=hash_61;
                        while(_while_condtional9=(_Bool)1,                        _while_condtional9) {
                            if(_if_conditional86=item_existance_52[n_62],                            _if_conditional86) {
                                n_62++;
                                if(_if_conditional87=n_62>=size_49,                                _if_conditional87) {
                                    n_62=0;
                                }
                                else {
                                    if(_if_conditional88=n_62==hash_61,                                    _if_conditional88) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_52[n_62]=(_Bool)1;
                                keys_50[n_62]=it_56;
                                items_51[n_62]=map$2charphsClassph_at(self,it_56,default_value_63);
                                len_53++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_50;
                    self->items=items_51;
                    self->item_existance=item_existance_52;
                    self->size=size_49;
                    self->len=len_53;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional82;
char* result_54;
char* __result59__;
_Bool _if_conditional83;
char* __result60__;
char* result_55;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_54, 0, sizeof(char*));
memset(&result_55, 0, sizeof(char*));
                        if(_if_conditional82=self==((void*)0),                        _if_conditional82) {
                            memset(&result_54,0,sizeof(char*));
                            __result59__ = __result_obj__ = result_54;
                            return __result59__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result60__ = __result_obj__ = self->key_list->it->item;
                            return __result60__;
                        }
                        memset(&result_55,0,sizeof(char*));
                        __result61__ = __result_obj__ = result_55;
                        return __result61__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result62__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result62__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional84;
char* result_57;
char* __result63__;
_Bool _if_conditional85;
char* __result64__;
char* result_58;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_57, 0, sizeof(char*));
memset(&result_58, 0, sizeof(char*));
                        if(_if_conditional84=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional84) {
                            memset(&result_57,0,sizeof(char*));
                            __result63__ = __result_obj__ = result_57;
                            return __result63__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result64__ = __result_obj__ = self->key_list->it->item;
                            return __result64__;
                        }
                        memset(&result_58,0,sizeof(char*));
                        __result65__ = __result_obj__ = result_58;
                        return __result65__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_66;
struct list_item$1charp* it_67;
_Bool _while_condtional11;
_Bool _if_conditional92;
struct list$1charp* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_66, 0, sizeof(int));
memset(&it_67, 0, sizeof(struct list_item$1charp*));
                                it2_66=0;
                                it_67=self->head;
                                while(_while_condtional11=it_67!=((void*)0),                                _while_condtional11) {
                                    if(_if_conditional92=string_equals(it_67->item,item),                                    _if_conditional92) {
                                        list$1charp_delete(self,it2_66,it2_66+1);
                                        break;
                                    }
                                    it2_66++;
                                    it_67=it_67->next;
                                }
                                __result69__ = __result_obj__ = self;
                                return __result69__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
int tmp_68;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct list$1charp* __result66__;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct list_item$1charp* it_71;
int i_72;
_Bool _while_condtional13;
_Bool _if_conditional101;
struct list_item$1charp* prev_it_73;
_Bool _if_conditional102;
_Bool _if_conditional103;
struct list_item$1charp* it_74;
int i_75;
_Bool _while_condtional14;
_Bool _if_conditional104;
_Bool _if_conditional105;
struct list_item$1charp* prev_it_76;
struct list_item$1charp* it_77;
struct list_item$1charp* head_prev_it_78;
struct list_item$1charp* tail_it_79;
int i_80;
_Bool _while_condtional15;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
struct list_item$1charp* prev_it_81;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct list$1charp* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_68, 0, sizeof(int));
memset(&it_71, 0, sizeof(struct list_item$1charp*));
memset(&i_72, 0, sizeof(int));
memset(&prev_it_73, 0, sizeof(struct list_item$1charp*));
memset(&it_74, 0, sizeof(struct list_item$1charp*));
memset(&i_75, 0, sizeof(int));
memset(&prev_it_76, 0, sizeof(struct list_item$1charp*));
memset(&it_77, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_78, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_79, 0, sizeof(struct list_item$1charp*));
memset(&i_80, 0, sizeof(int));
memset(&prev_it_81, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional93=head<0,                                            _if_conditional93) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional94=tail<0,                                            _if_conditional94) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional95=head>tail,                                            _if_conditional95) {
                                                tmp_68=tail;
                                                tail=head;
                                                head=tmp_68;
                                            }
                                            if(_if_conditional96=head<0,                                            _if_conditional96) {
                                                head=0;
                                            }
                                            if(_if_conditional97=tail>self->len,                                            _if_conditional97) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional98=head==tail,                                            _if_conditional98) {
                                                __result66__ = __result_obj__ = self;
                                                return __result66__;
                                            }
                                            if(_if_conditional99=head==0&&tail==self->len,                                            _if_conditional99) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional100=head==0,                                                _if_conditional100) {
                                                    it_71=self->head;
                                                    i_72=0;
                                                    while(_while_condtional13=it_71!=((void*)0),                                                    _while_condtional13) {
                                                        if(_if_conditional101=i_72<tail,                                                        _if_conditional101) {
                                                            prev_it_73=it_71;
                                                            it_71=it_71->next;
                                                            i_72++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional102=i_72==tail,                                                            _if_conditional102) {
                                                                self->head=it_71;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_71=it_71->next;
                                                                i_72++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional103=tail==self->len,                                                    _if_conditional103) {
                                                        it_74=self->head;
                                                        i_75=0;
                                                        while(_while_condtional14=it_74!=((void*)0),                                                        _while_condtional14) {
                                                            if(_if_conditional104=i_75==head,                                                            _if_conditional104) {
                                                                self->tail=it_74->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional105=i_75>=head,                                                            _if_conditional105) {
                                                                prev_it_76=it_74;
                                                                it_74=it_74->next;
                                                                i_75++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_74=it_74->next;
                                                                i_75++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_77=self->head;
                                                        head_prev_it_78=((void*)0);
                                                        tail_it_79=((void*)0);
                                                        i_80=0;
                                                        while(_while_condtional15=it_77!=((void*)0),                                                        _while_condtional15) {
                                                            if(_if_conditional106=i_80==head,                                                            _if_conditional106) {
                                                                head_prev_it_78=it_77->prev;
                                                            }
                                                            if(_if_conditional107=i_80==tail,                                                            _if_conditional107) {
                                                                tail_it_79=it_77;
                                                            }
                                                            if(_if_conditional108=i_80>=head&&i_80<tail,                                                            _if_conditional108) {
                                                                prev_it_81=it_77;
                                                                it_77=it_77->next;
                                                                i_80++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_77=it_77->next;
                                                                i_80++;
                                                            }
                                                        }
                                                        if(_if_conditional109=head_prev_it_78!=((void*)0),                                                        _if_conditional109) {
                                                            head_prev_it_78->next=tail_it_79;
                                                        }
                                                        if(_if_conditional110=tail_it_79!=((void*)0),                                                        _if_conditional110) {
                                                            tail_it_79->prev=head_prev_it_78;
                                                        }
                                                    }
                                                }
                                            }
                                            __result68__ = __result_obj__ = self;
                                            return __result68__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_69;
_Bool _while_condtional12;
struct list_item$1charp* prev_it_70;
struct list$1charp* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_69, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_70, 0, sizeof(struct list_item$1charp*));
                                                    it_69=self->head;
                                                    while(_while_condtional12=it_69!=((void*)0),                                                    _while_condtional12) {
                                                        prev_it_70=it_69;
                                                        it_69=it_69->next;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result67__ = __result_obj__ = self;
                                                    return __result67__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional116;
char* result_83;
char* __result70__;
_Bool _if_conditional117;
char* __result71__;
char* result_84;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_83, 0, sizeof(char*));
memset(&result_84, 0, sizeof(char*));
                if(_if_conditional116=self==((void*)0),                _if_conditional116) {
                    memset(&result_83,0,sizeof(char*));
                    __result70__ = __result_obj__ = result_83;
                    return __result70__;
                }
                self->it=self->head;
                if(self->it) {
                    __result71__ = __result_obj__ = self->it->item;
                    return __result71__;
                }
                memset(&result_84,0,sizeof(char*));
                __result72__ = __result_obj__ = result_84;
                return __result72__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
                __result73__ = self==((void*)0)||self->it==((void*)0);
                return __result73__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional118;
char* result_86;
char* __result74__;
_Bool _if_conditional119;
char* __result75__;
char* result_87;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_86, 0, sizeof(char*));
memset(&result_87, 0, sizeof(char*));
                if(_if_conditional118=self==((void*)0)||self->it==((void*)0),                _if_conditional118) {
                    memset(&result_86,0,sizeof(char*));
                    __result74__ = __result_obj__ = result_86;
                    return __result74__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result75__ = __result_obj__ = self->it->item;
                    return __result75__;
                }
                memset(&result_87,0,sizeof(char*));
                __result76__ = __result_obj__ = result_87;
                return __result76__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional122;
void* right_value84;
struct list_item$1charp* litem_88;
_Bool _if_conditional123;
void* right_value85;
struct list_item$1charp* litem_89;
void* right_value86;
struct list_item$1charp* litem_90;
struct list$1charp* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1charp*));
right_value85 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1charp*));
right_value86 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional122=self->len==0,                    _if_conditional122) {
                        litem_88=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value84=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_88->prev=((void*)0);
                        litem_88->next=((void*)0);
                        litem_88->item=item;
                        self->tail=litem_88;
                        self->head=litem_88;
                    }
                    else {
                        if(_if_conditional123=self->len==1,                        _if_conditional123) {
                            litem_89=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value85=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_89->prev=self->head;
                            litem_89->next=((void*)0);
                            litem_89->item=item;
                            self->tail=litem_89;
                            self->head->next=litem_89;
                        }
                        else {
                            litem_90=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value86=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_90->prev=self->tail;
                            litem_90->next=((void*)0);
                            litem_90->item=item;
                            self->tail->next=litem_90;
                            self->tail=litem_90;
                        }
                    }
                    self->len++;
                    __result77__ = __result_obj__ = self;
                    return __result77__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional124;
struct sClass* __result79__;
void* right_value87;
struct sClass* result_91;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
void* right_value88;
char* __dec_obj22;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
void* right_value136;
struct list$1tuple2$2charphsTypephph* __dec_obj53;
_Bool _if_conditional212;
_Bool _if_conditional213;
void* right_value137;
char* __dec_obj54;
struct sClass* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_91, 0, sizeof(struct sClass*));
right_value88 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
            if(_if_conditional124=self==(void*)0,            _if_conditional124) {
                __result79__ = __result_obj__ = (void*)0;
                return __result79__;
            }
            result_91=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value87=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer2(sClass_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional125=self!=((void*)0),            _if_conditional125) {
                result_91->mStruct=self->mStruct;
            }
            if(_if_conditional126=self!=((void*)0),            _if_conditional126) {
                result_91->mFloat=self->mFloat;
            }
            if(_if_conditional127=self!=((void*)0),            _if_conditional127) {
                result_91->mUnion=self->mUnion;
            }
            if(_if_conditional128=self!=((void*)0),            _if_conditional128) {
                result_91->mGenerics=self->mGenerics;
            }
            if(_if_conditional129=self!=((void*)0),            _if_conditional129) {
                result_91->mMethodGenerics=self->mMethodGenerics;
            }
            if(_if_conditional130=self!=((void*)0),            _if_conditional130) {
                result_91->mEnum=self->mEnum;
            }
            if(_if_conditional131=self!=((void*)0),            _if_conditional131) {
                result_91->mProtocol=self->mProtocol;
            }
            if(_if_conditional132=self!=((void*)0),            _if_conditional132) {
                result_91->mNumber=self->mNumber;
            }
            if(_if_conditional133=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional133) {
                __dec_obj22=result_91->mName;
                result_91->mName=(char*)come_increment_ref_count(((char*)(right_value88=string_clone(self->mName))));
                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional134=self!=((void*)0),            _if_conditional134) {
                result_91->mGenericsNum=self->mGenericsNum;
            }
            if(_if_conditional135=self!=((void*)0),            _if_conditional135) {
                result_91->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            if(_if_conditional136=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional136) {
                __dec_obj53=result_91->mFields;
                result_91->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value136=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional212=self!=((void*)0),            _if_conditional212) {
                result_91->mOutputed=self->mOutputed;
            }
            if(_if_conditional213=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional213) {
                __dec_obj54=result_91->mDeclareSName;
                result_91->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value137=string_clone(self->mDeclareSName))));
                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result106__ = __result_obj__ = result_91;
            come_call_finalizer2(sClass_finalize,result_91, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result106__;
            come_call_finalizer2(sClass_finalize,result_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional137;
struct list$1tuple2$2charphsTypephph* __result80__;
void* right_value89;
void* right_value90;
struct list$1tuple2$2charphsTypephph* result_92;
struct list_item$1tuple2$2charphsTypephph* it_93;
_Bool _while_condtional16;
void* right_value135;
struct list$1tuple2$2charphsTypephph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
right_value90 = (void*)0;
memset(&result_92, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_93, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value135 = (void*)0;
                    if(_if_conditional137=self==((void*)0),                    _if_conditional137) {
                        __result80__ = __result_obj__ = ((void*)0);
                        return __result80__;
                    }
                    result_92=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value90=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value89=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_93=self->head;
                    while(_while_condtional16=it_93!=((void*)0),                    _while_condtional16) {
                        list$1tuple2$2charphsTypephph_add(result_92,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value135=tuple2$2charphsTypephp_clone(it_93->item)))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_93=it_93->next;
                    }
                    __result105__ = __result_obj__ = result_92;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_92, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result105__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result81__ = __result_obj__ = self;
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result81__;
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional138;
void* right_value91;
struct list_item$1tuple2$2charphsTypephph* litem_94;
struct tuple2$2charphsTypeph* __dec_obj23;
_Bool _if_conditional141;
void* right_value92;
struct list_item$1tuple2$2charphsTypephph* litem_95;
struct tuple2$2charphsTypeph* __dec_obj24;
void* right_value93;
struct list_item$1tuple2$2charphsTypephph* litem_96;
struct tuple2$2charphsTypeph* __dec_obj25;
struct list$1tuple2$2charphsTypephph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value92 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value93 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional138=self->len==0,                            _if_conditional138) {
                                litem_94=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value91=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_94->prev=((void*)0);
                                litem_94->next=((void*)0);
                                __dec_obj23=litem_94->item;
                                litem_94->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_94;
                                self->head=litem_94;
                            }
                            else {
                                if(_if_conditional141=self->len==1,                                _if_conditional141) {
                                    litem_95=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value92=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_95->prev=self->head;
                                    litem_95->next=((void*)0);
                                    __dec_obj24=litem_95->item;
                                    litem_95->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_95;
                                    self->head->next=litem_95;
                                }
                                else {
                                    litem_96=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value93=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_96->prev=self->tail;
                                    litem_96->next=((void*)0);
                                    __dec_obj25=litem_96->item;
                                    litem_96->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_96;
                                    self->tail=litem_96;
                                }
                            }
                            self->len++;
                            __result82__ = __result_obj__ = self;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result82__;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional139;
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional139=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional139) {
                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional140=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional140) {
                                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional142;
struct tuple2$2charphsTypeph* __result83__;
void* right_value94;
struct tuple2$2charphsTypeph* result_97;
_Bool _if_conditional143;
void* right_value95;
char* __dec_obj26;
_Bool _if_conditional144;
void* right_value134;
struct sType* __dec_obj52;
struct tuple2$2charphsTypeph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&result_97, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value95 = (void*)0;
right_value134 = (void*)0;
                            if(_if_conditional142=self==(void*)0,                            _if_conditional142) {
                                __result83__ = __result_obj__ = (void*)0;
                                return __result83__;
                            }
                            result_97=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value94=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional143=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional143) {
                                __dec_obj26=result_97->v1;
                                result_97->v1=(char*)come_increment_ref_count(((char*)(right_value95=string_clone(self->v1))));
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional144=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional144) {
                                __dec_obj52=result_97->v2;
                                result_97->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(self->v2))));
                                come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                            __result104__ = __result_obj__ = result_97;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_97, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result104__;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional145;
struct sType* __result84__;
void* right_value96;
struct sType* result_98;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value103;
struct list$1sTypeph* __dec_obj30;
_Bool _if_conditional151;
void* right_value106;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional155;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj34;
_Bool _if_conditional158;
void* right_value110;
char* __dec_obj35;
_Bool _if_conditional159;
void* right_value111;
struct list$1sTypeph* __dec_obj36;
_Bool _if_conditional160;
void* right_value118;
struct list$1sNodeph* __dec_obj40;
_Bool _if_conditional164;
_Bool _if_conditional165;
void* right_value119;
struct list$1sTypeph* __dec_obj41;
_Bool _if_conditional166;
void* right_value126;
struct list$1charph* __dec_obj45;
_Bool _if_conditional170;
void* right_value129;
struct tuple1$1sTypeph* __dec_obj47;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value130;
struct sNode* __dec_obj48;
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
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value131;
struct sNode* __dec_obj49;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value132;
char* __dec_obj50;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value133;
char* __dec_obj51;
_Bool _if_conditional211;
struct sType* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&result_98, 0, sizeof(struct sType*));
right_value103 = (void*)0;
right_value106 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value126 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
                                    if(_if_conditional145=self==(void*)0,                                    _if_conditional145) {
                                        __result84__ = __result_obj__ = (void*)0;
                                        return __result84__;
                                    }
                                    result_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                    come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional146=self!=((void*)0),                                    _if_conditional146) {
                                        result_98->mClass=self->mClass;
                                    }
                                    if(_if_conditional147=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional147) {
                                        __dec_obj30=result_98->mMultipleTypes;
                                        result_98->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value103=list$1sTypeph_clone(self->mMultipleTypes))));
                                        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional151=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional151) {
                                        __dec_obj32=result_98->mNoSolvedGenericsType;
                                        result_98->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value106=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional155=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional155) {
                                        __dec_obj34=result_98->mOriginalLoadVarType;
                                        result_98->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional158=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional158) {
                                        __dec_obj35=result_98->mGenericsName;
                                        result_98->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value110=string_clone(self->mGenericsName))));
                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional159=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional159) {
                                        __dec_obj36=result_98->mGenericsTypes;
                                        result_98->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=list$1sTypeph_clone(self->mGenericsTypes))));
                                        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional160=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional160) {
                                        __dec_obj40=result_98->mArrayNum;
                                        result_98->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value118=list$1sNodeph_clone(self->mArrayNum))));
                                        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional164=self!=((void*)0),                                    _if_conditional164) {
                                        result_98->mOmitArrayNum=self->mOmitArrayNum;
                                    }
                                    if(_if_conditional165=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional165) {
                                        __dec_obj41=result_98->mParamTypes;
                                        result_98->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value119=list$1sTypeph_clone(self->mParamTypes))));
                                        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional166=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional166) {
                                        __dec_obj45=result_98->mParamNames;
                                        result_98->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value126=list$1charph_clone(self->mParamNames))));
                                        come_call_finalizer2(list$1charph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional170=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional170) {
                                        __dec_obj47=result_98->mResultType;
                                        result_98->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value129=tuple1$1sTypephp_clone(self->mResultType))));
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional173=self!=((void*)0),                                    _if_conditional173) {
                                        result_98->mVarArgs=self->mVarArgs;
                                    }
                                    if(_if_conditional174=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional174) {
                                        __dec_obj48=result_98->mAlignas;
                                        result_98->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value130=sNode_clone(self->mAlignas))));
                                        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value130) { right_value130 = come_decrement_ref_count2(right_value130, ((struct sNode*)right_value130)->finalize, ((struct sNode*)right_value130)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional175=self!=((void*)0),                                    _if_conditional175) {
                                        result_98->mUnsigned=self->mUnsigned;
                                    }
                                    if(_if_conditional176=self!=((void*)0),                                    _if_conditional176) {
                                        result_98->mShort=self->mShort;
                                    }
                                    if(_if_conditional177=self!=((void*)0),                                    _if_conditional177) {
                                        result_98->mLong=self->mLong;
                                    }
                                    if(_if_conditional178=self!=((void*)0),                                    _if_conditional178) {
                                        result_98->mLongLong=self->mLongLong;
                                    }
                                    if(_if_conditional179=self!=((void*)0),                                    _if_conditional179) {
                                        result_98->mConstant=self->mConstant;
                                    }
                                    if(_if_conditional180=self!=((void*)0),                                    _if_conditional180) {
                                        result_98->mRegister=self->mRegister;
                                    }
                                    if(_if_conditional181=self!=((void*)0),                                    _if_conditional181) {
                                        result_98->mVolatile=self->mVolatile;
                                    }
                                    if(_if_conditional182=self!=((void*)0),                                    _if_conditional182) {
                                        result_98->mStatic=self->mStatic;
                                    }
                                    if(_if_conditional183=self!=((void*)0),                                    _if_conditional183) {
                                        result_98->mExtern=self->mExtern;
                                    }
                                    if(_if_conditional184=self!=((void*)0),                                    _if_conditional184) {
                                        result_98->mRestrict=self->mRestrict;
                                    }
                                    if(_if_conditional185=self!=((void*)0),                                    _if_conditional185) {
                                        result_98->mImmutable=self->mImmutable;
                                    }
                                    if(_if_conditional186=self!=((void*)0),                                    _if_conditional186) {
                                        result_98->mHeap=self->mHeap;
                                    }
                                    if(_if_conditional187=self!=((void*)0),                                    _if_conditional187) {
                                        result_98->mDummyHeap=self->mDummyHeap;
                                    }
                                    if(_if_conditional188=self!=((void*)0),                                    _if_conditional188) {
                                        result_98->mDelegate=self->mDelegate;
                                    }
                                    if(_if_conditional189=self!=((void*)0),                                    _if_conditional189) {
                                        result_98->mShare=self->mShare;
                                    }
                                    if(_if_conditional190=self!=((void*)0),                                    _if_conditional190) {
                                        result_98->mClone=self->mClone;
                                    }
                                    if(_if_conditional191=self!=((void*)0),                                    _if_conditional191) {
                                        result_98->mNoHeap=self->mNoHeap;
                                    }
                                    if(_if_conditional192=self!=((void*)0),                                    _if_conditional192) {
                                        result_98->mNoCallingDestructor=self->mNoCallingDestructor;
                                    }
                                    if(_if_conditional193=self!=((void*)0),                                    _if_conditional193) {
                                        result_98->mRefference=self->mRefference;
                                    }
                                    if(_if_conditional194=self!=((void*)0),                                    _if_conditional194) {
                                        result_98->mException=self->mException;
                                    }
                                    if(_if_conditional195=self!=((void*)0),                                    _if_conditional195) {
                                        result_98->mPointerNum=self->mPointerNum;
                                    }
                                    if(_if_conditional196=self!=((void*)0),                                    _if_conditional196) {
                                        result_98->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                    }
                                    if(_if_conditional197=self!=((void*)0),                                    _if_conditional197) {
                                        result_98->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                    }
                                    if(_if_conditional198=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional198) {
                                        __dec_obj49=result_98->mSizeNum;
                                        result_98->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value131=sNode_clone(self->mSizeNum))));
                                        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value131) { right_value131 = come_decrement_ref_count2(right_value131, ((struct sNode*)right_value131)->finalize, ((struct sNode*)right_value131)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional199=self!=((void*)0),                                    _if_conditional199) {
                                        result_98->mDynamicArrayNum=self->mDynamicArrayNum;
                                    }
                                    if(_if_conditional200=self!=((void*)0),                                    _if_conditional200) {
                                        result_98->mTypeOfExpression=self->mTypeOfExpression;
                                    }
                                    if(_if_conditional201=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional201) {
                                        __dec_obj50=result_98->mOriginalTypeName;
                                        result_98->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(self->mOriginalTypeName))));
                                        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional202=self!=((void*)0),                                    _if_conditional202) {
                                        result_98->mOriginalPointerNum=self->mOriginalPointerNum;
                                    }
                                    if(_if_conditional203=self!=((void*)0),                                    _if_conditional203) {
                                        result_98->mFunctionParam=self->mFunctionParam;
                                    }
                                    if(_if_conditional204=self!=((void*)0),                                    _if_conditional204) {
                                        result_98->mAllocaValue=self->mAllocaValue;
                                    }
                                    if(_if_conditional205=self!=((void*)0),                                    _if_conditional205) {
                                        result_98->mGenericsStruct=self->mGenericsStruct;
                                    }
                                    if(_if_conditional206=self!=((void*)0),                                    _if_conditional206) {
                                        result_98->mSolvedGenericsName=self->mSolvedGenericsName;
                                    }
                                    if(_if_conditional207=self!=((void*)0),                                    _if_conditional207) {
                                        result_98->mComeMemCore=self->mComeMemCore;
                                    }
                                    if(_if_conditional208=self!=((void*)0),                                    _if_conditional208) {
                                        result_98->mInline=self->mInline;
                                    }
                                    if(_if_conditional209=self!=((void*)0),                                    _if_conditional209) {
                                        result_98->mNullValue=self->mNullValue;
                                    }
                                    if(_if_conditional210=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional210) {
                                        __dec_obj51=result_98->mAsmName;
                                        result_98->mAsmName=(char*)come_increment_ref_count(((char*)(right_value133=string_clone(self->mAsmName))));
                                        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional211=self!=((void*)0),                                    _if_conditional211) {
                                        result_98->mArrayPointerType=self->mArrayPointerType;
                                    }
                                    __result103__ = __result_obj__ = result_98;
                                    come_call_finalizer2(sType_finalize,result_98, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result103__;
                                    come_call_finalizer2(sType_finalize,result_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional148;
struct list$1sTypeph* __result85__;
void* right_value97;
void* right_value98;
struct list$1sTypeph* result_99;
struct list_item$1sTypeph* it_100;
_Bool _while_condtional17;
void* right_value102;
struct list$1sTypeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
right_value98 = (void*)0;
memset(&result_99, 0, sizeof(struct list$1sTypeph*));
memset(&it_100, 0, sizeof(struct list_item$1sTypeph*));
right_value102 = (void*)0;
                                            if(_if_conditional148=self==((void*)0),                                            _if_conditional148) {
                                                __result85__ = __result_obj__ = ((void*)0);
                                                return __result85__;
                                            }
                                            result_99=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value98=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value97=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            it_100=self->head;
                                            while(_while_condtional17=it_100!=((void*)0),                                            _while_condtional17) {
                                                list$1sTypeph_add(result_99,(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(it_100->item)))));
                                                come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                it_100=it_100->next;
                                            }
                                            __result88__ = __result_obj__ = result_99;
                                            come_call_finalizer2(list$1sTypephp_finalize,result_99, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result88__;
                                            come_call_finalizer2(list$1sTypephp_finalize,result_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result86__ = __result_obj__ = self;
                                                come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result86__;
                                                come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional149;
void* right_value99;
struct list_item$1sTypeph* litem_101;
struct sType* __dec_obj27;
_Bool _if_conditional150;
void* right_value100;
struct list_item$1sTypeph* litem_102;
struct sType* __dec_obj28;
void* right_value101;
struct list_item$1sTypeph* litem_103;
struct sType* __dec_obj29;
struct list$1sTypeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&litem_101, 0, sizeof(struct list_item$1sTypeph*));
right_value100 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1sTypeph*));
right_value101 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1sTypeph*));
                                                    if(_if_conditional149=self->len==0,                                                    _if_conditional149) {
                                                        litem_101=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value99=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_101->prev=((void*)0);
                                                        litem_101->next=((void*)0);
                                                        __dec_obj27=litem_101->item;
                                                        litem_101->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer2(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->tail=litem_101;
                                                        self->head=litem_101;
                                                    }
                                                    else {
                                                        if(_if_conditional150=self->len==1,                                                        _if_conditional150) {
                                                            litem_102=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value100=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_102->prev=self->head;
                                                            litem_102->next=((void*)0);
                                                            __dec_obj28=litem_102->item;
                                                            litem_102->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer2(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->tail=litem_102;
                                                            self->head->next=litem_102;
                                                        }
                                                        else {
                                                            litem_103=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value101=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_103->prev=self->tail;
                                                            litem_103->next=((void*)0);
                                                            __dec_obj29=litem_103->item;
                                                            litem_103->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer2(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->tail->next=litem_103;
                                                            self->tail=litem_103;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result87__ = __result_obj__ = self;
                                                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result87__;
                                                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional153=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional153) {
                                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional161;
struct list$1sNodeph* __result93__;
void* right_value112;
void* right_value113;
struct list$1sNodeph* result_106;
struct list_item$1sNodeph* it_107;
_Bool _while_condtional18;
void* right_value117;
struct list$1sNodeph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&result_106, 0, sizeof(struct list$1sNodeph*));
memset(&it_107, 0, sizeof(struct list_item$1sNodeph*));
right_value117 = (void*)0;
                                            if(_if_conditional161=self==((void*)0),                                            _if_conditional161) {
                                                __result93__ = __result_obj__ = ((void*)0);
                                                return __result93__;
                                            }
                                            result_106=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value113=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value112=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                                            come_call_finalizer2(list$1sNodephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(list$1sNodephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            it_107=self->head;
                                            while(_while_condtional18=it_107!=((void*)0),                                            _while_condtional18) {
                                                list$1sNodeph_add(result_106,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(it_107->item)))));
                                                if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                it_107=it_107->next;
                                            }
                                            __result96__ = __result_obj__ = result_106;
                                            come_call_finalizer2(list$1sNodephp_finalize,result_106, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result96__;
                                            come_call_finalizer2(list$1sNodephp_finalize,result_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result94__ = __result_obj__ = self;
                                                come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result94__;
                                                come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional162;
void* right_value114;
struct list_item$1sNodeph* litem_108;
struct sNode* __dec_obj37;
_Bool _if_conditional163;
void* right_value115;
struct list_item$1sNodeph* litem_109;
struct sNode* __dec_obj38;
void* right_value116;
struct list_item$1sNodeph* litem_110;
struct sNode* __dec_obj39;
struct list$1sNodeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1sNodeph*));
right_value115 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1sNodeph*));
right_value116 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1sNodeph*));
                                                    if(_if_conditional162=self->len==0,                                                    _if_conditional162) {
                                                        litem_108=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_108->prev=((void*)0);
                                                        litem_108->next=((void*)0);
                                                        __dec_obj37=litem_108->item;
                                                        litem_108->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
                                                        self->tail=litem_108;
                                                        self->head=litem_108;
                                                    }
                                                    else {
                                                        if(_if_conditional163=self->len==1,                                                        _if_conditional163) {
                                                            litem_109=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_109->prev=self->head;
                                                            litem_109->next=((void*)0);
                                                            __dec_obj38=litem_109->item;
                                                            litem_109->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
                                                            self->tail=litem_109;
                                                            self->head->next=litem_109;
                                                        }
                                                        else {
                                                            litem_110=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_110->prev=self->tail;
                                                            litem_110->next=((void*)0);
                                                            __dec_obj39=litem_110->item;
                                                            litem_110->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                                                            self->tail->next=litem_110;
                                                            self->tail=litem_110;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result95__ = __result_obj__ = self;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result95__;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional167;
struct list$1charph* __result97__;
void* right_value120;
void* right_value121;
struct list$1charph* result_111;
struct list_item$1charph* it_112;
_Bool _while_condtional19;
void* right_value125;
struct list$1charph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&result_111, 0, sizeof(struct list$1charph*));
memset(&it_112, 0, sizeof(struct list_item$1charph*));
right_value125 = (void*)0;
                                            if(_if_conditional167=self==((void*)0),                                            _if_conditional167) {
                                                __result97__ = __result_obj__ = ((void*)0);
                                                return __result97__;
                                            }
                                            result_111=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value120=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                                            come_call_finalizer2(list$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(list$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            it_112=self->head;
                                            while(_while_condtional19=it_112!=((void*)0),                                            _while_condtional19) {
                                                list$1charph_add(result_111,(char*)come_increment_ref_count(((char*)(right_value125=string_clone(it_112->item)))));
                                                right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                it_112=it_112->next;
                                            }
                                            __result100__ = __result_obj__ = result_111;
                                            come_call_finalizer2(list$1charphp_finalize,result_111, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result100__;
                                            come_call_finalizer2(list$1charphp_finalize,result_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result98__ = __result_obj__ = self;
                                                come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result98__;
                                                come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional168;
void* right_value122;
struct list_item$1charph* litem_113;
char* __dec_obj42;
_Bool _if_conditional169;
void* right_value123;
struct list_item$1charph* litem_114;
char* __dec_obj43;
void* right_value124;
struct list_item$1charph* litem_115;
char* __dec_obj44;
struct list$1charph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1charph*));
right_value123 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1charph*));
right_value124 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1charph*));
                                                    if(_if_conditional168=self->len==0,                                                    _if_conditional168) {
                                                        litem_113=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value122=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                                        come_call_finalizer2(list_item$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_113->prev=((void*)0);
                                                        litem_113->next=((void*)0);
                                                        __dec_obj42=litem_113->item;
                                                        litem_113->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        self->tail=litem_113;
                                                        self->head=litem_113;
                                                    }
                                                    else {
                                                        if(_if_conditional169=self->len==1,                                                        _if_conditional169) {
                                                            litem_114=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value123=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                                            come_call_finalizer2(list_item$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_114->prev=self->head;
                                                            litem_114->next=((void*)0);
                                                            __dec_obj43=litem_114->item;
                                                            litem_114->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail=litem_114;
                                                            self->head->next=litem_114;
                                                        }
                                                        else {
                                                            litem_115=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value124=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                                            come_call_finalizer2(list_item$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_115->prev=self->tail;
                                                            litem_115->next=((void*)0);
                                                            __dec_obj44=litem_115->item;
                                                            litem_115->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail->next=litem_115;
                                                            self->tail=litem_115;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result99__ = __result_obj__ = self;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                    return __result99__;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional171;
struct tuple1$1sTypeph* __result101__;
void* right_value127;
struct tuple1$1sTypeph* result_116;
_Bool _if_conditional172;
void* right_value128;
struct sType* __dec_obj46;
struct tuple1$1sTypeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
memset(&result_116, 0, sizeof(struct tuple1$1sTypeph*));
right_value128 = (void*)0;
                                            if(_if_conditional171=self==(void*)0,                                            _if_conditional171) {
                                                __result101__ = __result_obj__ = (void*)0;
                                                return __result101__;
                                            }
                                            result_116=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value127=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                            come_call_finalizer2(tuple1$1sTypeph_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional172=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional172) {
                                                __dec_obj46=result_116->v1;
                                                result_116->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(self->v1))));
                                                come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            }
                                            __result102__ = __result_obj__ = result_116;
                                            come_call_finalizer2(tuple1$1sTypeph_finalize,result_116, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result102__;
                                            come_call_finalizer2(tuple1$1sTypeph_finalize,result_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional216;
void* right_value143;
struct list_item$1tuple2$2charphsNodephph* litem_121;
struct tuple2$2charphsNodeph* __dec_obj56;
_Bool _if_conditional217;
void* right_value144;
struct list_item$1tuple2$2charphsNodephph* litem_122;
struct tuple2$2charphsNodeph* __dec_obj57;
void* right_value145;
struct list_item$1tuple2$2charphsNodephph* litem_123;
struct tuple2$2charphsNodeph* __dec_obj58;
struct list$1tuple2$2charphsNodephph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
memset(&litem_121, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value144 = (void*)0;
memset(&litem_122, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value145 = (void*)0;
memset(&litem_123, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                    if(_if_conditional216=self->len==0,                    _if_conditional216) {
                        litem_121=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value143=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_121->prev=((void*)0);
                        litem_121->next=((void*)0);
                        __dec_obj56=litem_121->item;
                        litem_121->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_121;
                        self->head=litem_121;
                    }
                    else {
                        if(_if_conditional217=self->len==1,                        _if_conditional217) {
                            litem_122=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value144=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_122->prev=self->head;
                            litem_122->next=((void*)0);
                            __dec_obj57=litem_122->item;
                            litem_122->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_122;
                            self->head->next=litem_122;
                        }
                        else {
                            litem_123=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value145=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_123->prev=self->tail;
                            litem_123->next=((void*)0);
                            __dec_obj58=litem_123->item;
                            litem_123->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_123;
                            self->tail=litem_123;
                        }
                    }
                    self->len++;
                    __result107__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result107__;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj59;
struct sNode* __dec_obj60;
struct tuple2$2charphsNodeph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj59=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj60=self->v2;
                    self->v2=(struct sNode*)come_increment_ref_count(v2);
                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
                    __result108__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result108__;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional232;
char* source_head_125;
_Bool output_126;
char* type_name_127;
_Bool _if_conditional233;
void* right_value158;
char* __dec_obj65;
_Bool _if_conditional234;
void* right_value159;
char* __dec_obj66;
void* right_value160;
void* right_value161;
void* right_value162;
void* right_value163;
struct list$1tuple2$2charphsNodephph* elements_128;
_Bool _while_condtional21;
void* right_value164;
char* element_name_129;
_Bool _if_conditional235;
_Bool no_comma_130;
void* right_value165;
struct sNode* element_value_131;
void* right_value166;
void* right_value167;
void* right_value168;
void* right_value169;
_Bool _if_conditional236;
_Bool _if_conditional237;
char* source_tail_132;
void* right_value170;
void* right_value171;
struct buffer* header_133;
void* right_value172;
void* right_value173;
void* right_value174;
struct sNode* _inf_value2;
struct sEnumNode* _inf_obj_value2;
void* right_value180;
struct sNode* __result114__;
void* right_value181;
struct sNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_125, 0, sizeof(char*));
memset(&output_126, 0, sizeof(_Bool));
memset(&type_name_127, 0, sizeof(char*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&elements_128, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value164 = (void*)0;
memset(&element_name_129, 0, sizeof(char*));
memset(&no_comma_130, 0, sizeof(_Bool));
right_value165 = (void*)0;
memset(&element_value_131, 0, sizeof(struct sNode*));
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&source_tail_132, 0, sizeof(char*));
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&header_133, 0, sizeof(struct buffer*));
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
    if(_if_conditional232=charp_operator_equals(buf,"enum"),    _if_conditional232) {
        source_head_125=info->p;
        output_126=(_Bool)1;
        type_name_127=((void*)0);
        if(_if_conditional233=*info->p==123,        _if_conditional233) {
            __dec_obj65=type_name_127;
            type_name_127=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(""))));
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            if(_if_conditional234=map$2charphsClassph_at(info->classes,type_name_127,((void*)0))==((void*)0),            _if_conditional234) {
            }
            else {
                output_126=(_Bool)0;
            }
            __dec_obj66=type_name_127;
            type_name_127=(char*)come_increment_ref_count(((char*)(right_value159=parse_word(info))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_127),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value161=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value160=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 207, "sClass")))),type_name_127,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info)))));
            come_call_finalizer2(sClass_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        expected_next_character(123,info);
        elements_128=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value163=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value162=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 212, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional21=(_Bool)1,        _while_condtional21) {
            parse_sharp_v5(info);
            element_name_129=(char*)come_increment_ref_count(((char*)(right_value164=parse_word(info))));
            right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(_if_conditional235=*info->p==61,            _if_conditional235) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_130=info->no_comma;
                info->no_comma=(_Bool)1;
                element_value_131=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value165=expression_v13(info))));
                if(right_value165) { right_value165 = come_decrement_ref_count2(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_130;
                list$1tuple2$2charphsNodephph_push_back(elements_128,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value167=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value166=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 229, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_129),(struct sNode*)come_increment_ref_count(element_value_131))))));
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(element_value_131) { element_value_131 = come_decrement_ref_count2(element_value_131, ((struct sNode*)element_value_131)->finalize, ((struct sNode*)element_value_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1tuple2$2charphsNodephph_push_back(elements_128,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value169=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value168=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 232, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_129),((void*)0))))));
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            parse_sharp_v5(info);
            if(_if_conditional236=*info->p==44,            _if_conditional236) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(_if_conditional237=*info->p==125,            _if_conditional237) {
                info->p++;
                skip_spaces_and_lf(info);
                element_name_129 = come_decrement_ref_count2(element_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            element_name_129 = come_decrement_ref_count2(element_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        source_tail_132=info->p;
        header_133=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value171=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 251, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_133,"enum ");
        buffer_append(header_133,source_head_125,source_tail_132-source_head_125);
        add_come_code_at_come_header(info,"%s;\n",((char*)(right_value172=buffer_to_string(header_133))));
        right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 257, "struct sNode");
        _inf_obj_value2=come_increment_ref_count(((struct sEnumNode*)(right_value174=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value173=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 257, "sEnumNode")))),(char*)come_increment_ref_count(type_name_127),elements_128,output_126,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sEnumNode_finalize;
        _inf_value2->clone=(void*)sEnumNode_clone;
        _inf_value2->compile=(void*)sEnumNode_compile;
        _inf_value2->sline=(void*)sEnumNode_sline;
        _inf_value2->sname=(void*)sEnumNode_sname;
        _inf_value2->terminated=(void*)sEnumNode_terminated;
        _inf_value2->kind=(void*)sEnumNode_kind;
        __result114__ = __result_obj__ = ((struct sNode*)(right_value180=_inf_value2));
        type_name_127 = come_decrement_ref_count2(type_name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,elements_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sEnumNode_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sEnumNode_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value180) { right_value180 = come_decrement_ref_count2(right_value180, ((struct sNode*)right_value180)->finalize, ((struct sNode*)right_value180)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result114__;
        type_name_127 = come_decrement_ref_count2(type_name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,elements_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result115__ = __result_obj__ = ((struct sNode*)(right_value181=top_level_v95(buf,head,head_sline,info)));
    if(right_value181) { right_value181 = come_decrement_ref_count2(right_value181, ((struct sNode*)right_value181)->finalize, ((struct sNode*)right_value181)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result115__;
}

static void sEnumNode_finalize(struct sEnumNode* self){
void* __result_obj__;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional238=self!=((void*)0)&&self->mTypeName!=((void*)0),            _if_conditional238) {
                self->mTypeName = come_decrement_ref_count2(self->mTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional239=self!=((void*)0)&&self->mElements!=((void*)0),            _if_conditional239) {
                come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->mElements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional240=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional240) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional241=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional241) {
                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self){
void* __result_obj__;
_Bool _if_conditional242;
struct sEnumNode* __result112__;
void* right_value175;
struct sEnumNode* result_134;
_Bool _if_conditional243;
void* right_value176;
char* __dec_obj67;
_Bool _if_conditional244;
void* right_value177;
struct list$1tuple2$2charphsNodephph* __dec_obj68;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value178;
char* __dec_obj69;
_Bool _if_conditional247;
_Bool _if_conditional248;
void* right_value179;
char* __dec_obj70;
struct sEnumNode* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
memset(&result_134, 0, sizeof(struct sEnumNode*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
            if(_if_conditional242=self==(void*)0,            _if_conditional242) {
                __result112__ = __result_obj__ = (void*)0;
                return __result112__;
            }
            result_134=(struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value175=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "sEnumNode_clone", 3, "sEnumNode"))));
            come_call_finalizer2(sEnumNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional243=self!=((void*)0)&&self->mTypeName!=((void*)0),            _if_conditional243) {
                __dec_obj67=result_134->mTypeName;
                result_134->mTypeName=(char*)come_increment_ref_count(((char*)(right_value176=string_clone(self->mTypeName))));
                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional244=self!=((void*)0)&&self->mElements!=((void*)0),            _if_conditional244) {
                __dec_obj68=result_134->mElements;
                result_134->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value177=list$1tuple2$2charphsNodephphp_clone(self->mElements))));
                come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional245=self!=((void*)0),            _if_conditional245) {
                result_134->sline=self->sline;
            }
            if(_if_conditional246=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional246) {
                __dec_obj69=result_134->sname;
                result_134->sname=(char*)come_increment_ref_count(((char*)(right_value178=string_clone(self->sname))));
                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional247=self!=((void*)0),            _if_conditional247) {
                result_134->mOutput=self->mOutput;
            }
            if(_if_conditional248=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional248) {
                __dec_obj70=result_134->mDeclareSName;
                result_134->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value179=string_clone(self->mDeclareSName))));
                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result113__ = __result_obj__ = result_134;
            come_call_finalizer2(sEnumNode_finalize,result_134, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result113__;
            come_call_finalizer2(sEnumNode_finalize,result_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

