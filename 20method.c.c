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
struct map$2charphCVALUEph
{
    char** keys;
    _Bool* item_existance;
    struct CVALUE** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
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
static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item);
static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self);
static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self);
static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key);
static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
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




struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
struct sCurrentNode* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result28__ = __result_obj__ = self;
    come_call_finalizer2(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result28__;
    come_call_finalizer2(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    __result29__ = self->sline;
    return __result29__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value50;
char* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    __result30__ = __result_obj__ = ((char*)(right_value50=__builtin_string(self->sname)));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result30__;
}

_Bool sCurrentNode_terminated(){
void* __result_obj__;
_Bool __result31__;
memset(&__result_obj__, 0, sizeof(void*));
    __result31__ = (_Bool)0;
    return __result31__;
}

char* sCurrentNode_kind(){
void* __result_obj__;
void* right_value51;
char* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
    __result32__ = __result_obj__ = ((char*)(right_value51=__builtin_string("sCurrentNode")));
    right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result32__;
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
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
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
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value127;
struct CVALUE* come_value_118;
void* right_value128;
char* __dec_obj43;
void* right_value129;
void* right_value130;
struct sType* __dec_obj44;
_Bool __result93__;
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
    info->current_stack_num++;
    class_name_11=(char*)come_increment_ref_count(((char*)(right_value52=xsprintf("__current_stack%d__",info->current_stack_num))));
    right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    current_stack_12=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value54=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value53=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 40, "sClass")))),class_name_11,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    come_call_finalizer2(sClass_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_kind_21=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value59=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value58=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value55=xsprintf("__method_block_result_kind__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value56=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 42, "sType")))),"int",(_Bool)0,info))))))));
    right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1tuple2$2charphsTypephph_push_back(current_stack_12->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value101=tuple2$2charphsTypephp_clone(result_kind_21)))));
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return_value_44=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value106=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value105=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 45, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value102=xsprintf("__method_block_return_value__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value103=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 45, "sType")))),"void*",(_Bool)0,info))))))));
    right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1tuple2$2charphsTypephph_push_back(current_stack_12->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value107=tuple2$2charphsTypephp_clone(return_value_44)))));
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    vtable_45=info->lv_table;
    while(vtable_45) {
        for(        o2_saved_46=(struct map$2charphsVarph*)come_increment_ref_count((vtable_45->mVars)),it_49=map$2charphsVarph_begin((o2_saved_46));        !map$2charphsVarph_end((o2_saved_46));        it_49=map$2charphsVarph_next((o2_saved_46))        ){
            key_52=it_49;
            value_56=map$2charphsVarphp_operator_load_element(vtable_45->mVars,key_52);
            type2_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_clone(value_56->mType))));
            come_call_finalizer2(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type2_57->mPointerNum++;
            item_58=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value111=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value110=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 59, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(value_56->mCValueName)))),(struct sType*)come_increment_ref_count(type2_57)))));
            right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional122=value_56->mCValueName!=((void*)0),            _if_conditional122) {
                if(_if_conditional123=strcmp(value_56->mCValueName,"__list_values")==0,                _if_conditional123) {
                }
                else {
                    if(_if_conditional124=strcmp(value_56->mCValueName,"__map_keys")==0,                    _if_conditional124) {
                    }
                    else {
                        if(_if_conditional125=strcmp(value_56->mCValueName,"__map_element")==0,                        _if_conditional125) {
                        }
                        else {
                            if(_if_conditional126=string_operator_equals(value_56->mType->mClass->mName,"va_list")||string_operator_equals(value_56->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional126) {
                            }
                            else {
                                if(_if_conditional127=list$1sNodeph_length(type2_57->mArrayNum)==1,                                _if_conditional127) {
                                    type3_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(type2_57))));
                                    come_call_finalizer2(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    list$1sNodeph_reset(type3_59->mArrayNum);
                                    type3_59->mPointerNum++;
                                    item2_62=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value115=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value114=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 78, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(value_56->mCValueName)))),(struct sType*)come_increment_ref_count(type3_59)))));
                                    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_12->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value116=tuple2$2charphsTypephp_clone(item2_62)))));
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,type3_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,item2_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                else {
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
        vtable_45=vtable_45->mParent;
    }
    output_struct(current_stack_12,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_11),(struct sClass*)come_increment_ref_count(current_stack_12));
    num_current_stack_111++;
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_11,num_current_stack_111);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_111,class_name_11);
    vtable_45=info->lv_table;
    while(vtable_45) {
        for(        o2_saved_112=(struct map$2charphsVarph*)come_increment_ref_count((vtable_45->mVars)),it_113=map$2charphsVarph_begin((o2_saved_112));        !map$2charphsVarph_end((o2_saved_112));        it_113=map$2charphsVarph_next((o2_saved_112))        ){
            key_114=it_113;
            value_115=map$2charphsVarphp_operator_load_element(vtable_45->mVars,key_114);
            type2_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(value_115->mType))));
            come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            item_117=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value126=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value125=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 108, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(value_115->mCValueName),(struct sType*)come_increment_ref_count(type2_116)))));
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional179=value_115->mCValueName!=((void*)0),            _if_conditional179) {
                if(_if_conditional180=strcmp(value_115->mCValueName,"__list_values")==0,                _if_conditional180) {
                }
                else {
                    if(_if_conditional181=strcmp(value_115->mCValueName,"__map_keys")==0,                    _if_conditional181) {
                    }
                    else {
                        if(_if_conditional182=strcmp(value_115->mCValueName,"__map_element")==0,                        _if_conditional182) {
                        }
                        else {
                            if(_if_conditional183=string_operator_equals(value_115->mType->mClass->mName,"va_list")||string_operator_equals(value_115->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional183) {
                            }
                            else {
                                if(_if_conditional184=string_operator_equals(type2_116->mClass->mName,"lambda"),                                _if_conditional184) {
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_111,value_115->mCValueName,value_115->mCValueName);
                                }
                                else {
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
        vtable_45=vtable_45->mParent;
    }
    come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 137, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj43=come_value_118->c_value;
    come_value_118->c_value=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("&__current_stack%d__",num_current_stack_111))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj44=come_value_118->type;
    come_value_118->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 140, "sType")))),class_name_11,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_118->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_118->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_118));
    info->num_current_stack=num_current_stack_111;
    __result93__ = (_Bool)1;
    class_name_11 = come_decrement_ref_count2(class_name_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,current_stack_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,result_kind_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,return_value_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result93__;
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
        if(_if_conditional8=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional8) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional9=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional9) {
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional30=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional30) {
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
                it_13=self->head;
                while(_while_condtional1=it_13!=((void*)0),                _while_condtional1) {
                    prev_it_14=it_13;
                    it_13=it_13->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional10=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional10) {
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional11) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional12=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional12) {
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
                                        if(_if_conditional13=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                        _if_conditional13) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional15=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional15) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional17=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional17) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional18=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional18) {
                                            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional19=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional19) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional20=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional20) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional22=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional22) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional23=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional23) {
                                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional25=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional25) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional26=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional26) {
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional27=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional27) {
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional28=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional28) {
                                            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional29=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional29) {
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
                                                it_15=self->head;
                                                while(_while_condtional2=it_15!=((void*)0),                                                _while_condtional2) {
                                                    prev_it_16=it_15;
                                                    it_15=it_15->next;
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional14) {
                                                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional16=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional16) {
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
                                                it_17=self->head;
                                                while(_while_condtional3=it_17!=((void*)0),                                                _while_condtional3) {
                                                    prev_it_18=it_17;
                                                    it_17=it_17->next;
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional21) {
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
                                                it_19=self->head;
                                                while(_while_condtional4=it_19!=((void*)0),                                                _while_condtional4) {
                                                    prev_it_20=it_19;
                                                    it_19=it_19->next;
                                                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional24=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional24) {
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj13;
struct sType* __dec_obj14;
struct tuple2$2charphsTypeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj13=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj14=self->v2;
        self->v2=(struct sType*)come_increment_ref_count(v2);
        come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __result33__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result33__;
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
struct list$1tuple2$2charphsTypephph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value61 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value62 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        if(_if_conditional31=self->len==0,        _if_conditional31) {
            litem_22=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value60=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsTypephph"))));
            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_22->prev=((void*)0);
            litem_22->next=((void*)0);
            __dec_obj15=litem_22->item;
            litem_22->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_22;
            self->head=litem_22;
        }
        else {
            if(_if_conditional34=self->len==1,            _if_conditional34) {
                litem_23=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value61=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_23->prev=self->head;
                litem_23->next=((void*)0);
                __dec_obj16=litem_23->item;
                litem_23->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_23;
                self->head->next=litem_23;
            }
            else {
                litem_24=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value62=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_24->prev=self->tail;
                litem_24->next=((void*)0);
                __dec_obj17=litem_24->item;
                litem_24->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_24;
                self->tail=litem_24;
            }
        }
        self->len++;
        __result34__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result34__;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional32) {
                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional33=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional33) {
                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional35;
struct tuple2$2charphsTypeph* __result35__;
void* right_value63;
struct tuple2$2charphsTypeph* result_25;
_Bool _if_conditional36;
void* right_value64;
char* __dec_obj18;
_Bool _if_conditional37;
void* right_value100;
struct sType* __dec_obj42;
struct tuple2$2charphsTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
memset(&result_25, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value64 = (void*)0;
right_value100 = (void*)0;
        if(_if_conditional35=self==(void*)0,        _if_conditional35) {
            __result35__ = __result_obj__ = (void*)0;
            return __result35__;
        }
        result_25=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value63=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional36=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional36) {
            __dec_obj18=result_25->v1;
            result_25->v1=(char*)come_increment_ref_count(((char*)(right_value64=string_clone(self->v1))));
            __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional37=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional37) {
            __dec_obj42=result_25->v2;
            result_25->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(self->v2))));
            come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result54__ = __result_obj__ = result_25;
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_25, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result54__;
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional38;
struct sType* __result36__;
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
void* right_value99;
char* __dec_obj41;
_Bool _if_conditional109;
struct sType* __result53__;
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
                if(_if_conditional38=self==(void*)0,                _if_conditional38) {
                    __result36__ = __result_obj__ = (void*)0;
                    return __result36__;
                }
                result_26=(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer2(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional39=self!=((void*)0),                _if_conditional39) {
                    result_26->mClass=self->mClass;
                }
                if(_if_conditional40=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional40) {
                    __dec_obj22=result_26->mMultipleTypes;
                    result_26->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value72=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional44=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional44) {
                    __dec_obj24=result_26->mNoSolvedGenericsType;
                    result_26->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value75=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional48=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional48) {
                    __dec_obj25=result_26->mOriginalLoadVarType;
                    result_26->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value76=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional49=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional49) {
                    __dec_obj26=result_26->mGenericsName;
                    result_26->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value77=string_clone(self->mGenericsName))));
                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional50=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional50) {
                    __dec_obj27=result_26->mGenericsTypes;
                    result_26->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value78=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional51=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional51) {
                    __dec_obj31=result_26->mArrayNum;
                    result_26->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value86=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional64=self!=((void*)0),                _if_conditional64) {
                    result_26->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional65=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional65) {
                    __dec_obj32=result_26->mParamTypes;
                    result_26->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional66=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional66) {
                    __dec_obj36=result_26->mParamNames;
                    result_26->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional70=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional70) {
                    __dec_obj37=result_26->mResultType;
                    result_26->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional71=self!=((void*)0),                _if_conditional71) {
                    result_26->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional72=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional72) {
                    __dec_obj38=result_26->mAlignas;
                    result_26->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=sNode_clone(self->mAlignas))));
                    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value96) { right_value96 = come_decrement_ref_count2(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional73=self!=((void*)0),                _if_conditional73) {
                    result_26->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional74=self!=((void*)0),                _if_conditional74) {
                    result_26->mShort=self->mShort;
                }
                if(_if_conditional75=self!=((void*)0),                _if_conditional75) {
                    result_26->mLong=self->mLong;
                }
                if(_if_conditional76=self!=((void*)0),                _if_conditional76) {
                    result_26->mLongLong=self->mLongLong;
                }
                if(_if_conditional77=self!=((void*)0),                _if_conditional77) {
                    result_26->mConstant=self->mConstant;
                }
                if(_if_conditional78=self!=((void*)0),                _if_conditional78) {
                    result_26->mRegister=self->mRegister;
                }
                if(_if_conditional79=self!=((void*)0),                _if_conditional79) {
                    result_26->mVolatile=self->mVolatile;
                }
                if(_if_conditional80=self!=((void*)0),                _if_conditional80) {
                    result_26->mStatic=self->mStatic;
                }
                if(_if_conditional81=self!=((void*)0),                _if_conditional81) {
                    result_26->mExtern=self->mExtern;
                }
                if(_if_conditional82=self!=((void*)0),                _if_conditional82) {
                    result_26->mRestrict=self->mRestrict;
                }
                if(_if_conditional83=self!=((void*)0),                _if_conditional83) {
                    result_26->mImmutable=self->mImmutable;
                }
                if(_if_conditional84=self!=((void*)0),                _if_conditional84) {
                    result_26->mHeap=self->mHeap;
                }
                if(_if_conditional85=self!=((void*)0),                _if_conditional85) {
                    result_26->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional86=self!=((void*)0),                _if_conditional86) {
                    result_26->mDelegate=self->mDelegate;
                }
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    result_26->mShare=self->mShare;
                }
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    result_26->mClone=self->mClone;
                }
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    result_26->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    result_26->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    result_26->mRefference=self->mRefference;
                }
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    result_26->mException=self->mException;
                }
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    result_26->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_26->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    result_26->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional96=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional96) {
                    __dec_obj39=result_26->mSizeNum;
                    result_26->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=sNode_clone(self->mSizeNum))));
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    result_26->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_26->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional99=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional99) {
                    __dec_obj40=result_26->mOriginalTypeName;
                    result_26->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value98=string_clone(self->mOriginalTypeName))));
                    __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_26->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    result_26->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    result_26->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    result_26->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    result_26->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    result_26->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    result_26->mInline=self->mInline;
                }
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    result_26->mNullValue=self->mNullValue;
                }
                if(_if_conditional108=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional108) {
                    __dec_obj41=result_26->mAsmName;
                    result_26->mAsmName=(char*)come_increment_ref_count(((char*)(right_value99=string_clone(self->mAsmName))));
                    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional109=self!=((void*)0),                _if_conditional109) {
                    result_26->mArrayPointerType=self->mArrayPointerType;
                }
                __result53__ = __result_obj__ = result_26;
                come_call_finalizer2(sType_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result53__;
                come_call_finalizer2(sType_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional41;
struct list$1sTypeph* __result37__;
void* right_value66;
void* right_value67;
struct list$1sTypeph* result_27;
struct list_item$1sTypeph* it_28;
_Bool _while_condtional5;
void* right_value71;
struct list$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value67 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1sTypeph*));
memset(&it_28, 0, sizeof(struct list_item$1sTypeph*));
right_value71 = (void*)0;
                        if(_if_conditional41=self==((void*)0),                        _if_conditional41) {
                            __result37__ = __result_obj__ = ((void*)0);
                            return __result37__;
                        }
                        result_27=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value67=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value66=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_28=self->head;
                        while(_while_condtional5=it_28!=((void*)0),                        _while_condtional5) {
                            list$1sTypeph_add(result_27,(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(it_28->item)))));
                            come_call_finalizer2(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            it_28=it_28->next;
                        }
                        __result40__ = __result_obj__ = result_27;
                        come_call_finalizer2(list$1sTypephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result40__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result38__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result38__;
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
struct list$1sTypeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1sTypeph*));
right_value69 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1sTypeph*));
right_value70 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional42=self->len==0,                                _if_conditional42) {
                                    litem_29=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value68=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_29->prev=((void*)0);
                                    litem_29->next=((void*)0);
                                    __dec_obj19=litem_29->item;
                                    litem_29->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_29;
                                    self->head=litem_29;
                                }
                                else {
                                    if(_if_conditional43=self->len==1,                                    _if_conditional43) {
                                        litem_30=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value69=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_30->prev=self->head;
                                        litem_30->next=((void*)0);
                                        __dec_obj20=litem_30->item;
                                        litem_30->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail=litem_30;
                                        self->head->next=litem_30;
                                    }
                                    else {
                                        litem_31=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value70=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_31->prev=self->tail;
                                        litem_31->next=((void*)0);
                                        __dec_obj21=litem_31->item;
                                        litem_31->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail->next=litem_31;
                                        self->tail=litem_31;
                                    }
                                }
                                self->len++;
                                __result39__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result39__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct tuple1$1sTypeph* __result41__;
void* right_value73;
struct tuple1$1sTypeph* result_32;
_Bool _if_conditional47;
void* right_value74;
struct sType* __dec_obj23;
struct tuple1$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
memset(&result_32, 0, sizeof(struct tuple1$1sTypeph*));
right_value74 = (void*)0;
                        if(_if_conditional45=self==(void*)0,                        _if_conditional45) {
                            __result41__ = __result_obj__ = (void*)0;
                            return __result41__;
                        }
                        result_32=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value73=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional47=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional47) {
                            __dec_obj23=result_32->v1;
                            result_32->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result42__ = __result_obj__ = result_32;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_32, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result42__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional46) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional52;
struct list$1sNodeph* __result43__;
void* right_value79;
void* right_value80;
struct list$1sNodeph* result_33;
struct list_item$1sNodeph* it_34;
_Bool _while_condtional6;
void* right_value85;
struct list$1sNodeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&result_33, 0, sizeof(struct list$1sNodeph*));
memset(&it_34, 0, sizeof(struct list_item$1sNodeph*));
right_value85 = (void*)0;
                        if(_if_conditional52=self==((void*)0),                        _if_conditional52) {
                            __result43__ = __result_obj__ = ((void*)0);
                            return __result43__;
                        }
                        result_33=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value80=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value79=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_34=self->head;
                        while(_while_condtional6=it_34!=((void*)0),                        _while_condtional6) {
                            list$1sNodeph_add(result_33,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(it_34->item)))));
                            if(right_value85) { right_value85 = come_decrement_ref_count2(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_34=it_34->next;
                        }
                        __result48__ = __result_obj__ = result_33;
                        come_call_finalizer2(list$1sNodephp_finalize,result_33, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result48__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result44__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result44__;
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
struct list$1sNodeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1sNodeph*));
right_value82 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1sNodeph*));
right_value83 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional53=self->len==0,                                _if_conditional53) {
                                    litem_35=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value81=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_35->prev=((void*)0);
                                    litem_35->next=((void*)0);
                                    __dec_obj28=litem_35->item;
                                    litem_35->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_35;
                                    self->head=litem_35;
                                }
                                else {
                                    if(_if_conditional54=self->len==1,                                    _if_conditional54) {
                                        litem_36=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value82=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_36->prev=self->head;
                                        litem_36->next=((void*)0);
                                        __dec_obj29=litem_36->item;
                                        litem_36->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail=litem_36;
                                        self->head->next=litem_36;
                                    }
                                    else {
                                        litem_37=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value83=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_37->prev=self->tail;
                                        litem_37->next=((void*)0);
                                        __dec_obj30=litem_37->item;
                                        litem_37->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail->next=litem_37;
                                        self->tail=litem_37;
                                    }
                                }
                                self->len++;
                                __result45__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result45__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional55;
