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
    _Bool mNobodyStruct;
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
    _Bool mGuardValue;
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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);

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

char* get_none_generics_name(char* class_name);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
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

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
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
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    # 50 "./comelang2.h"
    perror(msg);
    # 51 "./comelang2.h"
    stackframe();
    # 52 "./comelang2.h"
    exit(4);
    # 54 "./comelang2.h"
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
    # 1943 "./comelang2.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1943, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1944 "./comelang2.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1945 "./comelang2.h"
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
    # 1950 "./comelang2.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1950, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1951 "./comelang2.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1952 "./comelang2.h"
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
    # 1957 "./comelang2.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1957, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1958 "./comelang2.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1959 "./comelang2.h"
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
    # 1964 "./comelang2.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1964, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1965 "./comelang2.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1966 "./comelang2.h"
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
    # 1971 "./comelang2.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1971, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1972 "./comelang2.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1973 "./comelang2.h"
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
    # 1978 "./comelang2.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1978, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1979 "./comelang2.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1980 "./comelang2.h"
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
    # 1993 "./comelang2.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1993, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1995 "./comelang2.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1996 "./comelang2.h"
    result_6->p=result_6->memory->buf;
    # 1998 "./comelang2.h"
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
    # 2003 "./comelang2.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2003, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2005 "./comelang2.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2006 "./comelang2.h"
    result_7->p=(char*)result_7->memory->buf;
    # 2008 "./comelang2.h"
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
    # 2013 "./comelang2.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2013, "smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2015 "./comelang2.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2016 "./comelang2.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 2018 "./comelang2.h"
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
    # 2023 "./comelang2.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2023, "smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2025 "./comelang2.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2026 "./comelang2.h"
    result_9->p=(int*)result_9->memory->buf;
    # 2028 "./comelang2.h"
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
    # 2033 "./comelang2.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2033, "smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2035 "./comelang2.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2036 "./comelang2.h"
    result_10->p=(long*)result_10->memory->buf;
    # 2038 "./comelang2.h"
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
    # 2201 "./comelang2.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2201, "smart_pointer$1char")))),self,sizeof(char)*len)));
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
    # 2206 "./comelang2.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2206, "smart_pointer$1short")))),self,sizeof(short short)*len)));
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
    # 2211 "./comelang2.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2211, "smart_pointer$1int")))),self,sizeof(int)*len)));
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
    # 2216 "./comelang2.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2216, "smart_pointer$1long")))),self,sizeof(long)*len)));
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
    # 2221 "./comelang2.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2221, "smart_pointer$1float")))),self,sizeof(float)*len)));
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
    # 2226 "./comelang2.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2226, "smart_pointer$1double")))),self,sizeof(double)*len)));
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2255 "./comelang2.h"
    __result25__ = len;
    return __result25__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2260 "./comelang2.h"
    __result26__ = len;
    return __result26__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2265 "./comelang2.h"
    __result27__ = len;
    return __result27__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2270 "./comelang2.h"
    __result28__ = len;
    return __result28__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2275 "./comelang2.h"
    __result29__ = len;
    return __result29__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2280 "./comelang2.h"
    __result30__ = len;
    return __result30__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value46;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
    # 2341 "./comelang2.h"
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
    # 2346 "./comelang2.h"
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
    # 2351 "./comelang2.h"
    __result33__ = __result_obj__ = ((char*)(right_value48=xsprintf(msg,self)));
    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result33__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1charp_finalize"
        # 0 "smart_pointer$1charp_finalize"
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            # 0 "smart_pointer$1charp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1shortp_finalize"
        # 0 "smart_pointer$1shortp_finalize"
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            # 0 "smart_pointer$1shortp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1intp_finalize"
        # 0 "smart_pointer$1intp_finalize"
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            # 0 "smart_pointer$1intp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1longp_finalize"
        # 0 "smart_pointer$1longp_finalize"
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            # 0 "smart_pointer$1longp_finalize"
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
        # 2045 "./comelang2.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2049 "./comelang2.h"
        self->p=(char*)self->memory->buf;
        # 2051 "./comelang2.h"
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
        # 2045 "./comelang2.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2049 "./comelang2.h"
        self->p=(short short*)self->memory->buf;
        # 2051 "./comelang2.h"
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
        # 2045 "./comelang2.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2049 "./comelang2.h"
        self->p=(int*)self->memory->buf;
        # 2051 "./comelang2.h"
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
        # 2045 "./comelang2.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2049 "./comelang2.h"
        self->p=(long*)self->memory->buf;
        # 2051 "./comelang2.h"
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
        # 2045 "./comelang2.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2049 "./comelang2.h"
        self->p=(float*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result21__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1floatp_finalize"
            # 0 "smart_pointer$1floatp_finalize"
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                # 0 "smart_pointer$1floatp_finalize"
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
        # 2045 "./comelang2.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2049 "./comelang2.h"
        self->p=(double*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result23__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1doublep_finalize"
            # 0 "smart_pointer$1doublep_finalize"
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                # 0 "smart_pointer$1doublep_finalize"
                come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}










char* get_none_generics_name(char* class_name){
void* __result_obj__;
char* p_11;
_Bool _while_condtional1;
_Bool _if_conditional7;
void* right_value49;
void* right_value50;
char* __result34__;
void* right_value51;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_11, 0, sizeof(char*));
right_value49 = (void*)0;
right_value50 = (void*)0;
right_value51 = (void*)0;
    # 5 "14struct.c"
    p_11=class_name;
    # 15 "14struct.c"
    while(_while_condtional1=*p_11,    _while_condtional1) {
        # 13 "14struct.c"
        # 7 "14struct.c"
        if(_if_conditional7=*p_11==36,        _if_conditional7) {
            # 8 "14struct.c"
            __result34__ = __result_obj__ = ((char*)(right_value50=string_substring(((char*)(right_value49=__builtin_string(class_name))),0,p_11-class_name)));
            right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result34__;
        }
        else {
            # 11 "14struct.c"
            p_11++;
        }
    }
    # 15 "14struct.c"
    __result35__ = __result_obj__ = ((char*)(right_value51=__builtin_string(class_name)));
    right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result35__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value52;
void* right_value53;
struct buffer* buf_12;
struct sClass* klass_13;
char* class_name_14;
_Bool _if_conditional9;
int i_15;
struct sType* type_25;
void* right_value54;
char* type_name_26;
int i_27;
_Bool _if_conditional29;
void* right_value55;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
right_value53 = (void*)0;
memset(&buf_12, 0, sizeof(struct buffer*));
memset(&klass_13, 0, sizeof(struct sClass*));
memset(&class_name_14, 0, sizeof(char*));
memset(&i_15, 0, sizeof(int));
memset(&type_25, 0, sizeof(struct sType*));
right_value54 = (void*)0;
memset(&type_name_26, 0, sizeof(char*));
memset(&i_27, 0, sizeof(int));
right_value55 = (void*)0;
    # 20 "14struct.c"
    buf_12=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value53=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value52=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 22 "14struct.c"
    klass_13=generics_type->mClass;
    # 24 "14struct.c"
    class_name_14=klass_13->mName;
    # 26 "14struct.c"
    buffer_append_str(buf_12,class_name_14);
    # 48 "14struct.c"
    # 28 "14struct.c"
    if(_if_conditional9=list$1sTypeph_length(generics_type->mGenericsTypes)>0,    _if_conditional9) {
        # 29 "14struct.c"
        buffer_append_char(buf_12,36);
        # 30 "14struct.c"
        buffer_append_char(buf_12,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        # 46 "14struct.c"
        for(        i_15=0;        i_15<list$1sTypeph_length(generics_type->mGenericsTypes);        i_15++        ){
            # 33 "14struct.c"
            type_25=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_15), "14struct.c", 33, 0));
            # 34 "14struct.c"
            type_name_26=(char*)come_increment_ref_count(((char*)(right_value54=create_generics_name(type_25,info))));
            right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 36 "14struct.c"
            buffer_append_str(buf_12,type_name_26);
            # 42 "14struct.c"
            for(            i_27=0;            i_27<type_25->mPointerNum;            i_27++            ){
                # 39 "14struct.c"
                buffer_append_char(buf_12,112);
            }
            # 45 "14struct.c"
            # 42 "14struct.c"
            if(type_25->mHeap) {
                # 43 "14struct.c"
                buffer_append_str(buf_12,"h");
            }
            type_name_26 = come_decrement_ref_count2(type_name_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 48 "14struct.c"
    __result40__ = __result_obj__ = ((char*)(right_value55=buffer_to_string(buf_12)));
    come_call_finalizer2(buffer_finalize,buf_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result40__;
    come_call_finalizer2(buffer_finalize,buf_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional8;
int __result36__;
int __result37__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./comelang2.h"
        # 364 "./comelang2.h"
        if(_if_conditional8=self==((void*)0),        _if_conditional8) {
            # 365 "./comelang2.h"
            __result36__ = 0;
            return __result36__;
        }
        # 367 "./comelang2.h"
        __result37__ = self->len;
        return __result37__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional10;
struct list_item$1sTypeph* it_16;
int i_17;
_Bool _while_condtional2;
_Bool _if_conditional11;
struct sType* __result38__;
struct sType* default_value_18;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_17, 0, sizeof(int));
memset(&default_value_18, 0, sizeof(struct sType*));
                # 686 "./comelang2.h"
                # 682 "./comelang2.h"
                if(_if_conditional10=position<0,                _if_conditional10) {
                    # 683 "./comelang2.h"
                    position+=self->len;
                }
                # 686 "./comelang2.h"
                it_16=self->head;
                # 687 "./comelang2.h"
                i_17=0;
                # 694 "./comelang2.h"
                while(_while_condtional2=it_16!=((void*)0),                _while_condtional2) {
                    # 692 "./comelang2.h"
                    # 689 "./comelang2.h"
                    if(_if_conditional11=position==i_17,                    _if_conditional11) {
                        # 690 "./comelang2.h"
                        __result38__ = __result_obj__ = it_16->item;
                        return __result38__;
                    }
                    # 692 "./comelang2.h"
                    it_16=it_16->next;
                    # 693 "./comelang2.h"
                    i_17++;
                }
                # 696 "./comelang2.h"
                # 697 "./comelang2.h"
                memset(&default_value_18,0,sizeof(struct sType*));
                # 698 "./comelang2.h"
                __result39__ = __result_obj__ = default_value_18;
                come_call_finalizer2(sType_finalize,default_value_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result39__;
                come_call_finalizer2(sType_finalize,default_value_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sType_finalize"
                    # 0 "sType_finalize"
                    if(_if_conditional12=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                    _if_conditional12) {
                        # 0 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sType_finalize"
                    # 1 "sType_finalize"
                    if(_if_conditional14=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional14) {
                        # 1 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sType_finalize"
                    # 2 "sType_finalize"
                    if(_if_conditional16=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional16) {
                        # 2 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 4 "sType_finalize"
                    # 3 "sType_finalize"
                    if(_if_conditional17=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional17) {
                        # 3 "sType_finalize"
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 5 "sType_finalize"
                    # 4 "sType_finalize"
                    if(_if_conditional18=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional18) {
                        # 4 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 6 "sType_finalize"
                    # 5 "sType_finalize"
                    if(_if_conditional19=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional19) {
                        # 5 "sType_finalize"
                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 7 "sType_finalize"
                    # 6 "sType_finalize"
                    if(_if_conditional21=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional21) {
                        # 6 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 8 "sType_finalize"
                    # 7 "sType_finalize"
                    if(_if_conditional22=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional22) {
                        # 7 "sType_finalize"
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 9 "sType_finalize"
                    # 8 "sType_finalize"
                    if(_if_conditional24=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional24) {
                        # 8 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 10 "sType_finalize"
                    # 9 "sType_finalize"
                    if(_if_conditional25=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional25) {
                        # 9 "sType_finalize"
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 11 "sType_finalize"
                    # 10 "sType_finalize"
                    if(_if_conditional26=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional26) {
                        # 10 "sType_finalize"
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 12 "sType_finalize"
                    # 11 "sType_finalize"
                    if(_if_conditional27=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional27) {
                        # 11 "sType_finalize"
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 13 "sType_finalize"
                    # 12 "sType_finalize"
                    if(_if_conditional28=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional28) {
                        # 12 "sType_finalize"
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_20, 0, sizeof(struct list_item$1sTypeph*));
                            # 123 "./comelang2.h"
                            it_19=self->head;
                            # 129 "./comelang2.h"
                            while(_while_condtional3=it_19!=((void*)0),                            _while_condtional3) {
                                # 125 "./comelang2.h"
                                prev_it_20=it_19;
                                # 126 "./comelang2.h"
                                it_19=it_19->next;
                                # 127 "./comelang2.h"
                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sTypephp_finalize"
                                    # 0 "list_item$1sTypephp_finalize"
                                    if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional13) {
                                        # 0 "list_item$1sTypephp_finalize"
                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypephp_finalize"
                            # 0 "tuple1$1sTypephp_finalize"
                            if(_if_conditional15=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional15) {
                                # 0 "tuple1$1sTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_21;
_Bool _while_condtional4;
struct list_item$1sNodeph* prev_it_22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_22, 0, sizeof(struct list_item$1sNodeph*));
                            # 123 "./comelang2.h"
                            it_21=self->head;
                            # 129 "./comelang2.h"
                            while(_while_condtional4=it_21!=((void*)0),                            _while_condtional4) {
                                # 125 "./comelang2.h"
                                prev_it_22=it_21;
                                # 126 "./comelang2.h"
                                it_21=it_21->next;
                                # 127 "./comelang2.h"
                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sNodephp_finalize"
                                    # 0 "list_item$1sNodephp_finalize"
                                    if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional20) {
                                        # 0 "list_item$1sNodephp_finalize"
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_23;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_23, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_24, 0, sizeof(struct list_item$1charph*));
                            # 123 "./comelang2.h"
                            it_23=self->head;
                            # 129 "./comelang2.h"
                            while(_while_condtional5=it_23!=((void*)0),                            _while_condtional5) {
                                # 125 "./comelang2.h"
                                prev_it_24=it_23;
                                # 126 "./comelang2.h"
                                it_23=it_23->next;
                                # 127 "./comelang2.h"
                                come_call_finalizer2(list_item$1charphp_finalize,prev_it_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1charphp_finalize"
                                    # 0 "list_item$1charphp_finalize"
                                    if(_if_conditional23=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional23) {
                                        # 0 "list_item$1charphp_finalize"
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional30;
void* right_value56;
void* right_value57;
struct buffer* buf_28;
void* right_value58;
struct list$1tuple2$2charphsTypephph* o2_saved_29;
struct tuple2$2charphsTypeph* it_32;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_35;
struct sType* type_36;
void* right_value59;
_Bool _if_conditional38;
void* right_value60;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value57 = (void*)0;
memset(&buf_28, 0, sizeof(struct buffer*));
right_value58 = (void*)0;
memset(&o2_saved_29, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_32, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_35, 0, sizeof(char*));
memset(&type_36, 0, sizeof(struct sType*));
memset(&name_35, 0, sizeof(char*));
memset(&type_36, 0, sizeof(struct sType*));
right_value59 = (void*)0;
right_value60 = (void*)0;
    # 86 "14struct.c"
    # 58 "14struct.c"
    if(_if_conditional30=!klass->mOutputed,    _if_conditional30) {
        # 59 "14struct.c"
        klass->mOutputed=(_Bool)1;
        # 61 "14struct.c"
        buf_28=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value57=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value56=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 64 "14struct.c"
        buffer_append_str(buf_28,((char*)(right_value58=xsprintf("struct %s\n{\n",klass->mName))));
        right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 77 "14struct.c"
        for(        o2_saved_29=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_32=list$1tuple2$2charphsTypephph_begin((o2_saved_29));        !list$1tuple2$2charphsTypephph_end((o2_saved_29));        it_32=list$1tuple2$2charphsTypephph_next((o2_saved_29))        ){
            # 68 "14struct.c"
            multiple_assign_var1=it_32;
            name_35=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            type_36=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
            # 70 "14struct.c"
            type_36->mStatic=(_Bool)0;
            # 72 "14struct.c"
            buffer_append_str(buf_28,"    ");
            # 73 "14struct.c"
            buffer_append_str(buf_28,((char*)(right_value59=make_define_var(type_36,name_35,(_Bool)0,info))));
            right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 74 "14struct.c"
            buffer_append_str(buf_28,";\n");
            name_35 = come_decrement_ref_count2(name_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 77 "14struct.c"
        buffer_append_str(buf_28,"};\n");
        # 85 "14struct.c"
        # 79 "14struct.c"
        if(_if_conditional38=info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname),        _if_conditional38) {
        }
        else {
            # 82 "14struct.c"
            add_come_code_at_source_head(info,"%s",((char*)(right_value60=buffer_to_string(buf_28))));
            right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(buffer_finalize,buf_28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional31;
struct tuple2$2charphsTypeph* result_30;
struct tuple2$2charphsTypeph* __result41__;
_Bool _if_conditional32;
struct tuple2$2charphsTypeph* __result42__;
struct tuple2$2charphsTypeph* result_31;
struct tuple2$2charphsTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_30, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_31, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 290 "./comelang2.h"
            # 285 "./comelang2.h"
            if(_if_conditional31=self==((void*)0),            _if_conditional31) {
                # 286 "./comelang2.h"
                # 287 "./comelang2.h"
                memset(&result_30,0,sizeof(struct tuple2$2charphsTypeph*));
                # 288 "./comelang2.h"
                __result41__ = __result_obj__ = result_30;
                return __result41__;
            }
            # 290 "./comelang2.h"
            self->it=self->head;
            # 296 "./comelang2.h"
            # 292 "./comelang2.h"
            if(self->it) {
                # 293 "./comelang2.h"
                __result42__ = __result_obj__ = self->it->item;
                return __result42__;
            }
            # 296 "./comelang2.h"
            # 297 "./comelang2.h"
            memset(&result_31,0,sizeof(struct tuple2$2charphsTypeph*));
            # 298 "./comelang2.h"
            __result43__ = __result_obj__ = result_31;
            return __result43__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./comelang2.h"
            __result44__ = self==((void*)0)||self->it==((void*)0);
            return __result44__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional33;
struct tuple2$2charphsTypeph* result_33;
struct tuple2$2charphsTypeph* __result45__;
_Bool _if_conditional34;
struct tuple2$2charphsTypeph* __result46__;
struct tuple2$2charphsTypeph* result_34;
struct tuple2$2charphsTypeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_33, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_34, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 308 "./comelang2.h"
            # 302 "./comelang2.h"
            if(_if_conditional33=self==((void*)0)||self->it==((void*)0),            _if_conditional33) {
                # 303 "./comelang2.h"
                # 304 "./comelang2.h"
                memset(&result_33,0,sizeof(struct tuple2$2charphsTypeph*));
                # 305 "./comelang2.h"
                __result45__ = __result_obj__ = result_33;
                return __result45__;
            }
            # 308 "./comelang2.h"
            self->it=self->it->next;
            # 314 "./comelang2.h"
            # 310 "./comelang2.h"
            if(self->it) {
                # 311 "./comelang2.h"
                __result46__ = __result_obj__ = self->it->item;
                return __result46__;
            }
            # 314 "./comelang2.h"
            # 315 "./comelang2.h"
            memset(&result_34,0,sizeof(struct tuple2$2charphsTypeph*));
            # 316 "./comelang2.h"
            __result47__ = __result_obj__ = result_34;
            return __result47__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_37;
_Bool _while_condtional6;
struct list_item$1tuple2$2charphsTypephph* prev_it_38;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_37, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_38, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            # 123 "./comelang2.h"
            it_37=self->head;
            # 129 "./comelang2.h"
            while(_while_condtional6=it_37!=((void*)0),            _while_condtional6) {
                # 125 "./comelang2.h"
                prev_it_38=it_37;
                # 126 "./comelang2.h"
                it_37=it_37->next;
                # 127 "./comelang2.h"
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                    if(_if_conditional35=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional35) {
                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple2$2charphsTypephp_finalize"
                            # 0 "tuple2$2charphsTypephp_finalize"
                            if(_if_conditional36=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional36) {
                                # 0 "tuple2$2charphsTypephp_finalize"
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple2$2charphsTypephp_finalize"
                            # 1 "tuple2$2charphsTypephp_finalize"
                            if(_if_conditional37=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional37) {
                                # 1 "tuple2$2charphsTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sType* type2_39;
_Bool _if_conditional39;
_Bool __result48__;
struct sClass* klass_40;
_Bool _if_conditional40;
_Bool __result49__;
_Bool _if_conditional41;
_Bool __result50__;
int i_41;
_Bool result_42;
_Bool _if_conditional42;
_Bool __result51__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type2_39, 0, sizeof(struct sType*));
memset(&klass_40, 0, sizeof(struct sClass*));
memset(&i_41, 0, sizeof(int));
memset(&result_42, 0, sizeof(_Bool));
    # 90 "14struct.c"
    type2_39=type->mNoSolvedGenericsType->v1;
    # 96 "14struct.c"
    # 92 "14struct.c"
    if(_if_conditional39=type2_39&&is_no_contained_generics_types(type2_39,info),    _if_conditional39) {
        # 93 "14struct.c"
        __result48__ = (_Bool)0;
        return __result48__;
    }
    # 96 "14struct.c"
    klass_40=type->mClass;
    # 101 "14struct.c"
    # 98 "14struct.c"
    if(klass_40->mGenerics) {
        # 99 "14struct.c"
        __result49__ = (_Bool)0;
        return __result49__;
    }
    # 104 "14struct.c"
    # 101 "14struct.c"
    if(klass_40->mMethodGenerics) {
        # 102 "14struct.c"
        __result50__ = (_Bool)0;
        return __result50__;
    }
    # 112 "14struct.c"
    for(    i_41=0;    i_41<list$1sTypeph_length(type->mGenericsTypes);    i_41++    ){
        # 105 "14struct.c"
        result_42=is_no_contained_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_41), "14struct.c", 105, 1)),info);
        # 110 "14struct.c"
        # 107 "14struct.c"
        if(_if_conditional42=!result_42,        _if_conditional42) {
            # 108 "14struct.c"
            __result51__ = (_Bool)0;
            return __result51__;
        }
    }
    # 112 "14struct.c"
    __result52__ = (_Bool)1;
    return __result52__;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sType* type2_43;
_Bool _if_conditional43;
_Bool __result53__;
struct sClass* klass_44;
_Bool _if_conditional44;
_Bool __result54__;
int i_45;
_Bool result_46;
_Bool _if_conditional45;
_Bool __result55__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type2_43, 0, sizeof(struct sType*));
memset(&klass_44, 0, sizeof(struct sClass*));
memset(&i_45, 0, sizeof(int));
memset(&result_46, 0, sizeof(_Bool));
    # 117 "14struct.c"
    type2_43=type->mNoSolvedGenericsType->v1;
    # 123 "14struct.c"
    # 119 "14struct.c"
    if(_if_conditional43=type2_43&&is_contained_method_generics_types(type2_43,info),    _if_conditional43) {
        # 120 "14struct.c"
        __result53__ = (_Bool)1;
        return __result53__;
    }
    # 123 "14struct.c"
    klass_44=type->mClass;
    # 128 "14struct.c"
    # 125 "14struct.c"
    if(klass_44->mMethodGenerics) {
        # 126 "14struct.c"
        __result54__ = (_Bool)1;
        return __result54__;
    }
    # 136 "14struct.c"
    for(    i_45=0;    i_45<list$1sTypeph_length(type->mGenericsTypes);    i_45++    ){
        # 129 "14struct.c"
        result_46=is_contained_method_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_45), "14struct.c", 129, 2)),info);
        # 134 "14struct.c"
        # 131 "14struct.c"
        if(result_46) {
            # 132 "14struct.c"
            __result55__ = (_Bool)1;
            return __result55__;
        }
    }
    # 136 "14struct.c"
    __result56__ = (_Bool)0;
    return __result56__;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value61;
char* new_name_47;
_Bool _if_conditional50;
void* right_value97;
struct sType* type2_68;
struct sClass* generics_class_72;
_Bool _if_conditional131;
_Bool __result83__;
void* right_value98;
void* right_value99;
struct sClass* new_class_73;
void* right_value106;
int i_118;
struct list$1tuple2$2charphsTypephph* o2_saved_119;
struct tuple2$2charphsTypeph* it_120;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_121;
struct sType* type_122;
void* right_value107;
struct sType* new_type_123;
void* right_value111;
void* right_value112;
void* right_value113;
void* right_value114;
void* right_value115;
struct sType* __dec_obj40;
_Bool _if_conditional183;
struct sClass* generics_class_129;
_Bool _if_conditional184;
_Bool __result111__;
void* right_value116;
void* right_value117;
struct sClass* new_class_130;
void* right_value118;
_Bool existance_method_generics_131;
int i_132;
struct list$1tuple2$2charphsTypephph* o2_saved_133;
struct tuple2$2charphsTypeph* it_134;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_135;
struct sType* type_136;
void* right_value119;
struct sType* new_type_137;
_Bool _if_conditional185;
void* right_value120;
void* right_value121;
void* right_value122;
void* right_value123;
void* right_value124;
struct sType* __dec_obj41;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value125;
struct sType* __dec_obj42;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
memset(&new_name_47, 0, sizeof(char*));
right_value97 = (void*)0;
memset(&type2_68, 0, sizeof(struct sType*));
memset(&generics_class_72, 0, sizeof(struct sClass*));
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&new_class_73, 0, sizeof(struct sClass*));
right_value106 = (void*)0;
memset(&i_118, 0, sizeof(int));
memset(&o2_saved_119, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_120, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_121, 0, sizeof(char*));
memset(&type_122, 0, sizeof(struct sType*));
memset(&name_121, 0, sizeof(char*));
memset(&type_122, 0, sizeof(struct sType*));
right_value107 = (void*)0;
memset(&new_type_123, 0, sizeof(struct sType*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&generics_class_129, 0, sizeof(struct sClass*));
right_value116 = (void*)0;
right_value117 = (void*)0;
memset(&new_class_130, 0, sizeof(struct sClass*));
right_value118 = (void*)0;
memset(&existance_method_generics_131, 0, sizeof(_Bool));
memset(&i_132, 0, sizeof(int));
memset(&o2_saved_133, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_134, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_135, 0, sizeof(char*));
memset(&type_136, 0, sizeof(struct sType*));
memset(&name_135, 0, sizeof(char*));
memset(&type_136, 0, sizeof(struct sType*));
right_value119 = (void*)0;
memset(&new_type_137, 0, sizeof(struct sType*));
right_value120 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
    # 141 "14struct.c"
    new_name_47=(char*)come_increment_ref_count(((char*)(right_value61=create_generics_name(type,info))));
    right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 217 "14struct.c"
    # 143 "14struct.c"
    if(_if_conditional50=is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(info->classes,new_name_47),    _if_conditional50) {
        # 144 "14struct.c"
        type2_68=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 146 "14struct.c"
        generics_class_72=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
        # 153 "14struct.c"
        # 148 "14struct.c"
        if(_if_conditional131=generics_class_72==((void*)0),        _if_conditional131) {
            # 149 "14struct.c"
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            # 150 "14struct.c"
            __result83__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,type2_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            new_name_47 = come_decrement_ref_count2(new_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result83__;
        }
        # 153 "14struct.c"
        new_class_73=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value99=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value98=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 153, "sClass")))),new_name_47,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 155 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(new_name_47)))),(struct sClass*)come_increment_ref_count(new_class_73));
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 157 "14struct.c"
        i_118=0;
        # 166 "14struct.c"
        for(        o2_saved_119=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_72->mFields)),it_120=list$1tuple2$2charphsTypephph_begin((o2_saved_119));        !list$1tuple2$2charphsTypephph_end((o2_saved_119));        it_120=list$1tuple2$2charphsTypephph_next((o2_saved_119))        ){
            # 159 "14struct.c"
            multiple_assign_var2=it_120;
            name_121=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_122=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            # 161 "14struct.c"
            new_type_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=solve_generics(type_122,type2_68,info))));
            come_call_finalizer2(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 163 "14struct.c"
            list$1tuple2$2charphsTypephph_push_back(new_class_73->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value114=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value113=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 163, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value111=string_clone(name_121)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(new_type_123)))))))));
            right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            name_121 = come_decrement_ref_count2(name_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,new_type_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 166 "14struct.c"
        __dec_obj40=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 167 "14struct.c"
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        # 168 "14struct.c"
        type->mClass=new_class_73;
        # 169 "14struct.c"
        list$1sTypeph_reset(type->mGenericsTypes);
        # 171 "14struct.c"
        output_struct(new_class_73,info);
        come_call_finalizer2(sType_finalize,type2_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,new_class_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 217 "14struct.c"
        # 173 "14struct.c"
        if(_if_conditional183=!map$2charphsClassph_find(info->classes,new_name_47),        _if_conditional183) {
            # 174 "14struct.c"
            generics_class_129=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
            # 181 "14struct.c"
            # 176 "14struct.c"
            if(_if_conditional184=generics_class_129==((void*)0),            _if_conditional184) {
                # 177 "14struct.c"
                err_msg(info,"generics_class(%s) is null",type->mClass->mName);
                # 178 "14struct.c"
                __result111__ = (_Bool)0;
                new_name_47 = come_decrement_ref_count2(new_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result111__;
            }
            # 181 "14struct.c"
            new_class_130=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value117=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value116=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 181, "sClass")))),new_name_47,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            come_call_finalizer2(sClass_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 183 "14struct.c"
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(new_name_47)))),(struct sClass*)come_increment_ref_count(new_class_130));
            right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 185 "14struct.c"
            existance_method_generics_131=(_Bool)0;
            # 186 "14struct.c"
            i_132=0;
            # 199 "14struct.c"
            for(            o2_saved_133=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_129->mFields)),it_134=list$1tuple2$2charphsTypephph_begin((o2_saved_133));            !list$1tuple2$2charphsTypephph_end((o2_saved_133));            it_134=list$1tuple2$2charphsTypephph_next((o2_saved_133))            ){
                # 188 "14struct.c"
                multiple_assign_var3=it_134;
                name_135=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                type_136=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                # 190 "14struct.c"
                new_type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=solve_generics(type_136,generics_type,info))));
                come_call_finalizer2(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 196 "14struct.c"
                # 192 "14struct.c"
                if(_if_conditional185=is_contained_method_generics_types(new_type_137,info),                _if_conditional185) {
                }
                # 196 "14struct.c"
                list$1tuple2$2charphsTypephph_push_back(new_class_130->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value123=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value122=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 196, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value120=string_clone(name_135)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(new_type_137)))))))));
                right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                name_135 = come_decrement_ref_count2(name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,new_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 199 "14struct.c"
            __dec_obj41=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(type))));
            come_call_finalizer2(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 200 "14struct.c"
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            # 201 "14struct.c"
            type->mClass=new_class_130;
            # 202 "14struct.c"
            list$1sTypeph_reset(type->mGenericsTypes);
            # 207 "14struct.c"
            # 204 "14struct.c"
            if(_if_conditional186=!existance_method_generics_131,            _if_conditional186) {
                # 205 "14struct.c"
                output_struct(new_class_130,info);
            }
            come_call_finalizer2(sClass_finalize,new_class_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 213 "14struct.c"
            # 209 "14struct.c"
            if(_if_conditional187=type->mNoSolvedGenericsType->v1==((void*)0),            _if_conditional187) {
                # 210 "14struct.c"
                __dec_obj42=type->mNoSolvedGenericsType->v1;
                type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_clone(type))));
                come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 211 "14struct.c"
                type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            }
            # 213 "14struct.c"
            type->mClass=map$2charphsClassphp_operator_load_element(info->classes,new_name_47);
            # 214 "14struct.c"
            list$1sTypeph_reset(type->mGenericsTypes);
        }
    }
    # 217 "14struct.c"
    __result112__ = (_Bool)1;
    new_name_47 = come_decrement_ref_count2(new_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result112__;
    new_name_47 = come_decrement_ref_count2(new_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
unsigned int hash_48;
int it_49;
_Bool _while_condtional7;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool __result57__;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool __result58__;
_Bool __result59__;
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_48, 0, sizeof(unsigned int));
memset(&it_49, 0, sizeof(int));
        # 1625 "./comelang2.h"
        hash_48=string_get_hash_key(((char*)key))%self->size;
        # 1626 "./comelang2.h"
        it_49=hash_48;
        # 1650 "./comelang2.h"
        while(_while_condtional7=(_Bool)1,        _while_condtional7) {
            # 1648 "./comelang2.h"
            # 1629 "./comelang2.h"
            if(_if_conditional46=self->item_existance[it_49],            _if_conditional46) {
                # 1636 "./comelang2.h"
                # 1631 "./comelang2.h"
                if(_if_conditional47=string_equals(self->keys[it_49],key),                _if_conditional47) {
                    # 1633 "./comelang2.h"
                    __result57__ = (_Bool)1;
                    return __result57__;
                }
                # 1636 "./comelang2.h"
                it_49++;
                # 1644 "./comelang2.h"
                # 1638 "./comelang2.h"
                if(_if_conditional48=it_49>=self->size,                _if_conditional48) {
                    # 1639 "./comelang2.h"
                    it_49=0;
                }
                else {
                    # 1644 "./comelang2.h"
                    # 1641 "./comelang2.h"
                    if(_if_conditional49=it_49==hash_48,                    _if_conditional49) {
                        # 1642 "./comelang2.h"
                        __result58__ = (_Bool)0;
                        return __result58__;
                    }
                }
            }
            else {
                # 1646 "./comelang2.h"
                __result59__ = (_Bool)0;
                return __result59__;
            }
        }
        # 1650 "./comelang2.h"
        __result60__ = (_Bool)0;
        return __result60__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional51;
struct sType* __result61__;
void* right_value62;
struct sType* result_50;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value69;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional57;
void* right_value72;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional61;
void* right_value73;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional62;
void* right_value74;
char* __dec_obj19;
_Bool _if_conditional63;
void* right_value75;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional64;
void* right_value83;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional77;
_Bool _if_conditional78;
void* right_value84;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional79;
void* right_value91;
struct list$1charph* __dec_obj29;
_Bool _if_conditional83;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value93;
struct sNode* __dec_obj31;
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
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value94;
struct sNode* __dec_obj32;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value95;
char* __dec_obj33;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
void* right_value96;
char* __dec_obj34;
_Bool _if_conditional123;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
memset(&result_50, 0, sizeof(struct sType*));
right_value69 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional51=self==(void*)0,            _if_conditional51) {
                # 2 "sType_clone"
                __result61__ = __result_obj__ = (void*)0;
                return __result61__;
            }
            # 3 "sType_clone"
            result_50=(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer2(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional52=self!=((void*)0),            _if_conditional52) {
                # 4 "sType_clone"
                result_50->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional53=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional53) {
                # 5 "sType_clone"
                __dec_obj15=result_50->mMultipleTypes;
                result_50->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value69=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional57=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional57) {
                # 6 "sType_clone"
                __dec_obj17=result_50->mNoSolvedGenericsType;
                result_50->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value72=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional61=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional61) {
                # 7 "sType_clone"
                __dec_obj18=result_50->mOriginalLoadVarType;
                result_50->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value73=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional62=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional62) {
                # 8 "sType_clone"
                __dec_obj19=result_50->mGenericsName;
                result_50->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value74=string_clone(self->mGenericsName))));
                __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional63=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional63) {
                # 9 "sType_clone"
                __dec_obj20=result_50->mGenericsTypes;
                result_50->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value75=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional64=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional64) {
                # 10 "sType_clone"
                __dec_obj24=result_50->mArrayNum;
                result_50->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value83=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                # 11 "sType_clone"
                result_50->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional78=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional78) {
                # 12 "sType_clone"
                __dec_obj25=result_50->mParamTypes;
                result_50->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional79=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional79) {
                # 13 "sType_clone"
                __dec_obj29=result_50->mParamNames;
                result_50->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional83=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional83) {
                # 14 "sType_clone"
                __dec_obj30=result_50->mResultType;
                result_50->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                # 15 "sType_clone"
                result_50->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional85=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional85) {
                # 16 "sType_clone"
                __dec_obj31=result_50->mAlignas;
                result_50->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value93=sNode_clone(self->mAlignas))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value93) { right_value93 = come_decrement_ref_count2(right_value93, ((struct sNode*)right_value93)->finalize, ((struct sNode*)right_value93)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                # 17 "sType_clone"
                result_50->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                # 18 "sType_clone"
                result_50->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                # 19 "sType_clone"
                result_50->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                # 20 "sType_clone"
                result_50->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                # 21 "sType_clone"
                result_50->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                # 22 "sType_clone"
                result_50->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                # 23 "sType_clone"
                result_50->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                # 24 "sType_clone"
                result_50->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                # 25 "sType_clone"
                result_50->mExtern=self->mExtern;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                # 26 "sType_clone"
                result_50->mRestrict=self->mRestrict;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                # 27 "sType_clone"
                result_50->mImmutable=self->mImmutable;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                # 28 "sType_clone"
                result_50->mHeap=self->mHeap;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                # 29 "sType_clone"
                result_50->mDummyHeap=self->mDummyHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                # 30 "sType_clone"
                result_50->mDelegate=self->mDelegate;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                # 31 "sType_clone"
                result_50->mShare=self->mShare;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                # 32 "sType_clone"
                result_50->mClone=self->mClone;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                # 33 "sType_clone"
                result_50->mNoHeap=self->mNoHeap;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                # 34 "sType_clone"
                result_50->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                # 35 "sType_clone"
                result_50->mRefference=self->mRefference;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                # 36 "sType_clone"
                result_50->mException=self->mException;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                # 37 "sType_clone"
                result_50->mPointerNum=self->mPointerNum;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                # 38 "sType_clone"
                result_50->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                # 39 "sType_clone"
                result_50->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional109=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional109) {
                # 40 "sType_clone"
                __dec_obj32=result_50->mSizeNum;
                result_50->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=sNode_clone(self->mSizeNum))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value94) { right_value94 = come_decrement_ref_count2(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                # 41 "sType_clone"
                result_50->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                # 42 "sType_clone"
                result_50->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional112=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional112) {
                # 43 "sType_clone"
                __dec_obj33=result_50->mOriginalTypeName;
                result_50->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value95=string_clone(self->mOriginalTypeName))));
                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                # 44 "sType_clone"
                result_50->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                # 45 "sType_clone"
                result_50->mFunctionParam=self->mFunctionParam;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                # 46 "sType_clone"
                result_50->mAllocaValue=self->mAllocaValue;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                # 47 "sType_clone"
                result_50->mGenericsStruct=self->mGenericsStruct;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                # 48 "sType_clone"
                result_50->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                # 49 "sType_clone"
                result_50->mComeMemCore=self->mComeMemCore;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                # 50 "sType_clone"
                result_50->mInline=self->mInline;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional120=self!=((void*)0),            _if_conditional120) {
                # 51 "sType_clone"
                result_50->mNullValue=self->mNullValue;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional121=self!=((void*)0),            _if_conditional121) {
                # 52 "sType_clone"
                result_50->mGuardValue=self->mGuardValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional122=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional122) {
                # 53 "sType_clone"
                __dec_obj34=result_50->mAsmName;
                result_50->mAsmName=(char*)come_increment_ref_count(((char*)(right_value96=string_clone(self->mAsmName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional123=self!=((void*)0),            _if_conditional123) {
                # 54 "sType_clone"
                result_50->mArrayPointerType=self->mArrayPointerType;
            }
            # 55 "sType_clone"
            __result78__ = __result_obj__ = result_50;
            come_call_finalizer2(sType_finalize,result_50, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result78__;
            come_call_finalizer2(sType_finalize,result_50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional54;
struct list$1sTypeph* __result62__;
void* right_value63;
void* right_value64;
struct list$1sTypeph* result_51;
struct list_item$1sTypeph* it_52;
_Bool _while_condtional8;
void* right_value68;
struct list$1sTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&result_51, 0, sizeof(struct list$1sTypeph*));
memset(&it_52, 0, sizeof(struct list_item$1sTypeph*));
right_value68 = (void*)0;
                    # 142 "./comelang2.h"
                    # 139 "./comelang2.h"
                    if(_if_conditional54=self==((void*)0),                    _if_conditional54) {
                        # 140 "./comelang2.h"
                        __result62__ = __result_obj__ = ((void*)0);
                        return __result62__;
                    }
                    # 142 "./comelang2.h"
                    result_51=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value64=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value63=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./comelang2.h"
                    it_52=self->head;
                    # 151 "./comelang2.h"
                    while(_while_condtional8=it_52!=((void*)0),                    _while_condtional8) {
                        # 146 "./comelang2.h"
                        list$1sTypeph_add(result_51,(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=sType_clone(it_52->item)))));
                        come_call_finalizer2(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 148 "./comelang2.h"
                        it_52=it_52->next;
                    }
                    # 151 "./comelang2.h"
                    __result65__ = __result_obj__ = result_51;
                    come_call_finalizer2(list$1sTypephp_finalize,result_51, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result65__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./comelang2.h"
                        self->head=((void*)0);
                        # 105 "./comelang2.h"
                        self->tail=((void*)0);
                        # 106 "./comelang2.h"
                        self->len=0;
                        # 108 "./comelang2.h"
                        __result63__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result63__;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional55;
void* right_value65;
struct list_item$1sTypeph* litem_53;
struct sType* __dec_obj12;
_Bool _if_conditional56;
void* right_value66;
struct list_item$1sTypeph* litem_54;
struct sType* __dec_obj13;
void* right_value67;
struct list_item$1sTypeph* litem_55;
struct sType* __dec_obj14;
struct list$1sTypeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1sTypeph*));
right_value66 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1sTypeph*));
right_value67 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1sTypeph*));
                            # 186 "./comelang2.h"
                            # 155 "./comelang2.h"
                            if(_if_conditional55=self->len==0,                            _if_conditional55) {
                                # 156 "./comelang2.h"
                                litem_53=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value65=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./comelang2.h"
                                litem_53->prev=((void*)0);
                                # 159 "./comelang2.h"
                                litem_53->next=((void*)0);
                                # 160 "./comelang2.h"
                                __dec_obj12=litem_53->item;
                                litem_53->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 162 "./comelang2.h"
                                self->tail=litem_53;
                                # 163 "./comelang2.h"
                                self->head=litem_53;
                            }
                            else {
                                # 186 "./comelang2.h"
                                # 165 "./comelang2.h"
                                if(_if_conditional56=self->len==1,                                _if_conditional56) {
                                    # 166 "./comelang2.h"
                                    litem_54=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value66=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./comelang2.h"
                                    litem_54->prev=self->head;
                                    # 169 "./comelang2.h"
                                    litem_54->next=((void*)0);
                                    # 170 "./comelang2.h"
                                    __dec_obj13=litem_54->item;
                                    litem_54->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 172 "./comelang2.h"
                                    self->tail=litem_54;
                                    # 173 "./comelang2.h"
                                    self->head->next=litem_54;
                                }
                                else {
                                    # 176 "./comelang2.h"
                                    litem_55=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value67=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./comelang2.h"
                                    litem_55->prev=self->tail;
                                    # 179 "./comelang2.h"
                                    litem_55->next=((void*)0);
                                    # 180 "./comelang2.h"
                                    __dec_obj14=litem_55->item;
                                    litem_55->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 182 "./comelang2.h"
                                    self->tail->next=litem_55;
                                    # 183 "./comelang2.h"
                                    self->tail=litem_55;
                                }
                            }
                            # 186 "./comelang2.h"
                            self->len++;
                            # 188 "./comelang2.h"
                            __result64__ = __result_obj__ = self;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result64__;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional58;
