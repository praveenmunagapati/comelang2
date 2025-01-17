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
struct list_item$1tuple2$2sTypephcharphph
{
    struct tuple2$2sTypephcharph* item;
    struct list_item$1tuple2$2sTypephcharphph* prev;
    struct list_item$1tuple2$2sTypephcharphph* next;
};
struct list$1tuple2$2sTypephcharphph
{
    struct list_item$1tuple2$2sTypephcharphph* head;
    struct list_item$1tuple2$2sTypephcharphph* tail;
    int len;
    struct list_item$1tuple2$2sTypephcharphph* it;
};
struct sTypedefNode
{
    char* mTypeName;
    struct sType* mType;
    struct list$1tuple2$2sTypephcharphph* multiple_declare;
    char* mDeclareSName;
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

struct sTypedefNode* sTypedefNode_initialize(struct sTypedefNode* self, char* type_name, struct sType* type, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self);
static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self);
static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self);
static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self);
_Bool sTypedefNode_terminated();

char* sTypedefNode_kind();

_Bool sTypedefNode_compile(struct sTypedefNode* self, struct sInfo* info);

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self);
static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self);
static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self);
int sTypedefNode_sline(struct sTypedefNode* self, struct sInfo* info);

char* sTypedefNode_sname(struct sTypedefNode* self, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
static void sTypedefNode_finalize(struct sTypedefNode* self);
static struct sTypedefNode* sTypedefNode_clone(struct sTypedefNode* self);
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










struct sTypedefNode* sTypedefNode_initialize(struct sTypedefNode* self, char* type_name, struct sType* type, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
void* right_value50;
char* __dec_obj13;
void* right_value86;
struct sType* __dec_obj37;
void* right_value87;
char* __dec_obj38;
void* right_value97;
struct list$1tuple2$2sTypephcharphph* __dec_obj44;
struct sTypedefNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value50 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value97 = (void*)0;
    # 18 "17typedef.c"
    self->sline=info->sline;
    # 19 "17typedef.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 21 "17typedef.c"
    __dec_obj13=self->mTypeName;
    self->mTypeName=(char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(type_name))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 22 "17typedef.c"
    __dec_obj37=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 24 "17typedef.c"
    __dec_obj38=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string(info->sname))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 26 "17typedef.c"
    __dec_obj44=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value97=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 28 "17typedef.c"
    __result58__ = __result_obj__ = self;
    come_call_finalizer2(sTypedefNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result58__;
    come_call_finalizer2(sTypedefNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional7;
struct sType* __result34__;
void* right_value51;
struct sType* result_11;
_Bool _if_conditional25;
_Bool _if_conditional26;
void* right_value58;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional30;
void* right_value61;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional34;
void* right_value62;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional35;
void* right_value63;
char* __dec_obj21;
_Bool _if_conditional36;
void* right_value64;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional37;
void* right_value72;
struct list$1sNodeph* __dec_obj26;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value73;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional52;
void* right_value80;
struct list$1charph* __dec_obj31;
_Bool _if_conditional56;
void* right_value81;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional57;
_Bool _if_conditional58;
void* right_value82;
struct sNode* __dec_obj33;
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
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value83;
struct sNode* __dec_obj34;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value84;
char* __dec_obj35;
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
void* right_value85;
char* __dec_obj36;
_Bool _if_conditional96;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
memset(&result_11, 0, sizeof(struct sType*));
right_value58 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional7=self==(void*)0,        _if_conditional7) {
            # 2 "sType_clone"
            __result34__ = __result_obj__ = (void*)0;
            return __result34__;
        }
        # 3 "sType_clone"
        result_11=(struct sType*)come_increment_ref_count(((struct sType*)(right_value51=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional25=self!=((void*)0),        _if_conditional25) {
            # 4 "sType_clone"
            result_11->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional26=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional26) {
            # 5 "sType_clone"
            __dec_obj17=result_11->mMultipleTypes;
            result_11->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value58=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional30=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional30) {
            # 6 "sType_clone"
            __dec_obj19=result_11->mNoSolvedGenericsType;
            result_11->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value61=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional34=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional34) {
            # 7 "sType_clone"
            __dec_obj20=result_11->mOriginalLoadVarType;
            result_11->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value62=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional35=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional35) {
            # 8 "sType_clone"
            __dec_obj21=result_11->mGenericsName;
            result_11->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value63=string_clone(self->mGenericsName))));
            __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional36=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional36) {
            # 9 "sType_clone"
            __dec_obj22=result_11->mGenericsTypes;
            result_11->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value64=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional37=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional37) {
            # 10 "sType_clone"
            __dec_obj26=result_11->mArrayNum;
            result_11->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value72=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional50=self!=((void*)0),        _if_conditional50) {
            # 11 "sType_clone"
            result_11->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional51=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional51) {
            # 12 "sType_clone"
            __dec_obj27=result_11->mParamTypes;
            result_11->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value73=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional52=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional52) {
            # 13 "sType_clone"
            __dec_obj31=result_11->mParamNames;
            result_11->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value80=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional56=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional56) {
            # 14 "sType_clone"
            __dec_obj32=result_11->mResultType;
            result_11->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value81=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            # 15 "sType_clone"
            result_11->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional58=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional58) {
            # 16 "sType_clone"
            __dec_obj33=result_11->mAlignas;
            result_11->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value82=sNode_clone(self->mAlignas))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value82) { right_value82 = come_decrement_ref_count2(right_value82, ((struct sNode*)right_value82)->finalize, ((struct sNode*)right_value82)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            # 17 "sType_clone"
            result_11->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            # 18 "sType_clone"
            result_11->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            # 19 "sType_clone"
            result_11->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            # 20 "sType_clone"
            result_11->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            # 21 "sType_clone"
            result_11->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            # 22 "sType_clone"
            result_11->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            # 23 "sType_clone"
            result_11->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            # 24 "sType_clone"
            result_11->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            # 25 "sType_clone"
            result_11->mExtern=self->mExtern;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            # 26 "sType_clone"
            result_11->mRestrict=self->mRestrict;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            # 27 "sType_clone"
            result_11->mImmutable=self->mImmutable;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            # 28 "sType_clone"
            result_11->mHeap=self->mHeap;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            # 29 "sType_clone"
            result_11->mDummyHeap=self->mDummyHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 30 "sType_clone"
            result_11->mDelegate=self->mDelegate;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 31 "sType_clone"
            result_11->mShare=self->mShare;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 32 "sType_clone"
            result_11->mClone=self->mClone;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 33 "sType_clone"
            result_11->mNoHeap=self->mNoHeap;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 34 "sType_clone"
            result_11->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 35 "sType_clone"
            result_11->mRefference=self->mRefference;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 36 "sType_clone"
            result_11->mException=self->mException;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 37 "sType_clone"
            result_11->mPointerNum=self->mPointerNum;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 38 "sType_clone"
            result_11->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 39 "sType_clone"
            result_11->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional82=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional82) {
            # 40 "sType_clone"
            __dec_obj34=result_11->mSizeNum;
            result_11->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value83=sNode_clone(self->mSizeNum))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value83) { right_value83 = come_decrement_ref_count2(right_value83, ((struct sNode*)right_value83)->finalize, ((struct sNode*)right_value83)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 41 "sType_clone"
            result_11->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 42 "sType_clone"
            result_11->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional85=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional85) {
            # 43 "sType_clone"
            __dec_obj35=result_11->mOriginalTypeName;
            result_11->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value84=string_clone(self->mOriginalTypeName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 44 "sType_clone"
            result_11->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 45 "sType_clone"
            result_11->mFunctionParam=self->mFunctionParam;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 46 "sType_clone"
            result_11->mAllocaValue=self->mAllocaValue;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 47 "sType_clone"
            result_11->mGenericsStruct=self->mGenericsStruct;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 48 "sType_clone"
            result_11->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 49 "sType_clone"
            result_11->mComeMemCore=self->mComeMemCore;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 50 "sType_clone"
            result_11->mInline=self->mInline;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 51 "sType_clone"
            result_11->mNullValue=self->mNullValue;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 52 "sType_clone"
            result_11->mGuardValue=self->mGuardValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional95=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional95) {
            # 53 "sType_clone"
            __dec_obj36=result_11->mAsmName;
            result_11->mAsmName=(char*)come_increment_ref_count(((char*)(right_value85=string_clone(self->mAsmName))));
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 54 "sType_clone"
            result_11->mArrayPointerType=self->mArrayPointerType;
        }
        # 55 "sType_clone"
        __result51__ = __result_obj__ = result_11;
        come_call_finalizer2(sType_finalize,result_11, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result51__;
        come_call_finalizer2(sType_finalize,result_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sType_finalize"
            # 0 "sType_finalize"
            if(_if_conditional8=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional8) {
                # 0 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional10=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional10) {
                # 1 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional12=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional12) {
                # 2 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional13=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional13) {
                # 3 "sType_finalize"
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional14=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional14) {
                # 4 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional15) {
                # 5 "sType_finalize"
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional17) {
                # 6 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional18) {
                # 7 "sType_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional20) {
                # 8 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional21) {
                # 9 "sType_finalize"
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional22) {
                # 10 "sType_finalize"
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional23) {
                # 11 "sType_finalize"
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 13 "sType_finalize"
            # 12 "sType_finalize"
            if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional24) {
                # 12 "sType_finalize"
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_12;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_12, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1sTypeph*));
                    # 123 "./comelang2.h"
                    it_12=self->head;
                    # 129 "./comelang2.h"
                    while(_while_condtional1=it_12!=((void*)0),                    _while_condtional1) {
                        # 125 "./comelang2.h"
                        prev_it_13=it_12;
                        # 126 "./comelang2.h"
                        it_12=it_12->next;
                        # 127 "./comelang2.h"
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional9=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional9) {
                                # 0 "list_item$1sTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypephp_finalize"
                    # 0 "tuple1$1sTypephp_finalize"
                    if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional11) {
                        # 0 "tuple1$1sTypephp_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_14;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_15, 0, sizeof(struct list_item$1sNodeph*));
                    # 123 "./comelang2.h"
                    it_14=self->head;
                    # 129 "./comelang2.h"
                    while(_while_condtional2=it_14!=((void*)0),                    _while_condtional2) {
                        # 125 "./comelang2.h"
                        prev_it_15=it_14;
                        # 126 "./comelang2.h"
                        it_14=it_14->next;
                        # 127 "./comelang2.h"
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                # 0 "list_item$1sNodephp_finalize"
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_16;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_16, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1charph*));
                    # 123 "./comelang2.h"
                    it_16=self->head;
                    # 129 "./comelang2.h"
                    while(_while_condtional3=it_16!=((void*)0),                    _while_condtional3) {
                        # 125 "./comelang2.h"
                        prev_it_17=it_16;
                        # 126 "./comelang2.h"
                        it_16=it_16->next;
                        # 127 "./comelang2.h"
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional19) {
                                # 0 "list_item$1charphp_finalize"
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
struct list$1sTypeph* __result35__;
void* right_value52;
void* right_value53;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional4;
void* right_value57;
struct list$1sTypeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
right_value53 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
right_value57 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional27=self==((void*)0),                _if_conditional27) {
                    # 140 "./comelang2.h"
                    __result35__ = __result_obj__ = ((void*)0);
                    return __result35__;
                }
                # 142 "./comelang2.h"
                result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value53=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value52=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_19=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional4=it_19!=((void*)0),                _while_condtional4) {
                    # 146 "./comelang2.h"
                    list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=sType_clone(it_19->item)))));
                    come_call_finalizer2(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./comelang2.h"
                    it_19=it_19->next;
                }
                # 151 "./comelang2.h"
                __result38__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result38__;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result36__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result36__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional28;