struct sNode* __result46__;
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
struct sNode* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&result_38, 0, sizeof(struct sNode*));
                                if(_if_conditional55=self==(void*)0,                                _if_conditional55) {
                                    __result46__ = __result_obj__ = (void*)0;
                                    return __result46__;
                                }
                                result_38=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional56=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional56) {
                                    result_38->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional57=self!=((void*)0),                                _if_conditional57) {
                                    result_38->finalize=self->finalize;
                                }
                                if(_if_conditional58=self!=((void*)0),                                _if_conditional58) {
                                    result_38->clone=self->clone;
                                }
                                if(_if_conditional59=self!=((void*)0),                                _if_conditional59) {
                                    result_38->compile=self->compile;
                                }
                                if(_if_conditional60=self!=((void*)0),                                _if_conditional60) {
                                    result_38->sline=self->sline;
                                }
                                if(_if_conditional61=self!=((void*)0),                                _if_conditional61) {
                                    result_38->sname=self->sname;
                                }
                                if(_if_conditional62=self!=((void*)0),                                _if_conditional62) {
                                    result_38->terminated=self->terminated;
                                }
                                if(_if_conditional63=self!=((void*)0),                                _if_conditional63) {
                                    result_38->kind=self->kind;
                                }
                                __result47__ = __result_obj__ = result_38;
                                if(result_38) { result_38 = come_decrement_ref_count2(result_38, ((struct sNode*)result_38)->finalize, ((struct sNode*)result_38)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result47__;
                                if(result_38) { result_38 = come_decrement_ref_count2(result_38, ((struct sNode*)result_38)->finalize, ((struct sNode*)result_38)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional67;
struct list$1charph* __result49__;
void* right_value88;
void* right_value89;
struct list$1charph* result_39;
struct list_item$1charph* it_40;
_Bool _while_condtional7;
void* right_value93;
struct list$1charph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_39, 0, sizeof(struct list$1charph*));
memset(&it_40, 0, sizeof(struct list_item$1charph*));
right_value93 = (void*)0;
                        if(_if_conditional67=self==((void*)0),                        _if_conditional67) {
                            __result49__ = __result_obj__ = ((void*)0);
                            return __result49__;
                        }
                        result_39=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_40=self->head;
                        while(_while_condtional7=it_40!=((void*)0),                        _while_condtional7) {
                            list$1charph_add(result_39,(char*)come_increment_ref_count(((char*)(right_value93=string_clone(it_40->item)))));
                            right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_40=it_40->next;
                        }
                        __result52__ = __result_obj__ = result_39;
                        come_call_finalizer2(list$1charphp_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result52__;
                        come_call_finalizer2(list$1charphp_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result50__ = __result_obj__ = self;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result50__;
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
struct list$1charph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&litem_41, 0, sizeof(struct list_item$1charph*));
right_value91 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1charph*));
right_value92 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional68=self->len==0,                                _if_conditional68) {
                                    litem_41=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_41->prev=((void*)0);
                                    litem_41->next=((void*)0);
                                    __dec_obj33=litem_41->item;
                                    litem_41->item=(char*)come_increment_ref_count(item);
                                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_41;
                                    self->head=litem_41;
                                }
                                else {
                                    if(_if_conditional69=self->len==1,                                    _if_conditional69) {
                                        litem_42=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_42->prev=self->head;
                                        litem_42->next=((void*)0);
                                        __dec_obj34=litem_42->item;
                                        litem_42->item=(char*)come_increment_ref_count(item);
                                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail=litem_42;
                                        self->head->next=litem_42;
                                    }
                                    else {
                                        litem_43=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_43->prev=self->tail;
                                        litem_43->next=((void*)0);
                                        __dec_obj35=litem_43->item;
                                        litem_43->item=(char*)come_increment_ref_count(item);
                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail->next=litem_43;
                                        self->tail=litem_43;
                                    }
                                }
                                self->len++;
                                __result51__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result51__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional110;
char* result_47;
char* __result55__;
_Bool _if_conditional111;
char* __result56__;
char* result_48;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_47, 0, sizeof(char*));
memset(&result_48, 0, sizeof(char*));
            if(_if_conditional110=self==((void*)0),            _if_conditional110) {
                memset(&result_47,0,sizeof(char*));
                __result55__ = __result_obj__ = result_47;
                return __result55__;
            }
            self->key_list->it=self->key_list->head;
            if(self->key_list->it) {
                __result56__ = __result_obj__ = self->key_list->it->item;
                return __result56__;
            }
            memset(&result_48,0,sizeof(char*));
            __result57__ = __result_obj__ = result_48;
            return __result57__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
            __result58__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            return __result58__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional112;
char* result_50;
char* __result59__;
_Bool _if_conditional113;
char* __result60__;
char* result_51;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_50, 0, sizeof(char*));
memset(&result_51, 0, sizeof(char*));
            if(_if_conditional112=self==((void*)0)||self->key_list->it==((void*)0),            _if_conditional112) {
                memset(&result_50,0,sizeof(char*));
                __result59__ = __result_obj__ = result_50;
                return __result59__;
            }
            self->key_list->it=self->key_list->it->next;
            if(self->key_list->it) {
                __result60__ = __result_obj__ = self->key_list->it->item;
                return __result60__;
            }
            memset(&result_51,0,sizeof(char*));
            __result61__ = __result_obj__ = result_51;
            return __result61__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_53;
unsigned int hash_54;
unsigned int it_55;
_Bool _while_condtional8;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct sVar* __result62__;
_Bool _if_conditional120;
_Bool _if_conditional121;
struct sVar* __result63__;
struct sVar* __result64__;
struct sVar* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_53, 0, sizeof(struct sVar*));
memset(&hash_54, 0, sizeof(unsigned int));
memset(&it_55, 0, sizeof(unsigned int));
                memset(&default_value_53,0,sizeof(struct sVar*));
                hash_54=string_get_hash_key(((char*)key))%self->size;
                it_55=hash_54;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional114=self->item_existance[it_55],                    _if_conditional114) {
                        if(_if_conditional115=string_equals(self->keys[it_55],key),                        _if_conditional115) {
                            __result62__ = __result_obj__ = self->items[it_55];
                            come_call_finalizer2(sVar_finalize,default_value_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result62__;
                        }
                        it_55++;
                        if(_if_conditional120=it_55>=self->size,                        _if_conditional120) {
                            it_55=0;
                        }
                        else {
                            if(_if_conditional121=it_55==hash_54,                            _if_conditional121) {
                                __result63__ = __result_obj__ = default_value_53;
                                come_call_finalizer2(sVar_finalize,default_value_53, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result63__;
                            }
                        }
                    }
                    else {
                        __result64__ = __result_obj__ = default_value_53;
                        come_call_finalizer2(sVar_finalize,default_value_53, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result64__;
                    }
                }
                __result65__ = __result_obj__ = default_value_53;
                come_call_finalizer2(sVar_finalize,default_value_53, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result65__;
                come_call_finalizer2(sVar_finalize,default_value_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional116=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional116) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional117=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional117) {
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional118=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional118) {
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional119=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional119) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result66__ = self->len;
                                    return __result66__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_60;
_Bool _while_condtional9;
struct list_item$1sNodeph* prev_it_61;
struct list$1sNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_61, 0, sizeof(struct list_item$1sNodeph*));
                                        it_60=self->head;
                                        while(_while_condtional9=it_60!=((void*)0),                                        _while_condtional9) {
                                            prev_it_61=it_60;
                                            it_60=it_60->next;
                                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        self->head=((void*)0);
                                        self->tail=((void*)0);
                                        self->len=0;
                                        __result67__ = __result_obj__ = self;
                                        return __result67__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_63;
_Bool _if_conditional128;
_Bool _if_conditional129;
int i_64;
_Bool _if_conditional130;
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_63, 0, sizeof(int));
memset(&i_64, 0, sizeof(int));
            for(            i_63=0;            i_63<self->size;            i_63++            ){
                if(_if_conditional128=self->item_existance[i_63],                _if_conditional128) {
                    if(_if_conditional129=1,                    _if_conditional129) {
                        come_call_finalizer2(sVar_finalize,self->items[i_63], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_64=0;            i_64<self->size;            i_64++            ){
                if(_if_conditional130=self->item_existance[i_64],                _if_conditional130) {
                    if(_if_conditional131=1,                    _if_conditional131) {
                        self->keys[i_64] = come_decrement_ref_count2(self->keys[i_64], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                it_65=self->head;
                while(_while_condtional10=it_65!=((void*)0),                _while_condtional10) {
                    prev_it_66=it_65;
                    it_65=it_65->next;
                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional132;
unsigned int hash_84;
unsigned int it_85;
_Bool _while_condtional13;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool same_key_exist_102;
char* it2_105;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct map$2charphsClassph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_84, 0, sizeof(unsigned int));
memset(&it_85, 0, sizeof(unsigned int));
memset(&same_key_exist_102, 0, sizeof(_Bool));
memset(&it2_105, 0, sizeof(char*));
        if(_if_conditional132=self->len*10>=self->size,        _if_conditional132) {
            map$2charphsClassph_rehash(self);
        }
        hash_84=string_get_hash_key(key)%self->size;
        it_85=hash_84;
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            if(_if_conditional144=self->item_existance[it_85],            _if_conditional144) {
                if(_if_conditional145=string_equals(self->keys[it_85],key),                _if_conditional145) {
                    if(_if_conditional146=1,                    _if_conditional146) {
                        list$1charp_remove(self->key_list,self->keys[it_85]);
                        self->keys[it_85] = come_decrement_ref_count2(self->keys[it_85], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_85]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_85]);
                        self->keys[it_85]=key;
                    }
                    if(_if_conditional166=1,                    _if_conditional166) {
                        come_call_finalizer2(sClass_finalize,self->items[it_85], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->items[it_85]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_85]=item;
                    }
                    break;
                }
                it_85++;
                if(_if_conditional167=it_85>=self->size,                _if_conditional167) {
                    it_85=0;
                }
                else {
                    if(_if_conditional168=it_85==hash_84,                    _if_conditional168) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_85]=(_Bool)1;
                if(_if_conditional169=1,                _if_conditional169) {
                    self->keys[it_85]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_85]=key;
                }
                if(_if_conditional170=1,                _if_conditional170) {
                    self->items[it_85]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_85]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_102=(_Bool)0;
        for(        it2_105=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_105=list$1charp_next(self->key_list)        ){
            if(_if_conditional175=string_equals(it2_105,key),            _if_conditional175) {
                puts("SAME KEY");
                same_key_exist_102=(_Bool)1;
            }
        }
        if(_if_conditional176=!same_key_exist_102,        _if_conditional176) {
            list$1charp_push_back(self->key_list,key);
        }
        __result91__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result91__;
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
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
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
                size_67=self->size*10;
                keys_68=(char**)come_increment_ref_count(((char**)(right_value118=(char**)come_calloc(1, sizeof(char*)*(1*(size_67)), "./comelang2.h", 1335, "char*%"))));
                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_69=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value119=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_67)), "./comelang2.h", 1336, "sClass*%"))));
                come_call_finalizer2(sClass_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                item_existance_70=(_Bool*)come_increment_ref_count(((_Bool*)(right_value120=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_67)), "./comelang2.h", 1337, "bool"))));
                right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_71=0;
                for(                it_74=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_74=map$2charphsClassph_next(self)                ){
                    memset(&default_value_77,0,sizeof(struct sClass*));
                    it2_80=map$2charphsClassph_at(self,it_74,default_value_77);
                    hash_81=string_get_hash_key(it_74)%size_67;
                    n_82=hash_81;
                    while(_while_condtional12=(_Bool)1,                    _while_condtional12) {
                        if(_if_conditional141=item_existance_70[n_82],                        _if_conditional141) {
                            n_82++;
                            if(_if_conditional142=n_82>=size_67,                            _if_conditional142) {
                                n_82=0;
                            }
                            else {
                                if(_if_conditional143=n_82==hash_81,                                _if_conditional143) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_70[n_82]=(_Bool)1;
                            keys_68[n_82]=it_74;
                            items_69[n_82]=map$2charphsClassph_at(self,it_74,default_value_83);
                            len_71++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_68;
                self->items=items_69;
                self->item_existance=item_existance_70;
                self->size=size_67;
                self->len=len_71;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional133;
char* result_72;
char* __result68__;
_Bool _if_conditional134;
char* __result69__;
char* result_73;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                    if(_if_conditional133=self==((void*)0),                    _if_conditional133) {
                        memset(&result_72,0,sizeof(char*));
                        __result68__ = __result_obj__ = result_72;
                        return __result68__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result69__ = __result_obj__ = self->key_list->it->item;
                        return __result69__;
                    }
                    memset(&result_73,0,sizeof(char*));
                    __result70__ = __result_obj__ = result_73;
                    return __result70__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result71__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result71__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional135;
char* result_75;
char* __result72__;
_Bool _if_conditional136;
char* __result73__;
char* result_76;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_75, 0, sizeof(char*));
memset(&result_76, 0, sizeof(char*));
                    if(_if_conditional135=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional135) {
                        memset(&result_75,0,sizeof(char*));
                        __result72__ = __result_obj__ = result_75;
                        return __result72__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result73__ = __result_obj__ = self->key_list->it->item;
                        return __result73__;
                    }
                    memset(&result_76,0,sizeof(char*));
                    __result74__ = __result_obj__ = result_76;
                    return __result74__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_78;
unsigned int it_79;
_Bool _while_condtional11;
_Bool _if_conditional137;
_Bool _if_conditional138;
struct sClass* __result75__;
_Bool _if_conditional139;
_Bool _if_conditional140;
struct sClass* __result76__;
struct sClass* __result77__;
struct sClass* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_78, 0, sizeof(unsigned int));
memset(&it_79, 0, sizeof(unsigned int));
                        hash_78=string_get_hash_key(((char*)key))%self->size;
                        it_79=hash_78;
                        while(_while_condtional11=(_Bool)1,                        _while_condtional11) {
                            if(_if_conditional137=self->item_existance[it_79],                            _if_conditional137) {
                                if(_if_conditional138=string_equals(self->keys[it_79],key),                                _if_conditional138) {
                                    __result75__ = __result_obj__ = self->items[it_79];
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result75__;
                                }
                                it_79++;
                                if(_if_conditional139=it_79>=self->size,                                _if_conditional139) {
                                    it_79=0;
                                }
                                else {
                                    if(_if_conditional140=it_79==hash_78,                                    _if_conditional140) {
                                        __result76__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result76__;
                                    }
                                }
                            }
                            else {
                                __result77__ = __result_obj__ = default_value;
                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result77__;
                            }
                        }
                        __result78__ = __result_obj__ = default_value;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result78__;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_86;
struct list_item$1charp* it_87;
_Bool _while_condtional14;
_Bool _if_conditional147;
struct list$1charp* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_86, 0, sizeof(int));
memset(&it_87, 0, sizeof(struct list_item$1charp*));
                            it2_86=0;
                            it_87=self->head;
                            while(_while_condtional14=it_87!=((void*)0),                            _while_condtional14) {
                                if(_if_conditional147=string_equals(it_87->item,item),                                _if_conditional147) {
                                    list$1charp_delete(self,it2_86,it2_86+1);
                                    break;
                                }
                                it2_86++;
                                it_87=it_87->next;
                            }
                            __result82__ = __result_obj__ = self;
                            return __result82__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
int tmp_88;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list$1charp* __result79__;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct list_item$1charp* it_91;
int i_92;
_Bool _while_condtional16;
_Bool _if_conditional156;
struct list_item$1charp* prev_it_93;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct list_item$1charp* it_94;
int i_95;
_Bool _while_condtional17;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct list_item$1charp* prev_it_96;
struct list_item$1charp* it_97;
struct list_item$1charp* head_prev_it_98;
struct list_item$1charp* tail_it_99;
int i_100;
_Bool _while_condtional18;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
struct list_item$1charp* prev_it_101;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct list$1charp* __result81__;
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
                                        if(_if_conditional148=head<0,                                        _if_conditional148) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional149=tail<0,                                        _if_conditional149) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional150=head>tail,                                        _if_conditional150) {
                                            tmp_88=tail;
                                            tail=head;
                                            head=tmp_88;
                                        }
                                        if(_if_conditional151=head<0,                                        _if_conditional151) {
                                            head=0;
                                        }
                                        if(_if_conditional152=tail>self->len,                                        _if_conditional152) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional153=head==tail,                                        _if_conditional153) {
                                            __result79__ = __result_obj__ = self;
                                            return __result79__;
                                        }
                                        if(_if_conditional154=head==0&&tail==self->len,                                        _if_conditional154) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional155=head==0,                                            _if_conditional155) {
                                                it_91=self->head;
                                                i_92=0;
                                                while(_while_condtional16=it_91!=((void*)0),                                                _while_condtional16) {
                                                    if(_if_conditional156=i_92<tail,                                                    _if_conditional156) {
                                                        prev_it_93=it_91;
                                                        it_91=it_91->next;
                                                        i_92++;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional157=i_92==tail,                                                        _if_conditional157) {
                                                            self->head=it_91;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_91=it_91->next;
                                                            i_92++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional158=tail==self->len,                                                _if_conditional158) {
                                                    it_94=self->head;
                                                    i_95=0;
                                                    while(_while_condtional17=it_94!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional159=i_95==head,                                                        _if_conditional159) {
                                                            self->tail=it_94->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional160=i_95>=head,                                                        _if_conditional160) {
                                                            prev_it_96=it_94;
                                                            it_94=it_94->next;
                                                            i_95++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_94=it_94->next;
                                                            i_95++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_97=self->head;
                                                    head_prev_it_98=((void*)0);
                                                    tail_it_99=((void*)0);
                                                    i_100=0;
                                                    while(_while_condtional18=it_97!=((void*)0),                                                    _while_condtional18) {
                                                        if(_if_conditional161=i_100==head,                                                        _if_conditional161) {
                                                            head_prev_it_98=it_97->prev;
                                                        }
                                                        if(_if_conditional162=i_100==tail,                                                        _if_conditional162) {
                                                            tail_it_99=it_97;
                                                        }
                                                        if(_if_conditional163=i_100>=head&&i_100<tail,                                                        _if_conditional163) {
                                                            prev_it_101=it_97;
                                                            it_97=it_97->next;
                                                            i_100++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_97=it_97->next;
                                                            i_100++;
                                                        }
                                                    }
                                                    if(_if_conditional164=head_prev_it_98!=((void*)0),                                                    _if_conditional164) {
                                                        head_prev_it_98->next=tail_it_99;
                                                    }
                                                    if(_if_conditional165=tail_it_99!=((void*)0),                                                    _if_conditional165) {
                                                        tail_it_99->prev=head_prev_it_98;
                                                    }
                                                }
                                            }
                                        }
                                        __result81__ = __result_obj__ = self;
                                        return __result81__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_89;
_Bool _while_condtional15;
struct list_item$1charp* prev_it_90;
struct list$1charp* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_89, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_90, 0, sizeof(struct list_item$1charp*));
                                                it_89=self->head;
                                                while(_while_condtional15=it_89!=((void*)0),                                                _while_condtional15) {
                                                    prev_it_90=it_89;
                                                    it_89=it_89->next;
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result80__ = __result_obj__ = self;
                                                return __result80__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional171;
char* result_103;
char* __result83__;
_Bool _if_conditional172;
char* __result84__;
char* result_104;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_103, 0, sizeof(char*));
memset(&result_104, 0, sizeof(char*));
            if(_if_conditional171=self==((void*)0),            _if_conditional171) {
                memset(&result_103,0,sizeof(char*));
                __result83__ = __result_obj__ = result_103;
                return __result83__;
            }
            self->it=self->head;
            if(self->it) {
                __result84__ = __result_obj__ = self->it->item;
                return __result84__;
            }
            memset(&result_104,0,sizeof(char*));
            __result85__ = __result_obj__ = result_104;
            return __result85__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
            __result86__ = self==((void*)0)||self->it==((void*)0);
            return __result86__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional173;