struct tuple1$1sTypeph* __result66__;
void* right_value70;
struct tuple1$1sTypeph* result_56;
_Bool _if_conditional60;
void* right_value71;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
memset(&result_56, 0, sizeof(struct tuple1$1sTypeph*));
right_value71 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional58=self==(void*)0,                    _if_conditional58) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result66__ = __result_obj__ = (void*)0;
                        return __result66__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_56=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value70=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional60=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional60) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj16=result_56->v1;
                        result_56->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result67__ = __result_obj__ = result_56;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_56, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result67__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional59;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional59=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional59) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional65;
struct list$1sNodeph* __result68__;
void* right_value76;
void* right_value77;
struct list$1sNodeph* result_57;
struct list_item$1sNodeph* it_58;
_Bool _while_condtional9;
void* right_value82;
struct list$1sNodeph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
right_value77 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1sNodeph*));
memset(&it_58, 0, sizeof(struct list_item$1sNodeph*));
right_value82 = (void*)0;
                    # 142 "./comelang2.h"
                    # 139 "./comelang2.h"
                    if(_if_conditional65=self==((void*)0),                    _if_conditional65) {
                        # 140 "./comelang2.h"
                        __result68__ = __result_obj__ = ((void*)0);
                        return __result68__;
                    }
                    # 142 "./comelang2.h"
                    result_57=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value77=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value76=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./comelang2.h"
                    it_58=self->head;
                    # 151 "./comelang2.h"
                    while(_while_condtional9=it_58!=((void*)0),                    _while_condtional9) {
                        # 146 "./comelang2.h"
                        list$1sNodeph_add(result_57,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value82=sNode_clone(it_58->item)))));
                        if(right_value82) { right_value82 = come_decrement_ref_count2(right_value82, ((struct sNode*)right_value82)->finalize, ((struct sNode*)right_value82)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 148 "./comelang2.h"
                        it_58=it_58->next;
                    }
                    # 151 "./comelang2.h"
                    __result73__ = __result_obj__ = result_57;
                    come_call_finalizer2(list$1sNodephp_finalize,result_57, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result73__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./comelang2.h"
                        self->head=((void*)0);
                        # 105 "./comelang2.h"
                        self->tail=((void*)0);
                        # 106 "./comelang2.h"
                        self->len=0;
                        # 108 "./comelang2.h"
                        __result69__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result69__;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional66;
void* right_value78;
struct list_item$1sNodeph* litem_59;
struct sNode* __dec_obj21;
_Bool _if_conditional67;
void* right_value79;
struct list_item$1sNodeph* litem_60;
struct sNode* __dec_obj22;
void* right_value80;
struct list_item$1sNodeph* litem_61;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sNodeph*));
right_value79 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1sNodeph*));
right_value80 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sNodeph*));
                            # 186 "./comelang2.h"
                            # 155 "./comelang2.h"
                            if(_if_conditional66=self->len==0,                            _if_conditional66) {
                                # 156 "./comelang2.h"
                                litem_59=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value78=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./comelang2.h"
                                litem_59->prev=((void*)0);
                                # 159 "./comelang2.h"
                                litem_59->next=((void*)0);
                                # 160 "./comelang2.h"
                                __dec_obj21=litem_59->item;
                                litem_59->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                # 162 "./comelang2.h"
                                self->tail=litem_59;
                                # 163 "./comelang2.h"
                                self->head=litem_59;
                            }
                            else {
                                # 186 "./comelang2.h"
                                # 165 "./comelang2.h"
                                if(_if_conditional67=self->len==1,                                _if_conditional67) {
                                    # 166 "./comelang2.h"
                                    litem_60=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value79=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./comelang2.h"
                                    litem_60->prev=self->head;
                                    # 169 "./comelang2.h"
                                    litem_60->next=((void*)0);
                                    # 170 "./comelang2.h"
                                    __dec_obj22=litem_60->item;
                                    litem_60->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 172 "./comelang2.h"
                                    self->tail=litem_60;
                                    # 173 "./comelang2.h"
                                    self->head->next=litem_60;
                                }
                                else {
                                    # 176 "./comelang2.h"
                                    litem_61=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value80=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./comelang2.h"
                                    litem_61->prev=self->tail;
                                    # 179 "./comelang2.h"
                                    litem_61->next=((void*)0);
                                    # 180 "./comelang2.h"
                                    __dec_obj23=litem_61->item;
                                    litem_61->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 182 "./comelang2.h"
                                    self->tail->next=litem_61;
                                    # 183 "./comelang2.h"
                                    self->tail=litem_61;
                                }
                            }
                            # 186 "./comelang2.h"
                            self->len++;
                            # 188 "./comelang2.h"
                            __result70__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result70__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional68;