void* right_value54;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj14;
_Bool _if_conditional29;
void* right_value55;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj15;
void* right_value56;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj16;
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
right_value55 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
right_value56 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional28=self->len==0,                        _if_conditional28) {
                            # 156 "./comelang2.h"
                            litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_20->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_20->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj14=litem_20->item;
                            litem_20->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./comelang2.h"
                            self->tail=litem_20;
                            # 163 "./comelang2.h"
                            self->head=litem_20;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional29=self->len==1,                            _if_conditional29) {
                                # 166 "./comelang2.h"
                                litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_21->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_21->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj15=litem_21->item;
                                litem_21->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./comelang2.h"
                                self->tail=litem_21;
                                # 173 "./comelang2.h"
                                self->head->next=litem_21;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_22->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_22->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj16=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 182 "./comelang2.h"
                                self->tail->next=litem_22;
                                # 183 "./comelang2.h"
                                self->tail=litem_22;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
                        __result37__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result37__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional31;
struct tuple1$1sTypeph* __result39__;
void* right_value59;
struct tuple1$1sTypeph* result_23;
_Bool _if_conditional33;
void* right_value60;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
memset(&result_23, 0, sizeof(struct tuple1$1sTypeph*));
right_value60 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional31=self==(void*)0,                _if_conditional31) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result39__ = __result_obj__ = (void*)0;
                    return __result39__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_23=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value59=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional33=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional33) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj18=result_23->v1;
                    result_23->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result40__ = __result_obj__ = result_23;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional32) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional38;
struct list$1sNodeph* __result41__;
void* right_value65;
void* right_value66;
struct list$1sNodeph* result_24;
struct list_item$1sNodeph* it_25;
_Bool _while_condtional5;
void* right_value71;
struct list$1sNodeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
right_value66 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1sNodeph*));
memset(&it_25, 0, sizeof(struct list_item$1sNodeph*));
right_value71 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional38=self==((void*)0),                _if_conditional38) {
                    # 140 "./comelang2.h"
                    __result41__ = __result_obj__ = ((void*)0);
                    return __result41__;
                }
                # 142 "./comelang2.h"
                result_24=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value66=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value65=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_25=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional5=it_25!=((void*)0),                _while_condtional5) {
                    # 146 "./comelang2.h"
                    list$1sNodeph_add(result_24,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value71=sNode_clone(it_25->item)))));
                    if(right_value71) { right_value71 = come_decrement_ref_count2(right_value71, ((struct sNode*)right_value71)->finalize, ((struct sNode*)right_value71)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 148 "./comelang2.h"
                    it_25=it_25->next;
                }
                # 151 "./comelang2.h"
                __result46__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result46__;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result42__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result42__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional39;
void* right_value67;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj23;
_Bool _if_conditional40;
void* right_value68;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj24;
void* right_value69;
struct list_item$1sNodeph* litem_28;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
right_value68 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
right_value69 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1sNodeph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional39=self->len==0,                        _if_conditional39) {
                            # 156 "./comelang2.h"
                            litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value67=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_26->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_26->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj23=litem_26->item;
                            litem_26->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                            # 162 "./comelang2.h"
                            self->tail=litem_26;
                            # 163 "./comelang2.h"
                            self->head=litem_26;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional40=self->len==1,                            _if_conditional40) {
                                # 166 "./comelang2.h"
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value68=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_27->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_27->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj24=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                # 172 "./comelang2.h"
                                self->tail=litem_27;
                                # 173 "./comelang2.h"
                                self->head->next=litem_27;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value69=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_28->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_28->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj25=litem_28->item;
                                litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                # 182 "./comelang2.h"
                                self->tail->next=litem_28;
                                # 183 "./comelang2.h"
                                self->tail=litem_28;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
                        __result43__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result43__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional41;
struct sNode* __result44__;
void* right_value70;
struct sNode* result_29;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
struct sNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
memset(&result_29, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional41=self==(void*)0,                        _if_conditional41) {
                            # 2 "sNode_clone"
                            __result44__ = __result_obj__ = (void*)0;
                            return __result44__;
                        }
                        # 3 "sNode_clone"
                        result_29=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value70=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value70) { right_value70 = come_decrement_ref_count2(right_value70, ((struct sNode*)right_value70)->finalize, ((struct sNode*)right_value70)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional42=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional42) {
                            # 4 "sNode_clone"
                            result_29->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            # 5 "sNode_clone"
                            result_29->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            # 6 "sNode_clone"
                            result_29->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            # 7 "sNode_clone"
                            result_29->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            # 8 "sNode_clone"
                            result_29->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            # 9 "sNode_clone"
                            result_29->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            # 10 "sNode_clone"
                            result_29->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            # 11 "sNode_clone"
                            result_29->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result45__ = __result_obj__ = result_29;
                        if(result_29) { result_29 = come_decrement_ref_count2(result_29, ((struct sNode*)result_29)->finalize, ((struct sNode*)result_29)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result45__;
                        if(result_29) { result_29 = come_decrement_ref_count2(result_29, ((struct sNode*)result_29)->finalize, ((struct sNode*)result_29)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional53;
struct list$1charph* __result47__;
void* right_value74;
void* right_value75;
struct list$1charph* result_30;
struct list_item$1charph* it_31;
_Bool _while_condtional6;
void* right_value79;
struct list$1charph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
right_value75 = (void*)0;
memset(&result_30, 0, sizeof(struct list$1charph*));
memset(&it_31, 0, sizeof(struct list_item$1charph*));
right_value79 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional53=self==((void*)0),                _if_conditional53) {
                    # 140 "./comelang2.h"
                    __result47__ = __result_obj__ = ((void*)0);
                    return __result47__;
                }
                # 142 "./comelang2.h"
                result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value75=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value74=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_31=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional6=it_31!=((void*)0),                _while_condtional6) {
                    # 146 "./comelang2.h"
                    list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value79=string_clone(it_31->item)))));
                    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 148 "./comelang2.h"
                    it_31=it_31->next;
                }
                # 151 "./comelang2.h"
                __result50__ = __result_obj__ = result_30;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result50__;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result48__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result48__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional54;
void* right_value76;
struct list_item$1charph* litem_32;
char* __dec_obj28;
_Bool _if_conditional55;
void* right_value77;
struct list_item$1charph* litem_33;
char* __dec_obj29;
void* right_value78;
struct list_item$1charph* litem_34;
char* __dec_obj30;
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
right_value77 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
right_value78 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1charph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional54=self->len==0,                        _if_conditional54) {
                            # 156 "./comelang2.h"
                            litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value76=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_32->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_32->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj28=litem_32->item;
                            litem_32->item=(char*)come_increment_ref_count(item);
                            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 162 "./comelang2.h"
                            self->tail=litem_32;
                            # 163 "./comelang2.h"
                            self->head=litem_32;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional55=self->len==1,                            _if_conditional55) {
                                # 166 "./comelang2.h"
                                litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value77=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_33->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_33->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj29=litem_33->item;
                                litem_33->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 172 "./comelang2.h"
                                self->tail=litem_33;
                                # 173 "./comelang2.h"
                                self->head->next=litem_33;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value78=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_34->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_34->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj30=litem_34->item;
                                litem_34->item=(char*)come_increment_ref_count(item);
                                __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 182 "./comelang2.h"
                                self->tail->next=litem_34;
                                # 183 "./comelang2.h"
                                self->tail=litem_34;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
                        __result49__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result49__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional97;
struct list$1tuple2$2sTypephcharphph* __result52__;
void* right_value88;
void* right_value89;
struct list$1tuple2$2sTypephcharphph* result_37;
struct list_item$1tuple2$2sTypephcharphph* it_38;
_Bool _while_condtional8;
void* right_value96;
struct list$1tuple2$2sTypephcharphph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_37, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_38, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value96 = (void*)0;
        # 142 "./comelang2.h"
        # 139 "./comelang2.h"
        if(_if_conditional97=self==((void*)0),        _if_conditional97) {
            # 140 "./comelang2.h"
            __result52__ = __result_obj__ = ((void*)0);
            return __result52__;
        }
        # 142 "./comelang2.h"
        result_37=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value89=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value88=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 142, "list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 144 "./comelang2.h"
        it_38=self->head;
        # 151 "./comelang2.h"
        while(_while_condtional8=it_38!=((void*)0),        _while_condtional8) {
            # 146 "./comelang2.h"
            list$1tuple2$2sTypephcharphph_add(result_37,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value96=tuple2$2sTypephcharphp_clone(it_38->item)))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 148 "./comelang2.h"
            it_38=it_38->next;
        }
        # 151 "./comelang2.h"
        __result57__ = __result_obj__ = result_37;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_37, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result57__;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list$1tuple2$2sTypephcharphph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "./comelang2.h"
            self->head=((void*)0);
            # 105 "./comelang2.h"
            self->tail=((void*)0);
            # 106 "./comelang2.h"
            self->len=0;
            # 108 "./comelang2.h"
            __result53__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result53__;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list_item$1tuple2$2sTypephcharphph* it_35;
