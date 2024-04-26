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
struct sCurrentNode
{
    int sline;
    char* sname;
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
struct sMethodCallNode
{
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int sline;
    char* sname;
    int method_block_sline;
    struct list$1sTypeph* method_generics_types;
};
struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
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

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool compiletime_get_exception_value(struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);

_Bool sCurrentNode_terminated();

char* sCurrentNode_kind();

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);

static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
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
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info);

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);

char* sMethodCallNode_kind();

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

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










struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
struct sCurrentNode* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
    # 10 "20method.c"
    self->sline=info->sline;
    # 11 "20method.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 13 "20method.c"
    __result34__ = __result_obj__ = self;
    come_call_finalizer2(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result34__;
    come_call_finalizer2(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
int __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    # 18 "20method.c"
    __result35__ = self->sline;
    return __result35__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value50;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    # 23 "20method.c"
    __result36__ = __result_obj__ = ((char*)(right_value50=__builtin_string(self->sname)));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
}

_Bool sCurrentNode_terminated(){
void* __result_obj__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    # 28 "20method.c"
    __result37__ = (_Bool)0;
    return __result37__;
}

char* sCurrentNode_kind(){
void* __result_obj__;
void* right_value51;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
    # 33 "20method.c"
    __result38__ = __result_obj__ = ((char*)(right_value51=__builtin_string("sCurrentNode")));
    right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result38__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value52;
char* class_name_11;
void* right_value53;
void* right_value54;
struct sClass* current_stack_12;
void* right_value55;
void* right_value56;
void* right_value57;
void* right_value58;
void* right_value59;
struct tuple2$2charphsTypeph* result_kind_21;
void* right_value101;
void* right_value102;
void* right_value103;
void* right_value104;
void* right_value105;
void* right_value106;
struct tuple2$2charphsTypeph* return_value_44;
void* right_value107;
struct sVarTable* vtable_45;
struct map$2charphsVarph* o2_saved_46;
char* it_49;
char* key_52;
struct sVar* value_56;
void* right_value108;
struct sType* type2_57;
void* right_value109;
void* right_value110;
void* right_value111;
struct tuple2$2charphsTypeph* item_58;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional129;
void* right_value112;
struct sType* type3_59;
void* right_value113;
void* right_value114;
void* right_value115;
struct tuple2$2charphsTypeph* item2_62;
void* right_value116;
void* right_value117;
static int num_current_stack_111=0;
struct map$2charphsVarph* o2_saved_112;
char* it_113;
char* key_114;
struct sVar* value_115;
void* right_value124;
struct sType* type2_116;
void* right_value125;
void* right_value126;
struct tuple2$2charphsTypeph* item_117;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value127;
struct CVALUE* come_value_118;
void* right_value128;
char* __dec_obj43;
void* right_value129;
void* right_value130;
struct sType* __dec_obj44;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&class_name_11, 0, sizeof(char*));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&current_stack_12, 0, sizeof(struct sClass*));
right_value55 = (void*)0;
right_value56 = (void*)0;
right_value57 = (void*)0;
right_value58 = (void*)0;
right_value59 = (void*)0;
memset(&result_kind_21, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&return_value_44, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value107 = (void*)0;
memset(&vtable_45, 0, sizeof(struct sVarTable*));
memset(&o2_saved_46, 0, sizeof(struct map$2charphsVarph*));
memset(&it_49, 0, sizeof(char*));
memset(&key_52, 0, sizeof(char*));
memset(&value_56, 0, sizeof(struct sVar*));
right_value108 = (void*)0;
memset(&type2_57, 0, sizeof(struct sType*));
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&item_58, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value112 = (void*)0;
memset(&type3_59, 0, sizeof(struct sType*));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&item2_62, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value116 = (void*)0;
right_value117 = (void*)0;
memset(&o2_saved_112, 0, sizeof(struct map$2charphsVarph*));
memset(&it_113, 0, sizeof(char*));
memset(&key_114, 0, sizeof(char*));
memset(&value_115, 0, sizeof(struct sVar*));
right_value124 = (void*)0;
memset(&type2_116, 0, sizeof(struct sType*));
right_value125 = (void*)0;
right_value126 = (void*)0;
memset(&item_117, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value127 = (void*)0;
memset(&come_value_118, 0, sizeof(struct CVALUE*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
    # 38 "20method.c"
    info->current_stack_num++;
    # 39 "20method.c"
    class_name_11=(char*)come_increment_ref_count(((char*)(right_value52=xsprintf("__current_stack%d__",info->current_stack_num))));
    right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 40 "20method.c"
    current_stack_12=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value54=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value53=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 40, "sClass")))),class_name_11,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    come_call_finalizer2(sClass_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 42 "20method.c"
    result_kind_21=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value59=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value58=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value55=xsprintf("__method_block_result_kind__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value56=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 42, "sType")))),"int",(_Bool)0,info))))))));
    right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 43 "20method.c"
    list$1tuple2$2charphsTypephph_push_back(current_stack_12->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value101=tuple2$2charphsTypephp_clone(result_kind_21)))));
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 45 "20method.c"
    return_value_44=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value106=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value105=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 45, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value102=xsprintf("__method_block_return_value__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value103=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 45, "sType")))),"void*",(_Bool)0,info))))))));
    right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 46 "20method.c"
    list$1tuple2$2charphsTypephph_push_back(current_stack_12->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value107=tuple2$2charphsTypephp_clone(return_value_44)))));
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 48 "20method.c"
    vtable_45=info->lv_table;
    # 90 "20method.c"
    while(vtable_45) {
        # 87 "20method.c"
        for(        o2_saved_46=(struct map$2charphsVarph*)come_increment_ref_count((vtable_45->mVars)),it_49=map$2charphsVarph_begin((o2_saved_46));        !map$2charphsVarph_end((o2_saved_46));        it_49=map$2charphsVarph_next((o2_saved_46))        ){
            # 52 "20method.c"
            key_52=it_49;
            # 53 "20method.c"
            value_56=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_45->mVars,key_52), "20method.c", 53, 0));
            # 55 "20method.c"
            type2_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_clone(value_56->mType))));
            come_call_finalizer2(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 57 "20method.c"
            type2_57->mPointerNum++;
            # 59 "20method.c"
            item_58=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value111=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value110=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 59, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(value_56->mCValueName)))),(struct sType*)come_increment_ref_count(type2_57)))));
            right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 85 "20method.c"
            # 61 "20method.c"
            if(_if_conditional123=value_56->mCValueName!=((void*)0),            _if_conditional123) {
                # 84 "20method.c"
                # 62 "20method.c"
                if(_if_conditional124=strcmp(value_56->mCValueName,"__list_values")==0,                _if_conditional124) {
                }
                else {
                    # 84 "20method.c"
                    # 65 "20method.c"
                    if(_if_conditional125=strcmp(value_56->mCValueName,"__map_keys")==0,                    _if_conditional125) {
                    }
                    else {
                        # 84 "20method.c"
                        # 68 "20method.c"
                        if(_if_conditional126=strcmp(value_56->mCValueName,"__map_element")==0,                        _if_conditional126) {
                        }
                        else {
                            # 84 "20method.c"
                            # 71 "20method.c"
                            if(_if_conditional127=string_operator_equals(value_56->mType->mClass->mName,"va_list")||string_operator_equals(value_56->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional127) {
                            }
                            else {
                                # 84 "20method.c"
                                # 74 "20method.c"
                                if(_if_conditional129=list$1sNodeph_length(type2_57->mArrayNum)==1,                                _if_conditional129) {
                                    # 75 "20method.c"
                                    type3_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(type2_57))));
                                    come_call_finalizer2(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 76 "20method.c"
                                    list$1sNodeph_reset(type3_59->mArrayNum);
                                    # 77 "20method.c"
                                    type3_59->mPointerNum++;
                                    # 78 "20method.c"
                                    item2_62=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value115=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value114=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 78, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(value_56->mCValueName)))),(struct sType*)come_increment_ref_count(type3_59)))));
                                    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 79 "20method.c"
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_12->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value116=tuple2$2charphsTypephp_clone(item2_62)))));
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,type3_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,item2_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    # 82 "20method.c"
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_12->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value117=tuple2$2charphsTypephp_clone(item_58)))));
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer2(sType_finalize,type2_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 87 "20method.c"
        vtable_45=vtable_45->mParent;
    }
    # 90 "20method.c"
    output_struct(current_stack_12,info);
    # 92 "20method.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_11),(struct sClass*)come_increment_ref_count(current_stack_12));
    # 94 "20method.c"
    # 95 "20method.c"
    num_current_stack_111++;
    # 96 "20method.c"
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_11,num_current_stack_111);
    # 97 "20method.c"
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_111,class_name_11);
    # 99 "20method.c"
    vtable_45=info->lv_table;
    # 137 "20method.c"
    while(vtable_45) {
        # 134 "20method.c"
        for(        o2_saved_112=(struct map$2charphsVarph*)come_increment_ref_count((vtable_45->mVars)),it_113=map$2charphsVarph_begin((o2_saved_112));        !map$2charphsVarph_end((o2_saved_112));        it_113=map$2charphsVarph_next((o2_saved_112))        ){
            # 103 "20method.c"
            key_114=it_113;
            # 104 "20method.c"
            value_115=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_45->mVars,key_114), "20method.c", 104, 1));
            # 106 "20method.c"
            type2_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(value_115->mType))));
            come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 108 "20method.c"
            item_117=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value126=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value125=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 108, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(value_115->mCValueName),(struct sType*)come_increment_ref_count(type2_116)))));
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 132 "20method.c"
            # 110 "20method.c"
            if(_if_conditional181=value_115->mCValueName!=((void*)0),            _if_conditional181) {
                # 131 "20method.c"
                # 111 "20method.c"
                if(_if_conditional182=strcmp(value_115->mCValueName,"__list_values")==0,                _if_conditional182) {
                }
                else {
                    # 131 "20method.c"
                    # 114 "20method.c"
                    if(_if_conditional183=strcmp(value_115->mCValueName,"__map_keys")==0,                    _if_conditional183) {
                    }
                    else {
                        # 131 "20method.c"
                        # 117 "20method.c"
                        if(_if_conditional184=strcmp(value_115->mCValueName,"__map_element")==0,                        _if_conditional184) {
                        }
                        else {
                            # 131 "20method.c"
                            # 120 "20method.c"
                            if(_if_conditional185=string_operator_equals(value_115->mType->mClass->mName,"va_list")||string_operator_equals(value_115->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional185) {
                            }
                            else {
                                # 130 "20method.c"
                                # 124 "20method.c"
                                if(_if_conditional186=string_operator_equals(type2_116->mClass->mName,"lambda"),                                _if_conditional186) {
                                    # 125 "20method.c"
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_111,value_115->mCValueName,value_115->mCValueName);
                                }
                                else {
                                    # 128 "20method.c"
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_111,value_115->mCValueName,value_115->mCValueName);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer2(sType_finalize,type2_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 134 "20method.c"
        vtable_45=vtable_45->mParent;
    }
    # 137 "20method.c"
    come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 137, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 139 "20method.c"
    __dec_obj43=come_value_118->c_value;
    come_value_118->c_value=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("&__current_stack%d__",num_current_stack_111))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 140 "20method.c"
    __dec_obj44=come_value_118->type;
    come_value_118->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 140, "sType")))),class_name_11,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 141 "20method.c"
    come_value_118->var=((void*)0);
    # 143 "20method.c"
    add_come_last_code(info,"%s;\n",come_value_118->c_value);
    # 145 "20method.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_118));
    # 147 "20method.c"
    info->num_current_stack=num_current_stack_111;
    # 149 "20method.c"
    __result100__ = (_Bool)1;
    class_name_11 = come_decrement_ref_count2(class_name_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,current_stack_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,result_kind_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,return_value_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result100__;
    class_name_11 = come_decrement_ref_count2(class_name_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,current_stack_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,result_kind_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,return_value_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sClass_finalize"
        # 0 "sClass_finalize"
        if(_if_conditional8=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional8) {
            # 0 "sClass_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sClass_finalize"
        # 1 "sClass_finalize"
        if(_if_conditional9=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional9) {
            # 1 "sClass_finalize"
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sClass_finalize"
        # 2 "sClass_finalize"
        if(_if_conditional30=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional30) {
            # 2 "sClass_finalize"
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_13;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_13, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 123 "./comelang2.h"
                it_13=self->head;
                # 129 "./comelang2.h"
                while(_while_condtional1=it_13!=((void*)0),                _while_condtional1) {
                    # 125 "./comelang2.h"
                    prev_it_14=it_13;
                    # 126 "./comelang2.h"
                    it_13=it_13->next;
                    # 127 "./comelang2.h"
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                        if(_if_conditional10=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional10) {
                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsTypephp_finalize"
                                # 0 "tuple2$2charphsTypephp_finalize"
                                if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional11) {
                                    # 0 "tuple2$2charphsTypephp_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsTypephp_finalize"
                                # 1 "tuple2$2charphsTypephp_finalize"
                                if(_if_conditional12=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional12) {
                                    # 1 "tuple2$2charphsTypephp_finalize"
                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sType_finalize"
                                        # 0 "sType_finalize"
                                        if(_if_conditional13=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                        _if_conditional13) {
                                            # 0 "sType_finalize"
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sType_finalize"
                                        # 1 "sType_finalize"
                                        if(_if_conditional15=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional15) {
                                            # 1 "sType_finalize"
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 3 "sType_finalize"
                                        # 2 "sType_finalize"
                                        if(_if_conditional17=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional17) {
                                            # 2 "sType_finalize"
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 4 "sType_finalize"
                                        # 3 "sType_finalize"
                                        if(_if_conditional18=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional18) {
                                            # 3 "sType_finalize"
                                            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 5 "sType_finalize"
                                        # 4 "sType_finalize"
                                        if(_if_conditional19=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional19) {
                                            # 4 "sType_finalize"
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 6 "sType_finalize"
                                        # 5 "sType_finalize"
                                        if(_if_conditional20=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional20) {
                                            # 5 "sType_finalize"
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 7 "sType_finalize"
                                        # 6 "sType_finalize"
                                        if(_if_conditional22=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional22) {
                                            # 6 "sType_finalize"
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 8 "sType_finalize"
                                        # 7 "sType_finalize"
                                        if(_if_conditional23=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional23) {
                                            # 7 "sType_finalize"
                                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 9 "sType_finalize"
                                        # 8 "sType_finalize"
                                        if(_if_conditional25=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional25) {
                                            # 8 "sType_finalize"
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 10 "sType_finalize"
                                        # 9 "sType_finalize"
                                        if(_if_conditional26=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional26) {
                                            # 9 "sType_finalize"
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 11 "sType_finalize"
                                        # 10 "sType_finalize"
                                        if(_if_conditional27=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional27) {
                                            # 10 "sType_finalize"
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 12 "sType_finalize"
                                        # 11 "sType_finalize"
                                        if(_if_conditional28=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional28) {
                                            # 11 "sType_finalize"
                                            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 13 "sType_finalize"
                                        # 12 "sType_finalize"
                                        if(_if_conditional29=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional29) {
                                            # 12 "sType_finalize"
                                            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_15;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sTypeph*));
                                                # 123 "./comelang2.h"
                                                it_15=self->head;
                                                # 129 "./comelang2.h"
                                                while(_while_condtional2=it_15!=((void*)0),                                                _while_condtional2) {
                                                    # 125 "./comelang2.h"
                                                    prev_it_16=it_15;
                                                    # 126 "./comelang2.h"
                                                    it_15=it_15->next;
                                                    # 127 "./comelang2.h"
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1sTypephp_finalize"
                                                        # 0 "list_item$1sTypephp_finalize"
                                                        if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional14) {
                                                            # 0 "list_item$1sTypephp_finalize"
                                                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple1$1sTypephp_finalize"
                                                # 0 "tuple1$1sTypephp_finalize"
                                                if(_if_conditional16=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional16) {
                                                    # 0 "tuple1$1sTypephp_finalize"
                                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_17;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_17, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1sNodeph*));
                                                # 123 "./comelang2.h"
                                                it_17=self->head;
                                                # 129 "./comelang2.h"
                                                while(_while_condtional3=it_17!=((void*)0),                                                _while_condtional3) {
                                                    # 125 "./comelang2.h"
                                                    prev_it_18=it_17;
                                                    # 126 "./comelang2.h"
                                                    it_17=it_17->next;
                                                    # 127 "./comelang2.h"
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1sNodephp_finalize"
                                                        # 0 "list_item$1sNodephp_finalize"
                                                        if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional21) {
                                                            # 0 "list_item$1sNodephp_finalize"
                                                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_19;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_19, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_20, 0, sizeof(struct list_item$1charph*));
                                                # 123 "./comelang2.h"
                                                it_19=self->head;
                                                # 129 "./comelang2.h"
                                                while(_while_condtional4=it_19!=((void*)0),                                                _while_condtional4) {
                                                    # 125 "./comelang2.h"
                                                    prev_it_20=it_19;
                                                    # 126 "./comelang2.h"
                                                    it_19=it_19->next;
                                                    # 127 "./comelang2.h"
                                                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1charphp_finalize"
                                                        # 0 "list_item$1charphp_finalize"
                                                        if(_if_conditional24=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional24) {
                                                            # 0 "list_item$1charphp_finalize"
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj13;
struct sType* __dec_obj14;
struct tuple2$2charphsTypeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1768 "./comelang2.h"
        __dec_obj13=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1769 "./comelang2.h"
        __dec_obj14=self->v2;
        self->v2=(struct sType*)come_increment_ref_count(v2);
        come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1771 "./comelang2.h"
        __result39__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result39__;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional31;
void* right_value60;
struct list_item$1tuple2$2charphsTypephph* litem_22;
struct tuple2$2charphsTypeph* __dec_obj15;
_Bool _if_conditional34;
void* right_value61;
struct list_item$1tuple2$2charphsTypephph* litem_23;
struct tuple2$2charphsTypeph* __dec_obj16;
void* right_value62;
struct list_item$1tuple2$2charphsTypephph* litem_24;
struct tuple2$2charphsTypeph* __dec_obj17;
struct list$1tuple2$2charphsTypephph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value61 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value62 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        # 256 "./comelang2.h"
        # 225 "./comelang2.h"
        if(_if_conditional31=self->len==0,        _if_conditional31) {
            # 226 "./comelang2.h"
            litem_22=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value60=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsTypephph"))));
            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "./comelang2.h"
            litem_22->prev=((void*)0);
            # 229 "./comelang2.h"
            litem_22->next=((void*)0);
            # 230 "./comelang2.h"
            __dec_obj15=litem_22->item;
            litem_22->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "./comelang2.h"
            self->tail=litem_22;
            # 233 "./comelang2.h"
            self->head=litem_22;
        }
        else {
            # 256 "./comelang2.h"
            # 235 "./comelang2.h"
            if(_if_conditional34=self->len==1,            _if_conditional34) {
                # 236 "./comelang2.h"
                litem_23=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value61=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "./comelang2.h"
                litem_23->prev=self->head;
                # 239 "./comelang2.h"
                litem_23->next=((void*)0);
                # 240 "./comelang2.h"
                __dec_obj16=litem_23->item;
                litem_23->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "./comelang2.h"
                self->tail=litem_23;
                # 243 "./comelang2.h"
                self->head->next=litem_23;
            }
            else {
                # 246 "./comelang2.h"
                litem_24=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value62=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "./comelang2.h"
                litem_24->prev=self->tail;
                # 249 "./comelang2.h"
                litem_24->next=((void*)0);
                # 250 "./comelang2.h"
                __dec_obj17=litem_24->item;
                litem_24->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "./comelang2.h"
                self->tail->next=litem_24;
                # 253 "./comelang2.h"
                self->tail=litem_24;
            }
        }
        # 256 "./comelang2.h"
        self->len++;
        # 258 "./comelang2.h"
        __result40__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result40__;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2charphsTypeph_finalize"
                # 0 "tuple2$2charphsTypeph_finalize"
                if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional32) {
                    # 0 "tuple2$2charphsTypeph_finalize"
                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple2$2charphsTypeph_finalize"
                # 1 "tuple2$2charphsTypeph_finalize"
                if(_if_conditional33=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional33) {
                    # 1 "tuple2$2charphsTypeph_finalize"
                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional35;
struct tuple2$2charphsTypeph* __result41__;
void* right_value63;
struct tuple2$2charphsTypeph* result_25;
_Bool _if_conditional36;
void* right_value64;
char* __dec_obj18;
_Bool _if_conditional37;
void* right_value100;
struct sType* __dec_obj42;
struct tuple2$2charphsTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
memset(&result_25, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value64 = (void*)0;
right_value100 = (void*)0;
        # 3 "tuple2$2charphsTypephp_clone"
        # 2 "tuple2$2charphsTypephp_clone"
        if(_if_conditional35=self==(void*)0,        _if_conditional35) {
            # 2 "tuple2$2charphsTypephp_clone"
            __result41__ = __result_obj__ = (void*)0;
            return __result41__;
        }
        # 3 "tuple2$2charphsTypephp_clone"
        result_25=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value63=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "tuple2$2charphsTypephp_clone"
        # 4 "tuple2$2charphsTypephp_clone"
        if(_if_conditional36=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional36) {
            # 4 "tuple2$2charphsTypephp_clone"
            __dec_obj18=result_25->v1;
            result_25->v1=(char*)come_increment_ref_count(((char*)(right_value64=string_clone(self->v1))));
            __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 6 "tuple2$2charphsTypephp_clone"
        # 5 "tuple2$2charphsTypephp_clone"
        if(_if_conditional37=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional37) {
            # 5 "tuple2$2charphsTypephp_clone"
            __dec_obj42=result_25->v2;
            result_25->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(self->v2))));
            come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "tuple2$2charphsTypephp_clone"
        __result60__ = __result_obj__ = result_25;
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_25, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result60__;
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional38;
struct sType* __result42__;
void* right_value65;
struct sType* result_26;
_Bool _if_conditional39;
_Bool _if_conditional40;
void* right_value72;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional44;
void* right_value75;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional48;
void* right_value76;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional49;
void* right_value77;
char* __dec_obj26;
_Bool _if_conditional50;
void* right_value78;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional51;
void* right_value86;
struct list$1sNodeph* __dec_obj31;
_Bool _if_conditional64;
_Bool _if_conditional65;
void* right_value87;
struct list$1sTypeph* __dec_obj32;
_Bool _if_conditional66;
void* right_value94;
struct list$1charph* __dec_obj36;
_Bool _if_conditional70;
void* right_value95;
struct tuple1$1sTypeph* __dec_obj37;
_Bool _if_conditional71;
_Bool _if_conditional72;
void* right_value96;
struct sNode* __dec_obj38;
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
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
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
void* right_value97;
struct sNode* __dec_obj39;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value98;
char* __dec_obj40;
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
void* right_value99;
char* __dec_obj41;
_Bool _if_conditional110;
struct sType* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
memset(&result_26, 0, sizeof(struct sType*));
right_value72 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
                # 3 "sType_clone"
                # 2 "sType_clone"
                if(_if_conditional38=self==(void*)0,                _if_conditional38) {
                    # 2 "sType_clone"
                    __result42__ = __result_obj__ = (void*)0;
                    return __result42__;
                }
                # 3 "sType_clone"
                result_26=(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer2(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional39=self!=((void*)0),                _if_conditional39) {
                    # 4 "sType_clone"
                    result_26->mClass=self->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional40=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional40) {
                    # 5 "sType_clone"
                    __dec_obj22=result_26->mMultipleTypes;
                    result_26->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value72=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional44=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional44) {
                    # 6 "sType_clone"
                    __dec_obj24=result_26->mNoSolvedGenericsType;
                    result_26->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value75=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 8 "sType_clone"
                # 7 "sType_clone"
                if(_if_conditional48=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional48) {
                    # 7 "sType_clone"
                    __dec_obj25=result_26->mOriginalLoadVarType;
                    result_26->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value76=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 9 "sType_clone"
                # 8 "sType_clone"
                if(_if_conditional49=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional49) {
                    # 8 "sType_clone"
                    __dec_obj26=result_26->mGenericsName;
                    result_26->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value77=string_clone(self->mGenericsName))));
                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sType_clone"
                # 9 "sType_clone"
                if(_if_conditional50=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional50) {
                    # 9 "sType_clone"
                    __dec_obj27=result_26->mGenericsTypes;
                    result_26->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value78=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 11 "sType_clone"
                # 10 "sType_clone"
                if(_if_conditional51=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional51) {
                    # 10 "sType_clone"
                    __dec_obj31=result_26->mArrayNum;
                    result_26->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value86=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 12 "sType_clone"
                # 11 "sType_clone"
                if(_if_conditional64=self!=((void*)0),                _if_conditional64) {
                    # 11 "sType_clone"
                    result_26->mOmitArrayNum=self->mOmitArrayNum;
                }
                # 13 "sType_clone"
                # 12 "sType_clone"
                if(_if_conditional65=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional65) {
                    # 12 "sType_clone"
                    __dec_obj32=result_26->mParamTypes;
                    result_26->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 14 "sType_clone"
                # 13 "sType_clone"
                if(_if_conditional66=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional66) {
                    # 13 "sType_clone"
                    __dec_obj36=result_26->mParamNames;
                    result_26->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 15 "sType_clone"
                # 14 "sType_clone"
                if(_if_conditional70=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional70) {
                    # 14 "sType_clone"
                    __dec_obj37=result_26->mResultType;
                    result_26->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 16 "sType_clone"
                # 15 "sType_clone"
                if(_if_conditional71=self!=((void*)0),                _if_conditional71) {
                    # 15 "sType_clone"
                    result_26->mVarArgs=self->mVarArgs;
                }
                # 17 "sType_clone"
                # 16 "sType_clone"
                if(_if_conditional72=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional72) {
                    # 16 "sType_clone"
                    __dec_obj38=result_26->mAlignas;
                    result_26->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=sNode_clone(self->mAlignas))));
                    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value96) { right_value96 = come_decrement_ref_count2(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 18 "sType_clone"
                # 17 "sType_clone"
                if(_if_conditional73=self!=((void*)0),                _if_conditional73) {
                    # 17 "sType_clone"
                    result_26->mUnsigned=self->mUnsigned;
                }
                # 19 "sType_clone"
                # 18 "sType_clone"
                if(_if_conditional74=self!=((void*)0),                _if_conditional74) {
                    # 18 "sType_clone"
                    result_26->mShort=self->mShort;
                }
                # 20 "sType_clone"
                # 19 "sType_clone"
                if(_if_conditional75=self!=((void*)0),                _if_conditional75) {
                    # 19 "sType_clone"
                    result_26->mLong=self->mLong;
                }
                # 21 "sType_clone"
                # 20 "sType_clone"
                if(_if_conditional76=self!=((void*)0),                _if_conditional76) {
                    # 20 "sType_clone"
                    result_26->mLongLong=self->mLongLong;
                }
                # 22 "sType_clone"
                # 21 "sType_clone"
                if(_if_conditional77=self!=((void*)0),                _if_conditional77) {
                    # 21 "sType_clone"
                    result_26->mConstant=self->mConstant;
                }
                # 23 "sType_clone"
                # 22 "sType_clone"
                if(_if_conditional78=self!=((void*)0),                _if_conditional78) {
                    # 22 "sType_clone"
                    result_26->mRegister=self->mRegister;
                }
                # 24 "sType_clone"
                # 23 "sType_clone"
                if(_if_conditional79=self!=((void*)0),                _if_conditional79) {
                    # 23 "sType_clone"
                    result_26->mVolatile=self->mVolatile;
                }
                # 25 "sType_clone"
                # 24 "sType_clone"
                if(_if_conditional80=self!=((void*)0),                _if_conditional80) {
                    # 24 "sType_clone"
                    result_26->mStatic=self->mStatic;
                }
                # 26 "sType_clone"
                # 25 "sType_clone"
                if(_if_conditional81=self!=((void*)0),                _if_conditional81) {
                    # 25 "sType_clone"
                    result_26->mExtern=self->mExtern;
                }
                # 27 "sType_clone"
                # 26 "sType_clone"
                if(_if_conditional82=self!=((void*)0),                _if_conditional82) {
                    # 26 "sType_clone"
                    result_26->mRestrict=self->mRestrict;
                }
                # 28 "sType_clone"
                # 27 "sType_clone"
                if(_if_conditional83=self!=((void*)0),                _if_conditional83) {
                    # 27 "sType_clone"
                    result_26->mImmutable=self->mImmutable;
                }
                # 29 "sType_clone"
                # 28 "sType_clone"
                if(_if_conditional84=self!=((void*)0),                _if_conditional84) {
                    # 28 "sType_clone"
                    result_26->mHeap=self->mHeap;
                }
                # 30 "sType_clone"
                # 29 "sType_clone"
                if(_if_conditional85=self!=((void*)0),                _if_conditional85) {
                    # 29 "sType_clone"
                    result_26->mDummyHeap=self->mDummyHeap;
                }
                # 31 "sType_clone"
                # 30 "sType_clone"
                if(_if_conditional86=self!=((void*)0),                _if_conditional86) {
                    # 30 "sType_clone"
                    result_26->mDelegate=self->mDelegate;
                }
                # 32 "sType_clone"
                # 31 "sType_clone"
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    # 31 "sType_clone"
                    result_26->mShare=self->mShare;
                }
                # 33 "sType_clone"
                # 32 "sType_clone"
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    # 32 "sType_clone"
                    result_26->mClone=self->mClone;
                }
                # 34 "sType_clone"
                # 33 "sType_clone"
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    # 33 "sType_clone"
                    result_26->mNoHeap=self->mNoHeap;
                }
                # 35 "sType_clone"
                # 34 "sType_clone"
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    # 34 "sType_clone"
                    result_26->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                # 36 "sType_clone"
                # 35 "sType_clone"
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    # 35 "sType_clone"
                    result_26->mRefference=self->mRefference;
                }
                # 37 "sType_clone"
                # 36 "sType_clone"
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    # 36 "sType_clone"
                    result_26->mException=self->mException;
                }
                # 38 "sType_clone"
                # 37 "sType_clone"
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    # 37 "sType_clone"
                    result_26->mPointerNum=self->mPointerNum;
                }
                # 39 "sType_clone"
                # 38 "sType_clone"
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    # 38 "sType_clone"
                    result_26->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                # 40 "sType_clone"
                # 39 "sType_clone"
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    # 39 "sType_clone"
                    result_26->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                # 41 "sType_clone"
                # 40 "sType_clone"
                if(_if_conditional96=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional96) {
                    # 40 "sType_clone"
                    __dec_obj39=result_26->mSizeNum;
                    result_26->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=sNode_clone(self->mSizeNum))));
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 42 "sType_clone"
                # 41 "sType_clone"
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    # 41 "sType_clone"
                    result_26->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                # 43 "sType_clone"
                # 42 "sType_clone"
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    # 42 "sType_clone"
                    result_26->mTypeOfExpression=self->mTypeOfExpression;
                }
                # 44 "sType_clone"
                # 43 "sType_clone"
                if(_if_conditional99=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional99) {
                    # 43 "sType_clone"
                    __dec_obj40=result_26->mOriginalTypeName;
                    result_26->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value98=string_clone(self->mOriginalTypeName))));
                    __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 45 "sType_clone"
                # 44 "sType_clone"
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    # 44 "sType_clone"
                    result_26->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                # 46 "sType_clone"
                # 45 "sType_clone"
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    # 45 "sType_clone"
                    result_26->mFunctionParam=self->mFunctionParam;
                }
                # 47 "sType_clone"
                # 46 "sType_clone"
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    # 46 "sType_clone"
                    result_26->mAllocaValue=self->mAllocaValue;
                }
                # 48 "sType_clone"
                # 47 "sType_clone"
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    # 47 "sType_clone"
                    result_26->mGenericsStruct=self->mGenericsStruct;
                }
                # 49 "sType_clone"
                # 48 "sType_clone"
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    # 48 "sType_clone"
                    result_26->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                # 50 "sType_clone"
                # 49 "sType_clone"
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    # 49 "sType_clone"
                    result_26->mComeMemCore=self->mComeMemCore;
                }
                # 51 "sType_clone"
                # 50 "sType_clone"
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    # 50 "sType_clone"
                    result_26->mInline=self->mInline;
                }
                # 52 "sType_clone"
                # 51 "sType_clone"
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    # 51 "sType_clone"
                    result_26->mNullValue=self->mNullValue;
                }
                # 53 "sType_clone"
                # 52 "sType_clone"
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    # 52 "sType_clone"
                    result_26->mGuardValue=self->mGuardValue;
                }
                # 54 "sType_clone"
                # 53 "sType_clone"
                if(_if_conditional109=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional109) {
                    # 53 "sType_clone"
                    __dec_obj41=result_26->mAsmName;
                    result_26->mAsmName=(char*)come_increment_ref_count(((char*)(right_value99=string_clone(self->mAsmName))));
                    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 55 "sType_clone"
                # 54 "sType_clone"
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    # 54 "sType_clone"
                    result_26->mArrayPointerType=self->mArrayPointerType;
                }
                # 55 "sType_clone"
                __result59__ = __result_obj__ = result_26;
                come_call_finalizer2(sType_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result59__;
                come_call_finalizer2(sType_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional41;
struct list$1sTypeph* __result43__;
void* right_value66;
void* right_value67;
struct list$1sTypeph* result_27;
struct list_item$1sTypeph* it_28;
_Bool _while_condtional5;
void* right_value71;
struct list$1sTypeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value67 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1sTypeph*));
memset(&it_28, 0, sizeof(struct list_item$1sTypeph*));
right_value71 = (void*)0;
                        # 142 "./comelang2.h"
                        # 139 "./comelang2.h"
                        if(_if_conditional41=self==((void*)0),                        _if_conditional41) {
                            # 140 "./comelang2.h"
                            __result43__ = __result_obj__ = ((void*)0);
                            return __result43__;
                        }
                        # 142 "./comelang2.h"
                        result_27=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value67=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value66=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./comelang2.h"
                        it_28=self->head;
                        # 151 "./comelang2.h"
                        while(_while_condtional5=it_28!=((void*)0),                        _while_condtional5) {
                            # 146 "./comelang2.h"
                            list$1sTypeph_add(result_27,(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(it_28->item)))));
                            come_call_finalizer2(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 148 "./comelang2.h"
                            it_28=it_28->next;
                        }
                        # 151 "./comelang2.h"
                        __result46__ = __result_obj__ = result_27;
                        come_call_finalizer2(list$1sTypephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result46__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./comelang2.h"
                            self->head=((void*)0);
                            # 105 "./comelang2.h"
                            self->tail=((void*)0);
                            # 106 "./comelang2.h"
                            self->len=0;
                            # 108 "./comelang2.h"
                            __result44__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result44__;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional42;
void* right_value68;
struct list_item$1sTypeph* litem_29;
struct sType* __dec_obj19;
_Bool _if_conditional43;
void* right_value69;
struct list_item$1sTypeph* litem_30;
struct sType* __dec_obj20;
void* right_value70;
struct list_item$1sTypeph* litem_31;
struct sType* __dec_obj21;
struct list$1sTypeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1sTypeph*));
right_value69 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1sTypeph*));
right_value70 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1sTypeph*));
                                # 186 "./comelang2.h"
                                # 155 "./comelang2.h"
                                if(_if_conditional42=self->len==0,                                _if_conditional42) {
                                    # 156 "./comelang2.h"
                                    litem_29=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value68=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./comelang2.h"
                                    litem_29->prev=((void*)0);
                                    # 159 "./comelang2.h"
                                    litem_29->next=((void*)0);
                                    # 160 "./comelang2.h"
                                    __dec_obj19=litem_29->item;
                                    litem_29->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 162 "./comelang2.h"
                                    self->tail=litem_29;
                                    # 163 "./comelang2.h"
                                    self->head=litem_29;
                                }
                                else {
                                    # 186 "./comelang2.h"
                                    # 165 "./comelang2.h"
                                    if(_if_conditional43=self->len==1,                                    _if_conditional43) {
                                        # 166 "./comelang2.h"
                                        litem_30=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value69=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./comelang2.h"
                                        litem_30->prev=self->head;
                                        # 169 "./comelang2.h"
                                        litem_30->next=((void*)0);
                                        # 170 "./comelang2.h"
                                        __dec_obj20=litem_30->item;
                                        litem_30->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 172 "./comelang2.h"
                                        self->tail=litem_30;
                                        # 173 "./comelang2.h"
                                        self->head->next=litem_30;
                                    }
                                    else {
                                        # 176 "./comelang2.h"
                                        litem_31=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value70=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./comelang2.h"
                                        litem_31->prev=self->tail;
                                        # 179 "./comelang2.h"
                                        litem_31->next=((void*)0);
                                        # 180 "./comelang2.h"
                                        __dec_obj21=litem_31->item;
                                        litem_31->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 182 "./comelang2.h"
                                        self->tail->next=litem_31;
                                        # 183 "./comelang2.h"
                                        self->tail=litem_31;
                                    }
                                }
                                # 186 "./comelang2.h"
                                self->len++;
                                # 188 "./comelang2.h"
                                __result45__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result45__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct tuple1$1sTypeph* __result47__;
void* right_value73;
struct tuple1$1sTypeph* result_32;
_Bool _if_conditional47;
void* right_value74;
struct sType* __dec_obj23;
struct tuple1$1sTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
memset(&result_32, 0, sizeof(struct tuple1$1sTypeph*));
right_value74 = (void*)0;
                        # 3 "tuple1$1sTypephp_clone"
                        # 2 "tuple1$1sTypephp_clone"
                        if(_if_conditional45=self==(void*)0,                        _if_conditional45) {
                            # 2 "tuple1$1sTypephp_clone"
                            __result47__ = __result_obj__ = (void*)0;
                            return __result47__;
                        }
                        # 3 "tuple1$1sTypephp_clone"
                        result_32=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value73=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple1$1sTypephp_clone"
                        # 4 "tuple1$1sTypephp_clone"
                        if(_if_conditional47=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional47) {
                            # 4 "tuple1$1sTypephp_clone"
                            __dec_obj23=result_32->v1;
                            result_32->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 5 "tuple1$1sTypephp_clone"
                        __result48__ = __result_obj__ = result_32;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_32, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result48__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypeph_finalize"
                            # 0 "tuple1$1sTypeph_finalize"
                            if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional46) {
                                # 0 "tuple1$1sTypeph_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional52;
struct list$1sNodeph* __result49__;
void* right_value79;
void* right_value80;
struct list$1sNodeph* result_33;
struct list_item$1sNodeph* it_34;
_Bool _while_condtional6;
void* right_value85;
struct list$1sNodeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&result_33, 0, sizeof(struct list$1sNodeph*));
memset(&it_34, 0, sizeof(struct list_item$1sNodeph*));
right_value85 = (void*)0;
                        # 142 "./comelang2.h"
                        # 139 "./comelang2.h"
                        if(_if_conditional52=self==((void*)0),                        _if_conditional52) {
                            # 140 "./comelang2.h"
                            __result49__ = __result_obj__ = ((void*)0);
                            return __result49__;
                        }
                        # 142 "./comelang2.h"
                        result_33=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value80=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value79=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./comelang2.h"
                        it_34=self->head;
                        # 151 "./comelang2.h"
                        while(_while_condtional6=it_34!=((void*)0),                        _while_condtional6) {
                            # 146 "./comelang2.h"
                            list$1sNodeph_add(result_33,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(it_34->item)))));
                            if(right_value85) { right_value85 = come_decrement_ref_count2(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 148 "./comelang2.h"
                            it_34=it_34->next;
                        }
                        # 151 "./comelang2.h"
                        __result54__ = __result_obj__ = result_33;
                        come_call_finalizer2(list$1sNodephp_finalize,result_33, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result54__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./comelang2.h"
                            self->head=((void*)0);
                            # 105 "./comelang2.h"
                            self->tail=((void*)0);
                            # 106 "./comelang2.h"
                            self->len=0;
                            # 108 "./comelang2.h"
                            __result50__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result50__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional53;
void* right_value81;
struct list_item$1sNodeph* litem_35;
struct sNode* __dec_obj28;
_Bool _if_conditional54;
void* right_value82;
struct list_item$1sNodeph* litem_36;
struct sNode* __dec_obj29;
void* right_value83;
struct list_item$1sNodeph* litem_37;
struct sNode* __dec_obj30;
struct list$1sNodeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1sNodeph*));
right_value82 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1sNodeph*));
right_value83 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1sNodeph*));
                                # 186 "./comelang2.h"
                                # 155 "./comelang2.h"
                                if(_if_conditional53=self->len==0,                                _if_conditional53) {
                                    # 156 "./comelang2.h"
                                    litem_35=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value81=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./comelang2.h"
                                    litem_35->prev=((void*)0);
                                    # 159 "./comelang2.h"
                                    litem_35->next=((void*)0);
                                    # 160 "./comelang2.h"
                                    __dec_obj28=litem_35->item;
                                    litem_35->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 162 "./comelang2.h"
                                    self->tail=litem_35;
                                    # 163 "./comelang2.h"
                                    self->head=litem_35;
                                }
                                else {
                                    # 186 "./comelang2.h"
                                    # 165 "./comelang2.h"
                                    if(_if_conditional54=self->len==1,                                    _if_conditional54) {
                                        # 166 "./comelang2.h"
                                        litem_36=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value82=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./comelang2.h"
                                        litem_36->prev=self->head;
                                        # 169 "./comelang2.h"
                                        litem_36->next=((void*)0);
                                        # 170 "./comelang2.h"
                                        __dec_obj29=litem_36->item;
                                        litem_36->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 172 "./comelang2.h"
                                        self->tail=litem_36;
                                        # 173 "./comelang2.h"
                                        self->head->next=litem_36;
                                    }
                                    else {
                                        # 176 "./comelang2.h"
                                        litem_37=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value83=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./comelang2.h"
                                        litem_37->prev=self->tail;
                                        # 179 "./comelang2.h"
                                        litem_37->next=((void*)0);
                                        # 180 "./comelang2.h"
                                        __dec_obj30=litem_37->item;
                                        litem_37->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 182 "./comelang2.h"
                                        self->tail->next=litem_37;
                                        # 183 "./comelang2.h"
                                        self->tail=litem_37;
                                    }
                                }
                                # 186 "./comelang2.h"
                                self->len++;
                                # 188 "./comelang2.h"
                                __result51__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result51__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional55;