struct sNode* __result71__;
void* right_value81;
struct sNode* result_62;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct sNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&result_62, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional68=self==(void*)0,                            _if_conditional68) {
                                # 2 "sNode_clone"
                                __result71__ = __result_obj__ = (void*)0;
                                return __result71__;
                            }
                            # 3 "sNode_clone"
                            result_62=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional69=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional69) {
                                # 4 "sNode_clone"
                                result_62->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional70=self!=((void*)0),                            _if_conditional70) {
                                # 5 "sNode_clone"
                                result_62->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional71=self!=((void*)0),                            _if_conditional71) {
                                # 6 "sNode_clone"
                                result_62->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional72=self!=((void*)0),                            _if_conditional72) {
                                # 7 "sNode_clone"
                                result_62->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional73=self!=((void*)0),                            _if_conditional73) {
                                # 8 "sNode_clone"
                                result_62->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional74=self!=((void*)0),                            _if_conditional74) {
                                # 9 "sNode_clone"
                                result_62->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional75=self!=((void*)0),                            _if_conditional75) {
                                # 10 "sNode_clone"
                                result_62->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional76=self!=((void*)0),                            _if_conditional76) {
                                # 11 "sNode_clone"
                                result_62->kind=self->kind;
                            }
                            # 12 "sNode_clone"
                            __result72__ = __result_obj__ = result_62;
                            if(result_62) { result_62 = come_decrement_ref_count2(result_62, ((struct sNode*)result_62)->finalize, ((struct sNode*)result_62)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result72__;
                            if(result_62) { result_62 = come_decrement_ref_count2(result_62, ((struct sNode*)result_62)->finalize, ((struct sNode*)result_62)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional80;
struct list$1charph* __result74__;
void* right_value85;
void* right_value86;
struct list$1charph* result_63;
struct list_item$1charph* it_64;
_Bool _while_condtional10;
void* right_value90;
struct list$1charph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1charph*));
memset(&it_64, 0, sizeof(struct list_item$1charph*));
right_value90 = (void*)0;
                    # 142 "./comelang2.h"
                    # 139 "./comelang2.h"
                    if(_if_conditional80=self==((void*)0),                    _if_conditional80) {
                        # 140 "./comelang2.h"
                        __result74__ = __result_obj__ = ((void*)0);
                        return __result74__;
                    }
                    # 142 "./comelang2.h"
                    result_63=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value86=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value85=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./comelang2.h"
                    it_64=self->head;
                    # 151 "./comelang2.h"
                    while(_while_condtional10=it_64!=((void*)0),                    _while_condtional10) {
                        # 146 "./comelang2.h"
                        list$1charph_add(result_63,(char*)come_increment_ref_count(((char*)(right_value90=string_clone(it_64->item)))));
                        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 148 "./comelang2.h"
                        it_64=it_64->next;
                    }
                    # 151 "./comelang2.h"
                    __result77__ = __result_obj__ = result_63;
                    come_call_finalizer2(list$1charphp_finalize,result_63, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result77__;
                    come_call_finalizer2(list$1charphp_finalize,result_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./comelang2.h"
                        self->head=((void*)0);
                        # 105 "./comelang2.h"
                        self->tail=((void*)0);
                        # 106 "./comelang2.h"
                        self->len=0;
                        # 108 "./comelang2.h"
                        __result75__ = __result_obj__ = self;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result75__;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional81;
void* right_value87;
struct list_item$1charph* litem_65;
char* __dec_obj26;
_Bool _if_conditional82;
void* right_value88;
struct list_item$1charph* litem_66;
char* __dec_obj27;
void* right_value89;
struct list_item$1charph* litem_67;
char* __dec_obj28;
struct list$1charph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1charph*));
right_value88 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1charph*));
right_value89 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1charph*));
                            # 186 "./comelang2.h"
                            # 155 "./comelang2.h"
                            if(_if_conditional81=self->len==0,                            _if_conditional81) {
                                # 156 "./comelang2.h"
                                litem_65=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value87=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./comelang2.h"
                                litem_65->prev=((void*)0);
                                # 159 "./comelang2.h"
                                litem_65->next=((void*)0);
                                # 160 "./comelang2.h"
                                __dec_obj26=litem_65->item;
                                litem_65->item=(char*)come_increment_ref_count(item);
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 162 "./comelang2.h"
                                self->tail=litem_65;
                                # 163 "./comelang2.h"
                                self->head=litem_65;
                            }
                            else {
                                # 186 "./comelang2.h"
                                # 165 "./comelang2.h"
                                if(_if_conditional82=self->len==1,                                _if_conditional82) {
                                    # 166 "./comelang2.h"
                                    litem_66=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value88=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./comelang2.h"
                                    litem_66->prev=self->head;
                                    # 169 "./comelang2.h"
                                    litem_66->next=((void*)0);
                                    # 170 "./comelang2.h"
                                    __dec_obj27=litem_66->item;
                                    litem_66->item=(char*)come_increment_ref_count(item);
                                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 172 "./comelang2.h"
                                    self->tail=litem_66;
                                    # 173 "./comelang2.h"
                                    self->head->next=litem_66;
                                }
                                else {
                                    # 176 "./comelang2.h"
                                    litem_67=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value89=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./comelang2.h"
                                    litem_67->prev=self->tail;
                                    # 179 "./comelang2.h"
                                    litem_67->next=((void*)0);
                                    # 180 "./comelang2.h"
                                    __dec_obj28=litem_67->item;
                                    litem_67->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 182 "./comelang2.h"
                                    self->tail->next=litem_67;
                                    # 183 "./comelang2.h"
                                    self->tail=litem_67;
                                }
                            }
                            # 186 "./comelang2.h"
                            self->len++;
                            # 188 "./comelang2.h"
                            __result76__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result76__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_69;
unsigned int hash_70;
unsigned int it_71;
_Bool _while_condtional11;
_Bool _if_conditional124;
_Bool _if_conditional125;
struct sClass* __result79__;
_Bool _if_conditional129;
_Bool _if_conditional130;
struct sClass* __result80__;
struct sClass* __result81__;
struct sClass* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_69, 0, sizeof(struct sClass*));
memset(&hash_70, 0, sizeof(unsigned int));
memset(&it_71, 0, sizeof(unsigned int));
            # 1545 "./comelang2.h"
            # 1546 "./comelang2.h"
            memset(&default_value_69,0,sizeof(struct sClass*));
            # 1548 "./comelang2.h"
            hash_70=string_get_hash_key(((char*)key))%self->size;
            # 1549 "./comelang2.h"
            it_71=hash_70;
            # 1573 "./comelang2.h"
            while(_while_condtional11=(_Bool)1,            _while_condtional11) {
                # 1571 "./comelang2.h"
                # 1552 "./comelang2.h"
                if(_if_conditional124=self->item_existance[it_71],                _if_conditional124) {
                    # 1559 "./comelang2.h"
                    # 1554 "./comelang2.h"
                    if(_if_conditional125=string_equals(self->keys[it_71],key),                    _if_conditional125) {
                        # 1556 "./comelang2.h"
                        __result79__ = __result_obj__ = self->items[it_71];
                        come_call_finalizer2(sClass_finalize,default_value_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result79__;
                    }
                    # 1559 "./comelang2.h"
                    it_71++;
                    # 1567 "./comelang2.h"
                    # 1561 "./comelang2.h"
                    if(_if_conditional129=it_71>=self->size,                    _if_conditional129) {
                        # 1562 "./comelang2.h"
                        it_71=0;
                    }
                    else {
                        # 1567 "./comelang2.h"
                        # 1564 "./comelang2.h"
                        if(_if_conditional130=it_71==hash_70,                        _if_conditional130) {
                            # 1565 "./comelang2.h"
                            __result80__ = __result_obj__ = default_value_69;
                            come_call_finalizer2(sClass_finalize,default_value_69, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result80__;
                        }
                    }
                }
                else {
                    # 1569 "./comelang2.h"
                    __result81__ = __result_obj__ = default_value_69;
                    come_call_finalizer2(sClass_finalize,default_value_69, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                }
            }
            # 1573 "./comelang2.h"
            __result82__ = __result_obj__ = default_value_69;
            come_call_finalizer2(sClass_finalize,default_value_69, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer2(sClass_finalize,default_value_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sClass_finalize"
                            # 0 "sClass_finalize"
                            if(_if_conditional126=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional126) {
                                # 0 "sClass_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sClass_finalize"
                            # 1 "sClass_finalize"
                            if(_if_conditional127=self!=((void*)0)&&self->mFields!=((void*)0),                            _if_conditional127) {
                                # 1 "sClass_finalize"
                                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sClass_finalize"
                            # 2 "sClass_finalize"
                            if(_if_conditional128=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional128) {
                                # 2 "sClass_finalize"
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional132;
unsigned int hash_91;
unsigned int it_92;
_Bool _while_condtional14;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool same_key_exist_109;
char* it2_112;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct map$2charphsClassph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_91, 0, sizeof(unsigned int));
memset(&it_92, 0, sizeof(unsigned int));
memset(&same_key_exist_109, 0, sizeof(_Bool));
memset(&it2_112, 0, sizeof(char*));
            # 1393 "./comelang2.h"
            # 1390 "./comelang2.h"
            if(_if_conditional132=self->len*10>=self->size,            _if_conditional132) {
                # 1391 "./comelang2.h"
                map$2charphsClassph_rehash(self);
            }
            # 1393 "./comelang2.h"
            hash_91=string_get_hash_key(key)%self->size;
            # 1394 "./comelang2.h"
            it_92=hash_91;
            # 1452 "./comelang2.h"
            while(_while_condtional14=(_Bool)1,            _while_condtional14) {
                # 1450 "./comelang2.h"
                # 1397 "./comelang2.h"
                if(_if_conditional144=self->item_existance[it_92],                _if_conditional144) {
                    # 1420 "./comelang2.h"
                    # 1399 "./comelang2.h"
                    if(_if_conditional145=string_equals(self->keys[it_92],key),                    _if_conditional145) {
                        # 1410 "./comelang2.h"
                        # 1401 "./comelang2.h"
                        if(_if_conditional146=1,                        _if_conditional146) {
                            # 1402 "./comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_92]);
                            # 1403 "./comelang2.h"
                            self->keys[it_92] = come_decrement_ref_count2(self->keys[it_92], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./comelang2.h"
                            self->keys[it_92]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_92]);
                            # 1408 "./comelang2.h"
                            self->keys[it_92]=key;
                        }
                        # 1417 "./comelang2.h"
                        # 1410 "./comelang2.h"
                        if(_if_conditional166=1,                        _if_conditional166) {
                            # 1411 "./comelang2.h"
                            come_call_finalizer2(sClass_finalize,self->items[it_92], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./comelang2.h"
                            self->items[it_92]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./comelang2.h"
                            self->items[it_92]=item;
                        }
                        # 1417 "./comelang2.h"
                        break;
                    }
                    # 1420 "./comelang2.h"
                    it_92++;
                    # 1430 "./comelang2.h"
                    # 1422 "./comelang2.h"
                    if(_if_conditional167=it_92>=self->size,                    _if_conditional167) {
                        # 1423 "./comelang2.h"
                        it_92=0;
                    }
                    else {
                        # 1430 "./comelang2.h"
                        # 1425 "./comelang2.h"
                        if(_if_conditional168=it_92==hash_91,                        _if_conditional168) {
                            # 1426 "./comelang2.h"
                            printf("unexpected error in map.insert\n");
                            # 1427 "./comelang2.h"
                            stackframe();
                            # 1428 "./comelang2.h"
                            exit(2);
                        }
                    }
                }
                else {
                    # 1432 "./comelang2.h"
                    self->item_existance[it_92]=(_Bool)1;
                    # 1439 "./comelang2.h"
                    # 1433 "./comelang2.h"
                    if(_if_conditional169=1,                    _if_conditional169) {
                        # 1434 "./comelang2.h"
                        self->keys[it_92]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./comelang2.h"
                        self->keys[it_92]=key;
                    }
                    # 1446 "./comelang2.h"
                    # 1439 "./comelang2.h"
                    if(_if_conditional170=1,                    _if_conditional170) {
                        # 1440 "./comelang2.h"
                        self->items[it_92]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./comelang2.h"
                        self->items[it_92]=item;
                    }
                    # 1446 "./comelang2.h"
                    self->len++;
                    # 1448 "./comelang2.h"
                    break;
                }
            }
            # 1452 "./comelang2.h"
            same_key_exist_109=(_Bool)0;
            # 1461 "./comelang2.h"
            for(            it2_112=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_112=list$1charp_next(self->key_list)            ){
                # 1459 "./comelang2.h"
                # 1455 "./comelang2.h"
                if(_if_conditional175=string_equals(it2_112,key),                _if_conditional175) {
                    # 1456 "./comelang2.h"
                    puts("SAME KEY");
                    # 1457 "./comelang2.h"
                    same_key_exist_109=(_Bool)1;
                }
            }
            # 1465 "./comelang2.h"
            # 1461 "./comelang2.h"
            if(_if_conditional176=!same_key_exist_109,            _if_conditional176) {
                # 1462 "./comelang2.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1465 "./comelang2.h"
            __result107__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result107__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_74;
void* right_value100;
char** keys_75;
void* right_value101;
struct sClass** items_76;
void* right_value102;
_Bool* item_existance_77;
int len_78;
char* it_81;
struct sClass* default_value_84;
struct sClass* it2_87;
unsigned int hash_88;
int n_89;
_Bool _while_condtional13;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct sClass* default_value_90;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_74, 0, sizeof(int));
right_value100 = (void*)0;
memset(&keys_75, 0, sizeof(char**));
right_value101 = (void*)0;
memset(&items_76, 0, sizeof(struct sClass**));
right_value102 = (void*)0;
memset(&item_existance_77, 0, sizeof(_Bool*));
memset(&len_78, 0, sizeof(int));
memset(&it_81, 0, sizeof(char*));
memset(&default_value_84, 0, sizeof(struct sClass*));
memset(&it2_87, 0, sizeof(struct sClass*));
memset(&hash_88, 0, sizeof(unsigned int));
memset(&n_89, 0, sizeof(int));
memset(&default_value_90, 0, sizeof(struct sClass*));
                    # 1337 "./comelang2.h"
                    size_74=self->size*10;
                    # 1338 "./comelang2.h"
                    keys_75=(char**)come_increment_ref_count(((char**)(right_value100=(char**)come_calloc(1, sizeof(char*)*(1*(size_74)), "./comelang2.h", 1338, "char*%"))));
                    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./comelang2.h"
                    items_76=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value101=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_74)), "./comelang2.h", 1339, "sClass*%"))));
                    come_call_finalizer2(sClass_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./comelang2.h"
                    item_existance_77=(_Bool*)come_increment_ref_count(((_Bool*)(right_value102=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_74)), "./comelang2.h", 1340, "bool"))));
                    right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./comelang2.h"
                    len_78=0;
                    # 1377 "./comelang2.h"
                    for(                    it_81=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_81=map$2charphsClassph_next(self)                    ){
                        # 1345 "./comelang2.h"
                        # 1346 "./comelang2.h"
                        memset(&default_value_84,0,sizeof(struct sClass*));
                        # 1347 "./comelang2.h"
                        it2_87=map$2charphsClassph_at(self,it_81,default_value_84);
                        # 1348 "./comelang2.h"
                        hash_88=string_get_hash_key(it_81)%size_74;
                        # 1349 "./comelang2.h"
                        n_89=hash_88;
                        # 1375 "./comelang2.h"
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            # 1374 "./comelang2.h"
                            # 1352 "./comelang2.h"
                            if(_if_conditional141=item_existance_77[n_89],                            _if_conditional141) {
                                # 1354 "./comelang2.h"
                                n_89++;
                                # 1364 "./comelang2.h"
                                # 1356 "./comelang2.h"
                                if(_if_conditional142=n_89>=size_74,                                _if_conditional142) {
                                    # 1357 "./comelang2.h"
                                    n_89=0;
                                }
                                else {
                                    # 1364 "./comelang2.h"
                                    # 1359 "./comelang2.h"
                                    if(_if_conditional143=n_89==hash_88,                                    _if_conditional143) {
                                        # 1360 "./comelang2.h"
                                        printf("unexpected error in map.rehash(1)\n");
                                        # 1361 "./comelang2.h"
                                        stackframe();
                                        # 1362 "./comelang2.h"
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                # 1366 "./comelang2.h"
                                item_existance_77[n_89]=(_Bool)1;
                                # 1367 "./comelang2.h"
                                keys_75[n_89]=it_81;
                                # 1368 "./comelang2.h"
                                # 1369 "./comelang2.h"
                                items_76[n_89]=map$2charphsClassph_at(self,it_81,default_value_90);
                                # 1371 "./comelang2.h"
                                len_78++;
                                # 1372 "./comelang2.h"
                                break;
                            }
                        }
                    }
                    # 1377 "./comelang2.h"
                    come_free((char*)self->items);
                    # 1378 "./comelang2.h"
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    # 1379 "./comelang2.h"
                    come_free((char*)self->keys);
                    # 1381 "./comelang2.h"
                    self->keys=keys_75;
                    # 1382 "./comelang2.h"
                    self->items=items_76;
                    # 1383 "./comelang2.h"
                    self->item_existance=item_existance_77;
                    # 1385 "./comelang2.h"
                    self->size=size_74;
                    # 1386 "./comelang2.h"
                    self->len=len_78;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional133;
char* result_79;
char* __result84__;
_Bool _if_conditional134;
char* __result85__;
char* result_80;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_79, 0, sizeof(char*));
memset(&result_80, 0, sizeof(char*));
                        # 1304 "./comelang2.h"
                        # 1299 "./comelang2.h"
                        if(_if_conditional133=self==((void*)0),                        _if_conditional133) {
                            # 1300 "./comelang2.h"
                            # 1301 "./comelang2.h"
                            memset(&result_79,0,sizeof(char*));
                            # 1302 "./comelang2.h"
                            __result84__ = __result_obj__ = result_79;
                            return __result84__;
                        }
                        # 1304 "./comelang2.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "./comelang2.h"
                        # 1306 "./comelang2.h"
                        if(self->key_list->it) {
                            # 1307 "./comelang2.h"
                            __result85__ = __result_obj__ = self->key_list->it->item;
                            return __result85__;
                        }
                        # 1310 "./comelang2.h"
                        # 1311 "./comelang2.h"
                        memset(&result_80,0,sizeof(char*));
                        # 1312 "./comelang2.h"
                        __result86__ = __result_obj__ = result_80;
                        return __result86__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "./comelang2.h"
                        __result87__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result87__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional135;