_Bool _while_condtional7;
struct list_item$1tuple2$2sTypephcharphph* prev_it_36;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_35, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&prev_it_36, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                # 123 "./comelang2.h"
                it_35=self->head;
                # 129 "./comelang2.h"
                while(_while_condtional7=it_35!=((void*)0),                _while_condtional7) {
                    # 125 "./comelang2.h"
                    prev_it_36=it_35;
                    # 126 "./comelang2.h"
                    it_35=it_35->next;
                    # 127 "./comelang2.h"
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,prev_it_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional98;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2sTypephcharphphp_finalize"
                        # 0 "list_item$1tuple2$2sTypephcharphphp_finalize"
                        if(_if_conditional98=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional98) {
                            # 0 "list_item$1tuple2$2sTypephcharphphp_finalize"
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional99;
_Bool _if_conditional100;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2sTypephcharphp_finalize"
                                # 0 "tuple2$2sTypephcharphp_finalize"
                                if(_if_conditional99=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional99) {
                                    # 0 "tuple2$2sTypephcharphp_finalize"
                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2sTypephcharphp_finalize"
                                # 1 "tuple2$2sTypephcharphp_finalize"
                                if(_if_conditional100=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional100) {
                                    # 1 "tuple2$2sTypephcharphp_finalize"
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional101;
void* right_value90;
struct list_item$1tuple2$2sTypephcharphph* litem_39;
struct tuple2$2sTypephcharph* __dec_obj39;
_Bool _if_conditional104;
void* right_value91;
struct list_item$1tuple2$2sTypephcharphph* litem_40;
struct tuple2$2sTypephcharph* __dec_obj40;
void* right_value92;
struct list_item$1tuple2$2sTypephcharphph* litem_41;
struct tuple2$2sTypephcharph* __dec_obj41;
struct list$1tuple2$2sTypephcharphph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&litem_39, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value91 = (void*)0;
memset(&litem_40, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value92 = (void*)0;
memset(&litem_41, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                # 186 "./comelang2.h"
                # 155 "./comelang2.h"
                if(_if_conditional101=self->len==0,                _if_conditional101) {
                    # 156 "./comelang2.h"
                    litem_39=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value90=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 158 "./comelang2.h"
                    litem_39->prev=((void*)0);
                    # 159 "./comelang2.h"
                    litem_39->next=((void*)0);
                    # 160 "./comelang2.h"
                    __dec_obj39=litem_39->item;
                    litem_39->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 162 "./comelang2.h"
                    self->tail=litem_39;
                    # 163 "./comelang2.h"
                    self->head=litem_39;
                }
                else {
                    # 186 "./comelang2.h"
                    # 165 "./comelang2.h"
                    if(_if_conditional104=self->len==1,                    _if_conditional104) {
                        # 166 "./comelang2.h"
                        litem_40=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value91=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 168 "./comelang2.h"
                        litem_40->prev=self->head;
                        # 169 "./comelang2.h"
                        litem_40->next=((void*)0);
                        # 170 "./comelang2.h"
                        __dec_obj40=litem_40->item;
                        litem_40->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 172 "./comelang2.h"
                        self->tail=litem_40;
                        # 173 "./comelang2.h"
                        self->head->next=litem_40;
                    }
                    else {
                        # 176 "./comelang2.h"
                        litem_41=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value92=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 178 "./comelang2.h"
                        litem_41->prev=self->tail;
                        # 179 "./comelang2.h"
                        litem_41->next=((void*)0);
                        # 180 "./comelang2.h"
                        __dec_obj41=litem_41->item;
                        litem_41->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 182 "./comelang2.h"
                        self->tail->next=litem_41;
                        # 183 "./comelang2.h"
                        self->tail=litem_41;
                    }
                }
                # 186 "./comelang2.h"
                self->len++;
                # 188 "./comelang2.h"
                __result54__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result54__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional102;
_Bool _if_conditional103;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2sTypephcharph_finalize"
                        # 0 "tuple2$2sTypephcharph_finalize"
                        if(_if_conditional102=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional102) {
                            # 0 "tuple2$2sTypephcharph_finalize"
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple2$2sTypephcharph_finalize"
                        # 1 "tuple2$2sTypephcharph_finalize"
                        if(_if_conditional103=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional103) {
                            # 1 "tuple2$2sTypephcharph_finalize"
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional105;
struct tuple2$2sTypephcharph* __result55__;
void* right_value93;
struct tuple2$2sTypephcharph* result_42;
_Bool _if_conditional106;
void* right_value94;
struct sType* __dec_obj42;
_Bool _if_conditional107;
void* right_value95;
char* __dec_obj43;
struct tuple2$2sTypephcharph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&result_42, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value94 = (void*)0;
right_value95 = (void*)0;
                # 3 "tuple2$2sTypephcharphp_clone"
                # 2 "tuple2$2sTypephcharphp_clone"
                if(_if_conditional105=self==(void*)0,                _if_conditional105) {
                    # 2 "tuple2$2sTypephcharphp_clone"
                    __result55__ = __result_obj__ = (void*)0;
                    return __result55__;
                }
                # 3 "tuple2$2sTypephcharphp_clone"
                result_42=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value93=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharphp_clone", 3, "tuple2$2sTypephcharph"))));
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple2$2sTypephcharphp_clone"
                # 4 "tuple2$2sTypephcharphp_clone"
                if(_if_conditional106=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional106) {
                    # 4 "tuple2$2sTypephcharphp_clone"
                    __dec_obj42=result_42->v1;
                    result_42->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2sTypephcharphp_clone"
                # 5 "tuple2$2sTypephcharphp_clone"
                if(_if_conditional107=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional107) {
                    # 5 "tuple2$2sTypephcharphp_clone"
                    __dec_obj43=result_42->v2;
                    result_42->v2=(char*)come_increment_ref_count(((char*)(right_value95=string_clone(self->v2))));
                    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2sTypephcharphp_clone"
                __result56__ = __result_obj__ = result_42;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_42, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sTypedefNode_terminated(){
void* __result_obj__;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    # 33 "17typedef.c"
    __result59__ = (_Bool)1;
    return __result59__;
}

char* sTypedefNode_kind(){
void* __result_obj__;
void* right_value98;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
    # 38 "17typedef.c"
    __result60__ = __result_obj__ = ((char*)(right_value98=__builtin_string("sTypedefNode")));
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result60__;
}

_Bool sTypedefNode_compile(struct sTypedefNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value99;
char* type_name_43;
_Bool _if_conditional113;
void* right_value106;
void* right_value107;
void* right_value108;
void* right_value109;
void* right_value110;
struct sType* type_90;
void* right_value111;
char* __dec_obj45;
void* right_value115;
void* right_value116;
_Bool _if_conditional189;
_Bool _if_conditional190;
struct list$1tuple2$2sTypephcharphph* o2_saved_112;
struct tuple2$2sTypephcharph* it_115;
struct tuple2$2sTypephcharph* multiple_assign_var1;
struct sType* type_118;
char* type_name_119;
_Bool _if_conditional195;
void* right_value117;
char* __dec_obj46;
void* right_value118;
void* right_value119;
_Bool _if_conditional196;
void* right_value120;
void* right_value121;
struct sType* type_120;
_Bool _if_conditional197;
void* right_value122;
char* __dec_obj47;
void* right_value123;
void* right_value124;
_Bool _if_conditional198;
void* right_value125;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&type_name_43, 0, sizeof(char*));
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&type_90, 0, sizeof(struct sType*));
right_value111 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&o2_saved_112, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_115, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_118, 0, sizeof(struct sType*));
memset(&type_name_119, 0, sizeof(char*));
memset(&type_118, 0, sizeof(struct sType*));
memset(&type_name_119, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&type_120, 0, sizeof(struct sType*));
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
    # 43 "17typedef.c"
    type_name_43=(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string(self->mTypeName))));
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 93 "17typedef.c"
    # 45 "17typedef.c"
    if(_if_conditional113=string_operator_equals(type_name_43,"__darwin_va_list"),    _if_conditional113) {
        # 46 "17typedef.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string("__darwin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value108=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value107=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "17typedef.c", 46, "sClass")))),"__darwin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 48 "17typedef.c"
        type_90=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value109=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "17typedef.c", 48, "sType")))),"__darwin_va_list",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 49 "17typedef.c"
        __dec_obj45=type_90->mOriginalTypeName;
        type_90->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value111=__builtin_string("__darwin_va_list"))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 51 "17typedef.c"
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string(type_name_43)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(type_90)))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 58 "17typedef.c"
        # 53 "17typedef.c"
        if(_if_conditional189=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),        _if_conditional189) {
        }
        else {
            # 56 "17typedef.c"
            add_come_code_at_source_head(info,"typedef __builtin_va_list __darwin_va_list;\n");
        }
        come_call_finalizer2(sType_finalize,type_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 93 "17typedef.c"
        # 59 "17typedef.c"
        if(self->multiple_declare) {
            # 76 "17typedef.c"
            for(            o2_saved_112=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_115=list$1tuple2$2sTypephcharphph_begin((o2_saved_112));            !list$1tuple2$2sTypephcharphph_end((o2_saved_112));            it_115=list$1tuple2$2sTypephcharphph_next((o2_saved_112))            ){
                # 61 "17typedef.c"
                multiple_assign_var1=it_115;
                type_118=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                type_name_119=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                # 67 "17typedef.c"
                # 63 "17typedef.c"
                if(_if_conditional195=string_operator_not_equals(type_name_119,"va_list"),                _if_conditional195) {
                    # 64 "17typedef.c"
                    __dec_obj46=type_118->mOriginalTypeName;
                    type_118->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(type_name_119))));
                    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 67 "17typedef.c"
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(type_name_119)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(type_118)))));
                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 75 "17typedef.c"
                # 70 "17typedef.c"
                if(_if_conditional196=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional196) {
                }
                else {
                    # 73 "17typedef.c"
                    add_come_code_at_source_head(info,"typedef %s;\n",((char*)(right_value120=make_define_var(type_118,type_name_119,(_Bool)1,info))));
                    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(sType_finalize,type_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_119 = come_decrement_ref_count2(type_name_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 78 "17typedef.c"
            type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(self->mType))));
            come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 84 "17typedef.c"
            # 80 "17typedef.c"
            if(_if_conditional197=string_operator_not_equals(type_name_43,"va_list"),            _if_conditional197) {
                # 81 "17typedef.c"
                __dec_obj47=type_120->mOriginalTypeName;
                type_120->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(type_name_43))));
                __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 84 "17typedef.c"
            map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(type_name_43)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(type_120)))));
            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 91 "17typedef.c"
            # 86 "17typedef.c"
            if(_if_conditional198=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional198) {
            }
            else {
                # 89 "17typedef.c"
                add_come_code_at_source_head(info,"typedef %s;\n",((char*)(right_value125=make_define_var(type_120,type_name_43,(_Bool)1,info))));
                right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 93 "17typedef.c"
    __result104__ = (_Bool)1;
    type_name_43 = come_decrement_ref_count2(type_name_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result104__;
    type_name_43 = come_decrement_ref_count2(type_name_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional114;
unsigned int hash_63;
unsigned int it_64;
_Bool _while_condtional12;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool same_key_exist_81;
char* it2_84;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct map$2charphsClassph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_63, 0, sizeof(unsigned int));
memset(&it_64, 0, sizeof(unsigned int));
memset(&same_key_exist_81, 0, sizeof(_Bool));
memset(&it2_84, 0, sizeof(char*));
            # 1393 "./comelang2.h"
            # 1390 "./comelang2.h"
            if(_if_conditional114=self->len*10>=self->size,            _if_conditional114) {
                # 1391 "./comelang2.h"
                map$2charphsClassph_rehash(self);
            }
            # 1393 "./comelang2.h"
            hash_63=string_get_hash_key(key)%self->size;
            # 1394 "./comelang2.h"
            it_64=hash_63;
            # 1452 "./comelang2.h"
            while(_while_condtional12=(_Bool)1,            _while_condtional12) {
                # 1450 "./comelang2.h"
                # 1397 "./comelang2.h"
                if(_if_conditional132=self->item_existance[it_64],                _if_conditional132) {
                    # 1420 "./comelang2.h"
                    # 1399 "./comelang2.h"
                    if(_if_conditional133=string_equals(self->keys[it_64],key),                    _if_conditional133) {
                        # 1410 "./comelang2.h"
                        # 1401 "./comelang2.h"
                        if(_if_conditional134=1,                        _if_conditional134) {
                            # 1402 "./comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_64]);
                            # 1403 "./comelang2.h"
                            self->keys[it_64] = come_decrement_ref_count2(self->keys[it_64], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./comelang2.h"
                            self->keys[it_64]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_64]);
                            # 1408 "./comelang2.h"
                            self->keys[it_64]=key;
                        }
                        # 1417 "./comelang2.h"
                        # 1410 "./comelang2.h"
                        if(_if_conditional154=1,                        _if_conditional154) {
                            # 1411 "./comelang2.h"
                            come_call_finalizer2(sClass_finalize,self->items[it_64], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./comelang2.h"
                            self->items[it_64]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./comelang2.h"
                            self->items[it_64]=item;
                        }
                        # 1417 "./comelang2.h"
                        break;
                    }
                    # 1420 "./comelang2.h"
                    it_64++;
                    # 1430 "./comelang2.h"
                    # 1422 "./comelang2.h"
                    if(_if_conditional155=it_64>=self->size,                    _if_conditional155) {
                        # 1423 "./comelang2.h"
                        it_64=0;
                    }
                    else {
                        # 1430 "./comelang2.h"
                        # 1425 "./comelang2.h"
                        if(_if_conditional156=it_64==hash_63,                        _if_conditional156) {
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
                    self->item_existance[it_64]=(_Bool)1;
                    # 1439 "./comelang2.h"
                    # 1433 "./comelang2.h"
                    if(_if_conditional157=1,                    _if_conditional157) {
                        # 1434 "./comelang2.h"
                        self->keys[it_64]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./comelang2.h"
                        self->keys[it_64]=key;
                    }
                    # 1446 "./comelang2.h"
                    # 1439 "./comelang2.h"
                    if(_if_conditional158=1,                    _if_conditional158) {
                        # 1440 "./comelang2.h"
                        self->items[it_64]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./comelang2.h"
                        self->items[it_64]=item;
                    }
                    # 1446 "./comelang2.h"
                    self->len++;
                    # 1448 "./comelang2.h"
                    break;
                }
            }
            # 1452 "./comelang2.h"
            same_key_exist_81=(_Bool)0;
            # 1461 "./comelang2.h"
            for(            it2_84=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_84=list$1charp_next(self->key_list)            ){
                # 1459 "./comelang2.h"
                # 1455 "./comelang2.h"
                if(_if_conditional163=string_equals(it2_84,key),                _if_conditional163) {
                    # 1456 "./comelang2.h"
                    puts("SAME KEY");
                    # 1457 "./comelang2.h"
                    same_key_exist_81=(_Bool)1;
                }
            }
            # 1465 "./comelang2.h"
            # 1461 "./comelang2.h"
            if(_if_conditional164=!same_key_exist_81,            _if_conditional164) {
                # 1462 "./comelang2.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1465 "./comelang2.h"
            __result84__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result84__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_44;
void* right_value100;
char** keys_45;
void* right_value101;
struct sClass** items_46;
void* right_value102;
_Bool* item_existance_49;
int len_50;
char* it_53;
struct sClass* default_value_56;
struct sClass* it2_59;
unsigned int hash_60;
int n_61;
_Bool _while_condtional11;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct sClass* default_value_62;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_44, 0, sizeof(int));
right_value100 = (void*)0;
memset(&keys_45, 0, sizeof(char**));
right_value101 = (void*)0;
memset(&items_46, 0, sizeof(struct sClass**));
right_value102 = (void*)0;
memset(&item_existance_49, 0, sizeof(_Bool*));
memset(&len_50, 0, sizeof(int));
memset(&it_53, 0, sizeof(char*));
memset(&default_value_56, 0, sizeof(struct sClass*));
memset(&it2_59, 0, sizeof(struct sClass*));
memset(&hash_60, 0, sizeof(unsigned int));
memset(&n_61, 0, sizeof(int));
memset(&default_value_62, 0, sizeof(struct sClass*));
                    # 1337 "./comelang2.h"
                    size_44=self->size*10;
                    # 1338 "./comelang2.h"
                    keys_45=(char**)come_increment_ref_count(((char**)(right_value100=(char**)come_calloc(1, sizeof(char*)*(1*(size_44)), "./comelang2.h", 1338, "char*%"))));
                    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./comelang2.h"
                    items_46=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value101=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_44)), "./comelang2.h", 1339, "sClass*%"))));
                    come_call_finalizer2(sClass_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./comelang2.h"
                    item_existance_49=(_Bool*)come_increment_ref_count(((_Bool*)(right_value102=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_44)), "./comelang2.h", 1340, "bool"))));
                    right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./comelang2.h"
                    len_50=0;
                    # 1377 "./comelang2.h"
                    for(                    it_53=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_53=map$2charphsClassph_next(self)                    ){
                        # 1345 "./comelang2.h"
                        # 1346 "./comelang2.h"
                        memset(&default_value_56,0,sizeof(struct sClass*));
                        # 1347 "./comelang2.h"
                        it2_59=map$2charphsClassph_at(self,it_53,default_value_56);
                        # 1348 "./comelang2.h"
                        hash_60=string_get_hash_key(it_53)%size_44;
                        # 1349 "./comelang2.h"
                        n_61=hash_60;
                        # 1375 "./comelang2.h"
                        while(_while_condtional11=(_Bool)1,                        _while_condtional11) {
                            # 1374 "./comelang2.h"
                            # 1352 "./comelang2.h"
                            if(_if_conditional129=item_existance_49[n_61],                            _if_conditional129) {
                                # 1354 "./comelang2.h"
                                n_61++;
                                # 1364 "./comelang2.h"
                                # 1356 "./comelang2.h"
                                if(_if_conditional130=n_61>=size_44,                                _if_conditional130) {
                                    # 1357 "./comelang2.h"
                                    n_61=0;
                                }
                                else {
                                    # 1364 "./comelang2.h"
                                    # 1359 "./comelang2.h"
                                    if(_if_conditional131=n_61==hash_60,                                    _if_conditional131) {
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
                                item_existance_49[n_61]=(_Bool)1;
                                # 1367 "./comelang2.h"
                                keys_45[n_61]=it_53;
                                # 1368 "./comelang2.h"
                                # 1369 "./comelang2.h"
                                items_46[n_61]=map$2charphsClassph_at(self,it_53,default_value_62);
                                # 1371 "./comelang2.h"
                                len_50++;
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
                    self->keys=keys_45;
                    # 1382 "./comelang2.h"
                    self->items=items_46;
                    # 1383 "./comelang2.h"
                    self->item_existance=item_existance_49;
                    # 1385 "./comelang2.h"
                    self->size=size_44;
                    # 1386 "./comelang2.h"
                    self->len=len_50;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional120;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional115=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional115) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional116=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional116) {
                            # 1 "sClass_finalize"
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional120=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional120) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_47;
_Bool _while_condtional9;
struct list_item$1tuple2$2charphsTypephph* prev_it_48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_47, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_48, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 123 "./comelang2.h"
                                it_47=self->head;
                                # 129 "./comelang2.h"
                                while(_while_condtional9=it_47!=((void*)0),                                _while_condtional9) {
                                    # 125 "./comelang2.h"
                                    prev_it_48=it_47;
                                    # 126 "./comelang2.h"
                                    it_47=it_47->next;
                                    # 127 "./comelang2.h"
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional117=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional117) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional118=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional118) {
                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional119=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional119) {
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional121;
char* result_51;
char* __result61__;
_Bool _if_conditional122;
char* __result62__;
char* result_52;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_51, 0, sizeof(char*));
memset(&result_52, 0, sizeof(char*));
                        # 1304 "./comelang2.h"
                        # 1299 "./comelang2.h"
                        if(_if_conditional121=self==((void*)0),                        _if_conditional121) {
                            # 1300 "./comelang2.h"
                            # 1301 "./comelang2.h"
                            memset(&result_51,0,sizeof(char*));
                            # 1302 "./comelang2.h"
                            __result61__ = __result_obj__ = result_51;
                            return __result61__;
                        }
                        # 1304 "./comelang2.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "./comelang2.h"
                        # 1306 "./comelang2.h"
                        if(self->key_list->it) {
                            # 1307 "./comelang2.h"
                            __result62__ = __result_obj__ = self->key_list->it->item;
                            return __result62__;
                        }
                        # 1310 "./comelang2.h"
                        # 1311 "./comelang2.h"
                        memset(&result_52,0,sizeof(char*));
                        # 1312 "./comelang2.h"
                        __result63__ = __result_obj__ = result_52;
                        return __result63__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "./comelang2.h"
                        __result64__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result64__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional123;
char* result_54;
char* __result65__;
_Bool _if_conditional124;
char* __result66__;
char* result_55;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_54, 0, sizeof(char*));
memset(&result_55, 0, sizeof(char*));
                        # 1321 "./comelang2.h"
                        # 1316 "./comelang2.h"
                        if(_if_conditional123=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional123) {
                            # 1317 "./comelang2.h"
                            # 1318 "./comelang2.h"
                            memset(&result_54,0,sizeof(char*));
                            # 1319 "./comelang2.h"
                            __result65__ = __result_obj__ = result_54;
                            return __result65__;
                        }
                        # 1321 "./comelang2.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "./comelang2.h"
                        # 1323 "./comelang2.h"
                        if(self->key_list->it) {
                            # 1324 "./comelang2.h"
                            __result66__ = __result_obj__ = self->key_list->it->item;
                            return __result66__;
                        }
                        # 1327 "./comelang2.h"
                        # 1328 "./comelang2.h"
                        memset(&result_55,0,sizeof(char*));
                        # 1329 "./comelang2.h"
                        __result67__ = __result_obj__ = result_55;
                        return __result67__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_57;
unsigned int it_58;
_Bool _while_condtional10;
_Bool _if_conditional125;
_Bool _if_conditional126;
struct sClass* __result68__;
_Bool _if_conditional127;
_Bool _if_conditional128;
struct sClass* __result69__;
struct sClass* __result70__;
struct sClass* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_57, 0, sizeof(unsigned int));
memset(&it_58, 0, sizeof(unsigned int));
                            # 1226 "./comelang2.h"
                            hash_57=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "./comelang2.h"
                            it_58=hash_57;
                            # 1251 "./comelang2.h"
                            while(_while_condtional10=(_Bool)1,                            _while_condtional10) {
                                # 1249 "./comelang2.h"
                                # 1230 "./comelang2.h"
                                if(_if_conditional125=self->item_existance[it_58],                                _if_conditional125) {
                                    # 1237 "./comelang2.h"
                                    # 1232 "./comelang2.h"
                                    if(_if_conditional126=string_equals(self->keys[it_58],key),                                    _if_conditional126) {
                                        # 1234 "./comelang2.h"
                                        __result68__ = __result_obj__ = self->items[it_58];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result68__;
                                    }
                                    # 1237 "./comelang2.h"
                                    it_58++;
                                    # 1245 "./comelang2.h"
                                    # 1239 "./comelang2.h"
                                    if(_if_conditional127=it_58>=self->size,                                    _if_conditional127) {
                                        # 1240 "./comelang2.h"
                                        it_58=0;
                                    }
                                    else {
                                        # 1245 "./comelang2.h"
                                        # 1242 "./comelang2.h"
                                        if(_if_conditional128=it_58==hash_57,                                        _if_conditional128) {
                                            # 1243 "./comelang2.h"
                                            __result69__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result69__;
                                        }
                                    }
                                }
                                else {
                                    # 1247 "./comelang2.h"
                                    __result70__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result70__;
                                }
                            }
                            # 1251 "./comelang2.h"
                            __result71__ = __result_obj__ = default_value;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result71__;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_65;