struct sNode* __result52__;
void* right_value84;
struct sNode* result_38;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
struct sNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&result_38, 0, sizeof(struct sNode*));
                                # 3 "sNode_clone"
                                # 2 "sNode_clone"
                                if(_if_conditional55=self==(void*)0,                                _if_conditional55) {
                                    # 2 "sNode_clone"
                                    __result52__ = __result_obj__ = (void*)0;
                                    return __result52__;
                                }
                                # 3 "sNode_clone"
                                result_38=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 5 "sNode_clone"
                                # 4 "sNode_clone"
                                if(_if_conditional56=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional56) {
                                    # 4 "sNode_clone"
                                    result_38->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                # 6 "sNode_clone"
                                # 5 "sNode_clone"
                                if(_if_conditional57=self!=((void*)0),                                _if_conditional57) {
                                    # 5 "sNode_clone"
                                    result_38->finalize=self->finalize;
                                }
                                # 7 "sNode_clone"
                                # 6 "sNode_clone"
                                if(_if_conditional58=self!=((void*)0),                                _if_conditional58) {
                                    # 6 "sNode_clone"
                                    result_38->clone=self->clone;
                                }
                                # 8 "sNode_clone"
                                # 7 "sNode_clone"
                                if(_if_conditional59=self!=((void*)0),                                _if_conditional59) {
                                    # 7 "sNode_clone"
                                    result_38->compile=self->compile;
                                }
                                # 9 "sNode_clone"
                                # 8 "sNode_clone"
                                if(_if_conditional60=self!=((void*)0),                                _if_conditional60) {
                                    # 8 "sNode_clone"
                                    result_38->sline=self->sline;
                                }
                                # 10 "sNode_clone"
                                # 9 "sNode_clone"
                                if(_if_conditional61=self!=((void*)0),                                _if_conditional61) {
                                    # 9 "sNode_clone"
                                    result_38->sname=self->sname;
                                }
                                # 11 "sNode_clone"
                                # 10 "sNode_clone"
                                if(_if_conditional62=self!=((void*)0),                                _if_conditional62) {
                                    # 10 "sNode_clone"
                                    result_38->terminated=self->terminated;
                                }
                                # 12 "sNode_clone"
                                # 11 "sNode_clone"
                                if(_if_conditional63=self!=((void*)0),                                _if_conditional63) {
                                    # 11 "sNode_clone"
                                    result_38->kind=self->kind;
                                }
                                # 12 "sNode_clone"
                                __result53__ = __result_obj__ = result_38;
                                if(result_38) { result_38 = come_decrement_ref_count2(result_38, ((struct sNode*)result_38)->finalize, ((struct sNode*)result_38)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result53__;
                                if(result_38) { result_38 = come_decrement_ref_count2(result_38, ((struct sNode*)result_38)->finalize, ((struct sNode*)result_38)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional67;
struct list$1charph* __result55__;
void* right_value88;
void* right_value89;
struct list$1charph* result_39;
struct list_item$1charph* it_40;
_Bool _while_condtional7;
void* right_value93;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_39, 0, sizeof(struct list$1charph*));
memset(&it_40, 0, sizeof(struct list_item$1charph*));
right_value93 = (void*)0;
                        # 142 "./comelang2.h"
                        # 139 "./comelang2.h"
                        if(_if_conditional67=self==((void*)0),                        _if_conditional67) {
                            # 140 "./comelang2.h"
                            __result55__ = __result_obj__ = ((void*)0);
                            return __result55__;
                        }
                        # 142 "./comelang2.h"
                        result_39=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./comelang2.h"
                        it_40=self->head;
                        # 151 "./comelang2.h"
                        while(_while_condtional7=it_40!=((void*)0),                        _while_condtional7) {
                            # 146 "./comelang2.h"
                            list$1charph_add(result_39,(char*)come_increment_ref_count(((char*)(right_value93=string_clone(it_40->item)))));
                            right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 148 "./comelang2.h"
                            it_40=it_40->next;
                        }
                        # 151 "./comelang2.h"
                        __result58__ = __result_obj__ = result_39;
                        come_call_finalizer2(list$1charphp_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result58__;
                        come_call_finalizer2(list$1charphp_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./comelang2.h"
                            self->head=((void*)0);
                            # 105 "./comelang2.h"
                            self->tail=((void*)0);
                            # 106 "./comelang2.h"
                            self->len=0;
                            # 108 "./comelang2.h"
                            __result56__ = __result_obj__ = self;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result56__;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional68;
void* right_value90;
struct list_item$1charph* litem_41;
char* __dec_obj33;
_Bool _if_conditional69;
void* right_value91;
struct list_item$1charph* litem_42;
char* __dec_obj34;
void* right_value92;
struct list_item$1charph* litem_43;
char* __dec_obj35;
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&litem_41, 0, sizeof(struct list_item$1charph*));
right_value91 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1charph*));
right_value92 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1charph*));
                                # 186 "./comelang2.h"
                                # 155 "./comelang2.h"
                                if(_if_conditional68=self->len==0,                                _if_conditional68) {
                                    # 156 "./comelang2.h"
                                    litem_41=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./comelang2.h"
                                    litem_41->prev=((void*)0);
                                    # 159 "./comelang2.h"
                                    litem_41->next=((void*)0);
                                    # 160 "./comelang2.h"
                                    __dec_obj33=litem_41->item;
                                    litem_41->item=(char*)come_increment_ref_count(item);
                                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 162 "./comelang2.h"
                                    self->tail=litem_41;
                                    # 163 "./comelang2.h"
                                    self->head=litem_41;
                                }
                                else {
                                    # 186 "./comelang2.h"
                                    # 165 "./comelang2.h"
                                    if(_if_conditional69=self->len==1,                                    _if_conditional69) {
                                        # 166 "./comelang2.h"
                                        litem_42=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./comelang2.h"
                                        litem_42->prev=self->head;
                                        # 169 "./comelang2.h"
                                        litem_42->next=((void*)0);
                                        # 170 "./comelang2.h"
                                        __dec_obj34=litem_42->item;
                                        litem_42->item=(char*)come_increment_ref_count(item);
                                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 172 "./comelang2.h"
                                        self->tail=litem_42;
                                        # 173 "./comelang2.h"
                                        self->head->next=litem_42;
                                    }
                                    else {
                                        # 176 "./comelang2.h"
                                        litem_43=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./comelang2.h"
                                        litem_43->prev=self->tail;
                                        # 179 "./comelang2.h"
                                        litem_43->next=((void*)0);
                                        # 180 "./comelang2.h"
                                        __dec_obj35=litem_43->item;
                                        litem_43->item=(char*)come_increment_ref_count(item);
                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 182 "./comelang2.h"
                                        self->tail->next=litem_43;
                                        # 183 "./comelang2.h"
                                        self->tail=litem_43;
                                    }
                                }
                                # 186 "./comelang2.h"
                                self->len++;
                                # 188 "./comelang2.h"
                                __result57__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result57__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional111;
char* result_47;
char* __result61__;
_Bool _if_conditional112;
char* __result62__;
char* result_48;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_47, 0, sizeof(char*));
memset(&result_48, 0, sizeof(char*));
            # 1304 "./comelang2.h"
            # 1299 "./comelang2.h"
            if(_if_conditional111=self==((void*)0),            _if_conditional111) {
                # 1300 "./comelang2.h"
                # 1301 "./comelang2.h"
                memset(&result_47,0,sizeof(char*));
                # 1302 "./comelang2.h"
                __result61__ = __result_obj__ = result_47;
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
            memset(&result_48,0,sizeof(char*));
            # 1312 "./comelang2.h"
            __result63__ = __result_obj__ = result_48;
            return __result63__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1333 "./comelang2.h"
            __result64__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            return __result64__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional113;
char* result_50;
char* __result65__;
_Bool _if_conditional114;
char* __result66__;
char* result_51;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_50, 0, sizeof(char*));
memset(&result_51, 0, sizeof(char*));
            # 1321 "./comelang2.h"
            # 1316 "./comelang2.h"
            if(_if_conditional113=self==((void*)0)||self->key_list->it==((void*)0),            _if_conditional113) {
                # 1317 "./comelang2.h"
                # 1318 "./comelang2.h"
                memset(&result_50,0,sizeof(char*));
                # 1319 "./comelang2.h"
                __result65__ = __result_obj__ = result_50;
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
            memset(&result_51,0,sizeof(char*));
            # 1329 "./comelang2.h"
            __result67__ = __result_obj__ = result_51;
            return __result67__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_53;
unsigned int hash_54;
unsigned int it_55;
_Bool _while_condtional8;
_Bool _if_conditional115;
_Bool _if_conditional116;
struct sVar* __result68__;
_Bool _if_conditional121;
_Bool _if_conditional122;
struct sVar* __result69__;
struct sVar* __result70__;
struct sVar* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_53, 0, sizeof(struct sVar*));
memset(&hash_54, 0, sizeof(unsigned int));
memset(&it_55, 0, sizeof(unsigned int));
                # 1545 "./comelang2.h"
                # 1546 "./comelang2.h"
                memset(&default_value_53,0,sizeof(struct sVar*));
                # 1548 "./comelang2.h"
                hash_54=string_get_hash_key(((char*)key))%self->size;
                # 1549 "./comelang2.h"
                it_55=hash_54;
                # 1573 "./comelang2.h"
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    # 1571 "./comelang2.h"
                    # 1552 "./comelang2.h"
                    if(_if_conditional115=self->item_existance[it_55],                    _if_conditional115) {
                        # 1559 "./comelang2.h"
                        # 1554 "./comelang2.h"
                        if(_if_conditional116=string_equals(self->keys[it_55],key),                        _if_conditional116) {
                            # 1556 "./comelang2.h"
                            __result68__ = __result_obj__ = self->items[it_55];
                            come_call_finalizer2(sVar_finalize,default_value_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result68__;
                        }
                        # 1559 "./comelang2.h"
                        it_55++;
                        # 1567 "./comelang2.h"
                        # 1561 "./comelang2.h"
                        if(_if_conditional121=it_55>=self->size,                        _if_conditional121) {
                            # 1562 "./comelang2.h"
                            it_55=0;
                        }
                        else {
                            # 1567 "./comelang2.h"
                            # 1564 "./comelang2.h"
                            if(_if_conditional122=it_55==hash_54,                            _if_conditional122) {
                                # 1565 "./comelang2.h"
                                __result69__ = __result_obj__ = default_value_53;
                                come_call_finalizer2(sVar_finalize,default_value_53, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result69__;
                            }
                        }
                    }
                    else {
                        # 1569 "./comelang2.h"
                        __result70__ = __result_obj__ = default_value_53;
                        come_call_finalizer2(sVar_finalize,default_value_53, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result70__;
                    }
                }
                # 1573 "./comelang2.h"
                __result71__ = __result_obj__ = default_value_53;
                come_call_finalizer2(sVar_finalize,default_value_53, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result71__;
                come_call_finalizer2(sVar_finalize,default_value_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sVar_finalize"
                                # 0 "sVar_finalize"
                                if(_if_conditional117=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional117) {
                                    # 0 "sVar_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sVar_finalize"
                                # 1 "sVar_finalize"
                                if(_if_conditional118=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional118) {
                                    # 1 "sVar_finalize"
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sVar_finalize"
                                # 2 "sVar_finalize"
                                if(_if_conditional119=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional119) {
                                    # 2 "sVar_finalize"
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sVar_finalize"
                                # 3 "sVar_finalize"
                                if(_if_conditional120=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional120) {
                                    # 3 "sVar_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional128;
int __result72__;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 367 "./comelang2.h"
                                    # 364 "./comelang2.h"
                                    if(_if_conditional128=self==((void*)0),                                    _if_conditional128) {
                                        # 365 "./comelang2.h"
                                        __result72__ = 0;
                                        return __result72__;
                                    }
                                    # 367 "./comelang2.h"
                                    __result73__ = self->len;
                                    return __result73__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_60;
_Bool _while_condtional9;
struct list_item$1sNodeph* prev_it_61;
struct list$1sNodeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_61, 0, sizeof(struct list_item$1sNodeph*));
                                        # 433 "./comelang2.h"
                                        it_60=self->head;
                                        # 440 "./comelang2.h"
                                        while(_while_condtional9=it_60!=((void*)0),                                        _while_condtional9) {
                                            # 435 "./comelang2.h"
                                            prev_it_61=it_60;
                                            # 436 "./comelang2.h"
                                            it_60=it_60->next;
                                            # 437 "./comelang2.h"
                                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 440 "./comelang2.h"
                                        self->head=((void*)0);
                                        # 441 "./comelang2.h"
                                        self->tail=((void*)0);
                                        # 443 "./comelang2.h"
                                        self->len=0;
                                        # 445 "./comelang2.h"
                                        __result74__ = __result_obj__ = self;
                                        return __result74__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_63;
_Bool _if_conditional130;
_Bool _if_conditional131;
int i_64;
_Bool _if_conditional132;
_Bool _if_conditional133;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_63, 0, sizeof(int));
memset(&i_64, 0, sizeof(int));
            # 1137 "./comelang2.h"
            for(            i_63=0;            i_63<self->size;            i_63++            ){
                # 1136 "./comelang2.h"
                # 1131 "./comelang2.h"
                if(_if_conditional130=self->item_existance[i_63],                _if_conditional130) {
                    # 1135 "./comelang2.h"
                    # 1132 "./comelang2.h"
                    if(_if_conditional131=1,                    _if_conditional131) {
                        # 1133 "./comelang2.h"
                        come_call_finalizer2(sVar_finalize,self->items[i_63], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1137 "./comelang2.h"
            come_free((char*)self->items);
            # 1146 "./comelang2.h"
            for(            i_64=0;            i_64<self->size;            i_64++            ){
                # 1145 "./comelang2.h"
                # 1140 "./comelang2.h"
                if(_if_conditional132=self->item_existance[i_64],                _if_conditional132) {
                    # 1144 "./comelang2.h"
                    # 1141 "./comelang2.h"
                    if(_if_conditional133=1,                    _if_conditional133) {
                        # 1142 "./comelang2.h"
                        self->keys[i_64] = come_decrement_ref_count2(self->keys[i_64], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1146 "./comelang2.h"
            come_free((char*)self->keys);
            # 1148 "./comelang2.h"
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1150 "./comelang2.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_65;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_66;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_65, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_66, 0, sizeof(struct list_item$1charp*));
                # 123 "./comelang2.h"
                it_65=self->head;
                # 129 "./comelang2.h"
                while(_while_condtional10=it_65!=((void*)0),                _while_condtional10) {
                    # 125 "./comelang2.h"
                    prev_it_66=it_65;
                    # 126 "./comelang2.h"
                    it_65=it_65->next;
                    # 127 "./comelang2.h"
                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional134;
unsigned int hash_84;
unsigned int it_85;
_Bool _while_condtional13;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool same_key_exist_102;
char* it2_105;
_Bool _if_conditional177;
_Bool _if_conditional178;
struct map$2charphsClassph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_84, 0, sizeof(unsigned int));
memset(&it_85, 0, sizeof(unsigned int));
memset(&same_key_exist_102, 0, sizeof(_Bool));
memset(&it2_105, 0, sizeof(char*));
        # 1393 "./comelang2.h"
        # 1390 "./comelang2.h"
        if(_if_conditional134=self->len*10>=self->size,        _if_conditional134) {
            # 1391 "./comelang2.h"
            map$2charphsClassph_rehash(self);
        }
        # 1393 "./comelang2.h"
        hash_84=string_get_hash_key(key)%self->size;
        # 1394 "./comelang2.h"
        it_85=hash_84;
        # 1452 "./comelang2.h"
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            # 1450 "./comelang2.h"
            # 1397 "./comelang2.h"
            if(_if_conditional146=self->item_existance[it_85],            _if_conditional146) {
                # 1420 "./comelang2.h"
                # 1399 "./comelang2.h"
                if(_if_conditional147=string_equals(self->keys[it_85],key),                _if_conditional147) {
                    # 1410 "./comelang2.h"
                    # 1401 "./comelang2.h"
                    if(_if_conditional148=1,                    _if_conditional148) {
                        # 1402 "./comelang2.h"
                        list$1charp_remove(self->key_list,self->keys[it_85]);
                        # 1403 "./comelang2.h"
                        self->keys[it_85] = come_decrement_ref_count2(self->keys[it_85], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1404 "./comelang2.h"
                        self->keys[it_85]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1407 "./comelang2.h"
                        list$1charp_remove(self->key_list,self->keys[it_85]);
                        # 1408 "./comelang2.h"
                        self->keys[it_85]=key;
                    }
                    # 1417 "./comelang2.h"
                    # 1410 "./comelang2.h"
                    if(_if_conditional168=1,                    _if_conditional168) {
                        # 1411 "./comelang2.h"
                        come_call_finalizer2(sClass_finalize,self->items[it_85], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 1412 "./comelang2.h"
                        self->items[it_85]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1415 "./comelang2.h"
                        self->items[it_85]=item;
                    }
                    # 1417 "./comelang2.h"
                    break;
                }
                # 1420 "./comelang2.h"
                it_85++;
                # 1430 "./comelang2.h"
                # 1422 "./comelang2.h"
                if(_if_conditional169=it_85>=self->size,                _if_conditional169) {
                    # 1423 "./comelang2.h"
                    it_85=0;
                }
                else {
                    # 1430 "./comelang2.h"
                    # 1425 "./comelang2.h"
                    if(_if_conditional170=it_85==hash_84,                    _if_conditional170) {
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
                self->item_existance[it_85]=(_Bool)1;
                # 1439 "./comelang2.h"
                # 1433 "./comelang2.h"
                if(_if_conditional171=1,                _if_conditional171) {
                    # 1434 "./comelang2.h"
                    self->keys[it_85]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1437 "./comelang2.h"
                    self->keys[it_85]=key;
                }
                # 1446 "./comelang2.h"
                # 1439 "./comelang2.h"
                if(_if_conditional172=1,                _if_conditional172) {
                    # 1440 "./comelang2.h"
                    self->items[it_85]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    # 1443 "./comelang2.h"
                    self->items[it_85]=item;
                }
                # 1446 "./comelang2.h"
                self->len++;
                # 1448 "./comelang2.h"
                break;
            }
        }
        # 1452 "./comelang2.h"
        same_key_exist_102=(_Bool)0;
        # 1461 "./comelang2.h"
        for(        it2_105=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_105=list$1charp_next(self->key_list)        ){
            # 1459 "./comelang2.h"
            # 1455 "./comelang2.h"
            if(_if_conditional177=string_equals(it2_105,key),            _if_conditional177) {
                # 1456 "./comelang2.h"
                puts("SAME KEY");
                # 1457 "./comelang2.h"
                same_key_exist_102=(_Bool)1;
            }
        }
        # 1465 "./comelang2.h"
        # 1461 "./comelang2.h"
        if(_if_conditional178=!same_key_exist_102,        _if_conditional178) {
            # 1462 "./comelang2.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1465 "./comelang2.h"
        __result98__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result98__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_67;
void* right_value118;
char** keys_68;
void* right_value119;
struct sClass** items_69;
void* right_value120;
_Bool* item_existance_70;
int len_71;
char* it_74;
struct sClass* default_value_77;
struct sClass* it2_80;
unsigned int hash_81;
int n_82;
_Bool _while_condtional12;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct sClass* default_value_83;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_67, 0, sizeof(int));
right_value118 = (void*)0;
memset(&keys_68, 0, sizeof(char**));
right_value119 = (void*)0;
memset(&items_69, 0, sizeof(struct sClass**));
right_value120 = (void*)0;
memset(&item_existance_70, 0, sizeof(_Bool*));
memset(&len_71, 0, sizeof(int));
memset(&it_74, 0, sizeof(char*));
memset(&default_value_77, 0, sizeof(struct sClass*));
memset(&it2_80, 0, sizeof(struct sClass*));
memset(&hash_81, 0, sizeof(unsigned int));
memset(&n_82, 0, sizeof(int));
memset(&default_value_83, 0, sizeof(struct sClass*));
                # 1337 "./comelang2.h"
                size_67=self->size*10;
                # 1338 "./comelang2.h"
                keys_68=(char**)come_increment_ref_count(((char**)(right_value118=(char**)come_calloc(1, sizeof(char*)*(1*(size_67)), "./comelang2.h", 1338, "char*%"))));
                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1339 "./comelang2.h"
                items_69=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value119=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_67)), "./comelang2.h", 1339, "sClass*%"))));
                come_call_finalizer2(sClass_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1340 "./comelang2.h"
                item_existance_70=(_Bool*)come_increment_ref_count(((_Bool*)(right_value120=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_67)), "./comelang2.h", 1340, "bool"))));
                right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1342 "./comelang2.h"
                len_71=0;
                # 1377 "./comelang2.h"
                for(                it_74=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_74=map$2charphsClassph_next(self)                ){
                    # 1345 "./comelang2.h"
                    # 1346 "./comelang2.h"
                    memset(&default_value_77,0,sizeof(struct sClass*));
                    # 1347 "./comelang2.h"
                    it2_80=map$2charphsClassph_at(self,it_74,default_value_77);
                    # 1348 "./comelang2.h"
                    hash_81=string_get_hash_key(it_74)%size_67;
                    # 1349 "./comelang2.h"
                    n_82=hash_81;
                    # 1375 "./comelang2.h"
                    while(_while_condtional12=(_Bool)1,                    _while_condtional12) {
                        # 1374 "./comelang2.h"
                        # 1352 "./comelang2.h"
                        if(_if_conditional143=item_existance_70[n_82],                        _if_conditional143) {
                            # 1354 "./comelang2.h"
                            n_82++;
                            # 1364 "./comelang2.h"
                            # 1356 "./comelang2.h"
                            if(_if_conditional144=n_82>=size_67,                            _if_conditional144) {
                                # 1357 "./comelang2.h"
                                n_82=0;
                            }
                            else {
                                # 1364 "./comelang2.h"
                                # 1359 "./comelang2.h"
                                if(_if_conditional145=n_82==hash_81,                                _if_conditional145) {
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
                            item_existance_70[n_82]=(_Bool)1;
                            # 1367 "./comelang2.h"
                            keys_68[n_82]=it_74;
                            # 1368 "./comelang2.h"
                            # 1369 "./comelang2.h"
                            items_69[n_82]=map$2charphsClassph_at(self,it_74,default_value_83);
                            # 1371 "./comelang2.h"
                            len_71++;
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
                self->keys=keys_68;
                # 1382 "./comelang2.h"
                self->items=items_69;
                # 1383 "./comelang2.h"
                self->item_existance=item_existance_70;
                # 1385 "./comelang2.h"
                self->size=size_67;
                # 1386 "./comelang2.h"
                self->len=len_71;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional135;
char* result_72;
char* __result75__;
_Bool _if_conditional136;
char* __result76__;
char* result_73;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                    # 1304 "./comelang2.h"
                    # 1299 "./comelang2.h"
                    if(_if_conditional135=self==((void*)0),                    _if_conditional135) {
                        # 1300 "./comelang2.h"
                        # 1301 "./comelang2.h"
                        memset(&result_72,0,sizeof(char*));
                        # 1302 "./comelang2.h"
                        __result75__ = __result_obj__ = result_72;
                        return __result75__;
                    }
                    # 1304 "./comelang2.h"
                    self->key_list->it=self->key_list->head;
                    # 1310 "./comelang2.h"
                    # 1306 "./comelang2.h"
                    if(self->key_list->it) {
                        # 1307 "./comelang2.h"
                        __result76__ = __result_obj__ = self->key_list->it->item;
                        return __result76__;
                    }
                    # 1310 "./comelang2.h"
                    # 1311 "./comelang2.h"
                    memset(&result_73,0,sizeof(char*));
                    # 1312 "./comelang2.h"
                    __result77__ = __result_obj__ = result_73;
                    return __result77__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1333 "./comelang2.h"
                    __result78__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result78__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional137;
char* result_75;
char* __result79__;
_Bool _if_conditional138;
char* __result80__;
char* result_76;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_75, 0, sizeof(char*));
memset(&result_76, 0, sizeof(char*));
                    # 1321 "./comelang2.h"
                    # 1316 "./comelang2.h"
                    if(_if_conditional137=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional137) {
                        # 1317 "./comelang2.h"
                        # 1318 "./comelang2.h"
                        memset(&result_75,0,sizeof(char*));
                        # 1319 "./comelang2.h"
                        __result79__ = __result_obj__ = result_75;
                        return __result79__;
                    }
                    # 1321 "./comelang2.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1327 "./comelang2.h"
                    # 1323 "./comelang2.h"
                    if(self->key_list->it) {
                        # 1324 "./comelang2.h"
                        __result80__ = __result_obj__ = self->key_list->it->item;
                        return __result80__;
                    }
                    # 1327 "./comelang2.h"
                    # 1328 "./comelang2.h"
                    memset(&result_76,0,sizeof(char*));
                    # 1329 "./comelang2.h"
                    __result81__ = __result_obj__ = result_76;
                    return __result81__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_78;
unsigned int it_79;
_Bool _while_condtional11;
_Bool _if_conditional139;
_Bool _if_conditional140;
struct sClass* __result82__;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct sClass* __result83__;
struct sClass* __result84__;
struct sClass* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_78, 0, sizeof(unsigned int));
memset(&it_79, 0, sizeof(unsigned int));
                        # 1226 "./comelang2.h"
                        hash_78=string_get_hash_key(((char*)key))%self->size;
                        # 1227 "./comelang2.h"
                        it_79=hash_78;
                        # 1251 "./comelang2.h"
                        while(_while_condtional11=(_Bool)1,                        _while_condtional11) {
                            # 1249 "./comelang2.h"
                            # 1230 "./comelang2.h"
                            if(_if_conditional139=self->item_existance[it_79],                            _if_conditional139) {
                                # 1237 "./comelang2.h"
                                # 1232 "./comelang2.h"
                                if(_if_conditional140=string_equals(self->keys[it_79],key),                                _if_conditional140) {
                                    # 1234 "./comelang2.h"
                                    __result82__ = __result_obj__ = self->items[it_79];
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result82__;
                                }
                                # 1237 "./comelang2.h"
                                it_79++;
                                # 1245 "./comelang2.h"
                                # 1239 "./comelang2.h"
                                if(_if_conditional141=it_79>=self->size,                                _if_conditional141) {
                                    # 1240 "./comelang2.h"
                                    it_79=0;
                                }
                                else {
                                    # 1245 "./comelang2.h"
                                    # 1242 "./comelang2.h"
                                    if(_if_conditional142=it_79==hash_78,                                    _if_conditional142) {
                                        # 1243 "./comelang2.h"
                                        __result83__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result83__;
                                    }
                                }
                            }
                            else {
                                # 1247 "./comelang2.h"
                                __result84__ = __result_obj__ = default_value;
                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result84__;
                            }
                        }
                        # 1251 "./comelang2.h"
                        __result85__ = __result_obj__ = default_value;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result85__;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_86;
struct list_item$1charp* it_87;
_Bool _while_condtional14;
_Bool _if_conditional149;
struct list$1charp* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_86, 0, sizeof(int));
memset(&it_87, 0, sizeof(struct list_item$1charp*));
                            # 448 "./comelang2.h"
                            it2_86=0;
                            # 449 "./comelang2.h"
                            it_87=self->head;
                            # 460 "./comelang2.h"
                            while(_while_condtional14=it_87!=((void*)0),                            _while_condtional14) {
                                # 455 "./comelang2.h"
                                # 451 "./comelang2.h"
                                if(_if_conditional149=string_equals(it_87->item,item),                                _if_conditional149) {
                                    # 452 "./comelang2.h"
                                    list$1charp_delete(self,it2_86,it2_86+1);
                                    # 453 "./comelang2.h"
                                    break;
                                }
                                # 455 "./comelang2.h"
                                it2_86++;
                                # 457 "./comelang2.h"
                                it_87=it_87->next;
                            }
                            # 460 "./comelang2.h"
                            __result89__ = __result_obj__ = self;
                            return __result89__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
int tmp_88;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct list$1charp* __result86__;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct list_item$1charp* it_91;
int i_92;
_Bool _while_condtional16;
_Bool _if_conditional158;
struct list_item$1charp* prev_it_93;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct list_item$1charp* it_94;
int i_95;
_Bool _while_condtional17;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct list_item$1charp* prev_it_96;
struct list_item$1charp* it_97;
struct list_item$1charp* head_prev_it_98;
struct list_item$1charp* tail_it_99;
int i_100;
_Bool _while_condtional18;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct list_item$1charp* prev_it_101;
_Bool _if_conditional166;
_Bool _if_conditional167;
struct list$1charp* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_88, 0, sizeof(int));
memset(&it_91, 0, sizeof(struct list_item$1charp*));
memset(&i_92, 0, sizeof(int));
memset(&prev_it_93, 0, sizeof(struct list_item$1charp*));
memset(&it_94, 0, sizeof(struct list_item$1charp*));
memset(&i_95, 0, sizeof(int));
memset(&prev_it_96, 0, sizeof(struct list_item$1charp*));
memset(&it_97, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_98, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_99, 0, sizeof(struct list_item$1charp*));
memset(&i_100, 0, sizeof(int));
memset(&prev_it_101, 0, sizeof(struct list_item$1charp*));
                                        # 467 "./comelang2.h"
                                        # 464 "./comelang2.h"
                                        if(_if_conditional150=head<0,                                        _if_conditional150) {
                                            # 465 "./comelang2.h"
                                            head+=self->len;
                                        }
                                        # 471 "./comelang2.h"
                                        # 467 "./comelang2.h"
                                        if(_if_conditional151=tail<0,                                        _if_conditional151) {
                                            # 468 "./comelang2.h"
                                            tail+=self->len+1;
                                        }
                                        # 477 "./comelang2.h"
                                        # 471 "./comelang2.h"
                                        if(_if_conditional152=head>tail,                                        _if_conditional152) {
                                            # 472 "./comelang2.h"
                                            tmp_88=tail;
                                            # 473 "./comelang2.h"
                                            tail=head;
                                            # 474 "./comelang2.h"
                                            head=tmp_88;
                                        }
                                        # 481 "./comelang2.h"
                                        # 477 "./comelang2.h"
                                        if(_if_conditional153=head<0,                                        _if_conditional153) {
                                            # 478 "./comelang2.h"
                                            head=0;
                                        }
                                        # 485 "./comelang2.h"
                                        # 481 "./comelang2.h"
                                        if(_if_conditional154=tail>self->len,                                        _if_conditional154) {
                                            # 482 "./comelang2.h"
                                            tail=self->len;
                                        }
                                        # 489 "./comelang2.h"
                                        # 485 "./comelang2.h"
                                        if(_if_conditional155=head==tail,                                        _if_conditional155) {
                                            # 486 "./comelang2.h"
                                            __result86__ = __result_obj__ = self;
                                            return __result86__;
                                        }
                                        # 584 "./comelang2.h"
                                        # 489 "./comelang2.h"
                                        if(_if_conditional156=head==0&&tail==self->len,                                        _if_conditional156) {
                                            # 491 "./comelang2.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 584 "./comelang2.h"
                                            # 493 "./comelang2.h"
                                            if(_if_conditional157=head==0,                                            _if_conditional157) {
                                                # 494 "./comelang2.h"
                                                it_91=self->head;
                                                # 495 "./comelang2.h"
                                                i_92=0;
                                                # 517 "./comelang2.h"
                                                while(_while_condtional16=it_91!=((void*)0),                                                _while_condtional16) {
                                                    # 516 "./comelang2.h"
                                                    # 497 "./comelang2.h"
                                                    if(_if_conditional158=i_92<tail,                                                    _if_conditional158) {
                                                        # 498 "./comelang2.h"
                                                        prev_it_93=it_91;
                                                        # 500 "./comelang2.h"
                                                        it_91=it_91->next;
                                                        # 501 "./comelang2.h"
                                                        i_92++;
                                                        # 503 "./comelang2.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        # 505 "./comelang2.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 516 "./comelang2.h"
                                                        # 507 "./comelang2.h"
                                                        if(_if_conditional159=i_92==tail,                                                        _if_conditional159) {
                                                            # 508 "./comelang2.h"
                                                            self->head=it_91;
                                                            # 509 "./comelang2.h"
                                                            self->head->prev=((void*)0);
                                                            # 510 "./comelang2.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 513 "./comelang2.h"
                                                            it_91=it_91->next;
                                                            # 514 "./comelang2.h"
                                                            i_92++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 584 "./comelang2.h"
                                                # 518 "./comelang2.h"
                                                if(_if_conditional160=tail==self->len,                                                _if_conditional160) {
                                                    # 519 "./comelang2.h"
                                                    it_94=self->head;
                                                    # 520 "./comelang2.h"
                                                    i_95=0;
                                                    # 542 "./comelang2.h"
                                                    while(_while_condtional17=it_94!=((void*)0),                                                    _while_condtional17) {
                                                        # 527 "./comelang2.h"
                                                        # 522 "./comelang2.h"
                                                        if(_if_conditional161=i_95==head,                                                        _if_conditional161) {
                                                            # 523 "./comelang2.h"
                                                            self->tail=it_94->prev;
                                                            # 524 "./comelang2.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 541 "./comelang2.h"
                                                        # 527 "./comelang2.h"
                                                        if(_if_conditional162=i_95>=head,                                                        _if_conditional162) {
                                                            # 528 "./comelang2.h"
                                                            prev_it_96=it_94;
                                                            # 530 "./comelang2.h"
                                                            it_94=it_94->next;
                                                            # 531 "./comelang2.h"
                                                            i_95++;
                                                            # 533 "./comelang2.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 535 "./comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 538 "./comelang2.h"
                                                            it_94=it_94->next;
                                                            # 539 "./comelang2.h"
                                                            i_95++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 544 "./comelang2.h"
                                                    it_97=self->head;
                                                    # 546 "./comelang2.h"
                                                    head_prev_it_98=((void*)0);
                                                    # 547 "./comelang2.h"
                                                    tail_it_99=((void*)0);
                                                    # 550 "./comelang2.h"
                                                    i_100=0;
                                                    # 576 "./comelang2.h"
                                                    while(_while_condtional18=it_97!=((void*)0),                                                    _while_condtional18) {
                                                        # 555 "./comelang2.h"
                                                        # 552 "./comelang2.h"
                                                        if(_if_conditional163=i_100==head,                                                        _if_conditional163) {
                                                            # 553 "./comelang2.h"
                                                            head_prev_it_98=it_97->prev;
                                                        }
                                                        # 559 "./comelang2.h"
                                                        # 555 "./comelang2.h"
                                                        if(_if_conditional164=i_100==tail,                                                        _if_conditional164) {
                                                            # 556 "./comelang2.h"
                                                            tail_it_99=it_97;
                                                        }
                                                        # 574 "./comelang2.h"
                                                        # 559 "./comelang2.h"
                                                        if(_if_conditional165=i_100>=head&&i_100<tail,                                                        _if_conditional165) {
                                                            # 561 "./comelang2.h"
                                                            prev_it_101=it_97;
                                                            # 563 "./comelang2.h"
                                                            it_97=it_97->next;
                                                            # 564 "./comelang2.h"
                                                            i_100++;
                                                            # 566 "./comelang2.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 568 "./comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 571 "./comelang2.h"
                                                            it_97=it_97->next;
                                                            # 572 "./comelang2.h"
                                                            i_100++;
                                                        }
                                                    }
                                                    # 579 "./comelang2.h"
                                                    # 576 "./comelang2.h"
                                                    if(_if_conditional166=head_prev_it_98!=((void*)0),                                                    _if_conditional166) {
                                                        # 577 "./comelang2.h"
                                                        head_prev_it_98->next=tail_it_99;
                                                    }
                                                    # 582 "./comelang2.h"
                                                    # 579 "./comelang2.h"
                                                    if(_if_conditional167=tail_it_99!=((void*)0),                                                    _if_conditional167) {
                                                        # 580 "./comelang2.h"
                                                        tail_it_99->prev=head_prev_it_98;
                                                    }
                                                }
                                            }
                                        }
                                        # 584 "./comelang2.h"
                                        __result88__ = __result_obj__ = self;
                                        return __result88__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_89;
_Bool _while_condtional15;
struct list_item$1charp* prev_it_90;
struct list$1charp* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_89, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_90, 0, sizeof(struct list_item$1charp*));
                                                # 433 "./comelang2.h"
                                                it_89=self->head;
                                                # 440 "./comelang2.h"
                                                while(_while_condtional15=it_89!=((void*)0),                                                _while_condtional15) {
                                                    # 435 "./comelang2.h"
                                                    prev_it_90=it_89;
                                                    # 436 "./comelang2.h"
                                                    it_89=it_89->next;
                                                    # 437 "./comelang2.h"
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 440 "./comelang2.h"
                                                self->head=((void*)0);
                                                # 441 "./comelang2.h"
                                                self->tail=((void*)0);
                                                # 443 "./comelang2.h"
                                                self->len=0;
                                                # 445 "./comelang2.h"
                                                __result87__ = __result_obj__ = self;
                                                return __result87__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional173;
char* result_103;
char* __result90__;
_Bool _if_conditional174;
char* __result91__;
char* result_104;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_103, 0, sizeof(char*));
memset(&result_104, 0, sizeof(char*));
            # 290 "./comelang2.h"
            # 285 "./comelang2.h"
            if(_if_conditional173=self==((void*)0),            _if_conditional173) {
                # 286 "./comelang2.h"
                # 287 "./comelang2.h"
                memset(&result_103,0,sizeof(char*));
                # 288 "./comelang2.h"
                __result90__ = __result_obj__ = result_103;
                return __result90__;
            }
            # 290 "./comelang2.h"
            self->it=self->head;
            # 296 "./comelang2.h"
            # 292 "./comelang2.h"
            if(self->it) {
                # 293 "./comelang2.h"
                __result91__ = __result_obj__ = self->it->item;
                return __result91__;
            }
            # 296 "./comelang2.h"
            # 297 "./comelang2.h"
            memset(&result_104,0,sizeof(char*));
            # 298 "./comelang2.h"
            __result92__ = __result_obj__ = result_104;
            return __result92__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./comelang2.h"
            __result93__ = self==((void*)0)||self->it==((void*)0);
            return __result93__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional175;
char* result_106;
char* __result94__;
_Bool _if_conditional176;
char* __result95__;
char* result_107;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_106, 0, sizeof(char*));
memset(&result_107, 0, sizeof(char*));
            # 308 "./comelang2.h"
            # 302 "./comelang2.h"
            if(_if_conditional175=self==((void*)0)||self->it==((void*)0),            _if_conditional175) {
                # 303 "./comelang2.h"
                # 304 "./comelang2.h"
                memset(&result_106,0,sizeof(char*));
                # 305 "./comelang2.h"
                __result94__ = __result_obj__ = result_106;
                return __result94__;
            }
            # 308 "./comelang2.h"
            self->it=self->it->next;
            # 314 "./comelang2.h"
            # 310 "./comelang2.h"
            if(self->it) {
                # 311 "./comelang2.h"
                __result95__ = __result_obj__ = self->it->item;
                return __result95__;
            }
            # 314 "./comelang2.h"
            # 315 "./comelang2.h"
            memset(&result_107,0,sizeof(char*));
            # 316 "./comelang2.h"
            __result96__ = __result_obj__ = result_107;
            return __result96__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional179;
void* right_value121;
struct list_item$1charp* litem_108;
_Bool _if_conditional180;
void* right_value122;
struct list_item$1charp* litem_109;
void* right_value123;
struct list_item$1charp* litem_110;
struct list$1charp* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1charp*));
right_value122 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1charp*));
right_value123 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1charp*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional179=self->len==0,                _if_conditional179) {
                    # 226 "./comelang2.h"
                    litem_108=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value121=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_108->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_108->next=((void*)0);
                    # 230 "./comelang2.h"
                    litem_108->item=item;
                    # 232 "./comelang2.h"
                    self->tail=litem_108;
                    # 233 "./comelang2.h"
                    self->head=litem_108;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional180=self->len==1,                    _if_conditional180) {
                        # 236 "./comelang2.h"
                        litem_109=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value122=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_109->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_109->next=((void*)0);
                        # 240 "./comelang2.h"
                        litem_109->item=item;
                        # 242 "./comelang2.h"
                        self->tail=litem_109;
                        # 243 "./comelang2.h"
                        self->head->next=litem_109;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_110=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value123=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_110->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_110->next=((void*)0);
                        # 250 "./comelang2.h"
                        litem_110->item=item;
                        # 252 "./comelang2.h"
                        self->tail->next=litem_110;
                        # 253 "./comelang2.h"
                        self->tail=litem_110;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result97__ = __result_obj__ = self;
                return __result97__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional187;
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional187=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional187) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional188=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional188) {
            # 1 "CVALUE_finalize"
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional189;
void* right_value131;
struct list_item$1CVALUEph* litem_119;
struct CVALUE* __dec_obj45;
_Bool _if_conditional191;
void* right_value132;
struct list_item$1CVALUEph* litem_120;
struct CVALUE* __dec_obj46;
void* right_value133;
struct list_item$1CVALUEph* litem_121;
struct CVALUE* __dec_obj47;
struct list$1CVALUEph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&litem_119, 0, sizeof(struct list_item$1CVALUEph*));
right_value132 = (void*)0;
memset(&litem_120, 0, sizeof(struct list_item$1CVALUEph*));
right_value133 = (void*)0;
memset(&litem_121, 0, sizeof(struct list_item$1CVALUEph*));
        # 256 "./comelang2.h"
        # 225 "./comelang2.h"
        if(_if_conditional189=self->len==0,        _if_conditional189) {
            # 226 "./comelang2.h"
            litem_119=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value131=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "./comelang2.h"
            litem_119->prev=((void*)0);
            # 229 "./comelang2.h"
            litem_119->next=((void*)0);
            # 230 "./comelang2.h"
            __dec_obj45=litem_119->item;
            litem_119->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "./comelang2.h"
            self->tail=litem_119;
            # 233 "./comelang2.h"
            self->head=litem_119;
        }
        else {
            # 256 "./comelang2.h"
            # 235 "./comelang2.h"
            if(_if_conditional191=self->len==1,            _if_conditional191) {
                # 236 "./comelang2.h"
                litem_120=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value132=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "./comelang2.h"
                litem_120->prev=self->head;
                # 239 "./comelang2.h"
                litem_120->next=((void*)0);
                # 240 "./comelang2.h"
                __dec_obj46=litem_120->item;
                litem_120->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "./comelang2.h"
                self->tail=litem_120;
                # 243 "./comelang2.h"
                self->head->next=litem_120;
            }
            else {
                # 246 "./comelang2.h"
                litem_121=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value133=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "./comelang2.h"
                litem_121->prev=self->tail;
                # 249 "./comelang2.h"
                litem_121->next=((void*)0);
                # 250 "./comelang2.h"
                __dec_obj47=litem_121->item;
                litem_121->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "./comelang2.h"
                self->tail->next=litem_121;
                # 253 "./comelang2.h"
                self->tail=litem_121;
            }
        }
        # 256 "./comelang2.h"
        self->len++;
        # 258 "./comelang2.h"
        __result99__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result99__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional190;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional190=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional190) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value134;
struct sNode* __dec_obj48;
void* right_value135;
char* __dec_obj49;
void* right_value145;
struct list$1tuple2$2charphsNodephph* __dec_obj55;
void* right_value146;
struct buffer* __dec_obj56;
void* right_value147;
char* __dec_obj57;
void* right_value148;
struct list$1sTypeph* __dec_obj58;
struct sMethodCallNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
    # 165 "20method.c"
    __dec_obj48=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value134=sNode_clone(obj))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value134) { right_value134 = come_decrement_ref_count2(right_value134, ((struct sNode*)right_value134)->finalize, ((struct sNode*)right_value134)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 166 "20method.c"
    __dec_obj49=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value135=__builtin_string(fun_name))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 167 "20method.c"
    __dec_obj55=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value145=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 168 "20method.c"
    __dec_obj56=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value146=buffer_clone(method_block))));
    come_call_finalizer2(buffer_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 169 "20method.c"
    self->sline=info->sline;
    # 170 "20method.c"
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 171 "20method.c"
    self->method_block_sline=method_block_sline;
    # 172 "20method.c"
    __dec_obj58=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value148=list$1sTypephp_clone(method_generics_types))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 174 "20method.c"
    __result107__ = __result_obj__ = self;
    come_call_finalizer2(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result107__;
    come_call_finalizer2(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional192;
struct list$1tuple2$2charphsNodephph* __result101__;
void* right_value136;
void* right_value137;
struct list$1tuple2$2charphsNodephph* result_124;
struct list_item$1tuple2$2charphsNodephph* it_125;
_Bool _while_condtional20;
void* right_value144;
struct list$1tuple2$2charphsNodephph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&result_124, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_125, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value144 = (void*)0;
        # 142 "./comelang2.h"
        # 139 "./comelang2.h"
        if(_if_conditional192=self==((void*)0),        _if_conditional192) {
            # 140 "./comelang2.h"
            __result101__ = __result_obj__ = ((void*)0);
            return __result101__;
        }
        # 142 "./comelang2.h"
        result_124=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value137=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value136=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 144 "./comelang2.h"
        it_125=self->head;
        # 151 "./comelang2.h"
        while(_while_condtional20=it_125!=((void*)0),        _while_condtional20) {
            # 146 "./comelang2.h"
            list$1tuple2$2charphsNodephph_add(result_124,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value144=tuple2$2charphsNodephp_clone(it_125->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 148 "./comelang2.h"
            it_125=it_125->next;
        }
        # 151 "./comelang2.h"
        __result106__ = __result_obj__ = result_124;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_124, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result106__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "./comelang2.h"
            self->head=((void*)0);
            # 105 "./comelang2.h"
            self->tail=((void*)0);
            # 106 "./comelang2.h"
            self->len=0;
            # 108 "./comelang2.h"
            __result102__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result102__;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_122;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsNodephph* prev_it_123;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_122, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_123, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 123 "./comelang2.h"
                it_122=self->head;
                # 129 "./comelang2.h"
                while(_while_condtional19=it_122!=((void*)0),                _while_condtional19) {
                    # 125 "./comelang2.h"
                    prev_it_123=it_122;
                    # 126 "./comelang2.h"
                    it_122=it_122->next;
                    # 127 "./comelang2.h"
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional193;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsNodephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                        if(_if_conditional193=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional193) {
                            # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional194;
_Bool _if_conditional195;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsNodephp_finalize"
                                # 0 "tuple2$2charphsNodephp_finalize"
                                if(_if_conditional194=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional194) {
                                    # 0 "tuple2$2charphsNodephp_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsNodephp_finalize"
                                # 1 "tuple2$2charphsNodephp_finalize"
                                if(_if_conditional195=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional195) {
                                    # 1 "tuple2$2charphsNodephp_finalize"
                                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional196;
void* right_value138;
struct list_item$1tuple2$2charphsNodephph* litem_126;
struct tuple2$2charphsNodeph* __dec_obj50;
_Bool _if_conditional199;
void* right_value139;
struct list_item$1tuple2$2charphsNodephph* litem_127;
struct tuple2$2charphsNodeph* __dec_obj51;
void* right_value140;
struct list_item$1tuple2$2charphsNodephph* litem_128;
struct tuple2$2charphsNodeph* __dec_obj52;
struct list$1tuple2$2charphsNodephph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value139 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value140 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 186 "./comelang2.h"
                # 155 "./comelang2.h"
                if(_if_conditional196=self->len==0,                _if_conditional196) {
                    # 156 "./comelang2.h"
                    litem_126=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value138=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 158 "./comelang2.h"
                    litem_126->prev=((void*)0);
                    # 159 "./comelang2.h"
                    litem_126->next=((void*)0);
                    # 160 "./comelang2.h"
                    __dec_obj50=litem_126->item;
                    litem_126->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 162 "./comelang2.h"
                    self->tail=litem_126;
                    # 163 "./comelang2.h"
                    self->head=litem_126;
                }
                else {
                    # 186 "./comelang2.h"
                    # 165 "./comelang2.h"
                    if(_if_conditional199=self->len==1,                    _if_conditional199) {
                        # 166 "./comelang2.h"
                        litem_127=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value139=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 168 "./comelang2.h"
                        litem_127->prev=self->head;
                        # 169 "./comelang2.h"
                        litem_127->next=((void*)0);
                        # 170 "./comelang2.h"
                        __dec_obj51=litem_127->item;
                        litem_127->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 172 "./comelang2.h"
                        self->tail=litem_127;
                        # 173 "./comelang2.h"
                        self->head->next=litem_127;
                    }
                    else {
                        # 176 "./comelang2.h"
                        litem_128=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value140=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 178 "./comelang2.h"
                        litem_128->prev=self->tail;
                        # 179 "./comelang2.h"
                        litem_128->next=((void*)0);
                        # 180 "./comelang2.h"
                        __dec_obj52=litem_128->item;
                        litem_128->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 182 "./comelang2.h"
                        self->tail->next=litem_128;
                        # 183 "./comelang2.h"
                        self->tail=litem_128;
                    }
                }
                # 186 "./comelang2.h"
                self->len++;
                # 188 "./comelang2.h"
                __result103__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result103__;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional197;
_Bool _if_conditional198;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2charphsNodeph_finalize"
                        # 0 "tuple2$2charphsNodeph_finalize"
                        if(_if_conditional197=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional197) {
                            # 0 "tuple2$2charphsNodeph_finalize"
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple2$2charphsNodeph_finalize"
                        # 1 "tuple2$2charphsNodeph_finalize"
                        if(_if_conditional198=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional198) {
                            # 1 "tuple2$2charphsNodeph_finalize"
                            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional200;
struct tuple2$2charphsNodeph* __result104__;
void* right_value141;
struct tuple2$2charphsNodeph* result_129;
_Bool _if_conditional201;
void* right_value142;
char* __dec_obj53;
_Bool _if_conditional202;
void* right_value143;
struct sNode* __dec_obj54;
struct tuple2$2charphsNodeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
memset(&result_129, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value142 = (void*)0;
right_value143 = (void*)0;
                # 3 "tuple2$2charphsNodephp_clone"
                # 2 "tuple2$2charphsNodephp_clone"
                if(_if_conditional200=self==(void*)0,                _if_conditional200) {
                    # 2 "tuple2$2charphsNodephp_clone"
                    __result104__ = __result_obj__ = (void*)0;
                    return __result104__;
                }
                # 3 "tuple2$2charphsNodephp_clone"
                result_129=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value141=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple2$2charphsNodephp_clone"
                # 4 "tuple2$2charphsNodephp_clone"
                if(_if_conditional201=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional201) {
                    # 4 "tuple2$2charphsNodephp_clone"
                    __dec_obj53=result_129->v1;
                    result_129->v1=(char*)come_increment_ref_count(((char*)(right_value142=string_clone(self->v1))));
                    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2charphsNodephp_clone"
                # 5 "tuple2$2charphsNodephp_clone"
                if(_if_conditional202=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional202) {
                    # 5 "tuple2$2charphsNodephp_clone"
                    __dec_obj54=result_129->v2;
                    result_129->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value143=sNode_clone(self->v2))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value143) { right_value143 = come_decrement_ref_count2(right_value143, ((struct sNode*)right_value143)->finalize, ((struct sNode*)right_value143)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "tuple2$2charphsNodephp_clone"
                __result105__ = __result_obj__ = result_129;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_129, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result105__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    # 179 "20method.c"
    __result108__ = self->sline;
    return __result108__;
}

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value149;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
    # 184 "20method.c"
    __result109__ = __result_obj__ = ((char*)(right_value149=__builtin_string(self->sname)));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* right_value150;
char* none_generics_name_130;
void* right_value151;
char* fun_name2_131;
void* right_value152;
char* fun_name3_132;
struct sGenericsFun* generics_fun_135;
_Bool _if_conditional223;
void* right_value153;
_Bool _if_conditional224;
void* right_value154;
char* __result114__;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
memset(&none_generics_name_130, 0, sizeof(char*));
right_value151 = (void*)0;
memset(&fun_name2_131, 0, sizeof(char*));
right_value152 = (void*)0;
memset(&fun_name3_132, 0, sizeof(char*));
memset(&generics_fun_135, 0, sizeof(struct sGenericsFun*));
right_value153 = (void*)0;
right_value154 = (void*)0;
    # 193 "20method.c"
    none_generics_name_130=(char*)come_increment_ref_count(((char*)(right_value150=get_none_generics_name(type->mClass->mName))));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 194 "20method.c"
    fun_name2_131=(char*)come_increment_ref_count(((char*)(right_value151=create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 195 "20method.c"
    fun_name3_132=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s_%s",none_generics_name_130,fun_name))));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 197 "20method.c"
    generics_fun_135=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_132,((void*)0));
    # 206 "20method.c"
    # 199 "20method.c"
    if(generics_fun_135) {
        # 204 "20method.c"
        # 200 "20method.c"
        if(_if_conditional224=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(fun_name2_131)))),generics_fun_135,type,info),        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional224) {
            # 201 "20method.c"
            err_msg(info,"%s not found",fun_name3_132);
            # 202 "20method.c"
            __result114__ = __result_obj__ = ((char*)(right_value154=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            none_generics_name_130 = come_decrement_ref_count2(none_generics_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_131 = come_decrement_ref_count2(fun_name2_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_132 = come_decrement_ref_count2(fun_name3_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result114__;
        }
    }
    # 206 "20method.c"
    __result115__ = __result_obj__ = fun_name2_131;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_130 = come_decrement_ref_count2(none_generics_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_131 = come_decrement_ref_count2(fun_name2_131, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_132 = come_decrement_ref_count2(fun_name3_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result115__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_130 = come_decrement_ref_count2(none_generics_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_131 = come_decrement_ref_count2(fun_name2_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name3_132 = come_decrement_ref_count2(fun_name3_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_133;
unsigned int it_134;
_Bool _while_condtional21;
_Bool _if_conditional209;
_Bool _if_conditional210;
struct sGenericsFun* __result110__;
_Bool _if_conditional221;
_Bool _if_conditional222;
struct sGenericsFun* __result111__;
struct sGenericsFun* __result112__;
struct sGenericsFun* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_133, 0, sizeof(unsigned int));
memset(&it_134, 0, sizeof(unsigned int));
        # 1226 "./comelang2.h"
        hash_133=string_get_hash_key(((char*)key))%self->size;
        # 1227 "./comelang2.h"
        it_134=hash_133;
        # 1251 "./comelang2.h"
        while(_while_condtional21=(_Bool)1,        _while_condtional21) {
            # 1249 "./comelang2.h"
            # 1230 "./comelang2.h"
            if(_if_conditional209=self->item_existance[it_134],            _if_conditional209) {
                # 1237 "./comelang2.h"
                # 1232 "./comelang2.h"
                if(_if_conditional210=string_equals(self->keys[it_134],key),                _if_conditional210) {
                    # 1234 "./comelang2.h"
                    __result110__ = __result_obj__ = self->items[it_134];
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result110__;
                }
                # 1237 "./comelang2.h"
                it_134++;
                # 1245 "./comelang2.h"
                # 1239 "./comelang2.h"
                if(_if_conditional221=it_134>=self->size,                _if_conditional221) {
                    # 1240 "./comelang2.h"
                    it_134=0;
                }
                else {
                    # 1245 "./comelang2.h"
                    # 1242 "./comelang2.h"
                    if(_if_conditional222=it_134==hash_133,                    _if_conditional222) {
                        # 1243 "./comelang2.h"
                        __result111__ = __result_obj__ = default_value;
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result111__;
                    }
                }
            }
            else {
                # 1247 "./comelang2.h"
                __result112__ = __result_obj__ = default_value;
                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result112__;
            }
        }
        # 1251 "./comelang2.h"
        __result113__ = __result_obj__ = default_value;
        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result113__;
        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sGenericsFun_finalize"
                        # 0 "sGenericsFun_finalize"
                        if(_if_conditional211=self!=((void*)0)&&self->mImplType!=((void*)0),                        _if_conditional211) {
                            # 0 "sGenericsFun_finalize"
                            come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sGenericsFun_finalize"
                        # 1 "sGenericsFun_finalize"
                        if(_if_conditional212=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                        _if_conditional212) {
                            # 1 "sGenericsFun_finalize"
                            come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sGenericsFun_finalize"
                        # 2 "sGenericsFun_finalize"
                        if(_if_conditional213=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                        _if_conditional213) {
                            # 2 "sGenericsFun_finalize"
                            come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sGenericsFun_finalize"
                        # 3 "sGenericsFun_finalize"
                        if(_if_conditional214=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional214) {
                            # 3 "sGenericsFun_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 5 "sGenericsFun_finalize"
                        # 4 "sGenericsFun_finalize"
                        if(_if_conditional215=self!=((void*)0)&&self->mResultType!=((void*)0),                        _if_conditional215) {
                            # 4 "sGenericsFun_finalize"
                            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 6 "sGenericsFun_finalize"
                        # 5 "sGenericsFun_finalize"
                        if(_if_conditional216=self!=((void*)0)&&self->mParamTypes!=((void*)0),                        _if_conditional216) {
                            # 5 "sGenericsFun_finalize"
                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 7 "sGenericsFun_finalize"
                        # 6 "sGenericsFun_finalize"
                        if(_if_conditional217=self!=((void*)0)&&self->mParamNames!=((void*)0),                        _if_conditional217) {
                            # 6 "sGenericsFun_finalize"
                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 8 "sGenericsFun_finalize"
                        # 7 "sGenericsFun_finalize"
                        if(_if_conditional218=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                        _if_conditional218) {
                            # 7 "sGenericsFun_finalize"
                            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 9 "sGenericsFun_finalize"
                        # 8 "sGenericsFun_finalize"
                        if(_if_conditional219=self!=((void*)0)&&self->mBlock!=((void*)0),                        _if_conditional219) {
                            # 8 "sGenericsFun_finalize"
                            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 10 "sGenericsFun_finalize"
                        # 9 "sGenericsFun_finalize"
                        if(_if_conditional220=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                        _if_conditional220) {
                            # 9 "sGenericsFun_finalize"
                            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional225;
_Bool __result116__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    # 217 "20method.c"
    # 211 "20method.c"
    if(self->method_block) {
        # 212 "20method.c"
        __result116__ = (_Bool)1;
        return __result116__;
    }
    else {
        # 215 "20method.c"
        __result117__ = (_Bool)0;
        return __result117__;
    }
}

char* sMethodCallNode_kind(){
void* __result_obj__;
void* right_value155;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    # 221 "20method.c"
    __result118__ = __result_obj__ = ((char*)(right_value155=__builtin_string("sMethodCallNode")));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result118__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_136;
struct list$1tuple2$2charphsNodephph* params_137;
struct sNode* obj_138;
struct buffer* method_block_139;
int method_block_sline_140;
struct list$1sTypeph* method_generics_types_141;
void* right_value156;
struct list$1sTypeph* __dec_obj59;
_Bool _if_conditional226;
_Bool __result119__;
void* right_value157;
struct CVALUE* obj_value_142;
_Bool _if_conditional227;
void* right_value158;
void* right_value159;
char* __dec_obj60;
void* right_value160;
struct sType* obj_type_143;
struct sClass* klass_144;
_Bool calling_dynamic_method_145;
struct sType* lambda_type_146;
struct list$1tuple2$2charphsTypephph* o2_saved_147;
struct tuple2$2charphsTypeph* it_150;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_153;
struct sType* field_type_154;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value161;
struct sType* result_type_155;
void* right_value162;
void* right_value163;
struct list$1CVALUEph* come_params_158;
int i_159;
struct list$1tuple2$2charphsNodephph* o2_saved_160;
struct tuple2$2charphsNodeph* it_163;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_166;
struct sNode* node_167;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool __result135__;
void* right_value164;
struct CVALUE* come_value_168;
void* right_value165;
void* right_value166;
void* right_value167;
_Bool _if_conditional242;
void* right_value168;
void* right_value169;
struct buffer* buf_172;
void* right_value170;
int j_173;
struct list$1CVALUEph* o2_saved_174;
struct CVALUE* it_177;
_Bool _if_conditional247;
void* right_value171;
char* __dec_obj61;
_Bool _if_conditional249;
void* right_value172;
struct CVALUE* come_value2_180;
void* right_value173;
char* __dec_obj62;
void* right_value174;
struct sType* result_type2_181;
_Bool _if_conditional250;
void* right_value175;
void* right_value176;
char* __dec_obj63;
void* right_value177;
struct sType* __dec_obj64;
void* right_value178;
void* right_value179;
void* right_value180;
char* generics_fun_name_182;
struct sFun* fun_183;
int i_184;
void* right_value181;
char* new_fun_name_185;
_Bool _if_conditional270;
void* right_value182;
char* __dec_obj65;
_Bool _if_conditional271;
struct sType* obj_array_type_189;
_Bool _if_conditional272;
void* right_value183;
char* array_method_name_190;
_Bool _if_conditional277;
void* right_value184;
char* __dec_obj66;
_Bool _if_conditional278;
void* right_value185;
void* right_value186;
char* __dec_obj67;
_Bool _if_conditional279;
_Bool __result155__;
_Bool _if_conditional280;
void* right_value187;
void* right_value188;
char* __dec_obj68;
_Bool _if_conditional281;
_Bool __result156__;
_Bool _if_conditional282;
_Bool __result157__;
_Bool _if_conditional284;
_Bool __result160__;
void* right_value189;
struct sType* result_type_193;
void* right_value190;
struct sType* result_type2_194;
void* right_value191;
void* right_value192;
struct list$1sTypeph* param_types_195;
struct list$1sTypeph* o2_saved_196;
struct sType* it_199;
_Bool _if_conditional289;
void* right_value196;
struct sType* it2_205;
void* right_value197;
void* right_value198;
void* right_value199;
struct list$1CVALUEph* come_params_206;
int i_207;
_Bool first_param_211;
struct list$1tuple2$2charphsNodephph* o2_saved_212;
struct tuple2$2charphsNodeph* it_213;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_214;
struct sNode* node_215;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool __result170__;
void* right_value203;
struct CVALUE* come_value_216;
int n_217;
struct list$1charph* o2_saved_218;
char* it_221;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value204;
void* right_value205;
void* right_value206;
_Bool _if_conditional303;
int i_226;
struct list$1tuple2$2charphsNodephph* o2_saved_227;
struct tuple2$2charphsNodeph* it_228;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_229;
struct sNode* node_230;
_Bool _if_conditional307;
void* right_value207;
void* right_value208;
void* right_value209;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool __result182__;
void* right_value210;
struct CVALUE* come_value_234;
_Bool _while_condtional28;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value211;
void* right_value212;
void* right_value213;
_Bool _if_conditional318;
_Bool _while_condtional30;
_Bool _if_conditional319;
struct sType* obj_array_type_238;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value214;
void* right_value215;
struct buffer* buf_239;
int i_240;
struct list$1sNodeph* o2_saved_241;
struct sNode* it_244;
_Bool _if_conditional326;
void* right_value216;
struct CVALUE* come_value_247;
void* right_value217;
_Bool _if_conditional327;
void* right_value218;
struct CVALUE* come_value_248;
void* right_value219;
char* __dec_obj76;
void* right_value220;
void* right_value221;
struct sType* __dec_obj77;
void* right_value225;
void* right_value226;
void* right_value227;
_Bool _if_conditional331;
void* right_value228;
void* right_value229;
struct buffer* buf_252;
int i_253;
struct list$1sNodeph* o2_saved_254;
struct sNode* it_255;
_Bool _if_conditional332;
void* right_value230;
struct CVALUE* come_value_256;
void* right_value231;
_Bool _if_conditional333;
void* right_value232;
struct CVALUE* come_value_257;
void* right_value233;
char* __dec_obj82;
void* right_value234;
void* right_value235;
struct sType* __dec_obj83;
void* right_value236;
void* right_value237;
void* right_value238;
_Bool _if_conditional335;
void* right_value239;
char* default_param_258;
char* param_name_259;
_Bool _if_conditional336;
struct buffer* source_260;
char* p_261;
char* head_262;
int sline_263;
void* right_value240;
struct buffer* __dec_obj84;
void* right_value241;
struct sNode* node_264;
_Bool _if_conditional337;
_Bool __result196__;
struct buffer* __dec_obj85;
void* right_value242;
struct CVALUE* come_value_265;
_Bool _if_conditional338;
void* right_value243;
void* right_value244;
void* right_value245;
_Bool _if_conditional339;
_Bool __result197__;
_Bool _if_conditional340;
void* right_value246;
void* right_value247;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value250;
struct sNode* current_stack_frame_node_267;
_Bool _if_conditional345;
_Bool __result200__;
void* right_value251;
struct CVALUE* come_value_268;
void* right_value252;
void* right_value253;
struct buffer* method_block2_269;
void* right_value254;
struct sType* method_block_type_270;
void* right_value255;
char* class_name_271;
struct sClass* current_stack_frame_struct_275;
_Bool _if_conditional350;
_Bool __result205__;
void* right_value256;
struct sType* result_type_276;
struct list$1sTypeph* param_types_277;
struct list$1charph* param_names_278;
void* right_value257;
void* right_value258;
struct buffer* all_alhabet_sname_279;
char* p_280;
_Bool _while_condtional32;
_Bool _if_conditional351;
void* right_value259;
void* right_value260;
void* right_value261;
int i_281;
struct list$1sTypeph* o2_saved_282;
struct sType* it_283;
struct sType* param_type_284;
_Bool _if_conditional352;
void* right_value262;
char* param_name_285;
void* right_value263;
void* right_value264;
_Bool _if_conditional353;
void* right_value265;
char* param_name_286;
void* right_value266;
void* right_value267;
void* right_value268;
char* param_name_287;
void* right_value269;
void* right_value270;
_Bool _if_conditional354;
void* right_value271;
struct buffer* source3_288;
char* p_289;
char* head_290;
int sline_291;
struct buffer* __dec_obj87;
void* right_value272;
struct sNode* node_292;
_Bool _if_conditional355;
_Bool __result206__;
void* right_value273;
void* right_value274;
char* method_block_name_293;
void* right_value275;
struct CVALUE* come_value2_294;
struct sFun* fun2_295;
_Bool _if_conditional356;
_Bool __result207__;
struct sType* method_block_type2_296;
void* right_value276;
char* __dec_obj88;
void* right_value277;
struct sType* __dec_obj89;
struct buffer* __dec_obj90;
void* right_value278;
void* right_value279;
struct buffer* buf_297;
int j_298;
struct list$1CVALUEph* o2_saved_299;
struct CVALUE* it_300;
_Bool _if_conditional357;
void* right_value280;
struct CVALUE* come_value2_301;
void* right_value281;
char* __dec_obj91;
void* right_value282;
struct sType* __dec_obj92;
_Bool _if_conditional358;
void* right_value283;
char* __dec_obj93;
void* right_value284;
char* __dec_obj94;
_Bool _if_conditional359;
void* right_value285;
char* var_name_302;
void* right_value286;
struct sType* result_type_303;
void* right_value287;
struct sType* result_type2_304;
struct sType* result_type3_305;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
void* right_value288;
void* right_value289;
void* right_value290;
void* right_value291;
void* right_value292;
void* right_value293;
void* right_value294;
void* right_value295;
void* right_value296;
void* right_value297;
void* right_value298;
_Bool _if_conditional363;
void* right_value299;
void* right_value300;
void* right_value301;
void* right_value302;
void* right_value303;
void* right_value304;
void* right_value305;
struct list$1sTypeph* __dec_obj95;
_Bool __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_136, 0, sizeof(char*));
memset(&params_137, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_138, 0, sizeof(struct sNode*));
memset(&method_block_139, 0, sizeof(struct buffer*));
memset(&method_block_sline_140, 0, sizeof(int));
memset(&method_generics_types_141, 0, sizeof(struct list$1sTypeph*));
right_value156 = (void*)0;
right_value157 = (void*)0;
memset(&obj_value_142, 0, sizeof(struct CVALUE*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&obj_type_143, 0, sizeof(struct sType*));
memset(&klass_144, 0, sizeof(struct sClass*));
memset(&calling_dynamic_method_145, 0, sizeof(_Bool));
memset(&lambda_type_146, 0, sizeof(struct sType*));
memset(&o2_saved_147, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_150, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_153, 0, sizeof(char*));
memset(&field_type_154, 0, sizeof(struct sType*));
memset(&field_name_153, 0, sizeof(char*));
memset(&field_type_154, 0, sizeof(struct sType*));
right_value161 = (void*)0;
memset(&result_type_155, 0, sizeof(struct sType*));
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&come_params_158, 0, sizeof(struct list$1CVALUEph*));
memset(&i_159, 0, sizeof(int));
memset(&o2_saved_160, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_163, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_166, 0, sizeof(char*));
memset(&node_167, 0, sizeof(struct sNode*));
memset(&label_166, 0, sizeof(char*));
memset(&node_167, 0, sizeof(struct sNode*));
right_value164 = (void*)0;
memset(&come_value_168, 0, sizeof(struct CVALUE*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&buf_172, 0, sizeof(struct buffer*));
right_value170 = (void*)0;
memset(&j_173, 0, sizeof(int));
memset(&o2_saved_174, 0, sizeof(struct list$1CVALUEph*));
memset(&it_177, 0, sizeof(struct CVALUE*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&come_value2_180, 0, sizeof(struct CVALUE*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&result_type2_181, 0, sizeof(struct sType*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&generics_fun_name_182, 0, sizeof(char*));
memset(&fun_183, 0, sizeof(struct sFun*));
memset(&i_184, 0, sizeof(int));
right_value181 = (void*)0;
memset(&new_fun_name_185, 0, sizeof(char*));
right_value182 = (void*)0;
memset(&obj_array_type_189, 0, sizeof(struct sType*));
right_value183 = (void*)0;
memset(&array_method_name_190, 0, sizeof(char*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&result_type_193, 0, sizeof(struct sType*));
right_value190 = (void*)0;
memset(&result_type2_194, 0, sizeof(struct sType*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&param_types_195, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_196, 0, sizeof(struct list$1sTypeph*));
memset(&it_199, 0, sizeof(struct sType*));
right_value196 = (void*)0;
memset(&it2_205, 0, sizeof(struct sType*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&come_params_206, 0, sizeof(struct list$1CVALUEph*));
memset(&i_207, 0, sizeof(int));
memset(&first_param_211, 0, sizeof(_Bool));
memset(&o2_saved_212, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_213, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_214, 0, sizeof(char*));
memset(&node_215, 0, sizeof(struct sNode*));
memset(&label_214, 0, sizeof(char*));
memset(&node_215, 0, sizeof(struct sNode*));
right_value203 = (void*)0;
memset(&come_value_216, 0, sizeof(struct CVALUE*));
memset(&n_217, 0, sizeof(int));
memset(&o2_saved_218, 0, sizeof(struct list$1charph*));
memset(&it_221, 0, sizeof(char*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&i_226, 0, sizeof(int));
memset(&o2_saved_227, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_228, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_229, 0, sizeof(char*));
memset(&node_230, 0, sizeof(struct sNode*));
memset(&label_229, 0, sizeof(char*));
memset(&node_230, 0, sizeof(struct sNode*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&come_value_234, 0, sizeof(struct CVALUE*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&obj_array_type_238, 0, sizeof(struct sType*));
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&buf_239, 0, sizeof(struct buffer*));
memset(&i_240, 0, sizeof(int));
memset(&o2_saved_241, 0, sizeof(struct list$1sNodeph*));
memset(&it_244, 0, sizeof(struct sNode*));
right_value216 = (void*)0;
memset(&come_value_247, 0, sizeof(struct CVALUE*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&come_value_248, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
memset(&buf_252, 0, sizeof(struct buffer*));
memset(&i_253, 0, sizeof(int));
memset(&o2_saved_254, 0, sizeof(struct list$1sNodeph*));
memset(&it_255, 0, sizeof(struct sNode*));
right_value230 = (void*)0;
memset(&come_value_256, 0, sizeof(struct CVALUE*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&come_value_257, 0, sizeof(struct CVALUE*));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&default_param_258, 0, sizeof(char*));
memset(&param_name_259, 0, sizeof(char*));
memset(&source_260, 0, sizeof(struct buffer*));
memset(&p_261, 0, sizeof(char*));
memset(&head_262, 0, sizeof(char*));
memset(&sline_263, 0, sizeof(int));
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&node_264, 0, sizeof(struct sNode*));
right_value242 = (void*)0;
memset(&come_value_265, 0, sizeof(struct CVALUE*));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value250 = (void*)0;
memset(&current_stack_frame_node_267, 0, sizeof(struct sNode*));
right_value251 = (void*)0;
memset(&come_value_268, 0, sizeof(struct CVALUE*));
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&method_block2_269, 0, sizeof(struct buffer*));
right_value254 = (void*)0;
memset(&method_block_type_270, 0, sizeof(struct sType*));
right_value255 = (void*)0;
memset(&class_name_271, 0, sizeof(char*));
memset(&current_stack_frame_struct_275, 0, sizeof(struct sClass*));
right_value256 = (void*)0;
memset(&result_type_276, 0, sizeof(struct sType*));
memset(&param_types_277, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_278, 0, sizeof(struct list$1charph*));
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&all_alhabet_sname_279, 0, sizeof(struct buffer*));
memset(&p_280, 0, sizeof(char*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&i_281, 0, sizeof(int));
memset(&o2_saved_282, 0, sizeof(struct list$1sTypeph*));
memset(&it_283, 0, sizeof(struct sType*));
memset(&param_type_284, 0, sizeof(struct sType*));
right_value262 = (void*)0;
memset(&param_name_285, 0, sizeof(char*));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&param_name_286, 0, sizeof(char*));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&param_name_287, 0, sizeof(char*));
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&source3_288, 0, sizeof(struct buffer*));
memset(&p_289, 0, sizeof(char*));
memset(&head_290, 0, sizeof(char*));
memset(&sline_291, 0, sizeof(int));
right_value272 = (void*)0;
memset(&node_292, 0, sizeof(struct sNode*));
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&method_block_name_293, 0, sizeof(char*));
right_value275 = (void*)0;
memset(&come_value2_294, 0, sizeof(struct CVALUE*));
memset(&fun2_295, 0, sizeof(struct sFun*));
memset(&method_block_type2_296, 0, sizeof(struct sType*));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&buf_297, 0, sizeof(struct buffer*));
memset(&j_298, 0, sizeof(int));
memset(&o2_saved_299, 0, sizeof(struct list$1CVALUEph*));
memset(&it_300, 0, sizeof(struct CVALUE*));
right_value280 = (void*)0;
memset(&come_value2_301, 0, sizeof(struct CVALUE*));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&var_name_302, 0, sizeof(char*));
right_value286 = (void*)0;
memset(&result_type_303, 0, sizeof(struct sType*));
right_value287 = (void*)0;
memset(&result_type2_304, 0, sizeof(struct sType*));
memset(&result_type3_305, 0, sizeof(struct sType*));
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
    # 226 "20method.c"
    fun_name_136=self->fun_name;
    # 227 "20method.c"
    params_137=self->params;
    # 228 "20method.c"
    obj_138=self->obj;
    # 229 "20method.c"
    method_block_139=self->method_block;
    # 230 "20method.c"
    method_block_sline_140=self->method_block_sline;
    # 232 "20method.c"
    method_generics_types_141=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    # 233 "20method.c"
    __dec_obj59=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value156=list$1sTypephp_clone(self->method_generics_types))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 239 "20method.c"
    # 235 "20method.c"
    if(_if_conditional226=!node_compile(obj_138,info),    _if_conditional226) {
        # 236 "20method.c"
        __result119__ = (_Bool)0;
        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result119__;
    }
    # 239 "20method.c"
    obj_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 240 "20method.c"
    dec_stack_ptr(1,info);
    # 249 "20method.c"
    # 242 "20method.c"
    if(_if_conditional227=gComeDebug&&obj_value_142->type->mPointerNum>0,    _if_conditional227) {
        # 243 "20method.c"
        __dec_obj60=obj_value_142->c_value;
        obj_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value158=make_type_name_string(obj_value_142->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),obj_value_142->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 249 "20method.c"
    obj_type_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_clone(obj_value_142->type))));
    come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 251 "20method.c"
    klass_144=obj_type_143->mClass;
    # 253 "20method.c"
    calling_dynamic_method_145=(_Bool)0;
    # 254 "20method.c"
    lambda_type_146=((void*)0);
    # 265 "20method.c"
    for(    o2_saved_147=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_144->mFields)),it_150=list$1tuple2$2charphsTypephph_begin((o2_saved_147));    !list$1tuple2$2charphsTypephph_end((o2_saved_147));    it_150=list$1tuple2$2charphsTypephph_next((o2_saved_147))    ){
        # 256 "20method.c"
        multiple_assign_var1=it_150;
        field_name_153=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_154=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 263 "20method.c"
        # 258 "20method.c"
        if(_if_conditional232=string_operator_equals(field_name_153,fun_name_136)&&string_operator_equals(field_type_154->mClass->mName,"lambda"),        _if_conditional232) {
            # 259 "20method.c"
            calling_dynamic_method_145=(_Bool)1;
            # 260 "20method.c"
            lambda_type_146=field_type_154;
            # 261 "20method.c"
            field_name_153 = come_decrement_ref_count2(field_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_153 = come_decrement_ref_count2(field_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 850 "20method.c"
    # 265 "20method.c"
    if(calling_dynamic_method_145) {
        # 266 "20method.c"
        result_type_155=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(lambda_type_146->mResultType->v1))));
        come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 267 "20method.c"
        result_type_155->mStatic=(_Bool)0;
        # 269 "20method.c"
        come_params_158=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value163=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value162=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 269, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 271 "20method.c"
        i_159=0;
        # 299 "20method.c"
        for(        o2_saved_160=(params_137),it_163=list$1tuple2$2charphsNodephph_begin((o2_saved_160));        !list$1tuple2$2charphsNodephph_end((o2_saved_160));        it_163=list$1tuple2$2charphsNodephph_next((o2_saved_160))        ){
            # 273 "20method.c"
            multiple_assign_var2=it_163;
            label_166=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            node_167=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
            # 297 "20method.c"
            # 275 "20method.c"
            if(_if_conditional238=i_159==0,            _if_conditional238) {
                # 276 "20method.c"
                list$1CVALUEph_push_back(come_params_158,(struct CVALUE*)come_increment_ref_count(obj_value_142));
                # 277 "20method.c"
                i_159++;
            }
            else {
                # 284 "20method.c"
                # 280 "20method.c"
                if(_if_conditional239=!node_compile(node_167,info),                _if_conditional239) {
                    # 281 "20method.c"
                    __result135__ = (_Bool)0;
                    label_166 = come_decrement_ref_count2(label_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_167) { node_167 = come_decrement_ref_count2(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,result_type_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result135__;
                }
                # 284 "20method.c"
                come_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value164=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 286 "20method.c"
                check_assign_type(((char*)(right_value167=xsprintf("\%s param num \%s is assinged to",((char*)(right_value165=charp_to_string(fun_name_136))),((char*)(right_value166=int_to_string(i_159)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_146->mParamTypes,i_159-1), "20method.c", 286, 2)),come_value_168->type,come_value_168,(_Bool)0,(_Bool)1,info);
                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 292 "20method.c"
                # 287 "20method.c"
                if(_if_conditional242=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_146->mParamTypes,i_159-1), "20method.c", 287, 3))->mHeap&&come_value_168->type->mHeap,                _if_conditional242) {
                    # 289 "20method.c"
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_146->mParamTypes,i_159-1), "20method.c", 289, 4)),come_value_168->type,come_value_168,info);
                }
                # 292 "20method.c"
                list$1CVALUEph_push_back(come_params_158,(struct CVALUE*)come_increment_ref_count(come_value_168));
                # 294 "20method.c"
                i_159++;
                # 295 "20method.c"
                dec_stack_ptr(1,info);
                come_call_finalizer2(CVALUE_finalize,come_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            label_166 = come_decrement_ref_count2(label_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_167) { node_167 = come_decrement_ref_count2(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 299 "20method.c"
        buf_172=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value168=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 299, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 301 "20method.c"
        buffer_append_str(buf_172,((char*)(right_value170=xsprintf("%s->%s",obj_value_142->c_value,fun_name_136))));
        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 302 "20method.c"
        buffer_append_str(buf_172,"(");
        # 304 "20method.c"
        j_173=0;
        # 317 "20method.c"
        for(        o2_saved_174=(struct list$1CVALUEph*)come_increment_ref_count((come_params_158)),it_177=list$1CVALUEph_begin((o2_saved_174));        !list$1CVALUEph_end((o2_saved_174));        it_177=list$1CVALUEph_next((o2_saved_174))        ){
            # 309 "20method.c"
            # 306 "20method.c"
            if(_if_conditional247=j_173==0,            _if_conditional247) {
                # 307 "20method.c"
                __dec_obj61=it_177->c_value;
                it_177->c_value=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("%s->_protocol_obj",it_177->c_value))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 309 "20method.c"
            buffer_append_str(buf_172,it_177->c_value);
            # 315 "20method.c"
            # 311 "20method.c"
            if(_if_conditional249=j_173!=list$1CVALUEph_length(come_params_158)-1,            _if_conditional249) {
                # 312 "20method.c"
                buffer_append_str(buf_172,",");
            }
            # 315 "20method.c"
            j_173++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 317 "20method.c"
        buffer_append_str(buf_172,")");
        # 319 "20method.c"
        come_value2_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 319, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 321 "20method.c"
        __dec_obj62=come_value2_180->c_value;
        come_value2_180->c_value=(char*)come_increment_ref_count(((char*)(right_value173=buffer_to_string(buf_172))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 323 "20method.c"
        result_type2_181=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=solve_generics(result_type_155,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 329 "20method.c"
        # 325 "20method.c"
        if(result_type2_181->mHeap) {
            # 326 "20method.c"
            __dec_obj63=come_value2_180->c_value;
            come_value2_180->c_value=(char*)come_increment_ref_count(((char*)(right_value176=append_object_to_right_values(((char*)(right_value175=buffer_to_string(buf_172))),(struct sType*)come_increment_ref_count(result_type2_181),info))));
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 329 "20method.c"
        __dec_obj64=come_value2_180->type;
        come_value2_180->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(result_type2_181))));
        come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 330 "20method.c"
        come_value2_180->type->mStatic=(_Bool)0;
        # 331 "20method.c"
        come_value2_180->var=((void*)0);
        # 333 "20method.c"
        add_come_last_code(info,"%s;\n",come_value2_180->c_value);
        # 335 "20method.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_180));
        come_call_finalizer2(sType_finalize,result_type_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 338 "20method.c"
        generics_fun_name_182=(char*)come_increment_ref_count(((char*)(right_value180=string_to_string(((char*)(right_value179=make_generics_function(obj_type_143,(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string(fun_name_136)))),info,(_Bool)1)))))));
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 340 "20method.c"
        fun_183=((void*)0);
        # 353 "20method.c"
        for(        i_184=128;        i_184>=1;        i_184--        ){
            # 343 "20method.c"
            new_fun_name_185=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("%s_v%d",generics_fun_name_182,i_184))));
            right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 345 "20method.c"
            fun_183=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_185);
            # 351 "20method.c"
            # 347 "20method.c"
            if(_if_conditional270=fun_183!=((void*)0),            _if_conditional270) {
                # 348 "20method.c"
                __dec_obj65=generics_fun_name_182;
                generics_fun_name_182=(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(new_fun_name_185))));
                __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 349 "20method.c"
                new_fun_name_185 = come_decrement_ref_count2(new_fun_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_185 = come_decrement_ref_count2(new_fun_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 394 "20method.c"
        # 353 "20method.c"
        if(_if_conditional271=fun_183==((void*)0),        _if_conditional271) {
            # 354 "20method.c"
            obj_array_type_189=obj_type_143->mOriginalLoadVarType->v1;
            # 393 "20method.c"
            # 356 "20method.c"
            if(_if_conditional272=obj_array_type_189&&list$1sNodeph_length(obj_array_type_189->mArrayNum)>0,            _if_conditional272) {
                # 357 "20method.c"
                array_method_name_190=(char*)come_increment_ref_count(((char*)(right_value183=create_method_name(obj_array_type_189,(_Bool)0,fun_name_136,info,(_Bool)0))));
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 359 "20method.c"
                fun_183=map$2charphsFunph_at(info->funcs,array_method_name_190,((void*)0));
                # 378 "20method.c"
                # 361 "20method.c"
                if(fun_183) {
                    # 362 "20method.c"
                    __dec_obj66=generics_fun_name_182;
                    generics_fun_name_182=(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string(array_method_name_190))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 365 "20method.c"
                    fun_183=map$2charphsFunph_at(info->funcs,generics_fun_name_182,((void*)0));
                    # 377 "20method.c"
                    # 367 "20method.c"
                    if(_if_conditional278=fun_183==((void*)0),                    _if_conditional278) {
                        # 368 "20method.c"
                        __dec_obj67=generics_fun_name_182;
                        generics_fun_name_182=(char*)come_increment_ref_count(((char*)(right_value186=create_method_name(obj_type_143,(_Bool)0,((char*)(right_value185=__builtin_string(fun_name_136))),info,(_Bool)1))));
                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 370 "20method.c"
                        fun_183=map$2charphsFunph_at(info->funcs,generics_fun_name_182,((void*)0));
                        # 376 "20method.c"
                        # 372 "20method.c"
                        if(_if_conditional279=fun_183==((void*)0),                        _if_conditional279) {
                            # 373 "20method.c"
                            err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_182,info->come_fun->mName);
                            # 374 "20method.c"
                            __result155__ = (_Bool)1;
                            array_method_name_190 = come_decrement_ref_count2(array_method_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result155__;
                        }
                    }
                }
                array_method_name_190 = come_decrement_ref_count2(array_method_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 380 "20method.c"
                fun_183=map$2charphsFunph_at(info->funcs,generics_fun_name_182,((void*)0));
                # 392 "20method.c"
                # 382 "20method.c"
                if(_if_conditional280=fun_183==((void*)0),                _if_conditional280) {
                    # 383 "20method.c"
                    __dec_obj68=generics_fun_name_182;
                    generics_fun_name_182=(char*)come_increment_ref_count(((char*)(right_value188=create_method_name(obj_type_143,(_Bool)0,((char*)(right_value187=__builtin_string(fun_name_136))),info,(_Bool)1))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 385 "20method.c"
                    fun_183=map$2charphsFunph_at(info->funcs,generics_fun_name_182,((void*)0));
                    # 391 "20method.c"
                    # 387 "20method.c"
                    if(_if_conditional281=fun_183==((void*)0),                    _if_conditional281) {
                        # 388 "20method.c"
                        err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_182,info->come_fun->mName);
                        # 389 "20method.c"
                        __result156__ = (_Bool)1;
                        generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result156__;
                    }
                }
            }
        }
        # 399 "20method.c"
        # 394 "20method.c"
        if(_if_conditional282=fun_183==((void*)0),        _if_conditional282) {
            # 395 "20method.c"
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_182,info->come_fun->mName);
            # 396 "20method.c"
            __result157__ = (_Bool)1;
            generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result157__;
        }
        # 404 "20method.c"
        # 399 "20method.c"
        if(_if_conditional284=list$1sTypeph_length(fun_183->mParamTypes)==0,        _if_conditional284) {
            # 400 "20method.c"
            err_msg(info,"Method require function parametor");
            # 401 "20method.c"
            __result160__ = (_Bool)1;
            generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result160__;
        }
        # 404 "20method.c"
        result_type_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(fun_183->mResultType))));
        come_call_finalizer2(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 405 "20method.c"
        result_type_193->mStatic=(_Bool)0;
        # 407 "20method.c"
        result_type2_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=solve_generics(result_type_193,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 409 "20method.c"
        param_types_195=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value192=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value191=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 409, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 421 "20method.c"
        for(        o2_saved_196=(struct list$1sTypeph*)come_increment_ref_count((fun_183->mParamTypes)),it_199=list$1sTypeph_begin((o2_saved_196));        !list$1sTypeph_end((o2_saved_196));        it_199=list$1sTypeph_next((o2_saved_196))        ){
            # 419 "20method.c"
            # 411 "20method.c"
            if(_if_conditional289=it_199==((void*)0),            _if_conditional289) {
                # 412 "20method.c"
                list$1sTypeph_push_back(param_types_195,it_199);
            }
            else {
                # 415 "20method.c"
                it2_205=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=solve_generics(it_199,info->generics_type,info))));
                come_call_finalizer2(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 417 "20method.c"
                list$1sTypeph_push_back(param_types_195,(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_clone(it2_205)))));
                come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,it2_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 421 "20method.c"
        come_params_206=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value199=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value198=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 421, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 427 "20method.c"
        for(        i_207=0;        i_207<list$1sTypeph_length(fun_183->mParamTypes)-(method_block_139?2:0);        i_207++        ){
            # 424 "20method.c"
            list$1CVALUEph_add(come_params_206,((void*)0));
        }
        # 427 "20method.c"
        first_param_211=(_Bool)1;
        # 462 "20method.c"
        for(        o2_saved_212=(params_137),it_213=list$1tuple2$2charphsNodephph_begin((o2_saved_212));        !list$1tuple2$2charphsNodephph_end((o2_saved_212));        it_213=list$1tuple2$2charphsNodephph_next((o2_saved_212))        ){
            # 429 "20method.c"
            multiple_assign_var3=it_213;
            label_214=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_215=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            # 460 "20method.c"
            # 431 "20method.c"
            if(first_param_211) {
                # 432 "20method.c"
                first_param_211=(_Bool)0;
            }
            else {
                # 460 "20method.c"
                # 434 "20method.c"
                if(label_214) {
                    # 439 "20method.c"
                    # 435 "20method.c"
                    if(_if_conditional296=!node_compile(node_215,info),                    _if_conditional296) {
                        # 436 "20method.c"
                        __result170__ = (_Bool)0;
                        label_214 = come_decrement_ref_count2(label_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_215) { node_215 = come_decrement_ref_count2(node_215, ((struct sNode*)node_215)->finalize, ((struct sNode*)node_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result170__;
                    }
                    # 439 "20method.c"
                    come_value_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 440 "20method.c"
                    dec_stack_ptr(1,info);
                    # 442 "20method.c"
                    n_217=0;
                    # 451 "20method.c"
                    for(                    o2_saved_218=(struct list$1charph*)come_increment_ref_count((fun_183->mParamNames)),it_221=list$1charph_begin((o2_saved_218));                    !list$1charph_end((o2_saved_218));                    it_221=list$1charph_next((o2_saved_218))                    ){
                        # 448 "20method.c"
                        # 444 "20method.c"
                        if(_if_conditional301=string_operator_equals(label_214,it_221),                        _if_conditional301) {
                            # 445 "20method.c"
                            break;
                        }
                        # 448 "20method.c"
                        n_217++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 454 "20method.c"
                    # 451 "20method.c"
                    if(_if_conditional302=list$1sTypephp_operator_load_element(param_types_195,n_217),                    _if_conditional302) {
                        # 452 "20method.c"
                        check_assign_type(((char*)(right_value206=xsprintf("\%s param num \%s is assinged to",((char*)(right_value204=charp_to_string(fun_name_136))),((char*)(right_value205=int_to_string(n_217)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,n_217), "20method.c", 452, 5)),come_value_216->type,come_value_216,(_Bool)0,(_Bool)1,info);
                        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 458 "20method.c"
                    # 454 "20method.c"
                    if(_if_conditional303=list$1sTypephp_operator_load_element(param_types_195,n_217)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,n_217), "20method.c", 454, 6))->mHeap&&come_value_216->type->mHeap,                    _if_conditional303) {
                        # 455 "20method.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,n_217), "20method.c", 455, 7)),come_value_216->type,come_value_216,info);
                    }
                    # 458 "20method.c"
                    list$1CVALUEph_replace(come_params_206,n_217,(struct CVALUE*)come_increment_ref_count(come_value_216));
                    come_call_finalizer2(CVALUE_finalize,come_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            label_214 = come_decrement_ref_count2(label_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_215) { node_215 = come_decrement_ref_count2(node_215, ((struct sNode*)node_215)->finalize, ((struct sNode*)node_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 462 "20method.c"
        i_226=0;
        # 510 "20method.c"
        for(        o2_saved_227=(params_137),it_228=list$1tuple2$2charphsNodephph_begin((o2_saved_227));        !list$1tuple2$2charphsNodephph_end((o2_saved_227));        it_228=list$1tuple2$2charphsNodephph_next((o2_saved_227))        ){
            # 464 "20method.c"
            multiple_assign_var4=it_228;
            label_229=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_230=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            # 508 "20method.c"
            # 466 "20method.c"
            if(_if_conditional307=i_226==0,            _if_conditional307) {
                # 467 "20method.c"
                check_assign_type(((char*)(right_value209=xsprintf("\%s param num \%s is assinged to",((char*)(right_value207=charp_to_string(fun_name_136))),((char*)(right_value208=int_to_string(i_226)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 467, 8)),obj_value_142->type,obj_value_142,(_Bool)0,(_Bool)1,info);
                right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 475 "20method.c"
                # 468 "20method.c"
                if(_if_conditional308=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 468, 9))->mHeap&&obj_value_142->type->mHeap,                _if_conditional308) {
                    # 469 "20method.c"
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 469, 10)),obj_value_142->type,obj_value_142,info);
                }
                else {
                    # 475 "20method.c"
                    # 471 "20method.c"
                    if(_if_conditional309=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 471, 11))->mHeap&&!obj_value_142->type->mHeap&&!gComeGC,                    _if_conditional309) {
                        # 472 "20method.c"
                        err_msg(info,"require heap parametor(%s)",((char*)come_null_check(list$1charphp_operator_load_element(fun_183->mParamNames,i_226), "20method.c", 472, 12)));
                        # 473 "20method.c"
                        exit(2);
                    }
                }
                # 475 "20method.c"
                list$1CVALUEph_replace(come_params_206,i_226,(struct CVALUE*)come_increment_ref_count(obj_value_142));
                # 477 "20method.c"
                i_226++;
            }
            else {
                # 508 "20method.c"
                # 479 "20method.c"
                if(label_229) {
                }
                else {
                    # 486 "20method.c"
                    # 482 "20method.c"
                    if(_if_conditional313=!node_compile(node_230,info),                    _if_conditional313) {
                        # 483 "20method.c"
                        __result182__ = (_Bool)0;
                        label_229 = come_decrement_ref_count2(label_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_230) { node_230 = come_decrement_ref_count2(node_230, ((struct sNode*)node_230)->finalize, ((struct sNode*)node_230)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result182__;
                    }
                    # 486 "20method.c"
                    come_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 487 "20method.c"
                    dec_stack_ptr(1,info);
                    # 498 "20method.c"
                    while(_while_condtional28=(_Bool)1,                    _while_condtional28) {
                        # 496 "20method.c"
                        # 490 "20method.c"
                        if(_if_conditional316=list$1CVALUEphp_operator_load_element(come_params_206,i_226)==((void*)0),                        _if_conditional316) {
                            # 491 "20method.c"
                            break;
                        }
                        else {
                            # 494 "20method.c"
                            i_226++;
                        }
                    }
                    # 501 "20method.c"
                    # 498 "20method.c"
                    if(_if_conditional317=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 498, 13)),                    _if_conditional317) {
                        # 499 "20method.c"
                        check_assign_type(((char*)(right_value213=xsprintf("\%s param num \%s is assinged to",((char*)(right_value211=charp_to_string(fun_name_136))),((char*)(right_value212=int_to_string(i_226)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 499, 14)),come_value_234->type,come_value_234,(_Bool)0,(_Bool)1,info);
                        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 505 "20method.c"
                    # 501 "20method.c"
                    if(_if_conditional318=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 501, 15))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 501, 16))->mHeap&&come_value_234->type->mHeap,                    _if_conditional318) {
                        # 502 "20method.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 502, 17)),come_value_234->type,come_value_234,info);
                    }
                    # 505 "20method.c"
                    list$1CVALUEph_replace(come_params_206,i_226,(struct CVALUE*)come_increment_ref_count(come_value_234));
                    # 506 "20method.c"
                    i_226++;
                    come_call_finalizer2(CVALUE_finalize,come_value_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            label_229 = come_decrement_ref_count2(label_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_230) { node_230 = come_decrement_ref_count2(node_230, ((struct sNode*)node_230)->finalize, ((struct sNode*)node_230)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 519 "20method.c"
        while(_while_condtional30=(_Bool)1,        _while_condtional30) {
            # 517 "20method.c"
            # 511 "20method.c"
            if(_if_conditional319=list$1CVALUEphp_operator_load_element(come_params_206,i_226)==((void*)0),            _if_conditional319) {
                # 512 "20method.c"
                break;
            }
            else {
                # 515 "20method.c"
                i_226++;
            }
        }
        # 519 "20method.c"
        obj_array_type_238=obj_type_143->mOriginalLoadVarType->v1;
        # 581 "20method.c"
        # 520 "20method.c"
        if(_if_conditional320=obj_array_type_238&&list$1sNodeph_length(obj_array_type_238->mArrayNum)>0,        _if_conditional320) {
            # 579 "20method.c"
            # 521 "20method.c"
            if(_if_conditional321=charp_operator_equals(fun_name_136,"to_pointer"),            _if_conditional321) {
                # 522 "20method.c"
                buf_239=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value215=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value214=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 522, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 524 "20method.c"
                i_240=0;
                # 541 "20method.c"
                for(                o2_saved_241=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_238->mArrayNum)),it_244=list$1sNodeph_begin((o2_saved_241));                !list$1sNodeph_end((o2_saved_241));                it_244=list$1sNodeph_next((o2_saved_241))                ){
                    # 531 "20method.c"
                    # 526 "20method.c"
                    if(_if_conditional326=!node_compile(it_244,info),                    _if_conditional326) {
                        # 527 "20method.c"
                        err_msg(info,"invalid array num");
                        # 528 "20method.c"
                        exit(1);
                    }
                    # 531 "20method.c"
                    come_value_247=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 532 "20method.c"
                    dec_stack_ptr(1,info);
                    # 534 "20method.c"
                    buffer_append_str(buf_239,((char*)(right_value217=xsprintf("%s",come_value_247->c_value))));
                    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 538 "20method.c"
                    # 535 "20method.c"
                    if(_if_conditional327=i_240!=list$1sNodeph_length(obj_array_type_238->mArrayNum)-1,                    _if_conditional327) {
                        # 536 "20method.c"
                        buffer_append_str(buf_239,"*");
                    }
                    # 538 "20method.c"
                    i_240++;
                    come_call_finalizer2(CVALUE_finalize,come_value_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 541 "20method.c"
                come_value_248=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 541, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 543 "20method.c"
                __dec_obj76=come_value_248->c_value;
                come_value_248->c_value=(char*)come_increment_ref_count(((char*)(right_value219=buffer_to_string(buf_239))));
                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 544 "20method.c"
                come_value_248->var=((void*)0);
                # 545 "20method.c"
                __dec_obj77=come_value_248->type;
                come_value_248->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value220=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 545, "sType")))),"long",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 547 "20method.c"
                list$1CVALUEph_push_back(come_params_206,(struct CVALUE*)come_increment_ref_count(come_value_248));
                # 548 "20method.c"
                list$1tuple2$2charphsNodephph_push_back(params_137,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value227=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value226=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 548, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("len")))),((void*)0))))));
                right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphvoidpp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,buf_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_248, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 579 "20method.c"
                # 550 "20method.c"
                if(_if_conditional331=charp_operator_equals(fun_name_136,"to_buffer"),                _if_conditional331) {
                    # 551 "20method.c"
                    buf_252=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value229=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value228=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 551, "buffer"))))))));
                    come_call_finalizer2(buffer_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 553 "20method.c"
                    i_253=0;
                    # 570 "20method.c"
                    for(                    o2_saved_254=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_238->mArrayNum)),it_255=list$1sNodeph_begin((o2_saved_254));                    !list$1sNodeph_end((o2_saved_254));                    it_255=list$1sNodeph_next((o2_saved_254))                    ){
                        # 560 "20method.c"
                        # 555 "20method.c"
                        if(_if_conditional332=!node_compile(it_255,info),                        _if_conditional332) {
                            # 556 "20method.c"
                            err_msg(info,"invalid array num");
                            # 557 "20method.c"
                            exit(1);
                        }
                        # 560 "20method.c"
                        come_value_256=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))));
                        come_call_finalizer2(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 561 "20method.c"
                        dec_stack_ptr(1,info);
                        # 563 "20method.c"
                        buffer_append_str(buf_252,((char*)(right_value231=xsprintf("%s",come_value_256->c_value))));
                        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 567 "20method.c"
                        # 564 "20method.c"
                        if(_if_conditional333=i_253!=list$1sNodeph_length(obj_array_type_238->mArrayNum)-1,                        _if_conditional333) {
                            # 565 "20method.c"
                            buffer_append_str(buf_252,"*");
                        }
                        # 567 "20method.c"
                        i_253++;
                        come_call_finalizer2(CVALUE_finalize,come_value_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 570 "20method.c"
                    come_value_257=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 570, "CVALUE"))));
                    come_call_finalizer2(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 572 "20method.c"
                    __dec_obj82=come_value_257->c_value;
                    come_value_257->c_value=(char*)come_increment_ref_count(((char*)(right_value233=buffer_to_string(buf_252))));
                    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 573 "20method.c"
                    come_value_257->var=((void*)0);
                    # 574 "20method.c"
                    __dec_obj83=come_value_257->type;
                    come_value_257->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 574, "sType")))),"long",(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 576 "20method.c"
                    list$1CVALUEph_push_back(come_params_206,(struct CVALUE*)come_increment_ref_count(come_value_257));
                    # 577 "20method.c"
                    list$1tuple2$2charphsNodephph_push_back(params_137,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value238=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value237=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 577, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value236=xsprintf("len")))),((void*)0))))));
                    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple2$2charphvoidpp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,buf_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 625 "20method.c"
        # 581 "20method.c"
        if(_if_conditional335=list$1tuple2$2charphsNodephph_length(params_137)<list$1sTypeph_length(fun_183->mParamTypes)+(method_block_139?-2:0),        _if_conditional335) {
            # 623 "20method.c"
            for(            ;            i_226<list$1sTypeph_length(fun_183->mParamTypes)+(method_block_139?-2:0);            i_226++            ){
                # 584 "20method.c"
                default_param_258=(char*)come_increment_ref_count(((char*)(right_value239=string_clone(list$1charphp_operator_load_element(fun_183->mParamDefaultParametors,i_226)))));
                right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 585 "20method.c"
                param_name_259=((char*)come_null_check(list$1charphp_operator_load_element(fun_183->mParamNames,i_226), "20method.c", 585, 18));
                # 622 "20method.c"
                # 587 "20method.c"
                if(_if_conditional336=default_param_258&&string_operator_not_equals(default_param_258,""),                _if_conditional336) {
                    # 588 "20method.c"
                    source_260=(struct buffer*)come_increment_ref_count(info->source);
                    # 589 "20method.c"
                    p_261=info->p;
                    # 590 "20method.c"
                    head_262=info->head;
                    # 591 "20method.c"
                    sline_263=info->sline;
                    # 593 "20method.c"
                    __dec_obj84=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value240=string_to_buffer(default_param_258))));
                    come_call_finalizer2(buffer_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 594 "20method.c"
                    info->p=info->source->buf;
                    # 595 "20method.c"
                    info->head=info->source->buf;
                    # 597 "20method.c"
                    node_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=expression_v13(info))));
                    if(right_value241) { right_value241 = come_decrement_ref_count2(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 603 "20method.c"
                    # 599 "20method.c"
                    if(_if_conditional337=!node_compile(node_264,info),                    _if_conditional337) {
                        # 600 "20method.c"
                        __result196__ = (_Bool)0;
                        come_call_finalizer2(buffer_finalize,source_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(node_264) { node_264 = come_decrement_ref_count2(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_258 = come_decrement_ref_count2(default_param_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result196__;
                    }
                    # 603 "20method.c"
                    __dec_obj85=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_260);
                    come_call_finalizer2(buffer_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 604 "20method.c"
                    info->p=p_261;
                    # 605 "20method.c"
                    info->head=head_262;
                    # 606 "20method.c"
                    info->sline=sline_263;
                    # 608 "20method.c"
                    come_value_265=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 612 "20method.c"
                    # 609 "20method.c"
                    if(_if_conditional338=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 609, 19)),                    _if_conditional338) {
                        # 610 "20method.c"
                        check_assign_type(((char*)(right_value245=xsprintf("\%s param num \%s is assinged to",((char*)(right_value243=charp_to_string(fun_name_136))),((char*)(right_value244=int_to_string(i_226)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 610, 20)),come_value_265->type,come_value_265,(_Bool)0,(_Bool)1,info);
                        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 615 "20method.c"
                    # 612 "20method.c"
                    if(_if_conditional339=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 612, 21))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 612, 22))->mHeap&&come_value_265->type->mHeap,                    _if_conditional339) {
                        # 613 "20method.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_195,i_226), "20method.c", 613, 23)),come_value_265->type,come_value_265,info);
                    }
                    # 615 "20method.c"
                    list$1CVALUEph_replace(come_params_206,i_226,(struct CVALUE*)come_increment_ref_count(come_value_265));
                    # 616 "20method.c"
                    dec_stack_ptr(1,info);
                    come_call_finalizer2(buffer_finalize,source_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(node_264) { node_264 = come_decrement_ref_count2(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 619 "20method.c"
                    err_msg(info,"require parametor(%s) %d",fun_183->mName,i_226);
                    # 620 "20method.c"
                    __result197__ = (_Bool)0;
                    default_param_258 = come_decrement_ref_count2(default_param_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result197__;
                }
                default_param_258 = come_decrement_ref_count2(default_param_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 746 "20method.c"
        # 625 "20method.c"
        if(method_block_139) {
            # 626 "20method.c"
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 626, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value247=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value246=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 626, "sCurrentNode")))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sCurrentNode_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value250=_inf_value1)));
            come_call_finalizer2(sCurrentNode_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sCurrentNode_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value250) { right_value250 = come_decrement_ref_count2(right_value250, ((struct sNode*)right_value250)->finalize, ((struct sNode*)right_value250)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 632 "20method.c"
            # 628 "20method.c"
            if(_if_conditional345=!node_compile(current_stack_frame_node_267,info),            _if_conditional345) {
                # 629 "20method.c"
                __result200__ = (_Bool)0;
                if(current_stack_frame_node_267) { current_stack_frame_node_267 = come_decrement_ref_count2(current_stack_frame_node_267, ((struct sNode*)current_stack_frame_node_267)->finalize, ((struct sNode*)current_stack_frame_node_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result200__;
            }
            # 632 "20method.c"
            come_value_268=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 633 "20method.c"
            list$1CVALUEph_push_back(come_params_206,(struct CVALUE*)come_increment_ref_count(come_value_268));
            # 634 "20method.c"
            dec_stack_ptr(1,info);
            # 636 "20method.c"
            method_block2_269=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value253=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value252=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 636, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 637 "20method.c"
            method_block_type_270=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_183->mParamTypes,-1), "20method.c", 637, 24))))));
            come_call_finalizer2(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 639 "20method.c"
            class_name_271=(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("__current_stack%d__",info->current_stack_num))));
            right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 641 "20method.c"
            ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_270->mParamTypes,0), "20method.c", 641, 25))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_271);
            # 642 "20method.c"
            current_stack_frame_struct_275=info->current_stack_frame_struct;
            # 643 "20method.c"
            info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_271);
            # 645 "20method.c"
            info->num_method_block++;
            # 652 "20method.c"
            # 647 "20method.c"
            if(_if_conditional350=string_operator_not_equals(method_block_type_270->mClass->mName,"lambda"),            _if_conditional350) {
                # 648 "20method.c"
                err_msg(info,"This function does not have method block(%s)",fun_name_136);
                # 649 "20method.c"
                __result205__ = (_Bool)0;
                if(current_stack_frame_node_267) { current_stack_frame_node_267 = come_decrement_ref_count2(current_stack_frame_node_267, ((struct sNode*)current_stack_frame_node_267)->finalize, ((struct sNode*)current_stack_frame_node_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_271 = come_decrement_ref_count2(class_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result205__;
            }
            # 652 "20method.c"
            result_type_276=(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=sType_clone(method_block_type_270->mResultType->v1))));
            come_call_finalizer2(sType_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 653 "20method.c"
            result_type_276->mStatic=(_Bool)0;
            # 654 "20method.c"
            param_types_277=method_block_type_270->mParamTypes;
            # 655 "20method.c"
            param_names_278=method_block_type_270->mParamNames;
            # 657 "20method.c"
            all_alhabet_sname_279=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value258=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value257=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 657, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 670 "20method.c"
            {
                # 659 "20method.c"
                p_280=info->sname;
                # 668 "20method.c"
                while(_while_condtional32=*p_280,                _while_condtional32) {
                    # 667 "20method.c"
                    # 661 "20method.c"
                    if(_if_conditional351=xisalnum(*p_280),                    _if_conditional351) {
                        # 662 "20method.c"
                        buffer_append_char(all_alhabet_sname_279,*p_280++);
                    }
                    else {
                        # 665 "20method.c"
                        p_280++;
                    }
                }
            }
            # 670 "20method.c"
            buffer_append_str(method_block2_269,((char*)(right_value261=xsprintf("%s method_block%d_%s(",((char*)(right_value259=make_type_name_string(result_type_276,(_Bool)0,(_Bool)0,(_Bool)0,info))),info->num_method_block,((char*)(right_value260=buffer_to_string(all_alhabet_sname_279)))))));
            right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 672 "20method.c"
            i_281=0;
            # 697 "20method.c"
            for(            o2_saved_282=(param_types_277),it_283=list$1sTypeph_begin((o2_saved_282));            !list$1sTypeph_end((o2_saved_282));            it_283=list$1sTypeph_next((o2_saved_282))            ){
                # 674 "20method.c"
                param_type_284=it_283;
                # 691 "20method.c"
                # 675 "20method.c"
                if(_if_conditional352=i_281==0,                _if_conditional352) {
                    # 676 "20method.c"
                    param_name_285=(char*)come_increment_ref_count(((char*)(right_value262=xsprintf("parent"))));
                    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 678 "20method.c"
                    buffer_append_str(method_block2_269,((char*)(right_value264=xsprintf("%s",((char*)(right_value263=make_define_var(param_type_284,param_name_285,(_Bool)0,info)))))));
                    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    param_name_285 = come_decrement_ref_count2(param_name_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 691 "20method.c"
                    # 680 "20method.c"
                    if(_if_conditional353=i_281==1,                    _if_conditional353) {
                        # 681 "20method.c"
                        param_name_286=(char*)come_increment_ref_count(((char*)(right_value265=xsprintf("it"))));
                        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 683 "20method.c"
                        buffer_append_str(method_block2_269,((char*)(right_value267=xsprintf("%s",((char*)(right_value266=make_define_var(param_type_284,param_name_286,(_Bool)0,info)))))));
                        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_286 = come_decrement_ref_count2(param_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 686 "20method.c"
                        param_name_287=(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("it%d",i_281))));
                        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 688 "20method.c"
                        buffer_append_str(method_block2_269,((char*)(right_value270=xsprintf("%s",((char*)(right_value269=make_define_var(param_type_284,param_name_287,(_Bool)0,info)))))));
                        right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_287 = come_decrement_ref_count2(param_name_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                # 695 "20method.c"
                # 691 "20method.c"
                if(_if_conditional354=i_281!=list$1sTypeph_length(param_types_277)-1,                _if_conditional354) {
                    # 692 "20method.c"
                    buffer_append_str(method_block2_269,",");
                }
                # 695 "20method.c"
                i_281++;
            }
            # 697 "20method.c"
            buffer_append_str(method_block2_269,")\n");
            # 699 "20method.c"
            buffer_append_str(method_block2_269,((char*)(right_value271=buffer_to_string(method_block_139))));
            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 701 "20method.c"
            source3_288=(struct buffer*)come_increment_ref_count(info->source);
            # 702 "20method.c"
            p_289=info->p;
            # 703 "20method.c"
            head_290=info->head;
            # 704 "20method.c"
            sline_291=info->sline;
            # 707 "20method.c"
            __dec_obj87=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_269);
            come_call_finalizer2(buffer_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 708 "20method.c"
            info->p=info->source->buf;
            # 709 "20method.c"
            info->head=info->source->buf;
            # 710 "20method.c"
            info->sline=method_block_sline_140;
            # 713 "20method.c"
            node_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value272=parse_function(info))));
            if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 719 "20method.c"
            # 715 "20method.c"
            if(_if_conditional355=!node_compile(node_292,info),            _if_conditional355) {
                # 716 "20method.c"
                __result206__ = (_Bool)0;
                if(current_stack_frame_node_267) { current_stack_frame_node_267 = come_decrement_ref_count2(current_stack_frame_node_267, ((struct sNode*)current_stack_frame_node_267)->finalize, ((struct sNode*)current_stack_frame_node_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_271 = come_decrement_ref_count2(class_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,all_alhabet_sname_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,source3_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_292) { node_292 = come_decrement_ref_count2(node_292, ((struct sNode*)node_292)->finalize, ((struct sNode*)node_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result206__;
            }
            # 719 "20method.c"
            method_block_name_293=(char*)come_increment_ref_count(((char*)(right_value274=xsprintf("method_block%d_%s",info->num_method_block,((char*)(right_value273=buffer_to_string(all_alhabet_sname_279)))))));
            right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 721 "20method.c"
            come_value2_294=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 721, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 723 "20method.c"
            fun2_295=map$2charphsFunph_at(info->funcs,method_block_name_293,((void*)0));
            # 730 "20method.c"
            # 725 "20method.c"
            if(_if_conditional356=fun2_295==((void*)0),            _if_conditional356) {
                # 726 "20method.c"
                err_msg(info,"method block function not found(%s)",method_block_name_293);
                # 727 "20method.c"
                __result207__ = (_Bool)1;
                if(current_stack_frame_node_267) { current_stack_frame_node_267 = come_decrement_ref_count2(current_stack_frame_node_267, ((struct sNode*)current_stack_frame_node_267)->finalize, ((struct sNode*)current_stack_frame_node_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_271 = come_decrement_ref_count2(class_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,all_alhabet_sname_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,source3_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_292) { node_292 = come_decrement_ref_count2(node_292, ((struct sNode*)node_292)->finalize, ((struct sNode*)node_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                method_block_name_293 = come_decrement_ref_count2(method_block_name_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value2_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result207__;
            }
            # 730 "20method.c"
            method_block_type2_296=fun2_295->mLambdaType;
            # 732 "20method.c"
            __dec_obj88=come_value2_294->c_value;
            come_value2_294->c_value=(char*)come_increment_ref_count(((char*)(right_value276=xsprintf("(void*)%s",method_block_name_293))));
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 733 "20method.c"
            __dec_obj89=come_value2_294->type;
            come_value2_294->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_clone(method_block_type2_296))));
            come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 734 "20method.c"
            come_value2_294->var=((void*)0);
            # 736 "20method.c"
            list$1CVALUEph_push_back(come_params_206,(struct CVALUE*)come_increment_ref_count(come_value2_294));
            # 738 "20method.c"
            __dec_obj90=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_288);
            come_call_finalizer2(buffer_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 739 "20method.c"
            info->p=p_289;
            # 740 "20method.c"
            info->head=head_290;
            # 741 "20method.c"
            info->sline=sline_291;
            # 743 "20method.c"
            info->current_stack_frame_struct=current_stack_frame_struct_275;
            if(current_stack_frame_node_267) { current_stack_frame_node_267 = come_decrement_ref_count2(current_stack_frame_node_267, ((struct sNode*)current_stack_frame_node_267)->finalize, ((struct sNode*)current_stack_frame_node_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,method_block2_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,method_block_type_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            class_name_271 = come_decrement_ref_count2(class_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,all_alhabet_sname_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source3_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node_292) { node_292 = come_decrement_ref_count2(node_292, ((struct sNode*)node_292)->finalize, ((struct sNode*)node_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_293 = come_decrement_ref_count2(method_block_name_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value2_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 746 "20method.c"
        buf_297=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value279=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value278=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 746, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 748 "20method.c"
        buffer_append_str(buf_297,generics_fun_name_182);
        # 749 "20method.c"
        buffer_append_str(buf_297,"(");
        # 752 "20method.c"
        j_298=0;
        # 762 "20method.c"
        for(        o2_saved_299=(struct list$1CVALUEph*)come_increment_ref_count((come_params_206)),it_300=list$1CVALUEph_begin((o2_saved_299));        !list$1CVALUEph_end((o2_saved_299));        it_300=list$1CVALUEph_next((o2_saved_299))        ){
            # 754 "20method.c"
            buffer_append_str(buf_297,it_300->c_value);
            # 760 "20method.c"
            # 756 "20method.c"
            if(_if_conditional357=j_298!=list$1CVALUEph_length(come_params_206)-1,            _if_conditional357) {
                # 757 "20method.c"
                buffer_append_str(buf_297,",");
            }
            # 760 "20method.c"
            j_298++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 762 "20method.c"
        buffer_append_str(buf_297,")");
        # 765 "20method.c"
        come_value2_301=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 765, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 767 "20method.c"
        __dec_obj91=come_value2_301->c_value;
        come_value2_301->c_value=(char*)come_increment_ref_count(((char*)(right_value281=buffer_to_string(buf_297))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 768 "20method.c"
        __dec_obj92=come_value2_301->type;
        come_value2_301->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(result_type2_194))));
        come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 769 "20method.c"
        come_value2_301->type->mStatic=(_Bool)0;
        # 770 "20method.c"
        come_value2_301->var=((void*)0);
        # 776 "20method.c"
        # 772 "20method.c"
        if(result_type2_194->mHeap) {
            # 773 "20method.c"
            __dec_obj93=come_value2_301->c_value;
            come_value2_301->c_value=(char*)come_increment_ref_count(((char*)(right_value283=append_object_to_right_values(come_value2_301->c_value,(struct sType*)come_increment_ref_count(result_type2_194),info))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 776 "20method.c"
        __dec_obj94=come_value2_301->c_value;
        come_value2_301->c_value=(char*)come_increment_ref_count(((char*)(right_value284=append_stackframe(come_value2_301->c_value,come_value2_301->type,info))));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 778 "20method.c"
        add_come_last_code(info,"%s;\n",come_value2_301->c_value);
        # 780 "20method.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_301));
        # 848 "20method.c"
        # 782 "20method.c"
        if(method_block_139) {
            # 783 "20method.c"
            var_name_302=(char*)come_increment_ref_count(((char*)(right_value285=xsprintf("__current_stack%d__",info->num_current_stack))));
            right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 785 "20method.c"
            result_type_303=(struct sType*)come_increment_ref_count(((struct sType*)(right_value286=sType_clone(info->come_fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 787 "20method.c"
            result_type2_304=(struct sType*)come_increment_ref_count(((struct sType*)(right_value287=solve_generics(result_type_303,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 789 "20method.c"
            result_type3_305=result_type2_304->mNoSolvedGenericsType->v1;
            # 797 "20method.c"
            # 790 "20method.c"
            if(result_type2_304->mNoSolvedGenericsType->v1) {
                # 791 "20method.c"
                result_type3_305=result_type2_304->mNoSolvedGenericsType->v1;
            }
            else {
                # 794 "20method.c"
                result_type3_305=result_type2_304;
            }
            # 847 "20method.c"
            # 797 "20method.c"
            if(info->in_loop) {
                # 830 "20method.c"
                # 798 "20method.c"
                if(_if_conditional362=string_operator_equals(result_type3_305->mClass->mName,"void")&&result_type3_305->mPointerNum==0,                _if_conditional362) {
                    # 812 "20method.c"
                    add_come_last_code3(info,((char*)(right_value291=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 4)\n                        {\n                            return;\n                        }\n",((char*)(right_value288=string_to_string(var_name_302))),((char*)(right_value289=string_to_string(var_name_302))),((char*)(right_value290=string_to_string(var_name_302)))))));
                    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 828 "20method.c"
                    add_come_last_code3(info,((char*)(right_value298=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 3)\n                        {\n                            return (\%s)\%s.__method_block_return_value__;\n                        }\n",((char*)(right_value292=string_to_string(var_name_302))),((char*)(right_value293=string_to_string(var_name_302))),((char*)(right_value294=string_to_string(var_name_302))),((char*)(right_value296=string_to_string(((char*)(right_value295=make_type_name_string(result_type2_304,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value297=string_to_string(var_name_302)))))));
                    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                # 847 "20method.c"
                # 831 "20method.c"
                if(_if_conditional363=string_operator_equals(result_type3_305->mClass->mName,"void")&&result_type3_305->mPointerNum==0,                _if_conditional363) {
                    # 837 "20method.c"
                    add_come_last_code3(info,((char*)(right_value300=xsprintf("                    if(\%s.__method_block_result_kind__ == 4)\n                    {\n                        return;\n                    }\n",((char*)(right_value299=string_to_string(var_name_302)))))));
                    right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 845 "20method.c"
                    add_come_last_code3(info,((char*)(right_value305=xsprintf("                    if(\%s.__method_block_result_kind__ == 3)\n                    {\n                        return (\%s)\%s.__method_block_return_value__;\n                    }\n",((char*)(right_value301=string_to_string(var_name_302))),((char*)(right_value303=string_to_string(((char*)(right_value302=make_type_name_string(result_type2_304,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value304=string_to_string(var_name_302)))))));
                    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            var_name_302 = come_decrement_ref_count2(var_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 850 "20method.c"
    come_call_finalizer2(list$1sTypephp_finalize,info->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 851 "20method.c"
    __dec_obj95=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_141);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 853 "20method.c"
    __result208__ = (_Bool)1;
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result208__;
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional228;
struct tuple2$2charphsTypeph* result_148;
struct tuple2$2charphsTypeph* __result120__;
_Bool _if_conditional229;
struct tuple2$2charphsTypeph* __result121__;
struct tuple2$2charphsTypeph* result_149;
struct tuple2$2charphsTypeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_148, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_149, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 290 "./comelang2.h"
        # 285 "./comelang2.h"
        if(_if_conditional228=self==((void*)0),        _if_conditional228) {
            # 286 "./comelang2.h"
            # 287 "./comelang2.h"
            memset(&result_148,0,sizeof(struct tuple2$2charphsTypeph*));
            # 288 "./comelang2.h"
            __result120__ = __result_obj__ = result_148;
            return __result120__;
        }
        # 290 "./comelang2.h"
        self->it=self->head;
        # 296 "./comelang2.h"
        # 292 "./comelang2.h"
        if(self->it) {
            # 293 "./comelang2.h"
            __result121__ = __result_obj__ = self->it->item;
            return __result121__;
        }
        # 296 "./comelang2.h"
        # 297 "./comelang2.h"
        memset(&result_149,0,sizeof(struct tuple2$2charphsTypeph*));
        # 298 "./comelang2.h"
        __result122__ = __result_obj__ = result_149;
        return __result122__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./comelang2.h"
        __result123__ = self==((void*)0)||self->it==((void*)0);
        return __result123__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional230;
struct tuple2$2charphsTypeph* result_151;
struct tuple2$2charphsTypeph* __result124__;
_Bool _if_conditional231;
struct tuple2$2charphsTypeph* __result125__;
struct tuple2$2charphsTypeph* result_152;
struct tuple2$2charphsTypeph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_151, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_152, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 308 "./comelang2.h"
        # 302 "./comelang2.h"
        if(_if_conditional230=self==((void*)0)||self->it==((void*)0),        _if_conditional230) {
            # 303 "./comelang2.h"
            # 304 "./comelang2.h"
            memset(&result_151,0,sizeof(struct tuple2$2charphsTypeph*));
            # 305 "./comelang2.h"
            __result124__ = __result_obj__ = result_151;
            return __result124__;
        }
        # 308 "./comelang2.h"
        self->it=self->it->next;
        # 314 "./comelang2.h"
        # 310 "./comelang2.h"
        if(self->it) {
            # 311 "./comelang2.h"
            __result125__ = __result_obj__ = self->it->item;
            return __result125__;
        }
        # 314 "./comelang2.h"
        # 315 "./comelang2.h"
        memset(&result_152,0,sizeof(struct tuple2$2charphsTypeph*));
        # 316 "./comelang2.h"
        __result126__ = __result_obj__ = result_152;
        return __result126__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "./comelang2.h"
            self->head=((void*)0);
            # 105 "./comelang2.h"
            self->tail=((void*)0);
            # 106 "./comelang2.h"
            self->len=0;
            # 108 "./comelang2.h"
            __result127__ = __result_obj__ = self;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result127__;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_156;
_Bool _while_condtional22;
struct list_item$1CVALUEph* prev_it_157;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_156, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_157, 0, sizeof(struct list_item$1CVALUEph*));
                # 123 "./comelang2.h"
                it_156=self->head;
                # 129 "./comelang2.h"
                while(_while_condtional22=it_156!=((void*)0),                _while_condtional22) {
                    # 125 "./comelang2.h"
                    prev_it_157=it_156;
                    # 126 "./comelang2.h"
                    it_156=it_156->next;
                    # 127 "./comelang2.h"
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional234;
struct tuple2$2charphsNodeph* result_161;
struct tuple2$2charphsNodeph* __result128__;
_Bool _if_conditional235;
struct tuple2$2charphsNodeph* __result129__;
struct tuple2$2charphsNodeph* result_162;
struct tuple2$2charphsNodeph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_161, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_162, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 290 "./comelang2.h"
            # 285 "./comelang2.h"
            if(_if_conditional234=self==((void*)0),            _if_conditional234) {
                # 286 "./comelang2.h"
                # 287 "./comelang2.h"
                memset(&result_161,0,sizeof(struct tuple2$2charphsNodeph*));
                # 288 "./comelang2.h"
                __result128__ = __result_obj__ = result_161;
                return __result128__;
            }
            # 290 "./comelang2.h"
            self->it=self->head;
            # 296 "./comelang2.h"
            # 292 "./comelang2.h"
            if(self->it) {
                # 293 "./comelang2.h"
                __result129__ = __result_obj__ = self->it->item;
                return __result129__;
            }
            # 296 "./comelang2.h"
            # 297 "./comelang2.h"
            memset(&result_162,0,sizeof(struct tuple2$2charphsNodeph*));
            # 298 "./comelang2.h"
            __result130__ = __result_obj__ = result_162;
            return __result130__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./comelang2.h"
            __result131__ = self==((void*)0)||self->it==((void*)0);
            return __result131__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional236;
struct tuple2$2charphsNodeph* result_164;
struct tuple2$2charphsNodeph* __result132__;
_Bool _if_conditional237;
struct tuple2$2charphsNodeph* __result133__;
struct tuple2$2charphsNodeph* result_165;
struct tuple2$2charphsNodeph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_165, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 308 "./comelang2.h"
            # 302 "./comelang2.h"
            if(_if_conditional236=self==((void*)0)||self->it==((void*)0),            _if_conditional236) {
                # 303 "./comelang2.h"
                # 304 "./comelang2.h"
                memset(&result_164,0,sizeof(struct tuple2$2charphsNodeph*));
                # 305 "./comelang2.h"
                __result132__ = __result_obj__ = result_164;
                return __result132__;
            }
            # 308 "./comelang2.h"
            self->it=self->it->next;
            # 314 "./comelang2.h"
            # 310 "./comelang2.h"
            if(self->it) {
                # 311 "./comelang2.h"
                __result133__ = __result_obj__ = self->it->item;
                return __result133__;
            }
            # 314 "./comelang2.h"
            # 315 "./comelang2.h"
            memset(&result_165,0,sizeof(struct tuple2$2charphsNodeph*));
            # 316 "./comelang2.h"
            __result134__ = __result_obj__ = result_165;
            return __result134__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional240;
struct list_item$1sTypeph* it_169;
int i_170;
_Bool _while_condtional23;
_Bool _if_conditional241;
struct sType* __result136__;
struct sType* default_value_171;
struct sType* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_169, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_170, 0, sizeof(int));
memset(&default_value_171, 0, sizeof(struct sType*));
                    # 686 "./comelang2.h"
                    # 682 "./comelang2.h"
                    if(_if_conditional240=position<0,                    _if_conditional240) {
                        # 683 "./comelang2.h"
                        position+=self->len;
                    }
                    # 686 "./comelang2.h"
                    it_169=self->head;
                    # 687 "./comelang2.h"
                    i_170=0;
                    # 694 "./comelang2.h"
                    while(_while_condtional23=it_169!=((void*)0),                    _while_condtional23) {
                        # 692 "./comelang2.h"
                        # 689 "./comelang2.h"
                        if(_if_conditional241=position==i_170,                        _if_conditional241) {
                            # 690 "./comelang2.h"
                            __result136__ = __result_obj__ = it_169->item;
                            return __result136__;
                        }
                        # 692 "./comelang2.h"
                        it_169=it_169->next;
                        # 693 "./comelang2.h"
                        i_170++;
                    }
                    # 696 "./comelang2.h"
                    # 697 "./comelang2.h"
                    memset(&default_value_171,0,sizeof(struct sType*));
                    # 698 "./comelang2.h"
                    __result137__ = __result_obj__ = default_value_171;
                    come_call_finalizer2(sType_finalize,default_value_171, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result137__;
                    come_call_finalizer2(sType_finalize,default_value_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional243;
struct CVALUE* result_175;
struct CVALUE* __result138__;
_Bool _if_conditional244;
struct CVALUE* __result139__;
struct CVALUE* result_176;
struct CVALUE* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_175, 0, sizeof(struct CVALUE*));
memset(&result_176, 0, sizeof(struct CVALUE*));
            # 290 "./comelang2.h"
            # 285 "./comelang2.h"
            if(_if_conditional243=self==((void*)0),            _if_conditional243) {
                # 286 "./comelang2.h"
                # 287 "./comelang2.h"
                memset(&result_175,0,sizeof(struct CVALUE*));
                # 288 "./comelang2.h"
                __result138__ = __result_obj__ = result_175;
                return __result138__;
            }
            # 290 "./comelang2.h"
            self->it=self->head;
            # 296 "./comelang2.h"
            # 292 "./comelang2.h"
            if(self->it) {
                # 293 "./comelang2.h"
                __result139__ = __result_obj__ = self->it->item;
                return __result139__;
            }
            # 296 "./comelang2.h"
            # 297 "./comelang2.h"
            memset(&result_176,0,sizeof(struct CVALUE*));
            # 298 "./comelang2.h"
            __result140__ = __result_obj__ = result_176;
            return __result140__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./comelang2.h"
            __result141__ = self==((void*)0)||self->it==((void*)0);
            return __result141__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional245;
struct CVALUE* result_178;
struct CVALUE* __result142__;
_Bool _if_conditional246;
struct CVALUE* __result143__;
struct CVALUE* result_179;
struct CVALUE* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_178, 0, sizeof(struct CVALUE*));
memset(&result_179, 0, sizeof(struct CVALUE*));
            # 308 "./comelang2.h"
            # 302 "./comelang2.h"
            if(_if_conditional245=self==((void*)0)||self->it==((void*)0),            _if_conditional245) {
                # 303 "./comelang2.h"
                # 304 "./comelang2.h"
                memset(&result_178,0,sizeof(struct CVALUE*));
                # 305 "./comelang2.h"
                __result142__ = __result_obj__ = result_178;
                return __result142__;
            }
            # 308 "./comelang2.h"
            self->it=self->it->next;
            # 314 "./comelang2.h"
            # 310 "./comelang2.h"
            if(self->it) {
                # 311 "./comelang2.h"
                __result143__ = __result_obj__ = self->it->item;
                return __result143__;
            }
            # 314 "./comelang2.h"
            # 315 "./comelang2.h"
            memset(&result_179,0,sizeof(struct CVALUE*));
            # 316 "./comelang2.h"
            __result144__ = __result_obj__ = result_179;
            return __result144__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional248;
int __result145__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
                # 367 "./comelang2.h"
                # 364 "./comelang2.h"
                if(_if_conditional248=self==((void*)0),                _if_conditional248) {
                    # 365 "./comelang2.h"
                    __result145__ = 0;
                    return __result145__;
                }
                # 367 "./comelang2.h"
                __result146__ = self->len;
                return __result146__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_186;
unsigned int hash_187;
unsigned int it_188;
_Bool _while_condtional24;
_Bool _if_conditional251;
_Bool _if_conditional252;
struct sFun* __result147__;
_Bool _if_conditional268;
_Bool _if_conditional269;
struct sFun* __result148__;
struct sFun* __result149__;
struct sFun* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_186, 0, sizeof(struct sFun*));
memset(&hash_187, 0, sizeof(unsigned int));
memset(&it_188, 0, sizeof(unsigned int));
                # 1545 "./comelang2.h"
                # 1546 "./comelang2.h"
                memset(&default_value_186,0,sizeof(struct sFun*));
                # 1548 "./comelang2.h"
                hash_187=string_get_hash_key(((char*)key))%self->size;
                # 1549 "./comelang2.h"
                it_188=hash_187;
                # 1573 "./comelang2.h"
                while(_while_condtional24=(_Bool)1,                _while_condtional24) {
                    # 1571 "./comelang2.h"
                    # 1552 "./comelang2.h"
                    if(_if_conditional251=self->item_existance[it_188],                    _if_conditional251) {
                        # 1559 "./comelang2.h"
                        # 1554 "./comelang2.h"
                        if(_if_conditional252=string_equals(self->keys[it_188],key),                        _if_conditional252) {
                            # 1556 "./comelang2.h"
                            __result147__ = __result_obj__ = self->items[it_188];
                            come_call_finalizer2(sFun_finalize,default_value_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result147__;
                        }
                        # 1559 "./comelang2.h"
                        it_188++;
                        # 1567 "./comelang2.h"
                        # 1561 "./comelang2.h"
                        if(_if_conditional268=it_188>=self->size,                        _if_conditional268) {
                            # 1562 "./comelang2.h"
                            it_188=0;
                        }
                        else {
                            # 1567 "./comelang2.h"
                            # 1564 "./comelang2.h"
                            if(_if_conditional269=it_188==hash_187,                            _if_conditional269) {
                                # 1565 "./comelang2.h"
                                __result148__ = __result_obj__ = default_value_186;
                                come_call_finalizer2(sFun_finalize,default_value_186, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result148__;
                            }
                        }
                    }
                    else {
                        # 1569 "./comelang2.h"
                        __result149__ = __result_obj__ = default_value_186;
                        come_call_finalizer2(sFun_finalize,default_value_186, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result149__;
                    }
                }
                # 1573 "./comelang2.h"
                __result150__ = __result_obj__ = default_value_186;
                come_call_finalizer2(sFun_finalize,default_value_186, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result150__;
                come_call_finalizer2(sFun_finalize,default_value_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sFun_finalize"
                                # 0 "sFun_finalize"
                                if(_if_conditional253=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional253) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional254=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional254) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional255=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional255) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional256=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional256) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional257=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional257) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional258=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional258) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional259=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional259) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional262=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional262) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional263=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional263) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional264=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional264) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional265=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional265) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional266=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional266) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional267=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional267) {
                                    # 12 "sFun_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional260;
_Bool _if_conditional261;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sBlock_finalize"
                                        # 0 "sBlock_finalize"
                                        if(_if_conditional260=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional260) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional261=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional261) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_191;
unsigned int it_192;
_Bool _while_condtional25;
_Bool _if_conditional273;
_Bool _if_conditional274;
struct sFun* __result151__;
_Bool _if_conditional275;
_Bool _if_conditional276;
struct sFun* __result152__;
struct sFun* __result153__;
struct sFun* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_191, 0, sizeof(unsigned int));
memset(&it_192, 0, sizeof(unsigned int));
                    # 1226 "./comelang2.h"
                    hash_191=string_get_hash_key(((char*)key))%self->size;
                    # 1227 "./comelang2.h"
                    it_192=hash_191;
                    # 1251 "./comelang2.h"
                    while(_while_condtional25=(_Bool)1,                    _while_condtional25) {
                        # 1249 "./comelang2.h"
                        # 1230 "./comelang2.h"
                        if(_if_conditional273=self->item_existance[it_192],                        _if_conditional273) {
                            # 1237 "./comelang2.h"
                            # 1232 "./comelang2.h"
                            if(_if_conditional274=string_equals(self->keys[it_192],key),                            _if_conditional274) {
                                # 1234 "./comelang2.h"
                                __result151__ = __result_obj__ = self->items[it_192];
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result151__;
                            }
                            # 1237 "./comelang2.h"
                            it_192++;
                            # 1245 "./comelang2.h"
                            # 1239 "./comelang2.h"
                            if(_if_conditional275=it_192>=self->size,                            _if_conditional275) {
                                # 1240 "./comelang2.h"
                                it_192=0;
                            }
                            else {
                                # 1245 "./comelang2.h"
                                # 1242 "./comelang2.h"
                                if(_if_conditional276=it_192==hash_191,                                _if_conditional276) {
                                    # 1243 "./comelang2.h"
                                    __result152__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result152__;
                                }
                            }
                        }
                        else {
                            # 1247 "./comelang2.h"
                            __result153__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result153__;
                        }
                    }
                    # 1251 "./comelang2.h"
                    __result154__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result154__;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional283;
int __result158__;
int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "./comelang2.h"
            # 364 "./comelang2.h"
            if(_if_conditional283=self==((void*)0),            _if_conditional283) {
                # 365 "./comelang2.h"
                __result158__ = 0;
                return __result158__;
            }
            # 367 "./comelang2.h"
            __result159__ = self->len;
            return __result159__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional285;
struct sType* result_197;
struct sType* __result161__;
_Bool _if_conditional286;
struct sType* __result162__;
struct sType* result_198;
struct sType* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_197, 0, sizeof(struct sType*));
memset(&result_198, 0, sizeof(struct sType*));
            # 290 "./comelang2.h"
            # 285 "./comelang2.h"
            if(_if_conditional285=self==((void*)0),            _if_conditional285) {
                # 286 "./comelang2.h"
                # 287 "./comelang2.h"
                memset(&result_197,0,sizeof(struct sType*));
                # 288 "./comelang2.h"
                __result161__ = __result_obj__ = result_197;
                return __result161__;
            }
            # 290 "./comelang2.h"
            self->it=self->head;
            # 296 "./comelang2.h"
            # 292 "./comelang2.h"
            if(self->it) {
                # 293 "./comelang2.h"
                __result162__ = __result_obj__ = self->it->item;
                return __result162__;
            }
            # 296 "./comelang2.h"
            # 297 "./comelang2.h"
            memset(&result_198,0,sizeof(struct sType*));
            # 298 "./comelang2.h"
            __result163__ = __result_obj__ = result_198;
            return __result163__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./comelang2.h"
            __result164__ = self==((void*)0)||self->it==((void*)0);
            return __result164__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional287;
struct sType* result_200;
struct sType* __result165__;
_Bool _if_conditional288;
struct sType* __result166__;
struct sType* result_201;
struct sType* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_200, 0, sizeof(struct sType*));
memset(&result_201, 0, sizeof(struct sType*));
            # 308 "./comelang2.h"
            # 302 "./comelang2.h"
            if(_if_conditional287=self==((void*)0)||self->it==((void*)0),            _if_conditional287) {
                # 303 "./comelang2.h"
                # 304 "./comelang2.h"
                memset(&result_200,0,sizeof(struct sType*));
                # 305 "./comelang2.h"
                __result165__ = __result_obj__ = result_200;
                return __result165__;
            }
            # 308 "./comelang2.h"
            self->it=self->it->next;
            # 314 "./comelang2.h"
            # 310 "./comelang2.h"
            if(self->it) {
                # 311 "./comelang2.h"
                __result166__ = __result_obj__ = self->it->item;
                return __result166__;
            }
            # 314 "./comelang2.h"
            # 315 "./comelang2.h"
            memset(&result_201,0,sizeof(struct sType*));
            # 316 "./comelang2.h"
            __result167__ = __result_obj__ = result_201;
            return __result167__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional290;
void* right_value193;
struct list_item$1sTypeph* litem_202;
struct sType* __dec_obj69;
_Bool _if_conditional291;
void* right_value194;
struct list_item$1sTypeph* litem_203;
struct sType* __dec_obj70;
void* right_value195;
struct list_item$1sTypeph* litem_204;
struct sType* __dec_obj71;
struct list$1sTypeph* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
memset(&litem_202, 0, sizeof(struct list_item$1sTypeph*));
right_value194 = (void*)0;
memset(&litem_203, 0, sizeof(struct list_item$1sTypeph*));
right_value195 = (void*)0;
memset(&litem_204, 0, sizeof(struct list_item$1sTypeph*));
                    # 256 "./comelang2.h"
                    # 225 "./comelang2.h"
                    if(_if_conditional290=self->len==0,                    _if_conditional290) {
                        # 226 "./comelang2.h"
                        litem_202=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value193=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./comelang2.h"
                        litem_202->prev=((void*)0);
                        # 229 "./comelang2.h"
                        litem_202->next=((void*)0);
                        # 230 "./comelang2.h"
                        __dec_obj69=litem_202->item;
                        litem_202->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 232 "./comelang2.h"
                        self->tail=litem_202;
                        # 233 "./comelang2.h"
                        self->head=litem_202;
                    }
                    else {
                        # 256 "./comelang2.h"
                        # 235 "./comelang2.h"
                        if(_if_conditional291=self->len==1,                        _if_conditional291) {
                            # 236 "./comelang2.h"
                            litem_203=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value194=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./comelang2.h"
                            litem_203->prev=self->head;
                            # 239 "./comelang2.h"
                            litem_203->next=((void*)0);
                            # 240 "./comelang2.h"
                            __dec_obj70=litem_203->item;
                            litem_203->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 242 "./comelang2.h"
                            self->tail=litem_203;
                            # 243 "./comelang2.h"
                            self->head->next=litem_203;
                        }
                        else {
                            # 246 "./comelang2.h"
                            litem_204=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value195=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./comelang2.h"
                            litem_204->prev=self->tail;
                            # 249 "./comelang2.h"
                            litem_204->next=((void*)0);
                            # 250 "./comelang2.h"
                            __dec_obj71=litem_204->item;
                            litem_204->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 252 "./comelang2.h"
                            self->tail->next=litem_204;
                            # 253 "./comelang2.h"
                            self->tail=litem_204;
                        }
                    }
                    # 256 "./comelang2.h"
                    self->len++;
                    # 258 "./comelang2.h"
                    __result168__ = __result_obj__ = self;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result168__;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional292;
void* right_value200;
struct list_item$1CVALUEph* litem_208;
struct CVALUE* __dec_obj72;
_Bool _if_conditional293;
void* right_value201;
struct list_item$1CVALUEph* litem_209;
struct CVALUE* __dec_obj73;
void* right_value202;
struct list_item$1CVALUEph* litem_210;
struct CVALUE* __dec_obj74;
struct list$1CVALUEph* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
memset(&litem_208, 0, sizeof(struct list_item$1CVALUEph*));
right_value201 = (void*)0;
memset(&litem_209, 0, sizeof(struct list_item$1CVALUEph*));
right_value202 = (void*)0;
memset(&litem_210, 0, sizeof(struct list_item$1CVALUEph*));
                # 186 "./comelang2.h"
                # 155 "./comelang2.h"
                if(_if_conditional292=self->len==0,                _if_conditional292) {
                    # 156 "./comelang2.h"
                    litem_208=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value200=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 156, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 158 "./comelang2.h"
                    litem_208->prev=((void*)0);
                    # 159 "./comelang2.h"
                    litem_208->next=((void*)0);
                    # 160 "./comelang2.h"
                    __dec_obj72=litem_208->item;
                    litem_208->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 162 "./comelang2.h"
                    self->tail=litem_208;
                    # 163 "./comelang2.h"
                    self->head=litem_208;
                }
                else {
                    # 186 "./comelang2.h"
                    # 165 "./comelang2.h"
                    if(_if_conditional293=self->len==1,                    _if_conditional293) {
                        # 166 "./comelang2.h"
                        litem_209=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value201=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 166, "list_item$1CVALUEph"))));
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 168 "./comelang2.h"
                        litem_209->prev=self->head;
                        # 169 "./comelang2.h"
                        litem_209->next=((void*)0);
                        # 170 "./comelang2.h"
                        __dec_obj73=litem_209->item;
                        litem_209->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer2(CVALUE_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 172 "./comelang2.h"
                        self->tail=litem_209;
                        # 173 "./comelang2.h"
                        self->head->next=litem_209;
                    }
                    else {
                        # 176 "./comelang2.h"
                        litem_210=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value202=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 176, "list_item$1CVALUEph"))));
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 178 "./comelang2.h"
                        litem_210->prev=self->tail;
                        # 179 "./comelang2.h"
                        litem_210->next=((void*)0);
                        # 180 "./comelang2.h"
                        __dec_obj74=litem_210->item;
                        litem_210->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer2(CVALUE_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 182 "./comelang2.h"
                        self->tail->next=litem_210;
                        # 183 "./comelang2.h"
                        self->tail=litem_210;
                    }
                }
                # 186 "./comelang2.h"
                self->len++;
                # 188 "./comelang2.h"
                __result169__ = __result_obj__ = self;
                come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result169__;
                come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional297;
char* result_219;
char* __result171__;
_Bool _if_conditional298;
char* __result172__;
char* result_220;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_219, 0, sizeof(char*));
memset(&result_220, 0, sizeof(char*));
                        # 290 "./comelang2.h"
                        # 285 "./comelang2.h"
                        if(_if_conditional297=self==((void*)0),                        _if_conditional297) {
                            # 286 "./comelang2.h"
                            # 287 "./comelang2.h"
                            memset(&result_219,0,sizeof(char*));
                            # 288 "./comelang2.h"
                            __result171__ = __result_obj__ = result_219;
                            return __result171__;
                        }
                        # 290 "./comelang2.h"
                        self->it=self->head;
                        # 296 "./comelang2.h"
                        # 292 "./comelang2.h"
                        if(self->it) {
                            # 293 "./comelang2.h"
                            __result172__ = __result_obj__ = self->it->item;
                            return __result172__;
                        }
                        # 296 "./comelang2.h"
                        # 297 "./comelang2.h"
                        memset(&result_220,0,sizeof(char*));
                        # 298 "./comelang2.h"
                        __result173__ = __result_obj__ = result_220;
                        return __result173__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 320 "./comelang2.h"
                        __result174__ = self==((void*)0)||self->it==((void*)0);
                        return __result174__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional299;
char* result_222;
char* __result175__;
_Bool _if_conditional300;
char* __result176__;
char* result_223;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_222, 0, sizeof(char*));
memset(&result_223, 0, sizeof(char*));
                        # 308 "./comelang2.h"
                        # 302 "./comelang2.h"
                        if(_if_conditional299=self==((void*)0)||self->it==((void*)0),                        _if_conditional299) {
                            # 303 "./comelang2.h"
                            # 304 "./comelang2.h"
                            memset(&result_222,0,sizeof(char*));
                            # 305 "./comelang2.h"
                            __result175__ = __result_obj__ = result_222;
                            return __result175__;
                        }
                        # 308 "./comelang2.h"
                        self->it=self->it->next;
                        # 314 "./comelang2.h"
                        # 310 "./comelang2.h"
                        if(self->it) {
                            # 311 "./comelang2.h"
                            __result176__ = __result_obj__ = self->it->item;
                            return __result176__;
                        }
                        # 314 "./comelang2.h"
                        # 315 "./comelang2.h"
                        memset(&result_223,0,sizeof(char*));
                        # 316 "./comelang2.h"
                        __result177__ = __result_obj__ = result_223;
                        return __result177__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct list$1CVALUEph* __result178__;
struct list_item$1CVALUEph* it_224;
int i_225;
_Bool _while_condtional26;
_Bool _if_conditional306;
struct CVALUE* __dec_obj75;
struct list$1CVALUEph* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_224, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_225, 0, sizeof(int));
                        # 592 "./comelang2.h"
                        # 588 "./comelang2.h"
                        if(_if_conditional304=position<0,                        _if_conditional304) {
                            # 589 "./comelang2.h"
                            position+=self->len;
                        }
                        # 597 "./comelang2.h"
                        # 592 "./comelang2.h"
                        if(_if_conditional305=position>=self->len,                        _if_conditional305) {
                            # 593 "./comelang2.h"
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            # 594 "./comelang2.h"
                            __result178__ = __result_obj__ = self;
                            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result178__;
                        }
                        # 597 "./comelang2.h"
                        it_224=self->head;
                        # 598 "./comelang2.h"
                        i_225=0;
                        # 608 "./comelang2.h"
                        while(_while_condtional26=it_224!=((void*)0),                        _while_condtional26) {
                            # 604 "./comelang2.h"
                            # 600 "./comelang2.h"
                            if(_if_conditional306=position==i_225,                            _if_conditional306) {
                                # 601 "./comelang2.h"
                                __dec_obj75=it_224->item;
                                it_224->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer2(CVALUE_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 602 "./comelang2.h"
                                break;
                            }
                            # 604 "./comelang2.h"
                            it_224=it_224->next;
                            # 605 "./comelang2.h"
                            i_225++;
                        }
                        # 608 "./comelang2.h"
                        __result179__ = __result_obj__ = self;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result179__;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional310;
struct list_item$1charph* it_231;
int i_232;
_Bool _while_condtional27;
_Bool _if_conditional311;
char* __result180__;
char* default_value_233;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_231, 0, sizeof(struct list_item$1charph*));
memset(&i_232, 0, sizeof(int));
memset(&default_value_233, 0, sizeof(char*));
                            # 686 "./comelang2.h"
                            # 682 "./comelang2.h"
                            if(_if_conditional310=position<0,                            _if_conditional310) {
                                # 683 "./comelang2.h"
                                position+=self->len;
                            }
                            # 686 "./comelang2.h"
                            it_231=self->head;
                            # 687 "./comelang2.h"
                            i_232=0;
                            # 694 "./comelang2.h"
                            while(_while_condtional27=it_231!=((void*)0),                            _while_condtional27) {
                                # 692 "./comelang2.h"
                                # 689 "./comelang2.h"
                                if(_if_conditional311=position==i_232,                                _if_conditional311) {
                                    # 690 "./comelang2.h"
                                    __result180__ = __result_obj__ = it_231->item;
                                    return __result180__;
                                }
                                # 692 "./comelang2.h"
                                it_231=it_231->next;
                                # 693 "./comelang2.h"
                                i_232++;
                            }
                            # 696 "./comelang2.h"
                            # 697 "./comelang2.h"
                            memset(&default_value_233,0,sizeof(char*));
                            # 698 "./comelang2.h"
                            __result181__ = __result_obj__ = default_value_233;
                            default_value_233 = come_decrement_ref_count2(default_value_233, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result181__;
                            default_value_233 = come_decrement_ref_count2(default_value_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional314;
struct list_item$1CVALUEph* it_235;
int i_236;
_Bool _while_condtional29;
_Bool _if_conditional315;
struct CVALUE* __result183__;
struct CVALUE* default_value_237;
struct CVALUE* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_235, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_236, 0, sizeof(int));
memset(&default_value_237, 0, sizeof(struct CVALUE*));
                            # 686 "./comelang2.h"
                            # 682 "./comelang2.h"
                            if(_if_conditional314=position<0,                            _if_conditional314) {
                                # 683 "./comelang2.h"
                                position+=self->len;
                            }
                            # 686 "./comelang2.h"
                            it_235=self->head;
                            # 687 "./comelang2.h"
                            i_236=0;
                            # 694 "./comelang2.h"
                            while(_while_condtional29=it_235!=((void*)0),                            _while_condtional29) {
                                # 692 "./comelang2.h"
                                # 689 "./comelang2.h"
                                if(_if_conditional315=position==i_236,                                _if_conditional315) {
                                    # 690 "./comelang2.h"
                                    __result183__ = __result_obj__ = it_235->item;
                                    return __result183__;
                                }
                                # 692 "./comelang2.h"
                                it_235=it_235->next;
                                # 693 "./comelang2.h"
                                i_236++;
                            }
                            # 696 "./comelang2.h"
                            # 697 "./comelang2.h"
                            memset(&default_value_237,0,sizeof(struct CVALUE*));
                            # 698 "./comelang2.h"
                            __result184__ = __result_obj__ = default_value_237;
                            come_call_finalizer2(CVALUE_finalize,default_value_237, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result184__;
                            come_call_finalizer2(CVALUE_finalize,default_value_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional322;
struct sNode* result_242;
struct sNode* __result185__;
_Bool _if_conditional323;
struct sNode* __result186__;
struct sNode* result_243;
struct sNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_242, 0, sizeof(struct sNode*));
memset(&result_243, 0, sizeof(struct sNode*));
                    # 290 "./comelang2.h"
                    # 285 "./comelang2.h"
                    if(_if_conditional322=self==((void*)0),                    _if_conditional322) {
                        # 286 "./comelang2.h"
                        # 287 "./comelang2.h"
                        memset(&result_242,0,sizeof(struct sNode*));
                        # 288 "./comelang2.h"
                        __result185__ = __result_obj__ = result_242;
                        return __result185__;
                    }
                    # 290 "./comelang2.h"
                    self->it=self->head;
                    # 296 "./comelang2.h"
                    # 292 "./comelang2.h"
                    if(self->it) {
                        # 293 "./comelang2.h"
                        __result186__ = __result_obj__ = self->it->item;
                        return __result186__;
                    }
                    # 296 "./comelang2.h"
                    # 297 "./comelang2.h"
                    memset(&result_243,0,sizeof(struct sNode*));
                    # 298 "./comelang2.h"
                    __result187__ = __result_obj__ = result_243;
                    return __result187__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 320 "./comelang2.h"
                    __result188__ = self==((void*)0)||self->it==((void*)0);
                    return __result188__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional324;
struct sNode* result_245;
struct sNode* __result189__;
_Bool _if_conditional325;
struct sNode* __result190__;
struct sNode* result_246;
struct sNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_245, 0, sizeof(struct sNode*));
memset(&result_246, 0, sizeof(struct sNode*));
                    # 308 "./comelang2.h"
                    # 302 "./comelang2.h"
                    if(_if_conditional324=self==((void*)0)||self->it==((void*)0),                    _if_conditional324) {
                        # 303 "./comelang2.h"
                        # 304 "./comelang2.h"
                        memset(&result_245,0,sizeof(struct sNode*));
                        # 305 "./comelang2.h"
                        __result189__ = __result_obj__ = result_245;
                        return __result189__;
                    }
                    # 308 "./comelang2.h"
                    self->it=self->it->next;
                    # 314 "./comelang2.h"
                    # 310 "./comelang2.h"
                    if(self->it) {
                        # 311 "./comelang2.h"
                        __result190__ = __result_obj__ = self->it->item;
                        return __result190__;
                    }
                    # 314 "./comelang2.h"
                    # 315 "./comelang2.h"
                    memset(&result_246,0,sizeof(struct sNode*));
                    # 316 "./comelang2.h"
                    __result191__ = __result_obj__ = result_246;
                    return __result191__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional328;
void* right_value222;
struct list_item$1tuple2$2charphsNodephph* litem_249;
struct tuple2$2charphsNodeph* __dec_obj78;
_Bool _if_conditional329;
void* right_value223;
struct list_item$1tuple2$2charphsNodephph* litem_250;
struct tuple2$2charphsNodeph* __dec_obj79;
void* right_value224;
struct list_item$1tuple2$2charphsNodephph* litem_251;
struct tuple2$2charphsNodeph* __dec_obj80;
struct list$1tuple2$2charphsNodephph* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value222 = (void*)0;
memset(&litem_249, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value223 = (void*)0;
memset(&litem_250, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value224 = (void*)0;
memset(&litem_251, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                    # 256 "./comelang2.h"
                    # 225 "./comelang2.h"
                    if(_if_conditional328=self->len==0,                    _if_conditional328) {
                        # 226 "./comelang2.h"
                        litem_249=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value222=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./comelang2.h"
                        litem_249->prev=((void*)0);
                        # 229 "./comelang2.h"
                        litem_249->next=((void*)0);
                        # 230 "./comelang2.h"
                        __dec_obj78=litem_249->item;
                        litem_249->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 232 "./comelang2.h"
                        self->tail=litem_249;
                        # 233 "./comelang2.h"
                        self->head=litem_249;
                    }
                    else {
                        # 256 "./comelang2.h"
                        # 235 "./comelang2.h"
                        if(_if_conditional329=self->len==1,                        _if_conditional329) {
                            # 236 "./comelang2.h"
                            litem_250=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value223=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./comelang2.h"
                            litem_250->prev=self->head;
                            # 239 "./comelang2.h"
                            litem_250->next=((void*)0);
                            # 240 "./comelang2.h"
                            __dec_obj79=litem_250->item;
                            litem_250->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 242 "./comelang2.h"
                            self->tail=litem_250;
                            # 243 "./comelang2.h"
                            self->head->next=litem_250;
                        }
                        else {
                            # 246 "./comelang2.h"
                            litem_251=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value224=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./comelang2.h"
                            litem_251->prev=self->tail;
                            # 249 "./comelang2.h"
                            litem_251->next=((void*)0);
                            # 250 "./comelang2.h"
                            __dec_obj80=litem_251->item;
                            litem_251->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 252 "./comelang2.h"
                            self->tail->next=litem_251;
                            # 253 "./comelang2.h"
                            self->tail=litem_251;
                        }
                    }
                    # 256 "./comelang2.h"
                    self->len++;
                    # 258 "./comelang2.h"
                    __result192__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result192__;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__;
char* __dec_obj81;
struct tuple2$2charphvoidp* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1768 "./comelang2.h"
                    __dec_obj81=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 1769 "./comelang2.h"
                    self->v2=v2;
                    # 1771 "./comelang2.h"
                    __result193__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2charphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result193__;
                    come_call_finalizer2(tuple2$2charphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
void* __result_obj__;
_Bool _if_conditional330;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2charphvoidpp_finalize"
                        # 0 "tuple2$2charphvoidpp_finalize"
                        if(_if_conditional330=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional330) {
                            # 0 "tuple2$2charphvoidpp_finalize"
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional334;
int __result194__;
int __result195__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "./comelang2.h"
            # 364 "./comelang2.h"
            if(_if_conditional334=self==((void*)0),            _if_conditional334) {
                # 365 "./comelang2.h"
                __result194__ = 0;
                return __result194__;
            }
            # 367 "./comelang2.h"
            __result195__ = self->len;
            return __result195__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_272;
unsigned int hash_273;
unsigned int it_274;
_Bool _while_condtional31;
_Bool _if_conditional346;
_Bool _if_conditional347;
struct sClass* __result201__;
_Bool _if_conditional348;
_Bool _if_conditional349;
struct sClass* __result202__;
struct sClass* __result203__;
struct sClass* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_272, 0, sizeof(struct sClass*));
memset(&hash_273, 0, sizeof(unsigned int));
memset(&it_274, 0, sizeof(unsigned int));
                # 1545 "./comelang2.h"
                # 1546 "./comelang2.h"
                memset(&default_value_272,0,sizeof(struct sClass*));
                # 1548 "./comelang2.h"
                hash_273=string_get_hash_key(((char*)key))%self->size;
                # 1549 "./comelang2.h"
                it_274=hash_273;
                # 1573 "./comelang2.h"
                while(_while_condtional31=(_Bool)1,                _while_condtional31) {
                    # 1571 "./comelang2.h"
                    # 1552 "./comelang2.h"
                    if(_if_conditional346=self->item_existance[it_274],                    _if_conditional346) {
                        # 1559 "./comelang2.h"
                        # 1554 "./comelang2.h"
                        if(_if_conditional347=string_equals(self->keys[it_274],key),                        _if_conditional347) {
                            # 1556 "./comelang2.h"
                            __result201__ = __result_obj__ = self->items[it_274];
                            come_call_finalizer2(sClass_finalize,default_value_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result201__;
                        }
                        # 1559 "./comelang2.h"
                        it_274++;
                        # 1567 "./comelang2.h"
                        # 1561 "./comelang2.h"
                        if(_if_conditional348=it_274>=self->size,                        _if_conditional348) {
                            # 1562 "./comelang2.h"
                            it_274=0;
                        }
                        else {
                            # 1567 "./comelang2.h"
                            # 1564 "./comelang2.h"
                            if(_if_conditional349=it_274==hash_273,                            _if_conditional349) {
                                # 1565 "./comelang2.h"
                                __result202__ = __result_obj__ = default_value_272;
                                come_call_finalizer2(sClass_finalize,default_value_272, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result202__;
                            }
                        }
                    }
                    else {
                        # 1569 "./comelang2.h"
                        __result203__ = __result_obj__ = default_value_272;
                        come_call_finalizer2(sClass_finalize,default_value_272, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result203__;
                    }
                }
                # 1573 "./comelang2.h"
                __result204__ = __result_obj__ = default_value_272;
                come_call_finalizer2(sClass_finalize,default_value_272, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result204__;
                come_call_finalizer2(sClass_finalize,default_value_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value306;
void* right_value307;
struct list$1tuple2$2charphsNodephph* params_306;
void* right_value308;
void* right_value309;
void* right_value310;
_Bool _if_conditional364;
_Bool parse_method_generics_type_307;
char* p_308;
int sline_309;
_Bool _if_conditional365;
_Bool _if_conditional366;
void* right_value311;
char* word_310;
_Bool _if_conditional367;
void* right_value312;
void* right_value313;
struct list$1sTypeph* method_generics_types_311;
_Bool _if_conditional368;
_Bool _while_condtional33;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
void* right_value314;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_312;
char* name_313;
_Bool err_314;
_Bool _if_conditional374;
void* right_value315;
_Bool _if_conditional375;
_Bool _while_condtional34;
_Bool _if_conditional376;
char* p_315;
int sline_316;
_Bool err_flag_317;
void* right_value316;
char* label_318;
_Bool _if_conditional377;
void* right_value317;
char* __dec_obj98;
_Bool _if_conditional378;
char* __dec_obj99;
_Bool no_comma_319;
void* right_value318;
struct sNode* node_320;
void* right_value319;
struct sNode* __dec_obj100;
void* right_value320;
void* right_value321;
_Bool _if_conditional379;
_Bool _if_conditional380;
struct buffer* method_block_321;
int method_block_sline_322;
_Bool _if_conditional381;
char* head_323;
void* right_value322;
char* tail_324;
void* right_value323;
void* right_value324;
struct buffer* __dec_obj101;
int len_325;
void* right_value325;
char* mem_326;
_Bool _if_conditional382;
void* right_value326;
void* right_value327;
void* right_value328;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value336;
struct sNode* node_328;
struct sNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&params_306, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&parse_method_generics_type_307, 0, sizeof(_Bool));
memset(&p_308, 0, sizeof(char*));
memset(&sline_309, 0, sizeof(int));
right_value311 = (void*)0;
memset(&word_310, 0, sizeof(char*));
right_value312 = (void*)0;
right_value313 = (void*)0;
memset(&method_generics_types_311, 0, sizeof(struct list$1sTypeph*));
right_value314 = (void*)0;
memset(&type_312, 0, sizeof(struct sType*));
memset(&name_313, 0, sizeof(char*));
memset(&err_314, 0, sizeof(_Bool));
memset(&type_312, 0, sizeof(struct sType*));
memset(&name_313, 0, sizeof(char*));
memset(&err_314, 0, sizeof(_Bool));
right_value315 = (void*)0;
memset(&p_315, 0, sizeof(char*));
memset(&sline_316, 0, sizeof(int));
memset(&err_flag_317, 0, sizeof(_Bool));
right_value316 = (void*)0;
memset(&label_318, 0, sizeof(char*));
right_value317 = (void*)0;
memset(&no_comma_319, 0, sizeof(_Bool));
right_value318 = (void*)0;
memset(&node_320, 0, sizeof(struct sNode*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&method_block_321, 0, sizeof(struct buffer*));
memset(&method_block_sline_322, 0, sizeof(int));
memset(&head_323, 0, sizeof(char*));
right_value322 = (void*)0;
memset(&tail_324, 0, sizeof(char*));
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&len_325, 0, sizeof(int));
right_value325 = (void*)0;
memset(&mem_326, 0, sizeof(char*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value336 = (void*)0;
memset(&node_328, 0, sizeof(struct sNode*));
    # 858 "20method.c"
    params_306=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value307=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value306=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 858, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 859 "20method.c"
    list$1tuple2$2charphsNodephph_push_back(params_306,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value310=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value308=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 859, "tuple2$2charphsNodeph")))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=sNode_clone(obj)))))))));
    come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 866 "20method.c"
    # 861 "20method.c"
    if(_if_conditional364=*info->p==45&&*(info->p+1)==62,    _if_conditional364) {
        # 862 "20method.c"
        info->p+=2;
        # 863 "20method.c"
        skip_spaces_and_lf(info);
    }
    # 866 "20method.c"
    parse_method_generics_type_307=(_Bool)0;
    # 888 "20method.c"
    {
        # 868 "20method.c"
        p_308=info->p;
        # 869 "20method.c"
        sline_309=info->sline;
        # 884 "20method.c"
        # 871 "20method.c"
        if(_if_conditional365=*info->p==60,        _if_conditional365) {
            # 872 "20method.c"
            info->p++;
            # 873 "20method.c"
            skip_spaces_and_lf(info);
            # 882 "20method.c"
            # 875 "20method.c"
            if(_if_conditional366=xisalpha(*info->p)||*info->p==95,            _if_conditional366) {
                # 876 "20method.c"
                word_310=(char*)come_increment_ref_count(((char*)(right_value311=parse_word(info))));
                right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 881 "20method.c"
                # 878 "20method.c"
                if(_if_conditional367=is_type_name(word_310,info),                _if_conditional367) {
                    # 879 "20method.c"
                    parse_method_generics_type_307=(_Bool)1;
                }
                word_310 = come_decrement_ref_count2(word_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 884 "20method.c"
        info->p=p_308;
        # 885 "20method.c"
        info->sline=sline_309;
    }
    # 888 "20method.c"
    method_generics_types_311=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value313=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value312=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 888, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 920 "20method.c"
    # 889 "20method.c"
    if(_if_conditional368=parse_method_generics_type_307&&*info->p==60,    _if_conditional368) {
        # 890 "20method.c"
        info->p++;
        # 891 "20method.c"
        skip_spaces_and_lf(info);
        # 918 "20method.c"
        while(_while_condtional33=(_Bool)1,        _while_condtional33) {
            # 917 "20method.c"
            # 894 "20method.c"
            if(_if_conditional369=*info->p==0,            _if_conditional369) {
                # 895 "20method.c"
                err_msg(info,"unexpected source end");
                # 896 "20method.c"
                exit(2);
            }
            else {
                # 917 "20method.c"
                # 898 "20method.c"
                if(_if_conditional370=*info->p==62,                _if_conditional370) {
                    # 899 "20method.c"
                    info->p++;
                    # 900 "20method.c"
                    skip_spaces_and_lf(info);
                    # 901 "20method.c"
                    break;
                }
                else {
                    # 917 "20method.c"
                    # 903 "20method.c"
                    if(_if_conditional371=*info->p==44,                    _if_conditional371) {
                        # 904 "20method.c"
                        info->p++;
                        # 905 "20method.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 908 "20method.c"
                        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value314=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_312=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                        name_313=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                        err_314=multiple_assign_var5->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 915 "20method.c"
                        # 910 "20method.c"
                        if(_if_conditional374=!err_314,                        _if_conditional374) {
                            # 911 "20method.c"
                            err_msg(info,"invalid method generics paramtor type");
                            # 912 "20method.c"
                            exit(2);
                        }
                        # 915 "20method.c"
                        list$1sTypeph_push_back(method_generics_types_311,(struct sType*)come_increment_ref_count(((struct sType*)(right_value315=sType_clone(type_312)))));
                        come_call_finalizer2(sType_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type_312, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_313 = come_decrement_ref_count2(name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    # 974 "20method.c"
    # 920 "20method.c"
    if(_if_conditional375=*info->p!=123,    _if_conditional375) {
        # 921 "20method.c"
        expected_next_character(40,info);
        # 972 "20method.c"
        while(_while_condtional34=(_Bool)1,        _while_condtional34) {
            # 930 "20method.c"
            # 924 "20method.c"
            if(_if_conditional376=*info->p==41,            _if_conditional376) {
                # 925 "20method.c"
                info->p++;
                # 926 "20method.c"
                skip_spaces_and_lf(info);
                # 927 "20method.c"
                break;
            }
            # 930 "20method.c"
            p_315=info->p;
            # 931 "20method.c"
            sline_316=info->sline;
            # 933 "20method.c"
            err_flag_317=(_Bool)0;
            # 934 "20method.c"
            label_318=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string(""))));
            right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 938 "20method.c"
            # 935 "20method.c"
            if(_if_conditional377=xisalpha(*info->p)||*info->p==95,            _if_conditional377) {
                # 936 "20method.c"
                __dec_obj98=label_318;
                label_318=(char*)come_increment_ref_count(((char*)(right_value317=parse_word(info))));
                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 937 "20method.c"
                err_flag_317=(_Bool)1;
            }
            # 951 "20method.c"
            # 940 "20method.c"
            if(_if_conditional378=err_flag_317==(_Bool)1&&*info->p==58,            _if_conditional378) {
                # 941 "20method.c"
                info->p++;
                # 942 "20method.c"
                skip_spaces_and_lf(info);
            }
            else {
                # 945 "20method.c"
                __dec_obj99=label_318;
                label_318=((void*)0);
                __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 947 "20method.c"
                info->p=p_315;
                # 948 "20method.c"
                info->sline=sline_316;
            }
            # 951 "20method.c"
            no_comma_319=info->no_comma;
            # 952 "20method.c"
            info->no_comma=(_Bool)1;
            # 954 "20method.c"
            node_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=expression_v13(info))));
            if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 956 "20method.c"
            __dec_obj100=node_320;
            node_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_320),info))));
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 958 "20method.c"
            info->no_comma=no_comma_319;
            # 960 "20method.c"
            list$1tuple2$2charphsNodephph_push_back(params_306,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value321=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value320=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 960, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_318),(struct sNode*)come_increment_ref_count(node_320))))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 971 "20method.c"
            # 962 "20method.c"
            if(_if_conditional379=*info->p==44,            _if_conditional379) {
                # 963 "20method.c"
                info->p++;
                # 964 "20method.c"
                skip_spaces_and_lf(info);
            }
            else {
                # 971 "20method.c"
                # 966 "20method.c"
                if(_if_conditional380=*info->p==41,                _if_conditional380) {
                    # 967 "20method.c"
                    info->p++;
                    # 968 "20method.c"
                    skip_spaces_and_lf(info);
                    # 969 "20method.c"
                    label_318 = come_decrement_ref_count2(label_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_320) { node_320 = come_decrement_ref_count2(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_318 = come_decrement_ref_count2(label_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_320) { node_320 = come_decrement_ref_count2(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    # 974 "20method.c"
    method_block_321=((void*)0);
    # 975 "20method.c"
    method_block_sline_322=0;
    # 995 "20method.c"
    # 976 "20method.c"
    if(_if_conditional381=*info->p==123,    _if_conditional381) {
        # 977 "20method.c"
        head_323=info->p;
        # 978 "20method.c"
        method_block_sline_322=info->sline;
        # 980 "20method.c"
        ((char*)(right_value322=skip_block(info)));
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 982 "20method.c"
        tail_324=info->p;
        # 984 "20method.c"
        __dec_obj101=method_block_321;
        method_block_321=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value324=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 984, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 986 "20method.c"
        len_325=tail_324-head_323;
        # 987 "20method.c"
        mem_326=(char*)come_increment_ref_count(((char*)(right_value325=(char*)come_calloc(1, sizeof(char)*(1*(len_325+1)), "20method.c", 987, "char"))));
        right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 988 "20method.c"
        memcpy(mem_326,head_323,len_325);
        # 989 "20method.c"
        mem_326[len_325]=0;
        # 991 "20method.c"
        buffer_append_str(method_block_321,mem_326);
        # 992 "20method.c"
        buffer_append_str(method_block_321,"\n");
        mem_326 = come_decrement_ref_count2(mem_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 995 "20method.c"
    parse_sharp_v5(info);
    # 1000 "20method.c"
    # 997 "20method.c"
    if(_if_conditional382=*info->p==60,    _if_conditional382) {
    }
    # 1000 "20method.c"
    parse_sharp_v5(info);
    # 1002 "20method.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1002, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value328=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value326=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1002, "sMethodCallNode")))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_306),method_block_321,method_block_sline_322,method_generics_types_311,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sMethodCallNode_sline;
    _inf_value2->sname=(void*)sMethodCallNode_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_328=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=_inf_value2)));
    come_call_finalizer2(sMethodCallNode_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value327) { right_value327 = come_decrement_ref_count2(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(sMethodCallNode_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1004 "20method.c"
    __result212__ = __result_obj__ = node_328;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,method_block_321, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result212__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,method_block_321, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj96;
struct sNode* __dec_obj97;
struct tuple2$2charphsNodeph* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1768 "./comelang2.h"
        __dec_obj96=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1769 "./comelang2.h"
        __dec_obj97=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(v2);
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
        # 1771 "./comelang2.h"
        __result209__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result209__;
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional372;
_Bool _if_conditional373;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                            # 0 "tuple3$3sTypephcharphboolp_finalize"
                            if(_if_conditional372=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional372) {
                                # 0 "tuple3$3sTypephcharphboolp_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple3$3sTypephcharphboolp_finalize"
                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                            if(_if_conditional373=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional373) {
                                # 1 "tuple3$3sTypephcharphboolp_finalize"
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sMethodCallNode_finalize"
        # 0 "sMethodCallNode_finalize"
        if(_if_conditional383=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional383) {
            # 0 "sMethodCallNode_finalize"
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 2 "sMethodCallNode_finalize"
        # 1 "sMethodCallNode_finalize"
        if(_if_conditional384=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional384) {
            # 1 "sMethodCallNode_finalize"
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 3 "sMethodCallNode_finalize"
        # 2 "sMethodCallNode_finalize"
        if(_if_conditional385=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional385) {
            # 2 "sMethodCallNode_finalize"
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sMethodCallNode_finalize"
        # 3 "sMethodCallNode_finalize"
        if(_if_conditional386=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional386) {
            # 3 "sMethodCallNode_finalize"
            come_call_finalizer2(buffer_finalize,self->method_block, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sMethodCallNode_finalize"
        # 4 "sMethodCallNode_finalize"
        if(_if_conditional387=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional387) {
            # 4 "sMethodCallNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 6 "sMethodCallNode_finalize"
        # 5 "sMethodCallNode_finalize"
        if(_if_conditional388=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional388) {
            # 5 "sMethodCallNode_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional389;
struct sMethodCallNode* __result210__;
void* right_value329;
struct sMethodCallNode* result_327;
_Bool _if_conditional390;
void* right_value330;
struct sNode* __dec_obj102;
_Bool _if_conditional391;
void* right_value331;
char* __dec_obj103;
_Bool _if_conditional392;
void* right_value332;
struct list$1tuple2$2charphsNodephph* __dec_obj104;
_Bool _if_conditional393;
void* right_value333;
struct buffer* __dec_obj105;
_Bool _if_conditional394;
_Bool _if_conditional395;
void* right_value334;
char* __dec_obj106;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value335;
struct list$1sTypeph* __dec_obj107;
struct sMethodCallNode* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
right_value329 = (void*)0;
memset(&result_327, 0, sizeof(struct sMethodCallNode*));
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
        # 3 "sMethodCallNode_clone"
        # 2 "sMethodCallNode_clone"
        if(_if_conditional389=self==(void*)0,        _if_conditional389) {
            # 2 "sMethodCallNode_clone"
            __result210__ = __result_obj__ = (void*)0;
            return __result210__;
        }
        # 3 "sMethodCallNode_clone"
        result_327=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value329=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"))));
        come_call_finalizer2(sMethodCallNode_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sMethodCallNode_clone"
        # 4 "sMethodCallNode_clone"
        if(_if_conditional390=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional390) {
            # 4 "sMethodCallNode_clone"
            __dec_obj102=result_327->obj;
            result_327->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value330=sNode_clone(self->obj))));
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value330) { right_value330 = come_decrement_ref_count2(right_value330, ((struct sNode*)right_value330)->finalize, ((struct sNode*)right_value330)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 6 "sMethodCallNode_clone"
        # 5 "sMethodCallNode_clone"
        if(_if_conditional391=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional391) {
            # 5 "sMethodCallNode_clone"
            __dec_obj103=result_327->fun_name;
            result_327->fun_name=(char*)come_increment_ref_count(((char*)(right_value331=string_clone(self->fun_name))));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 7 "sMethodCallNode_clone"
        # 6 "sMethodCallNode_clone"
        if(_if_conditional392=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional392) {
            # 6 "sMethodCallNode_clone"
            __dec_obj104=result_327->params;
            result_327->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value332=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sMethodCallNode_clone"
        # 7 "sMethodCallNode_clone"
        if(_if_conditional393=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional393) {
            # 7 "sMethodCallNode_clone"
            __dec_obj105=result_327->method_block;
            result_327->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value333=buffer_clone(self->method_block))));
            come_call_finalizer2(buffer_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sMethodCallNode_clone"
        # 8 "sMethodCallNode_clone"
        if(_if_conditional394=self!=((void*)0),        _if_conditional394) {
            # 8 "sMethodCallNode_clone"
            result_327->sline=self->sline;
        }
        # 10 "sMethodCallNode_clone"
        # 9 "sMethodCallNode_clone"
        if(_if_conditional395=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional395) {
            # 9 "sMethodCallNode_clone"
            __dec_obj106=result_327->sname;
            result_327->sname=(char*)come_increment_ref_count(((char*)(right_value334=string_clone(self->sname))));
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 11 "sMethodCallNode_clone"
        # 10 "sMethodCallNode_clone"
        if(_if_conditional396=self!=((void*)0),        _if_conditional396) {
            # 10 "sMethodCallNode_clone"
            result_327->method_block_sline=self->method_block_sline;
        }
        # 12 "sMethodCallNode_clone"
        # 11 "sMethodCallNode_clone"
        if(_if_conditional397=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional397) {
            # 11 "sMethodCallNode_clone"
            __dec_obj107=result_327->method_generics_types;
            result_327->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value335=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sMethodCallNode_clone"
        __result211__ = __result_obj__ = result_327;
        come_call_finalizer2(sMethodCallNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result211__;
        come_call_finalizer2(sMethodCallNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional398;
void* right_value337;
void* right_value338;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value341;
struct sNode* __result215__;
void* right_value342;
struct sNode* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
    # 1013 "20method.c"
    # 1009 "20method.c"
    if(_if_conditional398=charp_operator_equals(buf,"__current__"),    _if_conditional398) {
        # 1010 "20method.c"
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1010, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value338=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value337=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1010, "sCurrentNode")))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sCurrentNode_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result215__ = __result_obj__ = ((struct sNode*)(right_value341=_inf_value3));
        come_call_finalizer2(sCurrentNode_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sCurrentNode_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result215__;
    }
    # 1013 "20method.c"
    __result216__ = __result_obj__ = ((struct sNode*)(right_value342=string_node_v15(buf,head,head_sline,info)));
    if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result216__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional399;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sCurrentNode_finalize"
            # 0 "sCurrentNode_finalize"
            if(_if_conditional399=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional399) {
                # 0 "sCurrentNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional400;
struct sCurrentNode* __result213__;
void* right_value339;
struct sCurrentNode* result_329;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value340;
char* __dec_obj108;
struct sCurrentNode* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value339 = (void*)0;
memset(&result_329, 0, sizeof(struct sCurrentNode*));
right_value340 = (void*)0;
            # 3 "sCurrentNode_clone"
            # 2 "sCurrentNode_clone"
            if(_if_conditional400=self==(void*)0,            _if_conditional400) {
                # 2 "sCurrentNode_clone"
                __result213__ = __result_obj__ = (void*)0;
                return __result213__;
            }
            # 3 "sCurrentNode_clone"
            result_329=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value339=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"))));
            come_call_finalizer2(sCurrentNode_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sCurrentNode_clone"
            # 4 "sCurrentNode_clone"
            if(_if_conditional401=self!=((void*)0),            _if_conditional401) {
                # 4 "sCurrentNode_clone"
                result_329->sline=self->sline;
            }
            # 6 "sCurrentNode_clone"
            # 5 "sCurrentNode_clone"
            if(_if_conditional402=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional402) {
                # 5 "sCurrentNode_clone"
                __dec_obj108=result_329->sname;
                result_329->sname=(char*)come_increment_ref_count(((char*)(right_value340=string_clone(self->sname))));
                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "sCurrentNode_clone"
            __result214__ = __result_obj__ = result_329;
            come_call_finalizer2(sCurrentNode_finalize,result_329, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result214__;
            come_call_finalizer2(sCurrentNode_finalize,result_329, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value343;
struct sNode* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
right_value343 = (void*)0;
    # 1020 "20method.c"
    __result217__ = __result_obj__ = ((struct sNode*)(right_value343=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result217__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