char* result_82;
char* __result88__;
_Bool _if_conditional136;
char* __result89__;
char* result_83;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_82, 0, sizeof(char*));
memset(&result_83, 0, sizeof(char*));
                        # 1321 "./comelang2.h"
                        # 1316 "./comelang2.h"
                        if(_if_conditional135=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional135) {
                            # 1317 "./comelang2.h"
                            # 1318 "./comelang2.h"
                            memset(&result_82,0,sizeof(char*));
                            # 1319 "./comelang2.h"
                            __result88__ = __result_obj__ = result_82;
                            return __result88__;
                        }
                        # 1321 "./comelang2.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "./comelang2.h"
                        # 1323 "./comelang2.h"
                        if(self->key_list->it) {
                            # 1324 "./comelang2.h"
                            __result89__ = __result_obj__ = self->key_list->it->item;
                            return __result89__;
                        }
                        # 1327 "./comelang2.h"
                        # 1328 "./comelang2.h"
                        memset(&result_83,0,sizeof(char*));
                        # 1329 "./comelang2.h"
                        __result90__ = __result_obj__ = result_83;
                        return __result90__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_85;
unsigned int it_86;
_Bool _while_condtional12;
_Bool _if_conditional137;
_Bool _if_conditional138;
struct sClass* __result91__;
_Bool _if_conditional139;
_Bool _if_conditional140;
struct sClass* __result92__;
struct sClass* __result93__;
struct sClass* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_85, 0, sizeof(unsigned int));
memset(&it_86, 0, sizeof(unsigned int));
                            # 1226 "./comelang2.h"
                            hash_85=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "./comelang2.h"
                            it_86=hash_85;
                            # 1251 "./comelang2.h"
                            while(_while_condtional12=(_Bool)1,                            _while_condtional12) {
                                # 1249 "./comelang2.h"
                                # 1230 "./comelang2.h"
                                if(_if_conditional137=self->item_existance[it_86],                                _if_conditional137) {
                                    # 1237 "./comelang2.h"
                                    # 1232 "./comelang2.h"
                                    if(_if_conditional138=string_equals(self->keys[it_86],key),                                    _if_conditional138) {
                                        # 1234 "./comelang2.h"
                                        __result91__ = __result_obj__ = self->items[it_86];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result91__;
                                    }
                                    # 1237 "./comelang2.h"
                                    it_86++;
                                    # 1245 "./comelang2.h"
                                    # 1239 "./comelang2.h"
                                    if(_if_conditional139=it_86>=self->size,                                    _if_conditional139) {
                                        # 1240 "./comelang2.h"
                                        it_86=0;
                                    }
                                    else {
                                        # 1245 "./comelang2.h"
                                        # 1242 "./comelang2.h"
                                        if(_if_conditional140=it_86==hash_85,                                        _if_conditional140) {
                                            # 1243 "./comelang2.h"
                                            __result92__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result92__;
                                        }
                                    }
                                }
                                else {
                                    # 1247 "./comelang2.h"
                                    __result93__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result93__;
                                }
                            }
                            # 1251 "./comelang2.h"
                            __result94__ = __result_obj__ = default_value;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result94__;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_93;
struct list_item$1charp* it_94;
_Bool _while_condtional15;
_Bool _if_conditional147;
struct list$1charp* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_93, 0, sizeof(int));
memset(&it_94, 0, sizeof(struct list_item$1charp*));
                                # 448 "./comelang2.h"
                                it2_93=0;
                                # 449 "./comelang2.h"
                                it_94=self->head;
                                # 460 "./comelang2.h"
                                while(_while_condtional15=it_94!=((void*)0),                                _while_condtional15) {
                                    # 455 "./comelang2.h"
                                    # 451 "./comelang2.h"
                                    if(_if_conditional147=string_equals(it_94->item,item),                                    _if_conditional147) {
                                        # 452 "./comelang2.h"
                                        list$1charp_delete(self,it2_93,it2_93+1);
                                        # 453 "./comelang2.h"
                                        break;
                                    }
                                    # 455 "./comelang2.h"
                                    it2_93++;
                                    # 457 "./comelang2.h"
                                    it_94=it_94->next;
                                }
                                # 460 "./comelang2.h"
                                __result98__ = __result_obj__ = self;
                                return __result98__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