char* result_106;
char* __result87__;
_Bool _if_conditional174;
char* __result88__;
char* result_107;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_106, 0, sizeof(char*));
memset(&result_107, 0, sizeof(char*));
            if(_if_conditional173=self==((void*)0)||self->it==((void*)0),            _if_conditional173) {
                memset(&result_106,0,sizeof(char*));
                __result87__ = __result_obj__ = result_106;
                return __result87__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result88__ = __result_obj__ = self->it->item;
                return __result88__;
            }
            memset(&result_107,0,sizeof(char*));
            __result89__ = __result_obj__ = result_107;
            return __result89__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional177;
void* right_value121;
struct list_item$1charp* litem_108;
_Bool _if_conditional178;
void* right_value122;
struct list_item$1charp* litem_109;
void* right_value123;
struct list_item$1charp* litem_110;
struct list$1charp* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1charp*));
right_value122 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1charp*));
right_value123 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional177=self->len==0,                _if_conditional177) {
                    litem_108=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value121=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_108->prev=((void*)0);
                    litem_108->next=((void*)0);
                    litem_108->item=item;
                    self->tail=litem_108;
                    self->head=litem_108;
                }
                else {
                    if(_if_conditional178=self->len==1,                    _if_conditional178) {
                        litem_109=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value122=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_109->prev=self->head;
                        litem_109->next=((void*)0);
                        litem_109->item=item;
                        self->tail=litem_109;
                        self->head->next=litem_109;
                    }
                    else {
                        litem_110=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value123=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_110->prev=self->tail;
                        litem_110->next=((void*)0);
                        litem_110->item=item;
                        self->tail->next=litem_110;
                        self->tail=litem_110;
                    }
                }
                self->len++;
                __result90__ = __result_obj__ = self;
                return __result90__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional185;