struct list_item$1charp* it_66;
_Bool _while_condtional13;
_Bool _if_conditional135;
struct list$1charp* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_65, 0, sizeof(int));
memset(&it_66, 0, sizeof(struct list_item$1charp*));
                                # 448 "./comelang2.h"
                                it2_65=0;
                                # 449 "./comelang2.h"
                                it_66=self->head;
                                # 460 "./comelang2.h"
                                while(_while_condtional13=it_66!=((void*)0),                                _while_condtional13) {
                                    # 455 "./comelang2.h"
                                    # 451 "./comelang2.h"
                                    if(_if_conditional135=string_equals(it_66->item,item),                                    _if_conditional135) {
                                        # 452 "./comelang2.h"
                                        list$1charp_delete(self,it2_65,it2_65+1);
                                        # 453 "./comelang2.h"
                                        break;
                                    }
                                    # 455 "./comelang2.h"
                                    it2_65++;
                                    # 457 "./comelang2.h"
                                    it_66=it_66->next;
                                }
                                # 460 "./comelang2.h"
                                __result75__ = __result_obj__ = self;
                                return __result75__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
int tmp_67;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct list$1charp* __result72__;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct list_item$1charp* it_70;
int i_71;
_Bool _while_condtional15;
_Bool _if_conditional144;
struct list_item$1charp* prev_it_72;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct list_item$1charp* it_73;
int i_74;
_Bool _while_condtional16;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct list_item$1charp* prev_it_75;
struct list_item$1charp* it_76;
struct list_item$1charp* head_prev_it_77;
struct list_item$1charp* tail_it_78;
int i_79;
_Bool _while_condtional17;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct list_item$1charp* prev_it_80;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list$1charp* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_67, 0, sizeof(int));
memset(&it_70, 0, sizeof(struct list_item$1charp*));
memset(&i_71, 0, sizeof(int));
memset(&prev_it_72, 0, sizeof(struct list_item$1charp*));
memset(&it_73, 0, sizeof(struct list_item$1charp*));
memset(&i_74, 0, sizeof(int));
memset(&prev_it_75, 0, sizeof(struct list_item$1charp*));
memset(&it_76, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_77, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_78, 0, sizeof(struct list_item$1charp*));
memset(&i_79, 0, sizeof(int));
memset(&prev_it_80, 0, sizeof(struct list_item$1charp*));
                                            # 467 "./comelang2.h"
                                            # 464 "./comelang2.h"
                                            if(_if_conditional136=head<0,                                            _if_conditional136) {
                                                # 465 "./comelang2.h"
                                                head+=self->len;
                                            }
                                            # 471 "./comelang2.h"
                                            # 467 "./comelang2.h"
                                            if(_if_conditional137=tail<0,                                            _if_conditional137) {
                                                # 468 "./comelang2.h"
                                                tail+=self->len+1;
                                            }
                                            # 477 "./comelang2.h"
                                            # 471 "./comelang2.h"
                                            if(_if_conditional138=head>tail,                                            _if_conditional138) {
                                                # 472 "./comelang2.h"
                                                tmp_67=tail;
                                                # 473 "./comelang2.h"
                                                tail=head;
                                                # 474 "./comelang2.h"
                                                head=tmp_67;
                                            }
                                            # 481 "./comelang2.h"
                                            # 477 "./comelang2.h"
                                            if(_if_conditional139=head<0,                                            _if_conditional139) {
                                                # 478 "./comelang2.h"
                                                head=0;
                                            }
                                            # 485 "./comelang2.h"
                                            # 481 "./comelang2.h"
                                            if(_if_conditional140=tail>self->len,                                            _if_conditional140) {
                                                # 482 "./comelang2.h"
                                                tail=self->len;
                                            }
                                            # 489 "./comelang2.h"
                                            # 485 "./comelang2.h"
                                            if(_if_conditional141=head==tail,                                            _if_conditional141) {
                                                # 486 "./comelang2.h"
                                                __result72__ = __result_obj__ = self;
                                                return __result72__;
                                            }
                                            # 584 "./comelang2.h"
                                            # 489 "./comelang2.h"
                                            if(_if_conditional142=head==0&&tail==self->len,                                            _if_conditional142) {
                                                # 491 "./comelang2.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 584 "./comelang2.h"
                                                # 493 "./comelang2.h"
                                                if(_if_conditional143=head==0,                                                _if_conditional143) {
                                                    # 494 "./comelang2.h"
                                                    it_70=self->head;
                                                    # 495 "./comelang2.h"
                                                    i_71=0;
                                                    # 517 "./comelang2.h"
                                                    while(_while_condtional15=it_70!=((void*)0),                                                    _while_condtional15) {
                                                        # 516 "./comelang2.h"
                                                        # 497 "./comelang2.h"
                                                        if(_if_conditional144=i_71<tail,                                                        _if_conditional144) {
                                                            # 498 "./comelang2.h"
                                                            prev_it_72=it_70;
                                                            # 500 "./comelang2.h"
                                                            it_70=it_70->next;
                                                            # 501 "./comelang2.h"
                                                            i_71++;
                                                            # 503 "./comelang2.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 505 "./comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 516 "./comelang2.h"
                                                            # 507 "./comelang2.h"
                                                            if(_if_conditional145=i_71==tail,                                                            _if_conditional145) {
                                                                # 508 "./comelang2.h"
                                                                self->head=it_70;
                                                                # 509 "./comelang2.h"
                                                                self->head->prev=((void*)0);
                                                                # 510 "./comelang2.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 513 "./comelang2.h"
                                                                it_70=it_70->next;
                                                                # 514 "./comelang2.h"
                                                                i_71++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 584 "./comelang2.h"
                                                    # 518 "./comelang2.h"
                                                    if(_if_conditional146=tail==self->len,                                                    _if_conditional146) {
                                                        # 519 "./comelang2.h"
                                                        it_73=self->head;
                                                        # 520 "./comelang2.h"
                                                        i_74=0;
                                                        # 542 "./comelang2.h"
                                                        while(_while_condtional16=it_73!=((void*)0),                                                        _while_condtional16) {
                                                            # 527 "./comelang2.h"
                                                            # 522 "./comelang2.h"
                                                            if(_if_conditional147=i_74==head,                                                            _if_conditional147) {
                                                                # 523 "./comelang2.h"
                                                                self->tail=it_73->prev;
                                                                # 524 "./comelang2.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 541 "./comelang2.h"
                                                            # 527 "./comelang2.h"
                                                            if(_if_conditional148=i_74>=head,                                                            _if_conditional148) {
                                                                # 528 "./comelang2.h"
                                                                prev_it_75=it_73;
                                                                # 530 "./comelang2.h"
                                                                it_73=it_73->next;
                                                                # 531 "./comelang2.h"
                                                                i_74++;
                                                                # 533 "./comelang2.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 535 "./comelang2.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 538 "./comelang2.h"
                                                                it_73=it_73->next;
                                                                # 539 "./comelang2.h"
                                                                i_74++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 544 "./comelang2.h"
                                                        it_76=self->head;
                                                        # 546 "./comelang2.h"
                                                        head_prev_it_77=((void*)0);
                                                        # 547 "./comelang2.h"
                                                        tail_it_78=((void*)0);
                                                        # 550 "./comelang2.h"
                                                        i_79=0;
                                                        # 576 "./comelang2.h"
                                                        while(_while_condtional17=it_76!=((void*)0),                                                        _while_condtional17) {
                                                            # 555 "./comelang2.h"
                                                            # 552 "./comelang2.h"
                                                            if(_if_conditional149=i_79==head,                                                            _if_conditional149) {
                                                                # 553 "./comelang2.h"
                                                                head_prev_it_77=it_76->prev;
                                                            }
                                                            # 559 "./comelang2.h"
                                                            # 555 "./comelang2.h"
                                                            if(_if_conditional150=i_79==tail,                                                            _if_conditional150) {
                                                                # 556 "./comelang2.h"
                                                                tail_it_78=it_76;
                                                            }
                                                            # 574 "./comelang2.h"
                                                            # 559 "./comelang2.h"
                                                            if(_if_conditional151=i_79>=head&&i_79<tail,                                                            _if_conditional151) {
                                                                # 561 "./comelang2.h"
                                                                prev_it_80=it_76;
                                                                # 563 "./comelang2.h"
                                                                it_76=it_76->next;
                                                                # 564 "./comelang2.h"
                                                                i_79++;
                                                                # 566 "./comelang2.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 568 "./comelang2.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 571 "./comelang2.h"
                                                                it_76=it_76->next;
                                                                # 572 "./comelang2.h"
                                                                i_79++;
                                                            }
                                                        }
                                                        # 579 "./comelang2.h"
                                                        # 576 "./comelang2.h"
                                                        if(_if_conditional152=head_prev_it_77!=((void*)0),                                                        _if_conditional152) {
                                                            # 577 "./comelang2.h"
                                                            head_prev_it_77->next=tail_it_78;
                                                        }
                                                        # 582 "./comelang2.h"
                                                        # 579 "./comelang2.h"
                                                        if(_if_conditional153=tail_it_78!=((void*)0),                                                        _if_conditional153) {
                                                            # 580 "./comelang2.h"
                                                            tail_it_78->prev=head_prev_it_77;
                                                        }
                                                    }
                                                }
                                            }
                                            # 584 "./comelang2.h"
                                            __result74__ = __result_obj__ = self;
                                            return __result74__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_68;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_69;
struct list$1charp* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_69, 0, sizeof(struct list_item$1charp*));
                                                    # 433 "./comelang2.h"
                                                    it_68=self->head;
                                                    # 440 "./comelang2.h"
                                                    while(_while_condtional14=it_68!=((void*)0),                                                    _while_condtional14) {
                                                        # 435 "./comelang2.h"
                                                        prev_it_69=it_68;
                                                        # 436 "./comelang2.h"
                                                        it_68=it_68->next;
                                                        # 437 "./comelang2.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 440 "./comelang2.h"
                                                    self->head=((void*)0);
                                                    # 441 "./comelang2.h"
                                                    self->tail=((void*)0);
                                                    # 443 "./comelang2.h"
                                                    self->len=0;
                                                    # 445 "./comelang2.h"
                                                    __result73__ = __result_obj__ = self;
                                                    return __result73__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional159;
char* result_82;
char* __result76__;
_Bool _if_conditional160;
char* __result77__;
char* result_83;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_82, 0, sizeof(char*));
memset(&result_83, 0, sizeof(char*));
                # 290 "./comelang2.h"
                # 285 "./comelang2.h"
                if(_if_conditional159=self==((void*)0),                _if_conditional159) {
                    # 286 "./comelang2.h"
                    # 287 "./comelang2.h"
                    memset(&result_82,0,sizeof(char*));
                    # 288 "./comelang2.h"
                    __result76__ = __result_obj__ = result_82;
                    return __result76__;
                }
                # 290 "./comelang2.h"
                self->it=self->head;
                # 296 "./comelang2.h"
                # 292 "./comelang2.h"
                if(self->it) {
                    # 293 "./comelang2.h"
                    __result77__ = __result_obj__ = self->it->item;
                    return __result77__;
                }
                # 296 "./comelang2.h"
                # 297 "./comelang2.h"
                memset(&result_83,0,sizeof(char*));
                # 298 "./comelang2.h"
                __result78__ = __result_obj__ = result_83;
                return __result78__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./comelang2.h"
                __result79__ = self==((void*)0)||self->it==((void*)0);
                return __result79__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional161;
char* result_85;
char* __result80__;
_Bool _if_conditional162;
char* __result81__;
char* result_86;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_85, 0, sizeof(char*));
memset(&result_86, 0, sizeof(char*));
                # 308 "./comelang2.h"
                # 302 "./comelang2.h"
                if(_if_conditional161=self==((void*)0)||self->it==((void*)0),                _if_conditional161) {
                    # 303 "./comelang2.h"
                    # 304 "./comelang2.h"
                    memset(&result_85,0,sizeof(char*));
                    # 305 "./comelang2.h"
                    __result80__ = __result_obj__ = result_85;
                    return __result80__;
                }
                # 308 "./comelang2.h"
                self->it=self->it->next;
                # 314 "./comelang2.h"
                # 310 "./comelang2.h"
                if(self->it) {
                    # 311 "./comelang2.h"
                    __result81__ = __result_obj__ = self->it->item;
                    return __result81__;
                }
                # 314 "./comelang2.h"
                # 315 "./comelang2.h"
                memset(&result_86,0,sizeof(char*));
                # 316 "./comelang2.h"
                __result82__ = __result_obj__ = result_86;
                return __result82__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional165;
void* right_value103;
struct list_item$1charp* litem_87;
_Bool _if_conditional166;
void* right_value104;
struct list_item$1charp* litem_88;
void* right_value105;
struct list_item$1charp* litem_89;
struct list$1charp* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1charp*));
right_value104 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1charp*));
right_value105 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1charp*));
                    # 256 "./comelang2.h"
                    # 225 "./comelang2.h"
                    if(_if_conditional165=self->len==0,                    _if_conditional165) {
                        # 226 "./comelang2.h"
                        litem_87=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value103=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./comelang2.h"
                        litem_87->prev=((void*)0);
                        # 229 "./comelang2.h"
                        litem_87->next=((void*)0);
                        # 230 "./comelang2.h"
                        litem_87->item=item;
                        # 232 "./comelang2.h"
                        self->tail=litem_87;
                        # 233 "./comelang2.h"
                        self->head=litem_87;
                    }
                    else {
                        # 256 "./comelang2.h"
                        # 235 "./comelang2.h"
                        if(_if_conditional166=self->len==1,                        _if_conditional166) {
                            # 236 "./comelang2.h"
                            litem_88=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value104=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./comelang2.h"
                            litem_88->prev=self->head;
                            # 239 "./comelang2.h"
                            litem_88->next=((void*)0);
                            # 240 "./comelang2.h"
                            litem_88->item=item;
                            # 242 "./comelang2.h"
                            self->tail=litem_88;
                            # 243 "./comelang2.h"
                            self->head->next=litem_88;
                        }
                        else {
                            # 246 "./comelang2.h"
                            litem_89=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value105=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./comelang2.h"
                            litem_89->prev=self->tail;
                            # 249 "./comelang2.h"
                            litem_89->next=((void*)0);
                            # 250 "./comelang2.h"
                            litem_89->item=item;
                            # 252 "./comelang2.h"
                            self->tail->next=litem_89;
                            # 253 "./comelang2.h"
                            self->tail=litem_89;
                        }
                    }
                    # 256 "./comelang2.h"
                    self->len++;
                    # 258 "./comelang2.h"
                    __result83__ = __result_obj__ = self;
                    return __result83__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional167;