int tmp_95;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list$1charp* __result95__;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct list_item$1charp* it_98;
int i_99;
_Bool _while_condtional17;
_Bool _if_conditional156;
struct list_item$1charp* prev_it_100;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct list_item$1charp* it_101;
int i_102;
_Bool _while_condtional18;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct list_item$1charp* prev_it_103;
struct list_item$1charp* it_104;
struct list_item$1charp* head_prev_it_105;
struct list_item$1charp* tail_it_106;
int i_107;
_Bool _while_condtional19;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
struct list_item$1charp* prev_it_108;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct list$1charp* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_95, 0, sizeof(int));
memset(&it_98, 0, sizeof(struct list_item$1charp*));
memset(&i_99, 0, sizeof(int));
memset(&prev_it_100, 0, sizeof(struct list_item$1charp*));
memset(&it_101, 0, sizeof(struct list_item$1charp*));
memset(&i_102, 0, sizeof(int));
memset(&prev_it_103, 0, sizeof(struct list_item$1charp*));
memset(&it_104, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_105, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_106, 0, sizeof(struct list_item$1charp*));
memset(&i_107, 0, sizeof(int));
memset(&prev_it_108, 0, sizeof(struct list_item$1charp*));
                                            # 467 "./comelang2.h"
                                            # 464 "./comelang2.h"
                                            if(_if_conditional148=head<0,                                            _if_conditional148) {
                                                # 465 "./comelang2.h"
                                                head+=self->len;
                                            }
                                            # 471 "./comelang2.h"
                                            # 467 "./comelang2.h"
                                            if(_if_conditional149=tail<0,                                            _if_conditional149) {
                                                # 468 "./comelang2.h"
                                                tail+=self->len+1;
                                            }
                                            # 477 "./comelang2.h"
                                            # 471 "./comelang2.h"
                                            if(_if_conditional150=head>tail,                                            _if_conditional150) {
                                                # 472 "./comelang2.h"
                                                tmp_95=tail;
                                                # 473 "./comelang2.h"
                                                tail=head;
                                                # 474 "./comelang2.h"
                                                head=tmp_95;
                                            }
                                            # 481 "./comelang2.h"
                                            # 477 "./comelang2.h"
                                            if(_if_conditional151=head<0,                                            _if_conditional151) {
                                                # 478 "./comelang2.h"
                                                head=0;
                                            }
                                            # 485 "./comelang2.h"
                                            # 481 "./comelang2.h"
                                            if(_if_conditional152=tail>self->len,                                            _if_conditional152) {
                                                # 482 "./comelang2.h"
                                                tail=self->len;
                                            }
                                            # 489 "./comelang2.h"
                                            # 485 "./comelang2.h"
                                            if(_if_conditional153=head==tail,                                            _if_conditional153) {
                                                # 486 "./comelang2.h"
                                                __result95__ = __result_obj__ = self;
                                                return __result95__;
                                            }
                                            # 584 "./comelang2.h"
                                            # 489 "./comelang2.h"
                                            if(_if_conditional154=head==0&&tail==self->len,                                            _if_conditional154) {
                                                # 491 "./comelang2.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 584 "./comelang2.h"
                                                # 493 "./comelang2.h"
                                                if(_if_conditional155=head==0,                                                _if_conditional155) {
                                                    # 494 "./comelang2.h"
                                                    it_98=self->head;
                                                    # 495 "./comelang2.h"
                                                    i_99=0;
                                                    # 517 "./comelang2.h"
                                                    while(_while_condtional17=it_98!=((void*)0),                                                    _while_condtional17) {
                                                        # 516 "./comelang2.h"
                                                        # 497 "./comelang2.h"
                                                        if(_if_conditional156=i_99<tail,                                                        _if_conditional156) {
                                                            # 498 "./comelang2.h"
                                                            prev_it_100=it_98;
                                                            # 500 "./comelang2.h"
                                                            it_98=it_98->next;
                                                            # 501 "./comelang2.h"
                                                            i_99++;
                                                            # 503 "./comelang2.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 505 "./comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 516 "./comelang2.h"
                                                            # 507 "./comelang2.h"
                                                            if(_if_conditional157=i_99==tail,                                                            _if_conditional157) {
                                                                # 508 "./comelang2.h"
                                                                self->head=it_98;
                                                                # 509 "./comelang2.h"
                                                                self->head->prev=((void*)0);
                                                                # 510 "./comelang2.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 513 "./comelang2.h"
                                                                it_98=it_98->next;
                                                                # 514 "./comelang2.h"
                                                                i_99++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 584 "./comelang2.h"
                                                    # 518 "./comelang2.h"
                                                    if(_if_conditional158=tail==self->len,                                                    _if_conditional158) {
                                                        # 519 "./comelang2.h"
                                                        it_101=self->head;
                                                        # 520 "./comelang2.h"
                                                        i_102=0;
                                                        # 542 "./comelang2.h"
                                                        while(_while_condtional18=it_101!=((void*)0),                                                        _while_condtional18) {
                                                            # 527 "./comelang2.h"
                                                            # 522 "./comelang2.h"
                                                            if(_if_conditional159=i_102==head,                                                            _if_conditional159) {
                                                                # 523 "./comelang2.h"
                                                                self->tail=it_101->prev;
                                                                # 524 "./comelang2.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 541 "./comelang2.h"
                                                            # 527 "./comelang2.h"
                                                            if(_if_conditional160=i_102>=head,                                                            _if_conditional160) {
                                                                # 528 "./comelang2.h"
                                                                prev_it_103=it_101;
                                                                # 530 "./comelang2.h"
                                                                it_101=it_101->next;
                                                                # 531 "./comelang2.h"
                                                                i_102++;
                                                                # 533 "./comelang2.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 535 "./comelang2.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 538 "./comelang2.h"
                                                                it_101=it_101->next;
                                                                # 539 "./comelang2.h"
                                                                i_102++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 544 "./comelang2.h"
                                                        it_104=self->head;
                                                        # 546 "./comelang2.h"
                                                        head_prev_it_105=((void*)0);
                                                        # 547 "./comelang2.h"
                                                        tail_it_106=((void*)0);
                                                        # 550 "./comelang2.h"
                                                        i_107=0;
                                                        # 576 "./comelang2.h"
                                                        while(_while_condtional19=it_104!=((void*)0),                                                        _while_condtional19) {
                                                            # 555 "./comelang2.h"
                                                            # 552 "./comelang2.h"
                                                            if(_if_conditional161=i_107==head,                                                            _if_conditional161) {
                                                                # 553 "./comelang2.h"
                                                                head_prev_it_105=it_104->prev;
                                                            }
                                                            # 559 "./comelang2.h"
                                                            # 555 "./comelang2.h"
                                                            if(_if_conditional162=i_107==tail,                                                            _if_conditional162) {
                                                                # 556 "./comelang2.h"
                                                                tail_it_106=it_104;
                                                            }
                                                            # 574 "./comelang2.h"
                                                            # 559 "./comelang2.h"
                                                            if(_if_conditional163=i_107>=head&&i_107<tail,                                                            _if_conditional163) {
                                                                # 561 "./comelang2.h"
                                                                prev_it_108=it_104;
                                                                # 563 "./comelang2.h"
                                                                it_104=it_104->next;
                                                                # 564 "./comelang2.h"
                                                                i_107++;
                                                                # 566 "./comelang2.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 568 "./comelang2.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 571 "./comelang2.h"
                                                                it_104=it_104->next;
                                                                # 572 "./comelang2.h"
                                                                i_107++;
                                                            }
                                                        }
                                                        # 579 "./comelang2.h"
                                                        # 576 "./comelang2.h"
                                                        if(_if_conditional164=head_prev_it_105!=((void*)0),                                                        _if_conditional164) {
                                                            # 577 "./comelang2.h"
                                                            head_prev_it_105->next=tail_it_106;
                                                        }
                                                        # 582 "./comelang2.h"
                                                        # 579 "./comelang2.h"
                                                        if(_if_conditional165=tail_it_106!=((void*)0),                                                        _if_conditional165) {
                                                            # 580 "./comelang2.h"
                                                            tail_it_106->prev=head_prev_it_105;
                                                        }
                                                    }
                                                }
                                            }
                                            # 584 "./comelang2.h"
                                            __result97__ = __result_obj__ = self;
                                            return __result97__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_96;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_97;
struct list$1charp* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_97, 0, sizeof(struct list_item$1charp*));
                                                    # 433 "./comelang2.h"
                                                    it_96=self->head;
                                                    # 440 "./comelang2.h"
                                                    while(_while_condtional16=it_96!=((void*)0),                                                    _while_condtional16) {
                                                        # 435 "./comelang2.h"
                                                        prev_it_97=it_96;
                                                        # 436 "./comelang2.h"
                                                        it_96=it_96->next;
                                                        # 437 "./comelang2.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 440 "./comelang2.h"
                                                    self->head=((void*)0);
                                                    # 441 "./comelang2.h"
                                                    self->tail=((void*)0);
                                                    # 443 "./comelang2.h"
                                                    self->len=0;
                                                    # 445 "./comelang2.h"
                                                    __result96__ = __result_obj__ = self;
                                                    return __result96__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional171;
char* result_110;
char* __result99__;
_Bool _if_conditional172;
char* __result100__;
char* result_111;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_110, 0, sizeof(char*));
memset(&result_111, 0, sizeof(char*));
                # 290 "./comelang2.h"
                # 285 "./comelang2.h"
                if(_if_conditional171=self==((void*)0),                _if_conditional171) {
                    # 286 "./comelang2.h"
                    # 287 "./comelang2.h"
                    memset(&result_110,0,sizeof(char*));
                    # 288 "./comelang2.h"
                    __result99__ = __result_obj__ = result_110;
                    return __result99__;
                }
                # 290 "./comelang2.h"
                self->it=self->head;
                # 296 "./comelang2.h"
                # 292 "./comelang2.h"
                if(self->it) {
                    # 293 "./comelang2.h"
                    __result100__ = __result_obj__ = self->it->item;
                    return __result100__;
                }
                # 296 "./comelang2.h"
                # 297 "./comelang2.h"
                memset(&result_111,0,sizeof(char*));
                # 298 "./comelang2.h"
                __result101__ = __result_obj__ = result_111;
                return __result101__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./comelang2.h"
                __result102__ = self==((void*)0)||self->it==((void*)0);
                return __result102__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional173;
char* result_113;
char* __result103__;
_Bool _if_conditional174;
char* __result104__;
char* result_114;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_113, 0, sizeof(char*));
memset(&result_114, 0, sizeof(char*));
                # 308 "./comelang2.h"
                # 302 "./comelang2.h"
                if(_if_conditional173=self==((void*)0)||self->it==((void*)0),                _if_conditional173) {
                    # 303 "./comelang2.h"
                    # 304 "./comelang2.h"
                    memset(&result_113,0,sizeof(char*));
                    # 305 "./comelang2.h"
                    __result103__ = __result_obj__ = result_113;
                    return __result103__;
                }
                # 308 "./comelang2.h"
                self->it=self->it->next;
                # 314 "./comelang2.h"
                # 310 "./comelang2.h"
                if(self->it) {
                    # 311 "./comelang2.h"
                    __result104__ = __result_obj__ = self->it->item;
                    return __result104__;
                }
                # 314 "./comelang2.h"
                # 315 "./comelang2.h"
                memset(&result_114,0,sizeof(char*));
                # 316 "./comelang2.h"
                __result105__ = __result_obj__ = result_114;
                return __result105__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional177;
void* right_value103;
struct list_item$1charp* litem_115;
_Bool _if_conditional178;
void* right_value104;
struct list_item$1charp* litem_116;
void* right_value105;
struct list_item$1charp* litem_117;
struct list$1charp* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1charp*));
right_value104 = (void*)0;
memset(&litem_116, 0, sizeof(struct list_item$1charp*));
right_value105 = (void*)0;
memset(&litem_117, 0, sizeof(struct list_item$1charp*));
                    # 256 "./comelang2.h"
                    # 225 "./comelang2.h"
                    if(_if_conditional177=self->len==0,                    _if_conditional177) {
                        # 226 "./comelang2.h"
                        litem_115=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value103=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./comelang2.h"
                        litem_115->prev=((void*)0);
                        # 229 "./comelang2.h"
                        litem_115->next=((void*)0);
                        # 230 "./comelang2.h"
                        litem_115->item=item;
                        # 232 "./comelang2.h"
                        self->tail=litem_115;
                        # 233 "./comelang2.h"
                        self->head=litem_115;
                    }
                    else {
                        # 256 "./comelang2.h"
                        # 235 "./comelang2.h"
                        if(_if_conditional178=self->len==1,                        _if_conditional178) {
                            # 236 "./comelang2.h"
                            litem_116=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value104=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./comelang2.h"
                            litem_116->prev=self->head;
                            # 239 "./comelang2.h"
                            litem_116->next=((void*)0);
                            # 240 "./comelang2.h"
                            litem_116->item=item;
                            # 242 "./comelang2.h"
                            self->tail=litem_116;
                            # 243 "./comelang2.h"
                            self->head->next=litem_116;
                        }
                        else {
                            # 246 "./comelang2.h"
                            litem_117=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value105=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./comelang2.h"
                            litem_117->prev=self->tail;
                            # 249 "./comelang2.h"
                            litem_117->next=((void*)0);
                            # 250 "./comelang2.h"
                            litem_117->item=item;
                            # 252 "./comelang2.h"
                            self->tail->next=litem_117;
                            # 253 "./comelang2.h"
                            self->tail=litem_117;
                        }
                    }
                    # 256 "./comelang2.h"
                    self->len++;
                    # 258 "./comelang2.h"
                    __result106__ = __result_obj__ = self;
                    return __result106__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional179;
void* right_value108;
struct list_item$1tuple2$2charphsTypephph* litem_124;
struct tuple2$2charphsTypeph* __dec_obj35;
_Bool _if_conditional182;
void* right_value109;
struct list_item$1tuple2$2charphsTypephph* litem_125;
struct tuple2$2charphsTypeph* __dec_obj36;
void* right_value110;
struct list_item$1tuple2$2charphsTypephph* litem_126;
struct tuple2$2charphsTypeph* __dec_obj37;
struct list$1tuple2$2charphsTypephph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_124, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value109 = (void*)0;
memset(&litem_125, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value110 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional179=self->len==0,                _if_conditional179) {
                    # 226 "./comelang2.h"
                    litem_124=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value108=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_124->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_124->next=((void*)0);
                    # 230 "./comelang2.h"
                    __dec_obj35=litem_124->item;
                    litem_124->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./comelang2.h"
                    self->tail=litem_124;
                    # 233 "./comelang2.h"
                    self->head=litem_124;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional182=self->len==1,                    _if_conditional182) {
                        # 236 "./comelang2.h"
                        litem_125=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value109=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_125->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_125->next=((void*)0);
                        # 240 "./comelang2.h"
                        __dec_obj36=litem_125->item;
                        litem_125->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./comelang2.h"
                        self->tail=litem_125;
                        # 243 "./comelang2.h"
                        self->head->next=litem_125;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_126=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value110=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_126->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_126->next=((void*)0);
                        # 250 "./comelang2.h"
                        __dec_obj37=litem_126->item;
                        litem_126->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./comelang2.h"
                        self->tail->next=litem_126;
                        # 253 "./comelang2.h"
                        self->tail=litem_126;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result108__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result108__;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional180;
_Bool _if_conditional181;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2charphsTypeph_finalize"
                        # 0 "tuple2$2charphsTypeph_finalize"
                        if(_if_conditional180=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional180) {
                            # 0 "tuple2$2charphsTypeph_finalize"
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple2$2charphsTypeph_finalize"
                        # 1 "tuple2$2charphsTypeph_finalize"
                        if(_if_conditional181=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional181) {
                            # 1 "tuple2$2charphsTypeph_finalize"
                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj38;
struct sType* __dec_obj39;
struct tuple2$2charphsTypeph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1768 "./comelang2.h"
                __dec_obj38=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1769 "./comelang2.h"
                __dec_obj39=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1771 "./comelang2.h"
                __result109__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result109__;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_127;
_Bool _while_condtional20;
struct list_item$1sTypeph* prev_it_128;
struct list$1sTypeph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_127, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_128, 0, sizeof(struct list_item$1sTypeph*));
            # 433 "./comelang2.h"
            it_127=self->head;
            # 440 "./comelang2.h"
            while(_while_condtional20=it_127!=((void*)0),            _while_condtional20) {
                # 435 "./comelang2.h"
                prev_it_128=it_127;
                # 436 "./comelang2.h"
                it_127=it_127->next;
                # 437 "./comelang2.h"
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 440 "./comelang2.h"
            self->head=((void*)0);
            # 441 "./comelang2.h"
            self->tail=((void*)0);
            # 443 "./comelang2.h"
            self->len=0;
            # 445 "./comelang2.h"
            __result110__ = __result_obj__ = self;
            return __result110__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value126;
char* __dec_obj43;
void* right_value127;
char* __dec_obj44;
void* right_value141;
struct sClass* __dec_obj53;
struct sStructNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value141 = (void*)0;
    # 233 "14struct.c"
    self->sline=info->sline;
    # 234 "14struct.c"
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(info->sname))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 236 "14struct.c"
    __dec_obj44=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(name))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 237 "14struct.c"
    __dec_obj53=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value141=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 239 "14struct.c"
    self->mOutput=output;
    # 241 "14struct.c"
    __result121__ = __result_obj__ = self;
    come_call_finalizer2(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result121__;
    come_call_finalizer2(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional188;
struct sClass* __result113__;
void* right_value128;
struct sClass* result_138;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value129;
char* __dec_obj45;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value139;
struct list$1tuple2$2charphsTypephph* __dec_obj51;
_Bool _if_conditional207;
_Bool _if_conditional208;
void* right_value140;
char* __dec_obj52;
_Bool _if_conditional209;
struct sClass* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&result_138, 0, sizeof(struct sClass*));
right_value129 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
        # 3 "sClass_clone"
        # 2 "sClass_clone"
        if(_if_conditional188=self==(void*)0,        _if_conditional188) {
            # 2 "sClass_clone"
            __result113__ = __result_obj__ = (void*)0;
            return __result113__;
        }
        # 3 "sClass_clone"
        result_138=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value128=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
        come_call_finalizer2(sClass_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sClass_clone"
        # 4 "sClass_clone"
        if(_if_conditional189=self!=((void*)0),        _if_conditional189) {
            # 4 "sClass_clone"
            result_138->mStruct=self->mStruct;
        }
        # 6 "sClass_clone"
        # 5 "sClass_clone"
        if(_if_conditional190=self!=((void*)0),        _if_conditional190) {
            # 5 "sClass_clone"
            result_138->mFloat=self->mFloat;
        }
        # 7 "sClass_clone"
        # 6 "sClass_clone"
        if(_if_conditional191=self!=((void*)0),        _if_conditional191) {
            # 6 "sClass_clone"
            result_138->mUnion=self->mUnion;
        }
        # 8 "sClass_clone"
        # 7 "sClass_clone"
        if(_if_conditional192=self!=((void*)0),        _if_conditional192) {
            # 7 "sClass_clone"
            result_138->mGenerics=self->mGenerics;
        }
        # 9 "sClass_clone"
        # 8 "sClass_clone"
        if(_if_conditional193=self!=((void*)0),        _if_conditional193) {
            # 8 "sClass_clone"
            result_138->mMethodGenerics=self->mMethodGenerics;
        }
        # 10 "sClass_clone"
        # 9 "sClass_clone"
        if(_if_conditional194=self!=((void*)0),        _if_conditional194) {
            # 9 "sClass_clone"
            result_138->mEnum=self->mEnum;
        }
        # 11 "sClass_clone"
        # 10 "sClass_clone"
        if(_if_conditional195=self!=((void*)0),        _if_conditional195) {
            # 10 "sClass_clone"
            result_138->mProtocol=self->mProtocol;
        }
        # 12 "sClass_clone"
        # 11 "sClass_clone"
        if(_if_conditional196=self!=((void*)0),        _if_conditional196) {
            # 11 "sClass_clone"
            result_138->mNumber=self->mNumber;
        }
        # 13 "sClass_clone"
        # 12 "sClass_clone"
        if(_if_conditional197=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional197) {
            # 12 "sClass_clone"
            __dec_obj45=result_138->mName;
            result_138->mName=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(self->mName))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 14 "sClass_clone"
        # 13 "sClass_clone"
        if(_if_conditional198=self!=((void*)0),        _if_conditional198) {
            # 13 "sClass_clone"
            result_138->mGenericsNum=self->mGenericsNum;
        }
        # 15 "sClass_clone"
        # 14 "sClass_clone"
        if(_if_conditional199=self!=((void*)0),        _if_conditional199) {
            # 14 "sClass_clone"
            result_138->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        # 16 "sClass_clone"
        # 15 "sClass_clone"
        if(_if_conditional200=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional200) {
            # 15 "sClass_clone"
            __dec_obj51=result_138->mFields;
            result_138->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value139=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 17 "sClass_clone"
        # 16 "sClass_clone"
        if(_if_conditional207=self!=((void*)0),        _if_conditional207) {
            # 16 "sClass_clone"
            result_138->mOutputed=self->mOutputed;
        }
        # 18 "sClass_clone"
        # 17 "sClass_clone"
        if(_if_conditional208=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional208) {
            # 17 "sClass_clone"
            __dec_obj52=result_138->mDeclareSName;
            result_138->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value140=string_clone(self->mDeclareSName))));
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 19 "sClass_clone"
        # 18 "sClass_clone"
        if(_if_conditional209=self!=((void*)0),        _if_conditional209) {
            # 18 "sClass_clone"
            result_138->mNobodyStruct=self->mNobodyStruct;
        }
        # 19 "sClass_clone"
        __result120__ = __result_obj__ = result_138;
        come_call_finalizer2(sClass_finalize,result_138, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result120__;
        come_call_finalizer2(sClass_finalize,result_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional201;
struct list$1tuple2$2charphsTypephph* __result114__;
void* right_value130;
void* right_value131;
struct list$1tuple2$2charphsTypephph* result_139;
struct list_item$1tuple2$2charphsTypephph* it_140;
_Bool _while_condtional21;
void* right_value138;
struct list$1tuple2$2charphsTypephph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&result_139, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_140, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value138 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional201=self==((void*)0),                _if_conditional201) {
                    # 140 "./comelang2.h"
                    __result114__ = __result_obj__ = ((void*)0);
                    return __result114__;
                }
                # 142 "./comelang2.h"
                result_139=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value131=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value130=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsTypephph"))))))));
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_140=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional21=it_140!=((void*)0),                _while_condtional21) {
                    # 146 "./comelang2.h"
                    list$1tuple2$2charphsTypephph_add(result_139,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value138=tuple2$2charphsTypephp_clone(it_140->item)))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./comelang2.h"
                    it_140=it_140->next;
                }
                # 151 "./comelang2.h"
                __result119__ = __result_obj__ = result_139;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_139, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result119__;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result115__ = __result_obj__ = self;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result115__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional202;
void* right_value132;
struct list_item$1tuple2$2charphsTypephph* litem_141;
struct tuple2$2charphsTypeph* __dec_obj46;
_Bool _if_conditional203;
void* right_value133;
struct list_item$1tuple2$2charphsTypephph* litem_142;
struct tuple2$2charphsTypeph* __dec_obj47;
void* right_value134;
struct list_item$1tuple2$2charphsTypephph* litem_143;
struct tuple2$2charphsTypeph* __dec_obj48;
struct list$1tuple2$2charphsTypephph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
memset(&litem_141, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value133 = (void*)0;
memset(&litem_142, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value134 = (void*)0;
memset(&litem_143, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional202=self->len==0,                        _if_conditional202) {
                            # 156 "./comelang2.h"
                            litem_141=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value132=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_141->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_141->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj46=litem_141->item;
                            litem_141->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./comelang2.h"
                            self->tail=litem_141;
                            # 163 "./comelang2.h"
                            self->head=litem_141;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional203=self->len==1,                            _if_conditional203) {
                                # 166 "./comelang2.h"
                                litem_142=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value133=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_142->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_142->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj47=litem_142->item;
                                litem_142->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./comelang2.h"
                                self->tail=litem_142;
                                # 173 "./comelang2.h"
                                self->head->next=litem_142;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_143=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value134=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_143->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_143->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj48=litem_143->item;
                                litem_143->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 182 "./comelang2.h"
                                self->tail->next=litem_143;
                                # 183 "./comelang2.h"
                                self->tail=litem_143;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
                        __result116__ = __result_obj__ = self;
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result116__;
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional204;
struct tuple2$2charphsTypeph* __result117__;
void* right_value135;
struct tuple2$2charphsTypeph* result_144;
_Bool _if_conditional205;
void* right_value136;
char* __dec_obj49;
_Bool _if_conditional206;
void* right_value137;
struct sType* __dec_obj50;
struct tuple2$2charphsTypeph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&result_144, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value136 = (void*)0;
right_value137 = (void*)0;
                        # 3 "tuple2$2charphsTypephp_clone"
                        # 2 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional204=self==(void*)0,                        _if_conditional204) {
                            # 2 "tuple2$2charphsTypephp_clone"
                            __result117__ = __result_obj__ = (void*)0;
                            return __result117__;
                        }
                        # 3 "tuple2$2charphsTypephp_clone"
                        result_144=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value135=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple2$2charphsTypephp_clone"
                        # 4 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional205=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional205) {
                            # 4 "tuple2$2charphsTypephp_clone"
                            __dec_obj49=result_144->v1;
                            result_144->v1=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(self->v1))));
                            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        # 5 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional206=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional206) {
                            # 5 "tuple2$2charphsTypephp_clone"
                            __dec_obj50=result_144->v2;
                            result_144->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(self->v2))));
                            come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        __result118__ = __result_obj__ = result_144;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_144, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result118__;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sStructNode_terminated(){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    # 246 "14struct.c"
    __result122__ = (_Bool)1;
    return __result122__;
}