_Bool _if_conditional186;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional185=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional185) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional186=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional186) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional187;
void* right_value131;
struct list_item$1CVALUEph* litem_119;
struct CVALUE* __dec_obj45;
_Bool _if_conditional189;
void* right_value132;
struct list_item$1CVALUEph* litem_120;
struct CVALUE* __dec_obj46;
void* right_value133;
struct list_item$1CVALUEph* litem_121;
struct CVALUE* __dec_obj47;
struct list$1CVALUEph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&litem_119, 0, sizeof(struct list_item$1CVALUEph*));
right_value132 = (void*)0;
memset(&litem_120, 0, sizeof(struct list_item$1CVALUEph*));
right_value133 = (void*)0;
memset(&litem_121, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional187=self->len==0,        _if_conditional187) {
            litem_119=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value131=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_119->prev=((void*)0);
            litem_119->next=((void*)0);
            __dec_obj45=litem_119->item;
            litem_119->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_119;
            self->head=litem_119;
        }
        else {
            if(_if_conditional189=self->len==1,            _if_conditional189) {
                litem_120=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value132=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_120->prev=self->head;
                litem_120->next=((void*)0);
                __dec_obj46=litem_120->item;
                litem_120->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_120;
                self->head->next=litem_120;
            }
            else {
                litem_121=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value133=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_121->prev=self->tail;
                litem_121->next=((void*)0);
                __dec_obj47=litem_121->item;
                litem_121->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_121;
                self->tail=litem_121;
            }
        }
        self->len++;
        __result92__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result92__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional188=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional188) {
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
struct sMethodCallNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
    __dec_obj48=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value134=sNode_clone(obj))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value134) { right_value134 = come_decrement_ref_count2(right_value134, ((struct sNode*)right_value134)->finalize, ((struct sNode*)right_value134)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj49=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value135=__builtin_string(fun_name))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj55=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value145=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value146=buffer_clone(method_block))));
    come_call_finalizer2(buffer_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->method_block_sline=method_block_sline;
    __dec_obj58=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value148=list$1sTypephp_clone(method_generics_types))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result100__ = __result_obj__ = self;
    come_call_finalizer2(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result100__;
    come_call_finalizer2(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional190;
struct list$1tuple2$2charphsNodephph* __result94__;
void* right_value136;
void* right_value137;
struct list$1tuple2$2charphsNodephph* result_124;
struct list_item$1tuple2$2charphsNodephph* it_125;
_Bool _while_condtional20;
void* right_value144;
struct list$1tuple2$2charphsNodephph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&result_124, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_125, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value144 = (void*)0;
        if(_if_conditional190=self==((void*)0),        _if_conditional190) {
            __result94__ = __result_obj__ = ((void*)0);
            return __result94__;
        }
        result_124=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value137=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value136=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_125=self->head;
        while(_while_condtional20=it_125!=((void*)0),        _while_condtional20) {
            list$1tuple2$2charphsNodephph_add(result_124,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value144=tuple2$2charphsNodephp_clone(it_125->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_125=it_125->next;
        }
        __result99__ = __result_obj__ = result_124;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_124, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result99__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result95__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result95__;
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
                it_122=self->head;
                while(_while_condtional19=it_122!=((void*)0),                _while_condtional19) {
                    prev_it_123=it_122;
                    it_122=it_122->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional191;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional191=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional191) {
                            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional192;
_Bool _if_conditional193;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional192=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional192) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional193=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional193) {
                                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional194;
void* right_value138;
struct list_item$1tuple2$2charphsNodephph* litem_126;
struct tuple2$2charphsNodeph* __dec_obj50;
_Bool _if_conditional197;
void* right_value139;
struct list_item$1tuple2$2charphsNodephph* litem_127;
struct tuple2$2charphsNodeph* __dec_obj51;
void* right_value140;
struct list_item$1tuple2$2charphsNodephph* litem_128;
struct tuple2$2charphsNodeph* __dec_obj52;
struct list$1tuple2$2charphsNodephph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value139 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value140 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional194=self->len==0,                _if_conditional194) {
                    litem_126=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value138=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_126->prev=((void*)0);
                    litem_126->next=((void*)0);
                    __dec_obj50=litem_126->item;
                    litem_126->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_126;
                    self->head=litem_126;
                }
                else {
                    if(_if_conditional197=self->len==1,                    _if_conditional197) {
                        litem_127=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value139=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_127->prev=self->head;
                        litem_127->next=((void*)0);
                        __dec_obj51=litem_127->item;
                        litem_127->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_127;
                        self->head->next=litem_127;
                    }
                    else {
                        litem_128=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value140=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_128->prev=self->tail;
                        litem_128->next=((void*)0);
                        __dec_obj52=litem_128->item;
                        litem_128->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_128;
                        self->tail=litem_128;
                    }
                }
                self->len++;
                __result96__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result96__;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional195;
_Bool _if_conditional196;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional195=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional195) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional196=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional196) {
                            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional198;
struct tuple2$2charphsNodeph* __result97__;
void* right_value141;
struct tuple2$2charphsNodeph* result_129;
_Bool _if_conditional199;
void* right_value142;
char* __dec_obj53;
_Bool _if_conditional200;
void* right_value143;
struct sNode* __dec_obj54;
struct tuple2$2charphsNodeph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
memset(&result_129, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value142 = (void*)0;
right_value143 = (void*)0;
                if(_if_conditional198=self==(void*)0,                _if_conditional198) {
                    __result97__ = __result_obj__ = (void*)0;
                    return __result97__;
                }
                result_129=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value141=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional199=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional199) {
                    __dec_obj53=result_129->v1;
                    result_129->v1=(char*)come_increment_ref_count(((char*)(right_value142=string_clone(self->v1))));
                    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional200=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional200) {
                    __dec_obj54=result_129->v2;
                    result_129->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value143=sNode_clone(self->v2))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value143) { right_value143 = come_decrement_ref_count2(right_value143, ((struct sNode*)right_value143)->finalize, ((struct sNode*)right_value143)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result98__ = __result_obj__ = result_129;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_129, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result98__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
int __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    __result101__ = self->sline;
    return __result101__;
}

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value149;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
    __result102__ = __result_obj__ = ((char*)(right_value149=__builtin_string(self->sname)));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
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
_Bool _if_conditional221;
void* right_value153;
_Bool _if_conditional222;
void* right_value154;
char* __result107__;
char* __result108__;
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
    none_generics_name_130=(char*)come_increment_ref_count(((char*)(right_value150=get_none_generics_name(type->mClass->mName))));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_name2_131=(char*)come_increment_ref_count(((char*)(right_value151=create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_name3_132=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s_%s",none_generics_name_130,fun_name))));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    generics_fun_135=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_132,((void*)0));
    if(generics_fun_135) {
        if(_if_conditional222=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(fun_name2_131)))),generics_fun_135,type,info),        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional222) {
            err_msg(info,"%s not found",fun_name3_132);
            __result107__ = __result_obj__ = ((char*)(right_value154=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            none_generics_name_130 = come_decrement_ref_count2(none_generics_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_131 = come_decrement_ref_count2(fun_name2_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_132 = come_decrement_ref_count2(fun_name3_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result107__;
        }
    }
    __result108__ = __result_obj__ = fun_name2_131;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_130 = come_decrement_ref_count2(none_generics_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_131 = come_decrement_ref_count2(fun_name2_131, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_132 = come_decrement_ref_count2(fun_name3_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result108__;
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
_Bool _if_conditional207;
_Bool _if_conditional208;
struct sGenericsFun* __result103__;
_Bool _if_conditional219;
_Bool _if_conditional220;
struct sGenericsFun* __result104__;
struct sGenericsFun* __result105__;
struct sGenericsFun* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_133, 0, sizeof(unsigned int));
memset(&it_134, 0, sizeof(unsigned int));
        hash_133=string_get_hash_key(((char*)key))%self->size;
        it_134=hash_133;
        while(_while_condtional21=(_Bool)1,        _while_condtional21) {
            if(_if_conditional207=self->item_existance[it_134],            _if_conditional207) {
                if(_if_conditional208=string_equals(self->keys[it_134],key),                _if_conditional208) {
                    __result103__ = __result_obj__ = self->items[it_134];
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result103__;
                }
                it_134++;
                if(_if_conditional219=it_134>=self->size,                _if_conditional219) {
                    it_134=0;
                }
                else {
                    if(_if_conditional220=it_134==hash_133,                    _if_conditional220) {
                        __result104__ = __result_obj__ = default_value;
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result104__;
                    }
                }
            }
            else {
                __result105__ = __result_obj__ = default_value;
                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result105__;
            }
        }
        __result106__ = __result_obj__ = default_value;
        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result106__;
        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional209=self!=((void*)0)&&self->mImplType!=((void*)0),                        _if_conditional209) {
                            come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional210=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                        _if_conditional210) {
                            come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional211=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                        _if_conditional211) {
                            come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional212=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional212) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional213=self!=((void*)0)&&self->mResultType!=((void*)0),                        _if_conditional213) {
                            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional214=self!=((void*)0)&&self->mParamTypes!=((void*)0),                        _if_conditional214) {
                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional215=self!=((void*)0)&&self->mParamNames!=((void*)0),                        _if_conditional215) {
                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional216=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                        _if_conditional216) {
                            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional217=self!=((void*)0)&&self->mBlock!=((void*)0),                        _if_conditional217) {
                            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional218=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                        _if_conditional218) {
                            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional223;
_Bool __result109__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->method_block) {
        __result109__ = (_Bool)1;
        return __result109__;
    }
    else {
        __result110__ = (_Bool)0;
        return __result110__;
    }
}

char* sMethodCallNode_kind(){
void* __result_obj__;
void* right_value155;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __result111__ = __result_obj__ = ((char*)(right_value155=__builtin_string("sMethodCallNode")));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
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
_Bool _if_conditional224;
_Bool __result112__;
void* right_value157;
struct CVALUE* obj_value_142;
void* right_value158;
struct sType* obj_type_143;
struct sClass* klass_144;
_Bool calling_dynamic_method_145;
struct sType* lambda_type_146;
struct list$1tuple2$2charphsTypephph* o2_saved_147;
struct tuple2$2charphsTypeph* it_150;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_153;
struct sType* field_type_154;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value159;
struct sType* result_type_155;
void* right_value160;
void* right_value161;
struct list$1CVALUEph* come_params_158;
int i_159;
struct list$1tuple2$2charphsNodephph* o2_saved_160;
struct tuple2$2charphsNodeph* it_163;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_166;
struct sNode* node_167;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool __result128__;
void* right_value162;
struct CVALUE* come_value_168;
void* right_value163;
void* right_value164;
void* right_value165;
_Bool _if_conditional239;
void* right_value166;
void* right_value167;
struct buffer* buf_172;
void* right_value168;
int j_173;
struct list$1CVALUEph* o2_saved_174;
struct CVALUE* it_177;
_Bool _if_conditional244;
void* right_value169;
char* __dec_obj60;
_Bool _if_conditional245;
void* right_value170;
struct CVALUE* come_value2_180;
void* right_value171;
char* __dec_obj61;
void* right_value172;
struct sType* result_type2_181;
_Bool _if_conditional246;
void* right_value173;
void* right_value174;
char* __dec_obj62;
void* right_value175;
struct sType* __dec_obj63;
void* right_value176;
void* right_value177;
void* right_value178;
char* generics_fun_name_182;
struct sFun* fun_183;
int i_184;
void* right_value179;
char* new_fun_name_185;
_Bool _if_conditional266;
void* right_value180;
char* __dec_obj64;
_Bool _if_conditional267;
struct sType* obj_array_type_189;
_Bool _if_conditional268;
void* right_value181;
char* array_method_name_190;
_Bool _if_conditional273;
void* right_value182;
char* __dec_obj65;
void* right_value183;
void* right_value184;
void* right_value185;
char* generics_fun_name_193;
struct sFun* fun_194;
int i_195;
void* right_value186;
char* new_fun_name_196;
_Bool _if_conditional274;
void* right_value187;
char* __dec_obj66;
_Bool _if_conditional275;
void* right_value188;
void* right_value189;
char* __dec_obj67;
_Bool _if_conditional276;
_Bool __result147__;
_Bool _if_conditional277;
void* right_value190;
void* right_value191;
char* __dec_obj68;
_Bool _if_conditional278;
_Bool __result148__;
_Bool _if_conditional279;
_Bool __result150__;
void* right_value192;
struct sType* result_type_197;
void* right_value193;
struct sType* result_type2_198;
void* right_value194;
void* right_value195;
struct list$1sTypeph* param_types_199;
struct list$1sTypeph* o2_saved_200;
struct sType* it_203;
_Bool _if_conditional284;
void* right_value199;
struct sType* it2_209;
void* right_value200;
void* right_value201;
void* right_value202;
struct list$1CVALUEph* come_params_210;
void* right_value203;
void* right_value209;
struct map$2charphCVALUEph* label_params_214;
int i_215;
struct list$1tuple2$2charphsNodephph* o2_saved_216;
struct tuple2$2charphsNodeph* it_217;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_218;
struct sNode* node_219;
_Bool _if_conditional291;
void* right_value210;
void* right_value211;
void* right_value212;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional296;
_Bool __result163__;
void* right_value213;
struct CVALUE* come_value_223;
_Bool _if_conditional297;
int n_224;
struct list$1charph* o2_saved_225;
char* it_228;
_Bool _if_conditional302;
_Bool _if_conditional303;
void* right_value214;
void* right_value215;
void* right_value216;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value217;
void* right_value218;
void* right_value219;
_Bool _if_conditional306;
_Bool _if_conditional307;
void* right_value223;
struct sType* obj_array_type_252;
_Bool _if_conditional330;
_Bool _if_conditional331;
void* right_value224;
void* right_value225;
struct buffer* buf_253;
int i_254;
struct list$1sNodeph* o2_saved_255;
struct sNode* it_258;
_Bool _if_conditional336;
void* right_value226;
struct CVALUE* come_value_261;
void* right_value227;
_Bool _if_conditional337;
void* right_value228;
struct CVALUE* come_value_262;
void* right_value229;
char* __dec_obj73;
void* right_value230;
void* right_value231;
struct sType* __dec_obj74;
void* right_value235;
void* right_value236;
void* right_value237;
_Bool _if_conditional341;
void* right_value238;
void* right_value239;
struct buffer* buf_266;
int i_267;
struct list$1sNodeph* o2_saved_268;
struct sNode* it_269;
_Bool _if_conditional342;
void* right_value240;
struct CVALUE* come_value_270;
void* right_value241;
_Bool _if_conditional343;
void* right_value242;
struct CVALUE* come_value_271;
void* right_value243;
char* __dec_obj79;
void* right_value244;
void* right_value245;
struct sType* __dec_obj80;
void* right_value246;
void* right_value247;
void* right_value248;
_Bool _if_conditional344;
void* right_value249;
char* default_param_272;
char* param_name_273;
struct CVALUE* come_value_277;
_Bool _if_conditional349;
struct buffer* source_278;
char* p_279;
char* head_280;
int sline_281;
void* right_value250;
struct buffer* __dec_obj81;
void* right_value251;
struct sNode* node_282;
_Bool _if_conditional350;
_Bool __result197__;
struct buffer* __dec_obj82;
void* right_value252;
struct CVALUE* come_value_283;
_Bool _if_conditional351;
void* right_value253;
void* right_value254;
void* right_value255;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool __result198__;
_Bool _if_conditional354;
char* param_name_284;
struct CVALUE* come_value_285;
_Bool _if_conditional355;
void* right_value259;
_Bool _if_conditional363;
void* right_value260;
void* right_value261;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value264;
struct sNode* current_stack_frame_node_290;
_Bool _if_conditional368;
_Bool __result207__;
void* right_value265;
struct CVALUE* come_value_291;
void* right_value266;
void* right_value267;
struct buffer* method_block2_292;
void* right_value268;
struct sType* method_block_type_293;
void* right_value269;
char* class_name_294;
struct sClass* current_stack_frame_struct_298;
_Bool _if_conditional373;
_Bool __result212__;
void* right_value270;
struct sType* result_type_299;
struct list$1sTypeph* param_types_300;
struct list$1charph* param_names_301;
void* right_value271;
void* right_value272;
struct buffer* all_alhabet_sname_302;
char* p_303;
_Bool _while_condtional33;
_Bool _if_conditional374;
void* right_value273;
void* right_value274;
void* right_value275;
int i_304;
struct list$1sTypeph* o2_saved_305;
struct sType* it_306;
struct sType* param_type_307;
_Bool _if_conditional375;
void* right_value276;
char* param_name_308;
void* right_value277;
void* right_value278;
_Bool _if_conditional376;
void* right_value279;
char* param_name_309;
void* right_value280;
void* right_value281;
void* right_value282;
char* param_name_310;
void* right_value283;
void* right_value284;
_Bool _if_conditional377;
void* right_value285;
struct buffer* source3_311;
char* p_312;
char* head_313;
int sline_314;
struct buffer* __dec_obj87;
void* right_value286;
struct sNode* node_315;
_Bool _if_conditional378;
_Bool __result213__;
void* right_value287;
void* right_value288;
char* method_block_name_316;
void* right_value289;
struct CVALUE* come_value2_317;
struct sFun* fun2_318;
_Bool _if_conditional379;
_Bool __result214__;
struct sType* method_block_type2_319;
void* right_value290;
char* __dec_obj88;
void* right_value291;
struct sType* __dec_obj89;
struct buffer* __dec_obj90;
void* right_value292;
void* right_value293;
struct buffer* buf_320;
int j_321;
struct list$1CVALUEph* o2_saved_322;
struct CVALUE* it_323;
_Bool _if_conditional380;
void* right_value294;
struct CVALUE* come_value2_324;
void* right_value295;
char* __dec_obj91;
void* right_value296;
struct sType* __dec_obj92;
_Bool _if_conditional381;
void* right_value297;
char* __dec_obj93;
void* right_value298;
char* __dec_obj94;
_Bool _if_conditional382;
void* right_value299;
char* var_name_325;
void* right_value300;
struct sType* result_type_326;
void* right_value301;
struct sType* result_type2_327;
struct sType* result_type3_328;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
void* right_value302;
void* right_value303;
void* right_value304;
void* right_value305;
void* right_value306;
void* right_value307;
void* right_value308;
void* right_value309;
void* right_value310;
void* right_value311;
void* right_value312;
_Bool _if_conditional386;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
void* right_value317;
void* right_value318;
void* right_value319;
struct list$1sTypeph* __dec_obj95;
_Bool __result215__;
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
right_value159 = (void*)0;
memset(&result_type_155, 0, sizeof(struct sType*));
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&come_params_158, 0, sizeof(struct list$1CVALUEph*));
memset(&i_159, 0, sizeof(int));
memset(&o2_saved_160, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_163, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_166, 0, sizeof(char*));
memset(&node_167, 0, sizeof(struct sNode*));
memset(&label_166, 0, sizeof(char*));
memset(&node_167, 0, sizeof(struct sNode*));
right_value162 = (void*)0;
memset(&come_value_168, 0, sizeof(struct CVALUE*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&buf_172, 0, sizeof(struct buffer*));
right_value168 = (void*)0;
memset(&j_173, 0, sizeof(int));
memset(&o2_saved_174, 0, sizeof(struct list$1CVALUEph*));
memset(&it_177, 0, sizeof(struct CVALUE*));
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&come_value2_180, 0, sizeof(struct CVALUE*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&result_type2_181, 0, sizeof(struct sType*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&generics_fun_name_182, 0, sizeof(char*));
memset(&fun_183, 0, sizeof(struct sFun*));
memset(&i_184, 0, sizeof(int));
right_value179 = (void*)0;
memset(&new_fun_name_185, 0, sizeof(char*));
right_value180 = (void*)0;
memset(&obj_array_type_189, 0, sizeof(struct sType*));
right_value181 = (void*)0;
memset(&array_method_name_190, 0, sizeof(char*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&generics_fun_name_193, 0, sizeof(char*));
memset(&fun_194, 0, sizeof(struct sFun*));
memset(&i_195, 0, sizeof(int));
right_value186 = (void*)0;
memset(&new_fun_name_196, 0, sizeof(char*));
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&result_type_197, 0, sizeof(struct sType*));
right_value193 = (void*)0;
memset(&result_type2_198, 0, sizeof(struct sType*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&param_types_199, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_200, 0, sizeof(struct list$1sTypeph*));
memset(&it_203, 0, sizeof(struct sType*));
right_value199 = (void*)0;
memset(&it2_209, 0, sizeof(struct sType*));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&come_params_210, 0, sizeof(struct list$1CVALUEph*));
right_value203 = (void*)0;
right_value209 = (void*)0;
memset(&label_params_214, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_215, 0, sizeof(int));
memset(&o2_saved_216, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_217, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_218, 0, sizeof(char*));
memset(&node_219, 0, sizeof(struct sNode*));
memset(&label_218, 0, sizeof(char*));
memset(&node_219, 0, sizeof(struct sNode*));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&come_value_223, 0, sizeof(struct CVALUE*));
memset(&n_224, 0, sizeof(int));
memset(&o2_saved_225, 0, sizeof(struct list$1charph*));
memset(&it_228, 0, sizeof(char*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value223 = (void*)0;
memset(&obj_array_type_252, 0, sizeof(struct sType*));
right_value224 = (void*)0;
right_value225 = (void*)0;
memset(&buf_253, 0, sizeof(struct buffer*));
memset(&i_254, 0, sizeof(int));
memset(&o2_saved_255, 0, sizeof(struct list$1sNodeph*));
memset(&it_258, 0, sizeof(struct sNode*));
right_value226 = (void*)0;
memset(&come_value_261, 0, sizeof(struct CVALUE*));
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&come_value_262, 0, sizeof(struct CVALUE*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&buf_266, 0, sizeof(struct buffer*));
memset(&i_267, 0, sizeof(int));
memset(&o2_saved_268, 0, sizeof(struct list$1sNodeph*));
memset(&it_269, 0, sizeof(struct sNode*));
right_value240 = (void*)0;
memset(&come_value_270, 0, sizeof(struct CVALUE*));
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&come_value_271, 0, sizeof(struct CVALUE*));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&default_param_272, 0, sizeof(char*));
memset(&param_name_273, 0, sizeof(char*));
memset(&come_value_277, 0, sizeof(struct CVALUE*));
memset(&source_278, 0, sizeof(struct buffer*));
memset(&p_279, 0, sizeof(char*));
memset(&head_280, 0, sizeof(char*));
memset(&sline_281, 0, sizeof(int));
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&node_282, 0, sizeof(struct sNode*));
right_value252 = (void*)0;
memset(&come_value_283, 0, sizeof(struct CVALUE*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&param_name_284, 0, sizeof(char*));
memset(&come_value_285, 0, sizeof(struct CVALUE*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value264 = (void*)0;
memset(&current_stack_frame_node_290, 0, sizeof(struct sNode*));
right_value265 = (void*)0;
memset(&come_value_291, 0, sizeof(struct CVALUE*));
right_value266 = (void*)0;
right_value267 = (void*)0;
memset(&method_block2_292, 0, sizeof(struct buffer*));
right_value268 = (void*)0;
memset(&method_block_type_293, 0, sizeof(struct sType*));
right_value269 = (void*)0;
memset(&class_name_294, 0, sizeof(char*));
memset(&current_stack_frame_struct_298, 0, sizeof(struct sClass*));
right_value270 = (void*)0;
memset(&result_type_299, 0, sizeof(struct sType*));
memset(&param_types_300, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_301, 0, sizeof(struct list$1charph*));
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&all_alhabet_sname_302, 0, sizeof(struct buffer*));
memset(&p_303, 0, sizeof(char*));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
memset(&i_304, 0, sizeof(int));
memset(&o2_saved_305, 0, sizeof(struct list$1sTypeph*));
memset(&it_306, 0, sizeof(struct sType*));
memset(&param_type_307, 0, sizeof(struct sType*));
right_value276 = (void*)0;
memset(&param_name_308, 0, sizeof(char*));
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&param_name_309, 0, sizeof(char*));
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&param_name_310, 0, sizeof(char*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&source3_311, 0, sizeof(struct buffer*));
memset(&p_312, 0, sizeof(char*));
memset(&head_313, 0, sizeof(char*));
memset(&sline_314, 0, sizeof(int));
right_value286 = (void*)0;
memset(&node_315, 0, sizeof(struct sNode*));
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&method_block_name_316, 0, sizeof(char*));
right_value289 = (void*)0;
memset(&come_value2_317, 0, sizeof(struct CVALUE*));
memset(&fun2_318, 0, sizeof(struct sFun*));
memset(&method_block_type2_319, 0, sizeof(struct sType*));
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&buf_320, 0, sizeof(struct buffer*));
memset(&j_321, 0, sizeof(int));
memset(&o2_saved_322, 0, sizeof(struct list$1CVALUEph*));
memset(&it_323, 0, sizeof(struct CVALUE*));
right_value294 = (void*)0;
memset(&come_value2_324, 0, sizeof(struct CVALUE*));
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&var_name_325, 0, sizeof(char*));
right_value300 = (void*)0;
memset(&result_type_326, 0, sizeof(struct sType*));
right_value301 = (void*)0;
memset(&result_type2_327, 0, sizeof(struct sType*));
memset(&result_type3_328, 0, sizeof(struct sType*));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
    fun_name_136=self->fun_name;
    params_137=self->params;
    obj_138=self->obj;
    method_block_139=self->method_block;
    method_block_sline_140=self->method_block_sline;
    method_generics_types_141=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj59=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value156=list$1sTypephp_clone(self->method_generics_types))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional224=!node_compile(obj_138,info),    _if_conditional224) {
        __result112__ = (_Bool)0;
        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result112__;
    }
    obj_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    obj_type_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(obj_value_142->type))));
    come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    klass_144=obj_type_143->mClass;
    calling_dynamic_method_145=(_Bool)0;
    lambda_type_146=((void*)0);
    for(    o2_saved_147=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_144->mFields)),it_150=list$1tuple2$2charphsTypephph_begin((o2_saved_147));    !list$1tuple2$2charphsTypephph_end((o2_saved_147));    it_150=list$1tuple2$2charphsTypephph_next((o2_saved_147))    ){
        multiple_assign_var1=it_150;
        field_name_153=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_154=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional229=string_operator_equals(field_name_153,fun_name_136)&&string_operator_equals(field_type_154->mClass->mName,"lambda"),        _if_conditional229) {
            calling_dynamic_method_145=(_Bool)1;
            lambda_type_146=field_type_154;
            field_name_153 = come_decrement_ref_count2(field_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_153 = come_decrement_ref_count2(field_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(calling_dynamic_method_145) {
        result_type_155=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(lambda_type_146->mResultType->v1))));
        come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_155->mStatic=(_Bool)0;
        come_params_158=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value161=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value160=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 265, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        i_159=0;
        for(        o2_saved_160=(params_137),it_163=list$1tuple2$2charphsNodephph_begin((o2_saved_160));        !list$1tuple2$2charphsNodephph_end((o2_saved_160));        it_163=list$1tuple2$2charphsNodephph_next((o2_saved_160))        ){
            multiple_assign_var2=it_163;
            label_166=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            node_167=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
            if(_if_conditional235=i_159==0,            _if_conditional235) {
                list$1CVALUEph_push_back(come_params_158,(struct CVALUE*)come_increment_ref_count(obj_value_142));
                i_159++;
            }
            else {
                if(_if_conditional236=!node_compile(node_167,info),                _if_conditional236) {
                    __result128__ = (_Bool)0;
                    label_166 = come_decrement_ref_count2(label_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_167) { node_167 = come_decrement_ref_count2(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,result_type_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result128__;
                }
                come_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                check_assign_type(((char*)(right_value165=xsprintf("\%s param num \%s is assinged to",((char*)(right_value163=charp_to_string(fun_name_136))),((char*)(right_value164=int_to_string(i_159)))))),list$1sTypephp_operator_load_element(lambda_type_146->mParamTypes,i_159-1),come_value_168->type,come_value_168,(_Bool)0,(_Bool)1,info);
                right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional239=list$1sTypephp_operator_load_element(lambda_type_146->mParamTypes,i_159-1)->mHeap&&come_value_168->type->mHeap,                _if_conditional239) {
                    std_move(list$1sTypephp_operator_load_element(lambda_type_146->mParamTypes,i_159-1),come_value_168->type,come_value_168,info);
                }
                list$1CVALUEph_push_back(come_params_158,(struct CVALUE*)come_increment_ref_count(come_value_168));
                i_159++;
                dec_stack_ptr(1,info);
                come_call_finalizer2(CVALUE_finalize,come_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            label_166 = come_decrement_ref_count2(label_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_167) { node_167 = come_decrement_ref_count2(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_172=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value167=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value166=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 295, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_172,((char*)(right_value168=xsprintf("%s->%s",obj_value_142->c_value,fun_name_136))));
        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_172,"(");
        j_173=0;
        for(        o2_saved_174=(struct list$1CVALUEph*)come_increment_ref_count((come_params_158)),it_177=list$1CVALUEph_begin((o2_saved_174));        !list$1CVALUEph_end((o2_saved_174));        it_177=list$1CVALUEph_next((o2_saved_174))        ){
            if(_if_conditional244=j_173==0,            _if_conditional244) {
                __dec_obj60=it_177->c_value;
                it_177->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%s->_protocol_obj",it_177->c_value))));
                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            buffer_append_str(buf_172,it_177->c_value);
            if(_if_conditional245=j_173!=list$1CVALUEph_length(come_params_158)-1,            _if_conditional245) {
                buffer_append_str(buf_172,",");
            }
            j_173++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_172,")");
        come_value2_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value170=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 315, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj61=come_value2_180->c_value;
        come_value2_180->c_value=(char*)come_increment_ref_count(((char*)(right_value171=buffer_to_string(buf_172))));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type2_181=(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=solve_generics(result_type_155,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(result_type2_181->mHeap) {
            __dec_obj62=come_value2_180->c_value;
            come_value2_180->c_value=(char*)come_increment_ref_count(((char*)(right_value174=append_object_to_right_values(((char*)(right_value173=buffer_to_string(buf_172))),(struct sType*)come_increment_ref_count(result_type2_181),info))));
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj63=come_value2_180->type;
        come_value2_180->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(result_type2_181))));
        come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value2_180->type->mStatic=(_Bool)0;
        come_value2_180->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value2_180->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_180));
        come_call_finalizer2(sType_finalize,result_type_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_name_182=(char*)come_increment_ref_count(((char*)(right_value178=string_to_string(((char*)(right_value177=make_generics_function(obj_type_143,(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string(fun_name_136)))),info,(_Bool)1)))))));
        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_183=((void*)0);
        for(        i_184=128;        i_184>=1;        i_184--        ){
            new_fun_name_185=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s_v%d",generics_fun_name_182,i_184))));
            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_183=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_185);
            if(_if_conditional266=fun_183!=((void*)0),            _if_conditional266) {
                __dec_obj64=generics_fun_name_182;
                generics_fun_name_182=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string(new_fun_name_185))));
                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_185 = come_decrement_ref_count2(new_fun_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_185 = come_decrement_ref_count2(new_fun_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional267=fun_183==((void*)0),        _if_conditional267) {
            obj_array_type_189=obj_type_143->mOriginalLoadVarType->v1;
            if(_if_conditional268=obj_array_type_189&&list$1sNodeph_length(obj_array_type_189->mArrayNum)>0,            _if_conditional268) {
                array_method_name_190=(char*)come_increment_ref_count(((char*)(right_value181=create_method_name(obj_array_type_189,(_Bool)0,fun_name_136,info,(_Bool)0))));
                right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fun_183=map$2charphsFunph_at(info->funcs,array_method_name_190,((void*)0));
                if(fun_183) {
                    __dec_obj65=generics_fun_name_182;
                    generics_fun_name_182=(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(array_method_name_190))));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    generics_fun_name_193=(char*)come_increment_ref_count(((char*)(right_value185=string_to_string(((char*)(right_value184=make_generics_function(obj_array_type_189,(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string(fun_name_136)))),info,(_Bool)0)))))));
                    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    fun_194=((void*)0);
                    for(                    i_195=128;                    i_195>=1;                    i_195--                    ){
                        new_fun_name_196=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s_v%d",generics_fun_name_193,i_195))));
                        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        fun_194=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_196);
                        if(_if_conditional274=fun_194!=((void*)0),                        _if_conditional274) {
                            __dec_obj66=generics_fun_name_193;
                            generics_fun_name_193=(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(new_fun_name_196))));
                            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            new_fun_name_196 = come_decrement_ref_count2(new_fun_name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        new_fun_name_196 = come_decrement_ref_count2(new_fun_name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    fun_194=map$2charphsFunph_at(info->funcs,generics_fun_name_193,((void*)0));
                    if(_if_conditional275=fun_194==((void*)0),                    _if_conditional275) {
                        __dec_obj67=generics_fun_name_193;
                        generics_fun_name_193=(char*)come_increment_ref_count(((char*)(right_value189=create_method_name(obj_type_143,(_Bool)0,((char*)(right_value188=__builtin_string(fun_name_136))),info,(_Bool)1))));
                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        fun_194=map$2charphsFunph_at(info->funcs,generics_fun_name_193,((void*)0));
                        if(_if_conditional276=fun_194==((void*)0),                        _if_conditional276) {
                            err_msg(info,"function not found(%s) at method(%s)(Z)\n",generics_fun_name_193,info->come_fun->mName);
                            __result147__ = (_Bool)1;
                            generics_fun_name_193 = come_decrement_ref_count2(generics_fun_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            array_method_name_190 = come_decrement_ref_count2(array_method_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result147__;
                        }
                    }
                    generics_fun_name_193 = come_decrement_ref_count2(generics_fun_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                array_method_name_190 = come_decrement_ref_count2(array_method_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                fun_183=map$2charphsFunph_at(info->funcs,generics_fun_name_182,((void*)0));
                if(_if_conditional277=fun_183==((void*)0),                _if_conditional277) {
                    __dec_obj68=generics_fun_name_182;
                    generics_fun_name_182=(char*)come_increment_ref_count(((char*)(right_value191=create_method_name(obj_type_143,(_Bool)0,((char*)(right_value190=__builtin_string(fun_name_136))),info,(_Bool)1))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    fun_183=map$2charphsFunph_at(info->funcs,generics_fun_name_182,((void*)0));
                    if(_if_conditional278=fun_183==((void*)0),                    _if_conditional278) {
                        err_msg(info,"function not found(%s) at method(%s)(Z)\n",generics_fun_name_182,info->come_fun->mName);
                        __result148__ = (_Bool)1;
                        generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result148__;
                    }
                }
            }
        }
        if(_if_conditional279=list$1sTypeph_length(fun_183->mParamTypes)==0,        _if_conditional279) {
            err_msg(info,"Method require function parametor");
            __result150__ = (_Bool)1;
            generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result150__;
        }
        result_type_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(fun_183->mResultType))));
        come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_197->mStatic=(_Bool)0;
        result_type2_198=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=solve_generics(result_type_197,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_types_199=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value195=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value194=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 416, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_200=(struct list$1sTypeph*)come_increment_ref_count((fun_183->mParamTypes)),it_203=list$1sTypeph_begin((o2_saved_200));        !list$1sTypeph_end((o2_saved_200));        it_203=list$1sTypeph_next((o2_saved_200))        ){
            if(_if_conditional284=it_203==((void*)0),            _if_conditional284) {
                list$1sTypeph_push_back(param_types_199,it_203);
            }
            else {
                it2_209=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=solve_generics(it_203,info->generics_type,info))));
                come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1sTypeph_push_back(param_types_199,(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=sType_clone(it2_209)))));
                come_call_finalizer2(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,it2_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_params_210=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value202=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value201=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 428, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        label_params_214=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value209=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value203=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "20method.c", 430, "map$2charphCVALUEph"))))))));
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        i_215=0;
        for(        o2_saved_216=(params_137),it_217=list$1tuple2$2charphsNodephph_begin((o2_saved_216));        !list$1tuple2$2charphsNodephph_end((o2_saved_216));        it_217=list$1tuple2$2charphsNodephph_next((o2_saved_216))        ){
            multiple_assign_var3=it_217;
            label_218=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_219=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            if(_if_conditional291=i_215==0,            _if_conditional291) {
                check_assign_type(((char*)(right_value212=xsprintf("\%s param num \%s is assinged to",((char*)(right_value210=charp_to_string(fun_name_136))),((char*)(right_value211=int_to_string(i_215)))))),list$1sTypephp_operator_load_element(param_types_199,i_215),obj_value_142->type,obj_value_142,(_Bool)0,(_Bool)1,info);
                right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional292=list$1sTypephp_operator_load_element(param_types_199,i_215)->mHeap&&obj_value_142->type->mHeap,                _if_conditional292) {
                    std_move(list$1sTypephp_operator_load_element(param_types_199,i_215),obj_value_142->type,obj_value_142,info);
                }
                else {
                    if(_if_conditional293=list$1sTypephp_operator_load_element(param_types_199,i_215)->mHeap&&!obj_value_142->type->mHeap&&!gComeGC,                    _if_conditional293) {
                        err_msg(info,"require heap parametor(%s)",list$1charphp_operator_load_element(fun_183->mParamNames,i_215));
                        exit(2);
                    }
                }
                list$1CVALUEph_push_back(come_params_210,(struct CVALUE*)come_increment_ref_count(obj_value_142));
                i_215++;
            }
            else {
                if(_if_conditional296=!node_compile(node_219,info),                _if_conditional296) {
                    __result163__ = (_Bool)0;
                    label_218 = come_decrement_ref_count2(label_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_219) { node_219 = come_decrement_ref_count2(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,result_type2_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,param_types_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result163__;
                }
                come_value_223=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional297=label_218!=((void*)0),                _if_conditional297) {
                    n_224=0;
                    for(                    o2_saved_225=(struct list$1charph*)come_increment_ref_count((fun_183->mParamNames)),it_228=list$1charph_begin((o2_saved_225));                    !list$1charph_end((o2_saved_225));                    it_228=list$1charph_next((o2_saved_225))                    ){
                        if(_if_conditional302=string_operator_equals(label_218,it_228),                        _if_conditional302) {
                            break;
                        }
                        n_224++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(_if_conditional303=list$1sTypephp_operator_load_element(param_types_199,n_224),                    _if_conditional303) {
                        check_assign_type(((char*)(right_value216=xsprintf("\%s param num \%s is assinged to",((char*)(right_value214=charp_to_string(fun_name_136))),((char*)(right_value215=int_to_string(i_215)))))),list$1sTypephp_operator_load_element(param_types_199,n_224),come_value_223->type,come_value_223,(_Bool)0,(_Bool)1,info);
                        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional304=list$1sTypephp_operator_load_element(param_types_199,n_224)&&list$1sTypephp_operator_load_element(param_types_199,n_224)->mHeap&&come_value_223->type->mHeap,                    _if_conditional304) {
                        std_move(list$1sTypephp_operator_load_element(param_types_199,n_224),come_value_223->type,come_value_223,info);
                    }
                }
                else {
                    if(_if_conditional305=list$1sTypephp_operator_load_element(param_types_199,i_215),                    _if_conditional305) {
                        check_assign_type(((char*)(right_value219=xsprintf("\%s param num \%s is assinged to",((char*)(right_value217=charp_to_string(fun_name_136))),((char*)(right_value218=int_to_string(i_215)))))),list$1sTypephp_operator_load_element(param_types_199,i_215),come_value_223->type,come_value_223,(_Bool)0,(_Bool)1,info);
                        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional306=list$1sTypephp_operator_load_element(param_types_199,i_215)&&list$1sTypephp_operator_load_element(param_types_199,i_215)->mHeap&&come_value_223->type->mHeap,                    _if_conditional306) {
                        std_move(list$1sTypephp_operator_load_element(param_types_199,i_215),come_value_223->type,come_value_223,info);
                    }
                }
                if(_if_conditional307=label_218==((void*)0),                _if_conditional307) {
                    list$1CVALUEph_push_back(come_params_210,(struct CVALUE*)come_increment_ref_count(come_value_223));
                    i_215++;
                }
                else {
                    map$2charphCVALUEph_insert(label_params_214,(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(label_218)))),(struct CVALUE*)come_increment_ref_count(come_value_223));
                    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                dec_stack_ptr(1,info);
                come_call_finalizer2(CVALUE_finalize,come_value_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            label_218 = come_decrement_ref_count2(label_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_219) { node_219 = come_decrement_ref_count2(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        obj_array_type_252=obj_type_143->mOriginalLoadVarType->v1;
        if(_if_conditional330=obj_array_type_252&&list$1sNodeph_length(obj_array_type_252->mArrayNum)>0,        _if_conditional330) {
            if(_if_conditional331=charp_operator_equals(fun_name_136,"to_pointer"),            _if_conditional331) {
                buf_253=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value225=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value224=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 497, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                i_254=0;
                for(                o2_saved_255=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_252->mArrayNum)),it_258=list$1sNodeph_begin((o2_saved_255));                !list$1sNodeph_end((o2_saved_255));                it_258=list$1sNodeph_next((o2_saved_255))                ){
                    if(_if_conditional336=!node_compile(it_258,info),                    _if_conditional336) {
                        err_msg(info,"invalid array num");
                        exit(1);
                    }
                    come_value_261=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value226=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    dec_stack_ptr(1,info);
                    buffer_append_str(buf_253,((char*)(right_value227=xsprintf("%s",come_value_261->c_value))));
                    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional337=i_254!=list$1sNodeph_length(obj_array_type_252->mArrayNum)-1,                    _if_conditional337) {
                        buffer_append_str(buf_253,"*");
                    }
                    i_254++;
                    come_call_finalizer2(CVALUE_finalize,come_value_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_value_262=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 516, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj73=come_value_262->c_value;
                come_value_262->c_value=(char*)come_increment_ref_count(((char*)(right_value229=buffer_to_string(buf_253))));
                __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_value_262->var=((void*)0);
                __dec_obj74=come_value_262->type;
                come_value_262->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value230=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 520, "sType")))),"long",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1CVALUEph_push_back(come_params_210,(struct CVALUE*)come_increment_ref_count(come_value_262));
                list$1tuple2$2charphsNodephph_push_back(params_137,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value237=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value236=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 523, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value235=xsprintf("len")))),((void*)0))))));
                right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphvoidpp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,buf_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional341=charp_operator_equals(fun_name_136,"to_buffer"),                _if_conditional341) {
                    buf_266=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value239=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value238=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 526, "buffer"))))))));
                    come_call_finalizer2(buffer_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    i_267=0;
                    for(                    o2_saved_268=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_252->mArrayNum)),it_269=list$1sNodeph_begin((o2_saved_268));                    !list$1sNodeph_end((o2_saved_268));                    it_269=list$1sNodeph_next((o2_saved_268))                    ){
                        if(_if_conditional342=!node_compile(it_269,info),                        _if_conditional342) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        come_value_270=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=get_value_from_stack(-1,info))));
                        come_call_finalizer2(CVALUE_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        dec_stack_ptr(1,info);
                        buffer_append_str(buf_266,((char*)(right_value241=xsprintf("%s",come_value_270->c_value))));
                        right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional343=i_267!=list$1sNodeph_length(obj_array_type_252->mArrayNum)-1,                        _if_conditional343) {
                            buffer_append_str(buf_266,"*");
                        }
                        i_267++;
                        come_call_finalizer2(CVALUE_finalize,come_value_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_value_271=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 545, "CVALUE"))));
                    come_call_finalizer2(CVALUE_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    __dec_obj79=come_value_271->c_value;
                    come_value_271->c_value=(char*)come_increment_ref_count(((char*)(right_value243=buffer_to_string(buf_266))));
                    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_value_271->var=((void*)0);
                    __dec_obj80=come_value_271->type;
                    come_value_271->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value245=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value244=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 549, "sType")))),"long",(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    list$1CVALUEph_push_back(come_params_210,(struct CVALUE*)come_increment_ref_count(come_value_271));
                    list$1tuple2$2charphsNodephph_push_back(params_137,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value248=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value247=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 552, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("len")))),((void*)0))))));
                    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple2$2charphvoidpp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,buf_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(_if_conditional344=list$1tuple2$2charphsNodephph_length(params_137)<list$1sTypeph_length(fun_183->mParamTypes)+(method_block_139?-2:0),        _if_conditional344) {
            for(            ;            i_215<list$1sTypeph_length(fun_183->mParamTypes)+(method_block_139?-2:0);            i_215++            ){
                default_param_272=(char*)come_increment_ref_count(((char*)(right_value249=string_clone(list$1charphp_operator_load_element(fun_183->mParamDefaultParametors,i_215)))));
                right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                param_name_273=list$1charphp_operator_load_element(fun_183->mParamNames,i_215);
                come_value_277=map$2charphCVALUEphp_operator_load_element(label_params_214,param_name_273);
                if(_if_conditional349=default_param_272&&string_operator_not_equals(default_param_272,""),                _if_conditional349) {
                    source_278=(struct buffer*)come_increment_ref_count(info->source);
                    p_279=info->p;
                    head_280=info->head;
                    sline_281=info->sline;
                    __dec_obj81=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value250=string_to_buffer(default_param_272))));
                    come_call_finalizer2(buffer_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value251=expression_v13(info))));
                    if(right_value251) { right_value251 = come_decrement_ref_count2(right_value251, ((struct sNode*)right_value251)->finalize, ((struct sNode*)right_value251)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional350=!node_compile(node_282,info),                    _if_conditional350) {
                        __result197__ = (_Bool)0;
                        come_call_finalizer2(buffer_finalize,source_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_272 = come_decrement_ref_count2(default_param_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result197__;
                    }
                    __dec_obj82=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_278);
                    come_call_finalizer2(buffer_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    info->p=p_279;
                    info->head=head_280;
                    info->sline=sline_281;
                    come_value_283=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional351=list$1sTypephp_operator_load_element(param_types_199,i_215),                    _if_conditional351) {
                        check_assign_type(((char*)(right_value255=xsprintf("\%s param num \%s is assinged to",((char*)(right_value253=charp_to_string(fun_name_136))),((char*)(right_value254=int_to_string(i_215)))))),list$1sTypephp_operator_load_element(param_types_199,i_215),come_value_283->type,come_value_283,(_Bool)0,(_Bool)1,info);
                        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional352=list$1sTypephp_operator_load_element(param_types_199,i_215)&&list$1sTypephp_operator_load_element(param_types_199,i_215)->mHeap&&come_value_283->type->mHeap,                    _if_conditional352) {
                        std_move(list$1sTypephp_operator_load_element(param_types_199,i_215),come_value_283->type,come_value_283,info);
                    }
                    list$1CVALUEph_push_back(come_params_210,(struct CVALUE*)come_increment_ref_count(come_value_283));
                    dec_stack_ptr(1,info);
                    come_call_finalizer2(buffer_finalize,source_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(come_value_277) {
                        list$1CVALUEph_push_back(come_params_210,((void*)0));
                    }
                    else {
                        err_msg(info,"require parametor(%s)",fun_183->mName);
                        __result198__ = (_Bool)0;
                        default_param_272 = come_decrement_ref_count2(default_param_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result198__;
                    }
                }
                default_param_272 = come_decrement_ref_count2(default_param_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(_if_conditional354=map$2charphCVALUEph_length(label_params_214)>0,        _if_conditional354) {
            for(            i_215=0;            i_215<list$1charph_length(fun_183->mParamNames)+(method_block_139?-2:0);            i_215++            ){
                param_name_284=list$1charphp_operator_load_element(fun_183->mParamNames,i_215);
                come_value_285=map$2charphCVALUEphp_operator_load_element(label_params_214,param_name_284);
                if(come_value_285) {
                    list$1CVALUEph_replace(come_params_210,i_215,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=CVALUE_clone(come_value_285)))));
                    come_call_finalizer2(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
        }
        if(method_block_139) {
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 623, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value261=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value260=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 623, "sCurrentNode")))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sCurrentNode_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value264=_inf_value1)));
            come_call_finalizer2(sCurrentNode_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sCurrentNode_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional368=!node_compile(current_stack_frame_node_290,info),            _if_conditional368) {
                __result207__ = (_Bool)0;
                if(current_stack_frame_node_290) { current_stack_frame_node_290 = come_decrement_ref_count2(current_stack_frame_node_290, ((struct sNode*)current_stack_frame_node_290)->finalize, ((struct sNode*)current_stack_frame_node_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result207__;
            }
            come_value_291=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value265=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1CVALUEph_push_back(come_params_210,(struct CVALUE*)come_increment_ref_count(come_value_291));
            dec_stack_ptr(1,info);
            method_block2_292=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value267=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value266=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 633, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            method_block_type_293=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_clone(list$1sTypephp_operator_load_element(fun_183->mParamTypes,-1)))));
            come_call_finalizer2(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            class_name_294=(char*)come_increment_ref_count(((char*)(right_value269=xsprintf("__current_stack%d__",info->current_stack_num))));
            right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1sTypephp_operator_load_element(method_block_type_293->mParamTypes,0)->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_294);
            current_stack_frame_struct_298=info->current_stack_frame_struct;
            info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_294);
            info->num_method_block++;
            if(_if_conditional373=string_operator_not_equals(method_block_type_293->mClass->mName,"lambda"),            _if_conditional373) {
                err_msg(info,"This function does not have method block(%s)",fun_name_136);
                __result212__ = (_Bool)0;
                if(current_stack_frame_node_290) { current_stack_frame_node_290 = come_decrement_ref_count2(current_stack_frame_node_290, ((struct sNode*)current_stack_frame_node_290)->finalize, ((struct sNode*)current_stack_frame_node_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_294 = come_decrement_ref_count2(class_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result212__;
            }
            result_type_299=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_clone(method_block_type_293->mResultType->v1))));
            come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type_299->mStatic=(_Bool)0;
            param_types_300=method_block_type_293->mParamTypes;
            param_names_301=method_block_type_293->mParamNames;
            all_alhabet_sname_302=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value272=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value271=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 654, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            {
                p_303=info->sname;
                while(_while_condtional33=*p_303,                _while_condtional33) {
                    if(_if_conditional374=xisalnum(*p_303),                    _if_conditional374) {
                        buffer_append_char(all_alhabet_sname_302,*p_303++);
                    }
                    else {
                        p_303++;
                    }
                }
            }
            buffer_append_str(method_block2_292,((char*)(right_value275=xsprintf("%s method_block%d_%s(",((char*)(right_value273=make_type_name_string(result_type_299,(_Bool)0,(_Bool)0,(_Bool)0,info))),info->num_method_block,((char*)(right_value274=buffer_to_string(all_alhabet_sname_302)))))));
            right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_304=0;
            for(            o2_saved_305=(param_types_300),it_306=list$1sTypeph_begin((o2_saved_305));            !list$1sTypeph_end((o2_saved_305));            it_306=list$1sTypeph_next((o2_saved_305))            ){
                param_type_307=it_306;
                if(_if_conditional375=i_304==0,                _if_conditional375) {
                    param_name_308=(char*)come_increment_ref_count(((char*)(right_value276=xsprintf("parent"))));
                    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(method_block2_292,((char*)(right_value278=xsprintf("%s",((char*)(right_value277=make_define_var(param_type_307,param_name_308,(_Bool)0,info)))))));
                    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    param_name_308 = come_decrement_ref_count2(param_name_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional376=i_304==1,                    _if_conditional376) {
                        param_name_309=(char*)come_increment_ref_count(((char*)(right_value279=xsprintf("it"))));
                        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        buffer_append_str(method_block2_292,((char*)(right_value281=xsprintf("%s",((char*)(right_value280=make_define_var(param_type_307,param_name_309,(_Bool)0,info)))))));
                        right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_309 = come_decrement_ref_count2(param_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        param_name_310=(char*)come_increment_ref_count(((char*)(right_value282=xsprintf("it%d",i_304))));
                        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        buffer_append_str(method_block2_292,((char*)(right_value284=xsprintf("%s",((char*)(right_value283=make_define_var(param_type_307,param_name_310,(_Bool)0,info)))))));
                        right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_310 = come_decrement_ref_count2(param_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional377=i_304!=list$1sTypeph_length(param_types_300)-1,                _if_conditional377) {
                    buffer_append_str(method_block2_292,",");
                }
                i_304++;
            }
            buffer_append_str(method_block2_292,")\n");
            buffer_append_str(method_block2_292,((char*)(right_value285=buffer_to_string(method_block_139))));
            right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            source3_311=(struct buffer*)come_increment_ref_count(info->source);
            p_312=info->p;
            head_313=info->head;
            sline_314=info->sline;
            __dec_obj87=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_292);
            come_call_finalizer2(buffer_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            info->p=info->source->buf;
            info->head=info->source->buf;
            info->sline=method_block_sline_140;
            node_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=parse_function(info))));
            if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional378=!node_compile(node_315,info),            _if_conditional378) {
                __result213__ = (_Bool)0;
                if(current_stack_frame_node_290) { current_stack_frame_node_290 = come_decrement_ref_count2(current_stack_frame_node_290, ((struct sNode*)current_stack_frame_node_290)->finalize, ((struct sNode*)current_stack_frame_node_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_294 = come_decrement_ref_count2(class_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,all_alhabet_sname_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,source3_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result213__;
            }
            method_block_name_316=(char*)come_increment_ref_count(((char*)(right_value288=xsprintf("method_block%d_%s",info->num_method_block,((char*)(right_value287=buffer_to_string(all_alhabet_sname_302)))))));
            right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_value2_317=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value289=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 718, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            fun2_318=map$2charphsFunph_at(info->funcs,method_block_name_316,((void*)0));
            if(_if_conditional379=fun2_318==((void*)0),            _if_conditional379) {
                err_msg(info,"method block function not found(%s)",method_block_name_316);
                __result214__ = (_Bool)1;
                if(current_stack_frame_node_290) { current_stack_frame_node_290 = come_decrement_ref_count2(current_stack_frame_node_290, ((struct sNode*)current_stack_frame_node_290)->finalize, ((struct sNode*)current_stack_frame_node_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_294 = come_decrement_ref_count2(class_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,all_alhabet_sname_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,source3_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
                method_block_name_316 = come_decrement_ref_count2(method_block_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value2_317, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result214__;
            }
            method_block_type2_319=fun2_318->mLambdaType;
            __dec_obj88=come_value2_317->c_value;
            come_value2_317->c_value=(char*)come_increment_ref_count(((char*)(right_value290=xsprintf("(void*)%s",method_block_name_316))));
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj89=come_value2_317->type;
            come_value2_317->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value291=sType_clone(method_block_type2_319))));
            come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value2_317->var=((void*)0);
            list$1CVALUEph_push_back(come_params_210,(struct CVALUE*)come_increment_ref_count(come_value2_317));
            __dec_obj90=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_311);
            come_call_finalizer2(buffer_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            info->p=p_312;
            info->head=head_313;
            info->sline=sline_314;
            info->current_stack_frame_struct=current_stack_frame_struct_298;
            if(current_stack_frame_node_290) { current_stack_frame_node_290 = come_decrement_ref_count2(current_stack_frame_node_290, ((struct sNode*)current_stack_frame_node_290)->finalize, ((struct sNode*)current_stack_frame_node_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,method_block2_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,method_block_type_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            class_name_294 = come_decrement_ref_count2(class_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,all_alhabet_sname_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source3_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_316 = come_decrement_ref_count2(method_block_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value2_317, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buf_320=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value293=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value292=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 743, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_320,generics_fun_name_182);
        buffer_append_str(buf_320,"(");
        j_321=0;
        for(        o2_saved_322=(struct list$1CVALUEph*)come_increment_ref_count((come_params_210)),it_323=list$1CVALUEph_begin((o2_saved_322));        !list$1CVALUEph_end((o2_saved_322));        it_323=list$1CVALUEph_next((o2_saved_322))        ){
            buffer_append_str(buf_320,it_323->c_value);
            if(_if_conditional380=j_321!=list$1CVALUEph_length(come_params_210)-1,            _if_conditional380) {
                buffer_append_str(buf_320,",");
            }
            j_321++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_322, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_320,")");
        come_value2_324=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value294=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 761, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj91=come_value2_324->c_value;
        come_value2_324->c_value=(char*)come_increment_ref_count(((char*)(right_value295=buffer_to_string(buf_320))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj92=come_value2_324->type;
        come_value2_324->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=sType_clone(result_type2_198))));
        come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value2_324->type->mStatic=(_Bool)0;
        come_value2_324->var=((void*)0);
        if(result_type2_198->mHeap) {
            __dec_obj93=come_value2_324->c_value;
            come_value2_324->c_value=(char*)come_increment_ref_count(((char*)(right_value297=append_object_to_right_values(come_value2_324->c_value,(struct sType*)come_increment_ref_count(result_type2_198),info))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj94=come_value2_324->c_value;
        come_value2_324->c_value=(char*)come_increment_ref_count(((char*)(right_value298=append_stackframe(come_value2_324->c_value,come_value2_324->type,info))));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value2_324->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_324));
        if(method_block_139) {
            var_name_325=(char*)come_increment_ref_count(((char*)(right_value299=xsprintf("__current_stack%d__",info->num_current_stack))));
            right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            result_type_326=(struct sType*)come_increment_ref_count(((struct sType*)(right_value300=sType_clone(info->come_fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type2_327=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=solve_generics(result_type_326,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type3_328=result_type2_327->mNoSolvedGenericsType->v1;
            if(result_type2_327->mNoSolvedGenericsType->v1) {
                result_type3_328=result_type2_327->mNoSolvedGenericsType->v1;
            }
            else {
                result_type3_328=result_type2_327;
            }
            if(info->in_loop) {
                if(_if_conditional385=string_operator_equals(result_type3_328->mClass->mName,"void")&&result_type3_328->mPointerNum==0,                _if_conditional385) {
                    add_come_last_code3(info,((char*)(right_value305=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 4)\n                        {\n                            return;\n                        }\n",((char*)(right_value302=string_to_string(var_name_325))),((char*)(right_value303=string_to_string(var_name_325))),((char*)(right_value304=string_to_string(var_name_325)))))));
                    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    add_come_last_code3(info,((char*)(right_value312=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 3)\n                        {\n                            return (\%s)\%s.__method_block_return_value__;\n                        }\n",((char*)(right_value306=string_to_string(var_name_325))),((char*)(right_value307=string_to_string(var_name_325))),((char*)(right_value308=string_to_string(var_name_325))),((char*)(right_value310=string_to_string(((char*)(right_value309=make_type_name_string(result_type2_327,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value311=string_to_string(var_name_325)))))));
                    right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                if(_if_conditional386=string_operator_equals(result_type3_328->mClass->mName,"void")&&result_type3_328->mPointerNum==0,                _if_conditional386) {
                    add_come_last_code3(info,((char*)(right_value314=xsprintf("                    if(\%s.__method_block_result_kind__ == 4)\n                    {\n                        return;\n                    }\n",((char*)(right_value313=string_to_string(var_name_325)))))));
                    right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    add_come_last_code3(info,((char*)(right_value319=xsprintf("                    if(\%s.__method_block_result_kind__ == 3)\n                    {\n                        return (\%s)\%s.__method_block_return_value__;\n                    }\n",((char*)(right_value315=string_to_string(var_name_325))),((char*)(right_value317=string_to_string(((char*)(right_value316=make_type_name_string(result_type2_327,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value318=string_to_string(var_name_325)))))));
                    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            var_name_325 = come_decrement_ref_count2(var_name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_326, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_327, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        generics_fun_name_182 = come_decrement_ref_count2(generics_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_324, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,info->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj95=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_141);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result215__ = (_Bool)1;
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result215__;
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional225;
struct tuple2$2charphsTypeph* result_148;
struct tuple2$2charphsTypeph* __result113__;
_Bool _if_conditional226;
struct tuple2$2charphsTypeph* __result114__;
struct tuple2$2charphsTypeph* result_149;
struct tuple2$2charphsTypeph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_148, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_149, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional225=self==((void*)0),        _if_conditional225) {
            memset(&result_148,0,sizeof(struct tuple2$2charphsTypeph*));
            __result113__ = __result_obj__ = result_148;
            return __result113__;
        }
        self->it=self->head;
        if(self->it) {
            __result114__ = __result_obj__ = self->it->item;
            return __result114__;
        }
        memset(&result_149,0,sizeof(struct tuple2$2charphsTypeph*));
        __result115__ = __result_obj__ = result_149;
        return __result115__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
        __result116__ = self==((void*)0)||self->it==((void*)0);
        return __result116__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional227;
struct tuple2$2charphsTypeph* result_151;
struct tuple2$2charphsTypeph* __result117__;
_Bool _if_conditional228;
struct tuple2$2charphsTypeph* __result118__;
struct tuple2$2charphsTypeph* result_152;
struct tuple2$2charphsTypeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_151, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_152, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional227=self==((void*)0)||self->it==((void*)0),        _if_conditional227) {
            memset(&result_151,0,sizeof(struct tuple2$2charphsTypeph*));
            __result117__ = __result_obj__ = result_151;
            return __result117__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result118__ = __result_obj__ = self->it->item;
            return __result118__;
        }
        memset(&result_152,0,sizeof(struct tuple2$2charphsTypeph*));
        __result119__ = __result_obj__ = result_152;
        return __result119__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result120__ = __result_obj__ = self;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result120__;
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
                it_156=self->head;
                while(_while_condtional22=it_156!=((void*)0),                _while_condtional22) {
                    prev_it_157=it_156;
                    it_156=it_156->next;
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional231;
struct tuple2$2charphsNodeph* result_161;
struct tuple2$2charphsNodeph* __result121__;
_Bool _if_conditional232;
struct tuple2$2charphsNodeph* __result122__;
struct tuple2$2charphsNodeph* result_162;
struct tuple2$2charphsNodeph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_161, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_162, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional231=self==((void*)0),            _if_conditional231) {
                memset(&result_161,0,sizeof(struct tuple2$2charphsNodeph*));
                __result121__ = __result_obj__ = result_161;
                return __result121__;
            }
            self->it=self->head;
            if(self->it) {
                __result122__ = __result_obj__ = self->it->item;
                return __result122__;
            }
            memset(&result_162,0,sizeof(struct tuple2$2charphsNodeph*));
            __result123__ = __result_obj__ = result_162;
            return __result123__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
            __result124__ = self==((void*)0)||self->it==((void*)0);
            return __result124__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional233;
struct tuple2$2charphsNodeph* result_164;
struct tuple2$2charphsNodeph* __result125__;
_Bool _if_conditional234;
struct tuple2$2charphsNodeph* __result126__;
struct tuple2$2charphsNodeph* result_165;
struct tuple2$2charphsNodeph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_165, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional233=self==((void*)0)||self->it==((void*)0),            _if_conditional233) {
                memset(&result_164,0,sizeof(struct tuple2$2charphsNodeph*));
                __result125__ = __result_obj__ = result_164;
                return __result125__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result126__ = __result_obj__ = self->it->item;
                return __result126__;
            }
            memset(&result_165,0,sizeof(struct tuple2$2charphsNodeph*));
            __result127__ = __result_obj__ = result_165;
            return __result127__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional237;
struct list_item$1sTypeph* it_169;
int i_170;
_Bool _while_condtional23;
_Bool _if_conditional238;
struct sType* __result129__;
struct sType* default_value_171;
struct sType* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_169, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_170, 0, sizeof(int));
memset(&default_value_171, 0, sizeof(struct sType*));
                    if(_if_conditional237=position<0,                    _if_conditional237) {
                        position+=self->len;
                    }
                    it_169=self->head;
                    i_170=0;
                    while(_while_condtional23=it_169!=((void*)0),                    _while_condtional23) {
                        if(_if_conditional238=position==i_170,                        _if_conditional238) {
                            __result129__ = __result_obj__ = it_169->item;
                            return __result129__;
                        }
                        it_169=it_169->next;
                        i_170++;
                    }
                    memset(&default_value_171,0,sizeof(struct sType*));
                    __result130__ = __result_obj__ = default_value_171;
                    come_call_finalizer2(sType_finalize,default_value_171, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result130__;
                    come_call_finalizer2(sType_finalize,default_value_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional240;
struct CVALUE* result_175;
struct CVALUE* __result131__;
_Bool _if_conditional241;
struct CVALUE* __result132__;
struct CVALUE* result_176;
struct CVALUE* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_175, 0, sizeof(struct CVALUE*));
memset(&result_176, 0, sizeof(struct CVALUE*));
            if(_if_conditional240=self==((void*)0),            _if_conditional240) {
                memset(&result_175,0,sizeof(struct CVALUE*));
                __result131__ = __result_obj__ = result_175;
                return __result131__;
            }
            self->it=self->head;
            if(self->it) {
                __result132__ = __result_obj__ = self->it->item;
                return __result132__;
            }
            memset(&result_176,0,sizeof(struct CVALUE*));
            __result133__ = __result_obj__ = result_176;
            return __result133__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
            __result134__ = self==((void*)0)||self->it==((void*)0);
            return __result134__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional242;
struct CVALUE* result_178;
struct CVALUE* __result135__;
_Bool _if_conditional243;
struct CVALUE* __result136__;
struct CVALUE* result_179;
struct CVALUE* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_178, 0, sizeof(struct CVALUE*));
memset(&result_179, 0, sizeof(struct CVALUE*));
            if(_if_conditional242=self==((void*)0)||self->it==((void*)0),            _if_conditional242) {
                memset(&result_178,0,sizeof(struct CVALUE*));
                __result135__ = __result_obj__ = result_178;
                return __result135__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result136__ = __result_obj__ = self->it->item;
                return __result136__;
            }
            memset(&result_179,0,sizeof(struct CVALUE*));
            __result137__ = __result_obj__ = result_179;
            return __result137__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
                __result138__ = self->len;
                return __result138__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_186;
unsigned int hash_187;
unsigned int it_188;
_Bool _while_condtional24;
_Bool _if_conditional247;
_Bool _if_conditional248;
struct sFun* __result139__;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct sFun* __result140__;
struct sFun* __result141__;
struct sFun* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_186, 0, sizeof(struct sFun*));
memset(&hash_187, 0, sizeof(unsigned int));
memset(&it_188, 0, sizeof(unsigned int));
                memset(&default_value_186,0,sizeof(struct sFun*));
                hash_187=string_get_hash_key(((char*)key))%self->size;
                it_188=hash_187;
                while(_while_condtional24=(_Bool)1,                _while_condtional24) {
                    if(_if_conditional247=self->item_existance[it_188],                    _if_conditional247) {
                        if(_if_conditional248=string_equals(self->keys[it_188],key),                        _if_conditional248) {
                            __result139__ = __result_obj__ = self->items[it_188];
                            come_call_finalizer2(sFun_finalize,default_value_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result139__;
                        }
                        it_188++;
                        if(_if_conditional264=it_188>=self->size,                        _if_conditional264) {
                            it_188=0;
                        }
                        else {
                            if(_if_conditional265=it_188==hash_187,                            _if_conditional265) {
                                __result140__ = __result_obj__ = default_value_186;
                                come_call_finalizer2(sFun_finalize,default_value_186, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result140__;
                            }
                        }
                    }
                    else {
                        __result141__ = __result_obj__ = default_value_186;
                        come_call_finalizer2(sFun_finalize,default_value_186, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result141__;
                    }
                }
                __result142__ = __result_obj__ = default_value_186;
                come_call_finalizer2(sFun_finalize,default_value_186, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result142__;
                come_call_finalizer2(sFun_finalize,default_value_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional249=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional249) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional250=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional250) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional251=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional251) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional252=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional252) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional253=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional253) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional254=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional254) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional255=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional255) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional258=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional258) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional259=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional259) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional260=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional260) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional261=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional261) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional262=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional262) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional263=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional263) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional256;
_Bool _if_conditional257;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional256=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional256) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional257=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional257) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_191;
unsigned int it_192;
_Bool _while_condtional25;
_Bool _if_conditional269;
_Bool _if_conditional270;
struct sFun* __result143__;
_Bool _if_conditional271;
_Bool _if_conditional272;
struct sFun* __result144__;
struct sFun* __result145__;
struct sFun* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_191, 0, sizeof(unsigned int));
memset(&it_192, 0, sizeof(unsigned int));
                    hash_191=string_get_hash_key(((char*)key))%self->size;
                    it_192=hash_191;
                    while(_while_condtional25=(_Bool)1,                    _while_condtional25) {
                        if(_if_conditional269=self->item_existance[it_192],                        _if_conditional269) {
                            if(_if_conditional270=string_equals(self->keys[it_192],key),                            _if_conditional270) {
                                __result143__ = __result_obj__ = self->items[it_192];
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result143__;
                            }
                            it_192++;
                            if(_if_conditional271=it_192>=self->size,                            _if_conditional271) {
                                it_192=0;
                            }
                            else {
                                if(_if_conditional272=it_192==hash_191,                                _if_conditional272) {
                                    __result144__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result144__;
                                }
                            }
                        }
                        else {
                            __result145__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result145__;
                        }
                    }
                    __result146__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result146__;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
            __result149__ = self->len;
            return __result149__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional280;
struct sType* result_201;
struct sType* __result151__;
_Bool _if_conditional281;
struct sType* __result152__;
struct sType* result_202;
struct sType* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_201, 0, sizeof(struct sType*));
memset(&result_202, 0, sizeof(struct sType*));
            if(_if_conditional280=self==((void*)0),            _if_conditional280) {
                memset(&result_201,0,sizeof(struct sType*));
                __result151__ = __result_obj__ = result_201;
                return __result151__;
            }
            self->it=self->head;
            if(self->it) {
                __result152__ = __result_obj__ = self->it->item;
                return __result152__;
            }
            memset(&result_202,0,sizeof(struct sType*));
            __result153__ = __result_obj__ = result_202;
            return __result153__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
            __result154__ = self==((void*)0)||self->it==((void*)0);
            return __result154__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional282;
struct sType* result_204;
struct sType* __result155__;
_Bool _if_conditional283;
struct sType* __result156__;
struct sType* result_205;
struct sType* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_204, 0, sizeof(struct sType*));
memset(&result_205, 0, sizeof(struct sType*));
            if(_if_conditional282=self==((void*)0)||self->it==((void*)0),            _if_conditional282) {
                memset(&result_204,0,sizeof(struct sType*));
                __result155__ = __result_obj__ = result_204;
                return __result155__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result156__ = __result_obj__ = self->it->item;
                return __result156__;
            }
            memset(&result_205,0,sizeof(struct sType*));
            __result157__ = __result_obj__ = result_205;
            return __result157__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional285;
void* right_value196;
struct list_item$1sTypeph* litem_206;
struct sType* __dec_obj69;
_Bool _if_conditional286;
void* right_value197;
struct list_item$1sTypeph* litem_207;
struct sType* __dec_obj70;
void* right_value198;
struct list_item$1sTypeph* litem_208;
struct sType* __dec_obj71;
struct list$1sTypeph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
memset(&litem_206, 0, sizeof(struct list_item$1sTypeph*));
right_value197 = (void*)0;
memset(&litem_207, 0, sizeof(struct list_item$1sTypeph*));
right_value198 = (void*)0;
memset(&litem_208, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional285=self->len==0,                    _if_conditional285) {
                        litem_206=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value196=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_206->prev=((void*)0);
                        litem_206->next=((void*)0);
                        __dec_obj69=litem_206->item;
                        litem_206->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_206;
                        self->head=litem_206;
                    }
                    else {
                        if(_if_conditional286=self->len==1,                        _if_conditional286) {
                            litem_207=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value197=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_207->prev=self->head;
                            litem_207->next=((void*)0);
                            __dec_obj70=litem_207->item;
                            litem_207->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_207;
                            self->head->next=litem_207;
                        }
                        else {
                            litem_208=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value198=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_208->prev=self->tail;
                            litem_208->next=((void*)0);
                            __dec_obj71=litem_208->item;
                            litem_208->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_208;
                            self->tail=litem_208;
                        }
                    }
                    self->len++;
                    __result158__ = __result_obj__ = self;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result158__;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self){
void* __result_obj__;
void* right_value204;
void* right_value205;
void* right_value206;
int i_211;
void* right_value207;
void* right_value208;
struct list$1charp* __dec_obj72;
struct map$2charphCVALUEph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&i_211, 0, sizeof(int));
right_value207 = (void*)0;
right_value208 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value204=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1084, "char*%"))));
            right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value205=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1085, "CVALUE*%"))));
            come_call_finalizer2(CVALUE_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value206=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1086, "bool"))));
            right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_211=0;            i_211<1024;            i_211++            ){
                self->item_existance[i_211]=(_Bool)0;
            }
            self->size=1024;
            self->len=0;
            __dec_obj72=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value208=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value207=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1096, "list$1charp"))))))));
            come_call_finalizer2(list$1charp_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charpp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charpp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result160__ = __result_obj__ = self;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result160__;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result159__ = __result_obj__ = self;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result159__;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
void* __result_obj__;
int i_212;
_Bool _if_conditional287;
_Bool _if_conditional288;
int i_213;
_Bool _if_conditional289;
_Bool _if_conditional290;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_212, 0, sizeof(int));
memset(&i_213, 0, sizeof(int));
                for(                i_212=0;                i_212<self->size;                i_212++                ){
                    if(_if_conditional287=self->item_existance[i_212],                    _if_conditional287) {
                        if(_if_conditional288=1,                        _if_conditional288) {
                            come_call_finalizer2(CVALUE_finalize,self->items[i_212], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_213=0;                i_213<self->size;                i_213++                ){
                    if(_if_conditional289=self->item_existance[i_213],                    _if_conditional289) {
                        if(_if_conditional290=1,                        _if_conditional290) {
                            self->keys[i_213] = come_decrement_ref_count2(self->keys[i_213], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional294;
struct list_item$1charph* it_220;
int i_221;
_Bool _while_condtional26;
_Bool _if_conditional295;
char* __result161__;
char* default_value_222;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_220, 0, sizeof(struct list_item$1charph*));
memset(&i_221, 0, sizeof(int));
memset(&default_value_222, 0, sizeof(char*));
                            if(_if_conditional294=position<0,                            _if_conditional294) {
                                position+=self->len;
                            }
                            it_220=self->head;
                            i_221=0;
                            while(_while_condtional26=it_220!=((void*)0),                            _while_condtional26) {
                                if(_if_conditional295=position==i_221,                                _if_conditional295) {
                                    __result161__ = __result_obj__ = it_220->item;
                                    return __result161__;
                                }
                                it_220=it_220->next;
                                i_221++;
                            }
                            memset(&default_value_222,0,sizeof(char*));
                            __result162__ = __result_obj__ = default_value_222;
                            default_value_222 = come_decrement_ref_count2(default_value_222, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result162__;
                            default_value_222 = come_decrement_ref_count2(default_value_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional298;
char* result_226;
char* __result164__;
_Bool _if_conditional299;
char* __result165__;
char* result_227;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_226, 0, sizeof(char*));
memset(&result_227, 0, sizeof(char*));
                        if(_if_conditional298=self==((void*)0),                        _if_conditional298) {
                            memset(&result_226,0,sizeof(char*));
                            __result164__ = __result_obj__ = result_226;
                            return __result164__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result165__ = __result_obj__ = self->it->item;
                            return __result165__;
                        }
                        memset(&result_227,0,sizeof(char*));
                        __result166__ = __result_obj__ = result_227;
                        return __result166__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result167__ = self==((void*)0)||self->it==((void*)0);
                        return __result167__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional300;
char* result_229;
char* __result168__;
_Bool _if_conditional301;
char* __result169__;
char* result_230;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_229, 0, sizeof(char*));
memset(&result_230, 0, sizeof(char*));
                        if(_if_conditional300=self==((void*)0)||self->it==((void*)0),                        _if_conditional300) {
                            memset(&result_229,0,sizeof(char*));
                            __result168__ = __result_obj__ = result_229;
                            return __result168__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result169__ = __result_obj__ = self->it->item;
                            return __result169__;
                        }
                        memset(&result_230,0,sizeof(char*));
                        __result170__ = __result_obj__ = result_230;
                        return __result170__;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional308;
unsigned int hash_248;
unsigned int it_249;
_Bool _while_condtional29;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool same_key_exist_250;
char* it2_251;
_Bool _if_conditional328;
_Bool _if_conditional329;
struct map$2charphCVALUEph* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_248, 0, sizeof(unsigned int));
memset(&it_249, 0, sizeof(unsigned int));
memset(&same_key_exist_250, 0, sizeof(_Bool));
memset(&it2_251, 0, sizeof(char*));
                        if(_if_conditional308=self->len*10>=self->size,                        _if_conditional308) {
                            map$2charphCVALUEph_rehash(self);
                        }
                        hash_248=string_get_hash_key(key)%self->size;
                        it_249=hash_248;
                        while(_while_condtional29=(_Bool)1,                        _while_condtional29) {
                            if(_if_conditional320=self->item_existance[it_249],                            _if_conditional320) {
                                if(_if_conditional321=string_equals(self->keys[it_249],key),                                _if_conditional321) {
                                    if(_if_conditional322=1,                                    _if_conditional322) {
                                        list$1charp_remove(self->key_list,self->keys[it_249]);
                                        self->keys[it_249] = come_decrement_ref_count2(self->keys[it_249], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        self->keys[it_249]=(char*)come_increment_ref_count(key);
                                    }
                                    else {
                                        list$1charp_remove(self->key_list,self->keys[it_249]);
                                        self->keys[it_249]=key;
                                    }
                                    if(_if_conditional323=1,                                    _if_conditional323) {
                                        come_call_finalizer2(CVALUE_finalize,self->items[it_249], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->items[it_249]=(struct CVALUE*)come_increment_ref_count(item);
                                    }
                                    else {
                                        self->items[it_249]=item;
                                    }
                                    break;
                                }
                                it_249++;
                                if(_if_conditional324=it_249>=self->size,                                _if_conditional324) {
                                    it_249=0;
                                }
                                else {
                                    if(_if_conditional325=it_249==hash_248,                                    _if_conditional325) {
                                        printf("unexpected error in map.insert\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                self->item_existance[it_249]=(_Bool)1;
                                if(_if_conditional326=1,                                _if_conditional326) {
                                    self->keys[it_249]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    self->keys[it_249]=key;
                                }
                                if(_if_conditional327=1,                                _if_conditional327) {
                                    self->items[it_249]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_249]=item;
                                }
                                self->len++;
                                break;
                            }
                        }
                        same_key_exist_250=(_Bool)0;
                        for(                        it2_251=list$1charp_begin(self->key_list);                        !list$1charp_end(self->key_list);                        it2_251=list$1charp_next(self->key_list)                        ){
                            if(_if_conditional328=string_equals(it2_251,key),                            _if_conditional328) {
                                puts("SAME KEY");
                                same_key_exist_250=(_Bool)1;
                            }
                        }
                        if(_if_conditional329=!same_key_exist_250,                        _if_conditional329) {
                            list$1charp_push_back(self->key_list,key);
                        }
                        __result182__ = __result_obj__ = self;
                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result182__;
                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self){
void* __result_obj__;
int size_231;
void* right_value220;
char** keys_232;
void* right_value221;
struct CVALUE** items_233;
void* right_value222;
_Bool* item_existance_234;
int len_235;
char* it_238;
struct CVALUE* default_value_241;
struct CVALUE* it2_244;
unsigned int hash_245;
int n_246;
_Bool _while_condtional28;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
struct CVALUE* default_value_247;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_231, 0, sizeof(int));
right_value220 = (void*)0;
memset(&keys_232, 0, sizeof(char**));
right_value221 = (void*)0;
memset(&items_233, 0, sizeof(struct CVALUE**));
right_value222 = (void*)0;
memset(&item_existance_234, 0, sizeof(_Bool*));
memset(&len_235, 0, sizeof(int));
memset(&it_238, 0, sizeof(char*));
memset(&default_value_241, 0, sizeof(struct CVALUE*));
memset(&it2_244, 0, sizeof(struct CVALUE*));
memset(&hash_245, 0, sizeof(unsigned int));
memset(&n_246, 0, sizeof(int));
memset(&default_value_247, 0, sizeof(struct CVALUE*));
                                size_231=self->size*10;
                                keys_232=(char**)come_increment_ref_count(((char**)(right_value220=(char**)come_calloc(1, sizeof(char*)*(1*(size_231)), "./comelang2.h", 1335, "char*%"))));
                                right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                items_233=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value221=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_231)), "./comelang2.h", 1336, "CVALUE*%"))));
                                come_call_finalizer2(CVALUE_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                item_existance_234=(_Bool*)come_increment_ref_count(((_Bool*)(right_value222=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_231)), "./comelang2.h", 1337, "bool"))));
                                right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                len_235=0;
                                for(                                it_238=map$2charphCVALUEph_begin(self);                                !map$2charphCVALUEph_end(self);                                it_238=map$2charphCVALUEph_next(self)                                ){
                                    memset(&default_value_241,0,sizeof(struct CVALUE*));
                                    it2_244=map$2charphCVALUEph_at(self,it_238,default_value_241);
                                    hash_245=string_get_hash_key(it_238)%size_231;
                                    n_246=hash_245;
                                    while(_while_condtional28=(_Bool)1,                                    _while_condtional28) {
                                        if(_if_conditional317=item_existance_234[n_246],                                        _if_conditional317) {
                                            n_246++;
                                            if(_if_conditional318=n_246>=size_231,                                            _if_conditional318) {
                                                n_246=0;
                                            }
                                            else {
                                                if(_if_conditional319=n_246==hash_245,                                                _if_conditional319) {
                                                    printf("unexpected error in map.rehash(1)\n");
                                                    stackframe();
                                                    exit(2);
                                                }
                                            }
                                        }
                                        else {
                                            item_existance_234[n_246]=(_Bool)1;
                                            keys_232[n_246]=it_238;
                                            items_233[n_246]=map$2charphCVALUEph_at(self,it_238,default_value_247);
                                            len_235++;
                                            break;
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_free((char*)self->keys);
                                self->keys=keys_232;
                                self->items=items_233;
                                self->item_existance=item_existance_234;
                                self->size=size_231;
                                self->len=len_235;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional309;
char* result_236;
char* __result171__;
_Bool _if_conditional310;
char* __result172__;
char* result_237;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_236, 0, sizeof(char*));
memset(&result_237, 0, sizeof(char*));
                                    if(_if_conditional309=self==((void*)0),                                    _if_conditional309) {
                                        memset(&result_236,0,sizeof(char*));
                                        __result171__ = __result_obj__ = result_236;
                                        return __result171__;
                                    }
                                    self->key_list->it=self->key_list->head;
                                    if(self->key_list->it) {
                                        __result172__ = __result_obj__ = self->key_list->it->item;
                                        return __result172__;
                                    }
                                    memset(&result_237,0,sizeof(char*));
                                    __result173__ = __result_obj__ = result_237;
                                    return __result173__;
}

static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result174__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                    return __result174__;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional311;
char* result_239;
char* __result175__;
_Bool _if_conditional312;
char* __result176__;
char* result_240;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_239, 0, sizeof(char*));
memset(&result_240, 0, sizeof(char*));
                                    if(_if_conditional311=self==((void*)0)||self->key_list->it==((void*)0),                                    _if_conditional311) {
                                        memset(&result_239,0,sizeof(char*));
                                        __result175__ = __result_obj__ = result_239;
                                        return __result175__;
                                    }
                                    self->key_list->it=self->key_list->it->next;
                                    if(self->key_list->it) {
                                        __result176__ = __result_obj__ = self->key_list->it->item;
                                        return __result176__;
                                    }
                                    memset(&result_240,0,sizeof(char*));
                                    __result177__ = __result_obj__ = result_240;
                                    return __result177__;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