unsigned int hash_108;
unsigned int it_109;
_Bool _while_condtional20;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool same_key_exist_110;
char* it2_111;
_Bool _if_conditional187;
_Bool _if_conditional188;
struct map$2charphsTypeph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_108, 0, sizeof(unsigned int));
memset(&it_109, 0, sizeof(unsigned int));
memset(&same_key_exist_110, 0, sizeof(_Bool));
memset(&it2_111, 0, sizeof(char*));
            # 1393 "./comelang2.h"
            # 1390 "./comelang2.h"
            if(_if_conditional167=self->len*10>=self->size,            _if_conditional167) {
                # 1391 "./comelang2.h"
                map$2charphsTypeph_rehash(self);
            }
            # 1393 "./comelang2.h"
            hash_108=string_get_hash_key(key)%self->size;
            # 1394 "./comelang2.h"
            it_109=hash_108;
            # 1452 "./comelang2.h"
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                # 1450 "./comelang2.h"
                # 1397 "./comelang2.h"
                if(_if_conditional179=self->item_existance[it_109],                _if_conditional179) {
                    # 1420 "./comelang2.h"
                    # 1399 "./comelang2.h"
                    if(_if_conditional180=string_equals(self->keys[it_109],key),                    _if_conditional180) {
                        # 1410 "./comelang2.h"
                        # 1401 "./comelang2.h"
                        if(_if_conditional181=1,                        _if_conditional181) {
                            # 1402 "./comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_109]);
                            # 1403 "./comelang2.h"
                            self->keys[it_109] = come_decrement_ref_count2(self->keys[it_109], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./comelang2.h"
                            self->keys[it_109]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_109]);
                            # 1408 "./comelang2.h"
                            self->keys[it_109]=key;
                        }
                        # 1417 "./comelang2.h"
                        # 1410 "./comelang2.h"
                        if(_if_conditional182=1,                        _if_conditional182) {
                            # 1411 "./comelang2.h"
                            come_call_finalizer2(sType_finalize,self->items[it_109], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./comelang2.h"
                            self->items[it_109]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./comelang2.h"
                            self->items[it_109]=item;
                        }
                        # 1417 "./comelang2.h"
                        break;
                    }
                    # 1420 "./comelang2.h"
                    it_109++;
                    # 1430 "./comelang2.h"
                    # 1422 "./comelang2.h"
                    if(_if_conditional183=it_109>=self->size,                    _if_conditional183) {
                        # 1423 "./comelang2.h"
                        it_109=0;
                    }
                    else {
                        # 1430 "./comelang2.h"
                        # 1425 "./comelang2.h"
                        if(_if_conditional184=it_109==hash_108,                        _if_conditional184) {
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
                    self->item_existance[it_109]=(_Bool)1;
                    # 1439 "./comelang2.h"
                    # 1433 "./comelang2.h"
                    if(_if_conditional185=1,                    _if_conditional185) {
                        # 1434 "./comelang2.h"
                        self->keys[it_109]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./comelang2.h"
                        self->keys[it_109]=key;
                    }
                    # 1446 "./comelang2.h"
                    # 1439 "./comelang2.h"
                    if(_if_conditional186=1,                    _if_conditional186) {
                        # 1440 "./comelang2.h"
                        self->items[it_109]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./comelang2.h"
                        self->items[it_109]=item;
                    }
                    # 1446 "./comelang2.h"
                    self->len++;
                    # 1448 "./comelang2.h"
                    break;
                }
            }
            # 1452 "./comelang2.h"
            same_key_exist_110=(_Bool)0;
            # 1461 "./comelang2.h"
            for(            it2_111=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_111=list$1charp_next(self->key_list)            ){
                # 1459 "./comelang2.h"
                # 1455 "./comelang2.h"
                if(_if_conditional187=string_equals(it2_111,key),                _if_conditional187) {
                    # 1456 "./comelang2.h"
                    puts("SAME KEY");
                    # 1457 "./comelang2.h"
                    same_key_exist_110=(_Bool)1;
                }
            }
            # 1465 "./comelang2.h"
            # 1461 "./comelang2.h"
            if(_if_conditional188=!same_key_exist_110,            _if_conditional188) {
                # 1462 "./comelang2.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1465 "./comelang2.h"
            __result96__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result96__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_91;
void* right_value112;
char** keys_92;
void* right_value113;
struct sType** items_93;
void* right_value114;
_Bool* item_existance_94;
int len_95;
char* it_98;
struct sType* default_value_101;
struct sType* it2_104;
unsigned int hash_105;
int n_106;
_Bool _while_condtional19;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
struct sType* default_value_107;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_91, 0, sizeof(int));
right_value112 = (void*)0;
memset(&keys_92, 0, sizeof(char**));
right_value113 = (void*)0;
memset(&items_93, 0, sizeof(struct sType**));
right_value114 = (void*)0;
memset(&item_existance_94, 0, sizeof(_Bool*));
memset(&len_95, 0, sizeof(int));
memset(&it_98, 0, sizeof(char*));
memset(&default_value_101, 0, sizeof(struct sType*));
memset(&it2_104, 0, sizeof(struct sType*));
memset(&hash_105, 0, sizeof(unsigned int));
memset(&n_106, 0, sizeof(int));
memset(&default_value_107, 0, sizeof(struct sType*));
                    # 1337 "./comelang2.h"
                    size_91=self->size*10;
                    # 1338 "./comelang2.h"
                    keys_92=(char**)come_increment_ref_count(((char**)(right_value112=(char**)come_calloc(1, sizeof(char*)*(1*(size_91)), "./comelang2.h", 1338, "char*%"))));
                    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./comelang2.h"
                    items_93=(struct sType**)come_increment_ref_count(((struct sType**)(right_value113=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_91)), "./comelang2.h", 1339, "sType*%"))));
                    come_call_finalizer2(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./comelang2.h"
                    item_existance_94=(_Bool*)come_increment_ref_count(((_Bool*)(right_value114=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_91)), "./comelang2.h", 1340, "bool"))));
                    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./comelang2.h"
                    len_95=0;
                    # 1377 "./comelang2.h"
                    for(                    it_98=map$2charphsTypeph_begin(self);                    !map$2charphsTypeph_end(self);                    it_98=map$2charphsTypeph_next(self)                    ){
                        # 1345 "./comelang2.h"
                        # 1346 "./comelang2.h"
                        memset(&default_value_101,0,sizeof(struct sType*));
                        # 1347 "./comelang2.h"
                        it2_104=map$2charphsTypeph_at(self,it_98,default_value_101);
                        # 1348 "./comelang2.h"
                        hash_105=string_get_hash_key(it_98)%size_91;
                        # 1349 "./comelang2.h"
                        n_106=hash_105;
                        # 1375 "./comelang2.h"
                        while(_while_condtional19=(_Bool)1,                        _while_condtional19) {
                            # 1374 "./comelang2.h"
                            # 1352 "./comelang2.h"
                            if(_if_conditional176=item_existance_94[n_106],                            _if_conditional176) {
                                # 1354 "./comelang2.h"
                                n_106++;
                                # 1364 "./comelang2.h"
                                # 1356 "./comelang2.h"
                                if(_if_conditional177=n_106>=size_91,                                _if_conditional177) {
                                    # 1357 "./comelang2.h"
                                    n_106=0;
                                }
                                else {
                                    # 1364 "./comelang2.h"
                                    # 1359 "./comelang2.h"
                                    if(_if_conditional178=n_106==hash_105,                                    _if_conditional178) {
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
                                item_existance_94[n_106]=(_Bool)1;
                                # 1367 "./comelang2.h"
                                keys_92[n_106]=it_98;
                                # 1368 "./comelang2.h"
                                # 1369 "./comelang2.h"
                                items_93[n_106]=map$2charphsTypeph_at(self,it_98,default_value_107);
                                # 1371 "./comelang2.h"
                                len_95++;
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
                    self->keys=keys_92;
                    # 1382 "./comelang2.h"
                    self->items=items_93;
                    # 1383 "./comelang2.h"
                    self->item_existance=item_existance_94;
                    # 1385 "./comelang2.h"
                    self->size=size_91;
                    # 1386 "./comelang2.h"
                    self->len=len_95;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional168;
char* result_96;
char* __result85__;
_Bool _if_conditional169;
char* __result86__;
char* result_97;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_96, 0, sizeof(char*));
memset(&result_97, 0, sizeof(char*));
                        # 1304 "./comelang2.h"
                        # 1299 "./comelang2.h"
                        if(_if_conditional168=self==((void*)0),                        _if_conditional168) {
                            # 1300 "./comelang2.h"
                            # 1301 "./comelang2.h"
                            memset(&result_96,0,sizeof(char*));
                            # 1302 "./comelang2.h"
                            __result85__ = __result_obj__ = result_96;
                            return __result85__;
                        }
                        # 1304 "./comelang2.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "./comelang2.h"
                        # 1306 "./comelang2.h"
                        if(self->key_list->it) {
                            # 1307 "./comelang2.h"
                            __result86__ = __result_obj__ = self->key_list->it->item;
                            return __result86__;
                        }
                        # 1310 "./comelang2.h"
                        # 1311 "./comelang2.h"
                        memset(&result_97,0,sizeof(char*));
                        # 1312 "./comelang2.h"
                        __result87__ = __result_obj__ = result_97;
                        return __result87__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "./comelang2.h"
                        __result88__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result88__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional170;
char* result_99;
char* __result89__;
_Bool _if_conditional171;
char* __result90__;
char* result_100;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_99, 0, sizeof(char*));
memset(&result_100, 0, sizeof(char*));
                        # 1321 "./comelang2.h"
                        # 1316 "./comelang2.h"
                        if(_if_conditional170=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional170) {
                            # 1317 "./comelang2.h"
                            # 1318 "./comelang2.h"
                            memset(&result_99,0,sizeof(char*));
                            # 1319 "./comelang2.h"
                            __result89__ = __result_obj__ = result_99;
                            return __result89__;
                        }
                        # 1321 "./comelang2.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "./comelang2.h"
                        # 1323 "./comelang2.h"
                        if(self->key_list->it) {
                            # 1324 "./comelang2.h"
                            __result90__ = __result_obj__ = self->key_list->it->item;
                            return __result90__;
                        }
                        # 1327 "./comelang2.h"
                        # 1328 "./comelang2.h"
                        memset(&result_100,0,sizeof(char*));
                        # 1329 "./comelang2.h"
                        __result91__ = __result_obj__ = result_100;
                        return __result91__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_102;
unsigned int it_103;
_Bool _while_condtional18;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct sType* __result92__;
_Bool _if_conditional174;
_Bool _if_conditional175;
struct sType* __result93__;
struct sType* __result94__;
struct sType* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_102, 0, sizeof(unsigned int));
memset(&it_103, 0, sizeof(unsigned int));
                            # 1226 "./comelang2.h"
                            hash_102=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "./comelang2.h"
                            it_103=hash_102;
                            # 1251 "./comelang2.h"
                            while(_while_condtional18=(_Bool)1,                            _while_condtional18) {
                                # 1249 "./comelang2.h"
                                # 1230 "./comelang2.h"
                                if(_if_conditional172=self->item_existance[it_103],                                _if_conditional172) {
                                    # 1237 "./comelang2.h"
                                    # 1232 "./comelang2.h"
                                    if(_if_conditional173=string_equals(self->keys[it_103],key),                                    _if_conditional173) {
                                        # 1234 "./comelang2.h"
                                        __result92__ = __result_obj__ = self->items[it_103];
                                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result92__;
                                    }
                                    # 1237 "./comelang2.h"
                                    it_103++;
                                    # 1245 "./comelang2.h"
                                    # 1239 "./comelang2.h"
                                    if(_if_conditional174=it_103>=self->size,                                    _if_conditional174) {
                                        # 1240 "./comelang2.h"
                                        it_103=0;
                                    }
                                    else {
                                        # 1245 "./comelang2.h"
                                        # 1242 "./comelang2.h"
                                        if(_if_conditional175=it_103==hash_102,                                        _if_conditional175) {
                                            # 1243 "./comelang2.h"
                                            __result93__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result93__;
                                        }
                                    }
                                }
                                else {
                                    # 1247 "./comelang2.h"
                                    __result94__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result94__;
                                }
                            }
                            # 1251 "./comelang2.h"
                            __result95__ = __result_obj__ = default_value;
                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result95__;
                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional191;
struct tuple2$2sTypephcharph* result_113;
struct tuple2$2sTypephcharph* __result97__;
_Bool _if_conditional192;
struct tuple2$2sTypephcharph* __result98__;
struct tuple2$2sTypephcharph* result_114;
struct tuple2$2sTypephcharph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_113, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_114, 0, sizeof(struct tuple2$2sTypephcharph*));
                # 290 "./comelang2.h"
                # 285 "./comelang2.h"
                if(_if_conditional191=self==((void*)0),                _if_conditional191) {
                    # 286 "./comelang2.h"
                    # 287 "./comelang2.h"
                    memset(&result_113,0,sizeof(struct tuple2$2sTypephcharph*));
                    # 288 "./comelang2.h"
                    __result97__ = __result_obj__ = result_113;
                    return __result97__;
                }
                # 290 "./comelang2.h"
                self->it=self->head;
                # 296 "./comelang2.h"
                # 292 "./comelang2.h"
                if(self->it) {
                    # 293 "./comelang2.h"
                    __result98__ = __result_obj__ = self->it->item;
                    return __result98__;
                }
                # 296 "./comelang2.h"
                # 297 "./comelang2.h"
                memset(&result_114,0,sizeof(struct tuple2$2sTypephcharph*));
                # 298 "./comelang2.h"
                __result99__ = __result_obj__ = result_114;
                return __result99__;
}