char* sStructNode_kind(){
void* __result_obj__;
void* right_value142;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
    # 251 "14struct.c"
    __result123__ = __result_obj__ = ((char*)(right_value142=__builtin_string("sStructNode")));
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value143;
struct sClass* klass_145;
void* right_value144;
char* name_146;
_Bool _if_conditional213;
void* right_value145;
_Bool _if_conditional215;
struct sClass* klass2_147;
void* right_value146;
struct list$1tuple2$2charphsTypephph* __dec_obj54;
void* right_value147;
void* right_value148;
struct sType* type_148;
void* right_value152;
_Bool _if_conditional238;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
memset(&klass_145, 0, sizeof(struct sClass*));
right_value144 = (void*)0;
memset(&name_146, 0, sizeof(char*));
right_value145 = (void*)0;
memset(&klass2_147, 0, sizeof(struct sClass*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
memset(&type_148, 0, sizeof(struct sType*));
right_value152 = (void*)0;
    # 256 "14struct.c"
    klass_145=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value143=sClass_clone(self->mClass))));
    come_call_finalizer2(sClass_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 257 "14struct.c"
    name_146=(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(self->mName))));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 267 "14struct.c"
    # 259 "14struct.c"
    if(_if_conditional213=map$2charphsClassph_at(info->classes,name_146,((void*)0))==((void*)0),    _if_conditional213) {
        # 260 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_146),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value145=sClass_clone(klass_145)))));
        come_call_finalizer2(sClass_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 267 "14struct.c"
        # 262 "14struct.c"
        if(_if_conditional215=list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_146,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_145->mFields)>0,        _if_conditional215) {
            # 263 "14struct.c"
            klass2_147=map$2charphsClassph_at(info->classes,name_146,((void*)0));
            # 264 "14struct.c"
            __dec_obj54=klass2_147->mFields;
            klass2_147->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value146=list$1tuple2$2charphsTypephphp_clone(klass_145->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    # 267 "14struct.c"
    type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value147=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 267, "sType")))),name_146,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 268 "14struct.c"
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_146),(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sType_clone(type_148)))));
    come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 274 "14struct.c"
    # 270 "14struct.c"
    if(self->mOutput) {
        # 271 "14struct.c"
        output_struct(klass_145,info);
    }
    # 274 "14struct.c"
    __result138__ = (_Bool)1;
    come_call_finalizer2(sClass_finalize,klass_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_146 = come_decrement_ref_count2(name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result138__;
    come_call_finalizer2(sClass_finalize,klass_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_146 = come_decrement_ref_count2(name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional214;
int __result124__;
int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "./comelang2.h"
            # 364 "./comelang2.h"
            if(_if_conditional214=self==((void*)0),            _if_conditional214) {
                # 365 "./comelang2.h"
                __result124__ = 0;
                return __result124__;
            }
            # 367 "./comelang2.h"
            __result125__ = self->len;
            return __result125__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional216;
unsigned int hash_166;
unsigned int it_167;
_Bool _while_condtional24;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool same_key_exist_168;
char* it2_169;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct map$2charphsTypeph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_166, 0, sizeof(unsigned int));
memset(&it_167, 0, sizeof(unsigned int));
memset(&same_key_exist_168, 0, sizeof(_Bool));
memset(&it2_169, 0, sizeof(char*));
        # 1393 "./comelang2.h"
        # 1390 "./comelang2.h"
        if(_if_conditional216=self->len*10>=self->size,        _if_conditional216) {
            # 1391 "./comelang2.h"
            map$2charphsTypeph_rehash(self);
        }
        # 1393 "./comelang2.h"
        hash_166=string_get_hash_key(key)%self->size;
        # 1394 "./comelang2.h"
        it_167=hash_166;
        # 1452 "./comelang2.h"
        while(_while_condtional24=(_Bool)1,        _while_condtional24) {
            # 1450 "./comelang2.h"
            # 1397 "./comelang2.h"
            if(_if_conditional228=self->item_existance[it_167],            _if_conditional228) {
                # 1420 "./comelang2.h"
                # 1399 "./comelang2.h"
                if(_if_conditional229=string_equals(self->keys[it_167],key),                _if_conditional229) {
                    # 1410 "./comelang2.h"
                    # 1401 "./comelang2.h"
                    if(_if_conditional230=1,                    _if_conditional230) {
                        # 1402 "./comelang2.h"
                        list$1charp_remove(self->key_list,self->keys[it_167]);
                        # 1403 "./comelang2.h"
                        self->keys[it_167] = come_decrement_ref_count2(self->keys[it_167], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1404 "./comelang2.h"
                        self->keys[it_167]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1407 "./comelang2.h"
                        list$1charp_remove(self->key_list,self->keys[it_167]);
                        # 1408 "./comelang2.h"
                        self->keys[it_167]=key;
                    }
                    # 1417 "./comelang2.h"
                    # 1410 "./comelang2.h"
                    if(_if_conditional231=1,                    _if_conditional231) {
                        # 1411 "./comelang2.h"
                        come_call_finalizer2(sType_finalize,self->items[it_167], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 1412 "./comelang2.h"
                        self->items[it_167]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1415 "./comelang2.h"
                        self->items[it_167]=item;
                    }
                    # 1417 "./comelang2.h"
                    break;
                }
                # 1420 "./comelang2.h"
                it_167++;
                # 1430 "./comelang2.h"
                # 1422 "./comelang2.h"
                if(_if_conditional232=it_167>=self->size,                _if_conditional232) {
                    # 1423 "./comelang2.h"
                    it_167=0;
                }
                else {
                    # 1430 "./comelang2.h"
                    # 1425 "./comelang2.h"
                    if(_if_conditional233=it_167==hash_166,                    _if_conditional233) {
                        # 1426 "./comelang2.h"
                        printf("unexpected error in map.insert\n");
                        # 1427 "./comelang2.h"
                        stackframe();
                        # 1428 "./comelang2.h"
                        exit(2);
                    }
                }
            }
            else {
                # 1432 "./comelang2.h"
                self->item_existance[it_167]=(_Bool)1;
                # 1439 "./comelang2.h"
                # 1433 "./comelang2.h"
                if(_if_conditional234=1,                _if_conditional234) {
                    # 1434 "./comelang2.h"
                    self->keys[it_167]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1437 "./comelang2.h"
                    self->keys[it_167]=key;
                }
                # 1446 "./comelang2.h"
                # 1439 "./comelang2.h"
                if(_if_conditional235=1,                _if_conditional235) {
                    # 1440 "./comelang2.h"
                    self->items[it_167]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    # 1443 "./comelang2.h"
                    self->items[it_167]=item;
                }
                # 1446 "./comelang2.h"
                self->len++;
                # 1448 "./comelang2.h"
                break;
            }
        }
        # 1452 "./comelang2.h"
        same_key_exist_168=(_Bool)0;
        # 1461 "./comelang2.h"
        for(        it2_169=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_169=list$1charp_next(self->key_list)        ){
            # 1459 "./comelang2.h"
            # 1455 "./comelang2.h"
            if(_if_conditional236=string_equals(it2_169,key),            _if_conditional236) {
                # 1456 "./comelang2.h"
                puts("SAME KEY");
                # 1457 "./comelang2.h"
                same_key_exist_168=(_Bool)1;
            }
        }
        # 1465 "./comelang2.h"
        # 1461 "./comelang2.h"
        if(_if_conditional237=!same_key_exist_168,        _if_conditional237) {
            # 1462 "./comelang2.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1465 "./comelang2.h"
        __result137__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result137__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_149;
void* right_value149;
char** keys_150;
void* right_value150;
struct sType** items_151;
void* right_value151;
_Bool* item_existance_152;
int len_153;
char* it_156;
struct sType* default_value_159;
struct sType* it2_162;
unsigned int hash_163;
int n_164;
_Bool _while_condtional23;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
struct sType* default_value_165;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_149, 0, sizeof(int));
right_value149 = (void*)0;
memset(&keys_150, 0, sizeof(char**));
right_value150 = (void*)0;
memset(&items_151, 0, sizeof(struct sType**));
right_value151 = (void*)0;
memset(&item_existance_152, 0, sizeof(_Bool*));
memset(&len_153, 0, sizeof(int));
memset(&it_156, 0, sizeof(char*));
memset(&default_value_159, 0, sizeof(struct sType*));
memset(&it2_162, 0, sizeof(struct sType*));
memset(&hash_163, 0, sizeof(unsigned int));
memset(&n_164, 0, sizeof(int));
memset(&default_value_165, 0, sizeof(struct sType*));
                # 1337 "./comelang2.h"
                size_149=self->size*10;
                # 1338 "./comelang2.h"
                keys_150=(char**)come_increment_ref_count(((char**)(right_value149=(char**)come_calloc(1, sizeof(char*)*(1*(size_149)), "./comelang2.h", 1338, "char*%"))));
                right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1339 "./comelang2.h"
                items_151=(struct sType**)come_increment_ref_count(((struct sType**)(right_value150=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_149)), "./comelang2.h", 1339, "sType*%"))));
                come_call_finalizer2(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1340 "./comelang2.h"
                item_existance_152=(_Bool*)come_increment_ref_count(((_Bool*)(right_value151=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_149)), "./comelang2.h", 1340, "bool"))));
                right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1342 "./comelang2.h"
                len_153=0;
                # 1377 "./comelang2.h"
                for(                it_156=map$2charphsTypeph_begin(self);                !map$2charphsTypeph_end(self);                it_156=map$2charphsTypeph_next(self)                ){
                    # 1345 "./comelang2.h"
                    # 1346 "./comelang2.h"
                    memset(&default_value_159,0,sizeof(struct sType*));
                    # 1347 "./comelang2.h"
                    it2_162=map$2charphsTypeph_at(self,it_156,default_value_159);
                    # 1348 "./comelang2.h"
                    hash_163=string_get_hash_key(it_156)%size_149;
                    # 1349 "./comelang2.h"
                    n_164=hash_163;
                    # 1375 "./comelang2.h"
                    while(_while_condtional23=(_Bool)1,                    _while_condtional23) {
                        # 1374 "./comelang2.h"
                        # 1352 "./comelang2.h"
                        if(_if_conditional225=item_existance_152[n_164],                        _if_conditional225) {
                            # 1354 "./comelang2.h"
                            n_164++;
                            # 1364 "./comelang2.h"
                            # 1356 "./comelang2.h"
                            if(_if_conditional226=n_164>=size_149,                            _if_conditional226) {
                                # 1357 "./comelang2.h"
                                n_164=0;
                            }
                            else {
                                # 1364 "./comelang2.h"
                                # 1359 "./comelang2.h"
                                if(_if_conditional227=n_164==hash_163,                                _if_conditional227) {
                                    # 1360 "./comelang2.h"
                                    printf("unexpected error in map.rehash(1)\n");
                                    # 1361 "./comelang2.h"
                                    stackframe();
                                    # 1362 "./comelang2.h"
                                    exit(2);
                                }
                            }
                        }
                        else {
                            # 1366 "./comelang2.h"
                            item_existance_152[n_164]=(_Bool)1;
                            # 1367 "./comelang2.h"
                            keys_150[n_164]=it_156;
                            # 1368 "./comelang2.h"
                            # 1369 "./comelang2.h"
                            items_151[n_164]=map$2charphsTypeph_at(self,it_156,default_value_165);
                            # 1371 "./comelang2.h"
                            len_153++;
                            # 1372 "./comelang2.h"
                            break;
                        }
                    }
                }
                # 1377 "./comelang2.h"
                come_free((char*)self->items);
                # 1378 "./comelang2.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                # 1379 "./comelang2.h"
                come_free((char*)self->keys);
                # 1381 "./comelang2.h"
                self->keys=keys_150;
                # 1382 "./comelang2.h"
                self->items=items_151;
                # 1383 "./comelang2.h"
                self->item_existance=item_existance_152;
                # 1385 "./comelang2.h"
                self->size=size_149;
                # 1386 "./comelang2.h"
                self->len=len_153;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional217;
char* result_154;
char* __result126__;
_Bool _if_conditional218;
char* __result127__;
char* result_155;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_154, 0, sizeof(char*));
memset(&result_155, 0, sizeof(char*));
                    # 1304 "./comelang2.h"
                    # 1299 "./comelang2.h"
                    if(_if_conditional217=self==((void*)0),                    _if_conditional217) {
                        # 1300 "./comelang2.h"
                        # 1301 "./comelang2.h"
                        memset(&result_154,0,sizeof(char*));
                        # 1302 "./comelang2.h"
                        __result126__ = __result_obj__ = result_154;
                        return __result126__;
                    }
                    # 1304 "./comelang2.h"
                    self->key_list->it=self->key_list->head;
                    # 1310 "./comelang2.h"
                    # 1306 "./comelang2.h"
                    if(self->key_list->it) {
                        # 1307 "./comelang2.h"
                        __result127__ = __result_obj__ = self->key_list->it->item;
                        return __result127__;
                    }
                    # 1310 "./comelang2.h"
                    # 1311 "./comelang2.h"
                    memset(&result_155,0,sizeof(char*));
                    # 1312 "./comelang2.h"
                    __result128__ = __result_obj__ = result_155;
                    return __result128__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1333 "./comelang2.h"
                    __result129__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result129__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional219;
char* result_157;
char* __result130__;
_Bool _if_conditional220;
char* __result131__;
char* result_158;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_157, 0, sizeof(char*));
memset(&result_158, 0, sizeof(char*));
                    # 1321 "./comelang2.h"
                    # 1316 "./comelang2.h"
                    if(_if_conditional219=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional219) {
                        # 1317 "./comelang2.h"
                        # 1318 "./comelang2.h"
                        memset(&result_157,0,sizeof(char*));
                        # 1319 "./comelang2.h"
                        __result130__ = __result_obj__ = result_157;
                        return __result130__;
                    }
                    # 1321 "./comelang2.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1327 "./comelang2.h"
                    # 1323 "./comelang2.h"
                    if(self->key_list->it) {
                        # 1324 "./comelang2.h"
                        __result131__ = __result_obj__ = self->key_list->it->item;
                        return __result131__;
                    }
                    # 1327 "./comelang2.h"
                    # 1328 "./comelang2.h"
                    memset(&result_158,0,sizeof(char*));
                    # 1329 "./comelang2.h"
                    __result132__ = __result_obj__ = result_158;
                    return __result132__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_160;
unsigned int it_161;
_Bool _while_condtional22;
_Bool _if_conditional221;
_Bool _if_conditional222;
struct sType* __result133__;
_Bool _if_conditional223;
_Bool _if_conditional224;
struct sType* __result134__;
struct sType* __result135__;
struct sType* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_160, 0, sizeof(unsigned int));
memset(&it_161, 0, sizeof(unsigned int));
                        # 1226 "./comelang2.h"
                        hash_160=string_get_hash_key(((char*)key))%self->size;
                        # 1227 "./comelang2.h"
                        it_161=hash_160;
                        # 1251 "./comelang2.h"
                        while(_while_condtional22=(_Bool)1,                        _while_condtional22) {
                            # 1249 "./comelang2.h"
                            # 1230 "./comelang2.h"
                            if(_if_conditional221=self->item_existance[it_161],                            _if_conditional221) {
                                # 1237 "./comelang2.h"
                                # 1232 "./comelang2.h"
                                if(_if_conditional222=string_equals(self->keys[it_161],key),                                _if_conditional222) {
                                    # 1234 "./comelang2.h"
                                    __result133__ = __result_obj__ = self->items[it_161];
                                    come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result133__;
                                }
                                # 1237 "./comelang2.h"
                                it_161++;
                                # 1245 "./comelang2.h"
                                # 1239 "./comelang2.h"
                                if(_if_conditional223=it_161>=self->size,                                _if_conditional223) {
                                    # 1240 "./comelang2.h"
                                    it_161=0;
                                }
                                else {
                                    # 1245 "./comelang2.h"
                                    # 1242 "./comelang2.h"
                                    if(_if_conditional224=it_161==hash_160,                                    _if_conditional224) {
                                        # 1243 "./comelang2.h"
                                        __result134__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result134__;
                                    }
                                }
                            }
                            else {
                                # 1247 "./comelang2.h"
                                __result135__ = __result_obj__ = default_value;
                                come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result135__;
                            }
                        }
                        # 1251 "./comelang2.h"
                        __result136__ = __result_obj__ = default_value;
                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result136__;
                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sStructNode_sline(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    # 279 "14struct.c"
    __result139__ = self->sline;
    return __result139__;
}

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value153;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
    # 284 "14struct.c"
    __result140__ = __result_obj__ = ((char*)(right_value153=__builtin_string(self->sname)));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result140__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