unsigned int hash_242;
unsigned int it_243;
_Bool _while_condtional27;
_Bool _if_conditional313;
_Bool _if_conditional314;
struct CVALUE* __result178__;
_Bool _if_conditional315;
_Bool _if_conditional316;
struct CVALUE* __result179__;
struct CVALUE* __result180__;
struct CVALUE* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_242, 0, sizeof(unsigned int));
memset(&it_243, 0, sizeof(unsigned int));
                                        hash_242=string_get_hash_key(((char*)key))%self->size;
                                        it_243=hash_242;
                                        while(_while_condtional27=(_Bool)1,                                        _while_condtional27) {
                                            if(_if_conditional313=self->item_existance[it_243],                                            _if_conditional313) {
                                                if(_if_conditional314=string_equals(self->keys[it_243],key),                                                _if_conditional314) {
                                                    __result178__ = __result_obj__ = self->items[it_243];
                                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result178__;
                                                }
                                                it_243++;
                                                if(_if_conditional315=it_243>=self->size,                                                _if_conditional315) {
                                                    it_243=0;
                                                }
                                                else {
                                                    if(_if_conditional316=it_243==hash_242,                                                    _if_conditional316) {
                                                        __result179__ = __result_obj__ = default_value;
                                                        come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result179__;
                                                    }
                                                }
                                            }
                                            else {
                                                __result180__ = __result_obj__ = default_value;
                                                come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result180__;
                                            }
                                        }
                                        __result181__ = __result_obj__ = default_value;
                                        come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result181__;
                                        come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional332;