static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./comelang2.h"
                __result100__ = self==((void*)0)||self->it==((void*)0);
                return __result100__;
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional193;
struct tuple2$2sTypephcharph* result_116;
struct tuple2$2sTypephcharph* __result101__;
_Bool _if_conditional194;
struct tuple2$2sTypephcharph* __result102__;
struct tuple2$2sTypephcharph* result_117;
struct tuple2$2sTypephcharph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_116, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_117, 0, sizeof(struct tuple2$2sTypephcharph*));
                # 308 "./comelang2.h"
                # 302 "./comelang2.h"
                if(_if_conditional193=self==((void*)0)||self->it==((void*)0),                _if_conditional193) {
                    # 303 "./comelang2.h"
                    # 304 "./comelang2.h"
                    memset(&result_116,0,sizeof(struct tuple2$2sTypephcharph*));
                    # 305 "./comelang2.h"
                    __result101__ = __result_obj__ = result_116;
                    return __result101__;
                }
                # 308 "./comelang2.h"
                self->it=self->it->next;
                # 314 "./comelang2.h"
                # 310 "./comelang2.h"
                if(self->it) {
                    # 311 "./comelang2.h"
                    __result102__ = __result_obj__ = self->it->item;
                    return __result102__;
                }
                # 314 "./comelang2.h"
                # 315 "./comelang2.h"
                memset(&result_117,0,sizeof(struct tuple2$2sTypephcharph*));
                # 316 "./comelang2.h"
                __result103__ = __result_obj__ = result_117;
                return __result103__;
}