void* right_value154;
char* __dec_obj55;
void* right_value155;
char* __dec_obj56;
void* right_value156;
struct sClass* __dec_obj57;
struct sStructNobodyNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
    # 298 "14struct.c"
    self->sline=info->sline;
    # 299 "14struct.c"
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(info->sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 301 "14struct.c"
    __dec_obj56=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(name))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 302 "14struct.c"
    __dec_obj57=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value156=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 304 "14struct.c"
    __result141__ = __result_obj__ = self;
    come_call_finalizer2(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result141__;
    come_call_finalizer2(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sStructNobodyNode_terminated(){
void* __result_obj__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    # 309 "14struct.c"
    __result142__ = (_Bool)1;
    return __result142__;
}

char* sStructNobodyNode_kind(){
void* __result_obj__;
void* right_value157;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
    # 314 "14struct.c"
    __result143__ = __result_obj__ = ((char*)(right_value157=__builtin_string("sStructNobodyNode")));
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result143__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value158;
char* name_170;
struct sClass* klass_171;
_Bool _if_conditional242;
void* right_value159;
void* right_value160;
void* right_value161;
struct sType* type_172;
void* right_value162;
_Bool _if_conditional243;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
memset(&name_170, 0, sizeof(char*));
memset(&klass_171, 0, sizeof(struct sClass*));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&type_172, 0, sizeof(struct sType*));
right_value162 = (void*)0;
    # 319 "14struct.c"
    name_170=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(self->mName))));
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 320 "14struct.c"
    klass_171=self->mClass;
    # 326 "14struct.c"
    # 322 "14struct.c"
    if(_if_conditional242=map$2charphsClassph_at(info->classes,name_170,((void*)0))==((void*)0),    _if_conditional242) {
        # 323 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_170),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value159=sClass_clone(klass_171)))));
        come_call_finalizer2(sClass_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    # 326 "14struct.c"
    type_172=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value160=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 326, "sType")))),name_170,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 328 "14struct.c"
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_170),(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(type_172)))));
    come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 336 "14struct.c"
    # 330 "14struct.c"
    if(_if_conditional243=info->output_header_file&&string_operator_not_equals(klass_171->mDeclareSName,info->base_sname),    _if_conditional243) {
    }
    else {
        # 333 "14struct.c"
        add_come_code_at_source_head(info,"struct %s;\n",name_170);
    }
    # 336 "14struct.c"
    __result144__ = (_Bool)1;
    name_170 = come_decrement_ref_count2(name_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result144__;
    name_170 = come_decrement_ref_count2(name_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    # 341 "14struct.c"
    __result145__ = self->sline;
    return __result145__;
}

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value163;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
    # 346 "14struct.c"
    __result146__ = __result_obj__ = ((char*)(right_value163=__builtin_string(self->sname)));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result146__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value164;
char* __dec_obj58;
struct sGenericsStructNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    # 357 "14struct.c"
    self->sline=info->sline;
    # 358 "14struct.c"
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(info->sname))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 360 "14struct.c"
    __result147__ = __result_obj__ = self;
    come_call_finalizer2(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result147__;
    come_call_finalizer2(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sGenericsStructNode_terminated(){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    # 366 "14struct.c"
    __result148__ = (_Bool)1;
    return __result148__;
}

char* sGenericsStructNode_kind(){
void* __result_obj__;
void* right_value165;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    # 371 "14struct.c"
    __result149__ = __result_obj__ = ((char*)(right_value165=__builtin_string("sGenericsStructNode")));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    # 377 "14struct.c"
    __result150__ = (_Bool)1;
    return __result150__;
}

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    # 382 "14struct.c"
    __result151__ = self->sline;
    return __result151__;
}

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value166;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    # 387 "14struct.c"
    __result152__ = __result_obj__ = ((char*)(right_value166=__builtin_string(self->sname)));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result152__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_173;
_Bool output_174;
_Bool _if_conditional245;
void* right_value167;
void* right_value168;
void* right_value169;
struct sClass* __dec_obj59;
void* right_value170;
void* right_value171;
struct sClass* __dec_obj60;
_Bool _if_conditional246;
_Bool _while_condtional26;
_Bool multiple_declare_177;
char* p_178;
int sline_179;
_Bool no_output_err_180;
void* right_value172;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_181;
char* name_182;
_Bool err_183;
_Bool _if_conditional249;
_Bool _if_conditional250;
void* right_value173;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_184;
char* name_185;
_Bool err_186;
void* right_value174;
struct tuple2$2sTypephcharph* multiple_assign_var6;
struct sType* type2_187;
char* name2_188;
_Bool _if_conditional253;
void* right_value175;
void* right_value176;
_Bool _while_condtional27;
void* right_value177;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_189;
char* name2_190;
_Bool _if_conditional254;
void* right_value178;
void* right_value179;
void* right_value180;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type2_191;
char* name_192;
_Bool err_193;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value181;
void* right_value182;
_Bool _if_conditional257;
void* right_value183;
void* right_value184;
void* right_value185;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* right_value190;
struct sNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_173, 0, sizeof(struct sClass*));
memset(&output_174, 0, sizeof(_Bool));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&multiple_declare_177, 0, sizeof(_Bool));
memset(&p_178, 0, sizeof(char*));
memset(&sline_179, 0, sizeof(int));
memset(&no_output_err_180, 0, sizeof(_Bool));
right_value172 = (void*)0;
memset(&type_181, 0, sizeof(struct sType*));
memset(&name_182, 0, sizeof(char*));
memset(&err_183, 0, sizeof(_Bool));
memset(&type_181, 0, sizeof(struct sType*));
memset(&name_182, 0, sizeof(char*));
memset(&err_183, 0, sizeof(_Bool));
right_value173 = (void*)0;
memset(&base_type_184, 0, sizeof(struct sType*));
memset(&name_185, 0, sizeof(char*));
memset(&err_186, 0, sizeof(_Bool));
memset(&base_type_184, 0, sizeof(struct sType*));
memset(&name_185, 0, sizeof(char*));
memset(&err_186, 0, sizeof(_Bool));
right_value174 = (void*)0;
memset(&type2_187, 0, sizeof(struct sType*));
memset(&name2_188, 0, sizeof(char*));
memset(&type2_187, 0, sizeof(struct sType*));
memset(&name2_188, 0, sizeof(char*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&type2_189, 0, sizeof(struct sType*));
memset(&name2_190, 0, sizeof(char*));
memset(&type2_189, 0, sizeof(struct sType*));
memset(&name2_190, 0, sizeof(char*));
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&type2_191, 0, sizeof(struct sType*));
memset(&name_192, 0, sizeof(char*));
memset(&err_193, 0, sizeof(_Bool));
memset(&type2_191, 0, sizeof(struct sType*));
memset(&name_192, 0, sizeof(char*));
memset(&err_193, 0, sizeof(_Bool));
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value190 = (void*)0;
    # 392 "14struct.c"
    # 393 "14struct.c"
    # 406 "14struct.c"
    # 394 "14struct.c"
    if(_if_conditional245=map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0),    _if_conditional245) {
        # 395 "14struct.c"
        output_174=(_Bool)1;
        # 396 "14struct.c"
        __dec_obj59=klass_173;
        klass_173=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value169=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value167=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 396, "sClass")))),((char*)(right_value168=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 397 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_173));
        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 400 "14struct.c"
        __dec_obj60=klass_173;
        klass_173=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value171=sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))))));
        come_call_finalizer2(sClass_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 404 "14struct.c"
        # 401 "14struct.c"
        if(_if_conditional246=list$1tuple2$2charphsTypephph_length(klass_173->mFields)>0,        _if_conditional246) {
            # 402 "14struct.c"
            output_174=(_Bool)0;
        }
    }
    # 406 "14struct.c"
    list$1tuple2$2charphsTypephph_reset(klass_173->mFields);
    # 408 "14struct.c"
    expected_next_character(123,info);
    # 473 "14struct.c"
    while(_while_condtional26=(_Bool)1,    _while_condtional26) {
        # 411 "14struct.c"
        multiple_declare_177=(_Bool)0;
        # 429 "14struct.c"
        {
            # 413 "14struct.c"
            p_178=info->p;
            # 414 "14struct.c"
            sline_179=info->sline;
            # 416 "14struct.c"
            no_output_err_180=info->no_output_err;
            # 417 "14struct.c"
            info->no_output_err=(_Bool)1;
            # 418 "14struct.c"
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value172=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_181=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_182=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_183=multiple_assign_var4->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 419 "14struct.c"
            info->no_output_err=no_output_err_180;
            # 425 "14struct.c"
            # 421 "14struct.c"
            if(_if_conditional249=err_183&&*info->p==44,            _if_conditional249) {
                # 422 "14struct.c"
                multiple_declare_177=(_Bool)1;
            }
            # 425 "14struct.c"
            info->p=p_178;
            # 426 "14struct.c"
            info->sline=sline_179;
            come_call_finalizer2(sType_finalize,type_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_182 = come_decrement_ref_count2(name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 461 "14struct.c"
        # 429 "14struct.c"
        if(multiple_declare_177) {
            # 430 "14struct.c"
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value173=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_184=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_185=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_186=multiple_assign_var5->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 432 "14struct.c"
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(right_value174=parse_variable_name((struct sType*)come_increment_ref_count(base_type_184),(_Bool)1,info)));
            type2_187=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_188=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 438 "14struct.c"
            # 434 "14struct.c"
            if(_if_conditional253=!info->no_output_err,            _if_conditional253) {
                # 435 "14struct.c"
                list$1tuple2$2charphsTypephph_push_back(klass_173->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value176=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value175=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 435, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_188),(struct sType*)come_increment_ref_count(type2_187))))));
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 448 "14struct.c"
            while(_while_condtional27=*info->p==44,            _while_condtional27) {
                # 439 "14struct.c"
                info->p++;
                # 440 "14struct.c"
                skip_spaces_and_lf(info);
                # 442 "14struct.c"
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(right_value177=parse_variable_name((struct sType*)come_increment_ref_count(base_type_184),(_Bool)0,info)));
                type2_189=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_190=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 447 "14struct.c"
                # 444 "14struct.c"
                if(_if_conditional254=!info->no_output_err,                _if_conditional254) {
                    # 445 "14struct.c"
                    list$1tuple2$2charphsTypephph_push_back(klass_173->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value179=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value178=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 445, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_190),(struct sType*)come_increment_ref_count(type2_189))))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(sType_finalize,type2_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name2_190 = come_decrement_ref_count2(name2_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,base_type_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_185 = come_decrement_ref_count2(name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name2_188 = come_decrement_ref_count2(name2_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 450 "14struct.c"
            parse_sharp_v5(info);
            # 451 "14struct.c"
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value180=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_191=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_192=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_193=multiple_assign_var8->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 457 "14struct.c"
            # 452 "14struct.c"
            if(_if_conditional255=!err_193,            _if_conditional255) {
                # 453 "14struct.c"
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                # 454 "14struct.c"
                exit(2);
            }
            # 460 "14struct.c"
            # 457 "14struct.c"
            if(_if_conditional256=!info->no_output_err,            _if_conditional256) {
                # 458 "14struct.c"
                list$1tuple2$2charphsTypephph_push_back(klass_173->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value182=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value181=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 458, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_192),(struct sType*)come_increment_ref_count(type2_191))))));
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type2_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_192 = come_decrement_ref_count2(name_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 461 "14struct.c"
        expected_next_character(59,info);
        # 463 "14struct.c"
        parse_sharp_v5(info);
        # 470 "14struct.c"
        # 465 "14struct.c"
        if(_if_conditional257=*info->p==125,        _if_conditional257) {
            # 466 "14struct.c"
            info->p++;
            # 467 "14struct.c"
            skip_spaces_and_lf(info);
            # 468 "14struct.c"
            break;
        }
        # 470 "14struct.c"
        parse_sharp_v5(info);
    }
    # 473 "14struct.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 473, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(right_value185=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value183=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 473, "sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_173),output_174,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sStructNode_sline;
    _inf_value1->sname=(void*)sStructNode_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result156__ = __result_obj__ = ((struct sNode*)(right_value190=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sStructNode_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStructNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value190) { right_value190 = come_decrement_ref_count2(right_value190, ((struct sNode*)right_value190)->finalize, ((struct sNode*)right_value190)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result156__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_175;
_Bool _while_condtional25;
struct list_item$1tuple2$2charphsTypephph* prev_it_176;
struct list$1tuple2$2charphsTypephph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_175, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_176, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        # 433 "./comelang2.h"
        it_175=self->head;
        # 440 "./comelang2.h"
        while(_while_condtional25=it_175!=((void*)0),        _while_condtional25) {
            # 435 "./comelang2.h"
            prev_it_176=it_175;
            # 436 "./comelang2.h"
            it_175=it_175->next;
            # 437 "./comelang2.h"
            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 440 "./comelang2.h"
        self->head=((void*)0);
        # 441 "./comelang2.h"
        self->tail=((void*)0);
        # 443 "./comelang2.h"
        self->len=0;
        # 445 "./comelang2.h"
        __result153__ = __result_obj__ = self;
        return __result153__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional247;
_Bool _if_conditional248;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional247=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional247) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional248=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional248) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional251;
_Bool _if_conditional252;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2sTypephcharphp_finalize"
                # 0 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional251=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional251) {
                    # 0 "tuple2$2sTypephcharphp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple2$2sTypephcharphp_finalize"
                # 1 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional252=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional252) {
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional267;
char* source_head_195;
void* right_value191;
char* type_name_196;
_Bool _if_conditional268;
struct sClass* struct_class_197;
_Bool _if_conditional269;
void* right_value192;
void* right_value193;
struct sClass* __dec_obj64;
struct sClass* __dec_obj65;
char* source_tail_198;
void* right_value194;
void* right_value195;
struct buffer* header_199;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* right_value204;
struct sNode* __result159__;
_Bool _if_conditional278;
_Bool _while_condtional29;
void* right_value205;
char* T_203;
void* right_value209;
_Bool _if_conditional281;
_Bool _if_conditional282;
struct sClass* generics_class_207;
_Bool _if_conditional283;
void* right_value210;
void* right_value211;
struct sClass* __dec_obj72;
_Bool _if_conditional284;
_Bool _while_condtional30;
void* right_value212;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_208;
char* name_209;
_Bool err_210;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value213;
void* right_value214;
_Bool _while_condtional31;
void* right_value215;
char* name2_211;
void* right_value216;
struct sType* type3_212;
_Bool _if_conditional287;
_Bool no_comma_213;
void* right_value217;
struct sNode* node_214;
struct sNode* __dec_obj73;
void* right_value218;
void* right_value219;
void* right_value220;
void* right_value221;
_Bool _if_conditional288;
char* source_tail_215;
void* right_value222;
void* right_value223;
struct buffer* header_216;
void* right_value224;
void* right_value225;
void* right_value226;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* right_value229;
struct sNode* __result164__;
_Bool output_218;
struct sClass* struct_class_219;
_Bool _if_conditional293;
void* right_value230;
void* right_value231;
struct sClass* __dec_obj75;
void* right_value232;
struct sClass* __dec_obj76;
_Bool _if_conditional294;
_Bool _while_condtional32;
_Bool multiple_declare_220;
char* p_221;
int sline_222;
_Bool no_output_err_223;
void* right_value233;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_224;
char* name_225;
_Bool err_226;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value234;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* base_type_227;
char* name_228;
_Bool err_229;
void* right_value235;
struct tuple2$2sTypephcharph* multiple_assign_var12;
struct sType* type2_230;
char* name2_231;
void* right_value236;
void* right_value237;
_Bool _while_condtional33;
void* right_value238;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_232;
char* name2_233;
void* right_value239;
void* right_value240;
void* right_value241;
struct tuple3$3sTypephcharphbool* multiple_assign_var14;
struct sType* type2_234;
char* name_235;
_Bool err_236;
_Bool _if_conditional297;
void* right_value242;
void* right_value243;
_Bool _if_conditional298;
struct sClass* klass2_237;
_Bool _if_conditional299;
_Bool _if_conditional300;
char* source_tail_238;
void* right_value244;
void* right_value245;
struct buffer* header_239;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
void* right_value250;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* right_value255;
struct sNode* __result167__;
void* right_value256;
struct sNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_195, 0, sizeof(char*));
right_value191 = (void*)0;
memset(&type_name_196, 0, sizeof(char*));
memset(&struct_class_197, 0, sizeof(struct sClass*));
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&source_tail_198, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&header_199, 0, sizeof(struct buffer*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&T_203, 0, sizeof(char*));
right_value209 = (void*)0;
memset(&generics_class_207, 0, sizeof(struct sClass*));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&type2_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&type2_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&name2_211, 0, sizeof(char*));
right_value216 = (void*)0;
memset(&type3_212, 0, sizeof(struct sType*));
memset(&no_comma_213, 0, sizeof(_Bool));
right_value217 = (void*)0;
memset(&node_214, 0, sizeof(struct sNode*));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&source_tail_215, 0, sizeof(char*));
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&header_216, 0, sizeof(struct buffer*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value229 = (void*)0;
memset(&output_218, 0, sizeof(_Bool));
memset(&struct_class_219, 0, sizeof(struct sClass*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&multiple_declare_220, 0, sizeof(_Bool));
memset(&p_221, 0, sizeof(char*));
memset(&sline_222, 0, sizeof(int));
memset(&no_output_err_223, 0, sizeof(_Bool));
right_value233 = (void*)0;
memset(&type_224, 0, sizeof(struct sType*));
memset(&name_225, 0, sizeof(char*));
memset(&err_226, 0, sizeof(_Bool));
memset(&type_224, 0, sizeof(struct sType*));
memset(&name_225, 0, sizeof(char*));
memset(&err_226, 0, sizeof(_Bool));
right_value234 = (void*)0;
memset(&base_type_227, 0, sizeof(struct sType*));
memset(&name_228, 0, sizeof(char*));
memset(&err_229, 0, sizeof(_Bool));
memset(&base_type_227, 0, sizeof(struct sType*));
memset(&name_228, 0, sizeof(char*));
memset(&err_229, 0, sizeof(_Bool));
right_value235 = (void*)0;
memset(&type2_230, 0, sizeof(struct sType*));
memset(&name2_231, 0, sizeof(char*));
memset(&type2_230, 0, sizeof(struct sType*));
memset(&name2_231, 0, sizeof(char*));
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&type2_232, 0, sizeof(struct sType*));
memset(&name2_233, 0, sizeof(char*));
memset(&type2_232, 0, sizeof(struct sType*));
memset(&name2_233, 0, sizeof(char*));
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&type2_234, 0, sizeof(struct sType*));
memset(&name_235, 0, sizeof(char*));
memset(&err_236, 0, sizeof(_Bool));
memset(&type2_234, 0, sizeof(struct sType*));
memset(&name_235, 0, sizeof(char*));
memset(&err_236, 0, sizeof(_Bool));
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&klass2_237, 0, sizeof(struct sClass*));
memset(&source_tail_238, 0, sizeof(char*));
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&header_239, 0, sizeof(struct buffer*));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
    # 705 "14struct.c"
    # 478 "14struct.c"
    if(_if_conditional267=charp_operator_equals(buf,"struct"),    _if_conditional267) {
        # 479 "14struct.c"
        source_head_195=head;
        # 481 "14struct.c"
        type_name_196=(char*)come_increment_ref_count(((char*)(right_value191=parse_word(info))));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 703 "14struct.c"
        # 483 "14struct.c"
        if(_if_conditional268=*info->p==59,        _if_conditional268) {
            # 484 "14struct.c"
            info->p++;
            # 485 "14struct.c"
            skip_spaces_and_lf(info);
            # 487 "14struct.c"
            # 497 "14struct.c"
            # 488 "14struct.c"
            if(_if_conditional269=map$2charphsClassph_at(info->classes,type_name_196,((void*)0))==((void*)0),            _if_conditional269) {
                # 489 "14struct.c"
                __dec_obj64=struct_class_197;
                struct_class_197=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value193=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value192=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 489, "sClass")))),type_name_196,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                come_call_finalizer2(sClass_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 490 "14struct.c"
                struct_class_197->mNobodyStruct=(_Bool)1;
            }
            else {
                # 493 "14struct.c"
                __dec_obj65=struct_class_197;
                struct_class_197=(struct sClass*)come_increment_ref_count(map$2charphsClassph_at(info->classes,type_name_196,((void*)0)));
                come_call_finalizer2(sClass_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 494 "14struct.c"
                struct_class_197->mNobodyStruct=(_Bool)1;
            }
            # 497 "14struct.c"
            source_tail_198=info->p;
            # 499 "14struct.c"
            header_199=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value195=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value194=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 499, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 500 "14struct.c"
            buffer_append(header_199,source_head_195,source_tail_198-source_head_195);
            # 502 "14struct.c"
            add_come_code_at_come_header(info,"%s",((char*)(right_value196=buffer_to_string(header_199))));
            right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 504 "14struct.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 504, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(right_value199=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value197=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 504, "sStructNobodyNode")))),(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string(type_name_196)))),(struct sClass*)come_increment_ref_count(struct_class_197),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sStructNobodyNode_sline;
            _inf_value2->sname=(void*)sStructNobodyNode_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result159__ = __result_obj__ = ((struct sNode*)(right_value204=_inf_value2));
            come_call_finalizer2(sClass_finalize,struct_class_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_196 = come_decrement_ref_count2(type_name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sStructNobodyNode_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStructNobodyNode_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value204) { right_value204 = come_decrement_ref_count2(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result159__;
            come_call_finalizer2(sClass_finalize,struct_class_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 702 "14struct.c"
            # 507 "14struct.c"
            if(_if_conditional278=*info->p==60,            _if_conditional278) {
                # 508 "14struct.c"
                list$1charph_reset(info->generics_type_names);
                # 510 "14struct.c"
                info->p++;
                # 511 "14struct.c"
                skip_spaces_and_lf(info);
                # 532 "14struct.c"
                while(_while_condtional29=(_Bool)1,                _while_condtional29) {
                    # 514 "14struct.c"
                    T_203=(char*)come_increment_ref_count(((char*)(right_value205=parse_word(info))));
                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 515 "14struct.c"
                    list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value209=string_clone(T_203)))));
                    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 530 "14struct.c"
                    # 517 "14struct.c"
                    if(_if_conditional281=*info->p==62,                    _if_conditional281) {
                        # 518 "14struct.c"
                        info->p++;
                        # 519 "14struct.c"
                        skip_spaces_and_lf(info);
                        # 520 "14struct.c"
                        T_203 = come_decrement_ref_count2(T_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        # 530 "14struct.c"
                        # 522 "14struct.c"
                        if(_if_conditional282=*info->p==44,                        _if_conditional282) {
                            # 523 "14struct.c"
                            info->p++;
                            # 524 "14struct.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 527 "14struct.c"
                            err_msg(info,"invalid generics struct definition");
                            # 528 "14struct.c"
                            exit(2);
                        }
                    }
                    T_203 = come_decrement_ref_count2(T_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 532 "14struct.c"
                # 541 "14struct.c"
                # 533 "14struct.c"
                if(_if_conditional283=map$2charphsClassph_at(info->generics_classes,type_name_196,((void*)0))!=((void*)0),                _if_conditional283) {
                    # 534 "14struct.c"
                    err_msg(info,"redifined generics struct(%s)",type_name_196);
                    # 535 "14struct.c"
                    exit(2);
                }
                else {
                    # 538 "14struct.c"
                    __dec_obj72=generics_class_207;
                    generics_class_207=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value211=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value210=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 538, "sClass")))),type_name_196,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    come_call_finalizer2(sClass_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sClass_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 545 "14struct.c"
                # 541 "14struct.c"
                if(_if_conditional284=map$2charphsClassph_at(info->generics_classes,type_name_196,((void*)0))==((void*)0),                _if_conditional284) {
                    # 542 "14struct.c"
                    map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_196),(struct sClass*)come_increment_ref_count(generics_class_207));
                }
                # 545 "14struct.c"
                expected_next_character(123,info);
                # 599 "14struct.c"
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    # 548 "14struct.c"
                    parse_sharp_v5(info);
                    # 550 "14struct.c"
                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value212=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_208=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                    name_209=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                    err_210=multiple_assign_var9->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 557 "14struct.c"
                    # 552 "14struct.c"
                    if(_if_conditional285=!err_210,                    _if_conditional285) {
                        # 553 "14struct.c"
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        # 554 "14struct.c"
                        exit(2);
                    }
                    # 587 "14struct.c"
                    # 557 "14struct.c"
                    if(_if_conditional286=*info->p==44,                    _if_conditional286) {
                        # 558 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(generics_class_207->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value214=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value213=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 558, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_209),(struct sType*)come_increment_ref_count(type2_208))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 582 "14struct.c"
                        while(_while_condtional31=*info->p==44,                        _while_condtional31) {
                            # 561 "14struct.c"
                            info->p++;
                            # 562 "14struct.c"
                            skip_spaces_and_lf(info);
                            # 564 "14struct.c"
                            name2_211=(char*)come_increment_ref_count(((char*)(right_value215=parse_word(info))));
                            right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 566 "14struct.c"
                            type3_212=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(type2_208))));
                            come_call_finalizer2(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 580 "14struct.c"
                            # 568 "14struct.c"
                            if(_if_conditional287=*info->p==58,                            _if_conditional287) {
                                # 569 "14struct.c"
                                info->p++;
                                # 570 "14struct.c"
                                skip_spaces_and_lf(info);
                                # 572 "14struct.c"
                                no_comma_213=info->no_comma;
                                # 573 "14struct.c"
                                info->no_comma=(_Bool)1;
                                # 574 "14struct.c"
                                node_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=expression_v13(info))));
                                if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 575 "14struct.c"
                                info->no_comma=no_comma_213;
                                # 577 "14struct.c"
                                __dec_obj73=type3_212->mSizeNum;
                                type3_212->mSizeNum=(struct sNode*)come_increment_ref_count(node_214);
                                if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node_214) { node_214 = come_decrement_ref_count2(node_214, ((struct sNode*)node_214)->finalize, ((struct sNode*)node_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 580 "14struct.c"
                            list$1tuple2$2charphsTypephph_push_back(generics_class_207->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value219=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value218=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 580, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_211),(struct sType*)come_increment_ref_count(type3_212))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            name2_211 = come_decrement_ref_count2(name2_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,type3_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 584 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(generics_class_207->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value221=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value220=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 584, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_209),(struct sType*)come_increment_ref_count(type2_208))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 587 "14struct.c"
                    expected_next_character(59,info);
                    # 589 "14struct.c"
                    parse_sharp_v5(info);
                    # 596 "14struct.c"
                    # 591 "14struct.c"
                    if(_if_conditional288=*info->p==125,                    _if_conditional288) {
                        # 592 "14struct.c"
                        info->p++;
                        # 593 "14struct.c"
                        skip_spaces_and_lf(info);
                        # 594 "14struct.c"
                        come_call_finalizer2(sType_finalize,type2_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    # 596 "14struct.c"
                    parse_sharp_v5(info);
                    come_call_finalizer2(sType_finalize,type2_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 599 "14struct.c"
                list$1charph_reset(info->generics_type_names);
                # 601 "14struct.c"
                source_tail_215=info->p;
                # 603 "14struct.c"
                header_216=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value223=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value222=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 603, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 604 "14struct.c"
                buffer_append_str(header_216,"struct ");
                # 605 "14struct.c"
                buffer_append(header_216,source_head_195,source_tail_215-source_head_195);
                # 607 "14struct.c"
                add_come_code_at_come_header(info,"%s;\n",((char*)(right_value224=buffer_to_string(header_216))));
                right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 609 "14struct.c"
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 609, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(right_value226=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value225=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 609, "sGenericsStructNode")))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sGenericsStructNode_sline;
                _inf_value3->sname=(void*)sGenericsStructNode_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result164__ = __result_obj__ = ((struct sNode*)(right_value229=_inf_value3));
                come_call_finalizer2(sClass_finalize,generics_class_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_196 = come_decrement_ref_count2(type_name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sGenericsStructNode_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sGenericsStructNode_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value229) { right_value229 = come_decrement_ref_count2(right_value229, ((struct sNode*)right_value229)->finalize, ((struct sNode*)right_value229)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result164__;
                come_call_finalizer2(sClass_finalize,generics_class_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 612 "14struct.c"
                output_218=(_Bool)1;
                # 614 "14struct.c"
                # 625 "14struct.c"
                # 615 "14struct.c"
                if(_if_conditional293=map$2charphsClassph_at(info->classes,type_name_196,((void*)0))==((void*)0),                _if_conditional293) {
                    # 616 "14struct.c"
                    __dec_obj75=struct_class_219;
                    struct_class_219=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value231=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value230=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 616, "sClass")))),type_name_196,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    come_call_finalizer2(sClass_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sClass_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 619 "14struct.c"
                    __dec_obj76=struct_class_219;
                    struct_class_219=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value232=sClass_clone(map$2charphsClassph_at(info->classes,type_name_196,((void*)0))))));
                    come_call_finalizer2(sClass_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 623 "14struct.c"
                    # 620 "14struct.c"
                    if(_if_conditional294=list$1tuple2$2charphsTypephph_length(struct_class_219->mFields)>0,                    _if_conditional294) {
                        # 621 "14struct.c"
                        output_218=(_Bool)0;
                    }
                }
                # 625 "14struct.c"
                expected_next_character(123,info);
                # 686 "14struct.c"
                while(_while_condtional32=(_Bool)1,                _while_condtional32) {
                    # 628 "14struct.c"
                    parse_sharp_v5(info);
                    # 630 "14struct.c"
                    multiple_declare_220=(_Bool)0;
                    # 648 "14struct.c"
                    {
                        # 632 "14struct.c"
                        p_221=info->p;
                        # 633 "14struct.c"
                        sline_222=info->sline;
                        # 635 "14struct.c"
                        no_output_err_223=info->no_output_err;
                        # 636 "14struct.c"
                        info->no_output_err=(_Bool)1;
                        # 637 "14struct.c"
                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value233=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type_224=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                        name_225=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        err_226=multiple_assign_var10->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 638 "14struct.c"
                        info->no_output_err=no_output_err_223;
                        # 644 "14struct.c"
                        # 640 "14struct.c"
                        if(_if_conditional295=err_226&&*info->p==44,                        _if_conditional295) {
                            # 641 "14struct.c"
                            multiple_declare_220=(_Bool)1;
                        }
                        # 644 "14struct.c"
                        info->p=p_221;
                        # 645 "14struct.c"
                        info->sline=sline_222;
                        come_call_finalizer2(sType_finalize,type_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_225 = come_decrement_ref_count2(name_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 674 "14struct.c"
                    # 648 "14struct.c"
                    if(multiple_declare_220) {
                        # 649 "14struct.c"
                        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value234=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_227=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_228=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_229=multiple_assign_var11->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 651 "14struct.c"
                        multiple_assign_var12=((struct tuple2$2sTypephcharph*)(right_value235=parse_variable_name((struct sType*)come_increment_ref_count(base_type_227),(_Bool)1,info)));
                        type2_230=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name2_231=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 653 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(struct_class_219->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value237=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value236=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 653, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_231),(struct sType*)come_increment_ref_count(type2_230))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 663 "14struct.c"
                        while(_while_condtional33=*info->p==44,                        _while_condtional33) {
                            # 656 "14struct.c"
                            info->p++;
                            # 657 "14struct.c"
                            skip_spaces_and_lf(info);
                            # 659 "14struct.c"
                            multiple_assign_var13=((struct tuple2$2sTypephcharph*)(right_value238=parse_variable_name((struct sType*)come_increment_ref_count(base_type_227),(_Bool)0,info)));
                            type2_232=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                            name2_233=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 661 "14struct.c"
                            list$1tuple2$2charphsTypephph_push_back(struct_class_219->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value240=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value239=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 661, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_233),(struct sType*)come_increment_ref_count(type2_232))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name2_233 = come_decrement_ref_count2(name2_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(sType_finalize,base_type_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type2_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name2_231 = come_decrement_ref_count2(name2_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 665 "14struct.c"
                        multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(right_value241=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type2_234=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                        name_235=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        err_236=multiple_assign_var14->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 671 "14struct.c"
                        # 666 "14struct.c"
                        if(_if_conditional297=!err_236,                        _if_conditional297) {
                            # 667 "14struct.c"
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            # 668 "14struct.c"
                            exit(2);
                        }
                        # 671 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(struct_class_219->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value243=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value242=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 671, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_235),(struct sType*)come_increment_ref_count(type2_234))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type2_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_235 = come_decrement_ref_count2(name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 674 "14struct.c"
                    expected_next_character(59,info);
                    # 676 "14struct.c"
                    parse_sharp_v5(info);
                    # 683 "14struct.c"
                    # 678 "14struct.c"
                    if(_if_conditional298=*info->p==125,                    _if_conditional298) {
                        # 679 "14struct.c"
                        info->p++;
                        # 680 "14struct.c"
                        skip_spaces_and_lf(info);
                        # 681 "14struct.c"
                        break;
                    }
                    # 683 "14struct.c"
                    parse_sharp_v5(info);
                }
                # 686 "14struct.c"
                list$1charph_reset(info->generics_type_names);
                # 688 "14struct.c"
                klass2_237=map$2charphsClassph_at(info->classes,type_name_196,((void*)0));
                # 700 "14struct.c"
                # 690 "14struct.c"
                if(_if_conditional299=klass2_237==((void*)0)||klass2_237->mNobodyStruct,                _if_conditional299) {
                    # 691 "14struct.c"
                    # 691 "14struct.c"
                    if(klass2_237) {
                        # 691 "14struct.c"
                        klass2_237->mNobodyStruct=(_Bool)0;
                    }
                    # 692 "14struct.c"
                    source_tail_238=info->p;
                    # 694 "14struct.c"
                    header_239=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value245=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value244=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 694, "buffer"))))))));
                    come_call_finalizer2(buffer_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 695 "14struct.c"
                    buffer_append(header_239,source_head_195,source_tail_238-source_head_195);
                    # 697 "14struct.c"
                    add_come_code_at_come_header(info,"%s;\n",((char*)(right_value246=buffer_to_string(header_239))));
                    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,header_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 700 "14struct.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 700, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(right_value250=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value247=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 700, "sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value248=__builtin_string(type_name_196)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value249=sClass_clone(struct_class_219)))),output_218,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sStructNode_sline;
                _inf_value4->sname=(void*)sStructNode_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result167__ = __result_obj__ = ((struct sNode*)(right_value255=_inf_value4));
                come_call_finalizer2(sClass_finalize,struct_class_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_196 = come_decrement_ref_count2(type_name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sStructNode_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sStructNode_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value255) { right_value255 = come_decrement_ref_count2(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result167__;
                come_call_finalizer2(sClass_finalize,struct_class_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        type_name_196 = come_decrement_ref_count2(type_name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 705 "14struct.c"
    __result168__ = __result_obj__ = ((struct sNode*)(right_value256=top_level_v97(buf,head,head_sline,info)));
    if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result168__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sStructNobodyNode_finalize"
                # 0 "sStructNobodyNode_finalize"
                if(_if_conditional270=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional270) {
                    # 0 "sStructNobodyNode_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sStructNobodyNode_finalize"
                # 1 "sStructNobodyNode_finalize"
                if(_if_conditional271=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional271) {
                    # 1 "sStructNobodyNode_finalize"
                    come_call_finalizer2(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sStructNobodyNode_finalize"
                # 2 "sStructNobodyNode_finalize"
                if(_if_conditional272=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional272) {
                    # 2 "sStructNobodyNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional273;
struct sStructNobodyNode* __result157__;
void* right_value200;
struct sStructNobodyNode* result_200;
_Bool _if_conditional274;
void* right_value201;
char* __dec_obj66;
_Bool _if_conditional275;
void* right_value202;
struct sClass* __dec_obj67;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value203;
char* __dec_obj68;
struct sStructNobodyNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
memset(&result_200, 0, sizeof(struct sStructNobodyNode*));
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
                # 3 "sStructNobodyNode_clone"
                # 2 "sStructNobodyNode_clone"
                if(_if_conditional273=self==(void*)0,                _if_conditional273) {
                    # 2 "sStructNobodyNode_clone"
                    __result157__ = __result_obj__ = (void*)0;
                    return __result157__;
                }
                # 3 "sStructNobodyNode_clone"
                result_200=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value200=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "sStructNobodyNode"))));
                come_call_finalizer2(sStructNobodyNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sStructNobodyNode_clone"
                # 4 "sStructNobodyNode_clone"
                if(_if_conditional274=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional274) {
                    # 4 "sStructNobodyNode_clone"
                    __dec_obj66=result_200->mName;
                    result_200->mName=(char*)come_increment_ref_count(((char*)(right_value201=string_clone(self->mName))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sStructNobodyNode_clone"
                # 5 "sStructNobodyNode_clone"
                if(_if_conditional275=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional275) {
                    # 5 "sStructNobodyNode_clone"
                    __dec_obj67=result_200->mClass;
                    result_200->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value202=sClass_clone(self->mClass))));
                    come_call_finalizer2(sClass_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sStructNobodyNode_clone"
                # 6 "sStructNobodyNode_clone"
                if(_if_conditional276=self!=((void*)0),                _if_conditional276) {
                    # 6 "sStructNobodyNode_clone"
                    result_200->sline=self->sline;
                }
                # 8 "sStructNobodyNode_clone"
                # 7 "sStructNobodyNode_clone"
                if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional277) {
                    # 7 "sStructNobodyNode_clone"
                    __dec_obj68=result_200->sname;
                    result_200->sname=(char*)come_increment_ref_count(((char*)(right_value203=string_clone(self->sname))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 8 "sStructNobodyNode_clone"
                __result158__ = __result_obj__ = result_200;
                come_call_finalizer2(sStructNobodyNode_finalize,result_200, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result158__;
                come_call_finalizer2(sStructNobodyNode_finalize,result_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_201;
_Bool _while_condtional28;
struct list_item$1charph* prev_it_202;
struct list$1charph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_201, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_202, 0, sizeof(struct list_item$1charph*));
                    # 433 "./comelang2.h"
                    it_201=self->head;
                    # 440 "./comelang2.h"
                    while(_while_condtional28=it_201!=((void*)0),                    _while_condtional28) {
                        # 435 "./comelang2.h"
                        prev_it_202=it_201;
                        # 436 "./comelang2.h"
                        it_201=it_201->next;
                        # 437 "./comelang2.h"
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 440 "./comelang2.h"
                    self->head=((void*)0);
                    # 441 "./comelang2.h"
                    self->tail=((void*)0);
                    # 443 "./comelang2.h"
                    self->len=0;
                    # 445 "./comelang2.h"
                    __result160__ = __result_obj__ = self;
                    return __result160__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional279;
void* right_value206;
struct list_item$1charph* litem_204;
char* __dec_obj69;
_Bool _if_conditional280;
void* right_value207;
struct list_item$1charph* litem_205;
char* __dec_obj70;
void* right_value208;
struct list_item$1charph* litem_206;
char* __dec_obj71;
struct list$1charph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
memset(&litem_204, 0, sizeof(struct list_item$1charph*));
right_value207 = (void*)0;
memset(&litem_205, 0, sizeof(struct list_item$1charph*));
right_value208 = (void*)0;
memset(&litem_206, 0, sizeof(struct list_item$1charph*));
                        # 256 "./comelang2.h"
                        # 225 "./comelang2.h"
                        if(_if_conditional279=self->len==0,                        _if_conditional279) {
                            # 226 "./comelang2.h"
                            litem_204=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value206=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 228 "./comelang2.h"
                            litem_204->prev=((void*)0);
                            # 229 "./comelang2.h"
                            litem_204->next=((void*)0);
                            # 230 "./comelang2.h"
                            __dec_obj69=litem_204->item;
                            litem_204->item=(char*)come_increment_ref_count(item);
                            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 232 "./comelang2.h"
                            self->tail=litem_204;
                            # 233 "./comelang2.h"
                            self->head=litem_204;
                        }
                        else {
                            # 256 "./comelang2.h"
                            # 235 "./comelang2.h"
                            if(_if_conditional280=self->len==1,                            _if_conditional280) {
                                # 236 "./comelang2.h"
                                litem_205=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value207=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 238 "./comelang2.h"
                                litem_205->prev=self->head;
                                # 239 "./comelang2.h"
                                litem_205->next=((void*)0);
                                # 240 "./comelang2.h"
                                __dec_obj70=litem_205->item;
                                litem_205->item=(char*)come_increment_ref_count(item);
                                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 242 "./comelang2.h"
                                self->tail=litem_205;
                                # 243 "./comelang2.h"
                                self->head->next=litem_205;
                            }
                            else {
                                # 246 "./comelang2.h"
                                litem_206=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value208=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 248 "./comelang2.h"
                                litem_206->prev=self->tail;
                                # 249 "./comelang2.h"
                                litem_206->next=((void*)0);
                                # 250 "./comelang2.h"
                                __dec_obj71=litem_206->item;
                                litem_206->item=(char*)come_increment_ref_count(item);
                                __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 252 "./comelang2.h"
                                self->tail->next=litem_206;
                                # 253 "./comelang2.h"
                                self->tail=litem_206;
                            }
                        }
                        # 256 "./comelang2.h"
                        self->len++;
                        # 258 "./comelang2.h"
                        __result161__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result161__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional289;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sGenericsStructNode_finalize"
                    # 0 "sGenericsStructNode_finalize"
                    if(_if_conditional289=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional289) {
                        # 0 "sGenericsStructNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional290;
struct sGenericsStructNode* __result162__;
void* right_value227;
struct sGenericsStructNode* result_217;
_Bool _if_conditional291;
_Bool _if_conditional292;
void* right_value228;
char* __dec_obj74;
struct sGenericsStructNode* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value227 = (void*)0;
memset(&result_217, 0, sizeof(struct sGenericsStructNode*));
right_value228 = (void*)0;
                    # 3 "sGenericsStructNode_clone"
                    # 2 "sGenericsStructNode_clone"
                    if(_if_conditional290=self==(void*)0,                    _if_conditional290) {
                        # 2 "sGenericsStructNode_clone"
                        __result162__ = __result_obj__ = (void*)0;
                        return __result162__;
                    }
                    # 3 "sGenericsStructNode_clone"
                    result_217=(struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value227=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "sGenericsStructNode"))));
                    come_call_finalizer2(sGenericsStructNode_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sGenericsStructNode_clone"
                    # 4 "sGenericsStructNode_clone"
                    if(_if_conditional291=self!=((void*)0),                    _if_conditional291) {
                        # 4 "sGenericsStructNode_clone"
                        result_217->sline=self->sline;
                    }
                    # 6 "sGenericsStructNode_clone"
                    # 5 "sGenericsStructNode_clone"
                    if(_if_conditional292=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional292) {
                        # 5 "sGenericsStructNode_clone"
                        __dec_obj74=result_217->sname;
                        result_217->sname=(char*)come_increment_ref_count(((char*)(right_value228=string_clone(self->sname))));
                        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "sGenericsStructNode_clone"
                    __result163__ = __result_obj__ = result_217;
                    come_call_finalizer2(sGenericsStructNode_finalize,result_217, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result163__;
                    come_call_finalizer2(sGenericsStructNode_finalize,result_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStructNode_finalize(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sStructNode_finalize"
                    # 0 "sStructNode_finalize"
                    if(_if_conditional301=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional301) {
                        # 0 "sStructNode_finalize"
                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sStructNode_finalize"
                    # 1 "sStructNode_finalize"
                    if(_if_conditional302=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional302) {
                        # 1 "sStructNode_finalize"
                        come_call_finalizer2(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sStructNode_finalize"
                    # 2 "sStructNode_finalize"
                    if(_if_conditional303=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional303) {
                        # 2 "sStructNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional304;
struct sStructNode* __result165__;
void* right_value251;
struct sStructNode* result_240;
_Bool _if_conditional305;
void* right_value252;
char* __dec_obj77;
_Bool _if_conditional306;
void* right_value253;
struct sClass* __dec_obj78;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value254;
char* __dec_obj79;
_Bool _if_conditional309;
struct sStructNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
memset(&result_240, 0, sizeof(struct sStructNode*));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
                    # 3 "sStructNode_clone"
                    # 2 "sStructNode_clone"
                    if(_if_conditional304=self==(void*)0,                    _if_conditional304) {
                        # 2 "sStructNode_clone"
                        __result165__ = __result_obj__ = (void*)0;
                        return __result165__;
                    }
                    # 3 "sStructNode_clone"
                    result_240=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value251=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "sStructNode"))));
                    come_call_finalizer2(sStructNode_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sStructNode_clone"
                    # 4 "sStructNode_clone"
                    if(_if_conditional305=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional305) {
                        # 4 "sStructNode_clone"
                        __dec_obj77=result_240->mName;
                        result_240->mName=(char*)come_increment_ref_count(((char*)(right_value252=string_clone(self->mName))));
                        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "sStructNode_clone"
                    # 5 "sStructNode_clone"
                    if(_if_conditional306=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional306) {
                        # 5 "sStructNode_clone"
                        __dec_obj78=result_240->mClass;
                        result_240->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value253=sClass_clone(self->mClass))));
                        come_call_finalizer2(sClass_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sClass_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sStructNode_clone"
                    # 6 "sStructNode_clone"
                    if(_if_conditional307=self!=((void*)0),                    _if_conditional307) {
                        # 6 "sStructNode_clone"
                        result_240->sline=self->sline;
                    }
                    # 8 "sStructNode_clone"
                    # 7 "sStructNode_clone"
                    if(_if_conditional308=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional308) {
                        # 7 "sStructNode_clone"
                        __dec_obj79=result_240->sname;
                        result_240->sname=(char*)come_increment_ref_count(((char*)(right_value254=string_clone(self->sname))));
                        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 9 "sStructNode_clone"
                    # 8 "sStructNode_clone"
                    if(_if_conditional309=self!=((void*)0),                    _if_conditional309) {
                        # 8 "sStructNode_clone"
                        result_240->mOutput=self->mOutput;
                    }
                    # 9 "sStructNode_clone"
                    __result166__ = __result_obj__ = result_240;
                    come_call_finalizer2(sStructNode_finalize,result_240, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result166__;
                    come_call_finalizer2(sStructNode_finalize,result_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool define_struct_241;
char* p_242;
int sline_243;
_Bool _if_conditional310;
void* right_value257;
char* type_name_244;
_Bool _if_conditional311;
void* right_value258;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value259;
char* type_name_245;
void* right_value260;
struct sNode* __result169__;
void* right_value261;
struct sNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&define_struct_241, 0, sizeof(_Bool));
memset(&p_242, 0, sizeof(char*));
memset(&sline_243, 0, sizeof(int));
right_value257 = (void*)0;
memset(&type_name_244, 0, sizeof(char*));
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&type_name_245, 0, sizeof(char*));
right_value260 = (void*)0;
right_value261 = (void*)0;
    # 710 "14struct.c"
    define_struct_241=(_Bool)0;
    # 731 "14struct.c"
    {
        # 712 "14struct.c"
        p_242=info->p;
        # 713 "14struct.c"
        sline_243=info->sline;
        # 727 "14struct.c"
        # 715 "14struct.c"
        if(_if_conditional310=charp_operator_equals(buf,"struct"),        _if_conditional310) {
            # 716 "14struct.c"
            type_name_244=(char*)come_increment_ref_count(((char*)(right_value257=parse_word(info))));
            right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 725 "14struct.c"
            # 718 "14struct.c"
            if(_if_conditional311=*info->p==123,            _if_conditional311) {
                # 719 "14struct.c"
                ((char*)(right_value258=skip_block(info)));
                right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 724 "14struct.c"
                # 721 "14struct.c"
                if(_if_conditional312=*info->p==59,                _if_conditional312) {
                    # 722 "14struct.c"
                    define_struct_241=(_Bool)1;
                }
            }
            type_name_244 = come_decrement_ref_count2(type_name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 727 "14struct.c"
        info->p=p_242;
        # 728 "14struct.c"
        info->sline=sline_243;
    }
    # 737 "14struct.c"
    # 731 "14struct.c"
    if(define_struct_241) {
        # 732 "14struct.c"
        type_name_245=(char*)come_increment_ref_count(((char*)(right_value259=parse_word(info))));
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 734 "14struct.c"
        __result169__ = __result_obj__ = ((struct sNode*)(right_value260=parse_struct((char*)come_increment_ref_count(type_name_245),info)));
        type_name_245 = come_decrement_ref_count2(type_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_value260) { right_value260 = come_decrement_ref_count2(right_value260, ((struct sNode*)right_value260)->finalize, ((struct sNode*)right_value260)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result169__;
        type_name_245 = come_decrement_ref_count2(type_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 737 "14struct.c"
    __result170__ = __result_obj__ = ((struct sNode*)(right_value261=string_node_v13(buf,head,head_sline,info)));
    if(right_value261) { right_value261 = come_decrement_ref_count2(right_value261, ((struct sNode*)right_value261)->finalize, ((struct sNode*)right_value261)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result170__;
}