struct sNode* result_256;
struct sNode* __result183__;
_Bool _if_conditional333;
struct sNode* __result184__;
struct sNode* result_257;
struct sNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_256, 0, sizeof(struct sNode*));
memset(&result_257, 0, sizeof(struct sNode*));
                    if(_if_conditional332=self==((void*)0),                    _if_conditional332) {
                        memset(&result_256,0,sizeof(struct sNode*));
                        __result183__ = __result_obj__ = result_256;
                        return __result183__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result184__ = __result_obj__ = self->it->item;
                        return __result184__;
                    }
                    memset(&result_257,0,sizeof(struct sNode*));
                    __result185__ = __result_obj__ = result_257;
                    return __result185__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result186__ = self==((void*)0)||self->it==((void*)0);
                    return __result186__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional334;
struct sNode* result_259;
struct sNode* __result187__;
_Bool _if_conditional335;
struct sNode* __result188__;
struct sNode* result_260;
struct sNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_259, 0, sizeof(struct sNode*));
memset(&result_260, 0, sizeof(struct sNode*));
                    if(_if_conditional334=self==((void*)0)||self->it==((void*)0),                    _if_conditional334) {
                        memset(&result_259,0,sizeof(struct sNode*));
                        __result187__ = __result_obj__ = result_259;
                        return __result187__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result188__ = __result_obj__ = self->it->item;
                        return __result188__;
                    }
                    memset(&result_260,0,sizeof(struct sNode*));
                    __result189__ = __result_obj__ = result_260;
                    return __result189__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional338;