int sTypedefNode_sline(struct sTypedefNode* self, struct sInfo* info){
void* __result_obj__;
int __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    # 98 "17typedef.c"
    __result105__ = self->sline;
    return __result105__;
}

char* sTypedefNode_sname(struct sTypedefNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value126;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    # 103 "17typedef.c"
    __result106__ = __result_obj__ = ((char*)(right_value126=__builtin_string(self->sname)));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
char* source_head_121;
_Bool _if_conditional199;
_Bool in_typedef_122;
void* right_value127;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_123;
char* type_name_124;
_Bool err_125;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value128;
struct sType* base_type_126;
void* right_value129;
void* right_value130;
struct list$1tuple2$2sTypephcharphph* multiple_declare_127;
void* right_value131;
void* right_value132;
struct tuple2$2sTypephcharph* variable_name_128;
void* right_value136;
struct tuple2$2sTypephcharph* variable_name2_132;
_Bool _while_condtional21;
void* right_value137;
struct tuple2$2sTypephcharph* variable_name_133;
char* source_tail_134;
void* right_value138;
void* right_value139;
struct buffer* header_135;
void* right_value140;
void* right_value141;
void* right_value142;
struct sNode* _inf_value1;
struct sTypedefNode* _inf_obj_value1;
void* right_value149;
struct sNode* __result111__;
char* source_tail_137;
void* right_value150;
void* right_value151;
struct buffer* header_138;
void* right_value152;
void* right_value153;
void* right_value154;
struct sNode* _inf_value2;
struct sTypedefNode* _inf_obj_value2;
void* right_value161;
struct sNode* __result114__;
void* right_value162;
struct sNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_121, 0, sizeof(char*));
memset(&in_typedef_122, 0, sizeof(_Bool));
right_value127 = (void*)0;
memset(&type_123, 0, sizeof(struct sType*));
memset(&type_name_124, 0, sizeof(char*));
memset(&err_125, 0, sizeof(_Bool));
memset(&type_123, 0, sizeof(struct sType*));
memset(&type_name_124, 0, sizeof(char*));
memset(&err_125, 0, sizeof(_Bool));
right_value128 = (void*)0;
memset(&base_type_126, 0, sizeof(struct sType*));
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&multiple_declare_127, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&variable_name_128, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value136 = (void*)0;
memset(&variable_name2_132, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value137 = (void*)0;
memset(&variable_name_133, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&source_tail_134, 0, sizeof(char*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&header_135, 0, sizeof(struct buffer*));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value149 = (void*)0;
memset(&source_tail_137, 0, sizeof(char*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&header_138, 0, sizeof(struct buffer*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
    # 108 "17typedef.c"
    source_head_121=info->p;
    # 167 "17typedef.c"
    # 110 "17typedef.c"
    if(_if_conditional199=charp_operator_equals(buf,"typedef"),    _if_conditional199) {
        # 111 "17typedef.c"
        in_typedef_122=info->in_typedef;
        # 112 "17typedef.c"
        info->in_typedef=(_Bool)1;
        # 113 "17typedef.c"
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value127=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_123=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        type_name_124=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_125=multiple_assign_var2->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 118 "17typedef.c"
        # 114 "17typedef.c"
        if(_if_conditional202=!err_125,        _if_conditional202) {
            # 115 "17typedef.c"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 116 "17typedef.c"
            exit(2);
        }
        # 118 "17typedef.c"
        info->in_typedef=(_Bool)0;
        # 119 "17typedef.c"
        info->in_typedef=in_typedef_122;
        # 165 "17typedef.c"
        # 121 "17typedef.c"
        if(_if_conditional203=*info->p==44,        _if_conditional203) {
            # 122 "17typedef.c"
            info->p++;
            # 123 "17typedef.c"
            skip_spaces_and_lf(info);
            # 125 "17typedef.c"
            base_type_126=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(type_123))));
            come_call_finalizer2(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 127 "17typedef.c"
            multiple_declare_127=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value130=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value129=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "17typedef.c", 127, "list$1tuple2$2sTypephcharphph"))))))));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 129 "17typedef.c"
            variable_name_128=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value132=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value131=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "17typedef.c", 129, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(base_type_126),(char*)come_increment_ref_count(type_name_124)))));
            come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 130 "17typedef.c"
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_127,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name_128));
            # 132 "17typedef.c"
            variable_name2_132=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value136=parse_variable_name((struct sType*)come_increment_ref_count(base_type_126),(_Bool)1,info))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 133 "17typedef.c"
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_127,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name2_132));
            # 144 "17typedef.c"
            while(_while_condtional21=*info->p==44,            _while_condtional21) {
                # 136 "17typedef.c"
                info->p++;
                # 137 "17typedef.c"
                skip_spaces_and_lf(info);
                # 139 "17typedef.c"
                variable_name_133=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value137=parse_variable_name((struct sType*)come_increment_ref_count(base_type_126),(_Bool)0,info))));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 141 "17typedef.c"
                list$1tuple2$2sTypephcharphph_push_back(multiple_declare_127,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name_133));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 144 "17typedef.c"
            source_tail_134=info->p;
            # 146 "17typedef.c"
            header_135=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value139=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value138=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "17typedef.c", 146, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 147 "17typedef.c"
            buffer_append_str(header_135,"typedef ");
            # 148 "17typedef.c"
            buffer_append(header_135,source_head_121,source_tail_134-source_head_121);
            # 150 "17typedef.c"
            add_come_code_at_come_header(info,"%s",((char*)(right_value140=buffer_to_string(header_135))));
            right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 152 "17typedef.c"
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "17typedef.c", 152, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sTypedefNode*)(right_value142=sTypedefNode_initialize((struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(right_value141=(struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "17typedef.c", 152, "sTypedefNode")))),(char*)come_increment_ref_count(type_name_124),(struct sType*)come_increment_ref_count(type_123),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_127),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sTypedefNode_finalize;
            _inf_value1->clone=(void*)sTypedefNode_clone;
            _inf_value1->compile=(void*)sTypedefNode_compile;
            _inf_value1->sline=(void*)sTypedefNode_sline;
            _inf_value1->sname=(void*)sTypedefNode_sname;
            _inf_value1->terminated=(void*)sTypedefNode_terminated;
            _inf_value1->kind=(void*)sTypedefNode_kind;
            __result111__ = __result_obj__ = ((struct sNode*)(right_value149=_inf_value1));
            come_call_finalizer2(sType_finalize,base_type_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name2_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_124 = come_decrement_ref_count2(type_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sTypedefNode_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sTypedefNode_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value149) { right_value149 = come_decrement_ref_count2(right_value149, ((struct sNode*)right_value149)->finalize, ((struct sNode*)right_value149)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result111__;
            come_call_finalizer2(sType_finalize,base_type_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name2_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 155 "17typedef.c"
            source_tail_137=info->p;
            # 157 "17typedef.c"
            header_138=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value151=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value150=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "17typedef.c", 157, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 158 "17typedef.c"
            buffer_append_str(header_138,"typedef ");
            # 159 "17typedef.c"
            buffer_append(header_138,source_head_121,source_tail_137-source_head_121);
            # 161 "17typedef.c"
            add_come_code_at_come_header(info,"%s;\n",((char*)(right_value152=buffer_to_string(header_138))));
            right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 163 "17typedef.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "17typedef.c", 163, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sTypedefNode*)(right_value154=sTypedefNode_initialize((struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(right_value153=(struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "17typedef.c", 163, "sTypedefNode")))),(char*)come_increment_ref_count(type_name_124),(struct sType*)come_increment_ref_count(type_123),((void*)0),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sTypedefNode_finalize;
            _inf_value2->clone=(void*)sTypedefNode_clone;
            _inf_value2->compile=(void*)sTypedefNode_compile;
            _inf_value2->sline=(void*)sTypedefNode_sline;
            _inf_value2->sname=(void*)sTypedefNode_sname;
            _inf_value2->terminated=(void*)sTypedefNode_terminated;
            _inf_value2->kind=(void*)sTypedefNode_kind;
            __result114__ = __result_obj__ = ((struct sNode*)(right_value161=_inf_value2));
            come_call_finalizer2(buffer_finalize,header_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_124 = come_decrement_ref_count2(type_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sTypedefNode_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sTypedefNode_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value161) { right_value161 = come_decrement_ref_count2(right_value161, ((struct sNode*)right_value161)->finalize, ((struct sNode*)right_value161)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result114__;
            come_call_finalizer2(buffer_finalize,header_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(sType_finalize,type_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        type_name_124 = come_decrement_ref_count2(type_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 167 "17typedef.c"
    __result115__ = __result_obj__ = ((struct sNode*)(right_value162=top_level_v94(buf,head,head_sline,info)));
    if(right_value162) { right_value162 = come_decrement_ref_count2(right_value162, ((struct sNode*)right_value162)->finalize, ((struct sNode*)right_value162)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result115__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional200;
_Bool _if_conditional201;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            # 0 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional200=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional200) {
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple3$3sTypephcharphboolp_finalize"
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional201=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional201) {
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj48;
char* __dec_obj49;
struct tuple2$2sTypephcharph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1768 "./comelang2.h"
                __dec_obj48=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1769 "./comelang2.h"
                __dec_obj49=self->v2;
                self->v2=(char*)come_increment_ref_count(v2);
                __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1771 "./comelang2.h"
                __result107__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result107__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional204;
void* right_value133;
struct list_item$1tuple2$2sTypephcharphph* litem_129;
struct tuple2$2sTypephcharph* __dec_obj50;
_Bool _if_conditional205;
void* right_value134;
struct list_item$1tuple2$2sTypephcharphph* litem_130;
struct tuple2$2sTypephcharph* __dec_obj51;
void* right_value135;
struct list_item$1tuple2$2sTypephcharphph* litem_131;
struct tuple2$2sTypephcharph* __dec_obj52;
struct list$1tuple2$2sTypephcharphph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
memset(&litem_129, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value134 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value135 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional204=self->len==0,                _if_conditional204) {
                    # 226 "./comelang2.h"
                    litem_129=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value133=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_129->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_129->next=((void*)0);
                    # 230 "./comelang2.h"
                    __dec_obj50=litem_129->item;
                    litem_129->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./comelang2.h"
                    self->tail=litem_129;
                    # 233 "./comelang2.h"
                    self->head=litem_129;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional205=self->len==1,                    _if_conditional205) {
                        # 236 "./comelang2.h"
                        litem_130=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value134=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_130->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_130->next=((void*)0);
                        # 240 "./comelang2.h"
                        __dec_obj51=litem_130->item;
                        litem_130->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./comelang2.h"
                        self->tail=litem_130;
                        # 243 "./comelang2.h"
                        self->head->next=litem_130;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_131=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value135=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_131->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_131->next=((void*)0);
                        # 250 "./comelang2.h"
                        __dec_obj52=litem_131->item;
                        litem_131->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./comelang2.h"
                        self->tail->next=litem_131;
                        # 253 "./comelang2.h"
                        self->tail=litem_131;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result108__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result108__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sTypedefNode_finalize(struct sTypedefNode* self){
void* __result_obj__;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sTypedefNode_finalize"
                # 0 "sTypedefNode_finalize"
                if(_if_conditional218=self!=((void*)0)&&self->mTypeName!=((void*)0),                _if_conditional218) {
                    # 0 "sTypedefNode_finalize"
                    self->mTypeName = come_decrement_ref_count2(self->mTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sTypedefNode_finalize"
                # 1 "sTypedefNode_finalize"
                if(_if_conditional219=self!=((void*)0)&&self->mType!=((void*)0),                _if_conditional219) {
                    # 1 "sTypedefNode_finalize"
                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sTypedefNode_finalize"
                # 2 "sTypedefNode_finalize"
                if(_if_conditional220=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional220) {
                    # 2 "sTypedefNode_finalize"
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sTypedefNode_finalize"
                # 3 "sTypedefNode_finalize"
                if(_if_conditional221=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional221) {
                    # 3 "sTypedefNode_finalize"
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sTypedefNode_finalize"
                # 4 "sTypedefNode_finalize"
                if(_if_conditional222=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional222) {
                    # 4 "sTypedefNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sTypedefNode* sTypedefNode_clone(struct sTypedefNode* self){
void* __result_obj__;
_Bool _if_conditional223;
struct sTypedefNode* __result112__;
void* right_value155;
struct sTypedefNode* result_139;
_Bool _if_conditional224;
void* right_value156;
char* __dec_obj58;
_Bool _if_conditional225;
void* right_value157;
struct sType* __dec_obj59;
_Bool _if_conditional226;
void* right_value158;
struct list$1tuple2$2sTypephcharphph* __dec_obj60;
_Bool _if_conditional227;
void* right_value159;
char* __dec_obj61;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value160;
char* __dec_obj62;
struct sTypedefNode* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
memset(&result_139, 0, sizeof(struct sTypedefNode*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
                # 3 "sTypedefNode_clone"
                # 2 "sTypedefNode_clone"
                if(_if_conditional223=self==(void*)0,                _if_conditional223) {
                    # 2 "sTypedefNode_clone"
                    __result112__ = __result_obj__ = (void*)0;
                    return __result112__;
                }
                # 3 "sTypedefNode_clone"
                result_139=(struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(right_value155=(struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "sTypedefNode_clone", 3, "sTypedefNode"))));
                come_call_finalizer2(sTypedefNode_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sTypedefNode_clone"
                # 4 "sTypedefNode_clone"
                if(_if_conditional224=self!=((void*)0)&&self->mTypeName!=((void*)0),                _if_conditional224) {
                    # 4 "sTypedefNode_clone"
                    __dec_obj58=result_139->mTypeName;
                    result_139->mTypeName=(char*)come_increment_ref_count(((char*)(right_value156=string_clone(self->mTypeName))));
                    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sTypedefNode_clone"
                # 5 "sTypedefNode_clone"
                if(_if_conditional225=self!=((void*)0)&&self->mType!=((void*)0),                _if_conditional225) {
                    # 5 "sTypedefNode_clone"
                    __dec_obj59=result_139->mType;
                    result_139->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(self->mType))));
                    come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sTypedefNode_clone"
                # 6 "sTypedefNode_clone"
                if(_if_conditional226=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional226) {
                    # 6 "sTypedefNode_clone"
                    __dec_obj60=result_139->multiple_declare;
                    result_139->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value158=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 8 "sTypedefNode_clone"
                # 7 "sTypedefNode_clone"
                if(_if_conditional227=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional227) {
                    # 7 "sTypedefNode_clone"
                    __dec_obj61=result_139->mDeclareSName;
                    result_139->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value159=string_clone(self->mDeclareSName))));
                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 9 "sTypedefNode_clone"
                # 8 "sTypedefNode_clone"
                if(_if_conditional228=self!=((void*)0),                _if_conditional228) {
                    # 8 "sTypedefNode_clone"
                    result_139->sline=self->sline;
                }
                # 10 "sTypedefNode_clone"
                # 9 "sTypedefNode_clone"
                if(_if_conditional229=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional229) {
                    # 9 "sTypedefNode_clone"
                    __dec_obj62=result_139->sname;
                    result_139->sname=(char*)come_increment_ref_count(((char*)(right_value160=string_clone(self->sname))));
                    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sTypedefNode_clone"
                __result113__ = __result_obj__ = result_139;
                come_call_finalizer2(sTypedefNode_finalize,result_139, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result113__;
                come_call_finalizer2(sTypedefNode_finalize,result_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