void* right_value232;
struct list_item$1tuple2$2charphsNodephph* litem_263;
struct tuple2$2charphsNodeph* __dec_obj75;
_Bool _if_conditional339;
void* right_value233;
struct list_item$1tuple2$2charphsNodephph* litem_264;
struct tuple2$2charphsNodeph* __dec_obj76;
void* right_value234;
struct list_item$1tuple2$2charphsNodephph* litem_265;
struct tuple2$2charphsNodeph* __dec_obj77;
struct list$1tuple2$2charphsNodephph* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
memset(&litem_263, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value233 = (void*)0;
memset(&litem_264, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value234 = (void*)0;
memset(&litem_265, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                    if(_if_conditional338=self->len==0,                    _if_conditional338) {
                        litem_263=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value232=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_263->prev=((void*)0);
                        litem_263->next=((void*)0);
                        __dec_obj75=litem_263->item;
                        litem_263->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_263;
                        self->head=litem_263;
                    }
                    else {
                        if(_if_conditional339=self->len==1,                        _if_conditional339) {
                            litem_264=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value233=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_264->prev=self->head;
                            litem_264->next=((void*)0);
                            __dec_obj76=litem_264->item;
                            litem_264->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_264;
                            self->head->next=litem_264;
                        }
                        else {
                            litem_265=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value234=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_265->prev=self->tail;
                            litem_265->next=((void*)0);
                            __dec_obj77=litem_265->item;
                            litem_265->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_265;
                            self->tail=litem_265;
                        }
                    }
                    self->len++;
                    __result190__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result190__;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__;
char* __dec_obj78;
struct tuple2$2charphvoidp* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj78=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->v2=v2;
                    __result191__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2charphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result191__;
                    come_call_finalizer2(tuple2$2charphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
void* __result_obj__;
_Bool _if_conditional340;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional340=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional340) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
int __result192__;
memset(&__result_obj__, 0, sizeof(void*));
            __result192__ = self->len;
            return __result192__;
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
struct CVALUE* default_value_274;
unsigned int hash_275;
unsigned int it_276;
_Bool _while_condtional30;
_Bool _if_conditional345;
_Bool _if_conditional346;
struct CVALUE* __result193__;
_Bool _if_conditional347;
_Bool _if_conditional348;
struct CVALUE* __result194__;
struct CVALUE* __result195__;
struct CVALUE* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_274, 0, sizeof(struct CVALUE*));
memset(&hash_275, 0, sizeof(unsigned int));
memset(&it_276, 0, sizeof(unsigned int));
                    memset(&default_value_274,0,sizeof(struct CVALUE*));
                    hash_275=string_get_hash_key(((char*)key))%self->size;
                    it_276=hash_275;
                    while(_while_condtional30=(_Bool)1,                    _while_condtional30) {
                        if(_if_conditional345=self->item_existance[it_276],                        _if_conditional345) {
                            if(_if_conditional346=string_equals(self->keys[it_276],key),                            _if_conditional346) {
                                __result193__ = __result_obj__ = self->items[it_276];
                                come_call_finalizer2(CVALUE_finalize,default_value_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result193__;
                            }
                            it_276++;
                            if(_if_conditional347=it_276>=self->size,                            _if_conditional347) {
                                it_276=0;
                            }
                            else {
                                if(_if_conditional348=it_276==hash_275,                                _if_conditional348) {
                                    __result194__ = __result_obj__ = default_value_274;
                                    come_call_finalizer2(CVALUE_finalize,default_value_274, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result194__;
                                }
                            }
                        }
                        else {
                            __result195__ = __result_obj__ = default_value_274;
                            come_call_finalizer2(CVALUE_finalize,default_value_274, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result195__;
                        }
                    }
                    __result196__ = __result_obj__ = default_value_274;
                    come_call_finalizer2(CVALUE_finalize,default_value_274, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result196__;
                    come_call_finalizer2(CVALUE_finalize,default_value_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self){
void* __result_obj__;
int __result199__;
memset(&__result_obj__, 0, sizeof(void*));
            __result199__ = self->len;
            return __result199__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result200__;
memset(&__result_obj__, 0, sizeof(void*));
                __result200__ = self->len;
                return __result200__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional356;
_Bool _if_conditional357;
struct list$1CVALUEph* __result201__;
struct list_item$1CVALUEph* it_286;
int i_287;
_Bool _while_condtional31;
_Bool _if_conditional358;
struct CVALUE* __dec_obj83;
struct list$1CVALUEph* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_286, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_287, 0, sizeof(int));
                        if(_if_conditional356=position<0,                        _if_conditional356) {
                            position+=self->len;
                        }
                        if(_if_conditional357=position>=self->len,                        _if_conditional357) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result201__ = __result_obj__ = self;
                            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result201__;
                        }
                        it_286=self->head;
                        i_287=0;
                        while(_while_condtional31=it_286!=((void*)0),                        _while_condtional31) {
                            if(_if_conditional358=position==i_287,                            _if_conditional358) {
                                __dec_obj83=it_286->item;
                                it_286->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer2(CVALUE_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                break;
                            }
                            it_286=it_286->next;
                            i_287++;
                        }
                        __result202__ = __result_obj__ = self;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result202__;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional359;
struct CVALUE* __result203__;
void* right_value256;
struct CVALUE* result_288;
_Bool _if_conditional360;
void* right_value257;
char* __dec_obj84;
_Bool _if_conditional361;
void* right_value258;
struct sType* __dec_obj85;
_Bool _if_conditional362;
struct CVALUE* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
memset(&result_288, 0, sizeof(struct CVALUE*));
right_value257 = (void*)0;
right_value258 = (void*)0;
                        if(_if_conditional359=self==(void*)0,                        _if_conditional359) {
                            __result203__ = __result_obj__ = (void*)0;
                            return __result203__;
                        }
                        result_288=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional360=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional360) {
                            __dec_obj84=result_288->c_value;
                            result_288->c_value=(char*)come_increment_ref_count(((char*)(right_value257=string_clone(self->c_value))));
                            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional361=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional361) {
                            __dec_obj85=result_288->type;
                            result_288->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(self->type))));
                            come_call_finalizer2(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional362=self!=((void*)0),                        _if_conditional362) {
                            result_288->var=self->var;
                        }
                        __result204__ = __result_obj__ = result_288;
                        come_call_finalizer2(CVALUE_finalize,result_288, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result204__;
                        come_call_finalizer2(CVALUE_finalize,result_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_295;
unsigned int hash_296;
unsigned int it_297;
_Bool _while_condtional32;
_Bool _if_conditional369;
_Bool _if_conditional370;
struct sClass* __result208__;
_Bool _if_conditional371;
_Bool _if_conditional372;
struct sClass* __result209__;
struct sClass* __result210__;
struct sClass* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_295, 0, sizeof(struct sClass*));
memset(&hash_296, 0, sizeof(unsigned int));
memset(&it_297, 0, sizeof(unsigned int));
                memset(&default_value_295,0,sizeof(struct sClass*));
                hash_296=string_get_hash_key(((char*)key))%self->size;
                it_297=hash_296;
                while(_while_condtional32=(_Bool)1,                _while_condtional32) {
                    if(_if_conditional369=self->item_existance[it_297],                    _if_conditional369) {
                        if(_if_conditional370=string_equals(self->keys[it_297],key),                        _if_conditional370) {
                            __result208__ = __result_obj__ = self->items[it_297];
                            come_call_finalizer2(sClass_finalize,default_value_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result208__;
                        }
                        it_297++;
                        if(_if_conditional371=it_297>=self->size,                        _if_conditional371) {
                            it_297=0;
                        }
                        else {
                            if(_if_conditional372=it_297==hash_296,                            _if_conditional372) {
                                __result209__ = __result_obj__ = default_value_295;
                                come_call_finalizer2(sClass_finalize,default_value_295, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result209__;
                            }
                        }
                    }
                    else {
                        __result210__ = __result_obj__ = default_value_295;
                        come_call_finalizer2(sClass_finalize,default_value_295, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result210__;
                    }
                }
                __result211__ = __result_obj__ = default_value_295;
                come_call_finalizer2(sClass_finalize,default_value_295, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result211__;
                come_call_finalizer2(sClass_finalize,default_value_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value320;
void* right_value321;
struct list$1tuple2$2charphsNodephph* params_329;
void* right_value322;
void* right_value323;
void* right_value324;
_Bool _if_conditional387;
_Bool parse_method_generics_type_330;
char* p_331;
int sline_332;
_Bool _if_conditional388;
_Bool _if_conditional389;
void* right_value325;
char* word_333;
_Bool _if_conditional390;
void* right_value326;
void* right_value327;
struct list$1sTypeph* method_generics_types_334;
_Bool _if_conditional391;
_Bool _while_condtional34;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
void* right_value328;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_335;
char* name_336;
_Bool err_337;
_Bool _if_conditional397;
void* right_value329;
_Bool _if_conditional398;
_Bool _while_condtional35;
_Bool _if_conditional399;
char* p_338;
int sline_339;
_Bool err_flag_340;
void* right_value330;
char* label_341;
_Bool _if_conditional400;
void* right_value331;
char* __dec_obj98;
_Bool _if_conditional401;
char* __dec_obj99;
_Bool no_comma_342;
void* right_value332;
struct sNode* node_343;
void* right_value333;
struct sNode* __dec_obj100;
void* right_value334;
void* right_value335;
_Bool _if_conditional402;
_Bool _if_conditional403;
struct buffer* method_block_344;
int method_block_sline_345;
_Bool _if_conditional404;
char* head_346;
void* right_value336;
char* tail_347;
void* right_value337;
void* right_value338;
struct buffer* __dec_obj101;
int len_348;
void* right_value339;
char* mem_349;
_Bool _if_conditional405;
void* right_value340;
void* right_value341;
void* right_value342;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value350;
struct sNode* node_351;
struct sNode* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&params_329, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&parse_method_generics_type_330, 0, sizeof(_Bool));
memset(&p_331, 0, sizeof(char*));
memset(&sline_332, 0, sizeof(int));
right_value325 = (void*)0;
memset(&word_333, 0, sizeof(char*));
right_value326 = (void*)0;
right_value327 = (void*)0;
memset(&method_generics_types_334, 0, sizeof(struct list$1sTypeph*));
right_value328 = (void*)0;
memset(&type_335, 0, sizeof(struct sType*));
memset(&name_336, 0, sizeof(char*));
memset(&err_337, 0, sizeof(_Bool));
memset(&type_335, 0, sizeof(struct sType*));
memset(&name_336, 0, sizeof(char*));
memset(&err_337, 0, sizeof(_Bool));
right_value329 = (void*)0;
memset(&p_338, 0, sizeof(char*));
memset(&sline_339, 0, sizeof(int));
memset(&err_flag_340, 0, sizeof(_Bool));
right_value330 = (void*)0;
memset(&label_341, 0, sizeof(char*));
right_value331 = (void*)0;
memset(&no_comma_342, 0, sizeof(_Bool));
right_value332 = (void*)0;
memset(&node_343, 0, sizeof(struct sNode*));
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&method_block_344, 0, sizeof(struct buffer*));
memset(&method_block_sline_345, 0, sizeof(int));
memset(&head_346, 0, sizeof(char*));
right_value336 = (void*)0;
memset(&tail_347, 0, sizeof(char*));
right_value337 = (void*)0;
right_value338 = (void*)0;
memset(&len_348, 0, sizeof(int));
right_value339 = (void*)0;
memset(&mem_349, 0, sizeof(char*));
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value350 = (void*)0;
memset(&node_351, 0, sizeof(struct sNode*));
    params_329=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value321=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value320=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 854, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1tuple2$2charphsNodephph_push_back(params_329,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value324=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value322=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 855, "tuple2$2charphsNodeph")))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=sNode_clone(obj)))))))));
    come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value323) { right_value323 = come_decrement_ref_count2(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional387=*info->p==45&&*(info->p+1)==62,    _if_conditional387) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_330=(_Bool)0;
    {
        p_331=info->p;
        sline_332=info->sline;
        if(_if_conditional388=*info->p==60,        _if_conditional388) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional389=xisalpha(*info->p)||*info->p==95,            _if_conditional389) {
                word_333=(char*)come_increment_ref_count(((char*)(right_value325=parse_word(info))));
                right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional390=is_type_name(word_333,info),                _if_conditional390) {
                    parse_method_generics_type_330=(_Bool)1;
                }
                word_333 = come_decrement_ref_count2(word_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_331;
        info->sline=sline_332;
    }
    method_generics_types_334=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value327=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value326=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 884, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional391=parse_method_generics_type_330&&*info->p==60,    _if_conditional391) {
        info->p++;
        skip_spaces_and_lf(info);
        while(_while_condtional34=(_Bool)1,        _while_condtional34) {
            if(_if_conditional392=*info->p==0,            _if_conditional392) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else {
                if(_if_conditional393=*info->p==62,                _if_conditional393) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(_if_conditional394=*info->p==44,                    _if_conditional394) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value328=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_335=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                        name_336=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                        err_337=multiple_assign_var4->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional397=!err_337,                        _if_conditional397) {
                            err_msg(info,"invalid method generics paramtor type");
                            exit(2);
                        }
                        list$1sTypeph_push_back(method_generics_types_334,(struct sType*)come_increment_ref_count(((struct sType*)(right_value329=sType_clone(type_335)))));
                        come_call_finalizer2(sType_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type_335, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_336 = come_decrement_ref_count2(name_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    if(_if_conditional398=*info->p!=123,    _if_conditional398) {
        expected_next_character(40,info);
        while(_while_condtional35=(_Bool)1,        _while_condtional35) {
            if(_if_conditional399=*info->p==41,            _if_conditional399) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_338=info->p;
            sline_339=info->sline;
            err_flag_340=(_Bool)0;
            label_341=(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string(""))));
            right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional400=xisalpha(*info->p)||*info->p==95,            _if_conditional400) {
                __dec_obj98=label_341;
                label_341=(char*)come_increment_ref_count(((char*)(right_value331=parse_word(info))));
                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                err_flag_340=(_Bool)1;
            }
            if(_if_conditional401=err_flag_340==(_Bool)1&&*info->p==58,            _if_conditional401) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj99=label_341;
                label_341=((void*)0);
                __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_338;
                info->sline=sline_339;
            }
            no_comma_342=info->no_comma;
            info->no_comma=(_Bool)1;
            node_343=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value332=expression_v13(info))));
            if(right_value332) { right_value332 = come_decrement_ref_count2(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj100=node_343;
            node_343=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_343),info))));
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_342;
            list$1tuple2$2charphsNodephph_push_back(params_329,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value335=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value334=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 956, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_341),(struct sNode*)come_increment_ref_count(node_343))))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional402=*info->p==44,            _if_conditional402) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional403=*info->p==41,                _if_conditional403) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    label_341 = come_decrement_ref_count2(label_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_343) { node_343 = come_decrement_ref_count2(node_343, ((struct sNode*)node_343)->finalize, ((struct sNode*)node_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_341 = come_decrement_ref_count2(label_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_343) { node_343 = come_decrement_ref_count2(node_343, ((struct sNode*)node_343)->finalize, ((struct sNode*)node_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_344=((void*)0);
    method_block_sline_345=0;
    if(_if_conditional404=*info->p==123,    _if_conditional404) {
        head_346=info->p;
        method_block_sline_345=info->sline;
        ((char*)(right_value336=skip_block(info)));
        right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_347=info->p;
        __dec_obj101=method_block_344;
        method_block_344=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value338=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value337=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 980, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        len_348=tail_347-head_346;
        mem_349=(char*)come_increment_ref_count(((char*)(right_value339=(char*)come_calloc(1, sizeof(char)*(1*(len_348+1)), "20method.c", 983, "char"))));
        right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(mem_349,head_346,len_348);
        mem_349[len_348]=0;
        buffer_append_str(method_block_344,mem_349);
        buffer_append_str(method_block_344,"\n");
        mem_349 = come_decrement_ref_count2(mem_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    if(_if_conditional405=*info->p==60,    _if_conditional405) {
    }
    parse_sharp_v5(info);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 998, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value342=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value340=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 998, "sMethodCallNode")))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_329),method_block_344,method_block_sline_345,method_generics_types_334,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sMethodCallNode_sline;
    _inf_value2->sname=(void*)sMethodCallNode_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_351=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=_inf_value2)));
    come_call_finalizer2(sMethodCallNode_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(sMethodCallNode_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value350) { right_value350 = come_decrement_ref_count2(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result219__ = __result_obj__ = node_351;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_329, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_334, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,method_block_344, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result219__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_329, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_334, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,method_block_344, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj96;
struct sNode* __dec_obj97;
struct tuple2$2charphsNodeph* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj96=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj97=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(v2);
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
        __result216__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result216__;
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional395;
_Bool _if_conditional396;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional395=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional395) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional396=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional396) {
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional406=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional406) {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional407=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional407) {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional408=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional408) {
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional409=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional409) {
            come_call_finalizer2(buffer_finalize,self->method_block, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional410=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional410) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional411=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional411) {
            come_call_finalizer2(list$1sTypephp_finalize,self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional412;
struct sMethodCallNode* __result217__;
void* right_value343;
struct sMethodCallNode* result_350;
_Bool _if_conditional413;
void* right_value344;
struct sNode* __dec_obj102;
_Bool _if_conditional414;
void* right_value345;
char* __dec_obj103;
_Bool _if_conditional415;
void* right_value346;
struct list$1tuple2$2charphsNodephph* __dec_obj104;
_Bool _if_conditional416;
void* right_value347;
struct buffer* __dec_obj105;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value348;
char* __dec_obj106;
_Bool _if_conditional419;
_Bool _if_conditional420;
void* right_value349;
struct list$1sTypeph* __dec_obj107;
struct sMethodCallNode* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
right_value343 = (void*)0;
memset(&result_350, 0, sizeof(struct sMethodCallNode*));
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
        if(_if_conditional412=self==(void*)0,        _if_conditional412) {
            __result217__ = __result_obj__ = (void*)0;
            return __result217__;
        }
        result_350=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value343=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"))));
        come_call_finalizer2(sMethodCallNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional413=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional413) {
            __dec_obj102=result_350->obj;
            result_350->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=sNode_clone(self->obj))));
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional414=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional414) {
            __dec_obj103=result_350->fun_name;
            result_350->fun_name=(char*)come_increment_ref_count(((char*)(right_value345=string_clone(self->fun_name))));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional415=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional415) {
            __dec_obj104=result_350->params;
            result_350->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value346=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional416=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional416) {
            __dec_obj105=result_350->method_block;
            result_350->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value347=buffer_clone(self->method_block))));
            come_call_finalizer2(buffer_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional417=self!=((void*)0),        _if_conditional417) {
            result_350->sline=self->sline;
        }
        if(_if_conditional418=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional418) {
            __dec_obj106=result_350->sname;
            result_350->sname=(char*)come_increment_ref_count(((char*)(right_value348=string_clone(self->sname))));
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional419=self!=((void*)0),        _if_conditional419) {
            result_350->method_block_sline=self->method_block_sline;
        }
        if(_if_conditional420=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional420) {
            __dec_obj107=result_350->method_generics_types;
            result_350->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value349=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result218__ = __result_obj__ = result_350;
        come_call_finalizer2(sMethodCallNode_finalize,result_350, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result218__;
        come_call_finalizer2(sMethodCallNode_finalize,result_350, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional421;
void* right_value351;
void* right_value352;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value355;
struct sNode* __result222__;
void* right_value356;
struct sNode* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
    if(_if_conditional421=charp_operator_equals(buf,"__current__"),    _if_conditional421) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1006, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value352=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value351=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1006, "sCurrentNode")))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sCurrentNode_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result222__ = __result_obj__ = ((struct sNode*)(right_value355=_inf_value3));
        come_call_finalizer2(sCurrentNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sCurrentNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result222__;
    }
    __result223__ = __result_obj__ = ((struct sNode*)(right_value356=string_node_v15(buf,head,head_sline,info)));
    if(right_value356) { right_value356 = come_decrement_ref_count2(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result223__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional422;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional422=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional422) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional423;
struct sCurrentNode* __result220__;
void* right_value353;
struct sCurrentNode* result_352;
_Bool _if_conditional424;
_Bool _if_conditional425;
void* right_value354;
char* __dec_obj108;
struct sCurrentNode* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value353 = (void*)0;
memset(&result_352, 0, sizeof(struct sCurrentNode*));
right_value354 = (void*)0;
            if(_if_conditional423=self==(void*)0,            _if_conditional423) {
                __result220__ = __result_obj__ = (void*)0;
                return __result220__;
            }
            result_352=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value353=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"))));
            come_call_finalizer2(sCurrentNode_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional424=self!=((void*)0),            _if_conditional424) {
                result_352->sline=self->sline;
            }
            if(_if_conditional425=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional425) {
                __dec_obj108=result_352->sname;
                result_352->sname=(char*)come_increment_ref_count(((char*)(right_value354=string_clone(self->sname))));
                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result221__ = __result_obj__ = result_352;
            come_call_finalizer2(sCurrentNode_finalize,result_352, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result221__;
            come_call_finalizer2(sCurrentNode_finalize,result_352, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value357;
struct sNode* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
right_value357 = (void*)0;
    __result224__ = __result_obj__ = ((struct sNode*)(right_value357=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result224__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

